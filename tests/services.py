#!/usr/bin/env python3
"""Exercise public SDK allocation, filesystem and PNG services on test disks."""
import argparse
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, repack_image


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('images', type=Path, nargs='+')
    for name in ('bochs', 'bios', 'vgabios'):
        parser.add_argument('--' + name, type=Path, required=True)
    args = parser.parse_args()
    with tempfile.TemporaryDirectory(prefix='permafrost-services-') as temp:
        root = Path(temp)
        program = root / 'services.bin'
        subprocess.run(['build/Permafrost0.8.sdk/bin/pf-cc', 'tests/services.c',
                        '--format', 'flat', '--base', '0x240000', '-o', str(program)], check=True)
        module = root / 'native-module.bin'
        subprocess.run(['build/Permafrost0.8.sdk/bin/pf-cc', 'sdk/examples/native-module.c',
                        '--format', 'flat', '--base', '0x260000', '-o', str(module)], check=True)
        script = root / 'startup.ws'
        script.write_text('assert(runcode("/native-module.bin",$260000)==1)\n'
                          'assert(nativeExample["add"](17,25)==42)\n'
                          'ok,message=pcall(nativeExample["add"],"bad",1)\nassert(not ok)\n'
                          'assert(runcode("/services.bin",$240000)==1)\n')
        for path in args.images:
            raw = path.read_bytes()
            files = Image(raw, 2).files()
            files['services.bin'] = program.read_bytes()
            files['native-module.bin'] = module.read_bytes()
            image = root / 'disk.img'
            image.write_bytes(repack_image(raw, files, partition=2, sectors=max(81920, len(raw) // 512)))
            command = [sys.executable, str(Path(__file__).with_name('hardware.py')), str(image),
                       '--script', str(script), '--expect', 'PF-SERVICES-PASS', '--timeout', '45']
            for name in ('bochs', 'bios', 'vgabios'):
                command += ['--' + name, str(getattr(args, name))]
            result = subprocess.run(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
            if result.returncode:
                raise SystemExit(result.stdout)
            print(path.name + ': public allocation, file, PNG and failure-status checks passed.')


if __name__ == '__main__':
    main()
