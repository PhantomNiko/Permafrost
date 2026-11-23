#!/usr/bin/env python3
"""Compare native scrollbar pixels, clipping, padding and guards on TerrorUI 1.1.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from dll import DLL


def exercise(path, api_base):
    lib = DLL(path, api_base=api_base, poison_stack=True)
    cpu = lib.cpu
    window, model, layout, pixels = 0x3000000, 0x3010000, 0x3020000, 0x3030000
    width, height, stride = 96, 80, 400
    state = bytearray(1024)
    struct.pack_into('<5I', state, 0, 17, width, height, stride, 0x112233)
    struct.pack_into('<Q' if lib.wide else '<I', state, 48 if lib.wide else 44, pixels)
    cpu.mem_write(window, bytes(state))
    outputs = []
    for rect in [(0, 0, 96, 80), (-7, 12, 31, 32), (80, 70, 40, 32), (4, 9, 0, -2)]:
        for value in [0, 25, 100]:
            cpu.mem_write(model, struct.pack('<4i', 0, 100, value, 10))
            args = (list(struct.unpack('<2Q', struct.pack('<4i', *rect))) if lib.wide
                    else [v & 0xffffffff for v in rect])
            lib.call('_terror_ui_scrollbars_layout', *args, model, model, layout)
            for offset in [0, 32, 0xffffffff]:
                cpu.mem_write(pixels - 16, b'\xa5' * 16 + b'\x2a' * (stride * height) + b'\xa5' * 16)
                for at in [layout + 20, layout + 104]:
                    lib.call('_terror_ui_scrollbar_draw', window, at, offset)
                data = bytes(cpu.mem_read(pixels - 16, stride * height + 32))
                assert data[:16] == data[-16:] == b'\xa5' * 16
                assert all(data[16 + row * stride + width * 4:16 + (row + 1) * stride] ==
                           b'\x2a' * (stride - width * 4) for row in range(height))
                outputs.append(data)
    return outputs


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--api-base', type=lambda s: int(s, 0), required=True)
    args = parser.parse_args()
    native, actual = exercise(args.reference, args.api_base), exercise(args.source, args.api_base)
    assert native == actual, [i for i, (a, b) in enumerate(zip(native, actual)) if a != b]
    print('TerrorUI: 36 native scrollbar rasters, clipping, row padding and guards match.')
