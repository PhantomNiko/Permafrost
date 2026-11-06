// Pin stack slots whose native loads and stores establish their types.
// Analysis snapshots only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.Files;
import java.nio.file.Path;

public class StackTypes extends GhidraScript {
 public void run() throws Exception {
  // TSV: function address, incoming-SP offset, type, local name.
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   if(line.isBlank())continue;
   var fields=line.split("\t");
   var function=getFunctionAt(toAddr(Long.parseLong(fields[0],16)));
   if(function==null)throw new Exception("Missing native function "+fields[0]);
   int offset=Integer.decode(fields[1]);
   DataType type=switch(fields[2]) {
    case "pointer" -> new PointerDataType(CharDataType.dataType,currentProgram.getDataTypeManager());
    case "value" -> currentProgram.getDataTypeManager().getDataType("/pf_kernel_value");
    case "workspace" -> currentProgram.getDataTypeManager().getDataType("/pf_workspace");
    case "argument" -> currentProgram.getDataTypeManager().getDataType("/pf_argument");
    case "scalar32" -> currentProgram.getDataTypeManager().getDataType("/pf_scalar32");
    case "int32" -> IntegerDataType.dataType;
    case "uint32" -> UnsignedIntegerDataType.dataType;
    case "uint64" -> UnsignedLongLongDataType.dataType;
    case "float" -> FloatDataType.dataType;
    case "double" -> DoubleDataType.dataType;
    default -> throw new Exception("Unknown stack type "+fields[2]);
   };
   var frame=function.getStackFrame();
   for(var existing:function.getLocalVariables()) {
    if(!existing.isStackVariable())continue;
    int start=existing.getStackOffset(),end=start+existing.getDataType().getLength();
    if(start<offset+type.getLength() && offset<end)frame.clearVariable(start);
   }
   frame.createVariable(fields[3],offset,type,SourceType.USER_DEFINED);
  }
 }
}
