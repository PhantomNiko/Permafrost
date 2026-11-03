#!/usr/bin/env python3
"""Verify first-boot setup, a persistent second boot, and recovery fallback."""
import argparse
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, repack_image
from boot import Machine


def boot(raw, commands='serial("PF-LIFECYCLE-PASS")\n'):
    machine = Machine(raw, commands)
    output = machine.run(300000000).replace('\r', '')
    if '\nPF-LIFECYCLE-PASS\n' not in output or not machine.idle or 'WinterScript error:' in output:
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
    if b'"FAT32"' not in startup or firmware != Image(raw).files():
        raise SystemExit('first boot did not preserve FAT32 automount firmware')
    second, _ = boot(bytes(first.disk))
    if Image(bytes(second.disk), 2).files() != Image(bytes(first.disk), 2).files():
        raise SystemExit('second boot changed user files unexpectedly')
    # Grow the chained root beyond its original capacity, then inspect the disk
    # independently and boot it again without repeating the writes.
    persisted = bytes(second.disk)
    original_firmware = Image(persisted).files()
    growth = dict(original_firmware)
    growth['startup.ws'] += b'\nfor i = 1, 24\nassert(write("/pf-persist-" + toString(i), "snow-" + toString(i)))\nend\n'
    grown, _ = boot(repack_image(persisted, growth))
    on_disk = Image(bytes(grown.disk), 2).files()
    for i in range(1, 25):
        if on_disk.get('pf-persist-' + str(i)) != ('snow-' + str(i)).encode():
            raise SystemExit('independent reader could not recover the grown root')
    rebooted, _ = boot(repack_image(bytes(grown.disk), original_firmware),
        'assert(read("/pf-persist-24") == "snow-24")\nserial("PF-LIFECYCLE-PASS")\n')
    if Image(bytes(rebooted.disk), 2).files() != on_disk:
        raise SystemExit('grown FAT32 files changed after reboot')
    damaged = Image(raw).files()
    for name,data in list(damaged.items()):
        if data[:4]==b'WMLP':damaged[name]=b'BAD!'+data[4:]
    recovery, output = boot(repack_image(raw, damaged))
    if 'Fallback boot path active.' not in output:
        raise SystemExit('invalid firmware kernel did not trigger recovery')
    print('First-boot setup, persistent FAT32 root growth, reboot and recovery fallback passed.')


if __name__ == '__main__':
    main()
