#!/usr/bin/env python3
"""Package a source-built i386 OpenBIOS ELF with a compressed WMLP2 loader.

The loader expands OpenBIOS before entering its original entry point. It is a
separate boot stage. Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
import subprocess
from cc import compile_object
from elf32 import Object, link
from lz4 import compress


def load_elf(path):
    binary = path.read_bytes()
    header = struct.unpack_from('<16sHHIIIIIHHHHHH', binary)
    if header[0][:6] != b'\x7fELF\x01\x01' or header[2] != 3:
        raise ValueError('expected little-endian i386 firmware ELF')
    segments = []
    for index in range(header[10]):
        row = struct.unpack_from('<8I', binary, header[5] + index * header[9])
        kind, offset, address, physical, files, memory, flags, align = row
        if kind == 1:
            if files > memory or offset + files > len(binary):
                raise ValueError('invalid firmware segment')
            segments.append((address, memory, binary[offset:offset + files]))
    base = min(address for address, memory, data in segments)
    end = max(address + memory for address, memory, data in segments)
    image = bytearray(end - base)
    for address, memory, data in segments:
        image[address - base:address - base + len(data)] = data
    if base != 0x100000 or not base <= header[4] < end or end >= 0x2f0000:
        raise ValueError('firmware memory does not fit the boot layout')
    return image, base, header[4]


def package_firmware(elf, output, nasm='nasm'):
    output.mkdir(parents=True, exist_ok=True)
    image, base, entry = load_elf(elf)
    if len(image) > 0x100000:
        raise ValueError('firmware exceeds its one-MiB resident reservation')
    packed = compress(image)
    compile_object('kernel/unpack.c', output / 'unpack.o', ['sdk/include'])
    decoder, symbols, _ = link([Object((output / 'unpack.o').read_bytes())], base=0x2f0000, shim=False)
    (output / 'unpack.bin').write_bytes(decoder)
    stub_entry = 0x2f0000 + len(decoder)
    assembly = '''bits 32
org 0x2f0000
incbin "unpack.bin"
entry:
mov esp,0x600000
pushfd
pushad
cld
mov esi,0x100000
mov edi,0x400000
mov ecx,%d
rep movsb
push dword %d
push dword 0x400000
push dword %d
push dword 0x100000
call 0x%x
add esp,16
test eax,eax
jz .halt
popad
popfd
; Supply the standard Multiboot memory handoff expected by source OpenBIOS.
mov edi,0x7000
xor eax,eax
mov ecx,22
rep stosd
mov dword [0x7000],1
mov dword [0x7004],640
mov ecx,[0x608c]
cmp ecx,16
jbe .count_ok
mov ecx,16
.count_ok:
mov esi,0x6090
xor edx,edx
.memory:
test ecx,ecx
jz .memory_done
mov eax,[esi]
add eax,[esi+4]
jc .skip
cmp eax,edx
jbe .skip
mov edx,eax
.skip:
add esi,8
dec ecx
jmp .memory
.memory_done:
cmp edx,0x100000
ja .valid_memory
mov edx,0x4000000
.valid_memory:
sub edx,0x100000
shr edx,10
mov [0x7008],edx
fninit
mov eax,0x2badb002
mov ebx,0x7000
xor edx,edx
jmp 0x%x
.halt:
cli
hlt
jmp .halt
''' % (len(packed), len(packed), len(image), symbols['pf_unpack'], entry)
    (output / 'wrapper.asm').write_text(assembly)
    subprocess.run([nasm, '-I', str(output) + '/', '-f', 'bin', str(output / 'wrapper.asm'),
                    '-o', str(output / 'wrapper.bin')], check=True)
    suffix = (output / 'wrapper.bin').read_bytes()
    size = 40 + len(packed) + len(suffix)
    if size >= 0x80000:
        raise ValueError('compressed firmware exceeds low-memory BIOS staging')
    header = struct.pack('<4s9I', b'WMLP', 2, stub_entry, size, base,
                         0x2f0000 + len(suffix) - base, len(packed),
                         0x2f0000 - base, len(suffix), 0)
    result = header + packed + suffix
    (output / 'OpenBIOS.wmlp').write_bytes(result)
    print('Packaged source OpenBIOS: %d bytes; original entry 0x%x.' % (len(result), entry))
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('elf', type=Path)
    parser.add_argument('--out', type=Path, default=Path('build/firmware'))
    parser.add_argument('--nasm', default='nasm')
    args = parser.parse_args()
    package_firmware(args.elf, args.out, args.nasm)
