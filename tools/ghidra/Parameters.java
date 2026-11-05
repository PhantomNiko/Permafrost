// Preserve inferred parameter storage so callers see the recovered arguments.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.SourceType;
public class Parameters extends GhidraScript {
 public void run()throws Exception{
  long first=Long.decode(getScriptArgs()[0]),last=Long.decode(getScriptArgs()[1]);
  var d=new DecompInterface();var options=new DecompileOptions();options.setMaxPayloadMBytes(256);d.setOptions(options);d.openProgram(currentProgram);
  for(int pass=0;pass<3;pass++){
   int count=0;var functions=currentProgram.getFunctionManager().getFunctions(true);
   while(functions.hasNext()){
    var f=functions.next();long address=f.getEntryPoint().getOffset();
    if(address<first||address>=last||f.getParameterCount()!=0||f.hasCustomVariableStorage())continue;
    var result=d.decompileFunction(f,120,monitor);var high=result.getHighFunction();
    if(high==null||high.getFunctionPrototype().getNumParams()==0)continue;
    HighFunctionDBUtil.commitParamsToDatabase(high,true,HighFunctionDBUtil.ReturnCommitOption.NO_COMMIT,SourceType.ANALYSIS);
    println(f.getEntryPoint()+" -> "+f.getParameterCount()+" arguments");count++;d.flushCache();
   }
   println("Parameter pass "+pass+": "+count+" functions");if(count==0)break;
  }d.dispose();
 }
}
