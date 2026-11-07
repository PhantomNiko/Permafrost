#!/usr/bin/env python3
"""Execute recovered vector SSA byte writes and integer operations together.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import rewrite_integer_vectors, rewrite_array_words


def main():
    source = '''
#include "support.h"
uint64_t copy_word(uint64_t value) {
  undefined1 first [8];
  undefined1 second [8];
 first=(undefined1 [8])value;
 second=first;
 return *(uint64_t *)(void *)second;
}
uintptr_t register_pointer(uint64_t value) {
  undefined1 auVar34 [8];
 auVar34=(undefined1 [8])value;
 return (uintptr_t)(char *)auVar34;
}
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
uint32_t lane(unsigned index) {
 undefined1 auVar3 [16];
 auVar3=((uint128)0x0123456789abcdefULL<<64)|0xfedcba9876543210ULL;
 uint32_t words[4];
 words[0]=*(undefined4 *)auVar3;
 words[1]=*(undefined4 *)(auVar3+(undefined1 [16])0x4);
 words[2]=*(undefined4 *)(auVar3+(undefined1 [16])0x8);
 words[3]=*(undefined4 *)(auVar3+(undefined1 [16])0xc);
 return words[index];
}
uint128 duplicate_pair(uint64_t value) {
 undefined1 auVar4 [16];
 auVar4=value;
 return *(undefined1 (*) [16])(auVar4 << 0x40 | auVar4);
}
unsigned bytes(void *memory) {
 undefined1 (*pointer) [16];
 pointer=memory;
 return (*pointer)[0]+pointer[1][2]+*(unsigned char *)(*pointer+3);
}
unsigned byte_offset(void *memory,unsigned offset) {
 undefined1 (*pointer) [16];
 pointer=memory;
 unsigned char *position=*pointer+offset;
 return *position;
}
unsigned byte_alias(void *memory,unsigned offset) {
 undefined1 (*pointer) [16];
 unsigned char *position;
 pointer=memory;
 position=*pointer;
 return position[offset];
}
int main(void) {
 uint128 value=((uint128)0x12345678<<64)|0xabcdef;
 if(copy_word(0x123456789abcdef0ULL)!=0x123456789abcdef0ULL)return 4;
 if(register_pointer(0x12345678)!=0x12345678)return 5;
 if(duplicate_pair(0x2100000021ULL)!=
    (((uint128)0x2100000021ULL<<64)|0x2100000021ULL))return 7;
 if(lane(0)!=0x76543210 || lane(1)!=0xfedcba98 ||
    lane(2)!=0x89abcdef || lane(3)!=0x01234567)return 6;
 if(address(3)!=0x2030 || load(&value)!=value)return 2;
 unsigned char data[32]={0};data[0]=2;data[18]=3;data[3]=5;
 if(bytes(data)!=10)return 3;
 if(byte_offset(data,18)!=3)return 8;
 if(byte_alias(data,18)!=3)return 9;
 for(unsigned index=0;index<16;index++)
 for(unsigned value=0;value<256;value++)
  if(probe(index,value)!=((uint128)value<<(index*8)))return 1;
 return 0;
}
'''
    with tempfile.TemporaryDirectory(prefix='permafrost-vector-views-') as directory:
        root=Path(directory)
        path=root/'probe.c'
        path.write_text(rewrite_array_words(rewrite_integer_vectors(source)))
        subprocess.run(['clang','-std=c11','-O2','-I','kernel',str(path),
                        '-o',str(root/'probe')],check=True)
        subprocess.run([str(root/'probe')],check=True)
    print('4096 vector byte writes retain their integer representation.')


if __name__ == '__main__':
    main()
