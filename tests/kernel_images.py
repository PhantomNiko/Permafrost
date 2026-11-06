#!/usr/bin/env python3
"""Compare kernel image decoders with reference DLL-generated image streams.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from image_formats import exercise
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RSP,UC_X86_REG_RDI,UC_X86_REG_RSI
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_LR
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_LR


def isolated_codec_heap(kernel,symbols):
    """Supply the boot allocator boundary while testing decoder semantics."""
    next_address=[0x600000];allocations={}
    def arguments(cpu):
        if kernel.cpu_type==7:
            sp=cpu.reg_read(UC_X86_REG_ESP)
            return struct.unpack('<II',bytes(cpu.mem_read(sp+4,8)))
        regs=(UC_ARM_REG_R0,UC_ARM_REG_R1)if kernel.cpu_type==12 else(UC_ARM64_REG_X0,UC_ARM64_REG_X1)if kernel.cpu_type==0x100000c else(UC_X86_REG_RDI,UC_X86_REG_RSI)
        return tuple(cpu.reg_read(reg)for reg in regs)
    def finish(cpu,value):
        cpu.reg_write(kernel.result,value)
        if kernel.cpu_type in(12,0x100000c):
            cpu.reg_write(kernel.pc,cpu.reg_read(UC_ARM_REG_LR if kernel.cpu_type==12 else UC_ARM64_REG_LR))
        else:
            reg=UC_X86_REG_RSP if kernel.wide else UC_X86_REG_ESP
            sp=cpu.reg_read(reg);width=8 if kernel.wide else 4
            target=int.from_bytes(cpu.mem_read(sp,width),'little')
            cpu.reg_write(reg,sp+width);cpu.reg_write(kernel.pc,target)
    def reserve(count):
        if not count:return 0
        assert count<0x1000000 and next_address[0]+count<0x1f00000,'unbounded codec allocation'
        pointer=next_address[0];next_address[0]+=(count+15)&~15;allocations[pointer]=count
        return pointer
    def allocate(cpu,pc,size,user):finish(cpu,reserve(arguments(cpu)[0]))
    def release(cpu,pc,size,user):
        pointer=arguments(cpu)[0]
        assert not pointer or pointer in allocations,'invalid codec deallocation %#x'%pointer
        finish(cpu,0)
    def reallocate(cpu,pc,size,user):
        old,count=arguments(cpu);pointer=reserve(count)
        assert not old or old in allocations,'invalid codec reallocation'
        if old and pointer:cpu.mem_write(pointer,bytes(cpu.mem_read(old,min(count,allocations[old]))))
        finish(cpu,pointer)
    for name,callback in(('pf_image_allocate',allocate),('pf_image_release',release),('pf_image_reallocate',reallocate)):
        address=symbols.get(name,symbols.get('_'+name))
        assert address is not None,name
        kernel.cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)



def main():
    parser=argparse.ArgumentParser(description=__doc__)
    for name in ('reference','kernel','reference-library','profile','map'):
        parser.add_argument('--'+name,type=Path,required=True)
    parser.add_argument('--abi',type=Path)
    args=parser.parse_args()
    raw=args.reference.read_bytes();metadata,_=inspect(raw)
    native={name:address for address,name in metadata['symbols']}
    profile=json.loads(args.profile.read_text());symbols=json.loads(args.map.read_text())
    if args.abi:
        entries=json.loads(args.abi.read_text())
        addresses={row['original']:symbols.get(row['symbol'],symbols.get('_'+row['symbol']))for row in entries.values()}
    else:
        addresses={name:symbols.get(profile['functions'].get(f'{address:x}',''),
                                   symbols.get('_'+profile['functions'].get(f'{address:x}','')))
                   for name,address in native.items()}
    reference=Kernel(raw,native,True)
    # Public C++ codec entry points retain cdecl, unlike private i386 VM routines.
    reference.native=False
    source=Kernel(args.kernel.read_bytes(),addresses)
    isolated_codec_heap(source,symbols)
    for format,(encoded,_)in exercise(args.reference_library).items():
        results=[]
        for kernel in (reference,source):
            kernel.cpu.mem_write(0x3100000,encoded);kernel.cpu.mem_write(0x3120000,bytes(32))
            ok=kernel.call('__ZN2wm3png11load_memoryEPKhmRNS0_5ImageE',0x3100000,len(encoded),0x3120000)
            assert ok,(format,'decode failed')
            size=32 if kernel.wide else 20
            width,height,pointer,count,capacity=struct.unpack('<IIQQQ'if kernel.wide else'<IIIII',
                                                             bytes(kernel.cpu.mem_read(0x3120000,size)))
            assert width*height*4==count and count<4000000,(format,'invalid image record')
            results.append((width,height,bytes(kernel.cpu.mem_read(pointer,count))))
        assert results[0]==results[1],(format,'kernel decoded pixels differ')
    print('Kernel images: six reference formats decode with identical pixels.')


if __name__=='__main__':main()
