#!/usr/bin/env python3
"""Execute the same script and WSBC buffer commands on two kernel images."""
import argparse
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, repack_image
from boot import Machine


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('baseline', type=Path)
    parser.add_argument('candidate', type=Path)
    parser.add_argument('--variant', choices=['i386','IA64'], default='i386')
    args = parser.parse_args()
    results = []
    commands = ('NEW\n> serial("PF-BYTECODE")\nSAVEBC /test.wsbc\nNEW\n'
                'RUNBC /test.wsbc\nNEW\n> function twice(x)\n> return x * 2\n> end\n'
                '> serial("PF-BYTECODE6-" + toString(twice(21)))\nSAVEBC /test6.wsbc\nNEW\n'
                'RUNBC /test6.wsbc\nserial("PF-CONFORMANCE-DONE")\n')
    for path in (args.baseline, args.candidate):
        image = path.read_bytes()
        partition = 2 if Image(image).partitions else 0
        files = Image(image, partition).files()
        files['startup.ws'] = Path('tests/conformance.ws').read_bytes()
        files['hello.bin'] = Path('build',args.variant,'hello.bin').read_bytes()
        image = repack_image(image, files, partition, sectors=16384)
        if partition:
            firmware = Image(image).files()
            firmware['startup.ws'] = b'device("mount",4,"WMFS64")\ndevice("target",4)\n' + Path('tests/conformance.ws').read_bytes()
            image = repack_image(image, firmware, sectors=16384)
        machine = Machine(image, commands)
        output = machine.run(500000000).replace('\r', '')
        print(output)
        if '\nPF-CASES-END\n' not in output or '\nPF-BYTECODE\n' not in output or '\nPF-BYTECODE6-42\n' not in output or not machine.idle:
            raise SystemExit('conformance program did not finish')
        if 'WinterScript error:' in output or 'ERROR:' in output:
            raise SystemExit('conformance program reported an error')
        result = output[output.index('PF-CASES-BEGIN'):]
        results.append(result)
    if results[0] != results[1]:
        import difflib
        print(''.join(difflib.unified_diff(results[0].splitlines(True), results[1].splitlines(True),
                                         fromfile='baseline', tofile='candidate')))
        raise SystemExit('observable script behavior differs')
    print('Script, filesystem, native ABI, and WSBC behavior matches the baseline.')


if __name__ == '__main__':
    main()
