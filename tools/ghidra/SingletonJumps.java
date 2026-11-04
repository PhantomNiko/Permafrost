// Expose compiler-generated one-entry cleanup jump tables to the decompiler.
// Analysis snapshots only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import ghidra.program.model.listing.FlowOverride;
public class SingletonJumps extends GhidraScript {
 public void run() throws Exception {
  int count=0;
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   var parts=line.split("\\t");long site=Long.parseLong(parts[0],16),target=Long.parseLong(parts[1],16);
   var owner=getFunctionContaining(toAddr(site));
   if(owner==null)owner=getFunctionBefore(toAddr(site));
   var separate=getFunctionAt(toAddr(target));
   if(separate!=null && separate!=owner)removeFunction(separate);
   clearListing(toAddr(site),toAddr(site+6));
   var bytes=ByteBuffer.allocate(7).order(ByteOrder.LITTLE_ENDIAN)
    .put((byte)0xe9).putInt((int)(target-site-5)).put((byte)0x90).put((byte)0x90).array();
   currentProgram.getMemory().setBytes(toAddr(site),bytes);disassemble(toAddr(site));
   getInstructionAt(toAddr(site)).setFlowOverride(FlowOverride.NONE);
   if(owner!=null)CreateFunctionCmd.fixupFunctionBody(currentProgram,owner,monitor);
   count++;
  }
  println("Exposed "+count+" single-target cleanup jumps");
 }
}
