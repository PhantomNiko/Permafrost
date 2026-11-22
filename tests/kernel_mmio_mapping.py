#!/usr/bin/env python3
"""Compare BIOS MMIO mapping bounds, page entries, and translation refreshes.

Pooka's Free Software License. Privileged instructions are intercepted.
"""
import argparse,json,struct,itertools
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *


def exercise(binary,addresses,native):
 results=[]
 for pointer,size,high,capacity,paging,pae in itertools.product(
     [0,0x3100000,0xfebf0000,0xfffffff0],[0,1,0x10000,0x200001],[0,1],
     [0,0x1000000],[True],[False,True]):
  lib=Kernel(binary,addresses,native);c=lib.cpu;out=0x3000000;flush=[]
  c.mem_write(0x6230,struct.pack('<II',0xe0000000,capacity));c.mem_write(out,b'\xa5'*16)
  registers=[UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_EBX,
             UC_X86_REG_ESP,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI]
  def privileged(c,address,length,user):
   raw=bytes(c.mem_read(address,min(3,length)))
   if raw[:2]==b'\x0f\x20':
    control=(raw[2]>>3)&7;value={0:0x80000001 if paging else 1,4:0x20 if pae else 0,3:0x2f7000}[control]
    c.reg_write(registers[raw[2]&7],value);c.reg_write(lib.pc,address+3)
   elif raw[:2]==b'\x0f\x22':flush.append('tlb');c.reg_write(lib.pc,address+3)
   elif raw[:2]==b'\x0f\x09':flush.append('cache');c.reg_write(lib.pc,address+2)
  c.hook_add(UC_HOOK_CODE,privileged)
  status=lib.call('_platform_runtime_map_mmio_window',pointer,size,high,out,result_bits=8)
  results.append((status,bytes(c.mem_read(out,16)),bytes(c.mem_read(0x2f9000,0x4000)),flush))
 return results


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args()
 m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in json.loads(a.abi.read_text()).values()}
 e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);differences=[(i,x[:2],y[:2],x[3],y[3])for i,(x,y)in enumerate(zip(e,s))if x!=y];assert not differences,differences[:12]
 print('BIOS MMIO mapping:',len(e),'native paging bounds, page-table and TLB/cache comparisons passed.')
 # The C BIOS loader uses flat addressing rather than the reference PAE window.
 # Check that adapter separately, including end-of-address-space overflow.
 lib=Kernel(a.source.read_bytes(),source,False);c=lib.cpu;out=0x3000000
 def flat_control(c,address,length,user):
  raw=bytes(c.mem_read(address,min(3,length)))
  if raw[:2]==b'\x0f\x20':
   registers=[UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_EBX,UC_X86_REG_ESP,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI]
   c.reg_write(registers[raw[2]&7],1 if (raw[2]>>3)&7==0 else 0);c.reg_write(lib.pc,address+3)
 c.hook_add(UC_HOOK_CODE,flat_control);count=0
 for pointer,size,high,output in itertools.product([0,0x3100000,0xfebf0000,0xfffffff0,0xffffffff],[0,1,16,0x10000],[0,1],[False,True]):
  c.mem_write(out,b'\xa5'*16);status=lib.call('_platform_runtime_map_mmio_window',pointer,size,high,out if output else 0,result_bits=8);expected=bool(output and not high and pointer+max(size,1)<=1<<32);assert bool(status)==expected,(pointer,size,high,output,status)
  assert bytes(c.mem_read(out,16))==(struct.pack('<I',pointer)+b'\xa5'*12 if expected else b'\xa5'*16);count+=1
 print('Flat BIOS MMIO adapter:',count,'address, overflow and output guard cases passed.')
