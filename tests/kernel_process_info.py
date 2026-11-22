#!/usr/bin/env python3
"""Compare Tayga process-info records and command argument counts.

Pooka's Free Software License. Uses synthetic scheduler and launch records.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

def run(binary,addresses,data):
 lib=Kernel(binary,addresses);word=8 if lib.wide else 4;cpu=lib.cpu
 cpu.mem_write(data['_gSchedulerCpuStates'],(0x3100000).to_bytes(word,'little'));task=bytearray(512);task[0]=1;task[4]=1;struct.pack_into('<I',task,0x10,7);cpu.mem_write(0x3100000,bytes(task));cpu.mem_write(data['_gTaygaLaunchRecords'],bytes(0x614*32))
 def finish(c,a,z,u):
  c.reg_write(lib.result,0)
  if lib.cpu_type in [12,0x100000c]:c.reg_write(lib.pc,c.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
  else:
   reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;sp=c.reg_read(reg);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,word),'little'));c.reg_write(reg,sp+word)
 for name in ['_wm_platform_smp_current_cpu_index','_scheduler_preempt_checkpoint']:
  a=addresses[name];cpu.hook_add(UC_HOOK_CODE,finish,begin=a,end=a)
 results=[]
 for command in [b'',b'program',b'program a b',b'program --version',b'program "two words" \'quoted\'',b'program\t-a\nlast']:
  record=bytearray(0x614);record[0]=1;struct.pack_into('<III',record,4,7,11,5)
  for offset,text in [(0x10,b'/usr/bin/program'),(0x101,b'/root'),(0x1f2,b'user'),(0x212,command),(0x412,b'MODE=debug\n')]:record[offset:offset+len(text)]=text
  cpu.mem_write(data['_gTaygaLaunchRecords'],bytes(record));cpu.mem_write(0x3000000,b'\xa5'*0x620)
  try:status=DLL.call(lib,'_wm_kernel_tayga_process_info',0x3000000,result_bits=32)
  except AssertionError as error:raise AssertionError(command)from error
  assert status==1,(command,status);results.append((status,bytes(cpu.mem_read(0x3000000,0x620))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};data={n:p for p,n in m['data_symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};expected=run(a.reference.read_bytes(),native,data);actual=run(a.source.read_bytes(),source,data);assert expected==actual,[(i,struct.unpack_from('<I',e[1],16)[0],struct.unpack_from('<I',s[1],16)[0])for i,(e,s)in enumerate(zip(expected,actual))if e!=s];print('Process info: six native command, quoting, argument-count, and record comparisons passed.')
