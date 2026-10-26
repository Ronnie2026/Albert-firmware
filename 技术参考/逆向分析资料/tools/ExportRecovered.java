// Export address-indexed C pseudocode, strings, references, and call edges.
// @category Firmware
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

public class ExportRecovered extends GhidraScript {
    private String field(String s) {
        return s.replace("\\", "\\\\").replace("\t", "\\t")
                .replace("\r", "\\r").replace("\n", "\\n");
    }
    private PrintWriter writer(Path path) throws IOException {
        return new PrintWriter(Files.newBufferedWriter(path, StandardCharsets.UTF_8));
    }
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Path output = Paths.get(args[0]);
        Path functionsDir = output.resolve("functions");
        Files.createDirectories(functionsDir);
        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        int ok = 0, failed = 0;
        try (PrintWriter index = writer(output.resolve("functions.tsv"));
             PrintWriter combined = writer(output.resolve("all_functions.c"));
             PrintWriter calls = writer(output.resolve("calls.tsv"));
             PrintWriter xrefs = writer(output.resolve("string_xrefs.tsv"))) {
            index.println("entry\tname\tbody_bytes\tdecompiled\tfile\terror");
            calls.println("caller_entry\tcall_site\tcallee_entry\tcallee_name");
            xrefs.println("string_address\treference_from\tfunction_entry\tfunction_name\ttext");
            combined.println("/* Ghidra pseudocode recovered from ESP32-P4 firmware.\n" +
                    " * This is NOT original source or a directly compilable translation unit.\n" +
                    " * Addresses and inferred types must be checked against disassembly. */\n");
            FunctionIterator funcs = fm.getFunctions(true);
            while (funcs.hasNext() && !monitor.isCancelled()) {
                Function fn = funcs.next();
                String name = fn.getName();
                String filename = Long.toHexString(fn.getEntryPoint().getOffset()) + "_" + name.replaceAll("[^A-Za-z0-9_.-]", "_") + ".c";
                DecompileResults result = decompiler.decompileFunction(fn, 45, monitor);
                String error = result.getErrorMessage();
                boolean success = result.decompileCompleted() && result.getDecompiledFunction() != null;
                index.println(fn.getEntryPoint() + "\t" + field(name) + "\t" + fn.getBody().getNumAddresses() +
                        "\t" + success + "\tfunctions/" + filename + "\t" + field(error == null ? "" : error));
                if (success) {
                    String code = "/* Firmware entry: 0x" + Long.toHexString(fn.getEntryPoint().getOffset()) + " */\n" +
                            result.getDecompiledFunction().getC() + "\n";
                    Files.writeString(functionsDir.resolve(filename), code, StandardCharsets.UTF_8);
                    combined.print(code);
                    ok++;
                } else {
                    failed++;
                }
                InstructionIterator ins = currentProgram.getListing().getInstructions(fn.getBody(), true);
                while (ins.hasNext()) {
                    Instruction instruction = ins.next();
                    if (!instruction.getFlowType().isCall()) continue;
                    for (Reference ref : instruction.getReferencesFrom()) {
                        if (!ref.getReferenceType().isCall()) continue;
                        Function target = fm.getFunctionAt(ref.getToAddress());
                        calls.println(fn.getEntryPoint() + "\t" + instruction.getAddress() + "\t" +
                                ref.getToAddress() + "\t" + (target == null ? "" : field(target.getName())));
                    }
                }
                if ((ok + failed) % 500 == 0) {
                    println("Exported " + (ok + failed) + " functions; success=" + ok + " failed=" + failed);
                    index.flush();
                    combined.flush();
                }
            }
            // Extractor TSV drives references even for strings Ghidra did not define.
            List<String> strings = Files.readAllLines(Paths.get(args[1]), StandardCharsets.UTF_8);
            for (int i = 1; i < strings.size(); i++) {
                String[] row = strings.get(i).split("\t", 3);
                if (row.length != 3) continue;
                Address address = toAddr(row[1]);
                ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(address);
                while (refs.hasNext()) {
                    Reference ref = refs.next();
                    Function fn = fm.getFunctionContaining(ref.getFromAddress());
                    xrefs.println(address + "\t" + ref.getFromAddress() + "\t" +
                            (fn == null ? "" : fn.getEntryPoint()) + "\t" +
                            (fn == null ? "" : field(fn.getName())) + "\t" + row[2]);
                }
            }
        } finally {
            decompiler.dispose();
        }
        Files.writeString(output.resolve("export_summary.json"),
                "{\"success\":" + ok + ",\"failed\":" + failed + ",\"language\":\"" +
                currentProgram.getLanguageID() + "\"}\n", StandardCharsets.UTF_8);
        println("DONE success=" + ok + " failed=" + failed);
    }
}
