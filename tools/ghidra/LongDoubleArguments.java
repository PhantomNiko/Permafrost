// Preserve native x87 stack arguments independently of the return register.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.Float10DataType;
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.Files;
import java.nio.file.Path;
public class LongDoubleArguments extends GhidraScript {
 public void run() throws Exception {
  for(String row:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   if(row.isBlank())continue;
   var fields=row.split("\t");
   var function=getFunctionAt(toAddr(Long.parseLong(fields[0],16)));
   if(function==null)throw new Exception("Missing function "+fields[0]);
   function.setCustomVariableStorage(true);
   function.getParameter(Integer.parseInt(fields[1])).setDataType(Float10DataType.dataType,
       new VariableStorage(currentProgram,Integer.parseInt(fields[2]),10),true,SourceType.USER_DEFINED);
  }
 }
}
