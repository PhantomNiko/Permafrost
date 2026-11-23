#!/usr/bin/env python3
"""Compare the recovered x64 interrupt boundary with an original kernel.

Exercises the FXSAVE path with a dispatcher that clobbers caller-saved state.
Pooka's Free Software License. Reference binaries remain external test inputs.
"""
from pathlib import Path
import sys,struct,argparse
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from cc import compile_object
from elf64 import Object,link
from native import inspect
from unicorn import *
from unicorn.x86_const import *
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--kernel',type=Path,required=True)
parser.add_argument('--source',type=Path,required=True)
parser.add_argument('--output',type=Path,required=True)
args=parser.parse_args()
out=args.output;out.mkdir(parents=True,exist_ok=True)
(out/'functions.h').write_text('#include <stdint.h>\nvoid recovered_200aa80(void);\n')
(out/'entry.c').write_text(args.source.read_text())
compile_object(out/'entry.c',out/'entry.o',[str(out),'sdk/include'],architecture='x86_64')
blob,symbols,placements=link([Object((out/'entry.o').read_bytes())],base=0x3000000,entry='recovered_200ae30',externals={'recovered_200aa80':0x200aa80},shim=False)
entry=symbols['recovered_200ae30']
meta,memory=inspect(args.kernel.read_bytes())
registers=[UC_X86_REG_RAX,UC_X86_REG_RCX,UC_X86_REG_RDX,UC_X86_REG_RBX,UC_X86_REG_RBP,UC_X86_REG_RSI,UC_X86_REG_RDI,UC_X86_REG_R8,UC_X86_REG_R9,UC_X86_REG_R10,UC_X86_REG_R11,UC_X86_REG_R12,UC_X86_REG_R13,UC_X86_REG_R14,UC_X86_REG_R15]
def run(native,ts):
 cpu=Uc(UC_ARCH_X86,UC_MODE_64);cpu.mem_map(0,0x5000000);cpu.mem_write(meta['base'],memory);cpu.mem_write(0x3000000,blob)
 for index,reg in enumerate(registers):cpu.reg_write(reg,0x1234000000000000+index*0x101)
 for i in range(16):cpu.reg_write(UC_X86_REG_XMM0+i,0x123456789abcdef0123456789abcdef0+i)
 cpu.reg_write(UC_X86_REG_CR0,0x11|(8 if ts else 0));cpu.reg_write(UC_X86_REG_CR4,0x600)
 cpu.reg_write(UC_X86_REG_MXCSR,0x1f80)
 cpu.reg_write(UC_X86_REG_RSP,0x4ee0000);cpu.mem_write(0x4ee0000,struct.pack('<5Q',0x12345678,8,0x202,0x4ee0100,16))
 calls=[]
 def hook(uc,address,size,data):
  opcode=bytes(uc.mem_read(address,size))
  if opcode==bytes.fromhex('48cf'):
   uc.emu_stop();return
  if address==0x200aa80:
   calls.append((uc.reg_read(UC_X86_REG_RDI),uc.reg_read(UC_X86_REG_RSP)&15))
   for reg in [UC_X86_REG_RAX,UC_X86_REG_RCX,UC_X86_REG_RDX,UC_X86_REG_RSI,UC_X86_REG_RDI,UC_X86_REG_R8,UC_X86_REG_R9,UC_X86_REG_R10,UC_X86_REG_R11]:uc.reg_write(reg,0xbad)
   for i in range(16):uc.reg_write(UC_X86_REG_XMM0+i,0xbad+i)
   uc.reg_write(UC_X86_REG_MXCSR,0x3f80)
   sp=uc.reg_read(UC_X86_REG_RSP);ret=struct.unpack('<Q',bytes(uc.mem_read(sp,8)))[0];uc.reg_write(UC_X86_REG_RSP,sp+8);uc.reg_write(UC_X86_REG_RIP,ret)
 cpu.hook_add(UC_HOOK_CODE,hook);cpu.emu_start(0x200ae30 if native else entry,0,count=10000)
 assert calls==[(0x12345678,8)],calls
 assert bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_RIP),2))==bytes.fromhex('48cf')
 values=[cpu.reg_read(reg) for reg in registers]+[cpu.reg_read(UC_X86_REG_XMM0+i)for i in range(16)]
 assert values[:15]==[0x1234000000000000+i*0x101 for i in range(15)]
 assert values[15:]==[0x123456789abcdef0123456789abcdef0+i for i in range(16)]
 assert cpu.reg_read(UC_X86_REG_MXCSR)==0x1f80
 assert cpu.reg_read(UC_X86_REG_RSP)==0x4ee0000
 assert bool(cpu.reg_read(UC_X86_REG_CR0)&8)==ts
 return values,calls,cpu.reg_read(UC_X86_REG_CR0)
for ts in [False,True]:assert run(True,ts)==run(False,ts)
print('x64 source/native interrupt boundaries preserve all 15 GPRs, 16 XMM registers, MXCSR, stack and CR0.TS after a clobbering dispatcher.')
