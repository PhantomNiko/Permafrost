#!/usr/bin/env python3
"""Compare the kernel PNG service's wire record and pixels with the reference.

Requires Unicorn. Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from integer_literals import Machine
from png_library import fixture


def decode(machine,data):
    cpu=machine.cpu;address=machine.data;output=address+4096
    cpu.mem_write(address,data);cpu.mem_write(output,bytes(64))
    if machine.cpu_type==7:
        from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EAX,UC_X86_REG_EIP
        cpu.reg_write(UC_X86_REG_ESP,machine.stack)
        cpu.mem_write(machine.stack,struct.pack('<IIII',machine.stop,address,len(data),output))
        result,pc=UC_X86_REG_EAX,UC_X86_REG_EIP
    elif machine.cpu_type==0x1000007:
        from unicorn.x86_const import UC_X86_REG_RSP,UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RAX,UC_X86_REG_RIP
        for reg,value in ((UC_X86_REG_RSP,machine.stack-8),(UC_X86_REG_RDI,address),(UC_X86_REG_RSI,len(data)),(UC_X86_REG_RDX,output)):cpu.reg_write(reg,value)
        cpu.mem_write(machine.stack-8,struct.pack('<Q',machine.stop));result,pc=UC_X86_REG_RAX,UC_X86_REG_RIP
    elif machine.cpu_type==12:
        from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_PC
        for reg,value in ((UC_ARM_REG_R0,address),(UC_ARM_REG_R1,len(data)),(UC_ARM_REG_R2,output),(UC_ARM_REG_SP,machine.stack),(UC_ARM_REG_LR,machine.stop)):cpu.reg_write(reg,value)
        result,pc=UC_ARM_REG_R0,UC_ARM_REG_PC
    else:
        from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_SP,UC_ARM64_REG_LR,UC_ARM64_REG_PC
        for reg,value in ((UC_ARM64_REG_X0,address),(UC_ARM64_REG_X1,len(data)),(UC_ARM64_REG_X2,output),(UC_ARM64_REG_SP,machine.stack),(UC_ARM64_REG_LR,machine.stop)):cpu.reg_write(reg,value)
        result,pc=UC_ARM64_REG_X0,UC_ARM64_REG_PC
    cpu.emu_start(machine.address,machine.stop,count=20000000)
    if cpu.reg_read(pc)!=machine.stop:raise AssertionError('PNG service did not return')
    status=bool(cpu.reg_read(result)&255);low,high,size,width,height,stride=struct.unpack('<6I',bytes(cpu.mem_read(output,24)))
    if size>1024*1024:raise AssertionError('unbounded PNG output')
    pixels=bytes(cpu.mem_read(low|(high<<32),size))if status and size else b''
    return status,(size,width,height,stride),pixels


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source',type=Path);parser.add_argument('--source-map',type=Path,required=True)
    parser.add_argument('--reference',type=Path,required=True);parser.add_argument('--metadata',type=Path,required=True)
    args=parser.parse_args();metadata=json.loads(args.metadata.read_text())
    address=next(a for a,n in metadata['symbols']if n=='_wm_media_png_decode_memory')
    name='recovered_%x'%address;mapping=json.loads(args.source_map.read_text())
    count=0
    for filtering in range(5):
        data,pixels=fixture(3,2,filtering,0)
        native=Machine(args.reference.read_bytes(),address,False)
        source=Machine(args.source.read_bytes(),mapping.get(name,mapping.get('_'+name)),True)
        expected=decode(native,data);actual=decode(source,data)
        if expected!=actual:raise AssertionError('filter %d: native %r, source %r'%(filtering,expected,actual))
        if expected!=(True,(24,3,2,12),pixels):raise AssertionError('unexpected native PNG result')
        count+=1
    print('PNG service: %d native/source cases passed.'%count)


if __name__=='__main__':main()
