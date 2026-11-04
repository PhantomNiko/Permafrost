// Native TrueType geometry returns two doubles in XMM0 and XMM1.
// Analysis snapshots only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
public class FloatingPairTypes extends GhidraScript {
 public void run() throws Exception {
  var manager=currentProgram.getDataTypeManager();
  var point=new StructureDataType("pf_point",0);
  point.add(DoubleDataType.dataType,"x",null);
  point.add(DoubleDataType.dataType,"y",null);
  manager.resolve(point,DataTypeConflictHandler.REPLACE_HANDLER);
  var affine=new StructureDataType("pf_affine",0);
  for(String field:new String[]{"a","b","c","d","e","f"})
   affine.add(DoubleDataType.dataType,field,null);
  manager.resolve(affine,DataTypeConflictHandler.REPLACE_HANDLER);
 }
}
