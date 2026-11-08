#!/usr/bin/env python3
"""Compare ARM32 ECAM addressing and exercise device-tree-only firmware.

Pooka's Free Software License. Native kernels and generated DTBs are test inputs.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm_const import *


def exercise(binary,mapping=None,dtb=None):
    metadata,memory=inspect(binary)
    cpu=Uc(UC_ARCH_ARM,UC_MODE_ARM);cpu.mem_map(0,0x5000000);cpu.mem_map(0x40000000,0x2000000);cpu.mem_write(metadata['base'],memory)
    cpu.reg_write(UC_ARM_REG_C1_C0_2,15<<20);cpu.reg_write(UC_ARM_REG_FPEXC,1<<30)
    def target(a):return a if mapping is None else mapping['_recovered_%x'%a]
    def acpi(cpu,address,size,user):
        cpu.reg_write(UC_ARM_REG_R0,0 if dtb else 0x3040000)
        cpu.reg_write(UC_ARM_REG_PC,cpu.reg_read(UC_ARM_REG_LR))
    cpu.hook_add(UC_HOOK_CODE,acpi,begin=target(0x4041255c),end=target(0x4041255c))
    cpu.mem_write(0x3040004,struct.pack('<I',60));cpu.mem_write(0x304002c,struct.pack('<QHBBI',0x3f000000,0,0,15,0))
    if dtb:
        cpu.mem_write(0x3050000,dtb)
        cpu.mem_write(0x40500004,struct.pack('<I',0x3100000))
        cpu.mem_write(0x3100000,struct.pack('<4I',0x33454657,5,0x2138,0x3000000))
        cpu.mem_write(0x3000040,struct.pack('<II',1,0x3010000))
        cpu.mem_write(0x3010000,bytes.fromhex('d521b6b19cf1a541830bd9152c69aae0')+struct.pack('<I',0x3050000))
    results=[]
    for bus,slot,function,offset,width in [(0,2,0,0,4),(15,31,7,4092,4),(1,3,2,2,2),(0,0,0,4095,1),
            (16,0,0,0,4),(0,32,0,0,4),(0,0,8,0,4),(0,0,0,4096,4),(0,0,0,1,2),(0,0,0,2,4),(0,0,0,0,3)]:
        cpu.mem_write(0x3110000,b'\x5a'*4)
        for register,value in [(UC_ARM_REG_R0,bus),(UC_ARM_REG_R1,slot),(UC_ARM_REG_R2,function),(UC_ARM_REG_R3,offset)]:cpu.reg_write(register,value)
        cpu.reg_write(UC_ARM_REG_SP,0x4fe0000);cpu.reg_write(UC_ARM_REG_LR,0x4ff0000);cpu.mem_write(0x4fe0000,struct.pack('<II',width,0x3110000))
        cpu.emu_start(target(0x40413370),0x4ff0000,count=1000000);assert cpu.reg_read(UC_ARM_REG_PC)==0x4ff0000
        result=cpu.reg_read(UC_ARM_REG_R0)&255;address=int.from_bytes(cpu.mem_read(0x3110000,4),'little')
        valid=bus<=15 and slot<=31 and function<=7 and offset<4096 and width in (1,2,4) and not(offset&(width-1))
        assert result==int(valid),(bus,slot,function,offset,width,result)
        if valid:assert address==0x3f000000+(bus<<20)+(slot<<15)+(function<<12)+offset
        results.append((result,address))
    return results


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);p.add_argument('--dtb',type=Path,required=True);a=p.parse_args();r=a.reference.read_bytes();s=a.source.read_bytes();mapping=json.loads(a.map.read_text())
    assert exercise(r)==exercise(s,mapping)
    assert exercise(s,mapping)==exercise(s,mapping,a.dtb.read_bytes())
    print('ARM32 ECAM: 11 native address/bounds cases and equivalent device-tree-only discovery passed.')
