#!/usr/bin/env python3
"""Compile the C/C++ kernel and generate fixed-address native ABI adapters."""
import json
from pathlib import Path
from cc import compile_object
from elf32 import Object, link


def compile_kernel(output):
    layout = json.loads(Path('recovery/layout.json').read_text())
    sources = sorted(Path('kernel/core').glob('*.c')) + [Path('kernel/' + name)
                for name in ('runtime.c', 'display.cpp', 'compiler.c')]
    objects = []
    for source in sources:
        target = output / (source.stem + '.o')
        compile_object(source, target, ['sdk/include', 'kernel', 'kernel/core'], extra_flags=[
            '-Wno-int-conversion', '-Wno-incompatible-pointer-types', '-Wno-pointer-sign'])
        objects.append(Object(target.read_bytes()))
    module, symbols, _ = link(objects, base=layout['core_base'], shim=False)
    (output / 'kernel_c.bin').write_bytes(module)
    (output / 'kernel_c.inc').write_text('\n'.join(
        '%s equ 0x%x' % (name, address) for name, address in symbols.items()) +
        '\npf_core_size equ %d\n' % len(module) +
        ''.join('pf_%s equ 0x%x\n' % (key, value) for key, value in {
            'core_base': layout['core_base'], 'state_start': layout['text_end'],
            'state_end': layout['state_end'], 'initialized_end': layout['initialized_end'],
            'payload_offset': (layout['initialized_end'] - layout['kernel_base'] + 15) & ~15,
            'bootstrap_offset': 0x8b7}.items()))
    (output / 'kernel_c.map.json').write_text(json.dumps(symbols, indent=2) + '\n')
    compile_object('kernel/state.c', output / 'state.o', ['sdk/include'])
    state = next(section['data'] for section in Object((output / 'state.o').read_bytes()).sections
                 if section['name'] == '.pf.state')
    if len(state) != layout['state_end'] - layout['text_end']:
        raise ValueError('initial state size changed')
    (output / 'kernel_state.bin').write_bytes(state[:layout['initialized_end'] - layout['text_end']])
    entries = json.loads(Path('kernel/abi.json').read_text())
    for name, (address, _) in json.loads(Path('kernel/runtime.json').read_text()).items():
        entries['%x' % address] = dict(symbol=name, arguments=[])
    entries['2530e'] = dict(symbol='pf_display_night_mode', arguments=[])
    if any(0x208b7 <= int(address, 16) + 4 and int(address, 16) < 0x208f7 for address in entries):
        raise ValueError('bootstrap overlaps an ABI entry')
    stubs, adapters = ['; Generated from kernel/abi.json. Pooka\'s Free Software License.', 'bits 32'], []
    for text, entry in sorted(entries.items(), key=lambda item: int(item[0], 16)):
        address = int(text, 16)
        symbol = entry['symbol']
        if symbol not in symbols:
            raise ValueError('ABI target is missing: ' + symbol)
        arguments = entry['arguments']
        registers = any(not arg['storage'].startswith('stack') for arg in arguments)
        destination = 'pf_bridge_' + text if registers else symbol
        stubs += ['section native_%s start=0x%x vstart=0x%x align=1' % (text, address - 0x20000, address),
                  '    jmp ' + destination]
        if not registers:
            continue
        adapters += ['pf_bridge_' + text + ':', '    mov eax, esp']
        pushed = 0
        for arg in reversed(arguments):
            storage = arg['storage']
            if storage in ('ECX', 'CX', 'CL', 'EDX', 'DX', 'DL'):
                if arg['size'] > 4:
                    raise ValueError('oversized register argument')
                adapters.append('    push ' + ('ecx' if storage in ('ECX', 'CX', 'CL') else 'edx'))
                pushed += 4
            elif storage.startswith('stack'):
                offset = int(storage[5:])
                count = (arg['size'] + 3) // 4
                for word in reversed(range(count)):
                    adapters.append('    push dword [eax + %d]' % (offset + word * 4))
                    pushed += 4
            else:
                raise ValueError('unsupported original ABI storage ' + storage)
        adapters += ['    call ' + symbol, '    add esp, %d' % pushed, '    ret']
    (output / 'kernel_abi.inc').write_text('\n'.join(stubs) + '\n')
    (output / 'kernel_adapters.inc').write_text('\n'.join(adapters) + '\n')
    return symbols
