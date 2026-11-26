// Restore scalar field widths in merged data globals. Analysis only.
// Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class ScalarFields extends GhidraScript {
 public void run() throws Exception {
  int count=0;
  for(String line:Files.readAllLines(Path.of(getScriptArgs()[0]))) {
   if(line.isBlank())continue;
   var fields=line.split("\t");var address=toAddr(Long.decode(fields[0]));int width=Integer.parseInt(fields[1]);
   DataType type=switch(width) {
    case 1 -> UnsignedCharDataType.dataType;
    case 2 -> UnsignedShortDataType.dataType;
    case 4 -> UnsignedIntegerDataType.dataType;
    case 8 -> UnsignedLongLongDataType.dataType;
    default -> throw new Exception("Unsupported scalar field width");
   };
   if(currentProgram.getMemory().getBlock(address)==null || getInstructionAt(address)!=null)
    throw new Exception("Scalar field is not existing data");
   clearListing(address,address.add(width-1));createData(address,type);count++;
  }
  println("Restored "+count+" scalar data field widths");
 }
}
