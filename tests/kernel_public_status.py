#!/usr/bin/env python3
"""Compare full public file-status results after an unsuccessful lookup.

Pooka's Free Software License. Controlled private services leave nonzero high
register bits; the public uint32 result must still report zero for a miss.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *
def run(path,addresses,native=False):
 lib=Kernel(Path(path).read_bytes(),addresses,native);c=lib.cpu
 def finish(value):
  c.reg_write(lib.result,value)
  if lib.cpu_type in [7,0x1000007]:
   reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;w=8 if lib.wide else 4;sp=c.reg_read(reg);target=int.from_bytes(c.mem_read(sp,w),'little');c.reg_write(reg,sp+w)
  else:target=c.reg_read(UC_ARM64_REG_LR if lib.wide else UC_ARM_REG_LR)
  c.reg_write(lib.pc,target)
 def hook(name,fn):
  a=addresses[name];c.hook_add(UC_HOOK_CODE,fn,begin=a,end=a)
 hook('_scheduler_preempt_checkpoint',lambda c,a,z,u:finish(0x12345678))
 hook('_fs_find_file_normalized',lambda c,a,z,u:finish(0xffffffffffffffff if lib.wide else 0xffffffff))
 hook('_fs_path_existing_kind',lambda c,a,z,u:finish(0x11223300))
 # Existing-kind leaves its caller-initialized output flags clear.
 c.mem_write(0x3000000,b'missing-file\0');c.mem_write(0x3001000,b'\xa5'*12)
 v=DLL.call(lib,'_wm_kernel_program_stat_file_on_device',0xffffffff,0x3000000,0x3001000,result_bits=32)
 return v,bytes(c.mem_read(0x3001000,12))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args()
 m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};abi=json.loads(a.abi.read_text());mapping=json.loads(a.map.read_text());source={v['original']:mapping.get(v['symbol'],mapping.get('_'+v['symbol']))for v in abi.values()}
 expected=run(a.reference,native,True);actual=run(a.source,source);assert expected==actual==(0,bytes(12)),(expected,actual)
 print('Public file status: native full-width missing-file result and cleared output record match.')
