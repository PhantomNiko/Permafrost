#!/usr/bin/env python3
"""Compare ARM WinterScript value rendering with the native kernel.

Requires Unicorn. Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from integer_literals import Machine


def render(machine,kind,integer,number):
    cpu=machine.cpu;data=machine.data;wide=machine.cpu_type==0x100000c
    value=bytearray(64);struct.pack_into('<Iif',value,0,kind,integer,number)
    cpu.mem_write(data,bytes(value));cpu.mem_write(data+4096,bytes(16))
    if wide:
        from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X30,UC_ARM64_REG_SP
        for r,v in ((UC_ARM64_REG_X0,data),(UC_ARM64_REG_X1,data+4096),(UC_ARM64_REG_X30,machine.stop),(UC_ARM64_REG_SP,machine.stack)):cpu.reg_write(r,v)
        result=UC_ARM64_REG_X0
    else:
        from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_LR,UC_ARM_REG_SP
        for r,v in ((UC_ARM_REG_R0,data),(UC_ARM_REG_R1,data+4096),(UC_ARM_REG_LR,machine.stop),(UC_ARM_REG_SP,machine.stack)):cpu.reg_write(r,v)
        result=UC_ARM_REG_R0
    cpu.emu_start(machine.address,machine.stop,count=2000000)
    if not cpu.reg_read(result)&255:return None
    pointer=int.from_bytes(cpu.mem_read(data+4096,8 if wide else 4),'little')
    return bytes(cpu.mem_read(pointer,256)).split(b'\0')[0]


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source',type=Path);parser.add_argument('--source-map',type=Path,required=True)
    parser.add_argument('--reference',type=Path,required=True);parser.add_argument('--metadata',type=Path,required=True)
    args=parser.parse_args();metadata=json.loads(args.metadata.read_text())
    if metadata['cpu']not in (12,0x100000c):raise ValueError('expected an ARM kernel')
    address=next(a for a,n in metadata['symbols']if n=='_ws_value_to_owned_string')
    mapping=json.loads(args.source_map.read_text());name='recovered_%x'%address
    native=Machine(args.reference.read_bytes(),address,False)
    source=Machine(args.source.read_bytes(),mapping.get(name,mapping.get('_'+name)),True)
    cases=[(1,x,float(x))for x in (0,5,-42,2147483647,-2147483648)]+[(2,0,x)for x in (1.5,-2.25,0.0)]+[(5,x,float(x))for x in (0,1)]+[(6,0x1234,0.0)]
    for value in cases:
        expected=render(native,*value);actual=render(source,*value)
        if actual!=expected:raise AssertionError(repr(value)+': native '+repr(expected)+', source '+repr(actual))
    print('Value text: %d native/source cases passed.'%len(cases))


if __name__=='__main__':main()
