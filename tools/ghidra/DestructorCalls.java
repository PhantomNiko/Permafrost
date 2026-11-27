// Recover the Itanium deleting-destructor owner at indirect call sites.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.pcode.*;
import java.nio.file.*;
import java.util.*;
public class DestructorCalls extends GhidraScript {
 Varnode strip(Varnode node){
  for(int i=0;i<12 && node!=null;i++){
   var op=node.getDef();if(op==null)break;
   if(op.getOpcode()!=PcodeOp.COPY && op.getOpcode()!=PcodeOp.CAST)break;
   node=op.getInput(0);
  }return node;
 }
 long slot(Varnode node){
  node=strip(node);var load=node==null?null:node.getDef();
  if(load==null || load.getOpcode()!=PcodeOp.LOAD)return -1;
  var address=strip(load.getInput(1));var add=address==null?null:address.getDef();
  if(add==null || (add.getOpcode()!=PcodeOp.INT_ADD && add.getOpcode()!=PcodeOp.PTRADD && add.getOpcode()!=PcodeOp.PTRSUB))return -1;
  if(!add.getInput(1).isConstant())return -1;
  var table=strip(add.getInput(0));var owner=table==null?null:table.getDef();
  if(owner==null || owner.getOpcode()!=PcodeOp.LOAD)return -1;
  return add.getInput(1).getOffset()*(add.getOpcode()==PcodeOp.PTRADD?add.getInput(2).getOffset():1);
 }
 public void run()throws Exception{
  int width=currentProgram.getDefaultPointerSize();long first=Long.decode(getScriptArgs()[0]),last=Long.decode(getScriptArgs()[1]);
  var decoder=new DecompInterface();decoder.openProgram(currentProgram);var parser=new CParser(currentProgram.getDataTypeManager());var report=new ArrayList<String>();
  var functions=currentProgram.getFunctionManager().getFunctions(true);
  while(functions.hasNext()){
   var function=functions.next();long entry=function.getEntryPoint().getOffset();if(entry<first || entry>=last)continue;
   var result=decoder.decompileFunction(function,120,monitor);if(result.getHighFunction()==null)continue;
   var operations=result.getHighFunction().getPcodeOps();
   while(operations.hasNext()){
    var operation=operations.next();if(operation.getOpcode()!=PcodeOp.CALLIND)continue;long offset=slot(operation.getInput(0));String signature=null;
    if(offset==width)signature="void destroy_object(void *owner);";
    if(signature==null)continue;
    String name="pf_destructor_"+operation.getSeqnum().getTarget();
    var type=(FunctionDefinitionDataType)parser.parse(signature.replaceFirst("\\b\\w+(?=\\()",name));
    type.setCallingConvention(currentProgram.getCompilerSpec().getDefaultCallingConvention().getName());
    HighFunctionDBUtil.writeOverride(function,operation.getSeqnum().getTarget(),type);
    report.add(String.format("%x\t%s\t%d\t%s",entry,operation.getSeqnum().getTarget(),offset,signature));
   }decoder.flushCache();
  }
  decoder.dispose();Files.write(Path.of(getScriptArgs()[2]),report);println("Recovered deleting-destructor dispatch sites: "+report.size());
 }
}
