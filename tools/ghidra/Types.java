// Shared value types used by recovered C++ geometry ABIs.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.data.DataTypeConflictHandler;
public class Types extends GhidraScript {
 public void run()throws Exception {
  var manager=currentProgram.getDataTypeManager();var parser=new CParser(manager);
  for(String declaration:new String[]{"typedef struct pf_point { double x; double y; } pf_point;",
       "typedef struct pf_affine { double a; double b; double c; double d; double e; double f; } pf_affine;"})
   manager.addDataType(parser.parse(declaration),DataTypeConflictHandler.REPLACE_HANDLER);
 }
}
