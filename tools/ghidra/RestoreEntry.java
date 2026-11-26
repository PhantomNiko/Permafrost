// Restore a symbol-bounded entry removed by speculative flow repair.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.symbol.SourceType;

public class RestoreEntry extends GhidraScript {
    public void run() throws Exception {
        var first = toAddr(Long.decode(getScriptArgs()[0]));
        var last = toAddr(Long.decode(getScriptArgs()[1])).subtract(1);
        var bounds = new AddressSet(first, last);
        var functions = currentProgram.getFunctionManager().getFunctionsOverlapping(bounds);
        while (functions.hasNext()) {
            var function = functions.next();
            if (function.getEntryPoint().equals(first)) continue;
            if (bounds.contains(function.getEntryPoint()))
                throw new IllegalArgumentException("Bounds contain another function entry");
            var body = new AddressSet(function.getBody());
            body.delete(bounds);
            function.setBody(body);
        }
        disassemble(first);
        var function = getFunctionAt(first);
        if (function == null)
            function = currentProgram.getFunctionManager().createFunction(
                "recovered_" + Long.toHexString(first.getOffset()), first, bounds,
                SourceType.USER_DEFINED);
        else function.setBody(bounds);
        println("Restored bounded entry " + function.getEntryPoint());
    }
}
