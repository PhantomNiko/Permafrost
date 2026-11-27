// Recover arguments at calls with constant printf-style format strings.
// Overrides describe the individual call, preserving the variadic callee ABI.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import java.util.*;
import java.nio.file.*;

public class FormatCalls extends GhidraScript {
 private Set<Long> constants(Varnode node,int depth) {
  if(node.isConstant())return Set.of(node.getOffset());
  if(depth==0 || node.getDef()==null)return null;
  PcodeOp op=node.getDef();
  if(op.getOpcode()==PcodeOp.COPY || op.getOpcode()==PcodeOp.CAST)
   return constants(op.getInput(0),depth-1);
  var result=new TreeSet<Long>();
  if(op.getOpcode()==PcodeOp.MULTIEQUAL) {
   for(Varnode input:op.getInputs()) {
    var values=constants(input,depth-1);if(values==null)return null;
    result.addAll(values);if(result.size()>16)return null;
   }
   return result;
  }
  if(op.getOpcode()==PcodeOp.PTRSUB || op.getOpcode()==PcodeOp.INT_ADD) {
   var a=constants(op.getInput(0),depth-1);var b=constants(op.getInput(1),depth-1);
   if(a==null || b==null)return null;
   for(long first:a)for(long second:b)result.add(first+second);
   return result.size()>16?null:result;
  }
  return null;
 }
 private Long constant(Varnode node,int depth) {
  if(node.isConstant())return node.getOffset();
  if(depth==0 || node.getDef()==null)return null;
  PcodeOp op=node.getDef();
  if(op.getOpcode()==PcodeOp.COPY || op.getOpcode()==PcodeOp.CAST)
   return constant(op.getInput(0),depth-1);
  if(op.getOpcode()==PcodeOp.PTRSUB || op.getOpcode()==PcodeOp.INT_ADD) {
   Long a=constant(op.getInput(0),depth-1),b=constant(op.getInput(1),depth-1);
   if(a!=null && b!=null)return a+b;
  }
  return null;
 }
 private String text(long address) {
  StringBuilder out=new StringBuilder();
  try {
   for(int i=0;i<4096;i++) {
    int c=getByte(toAddr(address+i))&255;
    if(c==0)return out.toString();
    if(c<9 || c>126)return null;
    out.append((char)c);
   }
  }catch(Exception exception){}
  return null;
 }
 private List<DataType> arguments(String format)throws Exception {
  var result=new ArrayList<DataType>();
  int word=currentProgram.getDefaultPointerSize();
  DataType pointer=new PointerDataType(VoidDataType.dataType,word,currentProgram.getDataTypeManager());
  for(int i=0;i<format.length();i++) {
   if(format.charAt(i)!='%')continue;
   if(++i==format.length())throw new Exception("incomplete format");
   if(format.charAt(i)=='%')continue;
   while(i<format.length() && "-+ #0'".indexOf(format.charAt(i))>=0)i++;
   if(i<format.length() && format.charAt(i)=='*'){result.add(IntegerDataType.dataType);i++;}
   else while(i<format.length() && Character.isDigit(format.charAt(i)))i++;
   if(i<format.length() && format.charAt(i)=='.') {
    i++;
    if(i<format.length() && format.charAt(i)=='*'){result.add(IntegerDataType.dataType);i++;}
    else while(i<format.length() && Character.isDigit(format.charAt(i)))i++;
   }
   String length="";
   while(i<format.length() && "hljztL".indexOf(format.charAt(i))>=0)length+=format.charAt(i++);
   if(i==format.length())throw new Exception("incomplete conversion");
   char spec=format.charAt(i);
   if("spn".indexOf(spec)>=0)result.add(pointer);
   else if("aAeEfFgG".indexOf(spec)>=0) {
    if(length.equals("L"))throw new Exception("long double needs explicit ABI review");
    result.add(DoubleDataType.dataType);
   }else if("diuoxXc".indexOf(spec)>=0) {
    int size=length.equals("ll") || length.equals("j")?8:
      length.equals("l") || length.equals("z") || length.equals("t")?word:4;
    result.add(size==8?UnsignedLongLongDataType.dataType:UnsignedIntegerDataType.dataType);
   }else throw new Exception("unsupported conversion "+spec);
  }
  return result;
 }
 public void run()throws Exception {
  boolean appleArm=currentProgram.getRegister("x0")!=null;
  boolean arm32=currentProgram.getRegister("r0")!=null;
  // Arguments: first last report target:fixed-count:format-index [...].
  String[] args=getScriptArgs();long first=Long.decode(args[0]),last=Long.decode(args[1]);
  var targets=new HashMap<Long,int[]>();
  for(int i=3;i<args.length;i++) {
   String[] fields=args[i].split(":");
   targets.put(Long.decode(fields[0]),new int[]{Integer.parseInt(fields[1]),Integer.parseInt(fields[2])});
  }
  var output=new ArrayList<String>();
  var decompiler=new DecompInterface();decompiler.openProgram(currentProgram);
  var functions=currentProgram.getFunctionManager().getFunctions(true);int count=0;
  while(functions.hasNext() && !monitor.isCancelled()) {
   Function caller=functions.next();long address=caller.getEntryPoint().getOffset();
   if(address<first || address>=last)continue;
   boolean relevant=false;
   for(Function callee:caller.getCalledFunctions(monitor))if(targets.containsKey(callee.getEntryPoint().getOffset()))relevant=true;
   if(!relevant)continue;
   var result=decompiler.decompileFunction(caller,90,monitor);
   if(!result.decompileCompleted())continue;
   var operations=result.getHighFunction().getPcodeOps();
   while(operations.hasNext()) {
    PcodeOp op=operations.next();
    if(op.getOpcode()!=PcodeOp.CALL)continue;
    // An inlined helper retains its original instruction address. Its
    // override belongs to the helper; writing it under each caller can
    // replace the helper's signature with an unusable cross-function label.
    Function instructionOwner=getFunctionContaining(op.getSeqnum().getTarget());
    if(instructionOwner!=null && instructionOwner!=caller)continue;
    int[] model=targets.get(op.getInput(0).getOffset());
    if(model==null || op.getNumInputs()<=model[1]+1)continue;
    var pointers=constants(op.getInput(model[1]+1),24);if(pointers==null || pointers.isEmpty())continue;
    var formats=new ArrayList<String>();
    for(long pointer:pointers) {String value=text(pointer);if(value==null){formats.clear();break;}formats.add(value);}
    if(formats.isEmpty())continue;
    Function callee=getFunctionAt(op.getInput(0).getAddress());
    if(callee==null)callee=getFunctionAt(toAddr(op.getInput(0).getOffset()));
    if(callee!=null && callee.isThunk())callee=callee.getThunkedFunction(true);
    if(callee==null || callee.getParameterCount()<model[0])continue;
    try {
     var types=new ArrayList<DataType>();
     for(int i=0;i<model[0];i++)types.add(callee.getParameter(i).getDataType());
     var optional=new ArrayList<DataType>();
     for(String format:formats) {
      var variant=arguments(format);
      for(int i=0;i<variant.size();i++) {
       DataType next=variant.get(i);
       if(i==optional.size()){optional.add(next);continue;}
       DataType previous=optional.get(i);
       if(previous.isEquivalent(next))continue;
       if(previous instanceof AbstractFloatDataType || next instanceof AbstractFloatDataType)
        throw new Exception("Conflicting floating format operands require explicit ABI review");
       int width=Math.max(previous.getLength(),next.getLength());
       optional.set(i,width==8?UnsignedLongLongDataType.dataType:UnsignedIntegerDataType.dataType);
      }
     }
     if(arm32 && optional.stream().anyMatch(t->t.getLength()>4))
      throw new Exception("ARM32 wide optional operands require explicit ABI review");
     types.addAll(optional);
     var parameters=new ParameterDefinition[types.size()];
     for(int i=0;i<types.size();i++)parameters[i]=new ParameterDefinitionImpl("arg"+i,types.get(i),null);
     var signature=new FunctionDefinitionDataType("format_"+op.getSeqnum().getTarget(),currentProgram.getDataTypeManager());
     signature.setArguments(parameters);signature.setReturnType(callee.getReturnType());
     String convention=appleArm?"__pf_format"+model[0]:
       currentProgram.getCompilerSpec().getDefaultCallingConvention().getName();
     if(currentProgram.getCompilerSpec().getCallingConvention(convention)==null)
      throw new Exception("Missing format-call convention "+convention);
     signature.setCallingConvention(convention);
     HighFunctionDBUtil.writeOverride(caller,op.getSeqnum().getTarget(),signature);
     output.add(String.format("%x\t%s\t%d\t%s",address,op.getSeqnum().getTarget(),types.size(),String.join(" | ",formats).replace("\n","\\n").replace("\t","\\t")));
     count++;
    }catch(Exception exception){printerr("Format at "+op.getSeqnum().getTarget()+": "+exception.getMessage());}
   }
   decompiler.flushCache();
  }
  decompiler.dispose();Files.write(Path.of(args[2]),output);
  println("Recovered constant format calls: "+count);
 }
}
