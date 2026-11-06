#!/usr/bin/env python3
"""Compare sector-write and flush packets with the native x64 kernel.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RDI


def transfer(binary, addresses, extended=False):
    kernel = Kernel(binary, addresses)
    bridge_address = 0x100120000 if extended else 0x120000
    if extended:
        kernel.cpu.mem_map(0x100120000, 0x1000)
    context = bytearray(0x1ac0)
    fields = {0: 0x33454657, 4: 4, 8: len(context), 0x28: 1000,
              0x48: 2048, 0x114: 0x120000, 0x118: 0x102000}
    for offset, value in fields.items():
        struct.pack_into('<I', context, offset, value)
    if extended:
        struct.pack_into('<IIQ', context, 0x1ab0, 0x34424650, 1, bridge_address)
    kernel.cpu.mem_write(0x100000, bytes(context))
    kernel.cpu.mem_write(bridge_address, b'\xc3')
    requests = []

    def bridge(cpu, pc, size, user):
        address = cpu.reg_read(UC_X86_REG_RDI)
        assert address == 0x102000, 'firmware callback lost its request argument'
        words = struct.unpack('<7I', bytes(cpu.mem_read(address, 28)))
        payload = bytes(cpu.mem_read(words[4], words[5])) if words[0] == 3 else b''
        requests.append((words, payload))
        cpu.mem_write(address + 4, struct.pack('<I', 1))
        cpu.reg_write(kernel.result, 1)

    kernel.cpu.hook_add(UC_HOOK_CODE, bridge, begin=bridge_address, end=bridge_address)
    kernel.call('_wm_platform_set_loader_context', 0x100000)
    payload = bytes(range(256)) * 2
    kernel.cpu.mem_write(0x160000, payload)
    assert kernel.call('_wm_platform_write_drive_bytes', 0x80, 3, 0x160000, 512)
    assert [request[0][0] for request in requests] == [3, 5]
    assert requests[0][1] == payload
    return requests


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ('reference', 'kernel', 'abi', 'map'):
        parser.add_argument('--' + name, type=Path, required=True)
    args = parser.parse_args()
    raw = args.reference.read_bytes()
    metadata, _ = inspect(raw)
    native = {name: address for address, name in metadata['symbols']}
    symbols = json.loads(args.map.read_text())
    entries = json.loads(args.abi.read_text())
    source = {row['original']: symbols.get(row['symbol'], symbols.get('_' + row['symbol']))
              for row in entries.values()}
    expected = transfer(raw, native)
    assert transfer(args.kernel.read_bytes(), source) == expected
    assert transfer(args.kernel.read_bytes(), source, extended=True) == expected
    print('x64 storage: native/source write bytes, flush packets and full-width callback passed.')


if __name__ == '__main__':
    main()
