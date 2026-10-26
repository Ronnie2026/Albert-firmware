// Structural inventory of the recovered JavaScript. No firmware/network execution.
const fs = require('fs');
const path = require('path');
const acorn = require('./js_parser/node_modules/acorn');
const walk = require('./js_parser/node_modules/acorn-walk');
const root = path.resolve(__dirname, '../..');
const out = path.resolve(__dirname, '../evidence');
fs.mkdirSync(out, {recursive:true});
const source = fs.readFileSync(path.join(root, 'recovered_web/dashboard.script0.js'), 'utf8');
const ast = acorn.parse(source, {ecmaVersion:'latest', sourceType:'script', locations:true});
const functions = [];
const byNode = new Map();
function nameOf(n, ancestors) {
  if (n.id && n.id.name) return n.id.name;
  const parent=ancestors[ancestors.length-2];
  if (parent && parent.type==='VariableDeclarator' && parent.id.type==='Identifier') return parent.id.name;
  if (parent && parent.type==='Property') return 'property_'+(parent.key.name||parent.key.value)+'_L'+n.loc.start.line;
  return 'anonymous_L'+n.loc.start.line+'_'+n.start;
}
walk.fullAncestor(ast, (node, _state, ancestors) => {
  if (!['FunctionDeclaration','FunctionExpression','ArrowFunctionExpression'].includes(node.type)) return;
  const row={name:nameOf(node, ancestors), line:node.loc.start.line, end_line:node.loc.end.line,
    start:node.start,end:node.end,calls:[],paths:[],dom_ids:[],form_keys:[],events:[],literals:[]};
  functions.push(row);byNode.set(node,row);
});
const literals=[], markup=[], globals=[];
function literal(n) { return n && n.type==='Literal' ? n.value : null; }
function callerName(n) {
  if (n.type==='Identifier') return n.name;
  if (n.type==='MemberExpression') return callerName(n.object)+'.'+(n.computed?literal(n.property):n.property.name);
  return n.type;
}
walk.fullAncestor(ast,(node,_state,ancestors)=>{
  const ownerNode=[...ancestors].reverse().find(n=>byNode.has(n));
  const owner=byNode.get(ownerNode);
  if(node.type==='Literal' && typeof node.value==='string') {
    const row={line:node.loc.start.line,owner:owner?.name||'(global)',value:node.value};
    literals.push(row);if(owner)owner.literals.push(node.value);
    if(/^\/[A-Za-z0-9_./-]*(?:\?.*)?$/.test(node.value)) {
      if(owner)owner.paths.push({path:node.value.split('?')[0],line:node.loc.start.line});
    }
    if(node.value.includes('<') && /<(?:input|select|button|h[1-4]|form|section|div|label|details)\b/i.test(node.value)) {
      markup.push({...row,kind:'literal_html'});
    }
  }
  if(node.type==='TemplateLiteral') {
    const text=node.quasis.map(q=>q.value.cooked||q.value.raw).join('__EXPRESSION__');
    if(/<(?:input|select|button|h[1-4]|form|section|div|label|details)\b/i.test(text)) {
      markup.push({line:node.loc.start.line,owner:owner?.name||'(global)',value:text,kind:'template_html'});
    }
  }
  if(node.type==='VariableDeclarator' && !owner) {
    globals.push({name:node.id.name||source.slice(node.id.start,node.id.end),line:node.loc.start.line,
      expression:node.init?source.slice(node.init.start,node.init.end):''});
  }
  if(node.type!=='CallExpression' || !owner)return;
  const callee=callerName(node.callee);
  const args=node.arguments.map(n=>source.slice(n.start,n.end));
  owner.calls.push({callee,args:args.map(v=>v.length>300?v.slice(0,300)+'…':v),line:node.loc.start.line});
  if(callee.endsWith('.getElementById') && typeof literal(node.arguments[0])==='string') owner.dom_ids.push(literal(node.arguments[0]));
  if(/\.(?:set|append)$/.test(callee) && typeof literal(node.arguments[0])==='string') owner.form_keys.push(literal(node.arguments[0]));
  if(callee.endsWith('.addEventListener')) owner.events.push({event:literal(node.arguments[0]),line:node.loc.start.line});
});
const incoming={};
for(const f of functions) {
  for(const c of f.calls)(incoming[c.callee]??=[]).push({caller:f.name,line:c.line});
  for(const key of ['dom_ids','form_keys','literals'])f[key]=[...new Set(f[key])];
}
const result={function_count:functions.length,functions,incoming,globals,literals,markup};
fs.writeFileSync(path.join(out,'frontend_ast.json'),JSON.stringify(result,null,2)+'\n');
fs.writeFileSync(path.join(out,'js_functions.tsv'),'name\tstart_line\tend_line\tdom_ids\tpaths\tform_keys\n'+functions.map(f=>
  [f.name,f.line,f.end_line,f.dom_ids.join(','),[...new Set(f.paths.map(p=>p.path))].join(','),f.form_keys.join(',')].join('\t')).join('\n')+'\n');
fs.writeFileSync(path.join(out,'js_globals.txt'),globals.map(g=>'L'+g.line+' '+g.name+' = '+g.expression).join('\n\n')+'\n');
console.log(JSON.stringify({functions:functions.length,markup_fragments:markup.length,literals:literals.length,globals:globals.length}));
