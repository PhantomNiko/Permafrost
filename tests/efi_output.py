#!/usr/bin/env python3
"""Compare the recovered firmware text-output boundary with the native kernel.

Pooka's Free Software License. Tests the retained-service WFE11 path.
"""
import argparse
from pathlib import Path
import struct
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from cc import compile_object
from elf64 import Object,link
from native import inspect
from unicorn import Uc,UC_ARCH_X86,UC_MODE_64,UC_HOOK_CODE
from unicorn.x86_const import *


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--kernel',type=Path,required=True);parser.add_argument('--source',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args();out=args.output;out.mkdir(parents=True,exist_ok=True)
    (out/'functions.h').write_text('#include "support.h"\nvoid *recovered_2002570(void *,int,unsigned long);\n')
    (out/'serial.c').write_text(args.source.read_text())
    obj=out/'serial.o';compile_object(out/'serial.c',obj,[out,'kernel','sdk/include'],architecture='x86_64')
    binary,symbols,_=link([Object(obj.read_bytes())],base=0x3000000,shim=False,externals={'recovered_2002570':0x2002570,'memset':0x2002570})
    metadata,memory=inspect(args.kernel.read_bytes())
    def create(native):
        cpu=Uc(UC_ARCH_X86,UC_MODE_64);cpu.mem_map(0,0x5000000)
        cpu.mem_write(metadata['base'],memory);cpu.mem_write(0x3000000,binary)
        def word(address,value):cpu.mem_write(address,struct.pack('<I',value))
        word(0x223bae0,1);word(0x2135000,1);word(0x223bb18,0x33454657)
        word(0x223bb1c,11);word(0x223bb20,0x2548);word(0x223bd48,0x1001)
        word(0x223bb2c,0x3001000);word(0x223c178,0x3001000);word(0x223c17c,0)
        word(0x2135008,0);cpu.mem_write(0x3001008,struct.pack('<Q',0x3002000))
        cpu.mem_write(0x3002000,b'\xc3');calls=[]
        def output(uc,address,size,data):
            assert uc.reg_read(UC_X86_REG_RCX)==0x3001000
            assert uc.reg_read(UC_X86_REG_RSP)&15==8
            text=uc.reg_read(UC_X86_REG_RDX)
            calls.append(bytes(uc.mem_read(text,4)))
            uc.reg_write(UC_X86_REG_RAX,0)
        cpu.hook_add(UC_HOOK_CODE,output,begin=0x3002000,end=0x3002000)
        return cpu,calls,0x2024d30 if native else symbols['recovered_2024d30']
    original,recovered=create(True),create(False)
    for value in range(256):
        outputs=[]
        for cpu,calls,entry in [original,recovered]:
            calls.clear();cpu.reg_write(UC_X86_REG_RDI,value);cpu.reg_write(UC_X86_REG_RSP,0x4ee0008)
            cpu.mem_write(0x4ee0008,struct.pack('<Q',0x4ff0000));cpu.emu_start(entry,0x4ff0000,count=100000)
            assert cpu.reg_read(UC_X86_REG_RIP)==0x4ff0000
            outputs.append(list(calls))
        assert outputs[0]==outputs[1],(value,outputs)
        expected=[struct.pack('<HH',ch,0)for ch in ([13,10]if value==10 else[value])]
        assert outputs[1]==expected,(value,outputs)
    print('UEFI output: all 256 byte values match native UTF-16 calls, Microsoft ABI registers and CR/LF handling.')


if __name__=='__main__':main()
