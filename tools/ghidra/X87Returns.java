// Preserve native x87 values without splitting ST0 into integer fragments.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.Float10DataType;
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.Files;
import java.nio.file.Path;

public class X87Returns extends GhidraScript {
 public void run() throws Exception {
  var register=currentProgram.getRegister("ST0");
  if(register==null || register.getMinimumByteSize()!=10)
   throw new Exception("Expected native 80-bit ST0");
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   if(line.isBlank())continue;
   var fields=line.split("\t");
   var function=getFunctionAt(toAddr(Long.parseLong(fields[0],16)));
   if(function==null)throw new Exception("Missing function "+fields[0]);
   function.setCustomVariableStorage(true);
   function.setReturn(Float10DataType.dataType,
       new VariableStorage(currentProgram,register),SourceType.USER_DEFINED);
   // The long-double entry points load a ten-byte argument from a twelve-byte
   // stack slot. The analysis compiler's CParser treats long double as double.
   if(fields[1].contains("ceill(") || fields[1].contains("expl("))
    function.getParameter(0).setDataType(Float10DataType.dataType,
        new VariableStorage(currentProgram,4,10),true,SourceType.USER_DEFINED);
  }
 }
}
