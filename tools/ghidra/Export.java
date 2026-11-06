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
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;
import ghidra.app.util.cparser.C.CParser;

public class Export extends GhidraScript {
    private void hintedReturn(ghidra.program.model.listing.Function function, DataType hint) throws Exception {
        if(currentProgram.getDefaultPointerSize()==8)function.setCustomVariableStorage(false);
        if(hint.getLength()==16 && currentProgram.getDefaultPointerSize()==8) {
            // Preserve a two-register integer result rather than inventing a
            // hidden memory-result parameter.
            function.setReturnType(UnsignedLongLongDataType.dataType,SourceType.USER_DEFINED);
            function.setCustomVariableStorage(true);
            boolean arm=currentProgram.getRegister("x0")!=null;
            function.setReturn(hint,new VariableStorage(currentProgram,
                currentProgram.getRegister(arm?"x1":"RDX"),
                currentProgram.getRegister(arm?"x0":"RAX")),SourceType.USER_DEFINED);
        } else function.setReturnType(hint,SourceType.USER_DEFINED);
    }
    private void signature(long address, String declaration, String storage, String returnStorage) throws Exception {
        var function=getFunctionAt(toAddr(address));
        String name=function.getName();
        int purge=function.getStackPurgeSize();
        if(storage!=null)declaration=declaration.replace("__thiscall","__cdecl").replace("__fastcall","__cdecl").replaceAll("__regparm[0-9]+","__cdecl");
        // A changed declaration needs a distinct datatype name: reusing an
        // earlier parser datatype can silently retain its old parameter list.
        String unique="pf_signature_"+Long.toHexString(address)+"_"+
            Integer.toUnsignedString(declaration.hashCode(),16);
        String parsed=declaration.replaceFirst("\\b[A-Za-z_][A-Za-z_0-9]*(?=\\s*\\()",unique);
        FunctionDefinitionDataType type;
        try { type=(FunctionDefinitionDataType)new CParser(currentProgram.getDataTypeManager()).parse(parsed); }
        catch(Exception exception) { throw new Exception("Cannot parse signature: "+declaration,exception); }
        // Reapplying a scalar signature must also discard any stale joined
        // return storage inferred from the previous prototype.
        function.setCustomVariableStorage(false);
        if(storage==null) {
            if(!declaration.matches("(?s).*__(?:fastcall|thiscall|cdecl|regparm[0-9]+).*"))
                function.setCallingConvention(currentProgram.getCompilerSpec().getDefaultCallingConvention().getName());
        }
        if(!new ApplyFunctionSignatureCmd(toAddr(address), type, SourceType.USER_DEFINED).applyTo(currentProgram, monitor))
            throw new Exception("Could not apply signature at "+Long.toHexString(address));
        function.setName(name,SourceType.USER_DEFINED);
        if(currentProgram.getDefaultPointerSize()==8 && type.getReturnType().getName().equals("pf_point")) {
            boolean arm=currentProgram.getRegister("x0")!=null;
            function.setCustomVariableStorage(false);
            function.setReturnType(UnsignedLongLongDataType.dataType,SourceType.USER_DEFINED);
            function.setCustomVariableStorage(true);
            function.setReturn(type.getReturnType(),new VariableStorage(currentProgram,
                new ghidra.program.model.pcode.Varnode(currentProgram.getRegister(arm?"d1":"XMM1").getAddress(),8),
                new ghidra.program.model.pcode.Varnode(currentProgram.getRegister(arm?"d0":"XMM0").getAddress(),8)),SourceType.USER_DEFINED);
        }
        if(returnStorage!=null) {
            var pieces=new ArrayList<ghidra.program.model.pcode.Varnode>();
            for(String returnRegister:returnStorage.split(",")) {
                var register=currentProgram.getRegister(returnRegister);
                if(register==null)throw new Exception("Unknown return register "+returnRegister);
                pieces.add(new ghidra.program.model.pcode.Varnode(register.getAddress(),register.getMinimumByteSize()));
            }
            function.setCustomVariableStorage(true);
            function.setReturn(type.getReturnType(),new VariableStorage(currentProgram,
                pieces.toArray(new ghidra.program.model.pcode.Varnode[0])),SourceType.USER_DEFINED);
        }
        if(storage!=null) {
            String[] places=storage.split(",");
            var parameters=function.getParameters();
            if(places.length!=parameters.length)throw new Exception("Custom parameter count at "+Long.toHexString(address));
            var custom=new ArrayList<ParameterImpl>();
            for(int index=0;index<places.length;index++) {
                var parameter=parameters[index];
                var data=parameter.getDataType();
                VariableStorage location;
                if(places[index].startsWith("stack"))
                    location=new VariableStorage(currentProgram,Integer.parseInt(places[index].substring(5)),data.getLength());
                else if(places[index].contains(":")) {
                    var pieces=new ArrayList<ghidra.program.model.pcode.Varnode>();
                    for(String part:places[index].split(":")) {
                        var register=currentProgram.getRegister(part);
                        pieces.add(new ghidra.program.model.pcode.Varnode(register.getAddress(),register.getMinimumByteSize()));
                    }
                    location=new VariableStorage(currentProgram,pieces.toArray(new ghidra.program.model.pcode.Varnode[0]));
                }
                else location=new VariableStorage(currentProgram,currentProgram.getRegister(places[index]));
                custom.add(new ParameterImpl(parameter.getName(),data,location,currentProgram,SourceType.USER_DEFINED));
            }
            function.replaceParameters(custom,FunctionUpdateType.CUSTOM_STORAGE,true,SourceType.USER_DEFINED);
            function.setStackPurgeSize(purge);
        }
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
        int timeout=getScriptArgs().length>5?Integer.parseInt(getScriptArgs()[5]):60;
        int inferencePasses=getScriptArgs().length>6?Integer.parseInt(getScriptArgs()[6]):3;
        boolean unitsOnly=getScriptArgs().length>7 && getScriptArgs()[7].equals("units-only");
        var options=new DecompileOptions();
        // Recovered stack aggregates can straddle inferred variable boundaries.
        // Preserve accesses through those pointers rather than dropping writes.
        options.setAliasBlock(DecompileOptions.AliasBlockEnum.None);
        if(getScriptArgs().length>8)options.setMaxPayloadMBytes(Integer.parseInt(getScriptArgs()[8]));
        decompiler.setOptions(options);
        var selected = new HashSet<Long>();
        if(getScriptArgs().length>9)
            for(String line:Files.readAllLines(Path.of(getScriptArgs()[9])))
                if(!line.isBlank())selected.add(Long.parseLong(line.trim(),16));
        if(!selected.isEmpty() && !unitsOnly)throw new IllegalArgumentException("Selected exports require units-only");
        var explicit = new HashSet<Long>();
        var returnHints = new HashMap<Long,DataType>();
        for (String line : Files.readAllLines(Path.of(getScriptArgs()[2]))) {
            String[] fields = line.split("\\t", 4);
            long address = Long.parseLong(fields[0], 16);
            if (getFunctionAt(toAddr(address)) == null) {
                disassemble(toAddr(address));
                createFunction(toAddr(address), "recovered_" + fields[0]);
            }
            signature(address, fields[1],fields.length>2?fields[2]:null,fields.length>3?fields[3]:null);
            explicit.add(address);
        }
        if (getScriptArgs().length > 1) {
            for (String line : Files.readAllLines(Path.of(getScriptArgs()[1]))) {
                String[] fields = line.split("\\t");
                var function = getFunctionAt(toAddr(Long.parseLong(fields[0], 16)));
                if (function != null && !explicit.contains(function.getEntryPoint().getOffset()) &&
                    (function.getReturnType() instanceof VoidDataType || !fields[1].matches("[UF-]")) && !fields[1].equals("-")) {
                    DataType hint;
                    switch(fields[1]) {
                        case "Q": hint=UnsignedLongLongDataType.dataType; break;
                        case "O": hint=UnsignedInteger16DataType.dataType; break;
                        case "B": hint=UnsignedCharDataType.dataType; break;
                        case "S": hint=FloatDataType.dataType; break;
                        case "D": hint=DoubleDataType.dataType; break;
                        case "F": hint=LongDoubleDataType.dataType; break;
                        default: hint=UnsignedIntegerDataType.dataType;
                    }
                    hintedReturn(function,hint);
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
        // Synthetic switch labels can be promoted to functions by analysis.
        // Their namespace-qualified names are not valid C identifiers.
        var synthetic=currentProgram.getFunctionManager().getFunctions(true);
        while(synthetic.hasNext()) {
            var function=synthetic.next();
            if(function.getParentNamespace().getName().startsWith("switchD_")) {
                function.setName("recovered_"+Long.toHexString(function.getEntryPoint().getOffset()),SourceType.USER_DEFINED);
                function.getSymbol().setNamespace(currentProgram.getGlobalNamespace());
            }
        }
        decompiler.openProgram(currentProgram);
        // Commit inferred register arguments before exporting callers. A flat
        // optimized binary mixes public cdecl and internal register conventions.
        // Without this pass callers misleadingly appear to omit their arguments.
        for (int pass = 0; pass < inferencePasses; pass++) {
            var candidates = currentProgram.getFunctionManager().getFunctions(false);
            while (candidates.hasNext() && !monitor.isCancelled()) {
                var function = candidates.next();
                long address = function.getEntryPoint().getOffset();
                if (address < textStart || address >= textEnd) continue;
            if(!selected.isEmpty() && !selected.contains(address))continue;
                if (explicit.contains(address)) continue;
                var result = decompiler.decompileFunction(function, timeout, monitor);
                if (result.decompileCompleted()) {
                    try {
                        HighFunctionDBUtil.commitParamsToDatabase(result.getHighFunction(), true,
                            ReturnCommitOption.COMMIT, SourceType.ANALYSIS);
                        if(returnHints.containsKey(address)) {
                            hintedReturn(function,returnHints.get(address));
                        }
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
            if(!selected.isEmpty() && !selected.contains(address))continue;
            var result = decompiler.decompileFunction(function, timeout, monitor);
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
                for(var token:tokens) {
                    if(!(token instanceof ClangVariableToken variable))continue;
                    String name=variable.getText();
                    if(!name.matches("[A-Za-z]*Ram[0-9a-f]+"))continue;
                    var node=variable.getVarnode();
                    var operation=variable.getPcodeOp();
                    int width=node==null?0:node.getSize();
                    if(operation!=null && operation.getOpcode()==PcodeOp.CALLOTHER) {
                        if(operation.getOutput()!=null)width=operation.getOutput().getSize();
                        else if(operation.getNumInputs()>1)width=operation.getInput(operation.getNumInputs()-1).getSize();
                    }
                    if(width>0)metadata.append("V\t").append(name).append('\t')
                        .append(name.substring(name.indexOf("Ram")+3)).append('\t').append(width).append('\n');
                }
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
                var stackSpace=currentProgram.getAddressFactory().getStackSpace();
                if(stackSpace!=null) {
                    var stackNodes=result.getHighFunction().getVarnodes(stackSpace);
                    while(stackNodes.hasNext()) {
                        var node=stackNodes.next();
                        metadata.append("S\tstack\t").append(node.getAddress().getOffset())
                            .append('\t').append(node.getSize()).append('\n');
                    }
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
        Path abiFile=output.resolve("abi.tsv");
        if(!selected.isEmpty() && Files.exists(abiFile)) {
            StringBuilder previous=new StringBuilder();
            for(String line:Files.readAllLines(abiFile))
                if(!line.isBlank() && !selected.contains(Long.parseLong(line.split("\\t",2)[0],16)))
                    previous.append(line).append('\n');
            abi.insert(0,previous);
        }
        Files.writeString(abiFile, abi.toString());
        if(!unitsOnly)new CppExporter(new DecompileOptions(), false, true, false, true, true, "")
            .export(output.resolve("recovered.c").toFile(), currentProgram, null, monitor);
        println("Exported " + count + " functions");
    }
}
