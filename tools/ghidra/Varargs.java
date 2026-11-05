// Recover Darwin ARM varargs using constant formats and their native storage.
// Analysis only. Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.program.model.pcode.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.*;

public class Varargs extends GhidraScript {
 long literalFirst,literalLast;
 Set<Long> constants(Varnode v,int depth) {
  if(v==null || depth>12)return Collections.emptySet();
  if(v.isConstant())return Set.of(v.getOffset());
  if(v.isAddress() && v.getOffset()>=literalFirst && v.getOffset()+v.getSize()<=literalLast) {
   try {
    if(v.getSize()==4)return Set.of(Integer.toUnsignedLong(getInt(v.getAddress())));
    if(v.getSize()==8)return Set.of(getLong(v.getAddress()));
   }catch(Exception exception){return Collections.emptySet();}
  }
  var op=v.getDef();if(op==null)return Collections.emptySet();
  int k=op.getOpcode();
  if(k==PcodeOp.COPY || k==PcodeOp.CAST)return constants(op.getInput(0),depth+1);
  if(k==PcodeOp.LOAD) {
   var locations=constants(op.getInput(1),depth+1);var result=new HashSet<Long>();
   try {for(long address:locations) {
    long value=v.getSize()==8?getLong(toAddr(address)):v.getSize()==4?
       Integer.toUnsignedLong(getInt(toAddr(address))):v.getSize()==2?
       Short.toUnsignedLong(getShort(toAddr(address))):Byte.toUnsignedLong(getByte(toAddr(address)));
    result.add(value);
   }}catch(Exception exception){return Collections.emptySet();}
   return result;
  }
  if(k==PcodeOp.MULTIEQUAL) {
   var result=new HashSet<Long>();
   for(var input:op.getInputs()) {var values=constants(input,depth+1);if(values.isEmpty())return values;result.addAll(values);}
   return result.size()>32?Collections.emptySet():result;
  }
  if(k==PcodeOp.INT_ADD || k==PcodeOp.PTRSUB || k==PcodeOp.PTRADD) {
   var a=constants(op.getInput(0),depth+1);var b=constants(op.getInput(1),depth+1);
   var scales=k==PcodeOp.PTRADD?constants(op.getInput(2),depth+1):Set.of(1L);
   if(a.size()*b.size()*scales.size()>32)return Collections.emptySet();
   var result=new HashSet<Long>();for(long x:a)for(long y:b)for(long scale:scales)result.add(x+y*scale);
   return result;
  }
  return Collections.emptySet();
 }
 List<Integer> widths(long address) throws Exception {
  StringBuilder text=new StringBuilder();
  for(int i=0;i<1024;i++){int b=getByte(toAddr(address+i))&255;if(b==0)break;text.append((char)b);}
  var result=new ArrayList<Integer>();
  for(int i=0;i<text.length();i++) {
   if(text.charAt(i)!='%')continue;
   if(++i==text.length())throw new Exception("unterminated format");
   if(text.charAt(i)=='%')continue;
   StringBuilder length=new StringBuilder();
   for(;i<text.length();i++) {
    char c=text.charAt(i);
    if(c=='$')throw new Exception("positional format requires review");
    if(c=='*')result.add(4);
    if("hljztL".indexOf(c)>=0)length.append(c);
    if("diuoxXfFeEgGaAcspn".indexOf(c)>=0) {
     boolean floating="fFeEgGaA".indexOf(c)>=0;
     result.add(floating || length.toString().equals("ll") || length.toString().equals("j")?8:4);break;
    }
   }
  }
  if(result.size()>16)throw new Exception("unexpected format argument count");
  return result;
 }
 public void run() throws Exception {
  boolean arm64=currentProgram.getRegister("x0")!=null;
  // TSV: native address, number of fixed arguments (last one is the format).
  var specs=new HashMap<Long,Integer>();
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   var fields=line.split("\\t");specs.put(Long.parseLong(fields[0],16),Integer.parseInt(fields[1]));
  }
  long first=Long.decode(getScriptArgs()[2]),last=Long.decode(getScriptArgs()[3]);
  literalFirst=first;literalLast=last;
  var refs=currentProgram.getReferenceManager();
  var instructions=currentProgram.getListing().getInstructions(true);
  while(instructions.hasNext())for(var ref:instructions.next().getReferencesFrom())
   if(ref.getReferenceType().isCall() &&
      ref.getToAddress().getOffset()>=0x60000000L && ref.getToAddress().getOffset()<0x60001000L)refs.delete(ref);
  var oldAliases=new ArrayList<Function>();var all=currentProgram.getFunctionManager().getFunctions(true);
  while(all.hasNext()) {var f=all.next();long a=f.getEntryPoint().getOffset();if(a>=0x60000000L && a<0x60001000L)oldAliases.add(f);}
  for(var f:oldAliases)removeFunction(f);
  if(currentProgram.getMemory().getBlock(toAddr(0x60000000L))==null) {
   byte[] bytes=new byte[4096];for(int i=0;i<bytes.length;i+=16) {if(arm64){bytes[i]=(byte)0xc0;bytes[i+1]=3;bytes[i+2]=0x5f;bytes[i+3]=(byte)0xd6;}
    else{bytes[i]=0x1e;bytes[i+1]=(byte)0xff;bytes[i+2]=0x2f;bytes[i+3]=(byte)0xe1;}}
   var block=currentProgram.getMemory().createInitializedBlock("pf_vararg_signatures",toAddr(0x60000000L),new java.io.ByteArrayInputStream(bytes),bytes.length,monitor,false);
   block.setExecute(true);
  }
  var aliases=new HashMap<String,Function>();var mappings=new TreeMap<String,String>();
  var dec=new DecompInterface();dec.openProgram(currentProgram);
  var functions=new ArrayList<Function>();var it=currentProgram.getFunctionManager().getFunctions(true);
  while(it.hasNext()) {var f=it.next();long a=f.getEntryPoint().getOffset();if(a>=first && a<last)functions.add(f);}
  int calls=0,unknown=0;
  for(var caller:functions) {
   var result=dec.decompileFunction(caller,120,monitor);if(!result.decompileCompleted())continue;
   var ops=result.getHighFunction().getPcodeOps();
   while(ops.hasNext()) {
    var op=ops.next();if(op.getOpcode()!=PcodeOp.CALL)continue;
    long address=op.getInput(0).getOffset();var fixed=specs.get(address);if(fixed==null)continue;
    if(op.getNumInputs()<=fixed)continue;
    var formats=constants(op.getInput(fixed),0);var arguments=new ArrayList<Integer>();
    try {
     if(formats.isEmpty())throw new Exception("dynamic format");
     for(long format:formats) {
      var candidate=widths(format);
      for(int i=0;i<Math.min(arguments.size(),candidate.size());i++)
       if(!arm64 && !arguments.get(i).equals(candidate.get(i)))throw new Exception("format alternatives have different storage");
      if(candidate.size()>arguments.size())arguments=new ArrayList<Integer>(candidate);
     }
    }
    catch(Exception e) {unknown++;println("Review varargs at "+op.getSeqnum().getTarget()+": "+e.getMessage());continue;}
    String suffix=arm64?Integer.toString(arguments.size()):arguments.toString().replaceAll("[^0-9]","_");
    String name="pf_varargs_"+Long.toHexString(address)+"_"+suffix;
    Function alias=aliases.get(name);
    if(alias==null) {
     var nativeFunction=getFunctionAt(toAddr(address));
     var virtual=toAddr(0x60000000L+aliases.size()*16L);
     disassemble(virtual);
     alias=createFunction(virtual,name);
     if(alias==null)throw new Exception("cannot create analysis signature "+name);
     var parameters=new ArrayList<ParameterImpl>();
     for(int index=0;index<fixed;index++) {
      var p=nativeFunction.getParameter(index);
      parameters.add(new ParameterImpl(p.getName(),p.getDataType(),
       new VariableStorage(currentProgram,currentProgram.getRegister((arm64?"x":"r")+index)),currentProgram,SourceType.USER_DEFINED));
     }
     int word=fixed;
     for(int index=0;index<arguments.size();index++) {
      int width=arm64?8:arguments.get(index);VariableStorage storage;
      if(arm64)storage=new VariableStorage(currentProgram,index*8,8);
      else if(word>=4) {
       storage=new VariableStorage(currentProgram,(word-4)*4,width);word+=width/4;
      } else {
       var pieces=new ArrayList<Varnode>();
       for(int offset=0;offset<width;offset+=4,word++)
        pieces.add(word<4?new Varnode(currentProgram.getRegister("r"+word).getAddress(),4):
            new Varnode(currentProgram.getAddressFactory().getStackSpace().getAddress((word-4)*4),4));
       Collections.reverse(pieces);storage=new VariableStorage(currentProgram,pieces.toArray(new Varnode[0]));
      }
      parameters.add(new ParameterImpl("vararg"+index,width==8?UnsignedLongLongDataType.dataType:
       UnsignedIntegerDataType.dataType,storage,currentProgram,SourceType.USER_DEFINED));
     }
     alias.setReturnType(nativeFunction.getReturnType(),SourceType.USER_DEFINED);
     alias.replaceParameters(parameters,Function.FunctionUpdateType.CUSTOM_STORAGE,true,SourceType.USER_DEFINED);
     aliases.put(name,alias);mappings.put(name,nativeFunction.getName());
    }
    var reference=refs.addMemoryReference(op.getSeqnum().getTarget(),alias.getEntryPoint(),
       RefType.UNCONDITIONAL_CALL,SourceType.USER_DEFINED,0);
    refs.setPrimary(reference,true);
    calls++;
   }
  }
  dec.dispose();
  var lines=new ArrayList<String>();for(var e:mappings.entrySet())lines.add("#define "+e.getKey()+" "+e.getValue());
  Files.write(Path.of(getScriptArgs()[1]),lines);
  println("Recovered "+calls+" vararg calls; "+unknown+" require review");
 }
}
