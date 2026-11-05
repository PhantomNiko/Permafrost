#!/usr/bin/env python3
"""Compare x86-64 source PNG decoding with the reference library on an emulated CPU.

Pooka's Free Software License.
"""
from pathlib import Path
import sys,struct,zlib
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'));from dylib import inspect,rebase_locations,file_offset
from unicorn import Uc,UC_ARCH_X86,UC_MODE_64,UC_HOOK_CODE
from unicorn.x86_const import *
class DLL:
 def __init__(self,path):
  self.cpu=Uc(UC_ARCH_X86,UC_MODE_64);self.cpu.mem_map(0,0x5000000);self.base=0x2800000;self.stop=0x4ff0000;self.next=0x300000;self.allocs={};b=Path(path).read_bytes();m=inspect(b);self.exports={e['name']:self.base+e['address']for e in m['exports']}
  for s in m['segments']:
   if s['used']:self.cpu.mem_write(self.base+s['address'],b[s['offset']:s['offset']+s['used']])
  for a,w in rebase_locations(b,m):
   v=int.from_bytes(self.cpu.mem_read(self.base+a,w),'little');self.cpu.mem_write(self.base+a,((v+self.base)&((1<<(w*8))-1)).to_bytes(w,'little'))
  self.cpu.mem_write(0x6800,struct.pack('<III',0x50414d57,11,188));self.cpu.mem_write(0x684c,struct.pack('<II',0x10000,0x10010));self.cpu.mem_write(0x10000,b'\xc3');self.cpu.mem_write(0x10010,b'\xc3')
  def alloc(c,a,size,user):
   n=c.reg_read(UC_X86_REG_RDI)
   if n>0x1000000:raise AssertionError('unbounded allocation '+hex(n))
   result=self.next;self.next=(result+n+15)&-16;self.allocs[result]=n;c.reg_write(UC_X86_REG_RAX,result)
  self.cpu.hook_add(UC_HOOK_CODE,alloc,begin=0x10000,end=0x10000)
 def call(self,name,*args):
  for r,a in zip((UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9),args):self.cpu.reg_write(r,a)
  self.cpu.reg_write(UC_X86_REG_RSP,0x4fe0008);self.cpu.mem_write(0x4fe0008,struct.pack('<Q',self.stop));self.cpu.emu_start(self.exports[name],self.stop,count=20000000)
  if self.cpu.reg_read(UC_X86_REG_RIP)!=self.stop:raise AssertionError('function did not return')
  return self.cpu.reg_read(UC_X86_REG_RAX)&255

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
 width,height,address,count,capacity=struct.unpack('<IIQQQ',bytes(library.cpu.mem_read(0x3001000,32)))
 if count>1024*1024:raise AssertionError('unbounded decoded output')
 return status,width,height,bytes(library.cpu.mem_read(address,count)) if status else b''


def main():
 import argparse
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);args=parser.parse_args()
 cases=[fixture(3,2,f,level)for f in range(5)for level in (0,9)]
 cases.append(fixture(64,64,0,9))
 valid,_=cases[0];cases.extend((data,None)for data in (b'bad signature',valid[:24],valid[:-20]))
 for index,(data,pixels)in enumerate(cases):
  actual,expected=decode(args.source,data),decode(args.reference,data)
  assert actual==expected,(index,actual[:3],expected[:3])
  if pixels is not None:assert expected[0] and actual[3]==pixels,index
 print('PNG library: %d native/source decoding cases passed.'%len(cases))


if __name__=='__main__':main()
