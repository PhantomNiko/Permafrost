#!/usr/bin/env python3
"""Compare all byte inputs of a recovered ARM64 keyboard mapping routine.

Pooka's Free Software License. Reference binaries remain external inputs.
"""
import argparse
from pathlib import Path
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable
from cube_render import diagnostic_reference
from native import inspect
from dll import DLL
from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_PC


class Kernel(DLL):
    def __init__(self,path,entry):
        metadata,memory=inspect(path.read_bytes())
        if metadata['cpu']!=0x100000c:raise ValueError('ARM64 kernel required')
        self.cpu_type=metadata['cpu'];self.wide=True
        self.cpu=Uc(UC_ARCH_ARM64,UC_MODE_ARM);self.cpu.mem_map(0,0x5000000)
        base=metadata['base']&~4095;self.cpu.mem_map(base,(metadata['end']-base+4095)&~4095)
        self.cpu.mem_write(metadata['base'],memory);self.exports={'mapping':entry}
        self.stop=0x4ff0000;self.pc=UC_ARM64_REG_PC;self.result=UC_ARM64_REG_X0
        self.instruction_limit=10000


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--kernel',type=Path,required=True);parser.add_argument('--source',type=Path,required=True)
    parser.add_argument('--entry',type=lambda x:int(x,0),required=True);parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args();out=args.output;out.mkdir(parents=True,exist_ok=True)
    (out/'functions.h').write_text('#include "support.h"\n')
    (out/'mapping.c').write_text(args.source.read_text());obj=out/'mapping.o'
    compile_object(out/'mapping.c',obj,'arm64',[out,'sdk/include','kernel'],pic=True)
    symbol='recovered_%x'%args.entry
    binary=link_dynamic_executable([obj],out/'mapping','arm64',{},entry=symbol)
    diagnostic=out/'mapping.dylib';diagnostic_reference(binary,diagnostic)
    source=DLL(diagnostic);native=Kernel(args.kernel,args.entry)
    for value in range(256):
        expected=native.call('mapping',value);actual=source.call('_'+symbol,value)
        assert actual==expected,(value,actual,expected)
    print('ARM64 keyboard mapping: all 256 input bytes match the original kernel.')


if __name__=='__main__':main()
