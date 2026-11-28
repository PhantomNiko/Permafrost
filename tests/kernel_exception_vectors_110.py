#!/usr/bin/env python3
"""Execute ARM64 native and source exception vector routes.

Pooka's Free Software License. Fault/IRQ dispatchers are intercepted.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X4


def exercise(reference,source,mapping):
    symbols=json.loads(mapping.read_text())
    for native,path in [(True,reference),(False,source)]:
        lib=Kernel(path.read_bytes(),{'_ws_errorf':0x4fe0000})
        routes=[]
        def fault(c,pc,size,user):routes.append(c.reg_read(UC_ARM64_REG_X4 if native else UC_ARM64_REG_X0));c.emu_stop()
        def irq(c,pc,size,user):routes.append('IRQ');c.emu_stop()
        for address,callback in [(0x82451504 if native else symbols['_recovered_82451504'],fault),(0x8245125c if native else symbols['_recovered_8245125c'],irq)]:
            lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)
        for index in range(16):
            lib.cpu.reg_write(UC_ARM64_REG_X0,0x12345678);lib.cpu.reg_write(UC_ARM64_REG_X4,0x87654321)
            lib.cpu.emu_start(0x82451800+128*index,lib.stop,count=10)
        assert routes==[i if i!=5 else 'IRQ'for i in range(16)],(native,routes)
    print('ARM64 exception vectors: all sixteen native/source routes dispatch the correct fault number or saved-frame IRQ handler.')


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.map)
