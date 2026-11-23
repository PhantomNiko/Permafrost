#!/usr/bin/env python3
"""Compare ARM64 PFS directory creation and disk metadata against a reference.

Pooka's Free Software License. Physical disk operations and allocation are
isolated callbacks; the filesystem, caches and header validation execute intact.
"""
import argparse,hashlib,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_SP,UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_LR,UC_ARM64_REG_PC
p=argparse.ArgumentParser(description=__doc__)
for name in ['reference','source','map','disk']:p.add_argument('--'+name,type=Path,required=True)
p.add_argument('--drive',type=lambda x:int(x,0),default=0x80);p.add_argument('--sector',type=lambda x:int(x,0),default=1);p.add_argument('--sectors',type=lambda x:int(x,0),required=True)
a=p.parse_args();meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==0x100000c
names={n:v for v,n in meta['symbols']};mapping=json.loads(a.map.read_text());disk_bytes=a.disk.read_bytes();results=[]
for native in [True,False]:
 address=lambda name:names[name]if native else mapping['_recovered_%x'%names[name]]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'entry':address('_fs_load_polynyafs_volume'),'_ws_errorf':0x4fe0000});lib.instruction_limit=500000000;c=lib.cpu;c.mem_map(0x41000000,0x6000000)
 disk=bytearray(disk_bytes);arena=[0x41000000];allocations={};events=[];requests=[]
 def leave(value=0):
  c.reg_write(UC_ARM64_REG_PC,c.reg_read(UC_ARM64_REG_LR));c.reg_write(UC_ARM64_REG_X0,value)
 def verify():
  for pointer,n in allocations.items():assert bytes(c.mem_read(pointer+n,16))==b'\xa5'*16,('heap guard',native,hex(pointer),n)
 def allocate(n):
  pointer=arena[0];arena[0]=(pointer+max(n,1)+31)&-16;assert arena[0]<0x47000000,n
  c.mem_write(pointer,bytes(n)+b'\xa5'*16);allocations[pointer]=n;events.append(('allocate',n));return pointer
 def malloc(cpu,pc,size,user):leave(allocate(c.reg_read(UC_ARM64_REG_X0)))
 def free(cpu,pc,size,user):
  pointer=c.reg_read(UC_ARM64_REG_X0)
  if pointer:
   n=allocations.pop(pointer);assert bytes(c.mem_read(pointer+n,16))==b'\xa5'*16;events.append(('free',n))
  leave()
 def realloc(cpu,pc,size,user):
  old,n=c.reg_read(UC_ARM64_REG_X0),c.reg_read(UC_ARM64_REG_X1);pointer=allocate(n)
  if old:
   count=allocations.pop(old);assert bytes(c.mem_read(old+count,16))==b'\xa5'*16;c.mem_write(pointer,bytes(c.mem_read(old,min(count,n))));events.append(('reallocate',count,n))
  leave(pointer)
 def copy(cpu,pc,size,mode):
  dest,src,n=[c.reg_read(r)for r in [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]]
  if n:c.mem_write(dest,bytes([src&255])*n if mode=='set'else bytes(c.mem_read(src,n)))
  leave(dest)
 def block(cpu,pc,size,write):
  drive,sector,buffer,count=[c.reg_read(r)for r in [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]];assert drive==a.drive
  offset=sector*512;success=int(offset+count<=len(disk));requests.append(('write'if write else'read',drive,offset,count,success))
  if success and write:disk[offset:offset+count]=bytes(c.mem_read(buffer,count))
  if success and not write:c.mem_write(buffer,bytes(disk[offset:offset+count]))
  leave(success)
 hooks=[('_malloc',malloc,None),('_free',free,None),('_realloc',realloc,None),('_memcpy',copy,'copy'),('_memmove',copy,'copy'),('_memset',copy,'set'),('_platform_efi_acpi_rsdp',lambda *args:leave(),None),('_storage_drive_is_writable',lambda *args:leave(1),None),('_load_drive_bytes',block,False),('_write_drive_bytes_internal',block,True),('_write_drive_bytes_deferred',block,True),('_storage_flush_drive_unlocked',lambda *args:leave(1),None),('_kernel_time_current_epoch_seconds',lambda *args:leave(),None)]
 for name,hook,user in hooks:
  pc=address(name);c.hook_add(UC_HOOK_CODE,hook,user,begin=pc,end=pc)
 status=lib.call('entry',a.drive,a.sector,a.sectors,0,result_bits=32)
 assert status==1,('native'if native else'source',status,bytes(c.mem_read(0x82738810,128)).split(b'\0')[0])
 lib.exports['mkdir']=address('_fs_create_directory_path')
 for path in [b'PermafrostFixture',b'PermafrostFixture\\child',b'PermafrostFixture\\child\\leaf']:
  c.mem_write(0x3100000,path+b'\0')
  assert lib.call('mkdir',0x3100000,result_bits=32)==1,(native,path)
  verify()
 results.append(hashlib.sha256(disk).digest())
 print(('Native'if native else'Source')+': %d physical I/O calls, %d allocation events; three directories created.'%(len(requests),len(events)),flush=True)
assert results[0]==results[1],'PFS directory metadata or disk bytes differ with the clock fixed'
print('ARM64 PFS: native/source directory creation, resulting disk bytes and heap guards match.')
