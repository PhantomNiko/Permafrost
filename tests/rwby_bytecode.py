#!/usr/bin/env python3
"""Compare serialized Rwby programs through each native aggregate-return ABI.

Pooka's Free Software License.
"""
from pathlib import Path
import argparse
import struct
from dll import DLL
from vm_fixtures import fixtures
from unicorn.arm64_const import UC_ARM64_REG_X8


def compile_script(path, code, api_base=None):
    lib=DLL(path,instruction_limit=200000000,poison_allocations=True,
            poison_stack=True,api_base=api_base)
    for address,text in ((0x3001000,code.encode()),(0x3001100,b'[fixture]')):
        lib.cpu.mem_write(address-0x1000,text+b'\0')
        lib.cpu.mem_write(address,struct.pack('<QQQ' if lib.wide else '<III',
                                            address-0x1000,len(text),len(text)))
    vm,output=0x3100000,0x3120000
    prefix='__ZN6winter4ruby6RubyVM'
    lib.call(prefix+'C1Ev',vm)
    arguments=(vm,0x3001000,0x3001100)
    if lib.cpu_type==0x100000c:
        lib.cpu.reg_write(UC_ARM64_REG_X8,output)
    else:
        arguments=(output,)+arguments
    lib.call(prefix+'13compileScriptERKN2wm6stringES5_',*arguments)
    data,count,capacity=struct.unpack('<QQQ' if lib.wide else '<III',
                                     bytes(lib.cpu.mem_read(output,24 if lib.wide else 12)))
    assert 8<=count<=capacity<=0x1000000,(count,capacity)
    result=bytes(lib.cpu.mem_read(data,count))
    assert result[:4]==b'WRBC',result[:8]
    lib.call(prefix+'D1Ev',vm)
    return result


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path)
    parser.add_argument('source',type=Path)
    parser.add_argument('--api-base',type=lambda value:int(value,0))
    args=parser.parse_args()
    for index,(code,_) in enumerate(fixtures('rwby')):
        native=compile_script(args.reference,code,args.api_base)
        source=compile_script(args.source,code,args.api_base)
        assert source==native,('serialized program differs',index,len(source),len(native))
        print('Rwby bytecode case %d passed.'%index,flush=True)
    print('Rwby: %d native/source bytecode comparisons passed.'%len(fixtures('rwby')))


if __name__=='__main__':main()
