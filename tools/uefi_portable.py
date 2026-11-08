#!/usr/bin/env python3
"""Compile the shared Permafrost EFI loader for all four supported CPUs.

Pooka's Free Software License.
"""
import argparse
import json
import os
from pathlib import Path
import struct
import subprocess

from pe import pack, inspect


def build_loader(output, architecture, source=None):
    output=Path(output);output.mkdir(parents=True,exist_ok=True)
    root=Path(source) if source is not None else Path('firmware/uefi/common')
    sources=[root/'loader.c',Path('kernel/runtime.c'),Path('kernel/compiler.c')]
    includes=[str(root),'sdk/include']
    objects=[];data_start=None
    if architecture in ('i386','x86_64'):
        from cc import compile_object
        if architecture=='i386':from elf32 import Object,link
        else:from elf64 import Object,link
        for i,source in enumerate(sources):
            obj=output/('unit%d.o'%i)
            flags=['-w','-fshort-wchar']+(['-mcmodel=large']if architecture=='x86_64'else[])
            compile_object(source,obj,includes,architecture=architecture,extra_flags=flags)
            objects.append(Object(obj.read_bytes()))
        relocations=[]
        core,symbols,_=link(objects,base=0x1000,shim=False,relocations=relocations)
        entry=symbols['pf_efi_entry']
    elif architecture in ('armv7','arm64'):
        from darwin import compile_object
        from dylib import inspect as dynamic_inspect,rebase_locations
        from native import inspect as native_inspect
        for i,source in enumerate(sources):
            obj=output/('unit%d.o'%i)
            # Darwin treats r9 as scratch; UEFI AAPCS callbacks must preserve it.
            flags=['-w','-fshort-wchar']+(['-mthumb','-mfloat-abi=soft','-ffixed-r9','-fno-vectorize','-fno-slp-vectorize']if architecture=='armv7'else[])
            compile_object(source,obj,architecture,includes,pic=True,extra_flags=flags)
            objects.append(str(obj))
        stub='--- !tapi-tbd-v3\narchs: [ '+architecture+' ]\nplatform: ios\ninstall-name: /usr/lib/libSystem.B.dylib\nexports:\n  - archs: [ '+architecture+' ]\n    symbols: [ _pf_link_dummy ]\n...\n'
        (output/'libSystem.tbd').write_text(stub)
        linked=output/'linked.dylib'
        subprocess.run([os.environ.get('PF_LD','ld'),'-arch',architecture,'-dylib','-no_uuid',
                        '-no_fixup_chains','-no_adhoc_codesign','-dead_strip','-exported_symbol','_pf_efi_entry','-install_name','PermafrostFirmware',
                        '-o',str(linked),'-L'+str(output),'-lSystem','-dead_strip_dylibs',
                        '-undefined','dynamic_lookup',*objects],check=True)
        binary=linked.read_bytes();dynamic=dynamic_inspect(binary)
        if {x['name'] for x in dynamic['imports']}-{'dyld_stub_binder'}:
            raise ValueError('firmware has unresolved runtime dependencies')
        data_start=0x1000+min(s['address']for s in dynamic['segments']if s['name'].startswith('__DATA'))
        metadata,memory=native_inspect(binary)
        if metadata['base']!=0:raise ValueError('unexpected firmware link base')
        end=max(a+n for _,a,n in metadata['sections']);core=bytearray(memory[:end])
        symbols={name:a for a,name in metadata['symbols']+metadata['data_symbols']}
        entry=symbols['_pf_efi_entry']+0x1000
        if architecture=='armv7':entry|=1
        relocations=[]
        for address,width in rebase_locations(binary,dynamic):
            if address+width>len(core):raise ValueError('firmware relocation outside sections')
            value=int.from_bytes(core[address:address+width],'little')
            core[address:address+width]=(value+0x1000).to_bytes(width,'little')
            relocations.append((address+0x1000,width))
    else:raise ValueError('unsupported EFI architecture')
    binary=pack(core,entry,relocations,architecture,data_start=data_start)
    metadata,memory=inspect(binary)
    if memory[0x1000:0x1000+len(core)]!=core:raise ValueError('source EFI round trip failed')
    name={'i386':'BOOTIA32.EFI','x86_64':'BOOTX64.EFI','armv7':'BOOTARM.EFI','arm64':'BOOTAA64.EFI'}[architecture]
    (output/name).write_bytes(binary)
    (output/'core-map.json').write_text(json.dumps(symbols,indent=2)+'\n')
    print('Built %s from shared C firmware: %d bytes'%(name,len(binary)))
    return binary


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--arch',choices=('i386','x86_64','armv7','arm64'),required=True)
    parser.add_argument('--out',type=Path,required=True)
    parser.add_argument('--source',type=Path,help='firmware source directory for recovery diagnostics')
    args=parser.parse_args();build_loader(args.out,args.arch,args.source)
