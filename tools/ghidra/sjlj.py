#!/usr/bin/env python3
"""Identify custom SJLJ registration sites in a recovered flat i386 image.

For decompiler analysis only; requires Capstone. Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone.x86 import X86_OP_MEM, X86_OP_IMM, X86_REG_EBP

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('image',type=Path);p.add_argument('out',type=Path)
p.add_argument('--base',type=lambda x:int(x,0),required=True)
p.add_argument('--end',type=lambda x:int(x,0),required=True)
p.add_argument('--register',type=lambda x:int(x,0),required=True)
a=p.parse_args();blob=a.image.read_bytes();cs=Cs(CS_ARCH_X86,CS_MODE_32);cs.detail=True;cs.skipdata=True
history=[];sites=[]
for i in cs.disasm(blob[:a.end-a.base],a.base):
    if i.id==0:continue
    if i.mnemonic=='call' and len(i.operands)==1 and i.operands[0].type==X86_OP_IMM and i.operands[0].imm==a.register:
        # The context's saved landing-pad PC is initialized just before link.
        candidates=[j for j in history[-48:] if j.mnemonic=='mov' and len(j.operands)==2
                    and j.operands[0].type==X86_OP_MEM 
                    and j.operands[1].type==X86_OP_IMM and i.address<j.operands[1].imm<a.end]
        if not candidates:raise ValueError('missing landing pad at '+hex(i.address))
        landing=candidates[-1].operands[1].imm
        sites.append((i.address,landing))
    history.append(i)
a.out.write_text(''.join('%x\t%x\n'%v for v in sites))
print('Identified %d SJLJ landing pads'%len(sites))
