// Recover indirect calls through a module's private host-service pointer.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.app.decompiler.DecompInterface;
import ghidra.program.model.data.*;
import ghidra.program.model.pcode.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.*;

public class HostCalls extends GhidraScript {
    private long global;
    private long poolStart, poolEnd;
    private int decompileTimeout=60;
    private Set<Long> selected=new HashSet<>();
    private boolean host(Varnode node,int depth) {
        if(node==null || depth>16)return false;
        if(node.getAddress().isMemoryAddress() && node.getOffset()==global)return true;
        var def=node.getDef();if(def==null)return false;
        int op=def.getOpcode();
        if(op==PcodeOp.LOAD) {
            var address=def.getInput(1);
            Long resolved=constant(address,24);
            return resolved!=null && resolved==global;
        }
        if(op==PcodeOp.COPY || op==PcodeOp.CAST || op==PcodeOp.INT_ZEXT)
            return host(def.getInput(0),depth+1);
        if(op==PcodeOp.MULTIEQUAL) {
            for(int i=0;i<def.getNumInputs();i++)if(host(def.getInput(i),depth+1))return true;
        }
        return false;
    }
    private Long field(Varnode node,int depth) {
        if(node==null || depth>16)return null;
        var def=node.getDef();if(def==null)return null;
        int op=def.getOpcode();
        if(op==PcodeOp.COPY || op==PcodeOp.CAST || op==PcodeOp.INT_ZEXT)
            return field(def.getInput(0),depth+1);
        if(op!=PcodeOp.LOAD)return null;
        var pointer=def.getInput(1);var sum=pointer.getDef();if(sum==null)return null;
        for(int i=0;i<16 && (sum.getOpcode()==PcodeOp.COPY || sum.getOpcode()==PcodeOp.CAST);i++){pointer=sum.getInput(0);sum=pointer.getDef();if(sum==null)return null;}
        if(sum.getOpcode()==PcodeOp.INT_ADD || sum.getOpcode()==PcodeOp.PTRSUB) {
            for(int i=0;i<2;i++)if(sum.getInput(i).isConstant() && host(sum.getInput(1-i),0))return sum.getInput(i).getOffset();
        }
        if(sum.getOpcode()==PcodeOp.PTRADD && host(sum.getInput(0),0) && sum.getInput(1).isConstant() && sum.getInput(2).isConstant())
            return sum.getInput(1).getOffset()*sum.getInput(2).getOffset();
        return null;
    }
 private Set<Long> constants(Varnode node,int depth) {
  Long scalar=constant(node,depth);if(scalar!=null)return Set.of(scalar);
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
  if(node.getAddress().isMemoryAddress() && node.getOffset()>=poolStart && node.getOffset()+node.getSize()<=poolEnd) {
   try {if(node.getSize()==4)return Integer.toUnsignedLong(getInt(toAddr(node.getOffset())));}catch(Exception ignored){}
  }
  if(depth==0 || node.getDef()==null)return null;
  PcodeOp op=node.getDef();
  if(op.getOpcode()==PcodeOp.COPY || op.getOpcode()==PcodeOp.CAST)
   return constant(op.getInput(0),depth-1);
  if(op.getOpcode()==PcodeOp.LOAD) {
   Long address=constant(op.getInput(1),depth-1);
   if(address!=null && address>=poolStart && address+node.getSize()<=poolEnd)try {
    if(node.getSize()==4)return Integer.toUnsignedLong(getInt(toAddr(address)));
   }catch(Exception ignored){}
  }
  if(op.getOpcode()==PcodeOp.PTRSUB || op.getOpcode()==PcodeOp.INT_ADD) {
   Long a=constant(op.getInput(0),depth-1),b=constant(op.getInput(1),depth-1);
   if(a!=null && b!=null)return currentProgram.getDefaultPointerSize()==4?(a+b)&0xffffffffL:a+b;
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
    private FunctionDefinitionDataType formatType(PcodeOp operation,FunctionDefinitionDataType base,int index)throws Exception {
        if(operation.getNumInputs()<=index+1)return base;
        var pointers=constants(operation.getInput(index+1),24);if(pointers==null || pointers.isEmpty())return base;
        var optional=new ArrayList<DataType>();
        for(long pointer:pointers) {
            String format=text(pointer);if(format==null)return base;
            var next=arguments(format);
            for(int i=0;i<next.size();i++) {
                if(i==optional.size()){optional.add(next.get(i));continue;}
                var previous=optional.get(i);var type=next.get(i);
                if(previous.isEquivalent(type))continue;
                if(previous instanceof AbstractFloatDataType || type instanceof AbstractFloatDataType)
                    throw new Exception("Conflicting floating format operands");
                optional.set(i,Math.max(previous.getLength(),type.getLength())==8?UnsignedLongLongDataType.dataType:UnsignedIntegerDataType.dataType);
            }
        }
        if(currentProgram.getRegister("r0")!=null && optional.stream().anyMatch(t->t.getLength()>4))
            throw new Exception("ARM32 wide optional operands require explicit ABI review");
        var parameters=new ArrayList<ParameterDefinition>();Collections.addAll(parameters,base.getArguments());
        for(var type:optional)parameters.add(new ParameterDefinitionImpl("arg"+parameters.size(),type,null));
        var signature=new FunctionDefinitionDataType("host_format_"+operation.getSeqnum().getTarget(),currentProgram.getDataTypeManager());
        signature.setArguments(parameters.toArray(new ParameterDefinition[0]));signature.setReturnType(base.getReturnType());
        String convention=currentProgram.getRegister("x0")!=null?"__pf_format"+base.getArguments().length:currentProgram.getCompilerSpec().getDefaultCallingConvention().getName();
        if(currentProgram.getCompilerSpec().getCallingConvention(convention)==null)throw new Exception("Missing format-call convention "+convention);
        signature.setCallingConvention(convention);return signature;
    }
    public void run()throws Exception {
        var args=getScriptArgs();global=Long.decode(args[1]);var parser=new CParser(currentProgram.getDataTypeManager());var slots=new HashMap<Long,FunctionDefinitionDataType>();
        for(String row:Files.readAllLines(Path.of(args[0]))) {
            if(row.isBlank())continue;
            var fields=row.split("\\t",2);var type=(FunctionDefinitionDataType)parser.parse(fields[1]);
            type.setCallingConvention(currentProgram.getCompilerSpec().getDefaultCallingConvention().getName());slots.put(Long.decode(fields[0]),type);
        }
        var formats=new HashMap<Long,Integer>();
        // Optional arguments: host-slot:zero-based-format-index.
        for(int i=2;i<args.length;i++){
            if(args[i].startsWith("timeout=")) {
                decompileTimeout=Integer.parseInt(args[i].substring(8));
                if(decompileTimeout<1)throw new IllegalArgumentException("Invalid decompiler timeout");
            }else if(args[i].startsWith("function="))selected.add(Long.decode(args[i].substring(9)));
            else if(args[i].startsWith("pool=")) {
                var range=args[i].substring(5).split(":");poolStart=Long.decode(range[0]);poolEnd=Long.decode(range[1]);
                if(poolEnd<=poolStart || (global>=poolStart && global<poolEnd))throw new IllegalArgumentException("Literal pool range includes runtime host state");
            }else {var model=args[i].split(":");formats.put(Long.decode(model[0]),Integer.parseInt(model[1]));}
        }
        var decompiler=new DecompInterface();decompiler.openProgram(currentProgram);int count=0,formatted=0;
        var functions=currentProgram.getFunctionManager().getFunctions(true);
        while(functions.hasNext()) {
            var function=functions.next();if(!selected.isEmpty() && !selected.contains(function.getEntryPoint().getOffset()))continue;var result=decompiler.decompileFunction(function,decompileTimeout,monitor);if(!result.decompileCompleted())continue;
            var operations=result.getHighFunction().getPcodeOps();
            while(operations.hasNext()) {
                var operation=operations.next();if(operation.getOpcode()!=PcodeOp.CALLIND)continue;
                var offset=field(operation.getInput(0),0);var type=offset==null?null:slots.get(offset);if(type==null)continue;
                if(formats.containsKey(offset))try{var full=formatType(operation,type,formats.get(offset));if(full!=type){type=full;formatted++;}}catch(Exception exception){printerr("Host format at "+operation.getSeqnum().getTarget()+": "+exception.getMessage());}
                HighFunctionDBUtil.writeOverride(function,operation.getSeqnum().getTarget(),type);count++;
            }
        }
        decompiler.dispose();if(count==0)throw new IllegalStateException("No private host calls matched");println("Recovered "+count+" private host-service call contracts; "+formatted+" constant format calls");
    }
}
