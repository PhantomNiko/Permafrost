#!/usr/bin/env python3
"""Run source WinterLua arithmetic through the BIOS prompt under full Bochs."""
import argparse
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, repack_image


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    parser.add_argument('--application', type=Path)
    for name in ('bochs', 'bios', 'vgabios'):
        parser.add_argument('--' + name, type=Path, required=True)
    args = parser.parse_args()
    with tempfile.TemporaryDirectory(prefix='permafrost-lua-') as temp:
        root = Path(temp)
        raw = args.image.read_bytes()
        queue_source='tests/keyqueue.c'
        queue = root / 'queue.bin'
        subprocess.run(['build/Permafrost0.7.sdk/bin/pf-cc', queue_source,
                        '--format', 'flat', '--base', '0x280000', '-D', 'PF_KEYS="lua\\r"',
                        '-o', str(queue)], check=True, stdout=subprocess.DEVNULL)
        raw = args.image.read_bytes()
        files = Image(raw, 2).files()
        files.update({'queue.bin': queue.read_bytes(), 'index.lua':
                      b'local total=0\nfor i=1,12 do total=total+i end\n'
                      b'assert(total==78)\nassert(2+3*4==14)\nprint("PF-LUA-HARDWARE-PASS")\n'})
        if args.application:
            files['lua'] = args.application.read_bytes()
        image = root / 'disk.img'
        image.write_bytes(repack_image(raw, files, partition=2, sectors=max(81920, len(raw) // 512)))
        script = root / 'startup.ws'
        script.write_text('assert(runcode("/queue.bin",$280000)==1)\n')
        command = [sys.executable, str(Path(__file__).with_name('hardware.py')), str(image),
                   '--script', str(script), '--expect', 'PF-LUA-HARDWARE-PASS', '--timeout', '40']
        for name in ('bochs', 'bios', 'vgabios'):
            command += ['--' + name, str(getattr(args, name))]
        subprocess.run(command, check=True)


if __name__ == '__main__':
    main()
