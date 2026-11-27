// Preserve reference-proven stack changes at indirect call instructions.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.SetStackDepthChangeCommand;
import java.nio.file.Files;
import java.nio.file.Path;

public class StackEffects extends GhidraScript {
 public void run() throws Exception {
  for (String line : Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   if (line.isBlank()) continue;
   String[] fields = line.split("\t");
   var address = toAddr(Long.parseLong(fields[0], 16));
   var instruction = getInstructionAt(address);
   if (instruction == null || !instruction.getFlowType().isCall())
    throw new Exception("Expected call instruction at " + fields[0]);
   var command = new SetStackDepthChangeCommand(address, Integer.decode(fields[1]));
   if (!command.applyTo(currentProgram)) throw new Exception(command.getStatusMsg());
  }
 }
}
