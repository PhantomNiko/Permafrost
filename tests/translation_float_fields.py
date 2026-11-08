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
        (notes / '3000.c').write_text('''
double recovered_3000(double value)
{
  ulong *pointer;
  undefined8 slot;
 pointer=(ulong *)(uintptr_t)pf_double_bits(value);
 slot=(undefined8)pointer;
 return (double)slot+dRam0000000000001000+dRam0000000000001008;
}
''')
        (notes / '3000.tsv').write_text('L\tslot\t-8\tundefined8:8\n'
                                      'V\tdRam0000000000001000\t1000\t8\n'
                                      'M\t_\t1000\t8:undefined8:8\n'
                                      'V\tdRam0000000000001008\t1008\t8\tdouble:8\n')
        (notes / '4000.c').write_text('''
uint64_t recovered_4000(uint64_t value)
{
  undefined1 auStack_20[7];
  undefined1 neighbor;
 _auStack_20=value;
 return (uint64_t)auStack_20[0]|((uint64_t)neighbor<<56);
}
''')
        (notes / '4000.tsv').write_text('L\tauStack_20\t-32\tA:7:undefined1:1\n'
                                      'L\tneighbor\t-25\tundefined1:1\n'
                                      'S\tstack\t-32\t8\n')
        layout = root / 'layout.json'
        layout.write_text(json.dumps({'translation': {
            'pointer_bytes': 8, 'scalar_storage_views': True,
            'state_base': 0x1000, 'state_end': 0x1010,
            'state_anchor': 'pf_module_state',
            'declarations': ['extern unsigned char pf_module_state[];']}}))
        subprocess.run([sys.executable, str(repository / 'tools/ghidra/translate.py'),
                        '--layout', str(layout), '--notes', str(notes),
                        '--manual', str(manual), '--out', str(units)], check=True)
        merge(units, root / 'runtime.c', root / 'functions.h')
        with (root / 'runtime.c').open('a') as stream:
            stream.write('''
unsigned char pf_module_state[16] __attribute__((aligned(16)))={
 0,0,0,0,0,0,0xf8,0x3f,0,0,0,0,0,0,2,0x40};
int main(void) {
 if(recovered_1000(3.5)!=15.75 || recovered_1000(-1.25)!=0.3125)return 1;
 if(recovered_2000(3.5f)!=0x80000001U || recovered_2000(-1.25f)!=0x80000001U)return 2;
 if(recovered_3000(3.5)!=7.25 || recovered_3000(-1.25)!=2.5)return 3;
 if(recovered_4000(0xab000000000000cdULL)!=0xab000000000000cdULL)return 4;
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
