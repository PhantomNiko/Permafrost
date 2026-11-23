#!/usr/bin/env python3
"""Check source SDK runtime allocation through the 1.1 service-table placement.

Pooka's Free Software License.
"""
from pathlib import Path
import struct
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from darwin import link_dynamic_executable
from native import inspect
from dll import DLL


def main():
    for arch in ['i386', 'x86_64', 'armv7', 'arm64']:
        root = Path('build/recovery110/sdk-runtime') / arch
        binary = root / 'runtime-diagnostic'
        link_dynamic_executable([root / (name + '.o') for name in ['runtime', 'state', 'compiler', 'memory', 'cpp']],
                                binary, arch, {}, entry='pf_rt_initialize')
        blob = bytearray(binary.read_bytes());struct.pack_into('<I', blob, 12, 6);binary.write_bytes(blob)
        meta, _ = inspect(blob)
        api = 0x82010800 if arch == 'arm64' else 0x40010800 if arch == 'armv7' else 0x280800
        lib = DLL(binary, api_base=api)
        lib.exports.update({name: lib.base + address - meta['base'] for address, name in meta['symbols']})
        lib.cpu.mem_write(api + 4, struct.pack('<II', 1100000, 608))
        lib.call('_pf_rt_initialize')
        bits = 64 if lib.wide else 32
        for size in [0, 1, 31, 4096]:
            pointer = lib.call('_malloc', size, result_bits=bits)
            assert pointer and pointer in lib.allocs, (arch, size, pointer)
            lib.call('_free', pointer)
            assert pointer not in lib.allocs
        pointer = lib.call('_calloc', 8, 9, result_bits=bits)
        assert pointer and bytes(lib.cpu.mem_read(pointer, 72)) == bytes(72)
        payload = bytes(range(72));lib.cpu.mem_write(pointer, payload)
        grown = lib.call('_realloc', pointer, 144, result_bits=bits)
        assert grown and bytes(lib.cpu.mem_read(grown, 72)) == payload
        lib.call('_free', grown)
        assert not lib.allocs, (arch, 'allocator leak', lib.allocs)
        print(arch + ': source runtime malloc/calloc/realloc/free use the 1.1 API table.')


if __name__ == '__main__':
    main()
