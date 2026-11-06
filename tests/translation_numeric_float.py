#!/usr/bin/env python3
"""Execute recovered numeric conversions and IEEE representation views.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import rewrite_scalar_storage


def main():
    functions='''
float number(unsigned char value) { return (float)CONCAT31(0,value); }
float representation(unsigned high,unsigned char low) { return (float)CONCAT31(high,low); }
'''
    source='#include "support.h"\n'+rewrite_scalar_storage(functions)+'''
int main(void) {
 for(unsigned i=0;i<256;i++) {
  if(number(i)!=(float)i)return 1;
  unsigned bits=(0x3fc012u<<8)|i;
  if(pf_float_bits(representation(0x3fc012u,i))!=bits)return 2;
  if(pf_float_bits(representation(0,i))!=i)return 3;
 }
 return 0;
}
'''
    with tempfile.TemporaryDirectory(prefix='permafrost-conversions-')as directory:
        root=Path(directory);path=root/'probe.c';path.write_text(source)
        subprocess.run(['clang','-std=c11','-O2','-I','kernel',str(path),'-o',str(root/'probe')],check=True)
        subprocess.run([str(root/'probe')],check=True)
    print('Numeric byte conversion and IEEE byte views preserve their distinct values.')


if __name__=='__main__':main()
