#!/usr/bin/env python3
"""Verify first-boot setup, a persistent second boot, and recovery fallback."""
import argparse
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, repack_image
from boot import Machine


def boot(raw):
    machine = Machine(raw, 'serial("PF-LIFECYCLE-PASS")\n')
    output = machine.run(300000000).replace('\r', '')
    if '\nPF-LIFECYCLE-PASS\n' not in output or not machine.idle:
        print(output)
        raise SystemExit('lifecycle boot did not reach the shell')
    return machine, output


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    args = parser.parse_args()
    raw = args.image.read_bytes()
    first, _ = boot(raw)
    firmware = Image(bytes(first.disk)).files()
    startup = firmware.get('startup.ws', b'')
    if b'expand-disk.bin' in firmware or b'pcall(device,"mount",4,"WMFS64")' not in startup:
        raise SystemExit('first boot did not finish firmware setup')
    second, _ = boot(bytes(first.disk))
    if Image(bytes(second.disk), 2).files() != Image(bytes(first.disk), 2).files():
        raise SystemExit('second boot changed user files unexpectedly')
    damaged = Image(raw).files()
    kernel_name = next(name for name, data in damaged.items() if data[:4] == b'WMLP')
    damaged[kernel_name] = b'BAD!' + damaged[kernel_name][4:]
    recovery, output = boot(repack_image(raw, damaged))
    if 'Fallback boot path active.' not in output:
        raise SystemExit('invalid firmware kernel did not trigger recovery')
    print('First-boot setup, persistent reboot and recovery fallback passed.')


if __name__ == '__main__':
    main()
