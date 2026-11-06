#!/usr/bin/env python3
"""Compare scalar permutation recovery with actual ARM NEON execution.

Pooka's Free Software License.
"""
from compiler_targets import main

if __name__ == '__main__':
    main('tests/neon_permutations.c', ('armv7',))
