#!/usr/bin/env python3
"""Compare ARM64 storage provider registration and callback selection.

Pooka's Free Software License. Devices and callbacks are synthetic guest state.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')]
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_PC,UC_ARM64_REG_LR


def exercise(reference,source,mapping):
    symbols=json.loads(mapping.read_text())
    results=[]
    for native,path in [(True,reference),(False,source)]:
        entry=0x82489a94 if native else symbols['_recovered_82489a94']
        lib=Kernel(path.read_bytes(),{'entry':entry,'_ws_errorf':0x4fe0000})
        cpu=lib.cpu
        events=[]
        def args():return [cpu.reg_read(r)for r in (UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3)]
        def finish(value):cpu.reg_write(lib.result,value);cpu.reg_write(UC_ARM64_REG_PC,cpu.reg_read(UC_ARM64_REG_LR))
        def snapshot(c,pc,size,user):
            table,generation,*_=args();c.mem_write(table,bytes(0xbc0));c.mem_write(generation,struct.pack('<I',42));finish(0)
        def drive(c,pc,size,user):
            index,sectors,name,capacity=args();assert capacity==13
            events.append(('drive',index));c.mem_write(sectors,struct.pack('<I',65536+index));c.mem_write(name,b'Virtual disk\0');finish(1)
        def identity(c,pc,size,user):
            index,record,*_=args();events.append(('identity',index));c.mem_write(record,bytes(64));finish(1)
        for address,callback in [(0x82484e3c if native else symbols['_recovered_82484e3c'],snapshot),(0x18000,drive),(0x18400,identity)]:
            if address<0x20000:cpu.mem_write(address,struct.pack('<I',0xd65f03c0))
            cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)
        cases=[]
        for version in (1,2,3):
            for count in (1,2,8):
                events.clear();cpu.mem_write(0x82738568,struct.pack('<Q',0x3000000));cpu.mem_write(0x3000000,bytes(1024));cpu.mem_write(0x3000048,b'\\Drivers\\storage.kext\0')
                cpu.mem_write(0x824a98b8,struct.pack('<I',42));cpu.mem_write(0x827381c0,bytes(4));cpu.mem_write(0x8272f2e0,bytes(0xbc0))
                cpu.mem_write(0x3001000,struct.pack('<12I',version,count,0x18000,0x18100,0x18200,0x18300,0x18400,0,0,0,0,0))
                value=lib.call('entry',0x3001000,result_bits=32)
                records=bytes(cpu.mem_read(0x8272f2e0,0xbc0))
                assert value==count,(native,version,count,value)
                assert events==[event for i in range(count)for event in ([('drive',i)]if version==1 else [('drive',i),('identity',i)])],(native,version,count,events)
                cases.append((value,records,events.copy()))
        results.append(cases)
    assert results[0]==results[1],'storage provider records differ'
    print('ARM64 storage providers: nine native/source versions, drive counts, callbacks and committed record comparisons passed.')


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('--map',required=True,type=Path);a=parser.parse_args();exercise(a.reference,a.source,a.map)
