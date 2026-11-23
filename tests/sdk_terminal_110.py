#!/usr/bin/env python3
"""Exercise candidate SDK terminal and partial-presentation wire calls in C/C++.

Pooka's Free Software License.
"""
import struct
import sys
import tempfile
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from darwin import compile_object, link_dynamic_executable, TARGETS
from native import inspect
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *

SOURCE = '''#include <permafrost/native_api.h>
#ifdef __cplusplus
static_assert(sizeof(WmBaremetalProgramAppWindowRectUpdate)==28,"rectangle wire layout");
extern "C"
#else
_Static_assert(sizeof(WmBaremetalProgramAppWindowRectUpdate)==28,"rectangle wire layout");
#endif
uint32_t probe(uint32_t operation,uint32_t value,char *text,void *out){
 switch(operation){
 case 0:return wm_program_terminal_open();
 case 1:return wm_program_terminal_drain(text,value);
 case 2:return wm_program_terminal_input_state();
 case 3:return wm_program_terminal_submit(text);
 case 4:return wm_program_terminal_cancel();
 case 5:return wm_program_ws_get_variable(text,(WmBaremetalProgramWinterScriptValue *)out);
 default:return wm_program_app_window_update_rect(value,text,(const WmBaremetalProgramAppWindowRectUpdate *)out);
 }
}
'''


def main():
    slots = [0x23c, 0x240, 0x244, 0x248, 0x24c, 0x204, 0x214]
    counts = [0, 2, 0, 1, 0, 2, 3]
    with tempfile.TemporaryDirectory(prefix='permafrost-sdk-terminal-') as directory:
        root = Path(directory)
        for arch in TARGETS:
            api = 0x82010800 if arch == 'arm64' else 0x40010800 if arch == 'armv7' else 0x280800
            results = []
            for language in ['c', 'cpp']:
                source, obj, binary = root / ('probe.' + language), root / 'probe.o', root / 'probe'
                source.write_text(SOURCE)
                compile_object(source, obj, arch, ['recovery/in-progress/sdk/include', 'sdk/include'], pic=True)
                link_dynamic_executable([obj], binary, arch, {}, entry='probe')
                blob = bytearray(binary.read_bytes());struct.pack_into('<I', blob, 12, 6);binary.write_bytes(blob)
                meta, _ = inspect(blob)
                lib = DLL(binary, api_base=api)
                lib.exports['probe'] = lib.base + next(a for a, n in meta['symbols'] if n == '_probe') - meta['base']
                cpu = lib.cpu
                events, reply = [], [0]
                def service(c, pc, size, operation):
                    count = counts[operation]
                    if arch == 'i386':
                        values = list(struct.unpack('<' + 'I' * count, c.mem_read(c.reg_read(UC_X86_REG_ESP) + 4, count * 4)))
                    else:
                        regs = ([UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2] if arch == 'armv7' else
                                [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2] if arch == 'arm64' else
                                [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX])
                        values = [c.reg_read(r) for r in regs[:count]]
                    events.append((operation, values));c.reg_write(lib.result, reply[0])
                for operation, slot in enumerate(slots):
                    pc = 0x10030 + operation * 16
                    cpu.mem_write(pc, struct.pack('<I', 0xe12fff1e if arch == 'armv7' else 0xd65f03c0)
                                  if arch.startswith('arm') else b'\xc3')
                    cpu.hook_add(UC_HOOK_CODE, service, operation, begin=pc, end=pc)
                cases = []
                for table_size, bound in [(412, True), (608, False), (608, True)]:
                    cpu.mem_write(api + 8, struct.pack('<I', table_size))
                    for operation, slot in enumerate(slots):
                        cpu.mem_write(api + slot, struct.pack('<I', 0x10030 + operation * 16 if bound else 0))
                    for operation in range(7):
                        for value in [0, 1, 0x103]:
                            reply[0] = value;events.clear()
                            result = lib.call('probe', operation, 19, 0x3001000, 0x3002000, result_bits=32)
                            ready = table_size == 608 and bound
                            expected = value & 255 if operation == 2 else value
                            assert result == (expected if ready else 0), (arch, operation, result)
                            arguments = [[], [0x3001000, 19], [], [0x3001000], [],
                                         [0x3001000, 0x3002000], [19, 0x3001000, 0x3002000]][operation]
                            assert events == ([(operation, arguments)] if ready else []), (arch, operation, events)
                            cases.append((result, list(events)))
                results.append(cases)
            assert results[0] == results[1]
            print(arch + ': C/C++ terminal and rectangle wrappers pass 63 availability/argument/result cases.')


if __name__ == '__main__':
    main()
