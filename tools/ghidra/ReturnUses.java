// Apply reviewed native return-register evidence without changing parameters.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.*;
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.pcode.Varnode;

public class ReturnUses extends GhidraScript {
 public void run()throws Exception {
  int count=0;
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   if(line.isBlank() || line.startsWith("#"))continue;
   String[] fields=line.split("\t");
   var function=getFunctionAt(toAddr(Long.parseLong(fields[0],16)));
   if(function==null)throw new Exception("Missing function "+fields[0]);
   DataType type;
   switch(Integer.parseInt(fields[1])) {
    case 1:type=UnsignedCharDataType.dataType;break;
    case 2:type=UnsignedShortDataType.dataType;break;
    case 4:type=UnsignedIntegerDataType.dataType;break;
    case 8:type=UnsignedLongLongDataType.dataType;break;
    default:throw new Exception("Unsupported return width "+fields[1]);
   }
   // A decompiler-inferred custom VOID storage cannot be resized. Replace
   // only the return storage, preserving reviewed custom parameter locations.
   var register=currentProgram.getRegister("x0");
   if(register==null)register=currentProgram.getRegister("RAX");
   boolean arm32=false;
   if(register==null){register=currentProgram.getRegister("r0");arm32=register!=null;}
   if(register==null)register=currentProgram.getRegister("EAX");
   if(register==null)throw new Exception("Return-register model needs review");
   function.setCustomVariableStorage(true);
   var storage=arm32 && type.getLength()==8?
       new VariableStorage(currentProgram,currentProgram.getRegister("r1"),register):
       new VariableStorage(currentProgram,new Varnode(register.getAddress(),type.getLength()));
   function.setReturn(type,storage,SourceType.USER_DEFINED);count++;
  }
  println("Applied reviewed native return uses: "+count);
 }
}
