// Keep native function boundaries from the original Mach-O symbol table.
// Analysis snapshots only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.HashSet;
import java.util.ArrayList;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.FlowOverride;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.symbol.SourceType;
public class NativeSymbols extends GhidraScript {
 public void run() throws Exception {
  var keep=new HashSet<Long>();
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[0])))
   keep.add(Long.parseLong(line.trim(),16));
  long first=Long.decode(getScriptArgs()[1]),last=Long.decode(getScriptArgs()[2]);
  var remove=new ArrayList<ghidra.program.model.listing.Function>();
  var functions=currentProgram.getFunctionManager().getFunctions(true);
  while(functions.hasNext()) {
   var f=functions.next();long a=f.getEntryPoint().getOffset();
   if((a>=first && a<last && !keep.contains(a)) ||
      (a>=0x30000000L && a<0x31000000L))remove.add(f);
  }
  for(var f:remove)removeFunction(f);
  var instructions=currentProgram.getListing().getInstructions(
      new AddressSet(toAddr(first),toAddr(last-1)),true);
  while(instructions.hasNext()) {
   var i=instructions.next();
   if(!i.getMnemonicString().toUpperCase().startsWith("J") || i.getFlowOverride()==FlowOverride.NONE)continue;
   for(var target:i.getDefaultFlows()) {
    long a=target.getOffset();
    if((a>=first && a<last && !keep.contains(a)) || (a>=0x30000000L && a<0x31000000L))
     i.setFlowOverride(FlowOverride.NONE);
   }
  }
  for(long a:keep) {
   var f=getFunctionAt(toAddr(a));
   if(f!=null) {
    CreateFunctionCmd.fixupFunctionBody(currentProgram,f,monitor);
    // Section analyzers can name the first function __text. Keep the same
    // address identifier used by the other recovery and source-build tools.
    f.setName("recovered_"+Long.toHexString(a),SourceType.USER_DEFINED);
   }
  }
  println("Removed "+remove.size()+" analysis-only native function entries");
 }
}
