// Inspect selected integration functions without assigning a source-code license.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.nio.file.Files;
import java.nio.file.Path;

public class Inspect extends GhidraScript {
    public void run() throws Exception {
        var args = getScriptArgs();
        Path output = Path.of(args[0]);
        Files.createDirectories(output);
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        for (int i = 1; i < args.length; i++) {
            var address = toAddr(Long.parseLong(args[i], 16));
            var function = getFunctionAt(address);
            if (function == null) { disassemble(address); function = createFunction(address, null); }
            var result = decompiler.decompileFunction(function, 120, monitor);
            if (result.decompileCompleted())
                Files.writeString(output.resolve(args[i] + ".c"), result.getDecompiledFunction().getC());
        }
        decompiler.dispose();
    }
}
