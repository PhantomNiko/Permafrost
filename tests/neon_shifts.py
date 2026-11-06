#!/usr/bin/env python3
"""Compare scalar SIMD shifts and conversions with native ARM instructions.

Pooka's Free Software License.
"""
from compiler_targets import main
if __name__ == '__main__':
    main('tests/neon_shifts.c', ('armv7',))
