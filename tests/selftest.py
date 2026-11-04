#!/usr/bin/env python3
"""Run the bundled language self-test on temporary guest disk copies.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import re
import subprocess
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('images', type=Path, nargs='+')
    for name in ('bochs', 'bios', 'vgabios'):
        parser.add_argument('--' + name, type=Path, required=True)
    args = parser.parse_args()
    for path in args.images:
        raw = path.read_bytes()
        text = Image(raw, 2).files()['winterscript-selftest.ws'].decode()
        marker = 'print("WinterScript self-test: PASS")'
        if text.count(marker) != 1:
            raise SystemExit('Bundled self-test completion marker changed')
        text = text.replace(marker, 'serial("PF-SELFTEST-PASS")')
        with tempfile.TemporaryDirectory(prefix='permafrost-selftest-') as temp:
            script = Path(temp) / 'selftest.ws'
            script.write_text(text)
            command = [sys.executable, str(Path(__file__).with_name('hardware.py')),
                       str(path), '--script', str(script), '--expect',
                       'PF-SELFTEST-PASS', '--timeout', '60']
            for name in ('bochs', 'bios', 'vgabios'):
                command += ['--' + name, str(getattr(args, name))]
            if any(data[:4] == b'WMLP' and data[16] == 0xfc
                   for data in Image(raw).files().values()):
                command.append('--initialize-fpu')
            result = subprocess.run(command, stdout=subprocess.PIPE,
                                    stderr=subprocess.STDOUT, text=True)
            if result.returncode:
                raise SystemExit(result.stdout)
            if not re.search(r'^CPU [\x20-\x7e]+\r?$', result.stdout, re.M):
                raise SystemExit('CPU description is missing or corrupted')
            print(path.name + ': bundled WinterScript self-test and CPU description pass.')


if __name__ == '__main__':
    main()
