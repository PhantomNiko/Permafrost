#!/usr/bin/env python3
"""Read newly created volumes through the original boot filesystem code.

Pooka's Free Software License. The original Stage3 is a test-only input.
"""
import argparse
from pathlib import Path
import struct
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from pfs import build, Node, Image, BLOCK_SIZE, END
from pfs_records import exercise
from native_boot import BootX64
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RAX


def main(stage3):
    payload = bytes(range(256)) * 1100
    nodes = {f'Many/file-{index:03}.txt': b'' for index in range(300)}
    nodes.update({'Kernel/Test.kernel': payload, 'Empty': Node(2),
                  'Unicode/雪.txt': b'snow', 'Applications': Node(6, b'Home/Applications'),
                  'Config/startup.command': Node(data=b'\\Applications\\Tundra.app', flags=1)})
    raw = build(nodes, spare_blocks=24)
    image = Image(raw)
    assert raw == build(dict(reversed(list(nodes.items()))), spare_blocks=24)
    assert image.files()['Kernel/Test.kernel'] == payload
    assert Image(raw, image.total * BLOCK_SIZE).files() == image.files()
    entries = dict(image.entries())
    assert entries['Applications'].kind == 6
    assert image.read(entries['Applications'].first, entries['Applications'].size) == b'Home/Applications'
    assert entries['Many/file-000.txt'].first == END
    assert len(image.extents(entries['Many'].first)) == 1
    assert image.extents(entries['Many'].first)[0][2] == 2
    for invalid in [{'a/../b': b''}, {'a': b'', 'a/b': b''}, {'a': Node(2, b'bad')}]:
        try:
            build(invalid)
        except ValueError:
            pass
        else:
            raise AssertionError('accepted invalid input tree')
    with tempfile.TemporaryDirectory(prefix='permafrost-pfs-') as folder:
        path = Path(folder) / 'volume.img'
        path.write_bytes(raw)
        exercise(stage3, path)

    native = BootX64(stage3)
    cpu = native.cpu
    callback, reader, work, result, name = 0x10000, 0x20000, 0x21000, 0x22000, 0x23000
    buffer, extents, ancestry = 0x300000, 0x320000, 0x330000
    cpu.mem_write(callback, b'\xc3')
    reads = set()
    def read_block(cpu, address, size, unused):
        block = cpu.reg_read(UC_X86_REG_RSI)
        destination = cpu.reg_read(UC_X86_REG_RDX)
        assert block < image.total, block
        reads.add(block)
        cpu.mem_write(destination, image.block(block))
        cpu.reg_write(UC_X86_REG_RAX, 0)
    cpu.hook_add(UC_HOOK_CODE, read_block, begin=callback, end=callback)
    cpu.mem_write(reader, struct.pack('<8Q', 0, callback, image.total, image.table_first,
                                     image.table_count, image.root, 0, 0))
    cpu.mem_write(work, struct.pack('<5Q', buffer, extents, 64, ancestry, 64))
    for number in range(image.total):
        assert native.call('_pfs_reader_read_allocation_entry', reader, number, buffer, result, result_bits=32) == 0
        assert struct.unpack('<QQ', cpu.mem_read(result, 16)) == image.allocation(number)
    samples = ['Applications', 'Empty', 'Kernel/Test.kernel', 'Unicode/雪.txt',
               'Config/startup.command', 'Many', 'Many/file-000.txt',
               'Many/file-254.txt', 'Many/file-255.txt', 'Many/file-256.txt',
               'Many/file-299.txt']
    for path in samples:
        entry = entries[path]
        encoded = ('\\' + path.replace('/', '\\')).encode()
        cpu.mem_write(name, encoded)
        assert native.call('_pfs_reader_lookup_path', reader, name, len(encoded), work, result,
                           result_bits=32) == 0, path
        decoded = bytes(cpu.mem_read(result, 0x130))
        assert decoded[0] == entry.kind
        assert struct.unpack_from('<QQ', decoded, 8) == (entry.first, entry.size)
        if entry.first != END:
            assert native.call('_pfs_reader_collect_directory_extents', reader, entry.first, work, result,
                               result_bits=32) == 0, path
            count = struct.unpack('<Q', cpu.mem_read(result, 8))[0]
            actual = [struct.unpack('<3Q', cpu.mem_read(extents + index * 24, 24)) for index in range(count)]
            assert actual == image.extents(entry.first), (path, actual, image.extents(entry.first))
    assert set(range(1, image.table_count + 1)).issubset(reads)
    print('Source-built PolynyaFS: native allocation reads, nested/Unicode lookups, mount links, empty files and multi-block extents agree.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('stage3', type=Path)
    main(parser.parse_args().stage3)
