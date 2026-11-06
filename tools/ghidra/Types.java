// Shared value types used by recovered C++ geometry ABIs.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.data.DataTypeConflictHandler;
public class Types extends GhidraScript {
 public void run()throws Exception {
  var manager=currentProgram.getDataTypeManager();var parser=new CParser(manager);
  for(String declaration:new String[]{"typedef union pf_argument { char *text; int integer; float number; unsigned long long bits; } pf_argument;","typedef union pf_scalar32 { int integer; float number; unsigned int bits; } pf_scalar32;","typedef struct pf_point { double x; double y; } pf_point;",
       "typedef struct pf_affine { double a; double b; double c; double d; double e; double f; } pf_affine;",
       "typedef struct pf_kernel_value { int kind; int integer; float number; "+(currentProgram.getDefaultPointerSize()==8?"unsigned int field_0xc; ":"")+"char *text; void *storage; unsigned int flag; "+(currentProgram.getDefaultPointerSize()==8?"unsigned int field_0x24; ":"")+"void *table; void *array; void *auxiliary; } pf_kernel_value;",
       "typedef struct pf_string_builder { unsigned long length; unsigned long capacity; char *data; } pf_string_builder;",
       "typedef struct pf_parser_context { void *context; void *tokens; unsigned long position; } pf_parser_context;",
       "typedef union pf_workspace { unsigned long bits; int integer; float number; char *text; pf_kernel_value value; pf_string_builder builder; pf_parser_context parser; } pf_workspace;"})
   manager.addDataType(parser.parse(declaration),DataTypeConflictHandler.REPLACE_HANDLER);
 }
}
