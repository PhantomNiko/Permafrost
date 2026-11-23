// Recover reviewed Apple ARM64 variadic slots at a dynamic-format call site.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.pcode.HighFunctionDBUtil;

public class FormatOperands extends GhidraScript {
 public void run() throws Exception {
  String[] args=getScriptArgs();
  var caller=getFunctionAt(toAddr(Long.decode(args[0])));
  var callee=getFunctionAt(toAddr(Long.decode(args[2])));
  int fixed=Integer.parseInt(args[3]),optional=Integer.parseInt(args[4]);
  if(currentProgram.getDefaultPointerSize()!=8 || caller==null || callee==null ||
     fixed<1 || optional<0 || optional>32 || callee.getParameterCount()<fixed)
   throw new IllegalArgumentException("Invalid reviewed format operands");
  String convention="__pf_format"+fixed;
  if(currentProgram.getCompilerSpec().getCallingConvention(convention)==null)
   throw new Exception("Missing Apple ARM64 format convention");
  var parameters=new ParameterDefinition[fixed+optional];
  for(int i=0;i<parameters.length;i++)parameters[i]=new ParameterDefinitionImpl(
      "arg"+i,i<fixed?callee.getParameter(i).getDataType():UnsignedLongLongDataType.dataType,null);
  var signature=new FunctionDefinitionDataType("reviewed_format_"+args[1],currentProgram.getDataTypeManager());
  signature.setArguments(parameters);signature.setReturnType(callee.getReturnType());
  signature.setCallingConvention(convention);
  HighFunctionDBUtil.writeOverride(caller,toAddr(Long.decode(args[1])),signature);
 }
}
