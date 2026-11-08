// Describe fixed-width WMAP service pointers without widening adjacent slots.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.app.decompiler.DecompInterface;
import ghidra.program.model.data.*;
import ghidra.program.model.pcode.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.HashMap;

public class WireAPI extends GhidraScript {
    private FunctionDefinitionDataType service(Varnode node,
            HashMap<Long,FunctionDefinitionDataType> slots,int depth) {
        if(node==null || depth>12)return null;
        if(node.isConstant() || node.getAddress().isMemoryAddress()) {
            long address=node.isConstant()?node.getOffset():node.getAddress().getOffset();
            var found=slots.get(address);
            if(found!=null)return found;
            // ARM32 materializes service-field addresses through literal pools.
            if(address>=0x10000)try {
                found=slots.get(Integer.toUnsignedLong(currentProgram.getMemory().getInt(toAddr(address))));
                if(found!=null)return found;
            }catch(Exception ignored) {}
        }
        var definition=node.getDef();if(definition==null)return null;
        int opcode=definition.getOpcode();
        if(opcode==PcodeOp.CALLOTHER || opcode==PcodeOp.MULTIEQUAL) {
            for(int i=opcode==PcodeOp.CALLOTHER?1:0;i<definition.getNumInputs();i++) {
                var found=service(definition.getInput(i),slots,depth+1);
                if(found!=null)return found;
            }
            return null;
        }
        if(opcode!=PcodeOp.LOAD && opcode!=PcodeOp.COPY && opcode!=PcodeOp.CAST &&
           opcode!=PcodeOp.INT_ZEXT && opcode!=PcodeOp.INT_SEXT && opcode!=PcodeOp.INDIRECT)return null;
        return service(definition.getInput(opcode==PcodeOp.LOAD?1:0),slots,depth+1);
    }
    public void run() throws Exception {
        var args=getScriptArgs();long base=Long.decode(args[1]);
        var memory=currentProgram.getMemory();
        var rows=Files.readAllLines(Path.of(args[0]));
        long extent=12;
        for(String row:rows)if(!row.isBlank())
            extent=Math.max(extent,Long.decode(row.split("\\t",2)[0])+4);
        if(memory.getBlock(toAddr(base))==null)
            memory.createInitializedBlock("wmap_services",toAddr(base),extent,(byte)0,monitor,false);
        var block=memory.getBlock(toAddr(base));
        if(block.getEnd().getOffset()<base+extent-1) {
            var next=block.getEnd().add(1);
            var extension=memory.createInitializedBlock("wmap_services_extension",next,
                base+extent-next.getOffset(),(byte)0,monitor,false);
            memory.join(block,extension);
        }
        memory.getBlock(toAddr(base)).setVolatile(true);
        var manager=currentProgram.getDataTypeManager();
        var parser=new CParser(manager);var slots=new HashMap<Long,FunctionDefinitionDataType>();
        for(String row:rows) {
            if(row.isBlank())continue;
            var fields=row.split("\\t",2);
            var address=toAddr(base+Long.decode(fields[0]));
            var type=(FunctionDefinitionDataType)parser.parse(fields[1]);
            type.setCallingConvention(currentProgram.getCompilerSpec().getDefaultCallingConvention().getName());
            clearListing(address,address.add(3));
            // These are integer wire slots, including in a 64-bit process.
            createData(address,UnsignedIntegerDataType.dataType);
            slots.put(address.getOffset(),type);
        }
        var decompiler=new DecompInterface();decompiler.openProgram(currentProgram);
        int count=0;var functions=currentProgram.getFunctionManager().getFunctions(true);
        while(functions.hasNext()) {
            var function=functions.next();var result=decompiler.decompileFunction(function,60,monitor);
            if(!result.decompileCompleted())continue;
            var operations=result.getHighFunction().getPcodeOps();
            while(operations.hasNext()) {
                var operation=operations.next();if(operation.getOpcode()!=PcodeOp.CALLIND)continue;
                var type=service(operation.getInput(0),slots,0);if(type==null)continue;
                HighFunctionDBUtil.writeOverride(function,operation.getSeqnum().getTarget(),type);count++;
            }
        }
        decompiler.dispose();println("Recovered "+count+" WMAP indirect-call contracts across "+slots.size()+" wire slots");
    }
}
