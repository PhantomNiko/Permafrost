// Recover reviewed ARM32 integer/pointer variadic words at a call site.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.pcode.HighFunctionDBUtil;

public class FormatWordOperands extends GhidraScript {
 public void run() throws Exception {
  String[] args=getScriptArgs();
  var caller=getFunctionAt(toAddr(Long.decode(args[0])));
  var callee=getFunctionAt(toAddr(Long.decode(args[2])));
  int fixed=Integer.parseInt(args[3]),optional=Integer.parseInt(args[4]);
  if(currentProgram.getDefaultPointerSize()!=4 || currentProgram.getRegister("r0")==null ||
     caller==null || callee==null || fixed!=3 || optional<0 || optional>32)
   throw new IllegalArgumentException("Invalid reviewed ARM32 format words");
  DataType pointer=new PointerDataType(VoidDataType.dataType,4,currentProgram.getDataTypeManager());
  DataType[] fixedTypes={pointer,UnsignedIntegerDataType.dataType,pointer};
  var parameters=new ParameterDefinition[fixed+optional];
  for(int i=0;i<parameters.length;i++)parameters[i]=new ParameterDefinitionImpl(
      "arg"+i,i<fixed?fixedTypes[i]:UnsignedIntegerDataType.dataType,null);
  var signature=new FunctionDefinitionDataType("reviewed_format_words_"+args[1],currentProgram.getDataTypeManager());
  signature.setArguments(parameters);signature.setReturnType(callee.getReturnType());
  signature.setCallingConvention(currentProgram.getCompilerSpec().getDefaultCallingConvention().getName());
  HighFunctionDBUtil.writeOverride(caller,toAddr(Long.decode(args[1])),signature);
 }
}
