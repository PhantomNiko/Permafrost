// Restore machine-outliner clones to their original function bodies.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.FlowOverride;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.HashSet;
import java.util.ArrayList;
public class ExpandedBodies extends GhidraScript {
 public void run()throws Exception {
  var seeds=new java.util.TreeSet<Long>();for(String s:Files.readAllLines(Path.of(getScriptArgs()[0])))if(!s.isBlank())seeds.add(Long.parseLong(s.trim(),16));
  var remove=new ArrayList<ghidra.program.model.address.Address>();var functions=currentProgram.getFunctionManager().getFunctions(true);
  while(functions.hasNext()){var f=functions.next();if(!seeds.contains(f.getEntryPoint().getOffset()))remove.add(f.getEntryPoint());}
  for(var address:remove)currentProgram.getFunctionManager().removeFunction(address);
  for(long entry:seeds){var f=getFunctionAt(toAddr(entry));if(f!=null)f.setBody(new AddressSet(toAddr(entry)));}
  for(long entry:seeds)if(getFunctionAt(toAddr(entry))==null)currentProgram.getFunctionManager().createFunction("recovered_"+Long.toHexString(entry),toAddr(entry),new AddressSet(toAddr(entry)),ghidra.program.model.symbol.SourceType.USER_DEFINED);
  long textEnd=Long.decode(getScriptArgs()[2]);
  for(long entry:seeds){var next=seeds.higher(entry);var last=next==null?textEnd:next;getFunctionAt(toAddr(entry)).setBody(new AddressSet(toAddr(entry),toAddr(last-1)));}
  int count=0;
  for(String row:Files.readAllLines(Path.of(getScriptArgs()[1]))){
   var fields=row.split("\\t");var site=toAddr(Long.parseLong(fields[0],16));var first=toAddr(Long.parseLong(fields[1],16));var last=toAddr(Long.parseLong(fields[2],16)-1);var root=seeds.floor(site.getOffset());var owner=root==null?null:getFunctionAt(toAddr(root));
   if(owner==null)throw new Exception("No expanded-call owner at "+site);
   var body=new AddressSet(owner.getBody());body.add(owner.getEntryPoint(),site.add(3));body.add(first,last);owner.setBody(body);
   var instruction=getInstructionAt(site);if(instruction!=null)instruction.setFlowOverride(FlowOverride.NONE);count++;
  }
  var instructions=currentProgram.getListing().getInstructions(true);while(instructions.hasNext()){var instruction=instructions.next();if(instruction.getFlowOverride()!=FlowOverride.NONE)instruction.setFlowOverride(FlowOverride.NONE);}
  println("Restored "+count+" expanded blocks; removed "+remove.size()+" synthetic functions");
 }
}
