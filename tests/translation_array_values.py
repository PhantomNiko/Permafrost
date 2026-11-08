#!/usr/bin/env python3
"""Execute scalar byte-array reads while preserving address arguments on both ABIs.

Pooka's Free Software License.
"""
import json
from pathlib import Path
import subprocess
import sys
import tempfile


def main():
    repository=Path(__file__).resolve().parents[1]
    sys.path.insert(0,str(repository/'tools/ghidra'))
    from merge import merge
    with tempfile.TemporaryDirectory(prefix='permafrost-array-values-')as directory:
        root=Path(directory);notes=root/'notes';manual=root/'manual';notes.mkdir();manual.mkdir()
        (notes/'1000.c').write_text('''
int recovered_1000(unsigned value)
{
 undefined1 storage[4];
 uint *address;
 address=(uint *)storage;
 *address=value;
 return (int)storage;
}
''')
        (notes/'1000.tsv').write_text('Q\t-\t0\t0\nQ\tstorage\t3\t4\n')
        for width in (4,8):
            layout=root/'layout.json';layout.write_text(json.dumps({'translation':{'pointer_bytes':width}}))
            units=root/('units'+str(width));runtime=root/'runtime.c';header=root/'functions.h'
            subprocess.run([sys.executable,str(repository/'tools/ghidra/translate.py'),'--layout',str(layout),
                            '--notes',str(notes),'--manual',str(manual),'--out',str(units)],check=True)
            merge(units,runtime,header)
            with runtime.open('a')as stream:stream.write('''
int main(void){
 return recovered_1000(42)!=42||recovered_1000(0x80000001U)!=(int)0x80000001U;
}
''')
            executable=root/'check'
            subprocess.run(['clang','-std=c11','-O2','-fno-strict-aliasing','-I',str(repository/'kernel'),
                            str(runtime),'-o',str(executable)],check=True)
            subprocess.run([str(executable)],check=True)
    print('Four- and eight-byte ABI translation preserves scalar array values and address arguments.')


if __name__=='__main__':main()
