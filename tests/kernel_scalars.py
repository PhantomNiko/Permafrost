#!/usr/bin/env python3
"""Compare kernel lexer and scalar results with a native reference on all four CPUs.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from dll import DLL
from native import inspect
from unicorn import Uc,UC_ARCH_ARM,UC_ARCH_ARM64,UC_ARCH_X86,UC_MODE_ARM,UC_MODE_32,UC_MODE_64,UC_HOOK_CODE,UcError
from unicorn.x86_const import UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_ESP,UC_X86_REG_RSP,UC_X86_REG_EIP,UC_X86_REG_RIP,UC_X86_REG_EAX,UC_X86_REG_RAX
from unicorn.x86_const import UC_X86_REG_FPCW,UC_X86_REG_FPSW,UC_X86_REG_FPTAG
from unicorn.arm_const import UC_ARM_REG_PC,UC_ARM_REG_R0,UC_ARM_REG_LR,UC_ARM_REG_C1_C0_2,UC_ARM_REG_FPEXC
from unicorn.arm64_const import UC_ARM64_REG_PC,UC_ARM64_REG_X0,UC_ARM64_REG_LR

CASES=['"winter"["upper"]()=="WINTER"','0','2','-3','3.5','-3.5','2+3','2 - 3','2 * 3.5','3.5 + 2','2 / 4',
       '7 % 3','2 ^ 3','(2 + 3) * 4','0.5 + 0.25','3 < 4','3 == 3',
       'true and false','true or false','$240000','0x7fffffff',
       '{2,4,6}','{a=1}','len({2,4,6})','#{2,4,6}','ipairs({2,4,6})','0.4','$80000000','$ffffffff',
       '0x80000000','0xffffffff','len({1,2,["name"]="winter"})']


class Kernel(DLL):
    def __init__(self,binary,addresses,native=False):
        metadata,memory=inspect(binary)
        self.cpu_type=metadata['cpu'];self.wide=self.cpu_type in(0x1000007,0x100000c)
        arm=self.cpu_type in(12,0x100000c)
        self.cpu=Uc(UC_ARCH_ARM if self.cpu_type==12 else UC_ARCH_ARM64 if arm else UC_ARCH_X86,
                    UC_MODE_ARM if arm else UC_MODE_64 if self.wide else UC_MODE_32)
        if not arm:
            self.cpu.reg_write(UC_X86_REG_FPCW,0x37f)
            self.cpu.reg_write(UC_X86_REG_FPSW,0)
            self.cpu.reg_write(UC_X86_REG_FPTAG,0xffff)
        self.cpu.mem_map(0,0x5000000)
        if arm:self.cpu.mem_map(0x40000000,0x1000000)
        self.cpu.mem_write(metadata['base'],memory)
        self.exports=addresses;self.native=native;self.stop=0x4ff0000;self.instruction_limit=20000000
        self.pc=UC_ARM_REG_PC if self.cpu_type==12 else UC_ARM64_REG_PC if arm else UC_X86_REG_RIP if self.wide else UC_X86_REG_EIP
        self.result=UC_ARM_REG_R0 if self.cpu_type==12 else UC_ARM64_REG_X0 if arm else UC_X86_REG_RAX if self.wide else UC_X86_REG_EAX
        if self.cpu_type==12:
            self.cpu.reg_write(UC_ARM_REG_C1_C0_2,15<<20);self.cpu.reg_write(UC_ARM_REG_FPEXC,1<<30)
        def error(cpu,address,size,user):
            self.error=True
            if arm:cpu.reg_write(self.pc,cpu.reg_read(UC_ARM_REG_LR if self.cpu_type==12 else UC_ARM64_REG_LR))
            else:
                register=UC_X86_REG_RSP if self.wide else UC_X86_REG_ESP
                stack=cpu.reg_read(register);width=8 if self.wide else 4
                target=int.from_bytes(bytes(cpu.mem_read(stack,width)),'little')
                cpu.reg_write(register,stack+width);cpu.reg_write(self.pc,target)
            cpu.reg_write(self.result,0)
        address=addresses['_ws_errorf'];self.cpu.hook_add(UC_HOOK_CODE,error,begin=address,end=address)

    def call(self,name,*arguments,result_bits=8):
        if not(self.native and self.cpu_type==7):return super().call(name,*arguments,result_bits=result_bits)
        # These two private i386 routines use ECX/EDX in the reference.
        stack=0x4fdfffc
        for register,value in zip((UC_X86_REG_ECX,UC_X86_REG_EDX),arguments):self.cpu.reg_write(register,value)
        rest=arguments[2:];self.cpu.reg_write(UC_X86_REG_ESP,stack)
        self.cpu.mem_write(stack,struct.pack('<'+'I'*(1+len(rest)),self.stop,*rest))
        self.cpu.emu_start(self.exports[name],self.stop,count=self.instruction_limit)
        if self.cpu.reg_read(self.pc)!=self.stop:raise AssertionError(name+' did not return')
        return self.cpu.reg_read(self.result)&((1<<result_bits)-1)

    def expression(self,text):
        self.error=False;cpu=self.cpu;word=8 if self.wide else 4;fmt='<3Q'if self.wide else'<3I'
        cpu.mem_write(0x3000000,text.encode()+b'\0');cpu.mem_write(0x3001000,bytes(0x2100))
        tokenized=self.call('_ws_tokenize_line',0x3000000,0x3001000)
        count,capacity,pointer=struct.unpack(fmt,bytes(cpu.mem_read(0x3001000,word*3)))
        if count>1000:raise AssertionError('invalid token vector')
        tokens=[]
        for index in range(count):
            address=int.from_bytes(bytes(cpu.mem_read(pointer+index*word,word)),'little')
            tokens.append(bytes(cpu.mem_read(address,256)).split(b'\0')[0])
        cpu.mem_write(0x3002000,struct.pack(fmt,0,0x3001000,0));cpu.mem_write(0x3003000,bytes(64))
        parsed=self.call('_ws_parse_or',0x3002000,0x3003000)
        position=int.from_bytes(bytes(cpu.mem_read(0x3002000+word*2,word)),'little')
        return tokenized,tokens,parsed,position,bytes(cpu.mem_read(0x3003000,12)),self.error


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('kernel',type=Path)
    parser.add_argument('--abi',type=Path,required=True);parser.add_argument('--map',type=Path,required=True)
    args=parser.parse_args();binary=args.reference.read_bytes();metadata,_=inspect(binary)
    native={name:address for address,name in metadata['symbols']}
    entries=json.loads(args.abi.read_text());symbols=json.loads(args.map.read_text())
    addresses={row['original']:symbols.get(row['symbol'],symbols.get('_'+row['symbol']))for row in entries.values()}
    reference=Kernel(binary,native,True);source=Kernel(args.kernel.read_bytes(),addresses)
    for text in CASES:
        expected=reference.expression(text);actual=source.expression(text)
        if actual!=expected:raise AssertionError('%r: native=%r source=%r'%(text,expected,actual))
    print('%d native/source kernel scalar cases passed.'%len(CASES))


if __name__=='__main__':main()
