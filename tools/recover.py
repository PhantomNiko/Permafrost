#!/usr/bin/env python3
"""Reproduce the initial NASM recovery from the locally supplied release.

This is a provenance tool, not part of the normal source build. NASM's ndisasm
decodes instructions; initialized data is emitted separately from executable code.
"""
import argparse
import json
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
                end = pos + 1
                while end < min(pos + 8, len(data)) and data[end] != 0:
                    probe = data[end:end + 4]
                    if len(probe) == 4 and all(32 <= b < 127 and b not in (34, 92) for b in probe):
                        break
                    end += 1
                lines.append('    db ' + ', '.join('0x%02x' % b for b in data[pos:end]))
        pos = end
    return lines


def recover(name, blob, ranges, destination, ndisasm):
    lines = ['; Permafrost 0.4 — recovered assembly, Pooka\'s Free Software License.',
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
            if encoded == '0F1F4000':
                instruction = 'nop dword [byte eax+0]'
            if encoded == '8D044DFFFFFFFF':
                instruction = 'lea eax,[nosplit dword ecx*2-1]'
            if encoded == '8D344501000000':
                instruction = 'lea esi,[nosplit dword eax*2+1]'
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
    parser.add_argument('--variant', choices=['i386','IA64'], default='i386')
    parser.add_argument('--brand', action='store_true', help='apply documented fixed-slot Permafrost branding')
    args = parser.parse_args()
    image = args.image.read_bytes()
    files = Image(image).files()
    layout = json.loads(Path('recovery/layout-IA64.json' if args.variant=='IA64' else 'recovery/layout.json').read_text())
    if args.brand:
        def slot(blob, old, new):
            assert len(new) <= len(old) and old in blob
            return blob.replace(old, new + bytes(len(old) - len(new)))
        image = slot(image, b'WinterBoot BIOS boot failed', b'Permafrost BIOS boot failed')
        image = slot(image, b'WinterBoot stage2 failed', b'Permafrost stage2 failed')
        image = slot(image, b'WB2 ', b'PF2 ')
        image = slot(image, b'/WinterBoot-baremetal.bin', b'/Permafrost-kernel.bin')
        if b'/WinterBoot64-baremetal.bin' in image:
            image = slot(image, b'/WinterBoot64-baremetal.bin', b'/Permafrost64-kernel.bin')
        kernel = slot(files['WinterBoot-baremetal.bin'], b'WinterMoon OS v0.4 Beta', b'Permafrost v0.4 Beta')
        kernel = slot(kernel, b'Alpha\0', b'Beta\0')
        kernel = slot(kernel, b'0.3\0', b'0.4\0')
        files['WinterBoot-baremetal.bin'] = kernel
    recover('boot', image[:512], [(0, 0x40, 16, 0), (0x40, 512, 0, 0)], args.out / 'boot.asm', args.ndisasm)
    recover('loader', image[512:65*512], layout['loader_ranges'][args.variant], args.out / 'loader.asm', args.ndisasm)
    ranges = [(0, 0x10, 0, 0)]
    segments = layout['bios_ranges'] + [[layout['bios_code_end'], 0]]
    for (start, bits), (end, _) in zip(segments, segments[1:]):
        ranges.append((start, end, bits, start + (0x20000 if bits == 32 else 0)))
    start, end, base = (layout[k] for k in ('text_start', 'text_end', 'kernel_base'))
    ranges += [(layout['bios_code_end'], start-base, 0, 0),
               (start-base, end-base, 32, start), (end-base, layout['state_end']-base, 0, 0)]
    recover('kernel', files['WinterBoot-baremetal.bin'], ranges, args.out / 'kernel.asm', args.ndisasm)


if __name__ == '__main__':
    main()
