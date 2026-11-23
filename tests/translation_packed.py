#!/usr/bin/env python3
"""Check narrow register values and byte-exact stack writes with canaries.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import exact_array_stores,packed_vector_views


def main():
    source='''#include "support.h"
'''
    for width in [2,3,9,10,11,12,13,14,15,16]:
        function='''int probe_WIDTH(void) {
  undefined1 auVar1 [WIDTH];
  undefined1 auVar2 [WIDTH];
  undefined1 storage [WIDTH];
 struct {unsigned char before;unsigned char data[WIDTH];unsigned char after;} out;
 out.before=0x39;out.after=0x7b;
 auVar1=(undefined1 [WIDTH])~(uint128)0;
 auVar2=auVar1 ^ (undefined1 [WIDTH])0x1234;
 storage=auVar2;
 *(undefined1 (*) [WIDTH])(out.data) = storage;
 if(out.before!=0x39 || out.after!=0x7b)return 1;
 for(unsigned i=0;i<WIDTH;i++){
  unsigned char expected=i==0?0xcb:i==1?0xed:0xff;
  if(out.data[i]!=expected)return 2;
 }
 return 0;
}
'''.replace('WIDTH',str(width))
        source+=packed_vector_views(exact_array_stores(function))
    source+='int main(void){return '+'|'.join('probe_%d()'%width for width in [2,3,9,10,11,12,13,14,15,16])+';}\n'
    root=Path(__file__).resolve().parents[1]
    with tempfile.TemporaryDirectory(prefix='permafrost-packed-')as directory:
        path=Path(directory);(path/'probe.c').write_text(source)
        subprocess.run(['clang','-std=c11','-O2','-nostdinc','-I',str(root/'sdk/include'),
                        '-I',str(root/'kernel'),str(path/'probe.c'),'-o',str(path/'probe')],check=True)
        subprocess.run([str(path/'probe')],check=True)
    print('Packed register values and exact 2–16 byte writes preserve neighboring canaries.')


if __name__=='__main__':main()
