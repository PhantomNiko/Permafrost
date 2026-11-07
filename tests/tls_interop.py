#!/usr/bin/env python3
"""Exercise the native and recovered TLS client against a TLS 1.3 server in memory.
Requires PyOpenSSL for the independent server implementation.

Pooka's Free Software License.
"""
import argparse
import hashlib
from pathlib import Path
import struct
import subprocess
from OpenSSL import SSL
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn import x86_const as x86, arm_const as arm, arm64_const as arm64


def certificate(root):
    root.mkdir(parents=True, exist_ok=True)
    cert, key = root / 'cert.pem', root / 'key.pem'
    if not cert.exists() or not key.exists():
        subprocess.run(['openssl', 'req', '-x509', '-newkey', 'rsa:2048', '-nodes',
                        '-keyout', str(key), '-out', str(cert), '-days', '1',
                        '-subj', '/CN=permafrost.invalid'], check=True,
                       stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    der = subprocess.check_output(['openssl', 'x509', '-in', str(cert), '-outform', 'DER'])
    return cert, key, hashlib.sha256(der).digest()


class MemoryPeer:
    response = b'HTTP/1.0 200 OK\r\nContent-Length: 4\r\n\r\npong'

    def __init__(self, cert, key):
        context = SSL.Context(SSL.TLS_SERVER_METHOD)
        context.set_min_proto_version(SSL.TLS1_3_VERSION)
        context.set_max_proto_version(SSL.TLS1_3_VERSION)
        context.use_certificate_file(str(cert))
        context.use_privatekey_file(str(key))
        self.server = SSL.Connection(context, None)
        self.server.set_accept_state()
        self.established = False
        self.pending = bytearray()
        self.request = b''
        self.replied = False
        self.failure = None

    def process(self):
        try:
            if not self.established:
                self.server.do_handshake()
                self.established = True
            while True:
                try:
                    data = self.server.recv(8192)
                except SSL.WantReadError:
                    break
                if not data:
                    break
                self.request += data
            if b'\r\n\r\n' in self.request and not self.replied:
                self.server.send(self.response)
                self.replied = True
        except SSL.WantReadError:
            pass
        except SSL.Error as error:
            self.failure = str(error)
        while True:
            try:
                self.pending.extend(self.server.bio_read(65536))
            except SSL.WantReadError:
                break

    def write(self, data):
        self.server.bio_write(data)
        self.process()

    def read(self, count):
        self.process()
        if not self.pending:
            raise OSError(self.failure or 'TLS peer needs more client data')
        result = bytes(self.pending[:count])
        del self.pending[:len(result)]
        return result


def exercise(path, cert, key, expected_hash, api_base=None, verify_mode=None):
    peer = MemoryPeer(cert, key)
    lib = DLL(path, instruction_limit=200000000, poison_allocations=True, poison_stack=True,api_base=api_base)

    def arguments(count=3):
        if lib.cpu_type == 7:
            stack = lib.cpu.reg_read(x86.UC_X86_REG_ESP)
            return struct.unpack('<'+'I'*count, lib.cpu.mem_read(stack + 4, count*4))
        registers = ((x86.UC_X86_REG_RDI, x86.UC_X86_REG_RSI, x86.UC_X86_REG_RDX,
                      x86.UC_X86_REG_RCX,x86.UC_X86_REG_R8,x86.UC_X86_REG_R9)
                     if lib.cpu_type == 0x1000007 else
                     (arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2,arm.UC_ARM_REG_R3)
                     if lib.cpu_type == 12 else
                     (arm64.UC_ARM64_REG_X0, arm64.UC_ARM64_REG_X1, arm64.UC_ARM64_REG_X2,
                      arm64.UC_ARM64_REG_X3,arm64.UC_ARM64_REG_X4,arm64.UC_ARM64_REG_X5))
        values=tuple(lib.cpu.reg_read(register) for register in registers[:count])
        if lib.cpu_type==12 and count>4:
            stack=lib.cpu.reg_read(arm.UC_ARM_REG_SP)
            values+=struct.unpack('<'+'I'*(count-4),lib.cpu.mem_read(stack,(count-4)*4))
        return values

    failures = []

    def read(cpu, address, size, user):
        _, pointer, count = arguments()
        try:
            data = bytearray()
            while len(data) < count:
                part = peer.read(count - len(data))
                if not part:
                    raise OSError('TLS server closed the stream')
                data.extend(part)
            cpu.mem_write(pointer, bytes(data))
            cpu.reg_write(lib.result, 1)
        except OSError as error:
            failures.append(str(error))
            cpu.reg_write(lib.result, 0)

    def write(cpu, address, size, user):
        _, pointer, count = arguments()
        try:
            peer.write(bytes(cpu.mem_read(pointer, count)))
            cpu.reg_write(lib.result, 1)
        except OSError as error:
            failures.append(str(error))
            cpu.reg_write(lib.result, 0)

    def random(cpu, address, size, user):
        _, pointer, count = arguments()
        cpu.mem_write(pointer, bytes((i * 37 + 11) & 255 for i in range(count)))
        cpu.reg_write(lib.result, 1)

    verified=[]

    def verify(cpu,address,size,user):
        userdata,host,digest,present,error_pointer,error_capacity=arguments(6)
        assert userdata==0 and present==1
        assert bytes(cpu.mem_read(host,128)).split(b'\0')[0]==b'permafrost.invalid'
        assert bytes(cpu.mem_read(digest,32))==expected_hash
        assert (error_pointer,error_capacity)==(0x3003000,256)
        verified.append(True)
        if verify_mode==0:
            cpu.mem_write(error_pointer,b'fixture rejected certificate\0')
        cpu.reg_write(lib.result,verify_mode)

    for target, callback in ((0x240000, read), (0x240100, write), (0x240200, random),(0x240300,verify)):
        instruction = b'\xc3' if lib.cpu_type in (7, 0x1000007) else struct.pack('<I',
            0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0)
        lib.cpu.mem_write(target, instruction)
        lib.cpu.hook_add(UC_HOOK_CODE, callback, begin=target, end=target)
    context, io, hostname, error = 0x3000000, 0x3001000, 0x3002000, 0x3003000
    lib.cpu.mem_write(context, b'\xa5' * 1024)
    lib.cpu.mem_write(io, struct.pack('<5Q' if lib.wide else '<5I', 0, 0x240000, 0x240100, 0x240200,
                                    0 if verify_mode is None else 0x240300))
    lib.cpu.mem_write(hostname, b'permafrost.invalid\0')
    lib.cpu.mem_write(error, bytes(256))
    lib.call('_winter_tls_client_init', context, io, hostname)
    success = lib.call('_winter_tls_client_handshake', context, error, 256)
    message = bytes(lib.cpu.mem_read(error, 256)).split(b'\0')[0]
    assert not failures,failures
    assert len(verified)==(0 if verify_mode is None else 1)
    if not success:
        assert verify_mode is not None,('TLS handshake failed',message)
        return False,message
    digest = 0x3004000
    assert lib.call('_winter_tls_leaf_sha256', context, digest)
    assert bytes(lib.cpu.mem_read(digest, 32)) == expected_hash, 'leaf certificate digest differs'
    request = b'GET / HTTP/1.0\r\nHost: permafrost.invalid\r\n\r\n'
    lib.cpu.mem_write(0x3005000, request)
    assert lib.call('_winter_tls_write', context, 0x3005000, len(request), error, 256)
    output, count = 0x3006000, 0x3008000
    assert lib.call('_winter_tls_read', context, output, 4096, count, error, 256)
    length = int.from_bytes(lib.cpu.mem_read(count, 8 if lib.wide else 4), 'little')
    assert 0 < length <= 4096, length
    response = bytes(lib.cpu.mem_read(output, length))
    assert response == peer.response, 'decrypted HTTP response differs'
    assert peer.request == request, 'server decrypted a different request'
    assert not failures, failures
    return True,message


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--api-base', type=lambda value:int(value,0))
    args = parser.parse_args()
    cert, key, digest = certificate(Path('build/tests/tls-interop'))
    for mode in (None,0,1,0x5a5a5a00):
        native,source=(exercise(path,cert,key,digest,args.api_base,mode)
                       for path in (args.reference,args.source))
        assert source==native,('certificate verifier result differs',mode,native,source)
        if mode in (None,1):assert native[0],mode
        if mode==0:assert native==(False,b'fixture rejected certificate')
    print('TLS 1.3: native/source handshake, certificate callbacks, digest and encrypted HTTP passed.',flush=True)


if __name__ == '__main__':
    main()
