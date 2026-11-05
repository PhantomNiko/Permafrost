#!/usr/bin/env python3
"""Compare native and source snprintf across the four calling conventions.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from integer_literals import Machine


def format_text(machine, text, words):
    cpu, data = machine.cpu, machine.data
    cpu.mem_write(data, text.encode()+b'\0')
    cpu.mem_write(data+256,b'Permafrost\0')
    cpu.mem_write(data+512,bytes(128))
    arguments = [data+512,128,data]+[data+256 if x is None else x for x in words]
    if machine.cpu_type in (7,0x1000007):
        from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ESP, UC_X86_REG_RSP, UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RCX, UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX
        if machine.cpu_type==7:
            sp=machine.stack-4*(len(arguments)+1)
            cpu.mem_write(sp,struct.pack('<'+'I'*(len(arguments)+1),machine.stop,*[a&0xffffffff for a in arguments]))
            cpu.reg_write(UC_X86_REG_ESP,sp);result=UC_X86_REG_EAX
        else:
            sp=machine.stack-8;cpu.mem_write(sp,struct.pack('<Q',machine.stop));cpu.reg_write(UC_X86_REG_RSP,sp)
            for register,value in zip((UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9),arguments):cpu.reg_write(register,value)
            for i,value in enumerate(arguments[6:]):cpu.mem_write(sp+8+i*8,struct.pack('<Q',value&0xffffffffffffffff))
            cpu.reg_write(UC_X86_REG_RAX,0);result=UC_X86_REG_RAX
    elif machine.cpu_type==12:
        from unicorn.arm_const import UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3
        cpu.reg_write(UC_ARM_REG_SP,machine.stack);cpu.reg_write(UC_ARM_REG_LR,machine.stop)
        for register,value in zip((UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3),arguments):cpu.reg_write(register,value&0xffffffff)
        for i,value in enumerate(arguments[4:]):cpu.mem_write(machine.stack+i*4,struct.pack('<I',value&0xffffffff))
        result=UC_ARM_REG_R0
    else:
        from unicorn.arm64_const import UC_ARM64_REG_SP,UC_ARM64_REG_X30,UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2
        cpu.reg_write(UC_ARM64_REG_SP,machine.stack);cpu.reg_write(UC_ARM64_REG_X30,machine.stop)
        for register,value in zip((UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2),arguments):cpu.reg_write(register,value)
        for i,value in enumerate(arguments[3:]):cpu.mem_write(machine.stack+i*8,struct.pack('<Q',value&0xffffffffffffffff))
        result=UC_ARM64_REG_X0
    cpu.emu_start(machine.address,machine.stop,count=2000000)
    return bytes(cpu.mem_read(data+512,128)).split(b'\0')[0]


def compact_text(machine, value):
    cpu=machine.cpu;cpu.mem_write(machine.data,bytes(64))
    if machine.cpu_type==0x100000c:
        from unicorn.arm64_const import UC_ARM64_REG_SP,UC_ARM64_REG_X30,UC_ARM64_REG_X0,UC_ARM64_REG_X1
        for register,argument in ((UC_ARM64_REG_SP,machine.stack),(UC_ARM64_REG_X30,machine.stop),(UC_ARM64_REG_X0,value),(UC_ARM64_REG_X1,machine.data)):cpu.reg_write(register,argument)
    else:
        from unicorn.x86_const import UC_X86_REG_RSP,UC_X86_REG_RDI,UC_X86_REG_RSI
        cpu.reg_write(UC_X86_REG_RSP,machine.stack-8);cpu.mem_write(machine.stack-8,struct.pack('<Q',machine.stop))
        cpu.reg_write(UC_X86_REG_RDI,value);cpu.reg_write(UC_X86_REG_RSI,machine.data)
    cpu.emu_start(machine.address,machine.stop,count=2000000)
    return bytes(cpu.mem_read(machine.data,64)).split(b'\0')[0]


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source',type=Path);parser.add_argument('--source-map',type=Path,required=True)
    parser.add_argument('--reference',type=Path,required=True);parser.add_argument('--metadata',type=Path,required=True)
    args=parser.parse_args();metadata=json.loads(args.metadata.read_text());address=next(a for a,n in metadata['symbols']if n=='_snprintf')
    mapping=json.loads(args.source_map.read_text());name='recovered_%x'%address;entry=mapping.get(name,mapping.get('_'+name))
    if entry is None:raise ValueError('source has no snprintf entry')
    source=Machine(args.source.read_bytes(),entry,True);native=Machine(args.reference.read_bytes(),address,False)
    for text,words,expected in (('%s %d %x %u',(None,42,0xabcd,999),b'Permafrost 42 abcd 999'),
                                ('%d %X',(-42,0xabcd),b'-42 ABCD'),('%% %s',(None,),b'% Permafrost')):
        actual,reference=format_text(source,text,words),format_text(native,text,words)
        assert actual==reference==expected,(actual,reference,expected)
    print('snprintf: 3 native/source varargs cases passed.')
    if metadata['cpu'] in (0x1000007,0x100000c):
        address=next(a for a,n in metadata['symbols']if n=='_format_compact_bytes')
        name='recovered_%x'%address;source.address=mapping.get(name,mapping.get('_'+name));native.address=address
        for value in (0,1,1023,1024,1048575,1048576,0x40000000,10*0x40000000,1<<40):
            assert compact_text(source,value)==compact_text(native,value),value
        print('Formatting call sites: 9 native/source size-boundary cases passed.')



if __name__=='__main__':main()
