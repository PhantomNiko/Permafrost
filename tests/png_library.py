#!/usr/bin/env python3
"""Compare source PNG decoding on the library's target CPU with the reference library on an emulated CPU.

Pooka's Free Software License.
"""
from pathlib import Path
import sys,struct,zlib
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'));from dylib import inspect,rebase_locations,file_offset
from dll import DLL

def fixture(width, height, filtering, level):
 pixels=bytes((x*17+y*31+c*53)%256 for y in range(height) for x in range(width) for c in range(4))
 raw=bytearray();previous=bytes(width*4)
 for y in range(height):
  row=pixels[y*width*4:(y+1)*width*4];raw.append(filtering)
  for i,value in enumerate(row):
   left=row[i-4] if i>=4 else 0;up=previous[i];upper_left=previous[i-4] if i>=4 else 0
   if filtering==0:predictor=0
   elif filtering==1:predictor=left
   elif filtering==2:predictor=up
   elif filtering==3:predictor=(left+up)//2
   else:
    p=left+up-upper_left;distances=(abs(p-left),abs(p-up),abs(p-upper_left))
    predictor=(left,up,upper_left)[distances.index(min(distances))]
   raw.append((value-predictor)&255)
  previous=row
 def chunk(kind,data):return struct.pack('>I',len(data))+kind+data+struct.pack('>I',zlib.crc32(kind+data))
 data=b'\x89PNG\r\n\x1a\n'+chunk(b'IHDR',struct.pack('>IIBBBBB',width,height,8,6,0,0,0))+chunk(b'IDAT',zlib.compress(raw,level))+chunk(b'IEND',b'')
 return data,pixels


def decode(path,data):
 library=DLL(path);library.cpu.mem_write(0x3000000,data);library.cpu.mem_write(0x3001000,bytes(64))
 status=library.call('__ZN2wm3png11load_memoryEPKhmRNS0_5ImageE',0x3000000,len(data),0x3001000)
 size=32 if library.wide else 20
 width,height,address,count,capacity=struct.unpack('<IIQQQ'if library.wide else'<IIIII',bytes(library.cpu.mem_read(0x3001000,size)))
 if count>1024*1024:raise AssertionError('unbounded decoded output')
 return status,width,height,bytes(library.cpu.mem_read(address,count)) if status else b''


def main():
 import argparse
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);args=parser.parse_args()
 cases=[fixture(3,2,f,level)for f in range(5)for level in (0,9)]
 cases.append(fixture(64,64,0,9))
 valid,_=cases[0];cases.extend((data,None)for data in (b'bad signature',valid[:24],valid[:-20]))
 for index,(data,pixels)in enumerate(cases):
  try:actual,expected=decode(args.source,data),decode(args.reference,data)
  except Exception as error:raise AssertionError('PNG decoding case %d failed'%index)from error
  assert actual==expected,(index,actual[:3],expected[:3])
  if pixels is not None:assert expected[0] and actual[3]==pixels,index
 print('PNG library: %d native/source decoding cases passed.'%len(cases))


if __name__=='__main__':main()
