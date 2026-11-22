#!/usr/bin/env python3
"""Compare native i386 Mach-O rebase streams, counts, offsets and failures.

Pooka's Free Software License. Pointer application and binding are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def uleb(value):
 out=bytearray()
 while True:
  byte=value&127;value>>=7;out.append(byte|(128 if value else 0))
  if not value:return bytes(out)
def exercise(binary,addresses,native):
 results=[];streams=[b'\x11\x20'+uleb(0x100)+b'\x60'+uleb(n)+b'\0'for n in [0,1,15,16,127,128,255,512]]
 streams += [b'\x11\x20'+uleb(offset)+bytes([0x50|count])+b'\0'for offset in [0,1,127,128,0x1234]for count in [0,1,15]]
 streams += [b'\x11\x20\0\x30'+uleb(128)+b'\x43\x51\0',b'\x11\x20\0\x70'+uleb(128)+b'\x51\0',b'\x11\x20\0\x80'+uleb(3)+uleb(128)+b'\0',b'\x11\x20\x80',b'\x11\x30\x80',b'\x11\x20\0\x60\x80',b'\x11\x20\0\x80\x80',b'\x11\x20\0\x90',b'\x11\x21\0\x51\0']
 for width in [0,1]:
  for stream in streams:
   lib=Kernel(binary,addresses,native);c=lib.cpu;events=[];context=0x3000000;data=0x3001000;error=0x3002000;ctx=bytearray(0x500);ctx[4]=width;struct.pack_into('<I',ctx,8,0x1000000);struct.pack_into('<2I',ctx,0x20,data,len(stream));struct.pack_into('<4I',ctx,0x28,0x1000,0x10000,0,0x10000);ctx[0x38:0x3e]=b'__DATA';struct.pack_into('<3I',ctx,0x4a8,1,0,len(stream));c.mem_write(context,bytes(ctx));c.mem_write(data,stream);c.mem_write(error,bytes(160)+b'\xa5'*16)
   def finish(value):
    c.reg_write(lib.result,value);sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
   def apply(c,a,z,u):
    sp=c.reg_read(UC_X86_REG_ESP)
    if native:ctx,pointer=c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX);kind,err=struct.unpack('<2I',c.mem_read(sp+4,8))
    else:ctx,pointer,kind,err=struct.unpack('<4I',c.mem_read(sp+4,16))
    assert ctx==context and err==error;(events.append((pointer,kind)));assert len(events)<=32768;finish(1)
   def bind(c,a,z,u):finish(1)
   for name,callback in [('_macho_apply_rebase_at',apply),('_macho_apply_bind_stream',bind)]:
    a=addresses[name];c.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
   status=lib.call('_macho_apply_fixups',context,error,result_bits=8);results.append((status,tuple(events),bytes(c.mem_read(error,176))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x[:2],y[:2])for i,(x,y)in enumerate(zip(e,s))if x!=y][:4];print('Mach-O rebases:',len(e),'native repeat, ULEB, immediate, offset, pointer-width, malformed-stream and guard comparisons passed.')
