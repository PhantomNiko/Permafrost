// Rebuild inferred signatures after applying known library and variadic ABIs.
// Analyze callees before callers so a bad format-function prototype does not
// propagate false SIMD inputs throughout the kernel. Analysis only.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.*;

public class Reinfer extends GhidraScript {
 private final Set<Long> visited=new HashSet<>();
 private final List<Function> order=new ArrayList<>();
 private long first,last;
 private void visit(Function function)throws Exception {
  long address=function.getEntryPoint().getOffset();
  if(address<first || address>=last || !visited.add(address))return;
  for(var child:function.getCalledFunctions(monitor))visit(child);
  order.add(function);
 }
 public void run()throws Exception {
  first=Long.decode(getScriptArgs()[0]);last=Long.decode(getScriptArgs()[1]);
  var known=new HashSet<Long>();
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[2])))
   if(!line.isBlank())known.add(Long.parseLong(line.split("\t",2)[0],16));
  var functions=currentProgram.getFunctionManager().getFunctions(true);
  while(functions.hasNext()) {
   var function=functions.next();long address=function.getEntryPoint().getOffset();
   if(address<first || address>=last)continue;
   visit(function);
   if(known.contains(address))continue;
   function.setCustomVariableStorage(false);
   function.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
       true,SourceType.DEFAULT,new Parameter[0]);
   function.setReturnType(Undefined4DataType.dataType,SourceType.DEFAULT);
   function.setVarArgs(false);
   function.setSignatureSource(SourceType.DEFAULT);
  }
  var decompiler=new DecompInterface();var options=new DecompileOptions();
  options.setMaxPayloadMBytes(256);decompiler.setOptions(options);decompiler.openProgram(currentProgram);
  for(int pass=0;pass<2;pass++) {
   int count=0;
   for(var function:order) {
    if(monitor.isCancelled())break;
    if(known.contains(function.getEntryPoint().getOffset()))continue;
    var result=decompiler.decompileFunction(function,90,monitor);
    if(!result.decompileCompleted())continue;
    try {
     HighFunctionDBUtil.commitParamsToDatabase(result.getHighFunction(),true,
        HighFunctionDBUtil.ReturnCommitOption.COMMIT,SourceType.ANALYSIS);
     count++;
    }catch(Exception exception){printerr("Inference at "+function.getEntryPoint()+": "+exception.getMessage());}
    decompiler.flushCache();
   }
   println("Callee-first pass "+pass+": "+count+" functions");
  }
  decompiler.dispose();
 }
}
