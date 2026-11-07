#!/usr/bin/env python3
"""Compare recovered TLS primitives with native code and independent arithmetic.

Pooka's Free Software License.
"""
import argparse
import hashlib
import hmac
from pathlib import Path
import struct
from dll import DLL
from native import inspect
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_EDX


def library(path, reference, api_base=None):
    lib = DLL(path, instruction_limit=20000000, poison_allocations=True, poison_stack=True,api_base=api_base)
    lib.private_fastcall = set()
    symbols = {name: address for address, name in inspect(Path(path).read_bytes())[0]['symbols']}
    for address, name in inspect(Path(reference).read_bytes())[0]['symbols']:
        if name.startswith('_winter_tls_') and name not in lib.exports:
            implementation = name if name in symbols else '_recovered_%x' % (address + 0x10000000)
            if implementation in symbols:
                lib.exports[name] = lib.base + symbols[implementation]
                if lib.cpu_type == 7 and implementation == name:
                    lib.private_fastcall.add(name)
    return lib


def call(lib, name, *arguments):
    if name in lib.private_fastcall:
        for register, value in zip((UC_X86_REG_ECX, UC_X86_REG_EDX), arguments):
            lib.cpu.reg_write(register, value)
        arguments = arguments[2:]
    return lib.call(name, *arguments)


def digest(lib, data, chunk):
    initial = (0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
               0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19)
    context, source, output = 0x3000000, 0x3001000, 0x3002000
    lib.cpu.mem_write(context, struct.pack('<8IQ64sI', *initial, 0, b'\xa5' * 64, 0))
    lib.cpu.mem_write(source, data or b'\0')
    for offset in range(0, len(data), chunk):
        call(lib, '_winter_tls_sha256_update', context, source + offset, min(chunk, len(data) - offset))
    call(lib, '_winter_tls_sha256_final', context, output)
    return bytes(lib.cpu.mem_read(output, 32))


def extract(lib, salt, material):
    if salt is not None:
        lib.cpu.mem_write(0x3000000, salt)
    lib.cpu.mem_write(0x3001000, material)
    call(lib, '_winter_tls_hkdf_extract', 0x3000000 if salt is not None else 0, 0x3001000, 0x3002000)
    return bytes(lib.cpu.mem_read(0x3002000, 32))


def chacha(key, counter, nonce):
    state = list(struct.unpack('<4I', b'expand 32-byte k') + struct.unpack('<8I', key)
                 + (counter,) + struct.unpack('<3I', nonce))
    work = state[:]

    def rotate(value, bits):
        return ((value << bits) | (value >> (32 - bits))) & 0xffffffff

    def quarter(a, b, c, d):
        work[a] = (work[a] + work[b]) & 0xffffffff
        work[d] = rotate(work[d] ^ work[a], 16)
        work[c] = (work[c] + work[d]) & 0xffffffff
        work[b] = rotate(work[b] ^ work[c], 12)
        work[a] = (work[a] + work[b]) & 0xffffffff
        work[d] = rotate(work[d] ^ work[a], 8)
        work[c] = (work[c] + work[d]) & 0xffffffff
        work[b] = rotate(work[b] ^ work[c], 7)

    for _ in range(10):
        for indices in ((0, 4, 8, 12), (1, 5, 9, 13), (2, 6, 10, 14), (3, 7, 11, 15),
                        (0, 5, 10, 15), (1, 6, 11, 12), (2, 7, 8, 13), (3, 4, 9, 14)):
            quarter(*indices)
    return struct.pack('<16I', *((a + b) & 0xffffffff for a, b in zip(work, state)))


def block(lib, key, counter, nonce):
    lib.cpu.mem_write(0x3000000, key)
    lib.cpu.mem_write(0x3001000, nonce)
    call(lib, '_winter_tls_chacha20_block', 0x3000000, counter, 0x3001000, 0x3002000)
    return bytes(lib.cpu.mem_read(0x3002000, 64))


def x25519(scalar, point):
    prime = 2**255 - 19
    scalar = (int.from_bytes(scalar, 'little') & ((1 << 255) - 8)) | (1 << 254)
    x1 = int.from_bytes(point, 'little') & ((1 << 255) - 1)
    x2, z2, x3, z3, swap = 1, 0, x1, 1, 0
    for bit in range(254, -1, -1):
        value = (scalar >> bit) & 1
        swap ^= value
        if swap:
            x2, x3, z2, z3 = x3, x2, z3, z2
        swap = value
        a, b = (x2 + z2) % prime, (x2 - z2) % prime
        aa, bb = a * a % prime, b * b % prime
        e = (aa - bb) % prime
        c, d = (x3 + z3) % prime, (x3 - z3) % prime
        da, cb = d * a % prime, c * b % prime
        x3, z3 = (da + cb)**2 % prime, x1 * (da - cb)**2 % prime
        x2, z2 = aa * bb % prime, e * (aa + 121665 * e) % prime
    if swap:
        x2, x3, z2, z3 = x3, x2, z3, z2
    return (x2 * pow(z2, prime - 2, prime) % prime).to_bytes(32, 'little')


def exchange(lib, scalar, point):
    lib.cpu.mem_write(0x3000000, scalar)
    lib.cpu.mem_write(0x3001000, point)
    call(lib, '_winter_tls_x25519', 0x3002000, 0x3000000, 0x3001000)
    return bytes(lib.cpu.mem_read(0x3002000, 32))


def expand(lib, secret, label, context, count):
    for pointer, data in ((0x3000000, secret), (0x3001000, label + b'\0'), (0x3002000, context or b'\0')):
        lib.cpu.mem_write(pointer, data)
    call(lib, '_winter_tls_hkdf_expand_label', 0x3000000, 0x3001000,
             0x3002000, len(context), 0x3003000, count)
    return bytes(lib.cpu.mem_read(0x3003000, count)) if count else b''


def label_key(secret, label, context, count):
    label = b'tls13 ' + label
    info = count.to_bytes(2, 'big') + bytes([len(label)]) + label + bytes([len(context)]) + context
    output, previous, counter = b'', b'', 1
    while len(output) < count:
        previous = hmac.new(secret, previous + info + bytes([counter]), hashlib.sha256).digest()
        output += previous
        counter += 1
    return output[:count]


def tag(lib, key, nonce, associated, ciphertext):
    for pointer, data in ((0x3000000, key), (0x3001000, nonce),
                          (0x3002000, associated), (0x3003000, ciphertext or b'\0')):
        lib.cpu.mem_write(pointer, data)
    call(lib, '_winter_tls_chacha20_poly1305_tag', 0x3000000, 0x3001000,
             0x3002000, 0x3003000, len(ciphertext), 0x3004000)
    return bytes(lib.cpu.mem_read(0x3004000, 16))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--api-base', type=lambda value:int(value,0))
    args = parser.parse_args()
    native, source = (library(path, args.reference, args.api_base) for path in (args.reference, args.source))
    count = 0
    for size in (0, 1, 3, 55, 56, 63, 64, 65, 128, 255, 1024):
        data = bytes((index * 37 + 11) & 255 for index in range(size))
        for chunk in (1, 7, 64, 101):
            expected = hashlib.sha256(data).digest()
            assert digest(native, data, chunk) == expected, ('native SHA-256', size, chunk)
            assert digest(source, data, chunk) == expected, ('source SHA-256', size, chunk)
            count += 1
    for index in range(4):
        salt = None if index == 0 else hashlib.sha256(bytes([index])).digest()
        material = hashlib.sha256(bytes([index + 10])).digest()
        expected = hmac.new(salt or bytes(32), material, hashlib.sha256).digest()
        assert extract(native, salt, material) == expected, ('native HKDF extract', index)
        assert extract(source, salt, material) == expected, ('source HKDF extract', index)
        key, nonce = material, bytes(range(12))
        expected = chacha(key, index, nonce)
        assert block(native, key, index, nonce) == expected, ('native ChaCha20', index)
        assert block(source, key, index, nonce) == expected, ('source ChaCha20', index)
        point = (9).to_bytes(32, 'little')
        expected = x25519(material, point)
        assert exchange(native, material, point) == expected, ('native X25519', index)
        assert exchange(source, material, point) == expected, ('source X25519', index)
        count += 3
    secret = hashlib.sha256(b'TLS fixture').digest()
    for label, context in ((b'key', b''), (b'iv', b''), (b'derived', hashlib.sha256(b'').digest())):
        for length in (0, 1, 12, 32, 33, 64, 65):
            expected = label_key(secret, label, context, length)
            assert expand(native, secret, label, context, length) == expected, ('native label expansion', label, length)
            assert expand(source, secret, label, context, length) == expected, ('source label expansion', label, length)
            count += 1
    from cryptography.hazmat.primitives.ciphers.aead import ChaCha20Poly1305
    nonce = bytes(range(12))
    for size in (0, 1, 15, 16, 17, 55, 64, 129):
        plaintext = bytes((i * 37 + 11) & 255 for i in range(size))
        associated = b'\x17\x03\x03' + (size + 16).to_bytes(2, 'big')
        encrypted = ChaCha20Poly1305(secret).encrypt(nonce, plaintext, associated)
        expected = encrypted[-16:]
        assert tag(native, secret, nonce, associated, encrypted[:-16]) == expected, ('native authentication tag', size)
        assert tag(source, secret, nonce, associated, encrypted[:-16]) == expected, ('source authentication tag', size)
        count += 1
    print('TLS primitives: %d hash, key derivation, cipher, curve and authentication cases passed.' % count)


if __name__ == '__main__':
    main()
