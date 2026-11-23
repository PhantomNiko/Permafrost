#!/usr/bin/env python3
"""Compare x64 PFS volume admission against an external disk image.

Pooka's Free Software License. Physical disk operations and allocation are
isolated callbacks; the filesystem, caches and header validation execute intact.
"""
import argparse,hashlib,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_RAX,UC_X86_REG_RSP,UC_X86_REG_RIP
p=argparse.ArgumentParser(description=__doc__)
for name in ['reference','source','map','disk']:p.add_argument('--'+name,type=Path,required=True)
p.add_argument('--drive',type=lambda x:int(x,0),default=0x80);p.add_argument('--sector',type=lambda x:int(x,0),default=1);p.add_argument('--sectors',type=lambda x:int(x,0),required=True)
a=p.parse_args();meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==0x1000007
names={n:v for v,n in meta['symbols']};mapping=json.loads(a.map.read_text());disk_bytes=a.disk.read_bytes();results=[]
for native in [True,False]:
 address=lambda name:names[name]if native else mapping['recovered_%x'%names[name]]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'entry':address('_fs_load_polynyafs_volume'),'_ws_errorf':0x4fe0000});lib.instruction_limit=500000000;c=lib.cpu;c.mem_map(0x41000000,0x6000000)
 disk=bytearray(disk_bytes);arena=[0x41000000];allocations={};events=[];requests=[]
 def leave(value=0):
  sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(UC_X86_REG_RIP,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8);c.reg_write(UC_X86_REG_RAX,value)
 def verify():
  for pointer,n in allocations.items():assert bytes(c.mem_read(pointer+n,16))==b'\xa5'*16,('heap guard',native,hex(pointer),n)
 def allocate(n):
  pointer=arena[0];arena[0]=(pointer+max(n,1)+31)&-16;assert arena[0]<0x47000000,n
  c.mem_write(pointer,bytes(n)+b'\xa5'*16);allocations[pointer]=n;events.append(('allocate',n));return pointer
 def malloc(cpu,pc,size,user):leave(allocate(c.reg_read(UC_X86_REG_RDI)))
 def free(cpu,pc,size,user):
  pointer=c.reg_read(UC_X86_REG_RDI)
  if pointer:
   n=allocations.pop(pointer);assert bytes(c.mem_read(pointer+n,16))==b'\xa5'*16;events.append(('free',n))
  leave()
 def realloc(cpu,pc,size,user):
  old,n=c.reg_read(UC_X86_REG_RDI),c.reg_read(UC_X86_REG_RSI);pointer=allocate(n)
  if old:
   count=allocations.pop(old);assert bytes(c.mem_read(old+count,16))==b'\xa5'*16;c.mem_write(pointer,bytes(c.mem_read(old,min(count,n))));events.append(('reallocate',count,n))
  leave(pointer)
 def copy(cpu,pc,size,mode):
  dest,src,n=[c.reg_read(r)for r in [UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX]]
  if n:c.mem_write(dest,bytes([src&255])*n if mode=='set'else bytes(c.mem_read(src,n)))
  leave(dest)
 def block(cpu,pc,size,write):
  drive,sector,buffer,count=[c.reg_read(r)for r in [UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX]];assert drive==a.drive
  offset=sector*512;success=int(offset+count<=len(disk));requests.append(('write'if write else'read',drive,offset,count,success))
  if success and write:disk[offset:offset+count]=bytes(c.mem_read(buffer,count))
  if success and not write:c.mem_write(buffer,bytes(disk[offset:offset+count]))
  leave(success)
 hooks=[('_malloc',malloc,None),('_free',free,None),('_realloc',realloc,None),('_memcpy',copy,'copy'),('_memmove',copy,'copy'),('_memset',copy,'set'),('_platform_efi_acpi_rsdp',lambda *args:leave(),None),('_storage_drive_is_writable',lambda *args:leave(1),None),('_load_drive_bytes',block,False),('_write_drive_bytes_internal',block,True),('_storage_flush_drive_unlocked',lambda *args:leave(1),None)]
 for name,hook,user in hooks:
  pc=address(name);c.hook_add(UC_HOOK_CODE,hook,user,begin=pc,end=pc)
 status=lib.call('entry',a.drive,a.sector,a.sectors,0,result_bits=32);assert status==1,('native'if native else'source',status,bytes(c.mem_read(0x25ebe30,128)).split(b'\0')[0]);verify()
 results.append((status,requests,events,hashlib.sha256(disk).digest(),arena[0]));print(('Native'if native else'Source')+': %d disk operations, %d allocation events.'%(len(requests),len(events)),flush=True)
assert results[0]==results[1],'PFS status, traffic, allocation events or resulting disk bytes differ'
print('x64 PFS admission, disk traffic, allocations, heap guards and resulting disk bytes match.')
