#!/usr/bin/env python3
"""Compile the recovered EFI loaders from C. Pooka's Free Software License."""
import argparse
import json
from pathlib import Path
from cc import compile_object
from pe import inspect,pack


def build_loader(output,architecture,source_root=None):
    if architecture=='x86_64':
        from elf64 import Object,link
    elif architecture=='i386':
        from elf32 import Object,link
    else:raise ValueError('unsupported EFI architecture')
    root=Path(source_root) if source_root is not None else Path('firmware/uefi')/architecture
    output.mkdir(parents=True,exist_ok=True)
    flags=['-Wno-int-conversion','-Wno-incompatible-pointer-types',
           '-Wno-incompatible-function-pointer-types','-fshort-wchar']
    if architecture=='x86_64':flags+=['-mcmodel=large']
    objects=[]
    # Put zero-filled state last, allowing PE raw data to omit its BSS tail.
    for index,source in enumerate([root/'runtime.c',root/'entry.c',
            Path('kernel/runtime.c'),Path('kernel/compiler.c'),root/'state.c']):
        target=output/('unit%d.o'%index)
        compile_object(source,target,['sdk/include','kernel',str(root)],
                       ['PF_MS_ABI=1'],extra_flags=flags,architecture=architecture)
        objects.append(Object(target.read_bytes()))
    relocations=[]
    core,symbols,_=link(objects,base=0x1000,shim=False,relocations=relocations)
    binary=pack(core,symbols['pf_efi_entry'],relocations,architecture)
    metadata,memory=inspect(binary)
    if memory[0x1000:0x1000+len(core)]!=core:raise ValueError('EFI round trip failed')
    name='BOOTX64.EFI'if architecture=='x86_64'else'BOOTIA32.EFI'
    (output/name).write_bytes(binary)
    (output/'core-map.json').write_text(json.dumps(symbols,indent=2)+'\n')
    print('Built %s from C: %d bytes'%(name,len(binary)))
    return binary


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--arch',choices=('i386','x86_64'),default='x86_64')
    parser.add_argument('--out',type=Path,default=Path('build/uefi'))
    args=parser.parse_args();build_loader(args.out,args.arch)
