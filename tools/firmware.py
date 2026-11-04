#!/usr/bin/env python3
"""Build the C BIOS boot chain. Pooka's Free Software License."""
import argparse
from pathlib import Path
from cc import compile_object
from elf32 import Object, link


def build_bios(output):
    output.mkdir(parents=True, exist_ok=True)
    def compile(source):
        source = Path(source)
        target = output / (source.stem + '.o')
        compile_object(source, target, ['sdk/include', 'firmware'])
        return Object(target.read_bytes())
    bridge, bridge_symbols, _ = link([compile('firmware/bios-transition.c')],
                                     base=0x9000, shim=False)
    core, core_symbols, _ = link([compile('firmware/legacy.c'),
        compile('kernel/runtime.c'), compile('kernel/compiler.c')],
        base=0xa000, shim=False, externals=bridge_symbols)
    entry, _, _ = link([compile('firmware/legacy-entry.c')], base=0x8000,
                       shim=False, externals=core_symbols)
    boot, _, _ = link([compile('firmware/boot-sector.c')], base=0x7c00, shim=False)
    # Reserve the last 4 KiB below 64 KiB for the real-mode BIOS stack.
    if len(entry)>0x1000 or len(bridge)>0x1000 or len(core)>0x5000 or len(boot)!=512:
        raise ValueError('firmware exceeds its reserved boot or stack extent')
    loader=bytearray(32768)
    for offset,data in ((0,entry),(0x1000,bridge),(0x2000,core)):
        loader[offset:offset+len(data)]=data
    (output/'boot.bin').write_bytes(boot)
    (output/'loader.bin').write_bytes(loader)
    print('Built C BIOS firmware: %d bytes of C code/data, %d bytes of boot/mode transitions.' %
          (len(core),len(boot)+len(entry)+len(bridge)))
    return boot,bytes(loader)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--out',type=Path,default=Path('build/firmware'))
    args=parser.parse_args()
    build_bios(args.out)


if __name__=='__main__':main()
