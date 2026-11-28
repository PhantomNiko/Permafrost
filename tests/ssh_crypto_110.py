#!/usr/bin/env python3
"""Compare SSH native cryptographic and packet checksum routines with C source.

Pooka's Free Software License.
"""
import argparse
import hashlib
import hmac
from pathlib import Path
import random
import struct
from pfz1_command_codec_110 import loaded
from fontgen_core_110 import guard, guarded
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_EDX


def chacha(key, counter, nonce):
    words = list(struct.unpack('<4I', b'expand 32-byte k') + struct.unpack('<8I', key) +
                 struct.unpack('<2I', struct.pack('<Q', counter)) + struct.unpack('<2I', nonce))
    result = list(words)
    def quarter(a, b, c, d):
        for x, y, z, shift in [(a, b, d, 16), (c, d, b, 12), (a, b, d, 8), (c, d, b, 7)]:
            result[x] = (result[x] + result[y]) & 0xffffffff
            value = result[z] ^ result[x]
            result[z] = ((value << shift) | (value >> (32 - shift))) & 0xffffffff
    for _ in range(10):
        for indices in [(0, 4, 8, 12), (1, 5, 9, 13), (2, 6, 10, 14), (3, 7, 11, 15),
                        (0, 5, 10, 15), (1, 6, 11, 12), (2, 7, 8, 13), (3, 4, 9, 14)]:
            quarter(*indices)
    return struct.pack('<16I', *((a + b) & 0xffffffff for a, b in zip(words, result)))


def checksum(data):
    data += bytes(len(data) & 1)
    value = sum(struct.unpack('>' + 'H' * (len(data) // 2), data))
    while value > 0xffff:
        value = (value & 0xffff) + (value >> 16)
    return ~value & 0xffff


def invoke(lib, name, *arguments, **options):
    if lib.cpu_type == 7 and lib.ssh_native:
        lib.cpu.reg_write(UC_X86_REG_ECX, arguments[0])
        lib.cpu.reg_write(UC_X86_REG_EDX, arguments[1])
        return lib.call(name, *arguments[2:], **options)
    return lib.call(name, *arguments, **options)


def exercise(reference, source, output):
    libs = [loaded(reference, source, output, which) for which in [0, 1]]
    for index, lib in enumerate(libs):lib.ssh_native = index == 0
    rng = random.Random(110)
    checks = 0
    for key_size, message_size in [(0, 0), (1, 1), (16, 55), (32, 64), (64, 128),
                                    (65, 129), (128, 255), (129, 256), (200, 1024)]:
        key = bytes(rng.randrange(256) for _ in range(key_size))
        message = bytes(rng.randrange(256) for _ in range(message_size))
        prefix = struct.pack('>I', message_size)
        for algorithm, size in [('sha256', 32), ('sha512', 64)]:
            results = []
            for lib in libs:
                key_ptr = guard(lib, 0x3100000, len(key))
                if key:lib.cpu.mem_write(key_ptr, key)
                prefix_ptr = guard(lib, 0x3110000, 4)
                lib.cpu.mem_write(prefix_ptr, prefix)
                data_ptr = guard(lib, 0x3120000, len(message))
                if message:lib.cpu.mem_write(data_ptr, message)
                target = guard(lib, 0x3130000, size)
                invoke(lib, '_ssh_hmac_' + algorithm, key_ptr, len(key), prefix_ptr,
                         data_ptr, len(message), target)
                assert guarded(lib, key_ptr, len(key)) == key
                assert guarded(lib, prefix_ptr, 4) == prefix
                assert guarded(lib, data_ptr, len(message)) == message
                results.append(guarded(lib, target, size))
            expected = hmac.new(key, prefix + message, getattr(hashlib, algorithm)).digest()
            assert results[0] == expected, ('native HMAC', algorithm, key_size, message_size)
            assert results[1] == expected, ('source HMAC', algorithm, key_size, message_size, results)
            checks += 1
    for counter in [0, 1, 0xffffffff, 0x100000000, 0xffffffffffffffff]:
        key = bytes(rng.randrange(256) for _ in range(32))
        nonce = bytes(rng.randrange(256) for _ in range(8))
        results = []
        for lib in libs:
            key_ptr = guard(lib, 0x3100000, 32)
            lib.cpu.mem_write(key_ptr, key)
            nonce_ptr = guard(lib, 0x3110000, 8)
            lib.cpu.mem_write(nonce_ptr, nonce)
            target = guard(lib, 0x3120000, 64)
            if lib.cpu_type in [7, 12]:
                invoke(lib, '_ssh_chacha20_block', key_ptr, counter & 0xffffffff, counter >> 32, nonce_ptr, target)
            else:
                invoke(lib, '_ssh_chacha20_block', key_ptr, counter, nonce_ptr, target)
            assert guarded(lib, key_ptr, 32) == key
            assert guarded(lib, nonce_ptr, 8) == nonce
            results.append(guarded(lib, target, 64))
        assert results[0] == chacha(key, counter, nonce), ('native ChaCha', counter)
        assert results[0] == results[1], ('source ChaCha', counter, results)
        checks += 1
    for count in [0, 1, 2, 3, 7, 8, 19, 20, 63, 64, 255, 256, 1023]:
        data = bytes(rng.randrange(256) for _ in range(count))
        results = []
        for lib in libs:
            pointer = guard(lib, 0x3100000, count)
            if data:lib.cpu.mem_write(pointer, data)
            results.append(invoke(lib, '_ssh_checksum', pointer, count, result_bits=32))
            assert guarded(lib, pointer, count) == data
        assert results == [checksum(data)] * 2, ('packet checksum', count, results)
        checks += 1
    base = bytes([9]) + bytes(31)
    curves = [(scalar, base) for scalar in [bytes(32), bytes(range(32)), bytes(rng.randrange(256) for _ in range(32))]]
    curves += [(bytes(rng.randrange(256) for _ in range(32)), point) for point in [bytes(32), bytes(rng.randrange(256) for _ in range(32)), ((1 << 255) - 10).to_bytes(32, 'little')]]
    for scalar, public in curves:
        results = []
        for lib in libs:
            lib.instruction_limit = 200000000
            key = guard(lib, 0x3100000, 32)
            lib.cpu.mem_write(key, scalar)
            point = guard(lib, 0x3110000, 32)
            lib.cpu.mem_write(point, public)
            target = guard(lib, 0x3120000, 32)
            invoke(lib, '_ssh_x25519', target, key, point)
            assert guarded(lib, key, 32) == scalar
            assert guarded(lib, point, 32) == public
            results.append(guarded(lib, target, 32))
        assert results[0] == results[1], ('X25519 key exchange', results)
        checks += 1
    print('SSH: %d guarded HMAC, ChaCha20, X25519 and network checksum comparisons passed.' % checks)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output)
