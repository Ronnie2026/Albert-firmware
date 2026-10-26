#!/usr/bin/env python3
"""Collect all static/dynamic controls plus route call/constant evidence."""
import csv
import json
import re
from html.parser import HTMLParser
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
OUT = Path(__file__).resolve().parents[1] / "evidence"


class Node:
    def __init__(self, tag, attrs=None, parent=None, line=0):
        self.tag, self.attrs, self.parent, self.line = tag, dict(attrs or []), parent, line
        self.children = []
        self.text = ""
    def content(self):
        if self.tag in ["script", "style"]:
            return ""
        return self.text + " ".join(c.content() for c in self.children)
    def descendants(self):
        for c in self.children:
            yield c
            yield from c.descendants()
    def ancestors(self):
        p = self.parent
        while p:
            yield p
            p = p.parent


class DOM(HTMLParser):
    void = set("area base br col embed hr img input link meta param source track wbr".split())
    def __init__(self):
        super().__init__(convert_charrefs=True)
        self.root = Node("root")
        self.stack = [self.root]
    def handle_starttag(self, tag, attrs):
        n = Node(tag, attrs, self.stack[-1], self.getpos()[0])
        self.stack[-1].children.append(n)
        if tag not in self.void:
            self.stack.append(n)
    def handle_startendtag(self, tag, attrs):
        self.handle_starttag(tag, attrs)
        if tag not in self.void:
            self.stack.pop()
    def handle_endtag(self, tag):
        for i in range(len(self.stack)-1, 0, -1):
            if self.stack[i].tag == tag:
                self.stack = self.stack[:i]
                return
    def handle_data(self, value):
        self.stack[-1].text += value


def clean(s):
    return re.sub(r"\s+", " ", s).strip()


def controls(text, origin, owner=None, js_line=None):
    dom = DOM()
    dom.feed(text)
    all_nodes = list(dom.root.descendants())
    labels = {n.attrs.get("for"): clean(n.content()) for n in all_nodes if n.tag == "label" and n.attrs.get("for")}
    result = []
    for n in all_nodes:
        if n.tag not in ["input", "select", "textarea", "button", "form", "a"]:
            continue
        if n.tag == "a" and not any(k in n.attrs for k in ["onclick", "download", "href"]):
            continue
        label = labels.get(n.attrs.get("id"), "")
        if not label:
            enclosing = next((a for a in n.ancestors() if a.tag == "label"), None)
            label = clean(enclosing.content()) if enclosing else clean(n.content())
        context = []
        for a in n.ancestors():
            if any(k in a.attrs.get("class", "").split() for k in ["card", "page", "modal", "app-page", "featureHelp", "advancedSettings"]):
                title = next((t for t in a.descendants() if t.tag in ["h2", "h3"]), None)
                context.append({"tag": a.tag, "id": a.attrs.get("id", ""), "class": a.attrs.get("class", ""),
                                "title": clean(title.content()) if title else ""})
        result.append({"origin": origin, "line": n.line, "js_owner": owner, "js_line": js_line,
                       "tag": n.tag, "id": n.attrs.get("id", ""), "name": n.attrs.get("name", ""),
                       "type": n.attrs.get("type", ""), "label": label, "attrs": n.attrs, "context": context,
                       "initial_hidden": any("hidden" in a.attrs or any(c in ["hidden", "commercial-hidden"] for c in a.attrs.get("class", "").split()) or
                                             re.search(r"display\s*:\s*none", a.attrs.get("style", "")) for a in [n, *n.ancestors()]),
                       "ancestor_ids": [a.attrs["id"] for a in n.ancestors() if a.attrs.get("id")],
                       "options": [{"value": x.attrs.get("value", ""), "label": clean(x.content()), "selected": "selected" in x.attrs}
                                   for x in n.descendants() if x.tag == "option"]})
    return result, dom


def main():
    OUT.mkdir(exist_ok=True, parents=True)
    ast = json.loads((OUT / "frontend_ast.json").read_text())
    rows, dom = controls((ROOT / "recovered_web/dashboard.html").read_text(), "dashboard.html")
    login, _ = controls((ROOT / "recovered_web/login.html").read_text(), "login.html")
    rows += login
    for fragment in ast["markup"]:
        found, _ = controls(fragment["value"], "javascript_markup", fragment["owner"], fragment["line"])
        rows.extend(found)
    (OUT / "ui_controls.json").write_text(json.dumps(rows, indent=2, ensure_ascii=False) + "\n")
    with (OUT / "ui_controls.tsv").open("w") as f:
        f.write("origin\tline\tjs_owner\ttag\tid\tlabel\tcontext\tevents\n")
        for r in rows:
            context = " > ".join(c["title"] for c in r["context"] if c["title"])
            events = {k: v for k,v in r["attrs"].items() if k.startswith("on")}
            f.write("\t".join(clean(str(v)) for v in [r["origin"],r["js_line"] or r["line"],r["js_owner"] or "",r["tag"],r["id"],r["label"],context,json.dumps(events,ensure_ascii=False)])+"\n")
    css = [{"line": n.line, "css": n.text} for n in dom.root.descendants() if n.tag == "style"]
    (OUT / "css_rules.json").write_text(json.dumps(css, indent=2, ensure_ascii=False) + "\n")
    idx = {r["entry"].rsplit(":",1)[-1]: r for r in csv.DictReader((ROOT / "decompiled/functions.tsv").open(),delimiter="\t")}
    calls = list(csv.DictReader((ROOT / "decompiled/calls.tsv").open(),delimiter="\t"))
    outgoing = {}
    incoming = {}
    for r in calls:
        a,b = r["caller_entry"].rsplit(":",1)[-1],r["callee_entry"].rsplit(":",1)[-1]
        outgoing.setdefault(a,[]).append(r)
        incoming.setdefault(b,[]).append(r)
    evidence = []
    routes = json.loads((ROOT / "analysis/http_routes_recovered.json").read_text())
    for r in routes:
        a = r["handler_address"][2:]
        text = (ROOT / "decompiled" / r["handler_file"]).read_text()
        strings = re.findall(r'"(?:\\.|[^"\\])*"',text)
        strings = list(dict.fromkeys(s[1:-1] for s in strings))
        second = set()
        for c in outgoing.get(a,[]):
            for d in outgoing.get(c["callee_entry"].rsplit(":",1)[-1],[]):
                second.add(d["callee_entry"].rsplit(":",1)[-1])
        js = [{"name": f["name"],"line": f["line"],"form_keys":f["form_keys"],"dom_ids":f["dom_ids"]}
              for f in ast["functions"] if r["path"] in [p["path"] for p in f["paths"]]]
        evidence.append({**r, "js_references": js, "c_strings": strings,
                         "direct_calls": outgoing.get(a,[]), "second_level_addresses":sorted(second),
                         "body_bytes": int(idx[a]["body_bytes"]), "warning": "WARNING:" in text})
    (OUT / "route_evidence.json").write_text(json.dumps(evidence, indent=2, ensure_ascii=False) + "\n")
    with (OUT / "route_summary.txt").open("w") as f:
        for e in evidence:
            f.write(f"\n{e['method']} {e['path']} {e['handler_address']}\n")
            f.write("JS: "+", ".join(f"{r['name']}@{r['line']}" for r in e["js_references"])+"\n")
            f.write("C strings: "+json.dumps(e["c_strings"],ensure_ascii=False)+"\n")
            f.write("Direct calls: "+", ".join(sorted(set(c["callee_entry"] for c in e["direct_calls"])))+"\n")
    print(json.dumps({"controls_total_with_dynamic_fragments":len(rows),"static_dashboard_controls":sum(r['origin']=='dashboard.html' for r in rows),
                      "static_login_controls":len(login),"css_blocks":len(css),"routes":len(evidence)},ensure_ascii=False))


if __name__ == "__main__":
    main()
