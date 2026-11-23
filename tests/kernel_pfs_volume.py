#!/usr/bin/env python3
"""Compare ARM32 PFS volume admission, allocation requests and firmware traffic.

Pooka's Free Software License. Reference binaries, disk and WFE context are
external inputs; storage writes affect only each emulator's private disk copy.
"""
import argparse,hashlib,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_PC,UC_ARM_REG_LR
p=argparse.ArgumentParser(description=__doc__)
for name in ['reference','source','map','context','disk']:p.add_argument('--'+name,type=Path,required=True)
p.add_argument('--drive',type=lambda v:int(v,0),default=0x80);p.add_argument('--sector',type=lambda v:int(v,0),default=1);p.add_argument('--sectors',type=lambda v:int(v,0),required=True)
a=p.parse_args();metadata,_=inspect(a.reference.read_bytes());assert metadata['cpu']==12;names={n:v for v,n in metadata['symbols']};mapping=json.loads(a.map.read_text());original=a.disk.read_bytes();context=bytearray(a.context.read_bytes());assert len(context)==0x2548
struct.pack_into('<II',context,0x114,0x3200000,0x3300000);struct.pack_into('<II',context,0x234,0x3500000,65536);struct.pack_into('<I',context,0x680,0)
results=[]
for native in [True,False]:
 address=lambda name:names[name]if native else mapping['_recovered_%x'%names[name]]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'entry':address('_fs_load_polynyafs_volume'),'_ws_errorf':0x4fe0000},native);lib.instruction_limit=500000000;c=lib.cpu;c.mem_map(0x41000000,0x6000000)
 c.mem_write(0x405db9d4,bytes(context));c.mem_write(0x3400000,bytes(context));c.mem_write(0x40535000,struct.pack('<I',0x3400000));c.mem_write(0x40535004,bytes(0x10));c.mem_write(0x3200000,bytes.fromhex('1eff2fe1'))
 disk=bytearray(original);requests=[];events=[];arena=[0x41000000];allocations={}
 def leave(cpu,value=0):cpu.reg_write(UC_ARM_REG_R0,value);cpu.reg_write(UC_ARM_REG_PC,cpu.reg_read(UC_ARM_REG_LR))
 def allocate(n):
  pointer=arena[0];arena[0]=(pointer+max(n,1)+15)&-16;assert arena[0]<0x47000000,n;allocations[pointer]=n;events.append(('allocate',n));return pointer
 def malloc(cpu,pc,size,user):leave(cpu,allocate(cpu.reg_read(UC_ARM_REG_R0)))
 def free(cpu,pc,size,user):
  pointer=cpu.reg_read(UC_ARM_REG_R0)
  if pointer:assert pointer in allocations,hex(pointer);events.append(('free',allocations.pop(pointer)))
  leave(cpu)
 def realloc(cpu,pc,size,user):
  old,n=cpu.reg_read(UC_ARM_REG_R0),cpu.reg_read(UC_ARM_REG_R1);pointer=allocate(n)
  if old:
   count=allocations.pop(old);c.mem_write(pointer,bytes(c.mem_read(old,min(count,n))));events.append(('reallocate',count,n))
  leave(cpu,pointer)
 def copy(cpu,pc,size,mode):
  dest,src,n=[cpu.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]]
  if n:c.mem_write(dest,bytes([src&255])*n if mode=='set'else bytes(c.mem_read(src,n)))
  leave(cpu,dest)
 def command(cpu,pc,size,user):
  pointer=cpu.reg_read(UC_ARM_REG_R0);fields=struct.unpack('<7I',bytes(cpu.mem_read(pointer,28)));requests.append(fields);operation,_,low,high,buffer,count,device=fields;offset=(low|(high<<32))*512
  success=int(device==0 and (operation==5 or operation in [2,3] and offset+count<=len(disk)))
  if success and operation==2:cpu.mem_write(buffer,bytes(disk[offset:offset+count]))
  if success and operation==3:disk[offset:offset+count]=bytes(cpu.mem_read(buffer,count))
  cpu.mem_write(pointer+4,struct.pack('<I',success));cpu.reg_write(UC_ARM_REG_R0,success)
 c.hook_add(UC_HOOK_CODE,command,begin=0x3200000,end=0x3200000)
 for name,hook,user in [('_malloc',malloc,None),('_free',free,None),('_realloc',realloc,None),('_memcpy',copy,'copy'),('_memmove',copy,'copy'),('_memset',copy,'set'),('_wm_platform_drive_is_writable',lambda c,p,n,u:leave(c,1),None)]:
  target=address(name);c.hook_add(UC_HOOK_CODE,hook,user,begin=target,end=target)
 status=lib.call('entry',a.drive,a.sector,a.sectors,0,result_bits=32);assert status==1,('native'if native else'source',status,len(requests));results.append((status,requests,events,hashlib.sha256(disk).digest(),arena[0]));print(('Native'if native else'Source')+' volume admission: %d commands, %d allocation events.'%(len(requests),len(events)),flush=True)
assert results[0]==results[1], 'PFS status, traffic, allocation events or disk bytes differ'
print('ARM32 PFS admission matches native status, commands, allocations and resulting disk bytes.')
