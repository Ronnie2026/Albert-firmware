// Correct loader omissions using evidence from the startup code.
// @category Firmware
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import java.util.ArrayList;
import java.util.Set;
import java.math.BigInteger;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.regex.*;

public class PrepareAnalysis extends GhidraScript {
    private void block(String name, long start, long size, boolean execute) throws Exception {
        if (currentProgram.getMemory().getBlock(toAddr(start)) != null) return;
        MemoryBlock block = currentProgram.getMemory().createUninitializedBlock(name, toAddr(start), size, false);
        block.setRead(true);
        block.setWrite(!execute);
        block.setExecute(execute);
    }
    @Override
    public void run() throws Exception {
        // Startup at 4ff20444..4ff20464 explicitly clears exactly this range.
        block(".bss.recovered", 0x4ff589e0L, 0x4ff6e300L - 0x4ff589e0L, false);
        // Retained RTC fields referenced by setup/supervisor. Size is analysis coverage,
        // not a recovered section boundary; contents were not present in the image.
        block(".rtc.retained.analysis", 0x50108080L, 0x1300, false);
        // ROM calls have no bytes in a flash image. Never mark invented bytes initialized.
        block(".rom.external", 0x4fc00000L, 0x10000, true);
        // Startup at 4ff203fc initializes the small-data register gp.
        var gp = currentProgram.getRegister("gp");
        if (gp != null) {
            for (MemoryBlock mem : currentProgram.getMemory().getBlocks()) {
                if (mem.isExecute() && mem.isInitialized()) {
                    currentProgram.getProgramContext().setValue(gp, mem.getStart(), mem.getEnd(),
                            BigInteger.valueOf(0x4ff48580L));
                }
            }
        }
        String[] args = getScriptArgs();
        Pattern symbols = Pattern.compile("(?m)^\\s*([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*(0x[0-9a-fA-F]+)\\s*;");
        // ESP-IDF v5.5.5 selects the ECO5 ROM maps for ESP32-P4 revision >=3.
        // The legacy tables differ (e.g. __divdi3), despite using the same chip name.
        Set<String> selected = Set.of("esp32p4.rom.eco5.ld", "esp32p4.rom.eco5.libc.ld",
                "esp32p4.rom.eco5.libgcc.ld", "esp32p4.rom.eco5.newlib.ld", "esp32p4.rom.eco5.rvfp.ld");
        ArrayList<Symbol> priorRomLabels = new ArrayList<>();
        var prior = currentProgram.getSymbolTable().getAllSymbols(true);
        while (prior.hasNext()) {
            Symbol sym = prior.next();
            long value = sym.getAddress().getOffset();
            if (value >= 0x4fc00000L && value < 0x4fc10000L && sym.getSource() == SourceType.USER_DEFINED) {
                priorRomLabels.add(sym);
            }
        }
        for (Symbol sym : priorRomLabels) sym.delete();
        try (var files = Files.list(Paths.get(args[0]))) {
            for (Path file : files.filter(p -> selected.contains(p.getFileName().toString())).sorted().toList()) {
                String text = Files.readString(file, StandardCharsets.UTF_8);
                Matcher matcher = symbols.matcher(text);
                while (matcher.find()) {
                    long value = Long.decode(matcher.group(2));
                    if (value < 0x4fc00000L || value >= 0x4fc10000L) continue;
                    Address addr = toAddr(value);
                    createLabel(addr, matcher.group(1), true);
                }
            }
        }
        // Analyst names. These do not claim recovery of original C++ symbols.
        String[][] known = {
            {"48000020", "recovered_format_original_elf_sha256"},
            {"48117336", "recovered_arduino_setup"},
            {"4810d080", "recovered_can_rt_task"},
            {"4ff2520a", "recovered_fsd_p0_task"},
            {"48121206", "recovered_supervisor_task"},
            {"48120c38", "recovered_start_supervisor"},
            {"480868b2", "recovered_dashboard_register_routes"},
            {"4811aede", "recovered_runtime_service"},
            {"480312a6", "recovered_probe_can_pin_layout"}
        };
        for (String[] entry : known) {
            Address addr = toAddr(Long.parseLong(entry[0], 16));
            Function fn = currentProgram.getFunctionManager().getFunctionAt(addr);
            if (fn == null) {
                disassemble(addr);
                fn = createFunction(addr, entry[1]);
            }
            if (fn != null) {
                fn.setName(entry[1], SourceType.USER_DEFINED);
                fn.setComment("Analyst-assigned name based on firmware call sites and string references.");
            }
        }
        // HTTP callbacks can be missed by call-based function discovery. Their
        // entry addresses are explicit function pointers in the registration code.
        Path seeds = Paths.get(args[0]).getParent().resolve("http_handler_seeds.tsv");
        if (Files.exists(seeds)) {
            for (String row : Files.readAllLines(seeds, StandardCharsets.UTF_8)) {
                if (row.startsWith("address") || row.isBlank()) continue;
                String[] fields = row.split("\t");
                Address address = toAddr(Long.decode(fields[0]));
                Function fn = currentProgram.getFunctionManager().getFunctionAt(address);
                if (fn == null) {
                    Data data = currentProgram.getListing().getDefinedDataAt(address);
                    if (data != null && data.getLength() <= 16) {
                        clearListing(address, data.getMaxAddress());
                    }
                    disassemble(address);
                    fn = createFunction(address, fields[1]);
                }
                if (fn != null) {
                    fn.setName(fields[1], SourceType.USER_DEFINED);
                    fn.setComment("HTTP callback entry recovered from 0x480868b2. Name assigned by analyst.");
                } else {
                    println("HTTP callback not established at " + address);
                }
            }
        }
        println("Added recovered BSS, gp context, ROM labels, and selected task entry points.");
    }
}
