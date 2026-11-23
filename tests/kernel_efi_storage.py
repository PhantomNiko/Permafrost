#!/usr/bin/env python3
"""Compare kernel sector reads through a captured WFE11 command interface.

Pooka's Free Software License. The firmware callback is an isolated disk fixture.
"""
import argparse,json,struct
from pathlib import Path
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from dll import DLL
from unicorn import Uc,UC_ARCH_X86,UC_MODE_64,UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RDI,UC_X86_REG_RAX,UC_X86_REG_RIP


class Kernel(DLL):
    def __init__(self,path,context,disk,entry):
        metadata,memory=inspect(path.read_bytes());self.cpu_type=0x1000007;self.wide=True
        self.cpu=Uc(UC_ARCH_X86,UC_MODE_64);self.cpu.mem_map(0,0x5000000)
        self.cpu.mem_write(metadata['base'],memory)
        self.exports={'read':entry};self.stop=0x4ff0000;self.pc=UC_X86_REG_RIP;self.result=UC_X86_REG_RAX;self.instruction_limit=1000000
        packet,bridge,origin=0x4100000,0x4200000,0x4000000
        context=bytearray(context);struct.pack_into('<II',context,0x114,bridge,packet)
        struct.pack_into('<II',context,0x234,0x4500000,65536)
        # The fixture exercises firmware I/O rather than boot-loader file caches.
        struct.pack_into('<I',context,0x680,0)
        struct.pack_into('<II',context,0x40,0,0)
        struct.pack_into('<II',context,0x88,0,0)
        self.cpu.mem_write(0x223bb18,bytes(context));self.cpu.mem_write(origin,bytes(context))
        self.cpu.mem_write(0x2135000,struct.pack('<Q',origin));self.cpu.mem_write(0x2135008,b'\0')
        self.cpu.mem_write(bridge,b'\xc3');self.requests=[];self.disk=bytearray(disk)
        def command(cpu,address,size,user):
            request=cpu.reg_read(UC_X86_REG_RDI);fields=struct.unpack('<7I',bytes(cpu.mem_read(request,28)))
            code,_,low,high,buffer,count,device=fields;offset=(low|(high<<32))*512
            self.requests.append(fields)
            result=int(device==0 and ((code in [2,3] and offset+count<=len(self.disk))or code==5))
            if result and code==2:cpu.mem_write(buffer,bytes(self.disk[offset:offset+count]))
            if result and code==3:self.disk[offset:offset+count]=bytes(cpu.mem_read(buffer,count))
            cpu.mem_write(request+4,struct.pack('<I',result));cpu.reg_write(UC_X86_REG_RAX,result)
        self.command_hook=self.cpu.hook_add(UC_HOOK_CODE,command,begin=bridge,end=bridge)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    for name in ['reference','source','context','disk','abi','symbols']:parser.add_argument('--'+name,type=Path,required=True)
    args=parser.parse_args();entry=0x201d550;abi=json.loads(args.abi.read_text());symbols=json.loads(args.symbols.read_text())
    context=args.context.read_bytes();disk=args.disk.read_bytes()
    original=Kernel(args.reference,context,disk,entry);source=Kernel(args.source,context,disk,symbols[abi[f'{entry:x}']['symbol']])
    cases=[(0x80,lba,0x4300000,count)for lba in [0,1,257]for count in [512,4096,65536]]
    cases +=[(0x80,len(disk)//512,0x4300000,512),(0x80,0,0x4300000,513),(0x7f,0,0x4300000,512)]
    for case in cases:
        results=[]
        for library in [original,source]:
            library.requests.clear();library.cpu.mem_write(0x4300000,bytes(65536))
            status=library.call('read',*case)
            results.append((status,bytes(library.cpu.mem_read(0x4300000,65536)),list(library.requests)))
        assert results[0]==results[1],(case,results[0][0],results[1][0],results[0][2],results[1][2])
        if case in cases[:9]:assert results[1][0]==1,case
    print('Kernel EFI storage: twelve native/source cases preserve command fields, returned bytes and failure status.')


if __name__=='__main__':main()
