#!/usr/bin/env python3
"""Compare TerrorUI aggregate exports against the reference x86-64 ABI.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import random
import struct
from dll import DLL


def exercise(path):
    lib=DLL(path,poison_stack=True)
    assert lib.cpu_type==0x1000007,'This probe covers the x86-64 aggregate ABI.'
    out=0x3000000
    results=[]
    # Large structures arrive on the stack while independent scalar parameters
    # still use general registers. The hidden result pointer occupies RDI.
    def modifier(name,value,*args):
        lib.cpu.mem_write(out,b'\xa5'*(len(value)+16))
        registers=[out,*args]
        registers += [0]*(6-len(registers))
        returned=lib.call('_terror_ui_'+name,*registers,*struct.unpack('<'+'Q'*(len(value)//8),value),result_bits=64)
        data=bytes(lib.cpu.mem_read(out,len(value)+16))
        assert data[len(value):]==b'\xa5'*16,(name,'overwritten result boundary')
        # Some reference modifiers omit the conventional RAX result alias;
        # callers consume the structure written through the hidden pointer.
        results.append((name,data[:len(value)]))
    rng=random.Random(0x100)
    for _ in range(5):
        view=rng.randbytes(88);spec=rng.randbytes(72)
        for name in ['foreground','background','text_scale','alignment']:
            for value in [0,1,3,4,0xffffffff,0x123456]:modifier('view_'+name,view,value)
        for w,h in [(-1,-1),(0,0),(17,23),(-1,64),(72,-1)]:
            modifier('view_frame',view,w&0xffffffff,h&0xffffffff)
        modifier('view_padding',view,0x0000000200000001,0x0000000400000003)
        for name in ['transparency','shadow','blur','refract']:
            for value in [0,1,50,100,255,0xffffffff]:modifier('window_spec_'+name,spec,value)
        for name in ['clear','solid']:modifier('window_spec_'+name,spec)
        for mode in [0,1,2,3,4,0xffffffff]:modifier('window_spec_mode',spec,mode,0xffffffff)
    return results


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path)
    args=parser.parse_args();native=exercise(args.reference);source=exercise(args.source)
    for i,(a,b)in enumerate(zip(native,source)):
        assert a==b,(i,a,b)
    assert len(native)==len(source)
    print(f'TerrorUI: {len(native)} aggregate modifier cases passed (x86-64).')


if __name__=='__main__':main()
