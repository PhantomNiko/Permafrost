#!/usr/bin/env python3
"""Compare IA32 kernel-entry forwarding of loader context and firmware handoff.

Pooka's Free Software License. Firmware callbacks are isolated test fixtures.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EIP
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==7
names={n:x for x,n in meta['symbols']};m=json.loads(a.map.read_text());seen=[[],[]]
libraries=[Kernel(a.reference.read_bytes(),{'_ws_errorf':0x4fe0000}),Kernel(a.source.read_bytes(),{'_ws_errorf':0x4fe0000})]
for index,lib in enumerate(libraries):
 address=names['_wm_platform_set_preload_handoff']if index==0 else m['recovered_%x'%names['_wm_platform_set_preload_handoff']]
 def callback(c,pc,size,index):
  sp=c.reg_read(UC_X86_REG_ESP);target,context,handoff=struct.unpack('<III',bytes(c.mem_read(sp,12)));seen[index].append((context,handoff));c.reg_write(UC_X86_REG_ESP,sp+4);c.reg_write(UC_X86_REG_EIP,target)
 lib.cpu.hook_add(UC_HOOK_CODE,callback,index,begin=address,end=address)
 stop=names['_wm_winterboot_main']if index==0 else m['recovered_%x'%names['_wm_winterboot_main']]
 lib.cpu.hook_add(UC_HOOK_CODE,lambda c,pc,size,u:c.reg_write(UC_X86_REG_EIP,0x4ff0000),begin=stop,end=stop)
for context,handoff in [(0,0),(0,0x123456),(0x3000000,0),(0x3000000,0x123456),(0x3000100,0xffffffff)]:
 for index,lib in enumerate(libraries):
  c=lib.cpu;sp=0x4fdffc0;c.mem_write(meta['base']+16,struct.pack('<I',context));c.mem_write(sp,struct.pack('<4I',0x4ff0000,0x11111111,0x22222222,handoff));c.reg_write(UC_X86_REG_ESP,sp);c.emu_start(meta['entry'],0x4ff0000,count=1000)
  assert c.reg_read(UC_X86_REG_EIP)==0x4ff0000 and seen[index][-1]==(context,handoff),(index,seen)
print('IA32 preload entry: five native/source context and firmware handoff cases match.')
