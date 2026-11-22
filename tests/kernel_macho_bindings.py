#!/usr/bin/env python3
"""Compare i386 Mach-O binding streams and signed/unsigned offset decoding.

Pooka's Free Software License. Symbol resolution and pointer writes are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from kernel_macho_rebases import uleb
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def exercise(binary,addresses,native):
 prefix=b'\x11\x40example\0\x51\x70';streams=[prefix+uleb(offset)+b'\x90\0'for offset in [0,1,127,128,0x1234]];streams += [prefix+b'\0\xc0'+uleb(n)+uleb(skip)+b'\0'for n in [0,1,15,16,127,128]for skip in [0,128]];streams += [prefix+b'\0\x60'+value+b'\x90\0'for value in [b'\0',b'\x7f',b'\x7e',b'\x80\x01',b'\x80\x7f']];streams += [prefix+b'\0\x80'+uleb(128)+b'\x90\0',prefix+b'\0\xa0'+uleb(128)+b'\x90\0',prefix+b'\0\xb3\x90\0',prefix+b'\x80',prefix+b'\0\x60\x80',prefix+b'\0\xc0\x80',prefix+b'\0\xd0'];results=[]
 for width in [0,1]:
  for stream in streams:
   lib=Kernel(binary,addresses,native);c=lib.cpu;events=[];context=0x3000000;data=0x3001000;error=0x3002000;ctx=bytearray(0x500);ctx[4]=width;struct.pack_into('<I',ctx,8,0x1000000);struct.pack_into('<2I',ctx,0x20,data,len(stream));struct.pack_into('<4I',ctx,0x28,0x1000,0x10000,0,0x10000);ctx[0x38:0x3e]=b'__DATA';struct.pack_into('<I',ctx,0x4a8,1);c.mem_write(context,bytes(ctx));c.mem_write(data,stream);c.mem_write(error,bytes(160)+b'\xa5'*16)
   def args(n):
    sp=c.reg_read(UC_X86_REG_ESP)
    if native:return[c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX)]+list(struct.unpack('<'+'I'*(n-2),c.mem_read(sp+4,4*(n-2))))
    return list(struct.unpack('<'+'I'*n,c.mem_read(sp+4,4*n)))
   def finish(value):
    c.reg_write(lib.result,value);sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
   def resolve(c,a,z,u):
    ctx,name,ordinal,lazy,out,err=args(6);assert ctx==context and err==error;symbol=bytes(c.mem_read(name,64)).split(b'\0')[0];events.append(('symbol',symbol,ordinal,lazy));c.mem_write(out,struct.pack('<I',0x12345678));finish(1)
   def write(c,a,z,u):
    ctx,pointer,kind,value,low,high,err=args(7);assert ctx==context and err==error;events.append(('write',pointer,kind,value,low,high));assert len(events)<2048;finish(1)
   for name,callback in [('_macho_resolve_symbol',resolve),('_macho_write_bound_value',write)]:
    a=addresses[name];c.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
   status=lib.call('_macho_apply_bind_stream',context,0,len(stream),0,error,result_bits=8);results.append((status,tuple(events),bytes(c.mem_read(error,176))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x[:2],y[:2])for i,(x,y)in enumerate(zip(e,s))if x!=y][:4];print('Mach-O bindings:',len(e),'native symbol, ordinal, repeat, SLEB, ULEB, width, malformed-stream and guard comparisons passed.')
