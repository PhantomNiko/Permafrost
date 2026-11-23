#!/usr/bin/env python3
"""Compare kernel owned-file forwarding and boolean results.

Pooka's Free Software License. Query and scheduler entry are fixture boundaries.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.x86_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:x for x,n in m['symbols']};arm=m['cpu']==12;wide=m['cpu']==0x1000007;mapping=json.loads(a.map.read_text());results=[]
for source,path in enumerate([a.reference,a.source]):
 addresses={name:mapping.get('recovered_%x'%native[name],mapping.get('_recovered_%x'%native[name]))if source else native[name]for name in ['_wm_kernel_program_read_file_on_device','_program_query_file_on_device','_scheduler_api_entry_checkpoint']};addresses['_ws_errorf']=0x4fe0000;lib=Kernel(path.read_bytes(),addresses);c=lib.cpu;events=[];status=[0]
 for name in ['_program_query_file_on_device','_scheduler_api_entry_checkpoint']:
  pc=addresses[name]
  def callback(cpu,pc,size,name):
   if name=='_program_query_file_on_device':
    args=([cpu.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]]if arm else[cpu.reg_read(r)for r in [UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX]]if wide else list(struct.unpack('<4I',cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,16)))if source else[cpu.reg_read(UC_X86_REG_ECX),cpu.reg_read(UC_X86_REG_EDX),*struct.unpack('<2I',cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,8))]);args=[x&0xffffffff for x in args];assert args[2]==2;assert args[3]==0x3002000;events.append(args);cpu.mem_write(args[3],struct.pack('<3I',0x3004000,19,0x574d));cpu.reg_write(lib.result,status[0])
   if arm:cpu.reg_write(lib.pc,cpu.reg_read(UC_ARM_REG_LR))
   else:
    reg=UC_X86_REG_RSP if wide else UC_X86_REG_ESP;sp=cpu.reg_read(reg);width=8 if wide else 4;cpu.reg_write(lib.pc,int.from_bytes(cpu.mem_read(sp,width),'little'));cpu.reg_write(reg,sp+width)
  c.hook_add(UC_HOOK_CODE,callback,name,begin=pc,end=pc)
 outputs=[]
 for device in [0,2,0xffffffff]:
  for value in [0,1]:
   events.clear();status[0]=value;c.mem_write(0x3001000,b'\\file\0');c.mem_write(0x3001ff0,b'\xa5'*44);result=lib.call('_wm_kernel_program_read_file_on_device',device,0x3001000,0x3002000,result_bits=32);out=bytes(c.mem_read(0x3001ff0,44));assert result==value and out[:16]==out[-16:]==b'\xa5'*16;assert events==[[device,0x3001000,2,0x3002000]];outputs.append((result,out,list(events)))
 results.append(outputs)
assert results[0]==results[1]
print('kernel owned-file wrapper: six forwarding, mode, boolean and guard cases match.')
