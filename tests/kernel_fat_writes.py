#!/usr/bin/env python3
"""Compare FAT file writes through a synthetic block-device boundary.

Pooka's Free Software License. Reference executables are comparison inputs only.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect,CPUS
from kernel_wmfs_flush import PROFILES
from unicorn.arm_const import *
from unicorn.arm64_const import *
from fat import make_fat32_tree
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

def exercise(binary,addresses,native):
 results=[]
 for broken,kind in [(False,5)]:
  lib=Kernel(binary,addresses,native);wide=lib.wide;word=8 if wide else 4;arch=next(a for a,c in CPUS.items()if c==lib.cpu_type);fs_address=PROFILES[arch]['globals'][0];stride=0x118 if wide else 0x110;data_offset=0xf8 if wide else 0xf4;disk=bytearray(make_fat32_tree({'hello.txt':b'hello','Folder/nested.txt':b'nested'},131072))
  if broken:disk[510:512]=b'\0\0'
  state={'next':0x3100000,'blocks':{},'events':[]}
  def args(n,fastcall=False):
   if lib.cpu_type==7:
    sp=lib.cpu.reg_read(UC_X86_REG_ESP)
    if native and fastcall:return [lib.cpu.reg_read(UC_X86_REG_ECX),lib.cpu.reg_read(UC_X86_REG_EDX)][:n]+(list(struct.unpack('<'+'I'*(n-2),bytes(lib.cpu.mem_read(sp+4,4*(n-2)))))if n>2 else[])
    return list(struct.unpack('<'+'I'*n,bytes(lib.cpu.mem_read(sp+4,4*n))))
   regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX];return [lib.cpu.reg_read(r)for r in regs[:n]]
  def finish(value):
   c=lib.cpu;c.reg_write(lib.result,value)
   if lib.cpu_type in [12,0x100000c]:c.reg_write(lib.pc,c.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
   else:
    reg=UC_X86_REG_RSP if wide else UC_X86_REG_ESP;sp=c.reg_read(reg);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,word),'little'));c.reg_write(reg,sp+word)
  def malloc(c,a,z,u):
   count=args(1)[0];assert count<0x1000000,count;pointer=state['next'];state['next']=(pointer+max(count,1)+15)&-16;assert state['next']<0x4000000;c.mem_write(pointer,bytes(count));state['blocks'][pointer]=count;finish(pointer)
  def free(c,a,z,u):state['blocks'].pop(args(1)[0],None);finish(0)
  def read(c,a,z,u):
   drive,lba,out,count=args(4,True);state['events'].append(('read',drive,lba,count));assert drive==0x80,(drive,lba,count);offset=(lba-2048)*512
   if offset<0 or offset+count>len(disk):finish(0);return
   c.mem_write(out,bytes(disk[offset:offset+count]));finish(1)
  def write(c,a,z,u):
   drive,lba,pointer,count=args(4,True);offset=(lba-2048)*512;payload=bytes(c.mem_read(pointer,count));state['events'].append(('write',drive,lba,len(payload),__import__('hashlib').sha256(payload).hexdigest()))
   if drive!=0x80 or offset<0 or offset+count>len(disk):finish(0);return
   disk[offset:offset+count]=payload;finish(1)
  for name,callback in [('_malloc',malloc),('_wm_probe_heap_alloc',malloc),('_free',free),('_load_drive_bytes',read),('_write_drive_bytes',write)]:
   a=addresses[name];lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
  record=bytearray(96);struct.pack_into('<IIII',record,0,7,0x80,2048,len(disk)//512);lib.cpu.mem_write(0x3000000,bytes(record));status=lib.call('_fs_load_device',0x3000000,kind,result_bits=8);fs=bytes(lib.cpu.mem_read(fs_address,0xc0 if wide else 0xbc));pointer,count=struct.unpack_from('<QQ'if wide else'<II',fs);assert count<32,count;files=[]
  for i in range(count):
   row=bytes(lib.cpu.mem_read(pointer+i*stride,stride));files.append((row[:241].split(b'\0')[0],struct.unpack_from('<II',row,data_offset+word)))
  payloads=[]
  if status:
   for i in [1,2]:
    loaded=lib.call('_fs_ensure_file_data_loaded',i,0,0,result_bits=8);row=bytes(lib.cpu.mem_read(pointer+i*stride,stride));data,length=(int.from_bytes(row[data_offset:data_offset+word],'little'),int.from_bytes(row[data_offset+word:data_offset+word+4],'little'));payloads.append((loaded,bytes(lib.cpu.mem_read(data,length))if loaded and data else None))
  
  if not broken and kind==5:assert status==1 and [v[0]for v in files]==[b'Folder',b'Folder/nested.txt',b'hello.txt'] and payloads==[(1,b'nested'),(1,b'hello')],(status,files,payloads)
  else:assert status==0
  written=[]
  for path,payload in [(b'new.txt',b'new content'),(b'hello.txt',b'changed'),(b'Folder/another.txt',bytes(i%251 for i in range(1300))),(b'hello.txt',b'')]:
   lib.cpu.mem_write(0x3001000,path+b'\0');lib.cpu.mem_write(0x3002000,payload+b'\0');value=lib.call('_fs_write_file',0x3001000,0x3002000,len(payload),result_bits=8);written.append(value)
  assert written==[1,1,1,1],('write statuses',native,written)
  results.append((written,__import__('hashlib').sha256(disk).hexdigest(),status,files,fs[0x28:0x88]if wide else fs[0x18:0x78],payloads,state['events']))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};expected=exercise(a.reference.read_bytes(),native,True);actual=exercise(a.source.read_bytes(),source,False);assert expected==actual,[(x[:2],y[:2],len(x[-1]),len(y[-1]),next(((i,a,b)for i,(a,b)in enumerate(zip(x[-1],y[-1]))if a!=b),None))for x,y in zip(expected,actual)if x!=y];print('FAT writes: native create, overwrite, nested growth, empty file and complete disk comparisons passed.')
