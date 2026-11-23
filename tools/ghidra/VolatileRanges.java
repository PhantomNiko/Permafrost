// Preserve asynchronously modified state in stripped kernel analysis.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;

public class VolatileRanges extends GhidraScript {
    public void run() throws Exception {
        var args=getScriptArgs();
        if(args.length%2!=0)throw new Exception("Expected start/end range pairs");
        var memory=currentProgram.getMemory();
        for(int index=0;index<args.length;index+=2) {
            var first=toAddr(Long.decode(args[index]));
            var end=toAddr(Long.decode(args[index+1]));
            var block=memory.getBlock(first);
            if(block==null || first.compareTo(end)>=0)throw new Exception("Invalid state range");
            if(!block.getStart().equals(first))memory.split(block,first);
            block=memory.getBlock(first);
            block=memory.getBlock(end.subtract(1));
            if(block==null)throw new Exception("Unmapped state interval end");
            if(block.getEnd().compareTo(end)>=0)memory.split(block,end);
            for(var part:memory.getBlocks())
                if(part.getStart().compareTo(first)>=0 && part.getEnd().compareTo(end)<0)
                    part.setVolatile(true);
            println("Volatile state: "+first+" through "+end.subtract(1));
        }
    }
}
