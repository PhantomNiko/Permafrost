#!/usr/bin/env python3
"""Compile the C/C++ kernel and generate fixed-address native ABI adapters."""
import json
import hashlib
import os
import struct
import subprocess
from lz4 import compress
from pathlib import Path
from cc import compile_object
from elf32 import Object, link


def compile_kernel(output, nasm='nasm', variant='bios'):
    output.mkdir(parents=True, exist_ok=True)
    if variant not in ('bios', 'openbios'):
        raise ValueError('unknown current firmware variant')
    root = Path('kernel') if variant == 'bios' else Path('kernel/openbios')
    prefix = '' if variant == 'bios' else 'openbios-'
    layout = json.loads(Path('recovery', prefix + 'layout.json').read_text())
    names = json.loads(Path('recovery', prefix + 'symbols.json').read_text())
    sources = [root / 'recovered.c', Path('kernel/runtime.c'), root / 'display.cpp', Path('kernel/compiler.c')]
    headers = sorted(set(Path('sdk/include').glob('*.h')) | set(Path('kernel').glob('*.h')) | set(root.glob('*.h')))
    compiler_identity = b''.join(subprocess.check_output([os.environ.get(var, default), '--version'])
        for var, default in [('CC','clang'),('CXX','clang++')])
    shared = b''.join(p.read_bytes() for p in headers + [Path('tools/cc.py'), Path(__file__)]) + compiler_identity
    cache_path=output/'compile-cache.json'
    cache=json.loads(cache_path.read_text()) if cache_path.exists() else {}
    objects = []
    for source in sources:
        target = output / (source.stem + '.o')
        digest=hashlib.sha256(shared+source.read_bytes()).hexdigest()
        if not target.exists() or cache.get(str(source))!=digest:
            compile_object(source, target, ['sdk/include', str(root), 'kernel'], extra_flags=[
                '-fno-inline-functions', '-Wno-int-conversion', '-Wno-incompatible-pointer-types', '-Wno-pointer-sign'])
            cache[str(source)]=digest
            cache_path.write_text(json.dumps(cache,indent=2)+'\n')
        objects.append(Object(target.read_bytes()))
    module, symbols, _ = link(objects, base=layout['core_base'], shim=False)
    (output / 'kernel_c.bin').write_bytes(module)
    (output / 'kernel_c.inc').write_text('\n'.join(
        '%s equ 0x%x' % (name, address) for name, address in symbols.items()) +
        '\npf_core_size equ %d\n' % len(module) +
        ''.join('pf_%s equ 0x%x\n' % (key, value) for key, value in {
            'core_base': layout['core_base'], 'state_start': layout['text_end'],
            'stack_top': layout.get('stack_top', 0x200000),
            'state_end': layout['state_end'], 'initialized_end': layout['initialized_end'],
            'payload_offset': (layout['initialized_end'] - layout['kernel_base'] + 15) & ~15,
            'kernel_main': symbols[names.get('recovered_%x'%layout['kernel_main'], 'recovered_%x'%layout['kernel_main'])]}.items()))
    (output / 'kernel_c.map.json').write_text(json.dumps(symbols, indent=2) + '\n')
    compile_object(root / 'state.c', output / 'state.o', ['sdk/include'])
    state = next(section['data'] for section in Object((output / 'state.o').read_bytes()).sections
                 if section['name'] == '.pf.state')
    if len(state) != layout['state_end'] - layout['text_end']:
        raise ValueError('initial state size changed')
    (output / 'kernel_state.bin').write_bytes(state[:layout['initialized_end'] - layout['text_end']])
    entries = json.loads((root / 'abi.json').read_text())
    for entry in entries.values():
        entry['symbol'] = names.get(entry['symbol'], entry['symbol'])
    for name, (address, _) in json.loads((root / 'runtime.json').read_text()).items():
        entries['%x' % address] = dict(symbol=name, arguments=[])
    entries['%x' % layout.get('night_mode_entry', 0x3323e)] = dict(symbol='pf_display_night_mode', arguments=[])
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
    # Resolve adapter addresses in a separate flat core, then compress the
    # complete module. The BIOS staging copy must fit below VGA memory.
    labels = ['pf_stage2'] + ['pf_bridge_' + text for text, entry in sorted(entries.items(), key=lambda item: int(item[0], 16))
                              if any(not a['storage'].startswith('stack') for a in entry['arguments'])]
    metadata_size = 4 * len(labels)
    core_asm = ['%include "kernel_c.inc"', 'section metadata start=0 vstart=0 align=1',
                'dd ' + ','.join(labels),
                'section core start=%d vstart=0x%x align=1' % (metadata_size, layout['core_base']),
                'bits 32', 'incbin "kernel_c.bin"', '%include "kernel_adapters.inc"',
                'pf_stage2:', 'xor eax,eax', 'mov edi,pf_initialized_end',
                'mov ecx,pf_state_end-pf_initialized_end', 'rep stosb',
                'call pf_kernel_main', '.halt:', 'cli', 'hlt', 'jmp .halt']
    (output/'kernel_core.asm').write_text('\n'.join(core_asm)+'\n')
    subprocess.run([nasm, '-I', str(output)+'/', '-f', 'bin', str(output/'kernel_core.asm'),
                    '-o', str(output/'kernel_core.with-labels')], check=True)
    combined=(output/'kernel_core.with-labels').read_bytes()
    addresses=struct.unpack_from('<%dI'%len(labels),combined)
    core=combined[metadata_size:]
    packed=compress(core)
    (output/'kernel_packed.bin').write_bytes(packed)
    compile_object('kernel/unpack.c',output/'unpack.o',['sdk/include'])
    decoder,decoder_symbols,_=link([Object((output/'unpack.o').read_bytes())],
        base=layout['kernel_base']+((layout['initialized_end']-layout['kernel_base']+15)&~15),shim=False)
    (output/'kernel_unpack.bin').write_bytes(decoder)
    with (output/'kernel_c.inc').open('a') as handle:
        handle.write(''.join('%s equ 0x%x\n'%(name,address) for name,address in zip(labels,addresses)))
        handle.write('pf_unpack equ 0x%x\npf_packed_size equ %d\npf_unpacked_size equ %d\n' %
                     (decoder_symbols['pf_unpack'],len(packed),len(core)))
    print('Kernel core: %d bytes, packed %d bytes'%(len(core),len(packed)))
    return symbols
