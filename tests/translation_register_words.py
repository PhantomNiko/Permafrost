#!/usr/bin/env python3
"""Execute eight-byte register loads, stores and floating-point views.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools/ghidra'))
from translate import rewrite_register_words, packed_vector_views


def main():
    source = '''
#include "support.h"
uint64_t transport(uint64_t *input,uint64_t *output,unsigned index) {
  undefined1 (*pointer) [8];
  undefined1 auVar1 [8];
  undefined1 auVar2 [8];
  pointer=(undefined1 (*) [8])input;
  if((auVar1=pointer[index],auVar2=auVar1,1)) {
    pointer=(undefined1 (*) [8])output;
    pointer[index]=auVar2;
  }
  return auVar2;
}
double floating_view(void *input,unsigned index) {
  undefined1 (*pointer) [8];
  pointer=input;
  return (double)pointer[index];
}
int main(void) {
  uint64_t input[8],output[8]={0};
  for(unsigned round=0;round<512;round++) {
    for(unsigned i=0;i<8;i++)input[i]=0xfedcba9876543210ULL^(0x100000001b3ULL*(round*8+i));
    for(unsigned i=0;i<8;i++)
      if(transport(input,output,i)!=input[i] || output[i]!=input[i])return 1;
  }
  double values[3]={-17.25,0.0,12345.5};
  for(unsigned i=0;i<3;i++)if(floating_view(values,i)!=values[i])return 2;
  return 0;
}
'''
    physical = 'undefined1 local_40 [8];'
    assert rewrite_register_words(physical) == physical
    translated = packed_vector_views(rewrite_register_words(source))
    with tempfile.TemporaryDirectory(prefix='permafrost-register-words-') as directory:
        root = Path(directory)
        path = root / 'probe.c'
        path.write_text(translated)
        subprocess.run(['clang', '-std=c11', '-O2', '-I', 'kernel', str(path),
                        '-o', str(root / 'probe')], check=True)
        subprocess.run([str(root / 'probe')], check=True)
    print('4096 register-word transfers and floating views passed.')


if __name__ == '__main__':
    main()
