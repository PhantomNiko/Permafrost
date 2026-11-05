#!/usr/bin/env python3
"""Check native ARM64 indirect-result entry registers and floating arguments.

Pooka's Free Software License.
"""
from pathlib import Path
import json
import struct
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from library_native import build_library
from dll import DLL
from unicorn.arm64_const import UC_ARM64_REG_X8,UC_ARM64_REG_D0
from unicorn.x86_const import UC_X86_REG_ESP


def main():
    out=Path('build/tests/arm64-result-entry');out.mkdir(parents=True,exist_ok=True)
    (out/'functions.h').write_text('#include "support.h"\nvoid normalized_result(uint64_t *out,uint64_t a,uint64_t b,uint64_t c,double value);\nextern unsigned char pf_module_state[];\n')
    (out/'runtime.c').write_text('#include "functions.h"\nvoid normalized_result(uint64_t *out,uint64_t a,uint64_t b,uint64_t c,double value){out[0]=a+b+c;out[1]=pf_double_bits(value);out[2]=0x5046414249ULL;}\n')
    (out/'state.c').write_text('unsigned char pf_module_state[16];\n')
    profile=dict(architecture='arm64',module='ABIProbe',version='0.8',install_name='ABIProbe',functions={'0':'normalized_result'},arm64_sret_exports=['0'],exports=[dict(address=0,name='_pf_entry_probe',weak=False,section=1)],relocations=[])
    (out/'profile.json').write_text(json.dumps(profile))
    lib=DLL(build_library(out,out/'linked'))
    for a,b,c,value in((1,2,3,1.5),(0,0,0,-3.25),(0x100000000,7,11,0.125)):
        lib.cpu.reg_write(UC_ARM64_REG_X8,0x3000000)
        lib.cpu.reg_write(UC_ARM64_REG_D0,struct.unpack('<Q',struct.pack('<d',value))[0])
        lib.call('_pf_entry_probe',a,b,c)
        assert bytes(lib.cpu.mem_read(0x3000000,24))==struct.pack('<QdQ',a+b+c,value,0x5046414249)
    print('ARM64 result entries: three mixed integer/floating cases passed.')

    profile['architecture']='i386'
    del profile['arm64_sret_exports']
    profile['i386_sret_exports']={'0':9}
    (out/'profile.json').write_text(json.dumps(profile))
    lib=DLL(build_library(out,out/'linked-i386'))
    for a,b,c,value in((1,2,3,1.5),(0,0,0,-3.25),(0x100000000,7,11,0.125)):
        words=[word for number in(a,b,c)for word in(number&0xffffffff,number>>32)]
        words+=list(struct.unpack('<II',struct.pack('<d',value)))
        assert lib.call('_pf_entry_probe',0x3000000,*words,result_bits=32)==0x3000000
        assert lib.cpu.reg_read(UC_X86_REG_ESP)==0x4fe0008
        assert bytes(lib.cpu.mem_read(0x3000000,24))==struct.pack('<QdQ',a+b+c,value,0x5046414249)
    print('i386 result entries: three mixed argument and stack cleanup cases passed.')



if __name__=='__main__':main()
