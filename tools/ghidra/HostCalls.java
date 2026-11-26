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
import java.util.HashMap;

public class HostCalls extends GhidraScript {
    private long global;
    private boolean host(Varnode node,int depth) {
        if(node==null || depth>16)return false;
        if(node.getAddress().isMemoryAddress() && node.getOffset()==global)return true;
        var def=node.getDef();if(def==null)return false;
        int op=def.getOpcode();
        if(op==PcodeOp.LOAD) {
            var address=def.getInput(1);
            return (address.isConstant() || address.getAddress().isMemoryAddress()) && address.getOffset()==global;
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
    public void run()throws Exception {
        var args=getScriptArgs();global=Long.decode(args[1]);var parser=new CParser(currentProgram.getDataTypeManager());var slots=new HashMap<Long,FunctionDefinitionDataType>();
        for(String row:Files.readAllLines(Path.of(args[0]))) {
            if(row.isBlank())continue;
            var fields=row.split("\\t",2);var type=(FunctionDefinitionDataType)parser.parse(fields[1]);
            type.setCallingConvention(currentProgram.getCompilerSpec().getDefaultCallingConvention().getName());slots.put(Long.decode(fields[0]),type);
        }
        var decompiler=new DecompInterface();decompiler.openProgram(currentProgram);int count=0;
        var functions=currentProgram.getFunctionManager().getFunctions(true);
        while(functions.hasNext()) {
            var function=functions.next();var result=decompiler.decompileFunction(function,60,monitor);if(!result.decompileCompleted())continue;
            var operations=result.getHighFunction().getPcodeOps();
            while(operations.hasNext()) {
                var operation=operations.next();if(operation.getOpcode()!=PcodeOp.CALLIND)continue;
                var offset=field(operation.getInput(0),0);var type=offset==null?null:slots.get(offset);if(type==null)continue;
                HighFunctionDBUtil.writeOverride(function,operation.getSeqnum().getTarget(),type);count++;
            }
        }
        decompiler.dispose();if(count==0)throw new IllegalStateException("No private host calls matched");println("Recovered "+count+" private host-service call contracts");
    }
}
