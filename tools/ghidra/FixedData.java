// Preserve fixed-address executable data during relocated analysis.
// Analysis only; Pooka's Free Software License.
// @category Permafrost
import ghidra.app.script.GhidraScript;
import java.nio.file.Files;
import java.nio.file.Path;
import ghidra.program.model.data.*;
public class FixedData extends GhidraScript {
 public void run()throws Exception {
  var args=getScriptArgs();var address=toAddr(Long.decode(args[1]));
  byte[] bytes=Files.readAllBytes(Path.of(args[0]));var memory=currentProgram.getMemory();
  var block=memory.getBlock(address);
  if(block==null)block=memory.createInitializedBlock("fixed_executable_data",address,
    new java.io.ByteArrayInputStream(bytes),bytes.length,monitor,false);
  else {
   if(!block.getStart().equals(address)||block.getSize()!=bytes.length)
    throw new Exception("Fixed data overlaps an existing analysis region");
   memory.setBytes(address,bytes);
  }
  block.setExecute(false);
  if(args.length>2)for(String row:Files.readAllLines(Path.of(args[2]))) {
   if(row.isBlank())continue;
   var fields=row.split("\t");var place=toAddr(Long.decode(fields[0]));
   int width=Integer.parseInt(fields[1]);
   DataType type=switch(width) {
    case 1 -> UnsignedCharDataType.dataType;
    case 2 -> UnsignedShortDataType.dataType;
    case 4 -> UnsignedIntegerDataType.dataType;
    case 8 -> UnsignedLongLongDataType.dataType;
    default -> throw new Exception("Unsupported fixed-data scalar width");
   };
   clearListing(place,place.add(width-1));createData(place,type);
  }
  println("Preserved "+bytes.length+" fixed-address executable data bytes at "+address);
 }
}
