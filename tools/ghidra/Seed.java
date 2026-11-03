// Seed known 32-bit function entries before analysis of the flat kernel.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import java.nio.file.Files;
import java.nio.file.Path;

public class Seed extends GhidraScript {
    public void run() throws Exception {
        for (String line : Files.readAllLines(Path.of(getScriptArgs()[0]))) {
            long value = Long.parseLong(line.trim(), 16);
            var address = toAddr(value);
            disassemble(address);
            if (getFunctionAt(address) == null) {
                createFunction(address, "recovered_" + Long.toHexString(value));
            }
        }
    }
}
