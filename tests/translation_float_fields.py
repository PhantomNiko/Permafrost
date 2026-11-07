#!/usr/bin/env python3
"""Execute mixed floating and integer lanes from decompiler field metadata.

Pooka's Free Software License.
"""
import json
from pathlib import Path
import subprocess
import sys
import tempfile


def main():
    repository = Path(__file__).resolve().parents[1]
    sys.path.insert(0, str(repository / 'tools/ghidra'))
    from merge import merge
    with tempfile.TemporaryDirectory(prefix='permafrost-floating-fields-') as directory:
        root = Path(directory)
        notes, manual, units = (root / name for name in ('notes', 'manual', 'units'))
        notes.mkdir()
        manual.mkdir()
        (notes / '1000.c').write_text('''
double recovered_1000(double value)
{
 undefined1 pair[16];
 pair._0_8_=value*value;
 pair._8_8_=value;
 return pair._0_8_+pair._8_8_;
}
''')
        (notes / '1000.tsv').write_text(''.join(
            'F\tpair._%d_8_\t%d\tdouble\n' % (offset, occurrence)
            for offset in (0, 8) for occurrence in (1, 2)))
        (notes / '2000.c').write_text('''
unsigned recovered_2000(float value)
{
 undefined1 lanes[16];
 lanes._0_4_=value*0.5f;
 lanes._4_4_=0x80000001U;
 if(lanes._0_4_!=value*0.5f)return 1;
 return lanes._4_4_;
}
''')
        (notes / '2000.tsv').write_text('F\tlanes._0_4_\t1\tfloat\nF\tlanes._0_4_\t2\tfloat\n')
        layout = root / 'layout.json'
        layout.write_text(json.dumps({'translation': {'pointer_bytes': 8}}))
        subprocess.run([sys.executable, str(repository / 'tools/ghidra/translate.py'),
                        '--layout', str(layout), '--notes', str(notes),
                        '--manual', str(manual), '--out', str(units)], check=True)
        merge(units, root / 'runtime.c', root / 'functions.h')
        with (root / 'runtime.c').open('a') as stream:
            stream.write('''
int main(void) {
 if(recovered_1000(3.5)!=15.75 || recovered_1000(-1.25)!=0.3125)return 1;
 if(recovered_2000(3.5f)!=0x80000001U || recovered_2000(-1.25f)!=0x80000001U)return 2;
 return 0;
}
''')
        executable = root / 'check'
        subprocess.run(['clang', '-std=c11', '-O2', '-fno-strict-aliasing',
                        '-I', str(repository / 'kernel'), str(root / 'runtime.c'),
                        '-o', str(executable)], check=True)
        subprocess.run([str(executable)], check=True)
    print('Floating field writes and reads preserve IEEE values beside integer lanes.')


if __name__ == '__main__':
    main()
