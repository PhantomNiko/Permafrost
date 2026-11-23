#!/usr/bin/env python3
"""Execute ARM control-register transfers and inspect SMCCC register arguments.

Pooka's Free Software License. Requires an ARM-capable Unicorn build.
"""
import argparse
from pathlib import Path
import struct
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable
from cube_render import diagnostic_reference
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--headers',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args();out=args.output;out.mkdir(parents=True,exist_ok=True)
    obj=out/'control.o';compile_object(Path('tests/arm_control.c'),obj,'armv7',['sdk/include',args.headers],pic=True)
    binary=link_dynamic_executable([obj],out/'control','armv7',{},entry='read_mair')
    diagnostic=out/'control.dylib';diagnostic_reference(binary,diagnostic)
    library=DLL(diagnostic,cpu_model=UC_CPU_ARM_CORTEX_A15);cpu=library.cpu
    cpu.cpr_write(15,0,10,2,0,0,False,0x12345678)
    assert library.call('_read_mair',result_bits=32)==0x12345678
    cpu.cpr_write(15,0,0,2,0,0,True,0x123456789abcde00)
    assert library.call('_read_translation_base',result_bits=64)==0x123456789abcde00
    before=cpu.cpr_read(15,0,0,14,0,0,True)
    sampled=library.call('_read_timer',result_bits=64)
    assert before<=sampled<=cpu.cpr_read(15,0,0,14,0,0,True)
    # Exercise a writable paired register; Unicorn does not implement timer
    # compare writes on every CPU backend, so use TTBR0 for the round trip.
    value=0x12345678abcdef01
    library.call('_write_translation_base',value&0xffffffff,value>>32)
    assert library.call('_read_translation_base',result_bits=64)==value
    calls=[]
    def supervisor(uc,address,size,data):
        word=struct.unpack('<I',bytes(uc.mem_read(address,4)))[0]
        if word not in [0xe1600070,0xe1400070]:return
        calls.append((word,[uc.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]]))
        uc.reg_write(UC_ARM_REG_R0,0xfffffffe);uc.reg_write(UC_ARM_REG_PC,address+4)
    hook=cpu.hook_add(UC_HOOK_CODE,supervisor)
    for name,word in [('_smc_probe',0xe1600070),('_hvc_probe',0xe1400070)]:
        assert library.call(name,0x84000003,0x1122,0x3344,0x5566,result_bits=32)==0xfffffffe
        assert calls[-1]==(word,[0x84000003,0x1122,0x3344,0x5566])
    cpu.hook_del(hook)
    print('ARM control selectors, paired translation-register access and SMC/HVC argument/result registers pass.')


if __name__=='__main__':main()
