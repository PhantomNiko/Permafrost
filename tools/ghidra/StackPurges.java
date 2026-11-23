// Record verified callee stack adjustments for imported tail stubs.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import java.nio.file.Files;
import java.nio.file.Path;

public class StackPurges extends GhidraScript {
 public void run() throws Exception {
  for(String row:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   if(row.isBlank())continue;
   String[] fields=row.split("\\t");
   var function=getFunctionAt(toAddr(Long.parseLong(fields[0],16)));
   if(function==null)throw new Exception("Missing imported function: "+fields[0]);
   function.setStackPurgeSize(Integer.parseInt(fields[1]));
  }
 }
}
