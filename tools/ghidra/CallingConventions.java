// Inspect and preserve literal RET stack effects; restore simple tail thunks.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.scalar.Scalar;
public class CallingConventions extends GhidraScript {
 public void run() throws Exception {
  int effects=0,thunks=0;
  var functions=currentProgram.getFunctionManager().getFunctions(true);
  while(functions.hasNext()) {
   var f=functions.next();
   if(f.getEntryPoint().getOffset()>=0x30000000L)continue;
   var instructions=currentProgram.getListing().getInstructions(f.getBody(),true);
   Integer purge=null;
   while(instructions.hasNext()) {
    var i=instructions.next();
    if(i.getMnemonicString().equalsIgnoreCase("RET")) {
     int value=0;
     if(i.getNumOperands()>0) for(Object object:i.getOpObjects(0))
      if(object instanceof Scalar)value=(int)((Scalar)object).getUnsignedValue();
     if(purge!=null && purge!=value)throw new Exception("Mixed RET effects at "+f.getEntryPoint());
     purge=value;
    }
   }
   if(purge!=null) {f.setStackPurgeSize(purge);effects++;}
   var i=getInstructionAt(f.getEntryPoint());
   if(i==null)continue;
   // Standard empty frame + tail branch, emitted for C++ ABI aliases.
   long p=f.getEntryPoint().getOffset();
   if(getByte(toAddr(p))==0x55 && (getByte(toAddr(p+1))&255)==0x89 &&
      (getByte(toAddr(p+2))&255)==0xe5 && (getByte(toAddr(p+3))&255)==0x5d) {
    var jump=getInstructionAt(toAddr(p+4));
    if(jump!=null && jump.getMnemonicString().equalsIgnoreCase("JMP") && jump.getFlows().length==1) {
     var target=getFunctionAt(jump.getFlows()[0]);
     if(target!=null && target!=f){f.setThunkedFunction(target);thunks++;}
    }
   }
  }
  // A tail transfer has the target's RET effect after its own frame is gone.
  for(int pass=0;pass<3;pass++) {
   var tails=currentProgram.getFunctionManager().getFunctions(true);
   while(tails.hasNext()) {
    var f=tails.next();
    if(f.getEntryPoint().getOffset()>=0x30000000L)continue;
    var instructions=currentProgram.getListing().getInstructions(f.getBody(),true);
    boolean hasRet=false;Integer tailPurge=null;
    while(instructions.hasNext()) {
     var instruction=instructions.next();
     if(instruction.getMnemonicString().equalsIgnoreCase("RET"))hasRet=true;
     if(instruction.getMnemonicString().equalsIgnoreCase("JMP") && instruction.getFlows().length==1) {
      var target=getFunctionAt(instruction.getFlows()[0]);
      if(target!=null && target!=f && !target.hasNoReturn() && target.getStackPurgeSize()>=0)
       tailPurge=target.getStackPurgeSize();
     }
    }
    if(!hasRet && tailPurge!=null)f.setStackPurgeSize(tailPurge);
   }
  }
  println("Recorded "+effects+" RET effects and "+thunks+" ABI thunks");
 }
}
