#!/usr/bin/env python3
"""Compare x86-64 lexical, numeric, and mathematical evaluation with an optional reference."""
import argparse
import json
from pathlib import Path
import struct
import sys
from unicorn import Uc,UC_ARCH_X86,UC_MODE_64,UC_HOOK_CODE
from unicorn.x86_const import *
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import slices,inspect
from wmfs import Image


class Kernel:
    def __init__(self,binary,addresses):
        metadata,memory=inspect(binary);self.cpu=Uc(UC_ARCH_X86,UC_MODE_64)
        self.cpu.mem_map(0,0x5000000);self.cpu.mem_write(metadata['base'],memory)
        self.addresses=addresses;self.errors=[]
        def error(cpu,address,size,user):
            if address!=addresses['_ws_errorf']:return
            self.errors.append(True)
            sp=cpu.reg_read(UC_X86_REG_RSP);ret=struct.unpack('<Q',bytes(cpu.mem_read(sp,8)))[0]
            cpu.reg_write(UC_X86_REG_RAX,0);cpu.reg_write(UC_X86_REG_RSP,sp+8);cpu.reg_write(UC_X86_REG_RIP,ret)
        self.cpu.hook_add(UC_HOOK_CODE,error)
    def call(self,name,*args):
        cpu=self.cpu
        for reg,value in zip((UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9),args):cpu.reg_write(reg,value)
        cpu.reg_write(UC_X86_REG_RSP,0x4ee0008);cpu.mem_write(0x4ee0008,struct.pack('<Q',0x4ff0000))
        cpu.emu_start(self.addresses[name],0x4ff0000,count=2000000)
        if cpu.reg_read(UC_X86_REG_RIP)!=0x4ff0000:raise AssertionError('kernel routine did not return')
        return cpu.reg_read(UC_X86_REG_RAX)&255
    def expression(self,text):
        cpu=self.cpu;self.errors=[];cpu.mem_write(0x3000000,text.encode()+b'\0')
        cpu.mem_write(0x3001000,bytes(0x2100));status=self.call('_ws_tokenize_line',0x3000000,0x3001000)
        count,capacity,pointer=struct.unpack('<3Q',bytes(cpu.mem_read(0x3001000,24)));tokens=[]
        if count>1000:raise AssertionError('unbounded token count')
        for i in range(count):
            address=struct.unpack('<Q',bytes(cpu.mem_read(pointer+i*8,8)))[0]
            tokens.append(bytes(cpu.mem_read(address,512)).split(b'\0')[0])
        cpu.mem_write(0x3002000,struct.pack('<3Q',0,0x3001000,0))
        parsed=self.call('_ws_parse_or',0x3002000,0x3003000)
        position=struct.unpack('<Q',bytes(cpu.mem_read(0x3002010,8)))[0]
        # Scalar values have a tag, integer payload, and raw float payload.
        scalar=bytes(cpu.mem_read(0x3003000,12))
        return status,tokens,parsed,position,scalar,bool(self.errors)


    def builtin(self,name,value,is_float):
        cpu=self.cpu;cpu.mem_write(0x3000000,name.encode()+b'\0')
        argument=bytearray(64)
        struct.pack_into('<Ii',argument,0,2 if is_float else 1,0 if is_float else value)
        if is_float:struct.pack_into('<f',argument,8,value)
        cpu.mem_write(0x3001000,bytes(argument));cpu.mem_write(0x3002000,bytes(64))
        status=self.call('_ws_call_builtin',0,0x3000000,0x3001000,1,0x3002000)
        return status,bytes(cpu.mem_read(0x3002000,12))


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path)
    parser.add_argument('--build',type=Path,default=Path('build/kernel/x86_64'))
    args=parser.parse_args();files=Image(args.reference.read_bytes()).files()
    original=next(value for name,value in files.items()if name in ('WinterBoot','Permafrost'))
    thin=slices(original)[0x1000007];metadata,_=inspect(thin);native={name:address for address,name in metadata['symbols']}
    abi=json.loads(Path('kernel/x86_64/abi.json').read_text());symbols=json.loads((args.build/'core-map.json').read_text())
    names=('_ws_tokenize_line','_ws_parse_or','_ws_call_builtin','_ws_errorf')
    reference=Kernel(thin,{name:native[name]for name in names})
    source=Kernel((args.build/'Permafrost').read_bytes(),{name:symbols[abi['%x'%native[name]]['symbol']]for name in names})
    cases=['0','2','-3','3.5','-3.5','2+3','2 - 3','2 * 3.5','3.5 + 2','2 / 4',
           '7 % 3','2 ^ 3','(2 + 3) * 4','0.5 + 0.25','3 < 4','3 == 3',
           'true and false','true or false','$240000','0x7fffffff']
    for text in cases:
        expected=reference.expression(text);actual=source.expression(text)
        if actual!=expected:raise AssertionError((text,expected,actual))
    math_cases=[('math.rad',90,False),('math.sin',1.5707963,True),('math.abs',-1.0,True),('math.cos',1.25,True)]
    for case in math_cases:
        if source.builtin(*case)!=reference.builtin(*case):raise AssertionError(case)
    print('Reference x86-64 token boundaries and scalar results match for %d expressions and %d math builtins.'%(len(cases),len(math_cases)))


if __name__=='__main__':main()
