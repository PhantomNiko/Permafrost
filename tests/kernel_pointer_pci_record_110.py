#!/usr/bin/env python3
"""Compare ARM64 pointer discovery's complete PCI record forwarding.

Pooka's Free Software License. PCI devices and mapping services are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X30,UC_ARM64_REG_PC


def exercise(reference,source,mapping):
    symbols=json.loads(mapping.read_text())
    for multifunction in (False,True):
        outputs=[]
        for native,path in [(True,reference),(False,source)]:
            target=lambda a:a if native else symbols['_recovered_%x'%a]
            lib=Kernel(path.read_bytes(),{'entry':target(0x8240aa68),'_ws_errorf':0x4fe0000});c=lib.cpu;events=[]
            c.mem_write(0x826f5120,bytes(1))
            def args():return[c.reg_read(r)for r in (UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3)]
            def finish(value=0):c.reg_write(lib.result,value);c.reg_write(UC_ARM64_REG_PC,c.reg_read(UC_ARM64_REG_X30))
            def noop(c,pc,size,user):finish(0)
            record=bytearray(44);record[:3]=bytes([0,2,0]);struct.pack_into('<I',record,4,0x000d1b36);record[8:12]=bytes([12,3,0x30,0x80 if multifunction else 0]);struct.pack_into('<II6I',record,12,0x11001af4,0x00100007,0x10008004,0,0x20000000,0x30000000,0x40000000,0x50000000)
            def read(c,pc,size,user):
                bus,device,function,out=args();present=bus==0 and device==2 and function==0
                if present:c.mem_write(out,bytes(record))
                finish(int(present))
            def mapped(c,pc,size,user):
                pointer,index,span,out=args();events.append((bytes(c.mem_read(pointer,44)),index,span));c.emu_stop()
            hooks=[(target(a),noop)for a in (0x82403194,0x82408b34,0x8240d2ec)]
            hooks += [(target(0x8242256c),read),(target(0x82422754),mapped)]
            for pc,callback in hooks:c.hook_add(UC_HOOK_CODE,callback,begin=pc,end=pc)
            lib.instruction_limit=20000000
            try:lib.call('entry')
            except AssertionError:
                if not events:raise
            assert events==[(bytes(record),0,0x10000)],(native,multifunction,events)
            outputs.append(events)
        assert outputs[0]==outputs[1]
    print('ARM64 pointer PCI: native/source single- and multifunction records preserve subsystem identity, command and all six BARs.')


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.map)
