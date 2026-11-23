#!/usr/bin/env python3
"""Compare x64 kernel task contexts, floating controls and scope transfers.

Pooka's Free Software License. Kernel binaries are external test inputs.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import x86_const as x86


def exercise(binary,addresses,value):
    lib=Kernel(binary,dict(addresses,_ws_errorf=0x4fe0000))
    assert lib.cpu_type==0x1000007,'x64 kernel required'
    registers=[getattr(x86,'UC_X86_REG_'+n)for n in ('RBX','RBP','R12','R13','R14','R15')]
    expected=[0x33112200+i*0x101 for i in range(len(registers))]
    for r,v in zip(registers,expected):lib.cpu.reg_write(r,v)
    lib.cpu.reg_write(x86.UC_X86_REG_MXCSR,0x3f80)
    lib.cpu.reg_write(x86.UC_X86_REG_FPCW,0x77f)
    context=0x3002000;lib.cpu.mem_write(context,b'\xa5'*80)
    assert lib.call('_setjmp',context,result_bits=32)==0
    saved=bytes(lib.cpu.mem_read(context,80))
    assert saved[64:70]==struct.pack('<IH',0x3f80,0x77f)
    assert saved[70:]==b'\xa5'*10,'context save widened the control fields'
    for r in registers:lib.cpu.reg_write(r,0xdeadbeef)
    lib.cpu.reg_write(x86.UC_X86_REG_MXCSR,0x1f80)
    lib.cpu.reg_write(x86.UC_X86_REG_FPCW,0x37f)
    assert lib.call('_longjmp',context,value&0xffffffff,result_bits=32)==(value if value else 1)&0xffffffff
    assert [lib.cpu.reg_read(r)for r in registers]==expected
    assert lib.cpu.reg_read(x86.UC_X86_REG_MXCSR)==0x3f80
    assert lib.cpu.reg_read(x86.UC_X86_REG_FPCW)==0x77f
    lib.cpu.mem_write(context+48,struct.pack('<QQQ',0x12345678,lib.stop,0x4fd0000))
    lib.call('_winterboot_sjlj_jump',context)
    assert lib.cpu.reg_read(x86.UC_X86_REG_RBP)==0x12345678
    assert lib.cpu.reg_read(x86.UC_X86_REG_RSP)==0x4fd0000
    return saved


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path)
    parser.add_argument('--map',type=Path,required=True);args=parser.parse_args()
    metadata,_=inspect(args.reference.read_bytes());native={n:a for a,n in metadata['symbols']}
    mapping=json.loads(args.map.read_text())
    names=['_setjmp','_longjmp','_winterboot_sjlj_jump']
    source={n:mapping['recovered_%x'%native[n]]for n in names}
    for value in (0,7,-1):
        assert exercise(args.reference.read_bytes(),native,value)==exercise(args.source.read_bytes(),source,value)
    print('Kernel contexts: native register buffers, floating controls, zero/nonzero restores and scope transfers match.')


if __name__=='__main__':main()
