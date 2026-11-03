#!/usr/bin/env python3
"""Run the recovered Binary Writer application and verify the saved executable."""
import argparse
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, make_image
from boot import Machine


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('images', nargs='+', type=Path)
    args = parser.parse_args()
    commands = ('$B8\n42\n0\n0\n0\n$C3\nEND\nwriter.bin\n'
                'serial(runcode("/writer.bin", $200000))\nserial("PF-WRITER-DONE")\n')
    for path in args.images:
        raw = path.read_bytes()
        files = Image(raw).files()
        files['startup.ws'] = Path('assets/BinaryWriter.ws').read_bytes()
        raw = make_image(raw[:512], raw[512:65*512], files, len(raw)//512)
        machine = Machine(raw, commands)
        output = machine.run(500000000).replace('\r', '')
        print(output)
        result = Image(bytes(machine.disk)).files().get('writer.bin')
        if result != bytes.fromhex('b82a000000c3') or '\nPF-WRITER-DONE\n' not in output:
            raise SystemExit('Binary Writer application did not complete correctly')
        if 'WinterScript error:' in output or '\n42\n' not in output:
            raise SystemExit('generated executable did not return the expected result')
    print('Recovered Binary Writer saved and executed the expected native program.')


if __name__ == '__main__':
    main()
