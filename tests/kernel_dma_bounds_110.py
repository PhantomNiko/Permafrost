#!/usr/bin/env python3
"""Compare ARM64 DMA alignment and boundary validators with native code.

Pooka's Free Software License. Addresses are scalar values, never accessed.
"""
import argparse,json,random
from pathlib import Path
from kernel_scalars import Kernel


def exercise(reference,source,mapping):
    symbols=json.loads(mapping.read_text());entries={'boundary':0x824195c0,'alignment':0x82418e90}
    libs=[Kernel(path.read_bytes(),{**{name:address if native else symbols['_recovered_%x'%address]for name,address in entries.items()},'_ws_errorf':0x4fe0000})for native,path in [(True,reference),(False,source)]]
    rng=random.Random(110344);cases=[]
    for boundary in (0,1,2,3,64,4096,32768,65535,65536,131072,1<<24,1<<31):
        for count in (0,1,63,4096,32768,65536):
            for address in (0,0x82521000,0x82528000,0xfffffff0,0x100000000,(1<<64)-65536,(1<<64)-1):cases.append((address,count,boundary))
    cases += [(rng.getrandbits(64),rng.randrange(0x20000),1<<rng.randrange(32))for _ in range(250)]
    for name in entries:
        for case in cases:
            args=case+(1,)if name=='alignment'else case
            values=[lib.call(name,*args,result_bits=32)for lib in libs]
            assert values[0]==values[1],(name,case,values)
    assert libs[1].call('boundary',0x82521000,0x8000,0x10000,result_bits=32)==1
    print('ARM64 DMA validators: %d native/source alignment, 64 KiB boundary, crossing, zero and overflow comparisons passed.'%(2*len(cases)))


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.map)
