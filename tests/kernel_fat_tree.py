#!/usr/bin/env python3
"""Compare 64-bit FAT tree node transport, indexing and growth with native code.

Pooka's Free Software License. Reference kernels are test inputs only.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc,UC_ARCH_ARM64,UC_ARCH_X86,UC_MODE_ARM,UC_MODE_64,UC_HOOK_CODE
from unicorn.arm64_const import *
from unicorn.x86_const import *


def exercise(binary,reference,mapping=None):
 metadata,memory=inspect(binary);assert metadata['cpu']in [0x100000c,0x1000007];arm=metadata['cpu']==0x100000c
 registers=[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6,UC_ARM64_REG_X7]if arm else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9]
 result_register=UC_ARM64_REG_X0 if arm else UC_X86_REG_RAX;pc_register=UC_ARM64_REG_PC if arm else UC_X86_REG_RIP
 names={n:a for a,n in reference['symbols']}
 def target(name):
  address=names[name]
  return address if mapping is None else mapping.get('recovered_%x'%address,mapping.get('_recovered_%x'%address))
 cpu=Uc(UC_ARCH_ARM64 if arm else UC_ARCH_X86,UC_MODE_ARM if arm else UC_MODE_64);cpu.mem_map(0,0x5000000)
 if arm:cpu.mem_map(0x82000000,0x8000000)
 cpu.mem_write(metadata['base'],memory)
 stack,stop=0x4fe0000,0x4ff0000;next_alloc=0x3200000;allocations={};allocation_fail=False
 def finish(value):
  cpu.reg_write(result_register,value)
  if arm:pc=cpu.reg_read(UC_ARM64_REG_X30)
  else:
   sp=cpu.reg_read(UC_X86_REG_RSP);pc=int.from_bytes(cpu.mem_read(sp,8),'little');cpu.reg_write(UC_X86_REG_RSP,sp+8)
  cpu.reg_write(pc_register,pc)
 def text(address):
  out=bytearray()
  while True:
   byte=cpu.mem_read(address+len(out),1)[0]
   if not byte:return bytes(out)
   out.append(byte);assert len(out)<1024
 def realloc(cpu,address,size,user):
  nonlocal next_alloc
  old,count=cpu.reg_read(registers[0]),cpu.reg_read(registers[1])
  if allocation_fail:finish(0);return
  assert count<0x100000
  result=next_alloc;next_alloc=(result+count+15)&-16;cpu.mem_write(result,bytes(count))
  if old:cpu.mem_write(result,bytes(cpu.mem_read(old,min(count,allocations[old]))))
  allocations[result]=count;finish(result)
 def format_string(cpu,address,size,user):
  output,count,fmt=[cpu.reg_read(r)for r in registers[:3]]
  pattern=text(fmt);assert pattern in [b'%s',b'%s/%s']
  sp=cpu.reg_read(UC_ARM64_REG_SP if arm else UC_X86_REG_RSP);arg=int.from_bytes(cpu.mem_read(sp,8),'little')if arm else cpu.reg_read(registers[3]);value=text(arg)
  if pattern==b'%s/%s':value+=b'/'+text(int.from_bytes(cpu.mem_read(sp+8,8),'little')if arm else cpu.reg_read(registers[4]))
  cpu.mem_write(output,value[:max(count-1,0)]+b'\0');finish(len(value))
 for name,hook in [('_realloc',realloc),('_snprintf',format_string)]:
  # Symbol spellings differ from the public compiler names in some kernels.
  if name not in names:
   wanted=(0x82400820 if name=='_realloc'else 0x82401ff0)if arm else(0x2000d40 if name=='_realloc'else 0x2005a30)
   address=wanted if mapping is None else mapping.get('recovered_%x'%wanted,mapping.get('_recovered_%x'%wanted))
  else:address=target(name)
  cpu.hook_add(UC_HOOK_CODE,hook,begin=address,end=address)
 def invoke(name,arguments):
  for register,value in zip(registers,arguments):cpu.reg_write(register,value)
  if arm:
   cpu.reg_write(UC_ARM64_REG_SP,stack);cpu.reg_write(UC_ARM64_REG_X30,stop)
   if len(arguments)>8:cpu.mem_write(stack,struct.pack('<I4xQ',*arguments[8:]))
  else:
   cpu.reg_write(UC_X86_REG_RSP,stack-8);cpu.mem_write(stack-8,struct.pack('<Q',stop))
   if len(arguments)>6:cpu.mem_write(stack,struct.pack('<'+'Q'*(len(arguments)-6),*arguments[6:]))
  cpu.emu_start(target(name),stop,count=3000000);assert cpu.reg_read(pc_register)==stop,'FAT routine did not return';return cpu.reg_read(result_register)&1
 def call(arguments):return invoke('_fat_tree_add_node',arguments)
 holder,count,capacity,out=0x3100000,0x3100010,0x3100020,0x3100030
 def node(parent,name,path,index,directory,flags,output=True):
  cpu.mem_write(0x3110000,name+b'\0');cpu.mem_write(0x3111000,path+b'\0');cpu.mem_write(out,b'\xff'*4)
  result=call([holder,count,capacity,parent,0x3110000,0x3111000,index,directory,flags,out if output else 0]);address=int.from_bytes(cpu.mem_read(holder,8),'little');n=int.from_bytes(cpu.mem_read(count,8),'little');return result,bytes(cpu.mem_read(out,4)),bytes(cpu.mem_read(address,n*0x218))if address else b''
 results=[]
 for case in [(0xffffffff,b'',b'',0xffffffffffffffff,1,2,True),
              (0,b'Folder',b'Folder',0xffffffffffffffff,1,2,True),
              (1,b'file.txt',b'Folder/file.txt',0x100000001,0,0x11223344,True),
              (1,b'file.txt',b'Folder/file.txt',5,0,0xa5,True),
              (1,b'file.txt',b'Folder/file.txt',0xffffffffffffffff,0,7,False),
              (0,b'file.txt',b'file.txt',6,0,0x42,True),
              (0,b'Folder',b'Folder',9,0,3,True)]:results.append(node(*case))
 assert [r[0]for r in results]==[1,1,1,1,1,1,0]
 assert int.from_bytes(results[2][1],'little')==2,'output index was lost'
 assert struct.unpack_from('<Q',results[2][2],2*0x218+8)[0]==0x100000001,'file index was narrowed'
 assert struct.unpack_from('<Q',results[1][2],0x218+8)[0]==0xffffffffffffffff,'directory sentinel was narrowed'
 allocation_fail=True
 # Force reserve to grow while retaining the existing nodes and count.
 cpu.mem_write(capacity,struct.pack('<Q',0));results.append(node(0,b'failed',b'failed',8,0,0))
 assert results[-1][0]==0
 allocation_fail=False
 files=0x3300000
 paths=[(b'Folder',2),(b'Folder/alpha.txt',0),
        (b'Folder/Nested/item.bin',0),(b'root.txt',0),(b'Folder/Nested',2)]
 for i,(path,flags)in enumerate(paths):
  record=bytearray(0x118);record[:len(path)]=path;struct.pack_into('<I',record,0x104,flags);cpu.mem_write(files+i*0x118,bytes(record))
 cpu.mem_write(0x8266f188 if arm else 0x215a7b0,struct.pack('<QQ',files,len(paths)))
 cpu.mem_write(holder,bytes(8));cpu.mem_write(count,bytes(8));result=invoke('_fat_build_tree',[holder,count])
 address=int.from_bytes(cpu.mem_read(holder,8),'little');n=int.from_bytes(cpu.mem_read(count,8),'little');assert result==1 and n==6,('nested FAT tree was not collected',result,n)
 tree=bytes(cpu.mem_read(address,n*0x218));assert struct.unpack_from('<Q',tree,3*0x218+8)[0]==4,'explicit directory did not replace its implicit sentinel';results.append((result,struct.pack('<Q',n),tree))
 return results


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();reference=a.reference.read_bytes();m,_=inspect(reference);expected=exercise(reference,m);actual=exercise(a.source.read_bytes(),m,json.loads(a.map.read_text()));assert expected==actual,'FAT node records or results differ';print('64-bit FAT tree: eight node cases and a nested implicit/explicit-directory collection match native code.')
