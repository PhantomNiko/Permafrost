#!/usr/bin/env python3
"""Small deterministic LZ4 block writer. Pooka's Free Software License."""
import struct


def compress(data):
    data = bytes(data)
    output, table = bytearray(), {}
    start = pos = 0
    def length(value):
        while value >= 255:
            output.append(255)
            value -= 255
        output.append(value)
    while pos + 12 <= len(data):
        key = data[pos:pos + 4]
        previous = table.get(key, -1)
        table[key] = pos
        if previous < 0 or pos - previous > 65535:
            pos += 1
            continue
        count = 4
        while pos + count < len(data) - 5 and data[previous + count] == data[pos + count]:
            count += 1
        literal, match = pos - start, count - 4
        output.append(min(literal, 15) * 16 + min(match, 15))
        if literal >= 15:
            length(literal - 15)
        output.extend(data[start:pos])
        output.extend(struct.pack('<H', pos - previous))
        if match >= 15:
            length(match - 15)
        end = pos + count
        for point in range(pos + 1, end):
            table[data[point:point + 4]] = point
        start = pos = end
    remaining = len(data) - start
    output.append(min(remaining, 15) << 4)
    if remaining >= 15:
        length(remaining - 15)
    output.extend(data[start:])
    return bytes(output)


def envelope(data):
    packed = compress(data)
    return b'WBCP' + struct.pack('<3I', 1, len(data), len(packed)) + packed
