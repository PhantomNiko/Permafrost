#!/usr/bin/env python3
"""Verify recovered register accesses reach the intended ARM64 instructions.

Pooka's Free Software License.
"""
from pathlib import Path
import sys
import tempfile
sys.path[:0]=[str(Path(__file__).resolve().parents[1]/'tools'),
              str(Path(__file__).resolve().parents[1]/'tools/ghidra')]
from translate import system_register_views
from darwin import compile_object
from native import inspect
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM


def main():
    source='''#include "support.h"
#include "cpu.h"
const char *register_name="daif";
uint64_t inspect_status(void) {
 daif=daif|128;
 if(currentel==4)cntv_tval_el0=2048;
 return mpidr_el1;
}
'''
    access={'daif':'rw','currentel':'ro','cntv_tval_el0':'rw','mpidr_el1':'ro'}
    translated=system_register_views(source,access)
    assert '"daif"' in translated
    with tempfile.TemporaryDirectory(prefix='permafrost-registers-') as directory:
        source_path=Path(directory)/'registers.c'
        object_path=Path(directory)/'registers.o'
        source_path.write_text(translated)
        compile_object(source_path,object_path,'arm64',['kernel','kernel/arm64','sdk/include'])
        metadata,memory=inspect(object_path.read_bytes())
        section=next((address,size)for name,address,size in metadata['sections']if name=='__text')
        address,size=section
        instructions=list(Cs(CS_ARCH_ARM64,CS_MODE_ARM).disasm(memory[address-metadata['base']:address-metadata['base']+size],address))
        for operation,register in [('mrs','daif'),('msr','daif'),('mrs','currentel'),
                                   ('msr','cntv_tval_el0'),('mrs','mpidr_el1')]:
            assert any(i.mnemonic==operation and register in i.op_str.lower()for i in instructions),(operation,register)
    print('Recovered system registers compile to the intended architectural accesses.')


if __name__=='__main__':
    main()
