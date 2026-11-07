// Install a reviewed private calling convention in an analysis database.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.database.SpecExtension;
import java.nio.file.Files;
import java.nio.file.Path;

public class InstallCallingModel extends GhidraScript {
 public void run() throws Exception {
  new SpecExtension(currentProgram).addReplaceCompilerSpecExtension(
   Files.readString(Path.of(getScriptArgs()[0])),monitor);
 }
}
