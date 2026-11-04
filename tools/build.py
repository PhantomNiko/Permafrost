#!/usr/bin/env python3
"""Build Permafrost 0.7 BIOS/UEFI images and the macOS 15 SDK from C/C++."""
import argparse
import hashlib
import json
from pathlib import Path
from application import build_universal_application
from cc import compile_object
from firmware import build_bios
from kernel_native import build_kernel
from macho import pack,universal
from sdk import build_sdk
from uefi import build_loader
from fat import make_efi_volume
from gpt import make_disk as make_gpt_disk
from wmfs import make_disk


def build_program(name,extension,base,output,raw=False):
    images=[]
    for arch in ('i386','x86_64'):
        if arch=='i386':from elf32 import Object,link
        else:from elf64 import Object,link
        unit=output/(name+'-'+arch+'.o')
        compile_object(Path('apps',name+'.'+extension),unit,['sdk/include'],architecture=arch)
        code,_,_=link([Object(unit.read_bytes())],base=base,entry='main')
        images.append(code if raw else pack(code,base,architecture=arch))
    return universal(images,architectures=('i386','x86_64')if raw else None)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--out',type=Path,default=Path('build'))
    parser.add_argument('--sectors',type=int,default=131072)
    args=parser.parse_args();output=args.out;output.mkdir(parents=True,exist_ok=True)
    if args.sectors<100000:raise ValueError('user FAT32 partition needs a larger disk')
    app_root=output/'applications';app_root.mkdir(exist_ok=True)
    programs={name:build_universal_application(name,app_root/name)
              for name in ('lua','rwby','winterscript')}
    for name,extension,base in [('wozmon','cpp',0x200000),('expand-disk','c',0x200000),
            ('nightmode','cpp',0x240000),('graphics','c',0x240000),('textmode','c',0x240000)]:
        filename=name if name=='wozmon'else name+'.bin'
        programs[filename]=build_program(name,extension,base,app_root,raw=name!='wozmon')
        (app_root/filename).write_bytes(programs[filename])
    kernels={arch:build_kernel(output/'kernel'/arch,arch)for arch in ('i386','x86_64')}
    kernel=universal(list(kernels.values()))
    efi_kernel=universal([build_kernel(output/'kernel/i386-uefi','i386',
        Path('recovery/kernels/i386-uefi.json')),kernels['x86_64']])
    files={p.name:p.read_bytes()for p in Path('assets').iterdir()
           if p.is_file()and p.name not in ('firmware-startup.ws','recovery-startup.ws')}
    files.update(programs);files['Permafrost']=kernel
    notices=('LICENSE.TXT','licenses/UPSTREAM.TXT','licenses/THIRD-PARTY.TXT','LICENSES.md','DEPENDENCIES.md')
    for source in notices:files[Path(source).name]=Path(source).read_bytes()
    common={name:files[name]for name in ('Permafrost','bitmap-font.wbf',*[Path(n).name for n in notices])}
    firmware=common|{'expand-disk.bin':programs['expand-disk.bin'],
                     'startup.ws':Path('assets/firmware-startup.ws').read_bytes()}
    recovery=common|{'startup.ws':Path('assets/recovery-startup.ws').read_bytes()}
    boot,loader=build_bios(output/'firmware')
    bios=make_disk(boot,loader,firmware,recovery,files,sectors=args.sectors,
                   firmware_sectors=8192,recovery_sectors=8192)
    efi_files={'EFI/BOOT/'+('BOOTIA32.EFI'if arch=='i386'else'BOOTX64.EFI'):
               build_loader(output/'uefi'/arch,arch)for arch in ('i386','x86_64')}
    from wmfs import Image,repack_image
    efi_disk=bios
    for partition in range(3):
        volume=Image(efi_disk,partition).files();volume['Permafrost']=efi_kernel
        efi_disk=repack_image(efi_disk,volume,partition)
    uefi=make_gpt_disk(make_efi_volume(efi_files),efi_disk)
    results={}
    for name,image in [('Permafrost-0.7.img',bios),('Permafrost-0.7-UEFI.img',uefi)]:
        (output/name).write_bytes(image)
        results[name]={'bytes':len(image),'sha256':hashlib.sha256(image).hexdigest()}
        print('Built %s (%d bytes)'%(name,len(image)))
    sdk=build_sdk(output);archive=sdk.with_suffix('.sdk.zip')
    results[archive.name]={'bytes':archive.stat().st_size,'sha256':hashlib.sha256(archive.read_bytes()).hexdigest()}
    (output/'release.json').write_text(json.dumps({'version':'0.7','reference_version':'0.8','artifacts':results},indent=2)+'\n')


if __name__=='__main__':main()
