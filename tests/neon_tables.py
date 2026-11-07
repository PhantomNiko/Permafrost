#!/usr/bin/env python3
"""Compare SIMD byte-table lookup with native ARM instructions.

Pooka's Free Software License.
"""
from compiler_targets import main
if __name__ == '__main__':
    main('tests/neon_tables.c', ('armv7',))
