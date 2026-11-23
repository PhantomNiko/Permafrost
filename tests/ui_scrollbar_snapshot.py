#!/usr/bin/env python3
"""Compare TerrorUI 1.1 scrollbar pixel snapshots with the native library.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from dll import DLL


def exercise(path, api_base):
    lib = DLL(path, api_base=api_base, poison_stack=True)
    cpu = lib.cpu
    pointer = '<Q' if lib.wide else '<I'
    word = 8 if lib.wide else 4
    snapshot_size = 48 if lib.wide else 40
    window, snapshot, pixels = 0x3000000, 0x3010000, 0x3020000
    width, height, stride = 31, 23, 136
    original = bytes((i * 73 + i // 11) & 255 for i in range(stride * height))
    state = bytearray(1024)
    struct.pack_into('<4I', state, 0, 17, width, height, stride)
    struct.pack_into(pointer, state, 48 if lib.wide else 44, pixels)
    cpu.mem_write(window, bytes(state))
    cpu.mem_write(snapshot - 16, b'\xa5' * (snapshot_size + 32))
    cpu.mem_write(snapshot, bytes(snapshot_size))
    results = []
    for rect in [(2, 3, 9, 7), (4, 5, 9, 7), (1, 1, 3, 2),
                 (-1, 0, 2, 2), (0, 0, 0, 2), (30, 22, 2, 2),
                 (0, 0, width, height)]:
        cpu.mem_write(pixels, original)
        arguments = (list(struct.unpack('<2Q', struct.pack('<4i', *rect)))
                     if lib.wide else [v & 0xffffffff for v in rect])
        captured = lib.call('_terror_ui_scrollbar_capture', snapshot, window, *arguments)
        x, y, w, h = rect
        valid = x >= 0 and y >= 0 and w > 0 and h > 0 and x + w <= width and y + h <= height
        assert bool(captured) == valid
        raw = bytes(cpu.mem_read(snapshot, snapshot_size))
        backing = int.from_bytes(raw[:word], 'little')
        size = int.from_bytes(raw[word:2 * word], 'little')
        data = bytes(cpu.mem_read(backing, size)) if backing and size else b''
        if valid:
            expected = b''.join(original[row * stride + x * 4:row * stride + (x + w) * 4]
                                for row in range(y, y + h))
            assert size == w * h * 4 and data == expected
        # Allocation addresses belong to each emulator, not the contract.
        results.append((captured, bytes(word) + raw[word:], data))
        cpu.mem_write(pixels, b'\x5a' * len(original))
        restored = lib.call('_terror_ui_scrollbar_restore', snapshot, window)
        assert bool(restored) == valid
        expected_pixels = bytearray(b'\x5a' * len(original))
        if valid:
            for row in range(y, y + h):
                start, end = row * stride + x * 4, row * stride + (x + w) * 4
                expected_pixels[start:end] = original[start:end]
        assert bytes(cpu.mem_read(pixels, len(original))) == expected_pixels
        results.append((restored, bytes(cpu.mem_read(pixels, len(original)))))
        assert bytes(cpu.mem_read(snapshot - 16, 16)) == b'\xa5' * 16
        assert bytes(cpu.mem_read(snapshot + snapshot_size, 16)) == b'\xa5' * 16
    lib.call('_terror_ui_scrollbar_release', snapshot)
    results.append(bytes(cpu.mem_read(snapshot, snapshot_size)))
    assert not lib.allocs, 'snapshot backing buffer leaked'
    return results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--api-base', type=lambda value: int(value, 0))
    args = parser.parse_args()
    native = exercise(args.reference, args.api_base)
    actual = exercise(args.source, args.api_base)
    for index, (expected, result) in enumerate(zip(native, actual)):
        assert expected == result, ('scrollbar snapshot mismatch', index)
    assert native == actual
    print('TerrorUI snapshots: seven guarded capture/restore cases and release match.')


if __name__ == '__main__':
    main()
