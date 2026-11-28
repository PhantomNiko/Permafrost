#!/usr/bin/env python3
"""Compare PFZ1 commands against native code with controlled file services.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from unicorn import UC_HOOK_CODE
from lua_command_fixture_110 import run_command
from pfz import unpack


class Filesystem:
    def __init__(self, files):
        self.files = dict(files)
        self.calls = []
        self.directories = set()
        self.cursor = 0x3400000

    def setup(self, lib, args, text, events):
        cpu = lib.cpu
        def current(c, a, n, u):
            c.reg_write(lib.result, 0)
        def filesystem(c, a, n, u):
            device, record = args(2)
            assert device == 0
            c.mem_write(record, bytes(8) + struct.pack('<I', 1) + bytes(128))
            c.reg_write(lib.result, 1)
        def info(c, a, n, u):
            device, path, record = args(3)
            path = text(path).decode()
            assert device == 0
            self.calls.append(('info', path))
            payload = self.files.get(path)
            if path in self.directories:
                c.mem_write(record, struct.pack('<III', 0, 0, 2))
                c.reg_write(lib.result, 1)
                return
            if payload is not None:
                pointer = self.cursor
                self.cursor += (len(payload) + 4095) // 4096 * 4096 + 4096
                c.mem_write(pointer, payload or b'\0')
                if a == 0x24300:
                    lib.allocs[pointer] = len(payload)
                c.mem_write(record, struct.pack('<III', pointer, len(payload), 0))
            c.reg_write(lib.result, int(payload is not None))
        def write(c, a, n, u):
            device, path, pointer, size = args(4)
            path = text(path).decode()
            assert device == 0 and size < 0x100000
            self.calls.append(('write', path))
            self.files[path] = bytes(c.mem_read(pointer, size))
            c.reg_write(lib.result, 1)
        def mkdir(c, a, n, u):
            device, path = args(2)
            path = text(path).decode()
            assert device == 0
            self.calls.append(('mkdir', path))
            self.directories.add(path)
            c.reg_write(lib.result, 1)
        services = [(0xbc, current), (0x110, filesystem), (0x218, info),
                    (0x21c, info), (0xd0, write), (0xdc, mkdir)]
        opcode = b'\xc3' if lib.cpu_type in [7, 0x1000007] else struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0)
        for table in lib.api_tables:
            cpu.mem_write(table + 8, struct.pack('<I', 0x224))
        for index, (slot, callback) in enumerate(services):
            target = 0x24000 + 0x100 * index
            cpu.mem_write(target, opcode)
            cpu.hook_add(UC_HOOK_CODE, callback, begin=target, end=target)
            for table in lib.api_tables:
                cpu.mem_write(table + slot, struct.pack('<I', target))


def execute(reference, source, output, which, files, arguments):
    fs = Filesystem(files)
    try:
        result = run_command(reference, source, None, which, output, arguments,
                             command='pfz1', raw_console=True, kernel_setup=fs.setup)
    except Exception as error:
        raise AssertionError(('source' if which else 'native', fs.calls)) from error
    return result, fs.files, fs.calls


def exercise(reference, source, output):
    cases = [b'', b'A', b'abc' * 100, bytes(range(256)) * 8, b'A' * 5000]
    for data in cases:
        argv = ['Input=input', 'Output=archive.picozip', 'Operation=Compress']
        results = [execute(reference, source, output, which, {'\\input': data}, argv)
                   for which in [0, 1]]
        assert results[0] == results[1], ('compression differs', len(data), results)
        assert results[0][0][0] == 0, results[0]
        archive = results[0][1]['\\archive.picozip']
        assert unpack(archive).startswith(b'PZA1')
        argv = ['Input=archive.picozip', 'Output=destination', 'Operation=Extract']
        results = [execute(reference, source, output, which, {'\\archive.picozip': archive}, argv)
                   for which in [0, 1]]
        assert results[0] == results[1], ('extraction differs', len(data), results)
        assert results[0][0][0] == 0, results[0]
        assert results[0][1]['\\destination\\input'] == data
        print('PFZ1 command file round trip passed:', len(data), flush=True)
    compress = ['Input=input', 'Output=archive.picozip', 'Operation=Compress']
    extract = ['Input=archive.picozip', 'Output=destination', 'Operation=Extract']
    checksum = bytearray(archive)
    checksum[12] ^= 1
    failures = [({}, compress), ({'\\input': b'A', '\\archive.picozip': b'existing'}, compress),
                ({'\\archive.picozip': archive, '\\destination\\input': b'existing'}, extract)]
    failures += [({'\\archive.picozip': payload}, extract)
                 for payload in [b'', b'BAD!' + archive[4:], bytes(checksum), archive[:-1]]]
    for files, arguments in failures:
        results = [execute(reference, source, output, which, files, arguments)
                   for which in [0, 1]]
        assert results[0] == results[1], ('file failure differs', arguments, results)
        assert results[0][0][0] == 1, results[0]
        assert results[0][1] == files, ('failed operation changed files', results[0])
    print('PFZ1: ten native/source archive creation/extraction and seven guarded file/format rejection workflows passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output)
