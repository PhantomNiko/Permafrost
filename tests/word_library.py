#!/usr/bin/env python3
"""Compare the ARM32 compiler word-division ABI with native CPU arithmetic.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from dll import DLL


def signed(value):return value-(1<<32)if value&(1<<31)else value


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path)
    args=parser.parse_args();reference,source=DLL(args.reference),DLL(args.source)
    pairs=[(0,1),(1,1),(7,3),(0xffffffff,3),(0xffffffff,0x80000000),
           (0x80000000,0xffffffff),(0x80000000,1),(0x7fffffff,65521),(123456789,97)]
    count=0
    for name in('___udivsi3','___umodsi3','___divsi3','___modsi3'):
        assert name in reference.exports and name in source.exports
        for a,b in pairs:
            if name in('___udivsi3','___umodsi3'):
                expected=a//b if name=='___udivsi3'else a%b
            else:
                x,y=signed(a),signed(b);q=abs(x)//abs(y)
                if (x<0)!=(y<0):q=-q
                expected=(q if name=='___divsi3'else x-q*y)&0xffffffff
            assert reference.call(name,a,b,result_bits=32)==expected,(name,a,b,'native')
            assert source.call(name,a,b,result_bits=32)==expected,(name,a,b,'source')
            count+=1
    print('%d compiler word-division cases passed.'%count)


if __name__=='__main__':main()
