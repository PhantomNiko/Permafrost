// Explicit signatures for native calls with runtime format strings.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import java.nio.file.Files;
import java.nio.file.Path;

public class CallSignatures extends GhidraScript {
 public void run() throws Exception {
  var parser=new CParser(currentProgram.getDataTypeManager());
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   if(line.isBlank())continue;
   var fields=line.split("\t");
   var function=getFunctionAt(toAddr(Long.parseLong(fields[0],16)));
   if(function==null)throw new Exception("Missing caller "+fields[0]);
   var address=toAddr(Long.parseLong(fields[1],16));
   String unique="pf_call_"+fields[1]+"_"+Integer.toUnsignedString(fields[2].hashCode(),16);
   String declaration=fields[2].replaceFirst("\\b[A-Za-z_][A-Za-z_0-9]*(?=\\s*\\()",unique);
   var type=(FunctionDefinitionDataType)parser.parse(declaration);
   String convention=fields.length>3 && !fields[3].isBlank()?fields[3]:
       currentProgram.getCompilerSpec().getDefaultCallingConvention().getName();
   if(currentProgram.getCompilerSpec().getCallingConvention(convention)==null)
       throw new Exception("Unknown calling convention "+convention);
   type.setCallingConvention(convention);
   HighFunctionDBUtil.writeOverride(function,address,type);
  }
 }
}
