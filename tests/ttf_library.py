#!/usr/bin/env python3
"""Compare generated TrueType fixtures and text rasterization with the reference.

Pooka's Free Software License. The fixtures contain no third-party font data.
"""
from pathlib import Path
import struct
import sys
import argparse
from dll import DLL
from unicorn.x86_const import UC_X86_REG_XMM0
from unicorn.arm_const import UC_ARM_REG_S0,UC_ARM_REG_D0
from unicorn.arm64_const import UC_ARM64_REG_S0,UC_ARM64_REG_D0


def fixture(curved=False):
 p=lambda f,*a:struct.pack('>'+f,*a)
 head=bytearray(54);struct.pack_into('>II',head,0,0x10000,0x10000);struct.pack_into('>I',head,12,0x5f0f3cf5);struct.pack_into('>H',head,18,1000)
 hhea=bytearray(36);struct.pack_into('>Ihhh',hhea,0,0x10000,800,-200,0);struct.pack_into('>H',hhea,34,2)
 glyph=p('hhhhhHH',1,0,0,500,700,2,0)+bytes([1,0 if curved else 1,1])+p('hhh',0,500,-500)+p('hhh',0,0,700);glyph+=bytes(len(glyph)%2)
 cmap=p('HHHHI',0,1,3,1,12)+p('HHHHHHHHHHHHhhHH',4,32,0,4,4,1,0,65,65535,0,65,65535,-64,1,0,0)
 tables={'head':bytes(head),'hhea':bytes(hhea),'hmtx':p('HhHh',600,0,600,0),'maxp':p('IH',0x10000,2)+bytes(26),'loca':p('HHH',0,0,len(glyph)//2),'glyf':glyph,'cmap':cmap}
 offset=12+len(tables)*16;directory=b'';payload=b''
 for tag,data in sorted(tables.items()):
  padded=data+bytes((-len(data))%4);checksum=sum(struct.unpack('>%dI'%(len(padded)//4),padded))&0xffffffff;directory+=tag.encode()+p('III',checksum,offset,len(data));payload+=padded;offset+=len(padded)
 font=p('IHHHH',0x10000,len(tables),64,2,len(tables)*16-64)+directory+payload;return font

def floating(lib,value,double=False):
 bits=struct.unpack('<Q'if double else'<I',struct.pack('<d'if double else'<f',value))[0]
 if lib.cpu_type in(7,12):return bits
 reg=(UC_X86_REG_XMM0 if lib.cpu_type==0x1000007 else
      (UC_ARM_REG_D0 if double else UC_ARM_REG_S0)if lib.cpu_type==12 else
      (UC_ARM64_REG_D0 if double else UC_ARM64_REG_S0))
 lib.cpu.reg_write(reg,bits)
 return None


def decode(path,font,text,size=24,colors=(0,0,0),opacity=255,api_base=None):
 lib=DLL(path,api_base=api_base);lib.cpu.mem_write(0x3000000,font);lib.cpu.mem_write(0x3001000,text+b'\0')
 bits=floating(lib,size);args=(0x3000000,len(font))+((bits,)if lib.cpu_type in(7,12)else())
 handle=lib.call('__Z23wm_ttf_font_load_memoryPKvmf',*args,result_bits=64 if lib.wide else 32)
 if not handle:return None
 bits=floating(lib,opacity,True);args=(handle,0x3001000,*colors)
 if lib.cpu_type==7:args+=(bits&0xffffffff,bits>>32)
 if lib.cpu_type==12:args+=(bits&0xffffffff,bits>>32)
 bitmap=lib.call('__Z18wm_ttf_font_renderPvPKciiid',*args,result_bits=64 if lib.wide else 32)
 result=None
 if bitmap:
  width,height=struct.unpack('<II',bytes(lib.cpu.mem_read(bitmap,8)));assert width*height<1024*1024
  pointer=int.from_bytes(bytes(lib.cpu.mem_read(bitmap+8,8 if lib.wide else 4)),'little')
  result=(width,height,bytes(lib.cpu.mem_read(pointer,width*height*4)))
 lib.call('__Z16wm_ttf_font_freePv',handle)
 return result


def main():
 parser=argparse.ArgumentParser(description=__doc__)
 parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path)
 parser.add_argument('--api-base',type=lambda value:int(value,0))
 args=parser.parse_args();reference,source=args.reference,args.source;cases=[]
 for curved in(False,True):
  for text,size in((b'A',12),(b'A',24),(b'AA',40),(b'A\nA',24),(b'',24),(b'?',24)):
   cases.append((fixture(curved),text,size,(21,82,173),192))
 for index,case in enumerate(cases):
  expected=decode(reference,*case,api_base=args.api_base);assert expected is not None,index
  try:actual=decode(source,*case,api_base=args.api_base)
  except Exception as error:raise AssertionError(('TrueType source case failed',index))from error
  assert actual==expected,('TrueType raster mismatch',index,None if actual is None else actual[:2],expected[:2])
 print('TrueType library: %d native/source raster cases passed.'%len(cases))

if __name__=='__main__':main()
