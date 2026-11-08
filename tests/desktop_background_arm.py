#!/usr/bin/env python3
"""Compare ARM desktop wallpaper scaling with native framebuffer pixels.

Pooka's Free Software License. Native executables are test inputs only.
"""
import argparse
import struct
from pathlib import Path
from desktop_calendar import load
from native import inspect


def exercise(reference, source, library, folder):
    libs = load(reference, source, folder, library)
    original, _ = inspect(reference.read_bytes())
    assert original['cpu'] in (12, 0x100000c)
    wide = original['cpu'] == 0x100000c
    names = {n: a for a, n in original['symbols']}
    metadata, _ = inspect(source.read_bytes())
    symbols = {n: a for a, n in metadata['symbols']+metadata['data_symbols']}
    state = next(a for n, a, z in original['sections'] if n == ('__stubs' if wide else '__stub_helper'))
    for image_width, image_height in [(48, 40), (300, 280), (280, 300), (512, 256)]:
        pixels = bytes(c for y in range(image_height) for x in range(image_width)
                       for c in (x % 251, y % 251, (x+y) % 251, 255))
        frames = []
        for index, lib in enumerate(libs):
            base = lib.base + symbols['_pf_module_state'] if index else 0
            def write(address, value, pointer=False):
                lib.cpu.mem_write(base+address-state if index else lib.base+address, struct.pack('<Q' if pointer and wide else '<I', value))
            if wide:
                write(0x18074, 80)
                write(0x18078, 60)
                write(0x1219d8, 0x280000, True)
                write(0x1219b8, 0x200000, True)
                write(0x1219c4, image_width)
                write(0x1219c8, image_height)
            else:
                write(0x24130, 80)
                write(0x24134, 60)
                write(0x242f8, 0x280000)
                write(0x27610, 0x200000)
                write(0x27614, 0)
                write(0x2761c, image_width)
                write(0x27620, image_height)
            lib.cpu.mem_write(0x200000, pixels)
            lib.cpu.mem_write(0x280000, bytes(80*60*4))
            address = names['_drawDesktopBackground']
            if index: address = symbols['_recovered_%x' % (address+0x10000000)]
            lib.exports['background'] = lib.base+address
            lib.instruction_limit = 100000000
            lib.call('background')
            frames.append(bytes(lib.cpu.mem_read(0x280000, 80*60*4)))
        assert frames[0] == frames[1], ('wallpaper pixels differ', image_width, image_height)
    print('ARM desktop: four native wallpaper scaling comparisons passed, including dimensions above 255.')


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    p.add_argument('--library', type=Path, required=True)
    p.add_argument('--output', type=Path, required=True)
    a = p.parse_args()
    exercise(a.reference, a.source, a.library, a.output)
