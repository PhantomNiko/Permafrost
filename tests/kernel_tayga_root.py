#!/usr/bin/env python3
"""Compare Tayga root detection and test listings larger than its first buffer.

Pooka's Free Software License. All filesystem services are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

def exercise(binary,addresses,native,rows,fail=False,available=True,reported=None):
 lib=Kernel(binary,addresses,native);events=[]
 def args(number):
  c=lib.cpu
  if lib.cpu_type==7:
   sp=c.reg_read(UC_X86_REG_ESP)
   if native:return [c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX)][:number]+list(struct.unpack('<'+'I'*max(number-2,0),c.mem_read(sp+4,max(number-2,0)*4)))
   return list(struct.unpack('<'+'I'*number,c.mem_read(sp+4,number*4)))
  registers=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8]
  values=[c.reg_read(r)for r in registers[:number]]
  if lib.cpu_type==12 and number>4:values.append(int.from_bytes(c.mem_read(c.reg_read(UC_ARM_REG_SP),4),'little'))
  return values
 def finish(value=0):
  c=lib.cpu;c.reg_write(lib.result,value)
  if lib.cpu_type in [12,0x100000c]:c.reg_write(lib.pc,c.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
  else:
   reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;word=8 if lib.wide else 4;sp=c.reg_read(reg);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,word),'little'));c.reg_write(reg,sp+word)
 def listing(c,a,z,u):
  values=struct.unpack('<5I',c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,20))if lib.cpu_type==7 and native else args(5)
  device,path,out,capacity,count=values;assert device==7 and bytes(c.mem_read(path,7))==b'/Tayga\0',(device,path,capacity);assert capacity<=65536
  events.append(('list',capacity))
  for i,name in enumerate(rows[:capacity]):c.mem_write(out+i*504,name+b'\0')
  c.mem_write(count,struct.pack('<I',len(rows)if reported is None else reported));finish(int(available))
 def allocate(c,a,z,u):events.append(('allocate',args(1)[0]));finish(0 if fail else 0x3400000)
 def release(c,a,z,u):assert args(1)[0]==0x3400000;events.append(('free',));finish()
 for name,callback in [('_wm_kernel_program_list_directory_on_device',listing),('_wm_probe_heap_alloc',allocate),('_free',release)]:
  address=addresses[name];lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)
 result=lib.call('_tayga_device_has_virtual_root',7,result_bits=8)
 return result,events

if __name__=='__main__':
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('--abi',type=Path,required=True);parser.add_argument('--map',type=Path,required=True);a=parser.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()}
 cases=[[],[b'home'],[b'home',b'root'],[b'home',b'root',b'etc'],[b'etc',b'root',b'home'],[b'HOME',b'root',b'etc'],[b'x']*13+[b'home',b'root',b'etc']]
 for rows in cases:
  expected=exercise(a.reference.read_bytes(),native,True,rows);actual=exercise(a.source.read_bytes(),source,False,rows);assert expected==actual,(rows,expected,actual)
 rows=[b'nested']*20+[b'home',b'root',b'etc'];result,events=exercise(a.source.read_bytes(),source,False,rows);assert result==1 and events==[('list',16),('allocate',len(rows)*504),('list',len(rows)),('free',)],(result,events)
 result,events=exercise(a.source.read_bytes(),source,False,rows,fail=True);assert result==0 and events==[('list',16),('allocate',len(rows)*504)],(result,events)
 result,events=exercise(a.source.read_bytes(),source,False,rows,reported=65537);assert result==0 and events==[('list',16)],(result,events)
 print('Tayga root: seven native comparisons and complete-list, allocation-failure, and bound cases passed.')
