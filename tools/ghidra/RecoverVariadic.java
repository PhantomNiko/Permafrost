// Recover formatted variadic calls whose native ABI uses stack argument slots.
// Arguments: callee address, fixed parameter count, format parameter index,
//            installed calling model name.
// Optional fifth argument: reviewed runtime-call arities (address TAB count).
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.program.model.data.*;
import ghidra.program.model.pcode.*;
import java.util.ArrayList;
import java.util.List;
import java.util.LinkedHashSet;
import java.util.HashMap;
import java.nio.file.Files;
import java.nio.file.Path;
import ghidra.program.model.listing.Function;

public class RecoverVariadic extends GhidraScript {
 private Long constant(Varnode node,int depth) {
  if(node==null || depth>12)return null;
  if(node.isConstant())return node.getOffset();
  var operation=node.getDef();
  if(operation==null)return null;
  int code=operation.getOpcode();
  if(code==PcodeOp.COPY || code==PcodeOp.CAST || code==PcodeOp.INT_ZEXT)
   return constant(operation.getInput(0),depth+1);
  if(code==PcodeOp.INT_ADD || code==PcodeOp.PTRSUB || code==PcodeOp.INT_SUB) {
   Long left=constant(operation.getInput(0),depth+1);
   Long right=constant(operation.getInput(1),depth+1);
   if(left!=null && right!=null)return code==PcodeOp.INT_SUB?left-right:left+right;
  }
  if(code==PcodeOp.PTRADD) {
   Long base=constant(operation.getInput(0),depth+1);
   Long index=constant(operation.getInput(1),depth+1);
   Long stride=constant(operation.getInput(2),depth+1);
   if(base!=null && index!=null && stride!=null)return base+index*stride;
  }
  return null;
 }
 private List<String> formats(Varnode node,int depth) {
  if(node==null || depth>12)return null;
  String literal=text(constant(node,0));
  if(literal!=null)return List.of(literal);
  var operation=node.getDef();
  if(operation==null)return null;
  int code=operation.getOpcode();
  if(code==PcodeOp.COPY || code==PcodeOp.CAST)return formats(operation.getInput(0),depth+1);
  if(code!=PcodeOp.MULTIEQUAL)return null;
  var values=new ArrayList<String>();
  for(int index=0;index<operation.getNumInputs();index++) {
   var branch=formats(operation.getInput(index),depth+1);
   if(branch==null)return null;
   values.addAll(branch);
  }
  return values;
 }
 private String text(Long address) {
  if(address==null)return null;
  StringBuilder value=new StringBuilder();
  try {
   for(int i=0;i<1024;i++) {
    int c=currentProgram.getMemory().getByte(toAddr(address+i))&255;
    if(c==0)return value.toString();
    if(c<9 || c>126)return null;
    value.append((char)c);
   }
  }catch(Exception ignored){}
  return null;
 }
 private List<DataType> arguments(String format) {
  var result=new ArrayList<DataType>();
  if(format==null) {result.add(UnsignedLongLongDataType.dataType);return result;}
  for(int i=0;i<format.length();i++) {
   if(format.charAt(i)!='%')continue;
   if(++i>=format.length())break;
   if(format.charAt(i)=='%')continue;
   while(i<format.length() && "#0- +".indexOf(format.charAt(i))>=0)i++;
   while(i<format.length() && (Character.isDigit(format.charAt(i)) || format.charAt(i)=='*')) {
    if(format.charAt(i)=='*')result.add(IntegerDataType.dataType);
    i++;
   }
   if(i<format.length() && format.charAt(i)=='.') {
    i++;
    while(i<format.length() && (Character.isDigit(format.charAt(i)) || format.charAt(i)=='*')) {
     if(format.charAt(i)=='*')result.add(IntegerDataType.dataType);
     i++;
    }
   }
   boolean wide=false;
   while(i<format.length() && "hljztL".indexOf(format.charAt(i))>=0) {
    wide|="ljztL".indexOf(format.charAt(i))>=0;i++;
   }
   if(i>=format.length())break;
   char conversion=format.charAt(i);
   if(conversion=='s')result.add(new PointerDataType(CharDataType.dataType));
   else if(conversion=='p' || conversion=='n')result.add(new PointerDataType(VoidDataType.dataType));
   else if("fFeEgGaA".indexOf(conversion)>=0)result.add(DoubleDataType.dataType);
   else result.add(wide?UnsignedLongLongDataType.dataType:IntegerDataType.dataType);
  }
  if(result.size()>128)throw new IllegalArgumentException("Unbounded format argument list: "+format);
  return result;
 }
 public void run() throws Exception {
  var options=getScriptArgs();
  long target=Long.parseLong(options[0],16);
  int fixed=Integer.parseInt(options[1]),formatIndex=Integer.parseInt(options[2]);
  String model=options[3];
  var reviewed=new HashMap<Long,Integer>();
  if(options.length>4)for(String line:Files.readAllLines(Path.of(options[4]))) {
   if(line.isBlank() || line.startsWith("#"))continue;
   var fields=line.split("\t");
   int arity=Integer.parseInt(fields[1]);
   if(arity<0 || arity>128)throw new IllegalArgumentException("Invalid reviewed arity");
   reviewed.put(Long.parseLong(fields[0],16),arity);
  }
  if(currentProgram.getCompilerSpec().getCallingConvention(model)==null)
   throw new IllegalArgumentException("Install calling model first: "+model);
  var callee=getFunctionAt(toAddr(target));
  if(callee==null || callee.getParameterCount()!=fixed)
   throw new IllegalArgumentException("Callee fixed parameter count does not match");
  var decompiler=new DecompInterface();decompiler.openProgram(currentProgram);
  var callers=new LinkedHashSet<Function>();
  for(var functions=currentProgram.getFunctionManager().getFunctions(true);functions.hasNext();)
   callers.add(functions.next());
  int count=0,unresolved=0;
  println("Inspecting "+callers.size()+" native variadic callers");
  for(var function:callers) {
   monitor.checkCancelled();
   var result=decompiler.decompileFunction(function,180,monitor);
   if(!result.decompileCompleted())continue;
   var high=result.getHighFunction();
   for(var operations=high.getPcodeOps();operations.hasNext();) {
    var operation=operations.next();
    if(operation.getOpcode()!=PcodeOp.CALL || operation.getNumInputs()<=formatIndex+1)continue;
    var targetNode=operation.getInput(0);
    Long destination=targetNode.isAddress()?targetNode.getAddress().getOffset():constant(targetNode,0);
    if(destination==null || destination.longValue()!=target)continue;
    var callsite=operation.getSeqnum().getTarget();
    var parameters=new ArrayList<ParameterDefinition>();
    for(var parameter:callee.getParameters())
     parameters.add(new ParameterDefinitionImpl(parameter.getName(),parameter.getDataType(),null));
    var alternatives=formats(operation.getInput(formatIndex+1),0);
    var variadic=new ArrayList<DataType>();
    if(alternatives==null) {
     Integer arity=reviewed.get(callsite.getOffset());
     if(arity==null) {
      println("Runtime format at "+callsite+" in "+function.getEntryPoint()+": review native stack arguments");
      unresolved++;continue;
     }
     for(int index=0;index<arity;index++)variadic.add(UnsignedLongLongDataType.dataType);
    }
    else for(String alternative:alternatives) {
     var types=arguments(alternative);
     for(int index=0;index<types.size();index++) {
      if(index==variadic.size())variadic.add(types.get(index));
      else if(!variadic.get(index).isEquivalent(types.get(index)))
       variadic.set(index,UnsignedLongLongDataType.dataType);
     }
    }
    for(var type:variadic)
     parameters.add(new ParameterDefinitionImpl("argument_"+parameters.size(),type,null));
    var signature=new FunctionDefinitionDataType("pf_variadic_call",currentProgram.getDataTypeManager());
    signature.setReturnType(callee.getReturnType());
    signature.setArguments(parameters.toArray(new ParameterDefinition[0]));
    signature.setCallingConvention(model);
    // Inline and tail-merged bodies need an override in each caller's
    // namespace. Preserve other callers' overrides at the same instruction.
    var overrideSpace=HighFunction.findCreateOverrideSpace(function);
    for(var symbol:currentProgram.getSymbolTable().getSymbols(callsite)) {
     var namespace=symbol.getParentNamespace();
     if(symbol.getName().startsWith("prt_") && namespace.equals(overrideSpace))symbol.delete();
    }
    try {
     new DataTypeSymbol(signature,"prt","/auto_proto").writeSymbol(
      currentProgram.getSymbolTable(),callsite,overrideSpace,
      currentProgram.getDataTypeManager(),false);
    }
    catch(Exception error) {
     printerr("Variadic override failed in "+function.getEntryPoint()+" at "+callsite);
     throw error;
    }
    count++;
   }
  }
  decompiler.dispose();
  if(count==0)throw new IllegalStateException("No calls matched the requested variadic callee");
  if(unresolved!=0)throw new IllegalStateException(unresolved+" runtime formats require reviewed arities");
  println("Recovered "+count+" native variadic calls; "+unresolved+" runtime formats need review");
 }
}
