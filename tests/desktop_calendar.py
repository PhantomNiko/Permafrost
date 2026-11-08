#!/usr/bin/env python3
"""Compare recovered desktop calendar routines with the native application.

Pooka's Free Software License. Reference executables are test inputs only.
"""
import argparse
import datetime
import struct
from pathlib import Path
from cube_render import diagnostic_reference
from dll import DLL
from native import inspect
from dylib import inspect as dynamic
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_EDX


def load(original, source, folder, library):
    folder.mkdir(parents=True, exist_ok=True)
    libraries = []
    reference, original_memory = inspect(original.read_bytes())
    names = {n: a for a, n in reference['symbols']}
    for index, path in enumerate([original, source]):
        diagnostic = folder / ('native' if index == 0 else 'source')
        diagnostic_reference(path, diagnostic)
        lib = DLL(diagnostic)
        ui = DLL(library, load_base=0x1000000)
        _, ui_memory = inspect(library.read_bytes())
        lib.cpu.mem_write(ui.base, bytes(ui.cpu.mem_read(ui.base, len(ui_memory))))
        metadata, memory = inspect(diagnostic.read_bytes())
        symbols = {n: a for a, n in metadata['symbols']}
        for name in ['_tundraTimeEpochFromCalendar', '_tundraTimeCalendarFromEpoch',
                     '_refreshDirectoryWindow', '_refreshHostDisplayState']:
            if name not in names:
                continue
            target = names[name]
            if index:
                target = symbols['_recovered_%x' % (target-reference['base']+0x10000000)]
            lib.exports[name] = lib.base+target
        if index == 0 and reference['base']:
            end = next(a+n for k, a, n in reference['sections'] if k == '__text')
            lib.cpu.mem_write(end, original_memory[end-reference['base']:])
        for item in dynamic(diagnostic.read_bytes())['stubs']:
            if item['name'] not in ui.exports:
                continue
            target = ui.exports[item['name']]
            def imported(cpu, address, size, user, target=target, pc=lib.pc):
                cpu.reg_write(pc, target)
            address = lib.base+item['address']
            lib.cpu.hook_add(UC_HOOK_CODE, imported, begin=address, end=address)
            if index == 0 and reference['base']:
                address = item['address']
                lib.cpu.hook_add(UC_HOOK_CODE, imported, begin=address, end=address)
        libraries.append(lib)
    return libraries


def exercise(reference, source, folder, library):
    libraries = load(reference, source, folder, library)
    count = 0
    if '_tundraTimeEpochFromCalendar' in libraries[0].exports:
        cases = [(y, m, d, 23, 59, 59)
                 for y in [1970, 1999, 2000, 2026, 2100, 2400]
                 for m in range(1, 13) for d in [0, 1, 28, 29, 30, 31, 32]]
        cases += [(1969, 1, 1, 0, 0, 0), (2026, 0, 1, 0, 0, 0),
                  (2026, 13, 1, 0, 0, 0), (2026, 11, 8, 24, 0, 0),
                  (2026, 11, 8, 0, 60, 0), (2026, 11, 8, 0, 0, 60)]
        for case in cases:
            results = []
            for index, lib in enumerate(libraries):
                output = 0x2f0000
                lib.cpu.mem_write(output, b'\x5a'*8)
                try:
                    if index == 0 and lib.cpu_type == 7:
                        lib.cpu.reg_write(UC_X86_REG_ECX, case[0])
                        lib.cpu.reg_write(UC_X86_REG_EDX, case[1])
                        result = lib.call('_tundraTimeEpochFromCalendar', *case[2:], output)
                    else:
                        result = lib.call('_tundraTimeEpochFromCalendar', *case, output)
                except AssertionError as error:
                    raise AssertionError(('native' if index == 0 else 'source', case)) from error
                results.append((result, bytes(lib.cpu.mem_read(output, 8))))
            assert results[0] == results[1], (case, results)
            try:
                date = datetime.datetime(*case, tzinfo=datetime.timezone.utc)
            except ValueError:
                assert results[0][0] == 0, case
            else:
                if case[0] < 1970:
                    assert results[0][0] == 0, case
                else:
                    assert results[0] == (1, struct.pack('<Q', int(date.timestamp()))), (case, results)
            count += 1
    if '_tundraTimeCalendarFromEpoch' in libraries[0].exports:
        epochs = [0, 1, 59, 60, 3599, 3600, 86399, 86400]
        epochs += [int(datetime.datetime(y, m, 1, 12, 34, 56,
                   tzinfo=datetime.timezone.utc).timestamp())
                   for y in [1970, 1999, 2000, 2026, 2100, 2400] for m in range(1, 13)]
        for epoch in epochs:
            results = []
            for index, lib in enumerate(libraries):
                output = 0x2f0000
                lib.cpu.mem_write(output, b'\x5a'*24)
                arguments = [epoch, output] if lib.wide else [epoch & 0xffffffff, epoch >> 32, output]
                if index == 0 and lib.cpu_type == 7:
                    lib.cpu.reg_write(UC_X86_REG_ECX, epoch & 0xffffffff)
                    lib.cpu.reg_write(UC_X86_REG_EDX, epoch >> 32)
                    lib.call('_tundraTimeCalendarFromEpoch', output)
                else:
                    lib.call('_tundraTimeCalendarFromEpoch', *arguments)
                results.append(bytes(lib.cpu.mem_read(output, 24)))
            expected = datetime.datetime.fromtimestamp(epoch, datetime.timezone.utc)
            assert results[0] == results[1], (epoch, results)
            assert struct.unpack('<6I', results[0]) == (expected.year, expected.month,
                    expected.day, expected.hour, expected.minute, expected.second), (epoch, results)
            count += 1
    assert count, 'No calendar routines were exercised.'
    print('Desktop calendar: %d native/source epoch, leap-year and invalid-date cases passed.' % count)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--library', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output, args.library)
