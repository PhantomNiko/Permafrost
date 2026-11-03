#!/usr/bin/env python3
"""Reproduce the initial NASM recovery from the locally supplied release.

This is a provenance tool, not part of the normal source build. NASM's ndisasm
decodes instructions; initialized data is emitted separately from executable code.
"""
import argparse
import re
import subprocess
import tempfile
from pathlib import Path
from wmfs import Image


def data_lines(data):
    lines = []
    pos = 0
    while pos < len(data):
        if data[pos] == 0:
            end = pos + 1
            while end < len(data) and data[end] == 0:
                end += 1
            lines.append('    times %d db 0' % (end - pos))
        else:
            end = pos
            while end < len(data) and 32 <= data[end] < 127 and data[end] not in (34, 92):
                end += 1
            if end - pos >= 4:
                lines.append('    db "%s"' % data[pos:end].decode('ascii'))
            else:
                end = min(pos + 8, len(data))
                lines.append('    db ' + ', '.join('0x%02x' % b for b in data[pos:end]))
        pos = end
    return lines


def recover(name, blob, ranges, destination, ndisasm):
    lines = ['; Permafrost 0.1 — recovered assembly, Pooka\'s Free Software License.',
             '; Fixed virtual addresses preserve compatibility with original raw programs.',
             '; at() retains original instruction boundaries when NASM shortens an encoding.',
             '%macro pf_at 1', '    times %1 - ($-$$) db 0x90', '%endmacro']
    for index, (start, end, bits, virtual) in enumerate(ranges):
        lines += ['', 'section part%d start=0x%x vstart=0x%x align=1' % (index, start, virtual)]
        if not bits:
            lines += data_lines(blob[start:end])
            continue
        lines += ['bits %d' % bits]
        with tempfile.TemporaryDirectory(prefix='permafrost-decode-') as temp:
            path = Path(temp) / 'code.bin'
            path.write_bytes(blob[start:end])
            result = subprocess.check_output([ndisasm, '-b', str(bits), '-o', str(virtual), str(path)], text=True)
        for line in result.splitlines():
            match = re.match(r'^([0-9A-F]+)\s+([0-9A-F]+)\s+(.+)$', line)
            if not match:
                continue
            address, encoded, instruction = match.groups()
            offset = int(address, 16) - virtual
            if encoded == '660F1F440000':
                instruction = 'nop word [byte eax+eax+0]'
            if bits == 32 and encoded.startswith('66') and re.match(r'mov [desfgs]s,', instruction):
                instruction = 'o16 ' + instruction
            if re.match(r'^j\w+ 0x', instruction) and ':' not in instruction:
                instruction = instruction.replace(' 0x', ' short 0x' if len(encoded) == 4 else ' near 0x', 1)
            # Decoder continuation lines are already included by the instruction.
            lines += ['pf_at 0x%x' % offset,
                      'l_%s_%08x: %s' % (name, int(address, 16), instruction)]
    destination.parent.mkdir(parents=True, exist_ok=True)
    destination.write_text('\n'.join(lines) + '\n')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    parser.add_argument('--ndisasm', default='ndisasm')
    parser.add_argument('--out', type=Path, default=Path('build/recovery'))
    args = parser.parse_args()
    image = args.image.read_bytes()
    files = Image(image).files()
    recover('boot', image[:512], [(0, 0x40, 16, 0), (0x40, 512, 0, 0)], args.out / 'boot.asm', args.ndisasm)
    recover('loader', image[512:65*512], [(0, 0x725, 16, 0), (0x725, 0x740, 32, 0x8725),
                                         (0x740, 32768, 0, 0)], args.out / 'loader.asm', args.ndisasm)
    ranges = [(0, 0x10, 0, 0)]
    boundaries = [0x10, 0x45, 0xa8, 0x10c, 0x186, 0x1cd, 0x2a5, 0x2ec,
                  0x397, 0x3d4, 0x421, 0x4d1, 0x65e, 0x688]
    for index, (start, end) in enumerate(zip(boundaries, boundaries[1:])):
        bits = 32 if index % 2 == 0 else 16
        ranges.append((start, end, bits, start + (0x20000 if bits == 32 else 0)))
    ranges += [(0x688, 0x71e, 0, 0), (0x71e, 0xc8c1, 32, 0x2071e),
               (0xc8c1, 0x51000, 0, 0)]
    recover('kernel', files['WinterBoot-baremetal.bin'], ranges, args.out / 'kernel.asm', args.ndisasm)


if __name__ == '__main__':
    main()
