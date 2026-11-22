#!/usr/bin/env python3
"""Compare recovered SDK C++ allocation and static-initialization ABI.

Pooka's Free Software License. Heap services and termination are intercepted.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from dylib import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

def exercise(reference,source):
 libs=[DLL(reference),DLL(source)];sessions=[]
 for lib,path in zip(libs,[reference,source]):
  state={'events':[],'fail':False,'next':0x300000};sessions.append(state)
  def args(number,lib=lib):
   c=lib.cpu
   if lib.cpu_type==7:return list(struct.unpack('<'+'I'*number,bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,number*4))))
   registers=[UC_ARM_REG_R0,UC_ARM_REG_R1]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI];return[c.reg_read(r)for r in registers[:number]]
  def finish(value=0,lib=lib):
   c=lib.cpu;c.reg_write(lib.result,value)
   if lib.cpu_type in [12,0x100000c]:c.reg_write(lib.pc,c.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
   else:
    reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;word=8 if lib.wide else 4;sp=c.reg_read(reg);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,word),'little'));c.reg_write(reg,sp+word)
  def imported(c,a,z,u,name,lib=lib,state=state,args=args,finish=finish):
   if name=='_malloc':
    size=args(1)[0];state['events'].append(('malloc',size));assert size<0x100000
    if state['fail']:finish(0);return
    pointer=state['next'];state['next']=(pointer+max(size,1)+15)&-16;c.mem_write(pointer,b'\xa5'*max(size,1));finish(pointer)
   elif name=='_free':state['events'].append(('free',args(1)[0]));finish()
   elif name=='_abort':state['events'].append(('abort',));c.reg_write(lib.pc,lib.stop);c.emu_stop()
   else:raise AssertionError(name)
  for item in inspect(path.read_bytes())['stubs']:
   name=item['name'];assert name in ['_malloc','_free','_abort'];address=lib.base+item['address']
   def hook(c,a,z,u,name=name,imported=imported):imported(c,a,z,u,name)
   lib.cpu.hook_add(UC_HOOK_CODE,hook,begin=address,end=address)
 count=0
 allocators=['__Znwm','__Znam','__ZnwmSt11align_val_t','__ZnamSt11align_val_t','__ZnwmSt11align_val_tRKSt9nothrow_t','__ZnamSt11align_val_tRKSt9nothrow_t']
 for name in allocators:
  for size in [0,1,7,16,65,257]:
   for alignment in ([0,1,4,8,16,24,64]if'align_val'in name else[0]):
    for failed in [False,True]:
     results=[]
     for lib,state in zip(libs,sessions):
      state.update(events=[],fail=failed,next=0x300000);arguments=[size]+([alignment]if'align_val'in name else[])+([0x2e0000]if'RKSt9nothrow'in name else[]);pointer=lib.call(name,*arguments,result_bits=64 if lib.wide else 32);metadata=bytes(lib.cpu.mem_read(pointer-(8 if lib.wide else 4),8 if lib.wide else 4))if pointer and'align_val'in name else b'';results.append((pointer,tuple(state['events']),metadata))
     assert results[0]==results[1],(name,size,alignment,failed,results);count+=1
 for name in ['__ZdlPv','__ZdaPv','__ZdlPvm','__ZdaPvm','__ZdlPvSt11align_val_t','__ZdaPvSt11align_val_t','__ZdlPvmSt11align_val_t','__ZdaPvmSt11align_val_t','__ZdlPvSt11align_val_tRKSt9nothrow_t','__ZdaPvSt11align_val_tRKSt9nothrow_t']:
  for pointer in [0,0x300100]:
   results=[]
   for lib,state in zip(libs,sessions):
    state.update(events=[]);word=8 if lib.wide else 4;lib.cpu.mem_write(0x300100-word,(0x300000).to_bytes(word,'little'));lib.call(name,pointer,128,64,0x2e0000);results.append(tuple(state['events']))
   assert results[0]==results[1],(name,pointer,results);count+=1
 for value in [0,1,2,3,0xffffffff,0x100000000,0xffffffff00000000,0xffffffffffffffff]:
  for name in ['___cxa_guard_acquire','___cxa_guard_release','___cxa_guard_abort']:
   results=[]
   for lib in libs:
    lib.cpu.mem_write(0x2e0000,struct.pack('<Q',value));status=lib.call(name,0x2e0000,result_bits=32);results.append((status if name.endswith('acquire')else 0,bytes(lib.cpu.mem_read(0x2e0000,8))))
   assert results[0]==results[1],(name,hex(value),results);count+=1
 for name in ['___cxa_atexit','___cxa_pure_virtual','__ZSt9terminatev']:
  results=[]
  for lib,state in zip(libs,sessions):
   state['events']=[];status=lib.call(name,0x12345678,0x23456789,0x34567890,result_bits=32);results.append((status if name=='___cxa_atexit'else 0,tuple(state['events'])))
  assert results[0]==results[1],(name,results);count+=1
 print('SDK C++ runtime: %d native allocation, alignment, failure, delete, guard, and termination comparisons passed.'%count)
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();exercise(a.reference,a.source)
