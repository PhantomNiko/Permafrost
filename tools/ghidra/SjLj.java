// Expose custom SJLJ control-flow edges to the decompiler. Analysis snapshots
// only: these synthetic hooks are never shipped. Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.address.AddressSet;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;
import ghidra.program.model.listing.FlowOverride;

public class SjLj extends GhidraScript {
    private byte[] jump(int opcode,long at,long target) {
        return ByteBuffer.allocate(5).order(ByteOrder.LITTLE_ENDIAN)
            .put((byte)opcode).putInt((int)(target-at-5)).array();
    }
    public void run() throws Exception {
        var args=getScriptArgs();
        long register=Long.decode(args[1]);
        boolean wide=args.length>3 && args[3].equals("64");
        for (String text:args[2].split(",")) {
            var f=getFunctionAt(toAddr(Long.decode(text)));
            if(f!=null)f.setNoReturn(true);
        }
        var rows=Files.readAllLines(Path.of(args[0]));
        long scratch=0x30000000L;
        if(currentProgram.getMemory().getBlock(toAddr(scratch))==null) {
            var block=currentProgram.getMemory().createInitializedBlock("sjlj_analysis",toAddr(scratch),
                Math.max(4096,rows.size()*32), (byte)0, monitor,false);
            block.setExecute(true);
        }
        var owners=new ArrayList<ghidra.program.model.listing.Function>();
        for(String row:rows) {
            String[] cells=row.split("\\t");
            long site=Long.parseLong(cells[0],16), pad=Long.parseLong(cells[1],16);
            var owner=getFunctionContaining(toAddr(site));
            if(owner==null)owner=getFunctionBefore(toAddr(site));
            if(owner==null)throw new Exception("No SJLJ owner at "+cells[0]);
            var separate=getFunctionAt(toAddr(pad));
            if(separate!=null && separate!=owner)removeFunction(separate);
            // call register; test eax,eax; je original continuation;
            // load the two EH result registers; jump to the original pad.
            int extent=wide?18:27;
            var bytes=ByteBuffer.allocate(extent).order(ByteOrder.LITTLE_ENDIAN);
            bytes.put(jump(0xe8,scratch,register));
            bytes.put(new byte[]{(byte)0x85,(byte)0xc0,(byte)0x0f,(byte)0x84});
            bytes.putInt((int)(site+5-(scratch+13)));
            if(!wide)bytes.put(new byte[]{(byte)0x8b,0x04,0x24,(byte)0x8b,0x50,0x0c,(byte)0x8b,0x40,0x08});
            bytes.put(jump(0xe9,scratch+extent-5,pad));
            clearListing(toAddr(scratch),toAddr(scratch+extent-1));
            setBytes(toAddr(scratch),bytes.array());
            clearListing(toAddr(site),toAddr(site+4));
            setBytes(toAddr(site),jump(0xe9,site,scratch));
            disassemble(toAddr(site));
            getInstructionAt(toAddr(site)).setFlowOverride(FlowOverride.NONE);
            disassemble(toAddr(scratch));
            if(getInstructionAt(toAddr(pad))==null) {
                long last=pad+15;
                var next=getFunctionAfter(toAddr(pad));
                if(next!=null)last=Math.min(last,next.getEntryPoint().getOffset()-1);
                clearListing(toAddr(pad),toAddr(last));
                disassemble(toAddr(pad));
            }
            var hooks=currentProgram.getListing().getInstructions(
                new AddressSet(toAddr(scratch),toAddr(scratch+extent-1)),true);
            while(hooks.hasNext())hooks.next().setFlowOverride(FlowOverride.NONE);
            var body=new AddressSet(owner.getBody());
            body.add(toAddr(scratch),toAddr(scratch+extent-1));
            owner.setBody(body);
            owners.add(owner);scratch+=32;
        }
        for(var owner:owners)CreateFunctionCmd.fixupFunctionBody(currentProgram,owner,monitor);
        println("Exposed "+owners.size()+" SJLJ registrations");
    }
}
