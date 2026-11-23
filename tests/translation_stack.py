#!/usr/bin/env python3
"""Execute recovered stack-address bit operations with the native entry bias.

Pooka's Free Software License.
"""
import json,subprocess,sys,tempfile
from pathlib import Path


def main():
    root=Path(__file__).resolve().parents[1]
    with tempfile.TemporaryDirectory(prefix='permafrost-stack-')as directory:
        work=Path(directory);notes=work/'notes';notes.mkdir();out=work/'units'
        (notes/'1000.c').write_text('''unsigned recovered_1000(void)
{
  undefined1 local_118 [80];
 local_118[0]=0x19;local_118[8]=0x7b;
 return *(byte *)((uintptr_t)local_118 | 8);
}
''')
        (notes/'1000.tsv').write_text('L\tlocal_118\t-280\tA:80:undefined1:1\n')
        layout=dict(base=0x1000,text_start=0x1000,text_end=0x1100,state_end=0x1100,
                    translation=dict(pointer_bytes=8,stack_origin_bias=8))
        (work/'layout.json').write_text(json.dumps(layout))
        subprocess.run([sys.executable,str(root/'tools/ghidra/translate.py'),
                        '--layout',str(work/'layout.json'),'--notes',str(notes),
                        '--out',str(out)],check=True)
        (work/'probe.c').write_text('unsigned recovered_1000(void);int main(void){return recovered_1000()!=0x7b;}\n')
        subprocess.run(['clang','-O2','-std=c11','-nostdinc','-I',str(root/'sdk/include'),
                        '-I',str(root/'kernel'),'-I',str(out),str(out/'1000.c'),
                        str(work/'probe.c'),'-o',str(work/'probe')],check=True)
        subprocess.run([str(work/'probe')],check=True)
    print('Native stack-origin bias preserves descriptor-name selection by address bits.')


if __name__=='__main__':main()
