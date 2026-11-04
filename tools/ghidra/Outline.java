// Inline compiler-generated machine-outliner helpers before recovering C.
// Their private register contracts are not public C calling conventions.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import java.nio.file.Files;
import java.nio.file.Path;

public class Outline extends GhidraScript {
    public void run() throws Exception {
        int count = 0;
        for (String line : Files.readAllLines(Path.of(getScriptArgs()[0]))) {
            var function = getFunctionAt(toAddr(Long.parseLong(line.trim(), 16)));
            if (function != null) {
                function.setInline(true);
                count++;
            }
        }
        println("Marked " + count + " compiler outliner helpers for inlining");
    }
}
