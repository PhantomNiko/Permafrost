#!/usr/bin/env python3
"""Compare r147's four numeric exports through each native calling convention.

Pooka's Free Software License.
"""
import math
from pathlib import Path
import struct
import sys
from dll import DLL
from unicorn.x86_const import UC_X86_REG_XMM0, UC_X86_REG_FP0, UC_X86_REG_FPSW, UC_X86_REG_FPTAG
from unicorn.arm64_const import UC_ARM64_REG_D0
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1


def bits(value):
    return struct.unpack('<Q',struct.pack('<d',value))[0]


def words(lib,value):
    return (value,)if lib.wide else(value&0xffffffff,value>>32)


def integer(lib,name,value):
    raw=bits(value)
    if lib.wide:
        lib.cpu.reg_write(UC_X86_REG_XMM0 if lib.cpu_type==0x1000007 else UC_ARM64_REG_D0,raw)
        arguments=()
    else:arguments=words(lib,raw)
    return lib.call(name,*arguments,result_bits=64)


def floating(lib,name,value):
    if lib.cpu_type==7:
        lib.cpu.reg_write(UC_X86_REG_FPSW,0)
        lib.cpu.reg_write(UC_X86_REG_FPTAG,0xffff)
    lib.call(name,*words(lib,value),result_bits=64)
    if lib.wide:
        return lib.cpu.reg_read(UC_X86_REG_XMM0 if lib.cpu_type==0x1000007 else UC_ARM64_REG_D0)
    if lib.cpu_type==12:
        return lib.cpu.reg_read(UC_ARM_REG_R0)|(lib.cpu.reg_read(UC_ARM_REG_R1)<<32)
    top=(lib.cpu.reg_read(UC_X86_REG_FPSW)>>11)&7
    mantissa,exponent=lib.cpu.reg_read(UC_X86_REG_FP0+top)
    number=math.ldexp(float(mantissa),(exponent&0x7fff)-16383-63)if mantissa else 0.0
    return bits(-number if exponent&0x8000 else number)


def main():
    reference,source=map(Path,sys.argv[1:])
    native,actual=DLL(reference),DLL(source)
    assert native.cpu_type==actual.cpu_type
    count=0
    for value in(0.0,-0.0,0.5,1.5,-1.5,2.0**32+17,2.0**53,2.0**63,2.0**64,
                 -2.0**64,float('inf'),float('-inf'),float('nan')):
        for name in('___fixdfdi','___fixunsdfdi'):
            expected=integer(native,name,value);result=integer(actual,name,value)
            assert result==expected,(name,value,hex(result),hex(expected))
            count+=1
    for value in(0,1,42,0xffffffff,0x100000001,0x1fffffffffffff,0x20000000000001,
                 0x7fffffffffffffff,0x8000000000000000,0xffffffffffffffff):
        for name in('___floatdidf','___floatundidf'):
            expected=floating(native,name,value);result=floating(actual,name,value)
            assert result==expected,(name,hex(value),hex(result),hex(expected))
            count+=1
    print('Numeric helpers: %d native/source ABI cases passed.'%count)


if __name__=='__main__':main()
