#!/usr/bin/env python3
"""Check the ARM64 geometry homogeneous aggregate return against the kernel.

Pooka's Free Software License. Reference binaries remain external test inputs.
"""
import argparse,math,random,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable
from cube_render import diagnostic_reference
from dll import DLL
from kernel_byte_map import Kernel
from unicorn.arm64_const import UC_ARM64_REG_D0,UC_ARM64_REG_D1


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    for name in ['kernel','source','output']:parser.add_argument('--'+name,type=Path,required=True)
    args=parser.parse_args();out=args.output;out.mkdir(parents=True,exist_ok=True)
    (out/'functions.h').write_text('#include "support.h"\n')
    (out/'pair.c').write_text(args.source.read_text());obj=out/'pair.o'
    compile_object(out/'pair.c',obj,'arm64',[out,'sdk/include','kernel'],pic=True)
    binary=link_dynamic_executable([obj],out/'pair','arm64',{},entry='recovered_824459a8')
    diagnostic=out/'pair.dylib';diagnostic_reference(binary,diagnostic)
    native=Kernel(args.kernel,0x824459a8);source=DLL(diagnostic)
    rng=random.Random(344);cases=[tuple(rng.uniform(-1e6,1e6)for _ in range(4))for _ in range(256)]
    cases +=[(0.,-0.,-0.,0.),(math.inf,1.,-math.inf,2.),(math.nan,2.,3.,4.),(1e308,-1e308,1e308,-1e308)]
    for values in cases:
        results=[]
        for library,name in [(native,'mapping'),(source,'_recovered_824459a8')]:
            library.cpu.mem_write(0x4000000,struct.pack('<4d',*values));library.call(name,0x4000000,0x4000010)
            results.append([library.cpu.reg_read(r)for r in [UC_ARM64_REG_D0,UC_ARM64_REG_D1]])
        for first,last in zip(*results):
            a,b=[struct.unpack('<d',struct.pack('<Q',v))[0]for v in [first,last]]
            assert first==last or(math.isnan(a)and math.isnan(b)),(values,a,b)
    print('ARM64 midpoint: 260 finite and exceptional pairs preserve the native D0/D1 aggregate return.')


if __name__=='__main__':main()
