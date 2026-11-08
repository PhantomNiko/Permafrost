#!/usr/bin/env python3
"""Compare source and native graphics provider command results and framebuffer bytes.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse
from pathlib import Path
from graphics_driver import run
ZERO=[(0,0,0,0)]*3
TRIANGLE=[(1,1,0,0xff0000ff),(7,2,0,0x00ff00ff),(2,7,0,0x0000ffff)]
CASES=[
 [(1,(0,0,0,0),0x123456ff,ZERO)],
 [(2,(1,2,4,3),0xabcdef80,ZERO)],
 [(2,(-3,-2,7,6),0x13579bff,ZERO)],
 [(3,(0,0,0,0),0,TRIANGLE)],
 [(2,(2,2,0,4),0xffffffff,ZERO)],
 [(2,(20,20,4,4),0xffffffff,ZERO)],
 [(3,(0,0,0,0),0,[(1,1,0,0xff0000ff),(3,3,0,0x00ff00ff),(5,5,0,0x0000ffff)])],
 [(1,(0,0,0,0),0x203040ff,ZERO),(2,(-3,3,8,8),0x505060ff,ZERO),(3,(0,0,0,0),0,TRIANGLE)],
]
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args()
 for i,commands in enumerate(CASES):assert run(a.reference,commands)==run(a.source,commands),i
 print('Graphics software provider: eight native command-result and framebuffer-byte comparisons passed.')
