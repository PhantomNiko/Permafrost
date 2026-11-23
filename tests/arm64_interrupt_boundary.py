#!/usr/bin/env python3
"""Compare ARM64 IRQ register preservation and GIC acknowledgement with native code.

Pooka's Free Software License. Reference binaries remain external test inputs.
"""
import argparse,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable
from cube_render import diagnostic_reference
from dll import DLL
from kernel_byte_map import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import *


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    for name in ['kernel','source','headers','output']:parser.add_argument('--'+name,type=Path,required=True)
    args=parser.parse_args();out=args.output;out.mkdir(parents=True,exist_ok=True)
    (out/'functions.h').write_text('#include "support.h"\nuintptr_t recovered_8244a1b0(void);\nvoid *recovered_8244a208(uint64_t pc);\n')
    (out/'entry.c').write_text(args.source.read_text()+'\nuintptr_t recovered_8244a1b0(void){return *(volatile uintptr_t *)0x4000000;}\nvoid *recovered_8244a208(uint64_t pc){__asm__ volatile(""::"r"(pc):"memory");return 0;}\n')
    obj=out/'entry.o';compile_object(out/'entry.c',obj,'arm64',[out,args.headers,'sdk/include','kernel'],extra_flags=['-fno-inline'],pic=True)
    binary=link_dynamic_executable([obj],out/'entry','arm64',{},entry='recovered_8245125c')
    diagnostic=out/'entry.dylib';diagnostic_reference(binary,diagnostic)
    # FPCR, FPSR, ELR, SPSR, thread pointers.
    system=[(3,3,4,4,0),(3,3,4,4,1),(3,0,4,0,1),(3,0,4,0,0),(3,3,13,0,2),(3,3,13,0,3)]
    initial=[0x400000,0x10,0x12345678,0x345,0x876500,0x765400]
    gprs=[UC_ARM64_REG_X0+i for i in range(29)]+[UC_ARM64_REG_X29,UC_ARM64_REG_X30]
    def run(native,irq):
        library=Kernel(args.kernel,0x8245125c)if native else DLL(diagnostic)
        cpu=library.cpu
        if not native:cpu.mem_map(0x82400000,0x400000)
        cpu.reg_write(UC_ARM64_REG_PSTATE,0x3c5);cpu.reg_write(UC_ARM64_REG_CPACR_EL1,3<<20)
        for i,r in enumerate(gprs):cpu.reg_write(r,0x12340000+i*0x101)
        for i in range(32):cpu.reg_write(UC_ARM64_REG_Q0+i,(0x123456789abcdef0123456789abcdef0+i))
        for r,value in zip(system,initial):cpu.cpr_write(*r,value)
        cpu.reg_write(UC_ARM64_REG_SP,0x4ee0000)
        cpu.reg_write(UC_ARM64_REG_SP,0x4ee0000)
        cpu.mem_write(0x824a9ab0,struct.pack('<I',27));cpu.mem_write(0x824a9aa8,struct.pack('<Q',12345))
        cpu.mem_write(0x4000000+12,struct.pack('<I',irq));calls=[]
        get=0x8244a1b0 if native else library.exports['_recovered_8244a1b0']
        dispatch=0x8244a208 if native else library.exports['_recovered_8244a208']
        def hook(uc,pc,size,user):
            if bytes(uc.mem_read(pc,4))==bytes.fromhex('e0039fd6'):uc.emu_stop();return
            if pc==get:uc.reg_write(UC_ARM64_REG_X0,0x4000000);uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_LR))
            if pc==dispatch:
                calls.append(uc.reg_read(UC_ARM64_REG_X0))
                for r in gprs[:18]:uc.reg_write(r,0xbad)
                for i in list(range(8))+list(range(16,32)):uc.reg_write(UC_ARM64_REG_Q0+i,0xbad)
                for r in system:uc.cpr_write(*r,0)
                uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_LR))
        cpu.hook_add(UC_HOOK_CODE,hook)
        try:cpu.emu_start(0x8245125c if native else library.exports['_recovered_8245125c'],0,count=10000)
        except Exception as error:raise AssertionError(('native'if native else'source',irq,hex(cpu.reg_read(UC_ARM64_REG_PC))))from error
        assert bytes(cpu.mem_read(cpu.reg_read(UC_ARM64_REG_PC),4))==bytes.fromhex('e0039fd6')
        assert [cpu.reg_read(r)for r in gprs]==[0x12340000+i*0x101 for i in range(31)]
        assert [cpu.reg_read(UC_ARM64_REG_Q0+i)for i in range(32)]==[0x123456789abcdef0123456789abcdef0+i for i in range(32)]
        expected=initial[:];expected[3]|=0x80 if irq!=27 and irq<1020 else 0
        actual=[cpu.cpr_read(*r)for r in system];assert actual==expected,(irq,actual,expected)
        assert cpu.reg_read(UC_ARM64_REG_SP)==0x4ee0000
        assert calls==([0x12345678]if irq==27 else [])
        return actual,calls,bytes(cpu.mem_read(0x4000010,4))
    for irq in [27,33,1020,1023]:assert run(True,irq)==run(False,irq)
    print('ARM64 IRQ: timer, peripheral and spurious entries preserve 31 GPRs, 32 SIMD registers, system state and stack; GIC acknowledgement matches.')


if __name__=='__main__':main()
