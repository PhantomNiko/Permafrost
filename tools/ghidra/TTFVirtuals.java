// Analysis only; Pooka's Free Software License.
// @category Permafrost
// Recover observed backend virtual-call argument and return types.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.pcode.*;
public class TTFVirtuals extends GhidraScript {
 long offset(Varnode node,int depth){
  if(node==null||depth>8)return -1;var op=node.getDef();if(op==null)return -1;
  int k=op.getOpcode();
  if(k==PcodeOp.COPY||k==PcodeOp.CAST)return offset(op.getInput(0),depth+1);
  if(k!=PcodeOp.LOAD)return -1;var address=op.getInput(1);var a=address.getDef();while(a!=null&&(a.getOpcode()==PcodeOp.CAST||a.getOpcode()==PcodeOp.COPY)){address=a.getInput(0);a=address.getDef();}
  if(a!=null&&(a.getOpcode()==PcodeOp.INT_ADD||a.getOpcode()==PcodeOp.PTRSUB||a.getOpcode()==PcodeOp.PTRADD)) {
   if(a.getInput(1).isConstant())return a.getInput(1).getOffset()*(a.getOpcode()==PcodeOp.PTRADD?a.getInput(2).getOffset():1);
  }return -1;
 }
 public void run()throws Exception {
  int width=currentProgram.getDefaultPointerSize();var d=new DecompInterface();d.openProgram(currentProgram);var parser=new CParser(currentProgram.getDataTypeManager());int count=0;
  var functions=currentProgram.getFunctionManager().getFunctions(true);
  while(functions.hasNext()){
   var f=functions.next();if(f.getEntryPoint().getOffset()!=Long.decode(getScriptArgs()[0]))continue;var result=d.decompileFunction(f,120,monitor);if(result.getHighFunction()==null)continue;
   var operations=result.getHighFunction().getPcodeOps();
   while(operations.hasNext()){
    var op=operations.next();if(op.getOpcode()!=PcodeOp.CALLIND)continue;long slot=offset(op.getInput(0),0);String signature=null;
    if(slot>=4*width&&slot<=7*width&&slot%width==0)signature="double indirect(void *backend);";
    if(slot==3*width)signature="pf_glyph indirect(void *backend,unsigned int glyph,double scale);";
    if(signature==null)continue;
    // Reused parser names can preserve an earlier parameter list.
    String unique="pf_virtual_"+op.getSeqnum().getTarget()+"_"+Integer.toUnsignedString(signature.hashCode(),16);
    var type=(FunctionDefinitionDataType)parser.parse(signature.replace("indirect(",unique+"("));
    type.setCallingConvention("__cdecl");
    HighFunctionDBUtil.writeOverride(f,op.getSeqnum().getTarget(),type);println(op.getSeqnum().getTarget()+" slot "+slot);count++;
   }
  }d.dispose();println("Recovered "+count+" virtual call signatures");
 }
}
