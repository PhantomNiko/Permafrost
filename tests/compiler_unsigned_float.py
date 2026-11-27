#!/usr/bin/env python3
"""Execute unsigned-to-float rounding cases on all four target CPUs.

Pooka's Free Software License.
"""
from compiler_targets import main

if __name__ == '__main__':
    main('tests/compiler_unsigned_float.c')
