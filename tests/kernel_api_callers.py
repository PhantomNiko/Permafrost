#!/usr/bin/env python3
"""Compare guest API boundary caller addresses on all four architectures with native code.

Pooka's Free Software License. The boundary guard is an isolated callback.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_PC,UC_ARM64_REG_LR
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RSP,UC_X86_REG_EIP,UC_X86_REG_RIP,UC_X86_REG_EAX,UC_X86_REG_RAX,UC_X86_REG_RDI
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_PC,UC_ARM_REG_LR
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();mapping=json.loads(a.map.read_text());results=[]
metadata,_=inspect(a.reference.read_bytes());cpu=metadata['cpu'];names={n:x for x,n in metadata['symbols']};entries=[names[name]for name in ['_wm_kernel_program_stat_file','_wm_kernel_program_png_decode_file','_wm_kernel_program_wav_decode_file','_wm_kernel_program_ttf_load_file']];checkpoint=names['_scheduler_api_entry_checkpoint'];prefix=''if cpu in [7,0x1000007]else'_'
for native in [True,False]:
 address=lambda x:x if native else mapping[prefix+'recovered_%x'%x]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{str(entry):address(entry)for entry in entries}|{'_ws_errorf':0x4fe0000});c=lib.cpu;events=[]
 def boundary(emulator,pc,size,user):
  if cpu in [12,0x100000c]:
   argument,result,program,link=(UC_ARM_REG_R0,UC_ARM_REG_R0,UC_ARM_REG_PC,UC_ARM_REG_LR)if cpu==12 else(UC_ARM64_REG_X0,UC_ARM64_REG_X0,UC_ARM64_REG_PC,UC_ARM64_REG_LR);events.append(c.reg_read(argument));c.reg_write(result,0);c.reg_write(program,c.reg_read(link))
  else:
   wide=cpu==0x1000007;stackreg=UC_X86_REG_RSP if wide else UC_X86_REG_ESP;stack=c.reg_read(stackreg);width=8 if wide else 4;events.append(c.reg_read(UC_X86_REG_RDI)if wide else int.from_bytes(c.mem_read(stack+4,4),'little'));target=int.from_bytes(c.mem_read(stack,width),'little');c.reg_write(stackreg,stack+width);c.reg_write(UC_X86_REG_RAX if wide else UC_X86_REG_EAX,0);c.reg_write(UC_X86_REG_RIP if wide else UC_X86_REG_EIP,target)
 target=address(checkpoint);c.hook_add(UC_HOOK_CODE,boundary,begin=target,end=target)
 for entry in entries:
  before=len(events);lib.call(str(entry),0,0,0,0,result_bits=32);assert len(events)==before+1
 results.append(events)
assert results[0]==results[1]==[0x4ff0000]*len(entries),results
print('Guest API callers: four native/source file, image, audio and font boundaries retain the actual guest return address.')
