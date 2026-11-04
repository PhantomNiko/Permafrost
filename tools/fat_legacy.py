#!/usr/bin/env python3
"""Read FAT12/FAT16 EFI volumes used by reference distributions.

Pooka's Free Software License. Uses the shared directory and LFN decoder.
"""
import struct
from fat import FAT32


class FATLegacy(FAT32):
    def __init__(self, data, base=0):
        self.data, self.base = data, base
        self.bps = struct.unpack_from('<H', data, base + 11)[0]
        self.spc = data[base + 13]
        self.reserved = struct.unpack_from('<H', data, base + 14)[0]
        self.copies = data[base + 16]
        root_entries = struct.unpack_from('<H', data, base + 17)[0]
        self.total = struct.unpack_from('<H', data, base + 19)[0] or struct.unpack_from('<I', data, base + 32)[0]
        self.fat_sectors = struct.unpack_from('<H', data, base + 22)[0]
        if self.bps != 512 or not self.spc or self.spc & (self.spc - 1) or not self.fat_sectors or not root_entries:
            raise ValueError('unsupported FAT12/FAT16 geometry')
        if base + self.total * self.bps > len(data):
            raise ValueError('truncated FAT volume')
        root_sectors = (root_entries * 32 + self.bps - 1) // self.bps
        data_sector = self.reserved + self.copies * self.fat_sectors + root_sectors
        self.clusters = (self.total - data_sector) // self.spc
        if not 0 < self.clusters < 65525:
            raise ValueError('invalid FAT12/FAT16 cluster count')
        self.bits = 12 if self.clusters < 4085 else 16
        self.fat = base + self.reserved * self.bps
        self.root_start = base + (self.reserved + self.copies * self.fat_sectors) * self.bps
        self.root_bytes = root_entries * 32
        self.start = base + data_sector * self.bps
        self.cluster_size = self.bps * self.spc
        self.root = 0

    def chain(self, first):
        if first == 0:
            yield 0
            return
        seen = set()
        while first < (0xff8 if self.bits == 12 else 0xfff8):
            if not 2 <= first < self.clusters + 2 or first in seen:
                raise ValueError('invalid or cyclic FAT chain')
            seen.add(first)
            yield first
            offset = first * 3 // 2 if self.bits == 12 else first * 2
            if offset + 2 > self.fat_sectors * self.bps:
                raise ValueError('FAT entry exceeds table')
            value = struct.unpack_from('<H', self.data, self.fat + offset)[0]
            first = (value >> 4 if first & 1 else value & 0xfff) if self.bits == 12 else value

    def cluster(self, number):
        if number == 0:
            return self.data[self.root_start:self.root_start + self.root_bytes]
        return super().cluster(number)
