#!/usr/bin/env python3
"""Check WFE11 flush command arguments against the original x64 kernel.

Pooka's Free Software License. Reference binaries remain external test inputs.
"""
import argparse,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from cc import compile_object
from elf64 import Object,link
from kernel_efi_storage import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RDI,UC_X86_REG_RAX


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    for name in ['reference','source','context','output']:parser.add_argument('--'+name,type=Path,required=True)
    args=parser.parse_args();out=args.output;out.mkdir(parents=True,exist_ok=True)
    (out/'functions.h').write_text('#include "support.h"\n');(out/'flush.c').write_text(args.source.read_text())
    obj=out/'flush.o';compile_object(out/'flush.c',obj,[str(out),'sdk/include','kernel'],architecture='x86_64')
    blob,symbols,_=link([Object(obj.read_bytes())],base=0x3000000,entry='recovered_201e2e0',shim=False)
    for status in [0,1]:
        results=[]
        for native in [True,False]:
            library=Kernel(args.reference,args.context.read_bytes(),b'',0x201e2e0 if native else symbols['recovered_201e2e0'])
            library.cpu.mem_write(0x3000000,blob);library.cpu.hook_del(library.command_hook)
            def flush(cpu,pc,size,user):
                packet=cpu.reg_read(UC_X86_REG_RDI)
                assert packet==0x4100000,hex(packet)
                fields=struct.unpack('<7I',bytes(cpu.mem_read(packet,28)))
                assert fields[0]==5 and fields[1]==0 and fields[6]==0,fields
                cpu.mem_write(packet+4,struct.pack('<I',status));cpu.reg_write(UC_X86_REG_RAX,status)
            library.cpu.hook_add(UC_HOOK_CODE,flush,begin=0x4200000,end=0x4200000)
            results.append(library.call('read',0x80))
        assert results==[status,status],results
    print('Kernel flush: native/source command pointer, operation, device, cleared status and failure/success results match.')


if __name__=='__main__':main()
