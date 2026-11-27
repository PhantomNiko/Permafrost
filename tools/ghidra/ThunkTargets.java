// Restore statically resolved linker thunks.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import java.nio.file.Files;
import java.nio.file.Path;

public class ThunkTargets extends GhidraScript {
 public void run() throws Exception {
  int count=0;
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   if(line.isBlank())continue;
   var fields=line.split("\t");
   var address=toAddr(Long.parseLong(fields[0],16));
   var target=getFunctionAt(toAddr(Long.parseLong(fields[1],16)));
   if(target==null)throw new Exception("Missing thunk target "+fields[1]);
   var function=getFunctionAt(address);
   if(function==null) {
    disassemble(address);
    function=createFunction(address,null);
   }
   if(function==null)throw new Exception("Could not create thunk "+fields[0]);
   function.setThunkedFunction(target);
   count++;
  }
  println("Restored "+count+" static thunk targets");
 }
}
