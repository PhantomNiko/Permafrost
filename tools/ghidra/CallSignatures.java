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
   var type=(FunctionDefinitionDataType)parser.parse(fields[2]);
   HighFunctionDBUtil.writeOverride(function,address,type);
  }
 }
}
