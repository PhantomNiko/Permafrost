#!/usr/bin/env python3
"""Compare SIMD variable shifts and saturation with native ARM instructions.

Pooka's Free Software License.
"""
from compiler_targets import main
if __name__ == '__main__':
    main('tests/neon_shift_counts.c', ('armv7',))
