#!/usr/bin/env python3
"""Compare mounted filesystem directory results, including synthesized parents.

Pooka's Free Software License. Allocation and scheduler services are emulated.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from kernel_wmfs_flush import PROFILES
from native import inspect,CPUS
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

FILES=['Tayga/bin/tool','Tayga/usr/bin/snowflake','Tayga/root/hello.cpp','Tayga/usr/include/stdio.h','Tayga/home/user/readme.txt','Tayga/etc/profile','plain.txt']

def run(binary,addresses):
 metadata,_=inspect(binary);arch=next(a for a,c in CPUS.items()if c==metadata['cpu']);lib=Kernel(binary,addresses);word=8 if lib.wide else 4;state=PROFILES[arch]['globals'];stride=0x118 if lib.wide else 0x110;size_offset=0xf8+word if lib.wide else 0xf8;table=bytearray(stride*len(FILES))
 for i,name in enumerate(FILES):
  offset=i*stride;table[offset:offset+len(name)]=name.encode();struct.pack_into('<I',table,offset+size_offset,17+i)
 lib.cpu.mem_write(0x3100000,bytes(table));lib.cpu.mem_write(state[0],(0x3100000).to_bytes(word,'little'));lib.cpu.mem_write(state[1],len(FILES).to_bytes(word,'little'));lib.cpu.mem_write(state[-1],b'\x01')
 def finish(value=0):
  c=lib.cpu;c.reg_write(lib.result,value)
  if lib.cpu_type in [12,0x100000c]:c.reg_write(lib.pc,c.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
  else:
   reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;sp=c.reg_read(reg);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,word),'little'));c.reg_write(reg,sp+word)
 def allocate(c,a,z,u):finish(0x3400000)
 def skip(c,a,z,u):finish()
 for name,callback in [('_malloc',allocate),('_wm_probe_heap_alloc',allocate),('_free',skip),('_scheduler_preempt_checkpoint',skip)]:
  p=addresses[name];lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=p,end=p)
 results=[]
 for path in ['', '/', 'Tayga','/Tayga','Tayga/usr','Tayga/usr/bin','Tayga/root','Tayga/none']:
  for capacity in [0,1,3,16]:
   lib.cpu.mem_write(0x3000000,path.encode()+b'\0');lib.cpu.mem_write(0x3001000,b'\xa5'*(504*16));lib.cpu.mem_write(0x3004000,bytes(4))
   try:status=DLL.call(lib,'_wm_kernel_program_list_directory',0x3000000,0x3001000,capacity,0x3004000,result_bits=8)
   except AssertionError as error:raise AssertionError((path,capacity))from error
   count=int.from_bytes(lib.cpu.mem_read(0x3004000,4),'little');assert count<100;results.append((status,count,bytes(lib.cpu.mem_read(0x3001000,504*min(count,capacity)))))
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};symbols=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:symbols.get('_'+v['symbol'],symbols.get(v['symbol']))for v in abi.values()};expected=run(a.reference.read_bytes(),native);actual=run(a.source.read_bytes(),source);assert expected==actual,next((i,e[:2],s[:2])for i,(e,s)in enumerate(zip(expected,actual))if e!=s);print('Directory listing: 32 native path, capacity, parent, name, and metadata comparisons passed.')
