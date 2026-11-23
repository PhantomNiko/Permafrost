#!/usr/bin/env python3
"""Compare the 1.1 desktop's font-open wire ABI on a target CPU.

Pooka's Free Software License. Font services record arguments and return an
opaque fixture handle; no filesystem or font parser is involved.
"""
import argparse,struct,sys,tempfile
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from dylib import inspect as dynamic
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('architecture',choices=['i386','x86_64','armv7','arm64']);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args()
api,entry,end,font,width={'x86_64':(0x280800,0x10008ce0,0x4562c,0x63730,8),'i386':(0x280800,0x100099f0,0x46a95,0x635f8,4),'armv7':(0x40010800,0x1000b024,0x4db60,0x6a450,4),'arm64':(0x82010800,0x10004750,0x2336c,0x611d8,8)}[a.architecture]

def exercise(path,source,folder):
 blob=bytearray(path.read_bytes());struct.pack_into('<I',blob,12,6);normalized=folder/('source'if source else'reference');normalized.write_bytes(blob);meta,_=inspect(blob);lib=DLL(normalized,api_base=api);c=lib.cpu;arm=a.architecture.startswith('arm');ret=struct.pack('<I',0xd65f03c0 if width==8 else 0xe12fff1e)if arm else b'\xc3'
 functions={name:lib.base+address-meta['base']for address,name in meta['symbols']}
 def args(count):
  if a.architecture=='i386':return list(struct.unpack('<'+'I'*count,c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,4*count)))
  regs=[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX]if not arm else [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]if width==8 else [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]
  return [c.reg_read(reg)for reg in regs[:count]]
 for stub in dynamic(blob)['stubs']:
  if stub['name']not in ['_memset','_memcpy','_memcmp','_bzero','___bzero']:continue
  pc=lib.base+stub['address']-meta['base']
  def memory(cpu,pc,size,name):
   d,s,n=args(3);result=d
   if name=='_memcmp':first,second=bytes(c.mem_read(d,n)),bytes(c.mem_read(s,n));result=(first>second)-(first<second)
   elif name=='_memcpy':c.mem_write(d,bytes(c.mem_read(s,n)))
   else:c.mem_write(d,bytes([s&255])*n if name=='_memset'else bytes(s))
   c.reg_write(lib.result,result&((1<<(width*8))-1))
  c.mem_write(pc,ret);c.hook_add(UC_HOOK_CODE,memory,stub['name'],begin=pc,end=pc)
 if source:
  lib.exports['initialize']=functions['_pf_app_initialize'];lib.call('initialize');state=lib.base+next(address for address,name in meta['data_symbols']if name=='_pf_module_state')-meta['base'];bias=end;lib.exports['font']=functions['_recovered_%x'%entry]
 else:state=lib.base;bias=0;lib.exports['font']=lib.base+entry-0x10000000
 calls=[]
 def opened(cpu,pc,size,on_device):
  values=args(3);device=values[0]&0xffffffff if on_device else 0xffffffff;pointer=values[1 if on_device else 0]
  bits=(c.reg_read(UC_ARM64_REG_Q0)if arm and width==8 else c.reg_read(UC_X86_REG_XMM0)if not arm and width==8 else values[2 if on_device else 1])&0xffffffff
  text=bytes(c.mem_read(pointer,64)).split(b'\0')[0];calls.append((device,text,bits));c.reg_write(lib.result,0x3002000)
 for slot,pc,on_device in [(0xe4,0x10030,True),(0x68,0x10040,False)]:
  c.mem_write(api+slot,struct.pack('<I',pc));c.mem_write(pc,ret);c.hook_add(UC_HOOK_CODE,opened,on_device,begin=pc,end=pc)
 for size in [412,0xa0]:
  c.mem_write(api+8,struct.pack('<I',size))
  for text in [b'Test.ttf',b'Test.otf',b'TEST.TTF']:
   c.mem_write(state+font-bias,bytes(width*2));c.mem_write(0x3001000,text+b'\0')
   if a.architecture=='i386'and not source:
    c.reg_write(UC_X86_REG_ECX,0x3001000);c.reg_write(UC_X86_REG_EDX,7);lib.call('font')
   else:lib.call('font',0x3001000,7)
 assert len(calls)==6 and all(call[-1]==0x41800000 for call in calls),calls
 return calls
with tempfile.TemporaryDirectory(prefix='permafrost-desktop-font-')as folder:
 native=exercise(a.reference,False,Path(folder));source=exercise(a.source,True,Path(folder))
assert native==source,(native,source)
print('Desktop font ABI: six paths, device IDs and 16-point float requests match.')
