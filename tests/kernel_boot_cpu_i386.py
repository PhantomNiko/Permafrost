#!/usr/bin/env python3
"""Compare IA32 boot CPU flags, x87 precision and CR0/CR4 setup.

Pooka's Free Software License. CPUID and XGETBV are isolated CPU fixtures.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_INSN,UC_HOOK_CODE
from unicorn.x86_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();mapping=json.loads(a.map.read_text());cases=[]
for edx,ecx in [(0,0),(1,0),(0x03000001,0),(0x07000001,0),(0x07000001,0x1c001000)]:
 for retained in [False,True]:
  for control in [0,0x600]:cases.append((edx,ecx,retained,control))
for edx,ecx,retained,initial_cr4 in cases:
 outputs=[]
 for native in [True,False]:
  entry=0x200cd00 if native else mapping['recovered_200cd00'];lib=Kernel((a.reference if native else a.source).read_bytes(),{'entry':entry,'_ws_errorf':0x4fe0000});c=lib.cpu;c.reg_write(UC_X86_REG_CR0,0x6000001d);c.reg_write(UC_X86_REG_CR4,initial_cr4);c.reg_write(UC_X86_REG_FPCW,0x37f)
  c.mem_write(0x211e000,struct.pack('<I',0x3000000 if retained else 0));c.mem_write(0x21749c8,struct.pack('<III',0x33454657,11,0x21f8));c.mem_write(0x2174bf8,struct.pack('<I',0x1000 if retained else 0))
  def cpuid(cpu,user):
   leaf=c.reg_read(UC_X86_REG_EAX);values=(7,0x756e6547,0x6c65746e,0x49656e69)if leaf==0 else(0x631,0,ecx,edx)if leaf==1 else(0,0,0,0)
   for reg,value in zip([UC_X86_REG_EAX,UC_X86_REG_EBX,UC_X86_REG_ECX,UC_X86_REG_EDX],values):c.reg_write(reg,value)
   return 1
  c.hook_add(UC_HOOK_INSN,cpuid,None,1,0,UC_X86_INS_CPUID)
  def xcr(cpu,pc,size,user):
   if bytes(c.mem_read(pc,3))==b'\x0f\x01\xd0':c.reg_write(UC_X86_REG_EAX,3);c.reg_write(UC_X86_REG_EDX,0);c.reg_write(UC_X86_REG_EIP,pc+3)
  extent=0x200d040 if native else min([value for value in mapping.values()if isinstance(value,int)and value>entry],default=entry+4096)
  c.hook_add(UC_HOOK_CODE,xcr)
  lib.call('entry',result_bits=32);outputs.append((bytes(c.mem_read(0x2174998,44)),c.reg_read(UC_X86_REG_CR0),c.reg_read(UC_X86_REG_CR4),c.reg_read(UC_X86_REG_FPCW)))
 assert outputs[0]==outputs[1],((edx,ecx,retained,initial_cr4),outputs)
 if not retained and edx&1:assert outputs[1][1]&14==2 and outputs[1][3]==0x27f
print('IA32 boot CPU setup: %d native/source feature, firmware-retention, CR0/CR4 and x87-control comparisons passed.'%len(cases))
