#!/usr/bin/env python3
"""Compare Tayga entry lookup across native directory API records.

Pooka's Free Software License. Device directory results are synthetic.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

def exercise(binary,addresses):
 lib=Kernel(binary,addresses);lib.cpu.mem_write(0x2102818,struct.pack('<I',7));events=[]
 def finish(value):
  c=lib.cpu;c.reg_write(lib.result,value);sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8)
 def bind(c,a,z,u):finish(1)
 def preempt(c,a,z,u):finish(0)
 def listing(c,a,z,u):
  device,path,out,capacity,count=[c.reg_read(r)for r in [UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8]];text=bytes(c.mem_read(path,256)).split(b'\0')[0];events.append((device,text,capacity));records=[]
  for name,path in [(b'root',b'Tayga/root'),(b'sdk-c',b'Tayga/root/sdk-c'),(b'hello.cpp',b'Tayga/root/hello.cpp')]:
   record=bytearray(504);record[:len(name)]=name;record[241:241+len(path)]=path;struct.pack_into('<5I',record,484,17,2 if name==b'root'else 0,2 if name==b'root'else 1,7,5);records.append(record)
  for i,row in enumerate(records[:capacity]):c.mem_write(out+504*i,bytes(row))
  c.mem_write(count,struct.pack('<I',len(records)));finish(1)
 for name,callback in [('_tayga_bind_user_device',bind),('_scheduler_preempt_checkpoint',preempt),('_wm_kernel_program_list_directory_on_device',listing)]:
  a=addresses[name];lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
 results=[]
 for path in [b'/root/sdk-c',b'/root/missing',b'/root/hello.cpp',b'/',b'/root']:
  lib.cpu.mem_write(0x3000000,path+b'\0');lib.cpu.mem_write(0x3001000,b'\xa5'*520);events.clear();status=lib.call('_tayga_virtual_entry',0x3000000,0x3001000,result_bits=8);results.append((status,bytes(lib.cpu.mem_read(0x3001000,520)),tuple(events)))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native);s=exercise(a.source.read_bytes(),source);assert e==s,[(i,x[0],y[0],x[2],y[2])for i,(x,y)in enumerate(zip(e,s))if x!=y];assert [v[0]for v in e]==[1,0,1,1,1];print('Tayga lookup: five native file, directory, missing-path, record, and boundary comparisons passed.')
