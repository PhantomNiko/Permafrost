#!/usr/bin/env python3
"""Execute signed packed-coordinate constants emitted by the decompiler.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools/ghidra'))
from translate import signed_negative_hex


def main():
    original = '''
#include "support.h"
const char *literal="+ -0xfffffff6";
// Preserve + -0xfffffff6 in comments.
uint64_t bottom(unsigned y,unsigned height) {
 return ((uint64_t)y<<32)+((uint64_t)height<<32)+ -0xfffffff6;
}
int64_t minimum(void) { return -0x80000000; }
int main(void) {
 if((bottom(93,17)>>32)!=109)return 1;
 if(minimum()!=INT64_C(-2147483648))return 2;
 if(literal[3]!='0')return 3;
 for(unsigned mask=0;mask<4;mask++) {
  uint128 lanes=((uint128)(mask&1)<<63)|((uint128)(mask>>1)<<127);
  if(movmskpd(0,lanes)!=mask)return 4;
 }
 return 0;
}
'''
    source = signed_negative_hex(original)
    assert '"+ -0xfffffff6"' in source
    assert '// Preserve + -0xfffffff6 in comments.' in source
    assert signed_negative_hex('return -0xffffffffU;') == 'return -0xffffffffU;'
    assert signed_negative_hex('return -0x100000000;') == 'return -0x100000000;'
    with tempfile.TemporaryDirectory(prefix='permafrost-coordinates-') as directory:
        root = Path(directory)
        (root / 'probe.c').write_text(source)
        subprocess.run(['clang', '-std=c11', '-O2', '-I', 'kernel', str(root / 'probe.c'), '-o', str(root / 'probe')], check=True)
        subprocess.run([str(root / 'probe')], check=True)
    print('Signed packed-coordinate constants retain their mathematical value.')


if __name__ == '__main__':
    main()
