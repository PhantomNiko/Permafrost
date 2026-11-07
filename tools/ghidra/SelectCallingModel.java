// Select the binary's calling convention before applying explicit ABI hints.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;

public class SelectCallingModel extends GhidraScript {
 public void run() throws Exception {
  String[] args=getScriptArgs();
  if(args.length!=1 || currentProgram.getCompilerSpec().getCallingConvention(args[0])==null)
   throw new IllegalArgumentException("Expected a known calling convention");
  int count=0;
  for(var functions=currentProgram.getFunctionManager().getFunctions(true);functions.hasNext();) {
   monitor.checkCancelled();
   var function=functions.next();
   function.setCustomVariableStorage(false);
   function.setCallingConvention(args[0]);
   count++;
  }
  println("Selected "+args[0]+" for "+count+" functions; apply explicit storage hints next.");
 }
}
