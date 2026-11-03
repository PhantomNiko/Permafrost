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
import ghidra.program.model.data.*;
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
        if (value instanceof TypeDef) return type(((TypeDef)value).getBaseDataType());
        if (value instanceof Pointer) return "P:" + type(((Pointer)value).getDataType());
        if (value instanceof Array) return "A:" + ((Array)value).getNumElements() + ":" + type(((Array)value).getDataType());
        return value.getName().replace('\t', ' ') + ":" + value.getLength();
    }
    public void run() throws Exception {
        Path output = Path.of(getScriptArgs()[0]);
        Files.createDirectories(output);
        DecompInterface decompiler = new DecompInterface();
        var log = getFunctionAt(toAddr(0x21c41));
        log.setCallingConvention("__cdecl");
        log.setReturnType(VoidDataType.dataType, SourceType.USER_DEFINED);
        log.replaceParameters(FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true,
            SourceType.USER_DEFINED, new ParameterImpl("format", new PointerDataType(CharDataType.dataType), currentProgram));
        log.setVarArgs(true);
        signature(0x20ae5, "void * __cdecl recovered_20ae5(unsigned int size);");
        signature(0x20d12, "int __cdecl recovered_20d12(const char *left, const char *right);");
        signature(0x21011, "long double __cdecl recovered_21011(double value);");
        signature(0x2083b, "unsigned long long __cdecl recovered_2083b(unsigned long long value, unsigned int shift);");
        signature(0x20874, "unsigned long long __cdecl recovered_20874(unsigned long long value, unsigned int shift);");
        signature(0x208ad, "unsigned long long __cdecl recovered_208ad(unsigned long long numerator, unsigned long long denominator);");
        signature(0x21610, "void __fastcall recovered_21610(int *out, unsigned int *remaining, int *total, const char *text);");
        signature(0x24a9b, "void __fastcall recovered_24a9b(int enabled);");
        signature(0x26e2b, "unsigned int __fastcall recovered_26e2b(int *container, const char *text, unsigned int size);");
        signature(0x2c208, "unsigned int __fastcall recovered_2c208(int path, void *output, const char *source);");
        signature(0x255e4, "unsigned int __fastcall recovered_255e4(const char *path);");
        signature(0x216bc, "int __cdecl recovered_216bc(char *out, unsigned int capacity, const char *format, ...);");
        signature(0x2609c, "void __cdecl recovered_2609c(unsigned int line, const char *near_token, const char *format, ...);");
        signature(0x20e45, "double __cdecl recovered_20e45(double value, int *exponent);");
        signature(0x2109b, "double __cdecl recovered_2109b(float numerator, float denominator);");
        signature(0x2af4b, "unsigned int __fastcall recovered_2af4b(void *context, const char *name, void *output);");
        signature(0x2552e, "unsigned int __fastcall recovered_2552e(const char *path);");
        signature(0x2457a, "void __fastcall recovered_2457a(unsigned int columns);");
        if (getScriptArgs().length > 1) {
            for (String line : Files.readAllLines(Path.of(getScriptArgs()[1]))) {
                String[] fields = line.split("\\t");
                var function = getFunctionAt(toAddr(Long.parseLong(fields[0], 16)));
                if (function != null && function.getSignatureSource() != SourceType.USER_DEFINED &&
                    function.getReturnType() instanceof VoidDataType && !fields[1].equals("-")) {
                    function.setReturnType(fields[1].equals("F") ? LongDoubleDataType.dataType : UnsignedIntegerDataType.dataType,
                        SourceType.USER_DEFINED);
                }
            }
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
                if (address < 0x2071e || address >= 0x2c8c1) continue;
                if (function.getSignatureSource() == SourceType.USER_DEFINED) continue;
                var result = decompiler.decompileFunction(function, 60, monitor);
                if (result.decompileCompleted()) {
                    try {
                        HighFunctionDBUtil.commitParamsToDatabase(result.getHighFunction(), true,
                            ReturnCommitOption.COMMIT, SourceType.ANALYSIS);
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
            if (address < 0x2071e || address >= 0x2c8c1) continue;
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
