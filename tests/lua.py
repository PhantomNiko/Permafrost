#!/usr/bin/env python3
"""Exercise recovered WinterLua 0.2 through the native application loader.

The closure and dofile errors preserve limitations observed in the reference.
Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, repack_image
from boot import Machine

CASES = [
    ('literal', 'print("PF-LUA-PASS")', 'PF-LUA-PASS'),
    ('arithmetic', 'print(2 + 3 * 4)\nprint("PF-LUA-PASS")', '14\nPF-LUA-PASS'),
    ('assertion', 'assert(2 + 3 * 4 == 14)\nprint("PF-LUA-PASS")', 'PF-LUA-PASS'),
    ('table', 'local t={name="Permafrost",value=7}\nprint(t.name)\nprint("PF-LUA-PASS")',
     'Permafrost\nPF-LUA-PASS'),
    ('loop', 'local total=0\nfor i=1,12 do total=total+i end\nprint(total)\nprint("PF-LUA-PASS")',
     '78\nPF-LUA-PASS'),
    ('closure', 'local function makeAdder(n)\nreturn function(x) return n+x end\nend\n'
     'local add=makeAdder(5)\nprint(add(7))', 'attempted to capture a non-owning WinterLua environment'),
    ('pcall closure', 'local ok,message=pcall(function() error("PF-EXPECTED-ERROR") end)\nprint(ok)',
     'attempted to capture a non-owning WinterLua environment'),
    ('dofile', 'print(dofile("pf-nested.lua"))', 'attempt to call a nil value'),
]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    parser.add_argument('--application', type=Path)
    args = parser.parse_args()
    base = args.image.read_bytes()
    for name, source, expected in CASES:
        files = Image(base, 2).files()
        files.update({'index.lua': source.encode(), 'pf-nested.lua': b'return 17\n'})
        if args.application:
            files['lua'] = args.application.read_bytes()
        raw = repack_image(base, files, partition=2, sectors=max(81920, len(base) // 512))
        firmware = Image(raw).files()
        firmware['startup.ws'] = b'device("mount",4,"FAT32")\ndevice("target",4)\n'
        raw = repack_image(raw, firmware)
        output = Machine(raw, 'lua\n').run(300000000).replace('\r', '')
        if expected not in output:
            raise AssertionError(name + ': ' + repr(output[-1000:]))
        print('WinterLua ' + name + ': passed.', flush=True)


if __name__ == '__main__':
    main()
