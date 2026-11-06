// Mark verified terminal paths before decompiling their callers.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;

public class NoReturn extends GhidraScript {
    public void run() throws Exception {
        for (String argument : getScriptArgs()) {
            var function = getFunctionAt(toAddr(Long.decode(argument)));
            if (function == null) throw new Exception("No function at " + argument);
            function.setNoReturn(true);
            println("Terminal function: " + argument);
        }
        var functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext())
            CreateFunctionCmd.fixupFunctionBody(currentProgram, functions.next(), monitor);
    }
}
