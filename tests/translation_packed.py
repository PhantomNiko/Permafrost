#!/usr/bin/env python3
"""Check narrow register values and byte-exact stack writes with canaries.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import exact_array_stores,packed_vector_views,array_bitwise_reads,array_concat_reads


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
 storage = *(undefined1 (*) [WIDTH])(out.data);
 if((storage ^ storage)!=0)return 3;
 if(out.before!=0x39 || out.after!=0x7b)return 1;
 for(unsigned i=0;i<WIDTH;i++){
  unsigned char expected=i==0?0xcb:i==1?0xed:0xff;
  if(out.data[i]!=expected)return 2;
 }
 return 0;
}
'''.replace('WIDTH',str(width))
        source+=array_bitwise_reads(packed_vector_views(exact_array_stores(function)),{'storage':str(width)})
    source+='''int shuffle(void){uint256 value,mask;for(unsigned i=0;i<32;i++){value.bytes[i]=i;mask.bytes[i]=(31-i)|(i%3==0?128:0);}uint256 out=vpshufb_avx2(value,mask);for(unsigned i=0;i<32;i++)if(out.bytes[i]!=(i%3==0?0:((i&16)|((31-i)&15))))return 1;return 0;}\n'''
    source+=array_concat_reads('''int concatenate(void){
 undefined1 rgb[4]={0x12,0x34,0x56,0x78};
 return CONCAT12(0xab,rgb)!=0xab3412 || CONCAT21(rgb,0xcd)!=0x3412cd ||
        CONCAT13(0xef,rgb)!=0xef563412 || CONCAT11(0x56,CONCAT11(0x78,rgb))!=0x5612;
}
''')
    source+='''int signed_concatenate(void){
 _Static_assert(sizeof(CONCAT11(0,0))==2,"CONCAT11 result width");
 for(unsigned high=0;high<256;high++)for(unsigned low=0;low<256;low++)
  if(CONCAT11((int8_t)high,(int8_t)low)!=((high<<8)|low))return 1;
 return 0;
}
'''
    source+='int main(void){return '+'|'.join('probe_%d()'%width for width in [2,3,9,10,11,12,13,14,15,16])+'|shuffle()|concatenate()|signed_concatenate();}\n'
    root=Path(__file__).resolve().parents[1]
    with tempfile.TemporaryDirectory(prefix='permafrost-packed-')as directory:
        path=Path(directory);(path/'probe.c').write_text(source)
        subprocess.run(['clang','-std=c11','-O2','-nostdinc','-I',str(root/'sdk/include'),
                        '-I',str(root/'kernel'),str(path/'probe.c'),'-o',str(path/'probe')],check=True)
        subprocess.run([str(path/'probe')],check=True)
    print('Packed register values and exact 2–16 byte writes preserve neighboring canaries.')


if __name__=='__main__':main()
