#!/usr/bin/env python3
"""Compare x64 heap state and realloc payloads against the reference kernel.

Pooka's Free Software License. Guest heap and firmware state are synthetic.
"""
import argparse,json,struct,random,hashlib
from pathlib import Path
from kernel_efi_storage import Kernel
from native import inspect
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path)
a=p.parse_args();metadata,_=inspect(a.reference.read_bytes());names={n:address for address,n in metadata['symbols']};symbols=json.loads(a.map.read_text())
from dll import DLL
from unicorn import UC_HOOK_CODE
heap=0x3500000;length=0x400000
answers=[]
for native in [True,False]:
 lib=Kernel(a.reference if native else a.source,bytes(0x2548),b'',0);lib.instruction_limit=100000000;c=lib.cpu
 addr=lambda x:x if native else symbols['recovered_%x'%x]
 def leave(cpu):
  from unicorn.x86_const import UC_X86_REG_RSP,UC_X86_REG_RIP
  sp=cpu.reg_read(UC_X86_REG_RSP);cpu.reg_write(UC_X86_REG_RIP,int.from_bytes(cpu.mem_read(sp,8),'little'));cpu.reg_write(UC_X86_REG_RSP,sp+8)
 c.mem_write(heap,struct.pack('<4Q',length-32,0,0,1)+bytes(length-32));c.mem_write(0x2134008,struct.pack('<3Q',heap,0,heap))
 c.hook_add(UC_HOOK_CODE,lambda c,a,z,u:leave(c),begin=addr(0x2000100),end=addr(0x2000100))
 def call(a,*args):lib.exports['read']=addr(a);return DLL.call(lib,'read',*args,result_bits=64)
 live={};rng=random.Random(1041);rows=[]
 for i in range(1500):
  slot=rng.randrange(32);size=rng.choice([1,15,16,17,31,32,64,241,272,512,8704,17408,65536]);old,n=live.get(slot,(0,0));pattern=bytes([slot+1])*n
  if old:assert bytes(c.mem_read(old,n))==pattern,(native,i,'before',slot,n)
  if rng.randrange(4)==0:
   call(0x2000c20,old);live.pop(slot,None);p=0
  else:
   p=call(0x2000d90,old,size)
   if p:
    if old:assert bytes(c.mem_read(p,min(n,size)))==pattern[:min(n,size)],(native,i,'after',slot,n,size,hex(old),hex(p))
    c.mem_write(p,bytes([slot+1])*size);live[slot]=(p,size)
  rows.append((p,hashlib.sha256(bytes(c.mem_read(heap,length))).digest()))
 answers.append(rows)
assert answers[0]==answers[1]
print('1500 allocator state and payload cases match')
