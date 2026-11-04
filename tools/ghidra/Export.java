// Export decompiler working notes. Output is not claimed to be buildable C.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.nio.file.Files;
import java.nio.file.Path;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.pcode.HighFunctionDBUtil.ReturnCommitOption;
import ghidra.program.model.symbol.SourceType;
import ghidra.app.util.exporter.CppExporter;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.ClangNode;
import ghidra.app.decompiler.ClangToken;
import ghidra.app.decompiler.ClangVariableToken;
import ghidra.program.model.pcode.PcodeOp;
import java.util.ArrayList;
import ghidra.program.model.data.*;
import ghidra.program.model.scalar.Scalar;
import java.util.HashSet;
import java.util.HashMap;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;
import ghidra.app.util.cparser.C.CParser;

public class Export extends GhidraScript {
    private void signature(long address, String declaration) throws Exception {
        var type = (FunctionDefinitionDataType)new CParser(currentProgram.getDataTypeManager()).parse(declaration);
        new ApplyFunctionSignatureCmd(toAddr(address), type, SourceType.USER_DEFINED).applyTo(currentProgram, monitor);
    }
    private String type(DataType value) {
        if (value == null) return "void:0";
        if (value instanceof TypeDef) return type(((TypeDef)value).getBaseDataType());
        if (value instanceof Pointer) return "P:" + type(((Pointer)value).getDataType());
        if (value instanceof Array) return "A:" + ((Array)value).getNumElements() + ":" + type(((Array)value).getDataType());
        return value.getName().replace('\t', ' ') + ":" + value.getLength();
    }
    public void run() throws Exception {
        Path output = Path.of(getScriptArgs()[0]);
        Files.createDirectories(output);
        DecompInterface decompiler = new DecompInterface();
        long textStart = Long.decode(getScriptArgs()[3]);
        long textEnd = Long.decode(getScriptArgs()[4]);
        var explicit = new HashSet<Long>();
        var returnHints = new HashMap<Long,DataType>();
        for (String line : Files.readAllLines(Path.of(getScriptArgs()[2]))) {
            String[] fields = line.split("\\t", 2);
            long address = Long.parseLong(fields[0], 16);
            if (getFunctionAt(toAddr(address)) == null) {
                disassemble(toAddr(address));
                createFunction(toAddr(address), "recovered_" + fields[0]);
            }
            signature(address, fields[1]);
            explicit.add(address);
        }
        if (getScriptArgs().length > 1) {
            for (String line : Files.readAllLines(Path.of(getScriptArgs()[1]))) {
                String[] fields = line.split("\\t");
                var function = getFunctionAt(toAddr(Long.parseLong(fields[0], 16)));
                if (function != null && !explicit.contains(function.getEntryPoint().getOffset()) &&
                    function.getReturnType() instanceof VoidDataType && !fields[1].equals("-")) {
                    var hint=fields[1].equals("F") ? LongDoubleDataType.dataType : UnsignedIntegerDataType.dataType;
                    function.setReturnType(hint,SourceType.USER_DEFINED);
                    returnHints.put(function.getEntryPoint().getOffset(),hint);
                }
            }
        }
        var literalFunctions=currentProgram.getFunctionManager().getFunctions(true);
        while(literalFunctions.hasNext()) {
            var f=literalFunctions.next();
            var instructions=currentProgram.getListing().getInstructions(f.getBody(),true);
            Integer purge=null;
            while(instructions.hasNext()) {
                var instruction=instructions.next();
                if(!instruction.getMnemonicString().equalsIgnoreCase("RET"))continue;
                int value=0;
                if(instruction.getNumOperands()>0)for(Object object:instruction.getOpObjects(0))
                    if(object instanceof Scalar)value=(int)((Scalar)object).getUnsignedValue();
                if(purge!=null && purge!=value)throw new Exception("Mixed RET effects at "+f.getEntryPoint());
                purge=value;
            }
            if(purge!=null)f.setStackPurgeSize(purge);
        }
        var allSymbols = currentProgram.getSymbolTable().getAllSymbols(true);
        while (allSymbols.hasNext()) {
            var symbol = allSymbols.next();
            if (symbol.getName().startsWith("s_"))
                symbol.setName("str_" + symbol.getAddress().toString(), SourceType.USER_DEFINED);
        }
        decompiler.openProgram(currentProgram);
        // Commit inferred register arguments before exporting callers. A flat
        // optimized binary mixes public cdecl and internal register conventions.
        // Without this pass callers misleadingly appear to omit their arguments.
        for (int pass = 0; pass < 3; pass++) {
            var candidates = currentProgram.getFunctionManager().getFunctions(false);
            while (candidates.hasNext() && !monitor.isCancelled()) {
                var function = candidates.next();
                long address = function.getEntryPoint().getOffset();
                if (address < textStart || address >= textEnd) continue;
                if (explicit.contains(address)) continue;
                var result = decompiler.decompileFunction(function, 60, monitor);
                if (result.decompileCompleted()) {
                    try {
                        HighFunctionDBUtil.commitParamsToDatabase(result.getHighFunction(), true,
                            ReturnCommitOption.COMMIT, SourceType.ANALYSIS);
                        if(returnHints.containsKey(address))function.setReturnType(returnHints.get(address),SourceType.USER_DEFINED);
                    } catch (Exception exception) {
                        printerr("Parameter inference: " + function.getEntryPoint() + ": " + exception.getMessage());
                    }
                }
            }
            decompiler.flushCache();
        }
        var functions = currentProgram.getFunctionManager().getFunctions(true);
        int count = 0;
        StringBuilder abi = new StringBuilder();
        while (functions.hasNext() && !monitor.isCancelled()) {
            var function = functions.next();
            long address = function.getEntryPoint().getOffset();
            if (address < textStart || address >= textEnd) continue;
            var result = decompiler.decompileFunction(function, 60, monitor);
            if (result.decompileCompleted()) {
                abi.append(Long.toHexString(address)).append('\t').append(function.getName()).append('\t');
                boolean firstParameter = true;
                for (var parameter : function.getParameters()) {
                    if (!firstParameter) abi.append(',');
                    firstParameter = false;
                    var storage = parameter.getVariableStorage();
                    abi.append(parameter.getLength()).append(':');
                    if (storage.isRegisterStorage()) abi.append(storage.getRegister().getName());
                    else if (storage.isStackStorage()) abi.append("stack").append(storage.getStackOffset());
                    else abi.append("unknown");
                }
                abi.append('\n');
                String source = "/* Recovered working notes; Pooka's Free Software License.\n" +
                    " * Address: 0x" + Long.toHexString(address) + "\n */\n" +
                    result.getDecompiledFunction().getC();
                Files.writeString(output.resolve(Long.toHexString(address) + ".c"), source);
                StringBuilder metadata = new StringBuilder();
                // Synthetic fields such as value._4_4_ have no C declaration.
                // Preserve PTRADD's element width before printing loses it.
                var tokens = new ArrayList<ClangNode>();
                result.getCCodeMarkup().flatten(tokens);
                var occurrences = new HashMap<String, Integer>();
                for (int index = 0; index < tokens.size(); index++) {
                    var field = tokens.get(index).toString();
                    if (!field.matches("_[0-9]+_[0-9]+_")) continue;
                    ClangToken variable = null, dot = null;
                    for (int previous = index - 1; previous >= Math.max(0, index - 4); previous--) {
                        var node = tokens.get(previous);
                        if (node instanceof ClangVariableToken) {variable = (ClangToken)node; break;}
                        if (node instanceof ClangToken && node.toString().equals(".")) dot = (ClangToken)node;
                    }
                    if (variable == null || dot == null) continue;
                    String key = variable.getText() + "." + field;
                    int occurrence = occurrences.getOrDefault(key, 0) + 1;
                    occurrences.put(key, occurrence);
                    var operation = dot.getPcodeOp();
                    if (operation == null || operation.getOpcode() != PcodeOp.PTRADD ||
                        !operation.getInput(2).isConstant()) continue;
                    metadata.append("P\t").append(key).append('\t').append(occurrence)
                        .append('\t').append(operation.getInput(2).getOffset()).append('\n');
                }
                var globals = result.getHighFunction().getGlobalSymbolMap().getSymbols();
                while (globals.hasNext()) {
                    var symbol = globals.next();
                    if (symbol.getStorage().isMemoryStorage())
                        metadata.append("G\t").append(symbol.getName()).append('\t')
                            .append(Long.toHexString(symbol.getStorage().getMinAddress().getOffset())).append('\t')
                            .append(type(symbol.getDataType())).append('\n');
                }
                var nodes = result.getHighFunction().getVarnodes(currentProgram.getAddressFactory().getDefaultAddressSpace());
                while (nodes.hasNext()) {
                    var node = nodes.next();
                    if (node.getAddress().isMemoryAddress() && node.getHigh() != null)
                        metadata.append("M\t_").append('\t')
                            .append(Long.toHexString(node.getAddress().getOffset())).append('\t')
                            .append(node.getSize()).append(':').append(type(node.getHigh().getDataType())).append('\n');
                }
                var locals = result.getHighFunction().getLocalSymbolMap().getSymbols();
                while (locals.hasNext()) {
                    var symbol = locals.next();
                    if (!symbol.isParameter() && symbol.getStorage().isStackStorage())
                        metadata.append("L\t").append(symbol.getName()).append('\t')
                            .append(symbol.getStorage().getStackOffset()).append('\t')
                            .append(type(symbol.getDataType())).append('\n');
                }
                Files.writeString(output.resolve(Long.toHexString(address) + ".tsv"), metadata.toString());
                count++;
            } else {
                printerr("Failed to decompile " + function.getEntryPoint() + ": " + result.getErrorMessage());
            }
        }
        decompiler.dispose();
        Files.writeString(output.resolve("abi.tsv"), abi.toString());
        new CppExporter(new DecompileOptions(), false, true, false, true, true, "")
            .export(output.resolve("recovered.c").toFile(), currentProgram, null, monitor);
        println("Exported " + count + " functions");
    }
}
