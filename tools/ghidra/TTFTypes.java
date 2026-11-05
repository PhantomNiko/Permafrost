// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.data.DataTypeConflictHandler;
public class TTFTypes extends GhidraScript {
 public void run()throws Exception {
  var manager=currentProgram.getDataTypeManager();var parser=new CParser(manager);
  manager.addDataType(parser.parse("typedef struct pf_glyph { int left,top,width,height;double advance;unsigned char *pixels;unsigned long count,capacity; } pf_glyph;"),DataTypeConflictHandler.REPLACE_HANDLER);
 }
}
