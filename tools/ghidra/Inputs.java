// Preserve register inputs omitted by generic parameter inference.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.pcode.Varnode;
import ghidra.program.model.symbol.SourceType;
import java.util.ArrayList;
import java.util.HashMap;

public class Inputs extends GhidraScript {
 public void run() throws Exception {
  var decompiler=new DecompInterface();decompiler.openProgram(currentProgram);
  boolean arm=currentProgram.getRegister("x0")!=null;
  boolean wide=currentProgram.getDefaultPointerSize()==8;
  String pattern=arm?"in_(?:[xw][0-8]|[sd][0-7])":wide?
      "in_(?:RDI|RSI|RDX|RCX|R8|R9|EDI|ESI|EDX|ECX|R8D|R9D|XMM[0-7])":
      "in_(?:ECX|EDX)";
  long first=Long.decode(getScriptArgs()[0]),last=Long.decode(getScriptArgs()[1]);
  var functions=currentProgram.getFunctionManager().getFunctions(true);
  int fixed=0;
  while(functions.hasNext()) {
   var function=functions.next();long entry=function.getEntryPoint().getOffset();
   if(entry<first || entry>=last)continue;
   if(function.hasVarArgs())continue;
   var result=decompiler.decompileFunction(function,60,monitor);
   if(!result.decompileCompleted())continue;
   String recovered=result.getDecompiledFunction().getC();
   var existing=new ArrayList<ParameterImpl>();
   var occupied=new java.util.HashSet<Long>();
   for(var parameter:function.getParameters()) {
    existing.add(new ParameterImpl(parameter.getName(),parameter.getDataType(),
                  parameter.getVariableStorage(),currentProgram,SourceType.USER_DEFINED));
    for(var node:parameter.getVariableStorage().getVarnodes())
     if(node.getAddress().isRegisterAddress())occupied.add(node.getAddress().getOffset());
   }
   var inputs=new HashMap<Long,ParameterImpl>();
   var nodes=result.getHighFunction().getVarnodes(currentProgram.getAddressFactory().getRegisterSpace());
   while(nodes.hasNext()) {
    var node=nodes.next();var high=node.getHigh();
    if(!node.isInput() || high==null || high.getName()==null ||
       !high.getName().matches(pattern))continue;
    // Small integer returns can preserve undefined upper register bytes.
    // Those bytes are not additional parameters of the original function.
    boolean meaningful=false;
    for(String line:recovered.split("\n")) {
     if(!line.matches(".*\\b"+high.getName()+"\\b.*"))continue;
     if(line.contains("CONCAT31") || line.contains(">> 8"))continue;
     if(line.trim().matches("[A-Za-z_][A-Za-z_0-9 \\t*]*\\b"+
         high.getName()+"\\s*(?:\\[[0-9]+\\])?;"))continue;
     meaningful=true;break;
    }
    if(!meaningful)continue;
    long address=node.getAddress().getOffset();
    if(occupied.contains(address))continue;
    var type=high.getDataType();int size=type.getLength();
    if(size<1 || size>node.getSize())continue;
    var storage=new VariableStorage(currentProgram,new Varnode(node.getAddress(),size));
    var parameter=new ParameterImpl(high.getName(),type,storage,currentProgram,SourceType.USER_DEFINED);
    var previous=inputs.get(address);
    if(previous==null || previous.getLength()<size)inputs.put(address,parameter);
   }
   if(inputs.isEmpty())continue;
   existing.addAll(inputs.values());
   existing.sort(java.util.Comparator.comparingLong(parameter -> {
    var storage=parameter.getVariableStorage();
    if(storage.isStackStorage())return 1000L+storage.getStackOffset();
    var address=storage.getMinAddress();
    if(!arm) {
     String[] general=wide?new String[]{"RDI","RSI","RDX","RCX","R8","R9"}:
                           new String[]{"ECX","EDX"};
     for(int i=0;i<general.length;i++) {
      var register=currentProgram.getRegister(general[i]);
      if(register!=null && register.getAddress().equals(address))return (long)i;
     }
     for(int i=0;i<8;i++) {
      var register=currentProgram.getRegister("XMM"+i);
      if(register!=null && register.getAddress().equals(address))return 100L+i;
     }
    }
    for(int i=0;i<9;i++) {
     var register=currentProgram.getRegister("x"+i);
     if(register!=null && register.getAddress().equals(address))return i==8?-1L:(long)i;
    }
    for(int i=0;i<8;i++) {
     var register=currentProgram.getRegister("s"+i);
     if(register!=null && register.getAddress().equals(address))return 100L+i;
    }
    return 10000L+address.getOffset();
   }));
   function.replaceParameters(existing,FunctionUpdateType.CUSTOM_STORAGE,true,SourceType.USER_DEFINED);
   fixed++;decompiler.flushCache();
  }
  decompiler.dispose();println("Recovered missing register inputs in "+fixed+" functions");
 }
}
