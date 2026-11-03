#!/usr/bin/env python3
"""Execute the actual boot chain with a small deterministic BIOS fixture.

Requires Unicorn. This checks CPU execution and disk transfers, not the fidelity
of a real BIOS, graphical output, interrupts, or physical hardware.
"""
import argparse
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_16, UC_HOOK_INTR, UC_HOOK_CODE, UC_HOOK_INSN
from unicorn.x86_const import *


class Machine:
    def __init__(self, disk, commands=''):
        self.disk = bytearray(disk)
        self.cpu = Uc(UC_ARCH_X86, UC_MODE_16)
        self.cpu.mem_map(0, 64 * 1024 * 1024)
        self.cpu.mem_write(0x7c00, disk[:512])
        self.cpu.reg_write(UC_X86_REG_DL, 0x80)
        self.cpu.reg_write(UC_X86_REG_SP, 0x7000)
        self.cpu.mem_write(0x46c, struct.pack('<I', 100))
        self.keys = list(commands.replace('\n', '\r').encode('ascii'))
        self.output = bytearray()
        self.booted = False
        self.idle = False
        self.reads = 0
        self.writes = 0
        self.serial_lcr = 0
        self.cpu.hook_add(UC_HOOK_INTR, self.interrupt)
        self.cpu.hook_add(UC_HOOK_CODE, self.entry, begin=0x20010, end=0x20010)
        self.cpu.hook_add(UC_HOOK_INSN, self.port_in, None, 1, 0, UC_X86_INS_IN)
        self.cpu.hook_add(UC_HOOK_INSN, self.port_out, None, 1, 0, UC_X86_INS_OUT)

    def entry(self, cpu, address, size, user):
        self.booted = True

    def carry(self, value):
        flags = self.cpu.reg_read(UC_X86_REG_EFLAGS)
        self.cpu.reg_write(UC_X86_REG_EFLAGS, (flags | 1) if value else flags & ~1)

    def pointer(self, segment, offset):
        return self.cpu.reg_read(segment) * 16 + self.cpu.reg_read(offset)

    def interrupt(self, cpu, number, user):
        ax = cpu.reg_read(UC_X86_REG_AX)
        ah = ax >> 8
        self.carry(False)
        if number == 0x13:
            packet = self.pointer(UC_X86_REG_DS, UC_X86_REG_SI)
            if ah in (0x42, 0x43):
                _, _, count, offset, segment, sector = struct.unpack('<BBHHHQ', cpu.mem_read(packet, 16))
                address = segment * 16 + offset
                start, end = sector * 512, (sector + count) * 512
                if end > len(self.disk):
                    self.carry(True)
                    cpu.reg_write(UC_X86_REG_AH, 4)
                    return
                if ah == 0x42:
                    cpu.mem_write(address, bytes(self.disk[start:end]))
                    self.reads += count
                else:
                    self.disk[start:end] = cpu.mem_read(address, count * 512)
                    self.writes += count
                cpu.reg_write(UC_X86_REG_AH, 0)
            elif ah == 0x48:
                cpu.mem_write(packet + 16, struct.pack('<QH', len(self.disk) // 512, 512))
                cpu.reg_write(UC_X86_REG_AH, 0)
            elif ah != 0:
                raise AssertionError('unimplemented disk BIOS function %x' % ax)
        elif number == 0x15:
            if cpu.reg_read(UC_X86_REG_EAX) == 0xe820:
                address = self.pointer(UC_X86_REG_ES, UC_X86_REG_DI)
                cpu.mem_write(address, struct.pack('<QQI', 0x100000, 63 * 1024 * 1024, 1))
                cpu.reg_write(UC_X86_REG_EAX, 0x534d4150)
                cpu.reg_write(UC_X86_REG_EBX, 0)
                cpu.reg_write(UC_X86_REG_ECX, 20)
            else:
                self.carry(True)
        elif number == 0x10:
            if ah == 0x0e:
                self.output.append(ax & 255)
            elif ax == 0x1130:
                # Deterministic font fixture, not a licensed graphical asset.
                cpu.reg_write(UC_X86_REG_ES, 0xf000)
                cpu.reg_write(UC_X86_REG_BP, 0)
                cpu.reg_write(UC_X86_REG_CX, 16)
            elif ah == 0x4f:
                cpu.reg_write(UC_X86_REG_AX, 0x014f)  # exercise VGA text fallback
        elif number == 0x16:
            flags = cpu.reg_read(UC_X86_REG_EFLAGS)
            if ah in (1, 0x11):
                cpu.reg_write(UC_X86_REG_EFLAGS, flags & ~0x40 if self.keys else flags | 0x40)
                if self.keys:
                    cpu.reg_write(UC_X86_REG_AX, self.keys[0])
                elif self.booted:
                    self.idle = True
                    cpu.emu_stop()
            elif ah in (0, 0x10):
                if not self.keys:
                    self.idle = True
                    cpu.emu_stop()
                else:
                    cpu.reg_write(UC_X86_REG_AX, self.keys.pop(0))
            else:
                raise AssertionError('unimplemented keyboard function %x' % ax)
        elif number == 0x1a:
            cpu.reg_write(UC_X86_REG_CX, 0)
            cpu.reg_write(UC_X86_REG_DX, 100)
        else:
            raise AssertionError('unexpected interrupt %x at %x' % (number, cpu.reg_read(UC_X86_REG_EIP)))

    def port_in(self, cpu, port, size, user):
        if port == 0x3fd:
            return 0x20
        if port == 0x64:
            return 0
        return 0

    def port_out(self, cpu, port, size, value, user):
        if port == 0x3fb:
            self.serial_lcr = value
        if port == 0x3f8 and not self.serial_lcr & 0x80:
            self.output.append(value & 255)

    def run(self, count=20000000):
        self.cpu.emu_start(0x7c00, 0, count=count)
        return self.output.decode('ascii', errors='replace')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    parser.add_argument('--commands', default='serial("PERMAFROST-TEST")\n')
    parser.add_argument('--count', type=int, default=100000000)
    args = parser.parse_args()
    machine = Machine(args.image.read_bytes(), args.commands)
    output = machine.run(args.count)
    print(output)
    print('kernel entry=%s idle=%s disk sectors read=%d written=%d pc=%x' %
          (machine.booted, machine.idle, machine.reads, machine.writes,
           machine.cpu.reg_read(UC_X86_REG_EIP)))
    screen = machine.cpu.mem_read(0xb8000, 4000)[::2].decode('ascii', errors='replace')
    print('\n'.join(screen[i:i+80].rstrip() for i in range(0, len(screen), 80)))
    if not machine.booted or '\nPERMAFROST-TEST\n' not in output.replace('\r', ''):
        raise SystemExit('boot/runtime test failed')


if __name__ == '__main__':
    main()
