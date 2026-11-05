#!/usr/bin/env python3
"""Relocate a library's analysis snapshot away from fixed OS service addresses.

Analysis only. Never use this snapshot as a release binary.
Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from dylib import inspect, rebase_locations


def relocate(source, output, base):
    metadata = json.loads((source / 'metadata.json').read_text())
    original = (source / 'thin').read_bytes()
    dynamic = inspect(original)
    memory = bytearray((source / 'memory.bin').read_bytes())
    old_base = metadata['base']
    slide = base - old_base
    if base < 0x10000 or base + len(memory) > 0x100000000:
        raise ValueError('analysis image must fit outside low shared memory')
    locations = rebase_locations(original, dynamic)
    handled = set()
    # The legacy ARM linker records MOVW/MOVT instruction halves in its rebase
    # stream. They encode one address, rather than two literal pointer words.
    if metadata['cpu'] == 12:
        pending = {}
        text_start, text_size = next((a, n) for k, a, n in metadata['sections'] if k == '__text')
        for address, width in sorted(locations):
            if width != 4 or not text_start <= address < text_start + text_size:
                continue
            offset = address - old_base
            word = int.from_bytes(memory[offset:offset+4], 'little')
            opcode = word & 0x0ff00000
            register = (word >> 12) & 15
            immediate = ((word >> 4) & 0xf000) | (word & 0xfff)
            if opcode == 0x03000000:
                pending[register] = (address, word, immediate)
            elif opcode == 0x03400000:
                if register not in pending:
                    raise ValueError('ARM MOVT relocation has no preceding MOVW')
                first, low_word, low = pending.pop(register)
                value = (immediate << 16) | low
                if address - first > 64 or not old_base <= value < metadata['end']:
                    raise ValueError('invalid ARM address relocation pair')
                value += slide
                for place, instruction, half in ((first, low_word, value & 65535),
                                                  (address, word, value >> 16)):
                    instruction = ((instruction & ~0x000f0fff) |
                                   ((half & 0xf000) << 4) | (half & 0xfff))
                    pos = place - old_base
                    memory[pos:pos+4] = instruction.to_bytes(4, 'little')
                    handled.add(place)
        if pending:
            raise ValueError('unpaired ARM MOVW relocation')
    for address, width in locations:
        if address in handled:
            continue
        offset = address - old_base
        if not 0 <= offset <= len(memory) - width:
            raise ValueError('relocation exceeds analysis memory')
        value = int.from_bytes(memory[offset:offset+width], 'little')
        # libc++abi marks non-unique RTTI names with the top pointer bit.
        tag = (value & (1 << 63)) if width == 8 else 0
        target = value & ~tag
        if not old_base <= target < metadata['end']:
            raise ValueError('relocation target is outside the library')
        memory[offset:offset+width] = ((target + slide) | tag).to_bytes(width, 'little')
    metadata['base'] = base
    metadata['end'] += slide
    if metadata['entry'] is not None:
        metadata['entry'] += slide
    for key in ('symbols', 'data_symbols'):
        metadata[key] = [(address + slide, name) for address, name in metadata[key]]
    metadata['sections'] = [(name, address + slide, size)
                            for name, address, size in metadata['sections']]
    metadata['analysis_slide'] = slide
    output.mkdir(parents=True, exist_ok=True)
    (output / 'memory.bin').write_bytes(memory)
    (output / 'metadata.json').write_text(json.dumps(metadata, indent=2) + '\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('output', type=Path)
    parser.add_argument('--base', type=lambda x: int(x, 0), default=0x10000000)
    args = parser.parse_args()
    relocate(args.source, args.output, args.base)
