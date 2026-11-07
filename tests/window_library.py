#!/usr/bin/env python3
"""Check window-library service arguments and the 604-byte query record.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5


def exercise(path,api_base=None):
    lib=DLL(path,api_base=api_base);cpu=lib.cpu;arm=lib.cpu_type in(12,0x100000c)
    events=[]
    def arguments(count):
        if lib.cpu_type==7:
            stack=cpu.reg_read(UC_X86_REG_ESP)
            return struct.unpack('<'+'I'*count,bytes(cpu.mem_read(stack+4,count*4)))
        registers=(UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3)if lib.cpu_type==12 else(
            UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5)if arm else(
            UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9)
        return [cpu.reg_read(register)for register in registers[:count]]
    def service(cpu,address,size,user):
        slot=(address-0x10100)//16
        if slot==0:
            title,width,height=arguments(3)
            text=bytes(cpu.mem_read(title,64)).split(b'\0',1)[0]
            events.append(('create',text,width,height));result=17
        elif slot==3:
            identifier,out=arguments(2);assert identifier==17
            record=bytearray(604)
            struct.pack_into('<IIQ8I3I',record,0,17,1,0x3200000,64*48*4,64,48,64*4,0,0,7,9,5,2,3)
            record[60:68]=b'fixture\0';record[124:129]=b'File\0';record[444:450]=b'Help!\0'
            cpu.mem_write(out,bytes(record));events.append(('query',identifier));result=1
        else:result=1
        cpu.reg_write(lib.result,result)
    for index,offset in enumerate((0xa0,0xa4,0xa8,0xb4,0xb0)):
        address=0x10100+index*16
        for table in lib.api_tables:cpu.mem_write(table+offset,struct.pack('<I',address))
        cpu.mem_write(address,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if arm else b'\xc3')
        cpu.hook_add(UC_HOOK_CODE,service,begin=address,end=address)
    cpu.mem_write(0x3000000,b'fixture\0')
    window=lib.call('_createWindow',0x3000000,64,48,result_bits=64 if lib.wide else 32)
    assert window and events and events[0]==('create',b'fixture',64,48),(str(path),events)
    lib.call('_getWindowSize',window,0x3001000,0x3001004)
    assert struct.unpack('<II',bytes(cpu.mem_read(0x3001000,8)))==(64,48)
    title=lib.call('_getWindowTitle',window,result_bits=64 if lib.wide else 32)
    assert bytes(cpu.mem_read(title,64)).split(b'\0',1)[0]==b'fixture'
    assert ('query',17)in events,events
    return events


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path)
    parser.add_argument('--api-base',type=lambda value:int(value,0))
    args=parser.parse_args();native=exercise(args.reference,args.api_base);source=exercise(args.source,args.api_base)
    assert source==native,(native,source)
    print('Window library: creation arguments, title, dimensions and v13 query record passed.')


if __name__=='__main__':main()
