#!/usr/bin/env python3
"""Execute hardware-view lowering with deterministic architectural state.

Pooka's Free Software License. No privileged host instructions are executed.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import register_input_views,system_register_views,descriptor_register_views


def main():
    read='''unsigned probe(unsigned available) {
  unsigned in_CR4;
 if(available)return in_CR4;
 return 9;
}
unsigned reused(void) {
  unsigned in_CR4;
 unsigned original=in_CR4;
 in_CR4=7;
 return original+in_CR4;
}
'''
    read=register_input_views(read[:read.index('unsigned reused')],{'in_CR4':'read_control'})+register_input_views(read[read.index('unsigned reused'):],{'in_CR4':'read_control'})
    write='''unsigned flags(void) {
  unsigned in_IF;
 unsigned before=in_IF;
 in_IF=0;
 unsigned middle=in_IF;
 in_IF=1;
 return before*4+middle*2+in_IF;
}
'''
    write=system_register_views(write,{'in_IF':'rw'})
    descriptors=[]
    for width,ctype,shift in [(6,'ulong',64),(2,'uint',32)]:
        source='''unsigned descriptor_WIDTH(void) {
  undefined2 uStack_30;
  undefined2 uStack_NEXT;
  TYPE low;
 low = GlobalDescriptorTableRegister();
 uStack_30 = (undefinedWIDTH)((TYPE)low >> 0x10);
 return uStack_NEXT;
}
'''.replace('WIDTH',str(width)).replace('NEXT',format(0x30-width,'x')).replace('TYPE',ctype)
        descriptors.append(descriptor_register_views(source))
    source='''#include "support.h"
static unsigned reads,state=1,writes;
unsigned read_control(void){reads++;return 0x40000;}
unsigned pf_read_in_IF(void){return state;}
void pf_write_in_IF(unsigned value){state=value;writes++;}
uint128 GlobalDescriptorTableRegister(void){return ((uint128)0x123456789abcdef0ULL<<16)|0x89ab;}
'''+read+write+'\n'.join(descriptors)+'''
int main(void){
 if(probe(0)!=9 || reads)return 1;
 if(probe(1)!=0x40000 || reads!=1)return 2;
 if(reused()!=0x40007 || reads!=2)return 3;
 if(flags()!=5 || writes!=2 || state!=1)return 4;
 if(descriptor_6()!=0x1234 || descriptor_2()!=0x9abc)return 5;
 return 0;
}
'''
    root=Path(__file__).resolve().parents[1]
    with tempfile.TemporaryDirectory(prefix='permafrost-cpu-views-')as directory:
        path=Path(directory);(path/'probe.c').write_text(source)
        subprocess.run(['clang','-std=c11','-O2','-nostdinc','-I',str(root/'sdk/include'),
                        '-I',str(root/'kernel'),str(path/'probe.c'),'-o',str(path/'probe')],check=True)
        subprocess.run([str(path/'probe')],check=True)
    print('CPU views preserve conditional reads, scratch reuse, interrupt writes and complete descriptor bases.')


if __name__=='__main__':main()
