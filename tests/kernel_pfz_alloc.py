#!/usr/bin/env python3
"""Compare full IA32/ARM kernel PFZ Mach-O wrappers, allocation and error behavior.

Pooka's Free Software License. Reference binaries remain external inputs.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from pfz import pack
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EIP,UC_X86_REG_EAX
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_PC,UC_ARM_REG_LR
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_PC,UC_ARM64_REG_LR

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path)
a=p.parse_args();meta,_=inspect(a.reference.read_bytes());names={n:x for x,n in meta['symbols']};m=json.loads(a.map.read_text());wide=meta['cpu']==0x100000c;ia32=meta['cpu']==7;assert wide or ia32 or meta['cpu']==12
reg,pc,lr=(UC_ARM64_REG_X0,UC_ARM64_REG_PC,UC_ARM64_REG_LR)if wide else(UC_ARM_REG_R0,UC_ARM_REG_PC,UC_ARM_REG_LR)
word=8 if wide else 4;entry=names['_macho_decode_file'];libraries=[Kernel(a.reference.read_bytes(),{'entry':entry,'_ws_errorf':0x4fe0000},ia32),Kernel(a.source.read_bytes(),{'entry':m[(''if ia32 else'_')+'recovered_%x'%entry],'_ws_errorf':0x4fe0000})]
requests=[[],[]];fail=[False]
for index,library in enumerate(libraries):
 for name in ['_malloc','_free']:
  address=names[name]if index==0 else m[(''if ia32 else'_')+'recovered_%x'%names[name]]
  def hook(cpu,address,size,identity):
   i,name=identity;argument=struct.unpack('<I',bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,4)))[0]if ia32 else cpu.reg_read(reg);requests[i].append((name,argument))
   value=(0 if fail[0] else 0x3800000)if name=='_malloc'else 0
   if ia32:
    sp=cpu.reg_read(UC_X86_REG_ESP);target=struct.unpack('<I',bytes(cpu.mem_read(sp,4)))[0];cpu.reg_write(UC_X86_REG_ESP,sp+4);cpu.reg_write(UC_X86_REG_EIP,target);cpu.reg_write(UC_X86_REG_EAX,value)
   else:cpu.reg_write(reg,value);cpu.reg_write(pc,cpu.reg_read(lr))
  library.cpu.hook_add(UC_HOOK_CODE,hook,(index,name),begin=address,end=address)
cases=[pack(struct.pack('<I',magic)+b'ABCD'*32)for magic in [0xfeedface,0xfeedfacf,0xcefaedfe,0xcffaedfe,0xbebafeca,0xbfbafeca,0x12345678]]
valid=cases[0];cases +=[b'',b'PFZ1',valid[:16],valid[:-1],valid[:12]+bytes(4)+valid[16:],pack(b''),pack(b'abc')]
count=0
for payload in cases:
 for allocation_failure in [False,True]:
  fail[0]=allocation_failure;results=[]
  for index,library in enumerate(libraries):
   c=library.cpu;requests[index].clear();c.mem_write(0x3000000,payload or b'\0');c.mem_write(0x3400000,b'\xa5'*512);c.mem_write(0x3800000,b'\xa5'*512)
   status=library.call('entry',0x3000000,len(payload),0x3400000,0x3400020,0x3400040,160,result_bits=8)
   pointer=int.from_bytes(c.mem_read(0x3400000,word),'little');length=int.from_bytes(c.mem_read(0x3400020,word),'little');assert not pointer or length<512
   data=bytes(c.mem_read(pointer,length))if pointer else b''
   results.append((status,pointer,length,data,bytes(c.mem_read(0x3400040,160)).split(b'\0')[0],list(requests[index]),bytes(c.mem_read(0x3400000+word,32-word)),bytes(c.mem_read(0x3400020+word,32-word))))
  assert results[0]==results[1],(count,payload[:16].hex(),allocation_failure,results)
  count+=1
print('Kernel PFZ Mach-O: %d native/source outputs, errors, allocation failures and pointer canaries match.'%count)
