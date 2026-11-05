// Recover scalar return values which otherwise appear as undefined extraout registers.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.listing.VariableStorage;
import java.util.HashMap;
import java.util.HashSet;
import java.nio.file.Files;
import java.nio.file.Path;

public class Returns extends GhidraScript {
 public void run() throws Exception {
  long first=Long.decode(getScriptArgs()[0]),last=Long.decode(getScriptArgs()[1]);
  var decompiler=new DecompInterface();var options=new DecompileOptions();
  options.setMaxPayloadMBytes(256);decompiler.setOptions(options);decompiler.openProgram(currentProgram);
  var changes=new HashSet<Long>();
  if(getScriptArgs().length>2 && Files.exists(Path.of(getScriptArgs()[2])))
   for(String line:Files.readAllLines(Path.of(getScriptArgs()[2])))
    if(!line.isBlank())changes.add(Long.parseLong(line.trim(),16));
  var initial=currentProgram.getFunctionManager().getFunctions(true);
  while(initial.hasNext()) {
   var function=initial.next();long address=function.getEntryPoint().getOffset();
   var type=function.getReturnType();
   if(address<first || address>=last || type instanceof VoidDataType || type.getLength()>8 ||
      !function.getReturn().getVariableStorage().equals(VariableStorage.VOID_STORAGE))continue;
   boolean arm64=currentProgram.getRegister("x0")!=null;
   String register=type instanceof DoubleDataType?"d0":type instanceof FloatDataType?"s0":
                   arm64?(type.getLength()>4?"x0":"w0"):
                   currentProgram.getRegister("r0")!=null?"r0":type.getLength()>4?"RAX":"EAX";
   function.setCustomVariableStorage(true);
   function.setReturn(type,new VariableStorage(currentProgram,currentProgram.getRegister(register)),SourceType.USER_DEFINED);
   changes.add(address);println("Repaired scalar return storage: "+function.getEntryPoint());
  }
  for(int pass=0;pass<3;pass++) {
   int fixed=0;var functions=currentProgram.getFunctionManager().getFunctions(true);
   while(functions.hasNext() && !monitor.isCancelled()) {
    var function=functions.next();long address=function.getEntryPoint().getOffset();
    if(address<first || address>=last)continue;
    var result=decompiler.decompileFunction(function,120,monitor);
    if(!result.decompileCompleted())continue;
    var high=result.getHighFunction();var calls=new HashMap<Integer,ghidra.program.model.pcode.PcodeOpAST>();
    var operations=high.getPcodeOps();
    while(operations.hasNext()) {
     var operation=operations.next();
     if(operation.getOpcode()==PcodeOp.CALL)calls.put(operation.getSeqnum().getTime(),operation);
    }
    var nodes=high.getVarnodes(currentProgram.getAddressFactory().getRegisterSpace());
    while(nodes.hasNext()) {
     var node=nodes.next();var variable=node.getHigh();var definition=node.getDef();
     if(variable==null || variable.getName()==null || definition==null ||
        !variable.getName().matches("extraout_(?:[xw]0|r0|R0|EAX|RAX|s0|d0)"))continue;
     if(definition.getOpcode()!=PcodeOp.INDIRECT)continue;
     var call=calls.get((int)definition.getInput(1).getOffset());if(call==null)continue;
     var target=getFunctionAt(call.getInput(0).getAddress());
     if(target==null || !(target.getReturnType() instanceof VoidDataType))continue;
     DataType type;
     if(variable.getName().endsWith("s0"))type=FloatDataType.dataType;
     else if(variable.getName().endsWith("d0"))type=DoubleDataType.dataType;
     else type=node.getSize()>4?UnsignedLongLongDataType.dataType:UnsignedIntegerDataType.dataType;
     try {
      if(target.hasCustomVariableStorage()) {
       String register=variable.getName().substring("extraout_".length());
       target.setReturn(type,new VariableStorage(currentProgram,currentProgram.getRegister(register)),SourceType.USER_DEFINED);
      } else target.setReturnType(type,SourceType.USER_DEFINED);
     }
     catch(ghidra.util.exception.InvalidInputException exception) {
      printerr("Return storage requires manual review: "+target.getEntryPoint());continue;
     }
     fixed++;
     for(var reference:getReferencesTo(target.getEntryPoint())) {
      var caller=getFunctionContaining(reference.getFromAddress());
      if(caller!=null)changes.add(caller.getEntryPoint().getOffset());
     }
     changes.add(target.getEntryPoint().getOffset());changes.add(address);
     if(target.isThunk()) {
      var root=target.getThunkedFunction(true);
      if(root!=null && root.getReturnType() instanceof VoidDataType) {
       root.setCustomVariableStorage(false);root.setReturnType(type,SourceType.USER_DEFINED);
       changes.add(root.getEntryPoint().getOffset());
      }
     }
     println("Return "+target.getEntryPoint()+" -> "+type.getName()+" used by "+function.getEntryPoint());
    }
   }
   decompiler.flushCache();println("Return pass "+pass+": "+fixed+" functions");if(fixed==0)break;
  }
  var changedFunctions=new java.util.ArrayList<Long>(changes);
  for(long address:changedFunctions) {
   var function=getFunctionAt(toAddr(address));if(function==null)continue;
   for(var reference:getReferencesTo(function.getEntryPoint())) {
    var caller=getFunctionContaining(reference.getFromAddress());
    if(caller!=null)changes.add(caller.getEntryPoint().getOffset());
   }
  }
  decompiler.dispose();
  if(getScriptArgs().length>2) {
   StringBuilder selected=new StringBuilder();
   for(long address:changes)selected.append(Long.toHexString(address)).append('\n');
   Files.writeString(Path.of(getScriptArgs()[2]),selected.toString());
  }
 }
}
