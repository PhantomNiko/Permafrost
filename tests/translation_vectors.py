#!/usr/bin/env python3
"""Execute recovered vector SSA byte writes and integer operations together.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import rewrite_integer_vectors


def main():
    source = '''
#include "support.h"
uint128 probe(unsigned byte_index,unsigned byte_value) {
 undefined1 auVar1 [16];
 auVar1=0;
 auVar1[byte_index]=(unsigned char)byte_value;
 return auVar1;
}
uintptr_t address(unsigned index) {
 undefined1 (*pointer) [16];
 pointer=(undefined1 (*) [16])(uintptr_t)0x1000;
 return (uintptr_t)*pointer+(uintptr_t)pointer[index];
}
uint128 load(void *memory) {
 undefined1 (*pointer) [16];
 undefined1 auVar2 [16];
 pointer=memory;
 auVar2=*pointer;
 return auVar2;
}
unsigned bytes(void *memory) {
 undefined1 (*pointer) [16];
 pointer=memory;
 return (*pointer)[0]+pointer[1][2]+*(unsigned char *)(*pointer+3);
}
int main(void) {
 uint128 value=((uint128)0x12345678<<64)|0xabcdef;
 if(address(3)!=0x2030 || load(&value)!=value)return 2;
 unsigned char data[32]={0};data[0]=2;data[18]=3;data[3]=5;
 if(bytes(data)!=10)return 3;
 for(unsigned index=0;index<16;index++)
 for(unsigned value=0;value<256;value++)
  if(probe(index,value)!=((uint128)value<<(index*8)))return 1;
 return 0;
}
'''
    with tempfile.TemporaryDirectory(prefix='permafrost-vector-views-') as directory:
        root=Path(directory)
        path=root/'probe.c'
        path.write_text(rewrite_integer_vectors(source))
        subprocess.run(['clang','-std=c11','-O2','-I','kernel',str(path),
                        '-o',str(root/'probe')],check=True)
        subprocess.run([str(root/'probe')],check=True)
    print('4096 vector byte writes retain their integer representation.')


if __name__ == '__main__':
    main()
