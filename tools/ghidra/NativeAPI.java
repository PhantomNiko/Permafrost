// Native WMAP pointer types and observed indirect-call argument areas.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.data.*;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import java.nio.file.Files;
import java.nio.file.Path;

public class NativeAPI extends GhidraScript {
    public void run() throws Exception {
        var memory=currentProgram.getMemory();
        if(memory.getBlock(toAddr(0x6800))==null)
            memory.createInitializedBlock("native_api",toAddr(0x6800),124,(byte)0,monitor,false);
        String[] signatures={
            "int service(void);", "int service(unsigned int a,unsigned int b,unsigned int c);",
            "int service(void);", "int service(void);", "int service(void);",
            "int service(unsigned int a,unsigned int b,unsigned int c);", "int service(int c);",
            "int service(const char *text);", "unsigned short service(void);", "int service(void);",
            "int service(const char *path,unsigned int *out);",
            "int service(const char *path,const void *data,unsigned int size);",
            "int service(const char *path);", "int service(const char *text);",
            "int service(char *buffer,unsigned int size,const char *prompt,int echo);",
            "int service(const char *name,void *callback);",
            "void *service(unsigned int size);", "void service(void *pointer);",
            "void *service(void *pointer,unsigned int size);"
        };
        var parser=new CParser(currentProgram.getDataTypeManager());
        for(int i=0;i<signatures.length;i++) {
            var type=(FunctionDefinitionDataType)parser.parse(signatures[i]);
            var address=toAddr(0x680c+i*4);
            clearListing(address,address.add(3));
            createData(address,new PointerDataType(type,currentProgram.getDataTypeManager()));
        }
        int count=0;
        for(String row:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
            String[] fields=row.split("\\t");
            var address=toAddr(Long.parseLong(fields[0],16));
            var owner=getFunctionContaining(address);
            if(owner==null)continue;
            int args=Integer.parseInt(fields[1]);
            var declaration=new StringBuilder(fields[2]+" indirect(");
            for(int i=0;i<args;i++) {
                if(i>0)declaration.append(',');
                declaration.append("unsigned int a").append(i);
            }
            declaration.append(");");
            var type=(FunctionDefinitionDataType)parser.parse(declaration.toString());
            type.setCallingConvention("__cdecl");
            HighFunctionDBUtil.writeOverride(owner,address,type);count++;
        }
        println("Restored "+count+" indirect call argument areas");
    }
}
