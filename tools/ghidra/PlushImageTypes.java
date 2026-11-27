// Recover image dimensions and pixel ownership as independently typed fields.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.data.DataTypeConflictHandler;

public class PlushImageTypes extends GhidraScript {
 public void run() throws Exception {
  var manager=currentProgram.getDataTypeManager();
  var parser=new CParser(manager);
  manager.addDataType(parser.parse("typedef struct pf_plush_image110 { int width,height;unsigned char *pixels;unsigned long count,capacity; } pf_plush_image110;"),
      DataTypeConflictHandler.REPLACE_HANDLER);
 }
}
