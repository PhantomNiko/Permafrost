// Export corrected functions and every direct caller without discarding prior selections.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.TreeSet;
public class SelectCallers extends GhidraScript {
 public void run() throws Exception {
  var selected=new TreeSet<Long>();Path path=Path.of(getScriptArgs()[0]);
  if(Files.exists(path))for(String line:Files.readAllLines(path))
   if(!line.isBlank())selected.add(Long.parseLong(line.trim(),16));
  for(int i=1;i<getScriptArgs().length;i++)selected.add(Long.decode(getScriptArgs()[i]));
  for(long address:new java.util.ArrayList<Long>(selected))
   for(var reference:getReferencesTo(toAddr(address))) {
    var caller=getFunctionContaining(reference.getFromAddress());
    if(caller!=null)selected.add(caller.getEntryPoint().getOffset());
   }
  StringBuilder text=new StringBuilder();for(long address:selected)text.append(Long.toHexString(address)).append('\n');
  Files.writeString(path,text.toString());println("Selected "+selected.size()+" functions and callers");
 }
}
