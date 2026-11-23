// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.data.DataTypeConflictHandler;
public class TTFTypes extends GhidraScript {
 public void run()throws Exception {
  var manager=currentProgram.getDataTypeManager();var parser=new CParser(manager);
  manager.addDataType(parser.parse("typedef struct pf_ttf_backend { void *vtable;unsigned char *data;unsigned long length;unsigned char reserved[312]; } pf_ttf_backend;"),DataTypeConflictHandler.REPLACE_HANDLER);
  manager.addDataType(parser.parse("typedef struct pf_u32_vector { unsigned int *data;unsigned long count,capacity; } pf_u32_vector;"),DataTypeConflictHandler.REPLACE_HANDLER);
  manager.addDataType(parser.parse("typedef struct pf_glyph_position { void *glyph;int x,y; } pf_glyph_position;"),DataTypeConflictHandler.REPLACE_HANDLER);
  manager.addDataType(parser.parse("typedef struct pf_layout { int left,top,right,bottom;pf_glyph_position *data;unsigned long count,capacity; } pf_layout;"),DataTypeConflictHandler.REPLACE_HANDLER);
  manager.addDataType(parser.parse("typedef struct pf_glyph { int left,top,width,height;double advance;unsigned char *pixels;unsigned long count,capacity; } pf_glyph;"),DataTypeConflictHandler.REPLACE_HANDLER);
 }
}
