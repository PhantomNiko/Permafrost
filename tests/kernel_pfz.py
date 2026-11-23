#!/usr/bin/env python3
"""Compare PFZ1 Mach-O output, errors and allocation behavior with the kernel.

Pooka's Free Software License. Reference binaries remain external inputs.
"""
import argparse,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from cc import compile_object
from elf64 import Object,link
from pfz import pack
from kernel_efi_storage import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    for name in ['reference','source','context','output']:parser.add_argument('--'+name,type=Path,required=True)
    args=parser.parse_args();out=args.output;out.mkdir(parents=True,exist_ok=True)
    (out/'functions.h').write_text('#include "support.h"\nvoid *recovered_20017b0(ulong count);\nvoid recovered_2001810(void *pointer);\nint recovered_2005f40(char *out,ulong capacity,const char *format,...);\n')
    (out/'decoder.c').write_text(args.source.read_text());obj=out/'decoder.o'
    compile_object(out/'decoder.c',obj,[str(out),'sdk/include','kernel','firmware'],architecture='x86_64')
    blob,symbols,_=link([Object(obj.read_bytes())],base=0x3000000,entry='recovered_20e9c10',externals={'recovered_20017b0':0x20017b0,'recovered_2001810':0x2001810,'recovered_2005f40':0x2005f40},shim=False)
    cases=[pack(struct.pack('<I',magic)+b'ABCD'*32)for magic in [0xfeedface,0xfeedfacf,0xcefaedfe,0xcffaedfe,0xbebafeca,0xbfbafeca,0x12345678]]
    valid=cases[0];cases +=[b'',b'PFZ1',valid[:16],valid[:-1],valid[:12]+bytes(4)+valid[16:],pack(b''),pack(b'abc')]
    for payload in cases:
        results=[]
        for native in [True,False]:
            lib=Kernel(args.reference,args.context.read_bytes(),b'',0x20e9c10 if native else symbols['recovered_20e9c10']);lib.cpu.mem_write(0x3000000,blob);calls=[]
            def hook(cpu,pc,size,user):
                calls.append((pc,cpu.reg_read(UC_X86_REG_RDI)))
                cpu.reg_write(UC_X86_REG_RAX,0x4500000 if pc==0x20017b0 else 0)
                sp=cpu.reg_read(UC_X86_REG_RSP);ret=struct.unpack('<Q',bytes(cpu.mem_read(sp,8)))[0];cpu.reg_write(UC_X86_REG_RSP,sp+8);cpu.reg_write(UC_X86_REG_RIP,ret)
            for pc in [0x20017b0,0x2001810]:lib.cpu.hook_add(UC_HOOK_CODE,hook,begin=pc,end=pc)
            if payload:lib.cpu.mem_write(0x4300000,payload)
            status=lib.call('read',0x4300000,len(payload),0x4400000,0x4400010,0x4400100,160)
            pointer,count=struct.unpack('<Q',bytes(lib.cpu.mem_read(0x4400000,8)))[0],struct.unpack('<Q',bytes(lib.cpu.mem_read(0x4400010,8)))[0]
            data=bytes(lib.cpu.mem_read(pointer,count))if pointer else b''
            results.append((status,pointer,count,data,bytes(lib.cpu.mem_read(0x4400100,160)).split(b'\0')[0],calls))
        assert results[0]==results[1],(payload[:16].hex(),results[0][:3],results[1][:3],results[0][4:],results[1][4:])
    print('Kernel PFZ1: fourteen native/source cases match output, supported Mach-O magic, malformed streams, error strings and allocation/free behavior.')


if __name__=='__main__':main()
