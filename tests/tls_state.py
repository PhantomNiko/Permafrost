#!/usr/bin/env python3
"""Compare TLS initialization and entropy callback state against native code.

Pooka's Free Software License.
"""
import argparse
import hashlib
from pathlib import Path
import struct
from tls_library import library, call
from unicorn import UC_HOOK_CODE
from unicorn import x86_const as x86, arm_const as arm, arm64_const as arm64


def exercise(path, reference, hostname, date, mode, api_base):
    lib = library(path, reference, api_base)
    context, io, name, output = 0x3000000, 0x3001000, 0x3002000, 0x3003000
    events = []

    def arguments(count):
        if lib.cpu_type == 7:
            stack = lib.cpu.reg_read(x86.UC_X86_REG_ESP)
            return struct.unpack('<'+'I'*count, lib.cpu.mem_read(stack+4, count*4))
        registers = ((x86.UC_X86_REG_RDI,x86.UC_X86_REG_RSI,x86.UC_X86_REG_RDX)
                     if lib.cpu_type == 0x1000007 else
                     (arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2)
                     if lib.cpu_type == 12 else
                     (arm64.UC_ARM64_REG_X0,arm64.UC_ARM64_REG_X1,arm64.UC_ARM64_REG_X2))
        return tuple(lib.cpu.reg_read(register) for register in registers[:count])

    def datetime(cpu, address, size, user):
        pointer, = arguments(1)
        cpu.mem_write(pointer, struct.pack('<6I',2026,11,7,13,45,29))
        events.append('date')
        cpu.reg_write(lib.result, int(date))

    def entropy(cpu, address, size, user):
        userdata, pointer, count = arguments(3)
        assert (userdata, pointer, count) == (0x12345678, output, 32)
        cpu.mem_write(pointer, hashlib.sha256(b'entropy fixture').digest())
        events.append('entropy')
        cpu.reg_write(lib.result, int(mode == 'pass'))

    instruction = b'\xc3' if lib.cpu_type in (7,0x1000007) else struct.pack('<I',
        0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0)
    for target, callback in ((0x240000, entropy),(0x240100, datetime)):
        lib.cpu.mem_write(target,instruction)
        lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=target,end=target)
    if date is not None:
        for api in lib.api_tables:
            lib.cpu.mem_write(api+0x168,struct.pack('<I',0x240100))
    lib.cpu.mem_write(context,b'\xa5'*1024)
    lib.cpu.mem_write(io,struct.pack('<5Q' if lib.wide else '<5I',
                                   0x12345678,0,0,0 if mode is None else 0x240000,0))
    if hostname is not None:
        lib.cpu.mem_write(name,hostname.encode()+b'\0')
    lib.call('_winter_tls_client_init',context,io,0 if hostname is None else name)
    initialized = bytes(lib.cpu.mem_read(context,1024))
    transitions=[]
    for _ in range(3):
        lib.cpu.mem_write(output,b'\xa5'*64)
        call(lib,'_winter_tls_fill_random',context,output)
        transitions.append((bytes(lib.cpu.mem_read(context,1024)),bytes(lib.cpu.mem_read(output,64))))
    call(lib,'_winter_tls_fill_random',context,0)
    return initialized,transitions,bytes(lib.cpu.mem_read(context,1024)),events


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path)
    parser.add_argument('source',type=Path)
    parser.add_argument('--api-base',type=lambda value:int(value,0))
    args=parser.parse_args()
    count=0
    for hostname in (None,'permafrost.invalid','x'*150):
        for date in (None,False,True):
            for mode in (None,'fail','pass'):
                native,source=(exercise(path,args.reference,hostname,date,mode,args.api_base)
                               for path in (args.reference,args.source))
                assert native==source,('TLS state differs',hostname,date,mode)
                count+=1
    print('TLS state: %d initialization, date and entropy callback cases passed.'%count)


if __name__=='__main__':
    main()
