#!/usr/bin/env python3
"""Check ARM exclusives and compare a recovered lock with the original kernel.

Pooka's Free Software License. Original binaries and analysis notes are test inputs.
"""
import argparse
import json
from pathlib import Path
import struct
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable
from native import inspect
from cube_render import diagnostic_reference
from dll import DLL
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_PC,UC_ARM_REG_LR


def build(output,wrapper):
    output.mkdir(parents=True,exist_ok=True)
    fixture=output/'recovered-wrapper.c'
    fixture.write_text('''#include <stdint.h>
#include <stdbool.h>
#include "arm_exclusive.h"
typedef uint32_t undefined4;
#define DAT_40534008 (*(volatile uint32_t *)(uintptr_t)0x40534008U)
#define DataMemoryBarrier(...) __asm__ volatile("dmb sy":::"memory")
#define HintYield() __asm__ volatile("yield":::"memory")
unsigned pf_test_callback_arguments[3];
unsigned pf_test_callback_count;
bool recovered_40400850(undefined4 *a,undefined4 *b,int count){
pf_test_callback_arguments[0]=(uintptr_t)a;pf_test_callback_arguments[1]=(uintptr_t)b;
pf_test_callback_arguments[2]=count;pf_test_callback_count++;return true;}
'''+wrapper.read_text())
    objects=[]
    for name,path in [('exclusive','tests/arm_exclusive.c'),('wrapper',fixture),
                      ('memory','kernel/runtime.c'),('compiler','kernel/compiler.c')]:
        obj=output/(name+'.o')
        compile_object(Path(path),obj,'armv7',['sdk/include','kernel'],pic=True)
        objects.append(obj)
    binary=link_dynamic_executable(objects,output/'exclusive','armv7',{},entry='pf_test_exclusive')
    diagnostic=output/'exclusive.dylib'
    diagnostic_reference(binary,diagnostic)
    return DLL(diagnostic)


class Kernel(DLL):
    def __init__(self,path):
        metadata,memory=inspect(path.read_bytes())
        self.cpu_type=12;self.wide=False;self.stop=0x4ff0000
        self.pc=UC_ARM_REG_PC;self.result=UC_ARM_REG_R0
        self.instruction_limit=1000000
        self.cpu=Uc(UC_ARCH_ARM,UC_MODE_ARM)
        self.cpu.mem_map(0,0x5000000)
        base=metadata['base']&~4095
        self.cpu.mem_map(base,(metadata['end']-base+4095)&~4095)
        self.cpu.mem_write(metadata['base'],memory)
        self.exports={name:address for address,name in metadata['symbols']}


def lock_case(library,native,held):
    lock=0x40534008
    library.cpu.mem_write(lock,struct.pack('<I',held))
    yields=[];arguments=[]
    def hook(cpu,address,size,unused):
        if size==4 and bytes(cpu.mem_read(address,4))==struct.pack('<I',0xe320f001):
            yields.append(address)
            if len(yields)==3:cpu.mem_write(lock,bytes(4))
            # Some Unicorn CPU models reject the optional scheduler hint.
            # Model it as a no-op after simulating the other owner above.
            cpu.reg_write(UC_ARM_REG_PC,address+4)
        if native and address==library.exports['_wm_probe_heap_add_regions_unlocked']:
            arguments.append(tuple(cpu.reg_read(reg)for reg in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]))
            cpu.reg_write(UC_ARM_REG_R0,1);cpu.reg_write(UC_ARM_REG_PC,cpu.reg_read(UC_ARM_REG_LR))
    if native:
        # The helper has a private native name; locate it by its known call
        # target, rather than guessing a public prototype from its spelling.
        library.exports['_wm_probe_heap_add_regions_unlocked']=0x40400850
    handle=library.cpu.hook_add(UC_HOOK_CODE,hook)
    result=library.call('_wm_probe_heap_add_regions'if native else'_recovered_404007d8',0x3000000,0x3001000,3,result_bits=32)
    library.cpu.hook_del(handle)
    if not native:
        count=struct.unpack('<I',library.cpu.mem_read(library.exports['_pf_test_callback_count'],4))[0]
        assert count==1
        arguments=[struct.unpack('<3I',library.cpu.mem_read(library.exports['_pf_test_callback_arguments'],12))]
        library.cpu.mem_write(library.exports['_pf_test_callback_count'],bytes(4))
    assert result==1 and bytes(library.cpu.mem_read(lock,4))==bytes(4)
    assert arguments==[(0x3000000,0x3001000,3)]
    assert len(yields)==(3 if held else 0)
    return result,arguments,len(yields)


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--kernel',type=Path,required=True)
    parser.add_argument('--wrapper',type=Path,required=True)
    args=parser.parse_args()
    source=build(args.output,args.wrapper)
    assert source.call('_pf_test_exclusive',result_bits=32)==0
    source.cpu.mem_map(0x40534000,4096)
    for held in [0,1]:
        assert lock_case(Kernel(args.kernel),True,held)==lock_case(source,False,held)
    print('ARM32: byte/halfword/word/doubleword exclusives, cleared reservations and retries pass; recovered heap locking matches the original with free and contended locks.')
