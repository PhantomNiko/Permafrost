#!/usr/bin/env python3
"""Compare ARM64 hardware polling when a register changes during the loop.

Pooka's Free Software License. MMIO values are controlled by the emulator.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_MEM_READ


def exercise(reference,source,mapping):
    symbols=json.loads(mapping.read_text());results=[]
    for native,path in [(True,reference),(False,source)]:
        lib=Kernel(path.read_bytes(),{'poll':0x82404b60 if native else symbols['_recovered_82404b60'],'_ws_errorf':0x4fe0000});c=lib.cpu;reads=[0];clear_after=[0]
        def read(c,access,address,size,value,user):
            reads[0]+=1
            if reads[0]>=clear_after[0]:c.mem_write(address,bytes(4))
        c.hook_add(UC_HOOK_MEM_READ,read,begin=0x3000000,end=0x3000003)
        values=[]
        for mask,after in [(1,1),(8,2),(0x80000000,3),(0x80000000,31),(1,100)]:
            c.mem_write(0x3000000,struct.pack('<I',mask));reads[0]=0;clear_after[0]=after
            value=lib.call('poll',0x3000000,mask,result_bits=32);values.append(value)
            assert value==1 and reads[0]>=after,(native,mask,after,value,reads[0])
        results.append(values)
    assert results[0]==results[1]
    print('ARM64 MMIO polling: five native/source changing-register scenarios observe hardware clearing the busy mask.')


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.map)
