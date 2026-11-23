// Describe the native by-value TerrorUI view storage for application callers.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
public class PublicViewTypes extends GhidraScript {
 public void run() throws Exception {
  int word=currentProgram.getDefaultPointerSize();
  DataType scalar=word==8?UnsignedLongLongDataType.dataType:UnsignedIntegerDataType.dataType;
  var type=new StructureDataType("PFUiView",0);
  type.add(new ArrayDataType(scalar,word==8?12:19,word),"words",null);
  currentProgram.getDataTypeManager().addDataType(type,DataTypeConflictHandler.REPLACE_HANDLER);
 }
}
