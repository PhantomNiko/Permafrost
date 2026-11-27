// Recover bounded signed relative jump tables from reviewed native instructions.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.pcode.JumpTable;
import ghidra.program.model.listing.FlowOverride;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.IntegerDataType;
import ghidra.program.model.address.AddressSet;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;

public class SwitchTargets extends GhidraScript {
 public void run() throws Exception {
  int recovered=0;
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   if(line.isBlank())continue;
   var f=line.split("\t");long entry=Long.parseLong(f[0],16),site=Long.parseLong(f[1],16),table=Long.parseLong(f[2],16),limit=Long.parseLong(f[4],16);int count=Integer.parseInt(f[3]);
   if(count<1 || count>4096 || site<entry || site>=limit || table<entry || table+count*4L>limit)throw new Exception("Unbounded switch table");
   var owner=getFunctionAt(toAddr(entry));if(owner==null)throw new Exception("Missing switch owner");
   long anchor=f.length>5?Long.parseLong(f[5],16):table;
   if(anchor<entry || anchor>=limit)throw new Exception("Switch anchor outside native owner");
   var targets=new ArrayList<ghidra.program.model.address.Address>();
   for(int i=0;i<count;i++) {
    long destination=anchor+getInt(toAddr(table+4L*i));
    if(destination<entry || destination>=limit)throw new Exception("Switch target outside native owner");
    var address=toAddr(destination);var separate=getFunctionAt(address);
    if(separate!=null && separate!=owner)throw new Exception("Switch target has another function owner");
    disassemble(address);if(!targets.contains(address))targets.add(address);
   }
   var instruction=getInstructionAt(toAddr(site));
   if(instruction==null) {
    disassemble(toAddr(site));instruction=getInstructionAt(toAddr(site));
   }
   if(instruction==null)throw new Exception("Missing native switch instruction at "+Long.toHexString(site));
   instruction.setFlowOverride(FlowOverride.NONE);
   for(var address:targets)instruction.addOperandReference(0,address,RefType.COMPUTED_JUMP,SourceType.USER_DEFINED);
   clearListing(toAddr(table),toAddr(table+count*4L-1));createData(toAddr(table),new ArrayDataType(IntegerDataType.dataType,count,4));
   CreateFunctionCmd.fixupFunctionBody(currentProgram,owner,monitor);
   if(!owner.getBody().contains(toAddr(site))) {
    var body=new AddressSet(owner.getBody());
    body.add(instruction.getMinAddress(),instruction.getMaxAddress());
    owner.setBody(body);
   }
   new JumpTable(toAddr(site),targets,true,0).writeOverride(owner);recovered++;
  }
  println("Recovered "+recovered+" bounded relative switch tables");
 }
}
