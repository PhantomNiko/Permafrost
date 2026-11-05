#!/usr/bin/env python3
"""Build Permafrost 0.8 BIOS/UEFI images and the macOS 15 SDK from C/C++."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys
from firmware import build_bios
from kernel_native import build_kernel
from arm_kernel import build_kernel as build_arm_kernel
from library_native import build_library
from macho import universal
from sdk import build_sdk
from uefi_portable import build_loader
from fat import make_efi_volume
from gpt import make_disk as make_gpt_disk
from wmfs import make_disk

ARCHITECTURES=('i386','x86_64','armv7','arm64')
LIBRARIES=('window','audio','console-window','lua','png','piet','rwby','winterscript','ttf')
EFI_NAMES=dict(i386='BOOTIA32.EFI',x86_64='BOOTX64.EFI',armv7='BOOTARM.EFI',arm64='BOOTAA64.EFI')


def build_program(name,extension,output,raw=False):
    target=output/(name+('.bin'if raw else''))
    subprocess.run([sys.executable,'tools/cc.py',str(Path('apps',name+'.'+extension)),
                    '--arch','universal','--runtime','--format','flat'if raw else'macho',
                    '-o',str(target)],check=True)
    return target.read_bytes()


def volume_sectors(files):
    # WMFS stores whole 4 KiB clusters. Leave space for its FAT and directory.
    data=sum((len(value)+4095)//4096*8 for value in files.values())
    return max(8192,((data+(data//1024)+len(files)+2048+2047)//2048)*2048)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--out',type=Path,default=Path('build'))
    parser.add_argument('--sectors',type=int,help='disk sectors; defaults to the smallest MiB-aligned layout with a FAT32 user volume')
    args=parser.parse_args();output=args.out;output.mkdir(parents=True,exist_ok=True)
    app_root=output/'utilities';app_root.mkdir(exist_ok=True)
    programs={}
    for name,extension in(('wozmon','cpp'),('expand-disk','c'),('nightmode','cpp'),('graphics','c'),('textmode','c')):
        filename=name if name=='wozmon'else name+'.bin'
        programs[filename]=build_program(name,extension,app_root,raw=name!='wozmon')
    kernels={arch:build_kernel(output/'kernel'/arch,arch)for arch in ARCHITECTURES[:2]}
    for arch in ARCHITECTURES[2:]:kernels[arch]=build_arm_kernel(Path('kernel',arch),output/'kernel'/arch)
    kernel=universal([kernels[arch]for arch in ARCHITECTURES])
    efi_kernel=universal([build_kernel(output/'kernel/i386-uefi','i386',
        Path('recovery/kernels/i386-uefi.json')),*[kernels[arch]for arch in ARCHITECTURES[1:]]])
    libraries={}
    for directory in LIBRARIES:
        slices=[]
        for arch in ARCHITECTURES:
            source=Path('libraries',directory,arch)
            profile=json.loads((source/'profile.json').read_text())
            if profile['version']!='0.8':raise ValueError('library does not target the current release')
            slices.append(build_library(source,output/'libraries'/directory/arch).read_bytes())
        libraries[profile['module']+'.dylib']=universal(slices)
    files={p.name:p.read_bytes()for p in Path('assets').iterdir()
           if p.is_file()and p.name not in ('firmware-startup.ws','recovery-startup.ws')}
    files.update(programs);files['Permafrost']=kernel
    notices=('LICENSE.TXT','licenses/UPSTREAM.TXT','licenses/THIRD-PARTY.TXT','LICENSES.md','DEPENDENCIES.md')
    for source in notices:files[Path(source).name]=Path(source).read_bytes()
    common={name:files[name]for name in ('Permafrost','bitmap-font.wbf',*[Path(n).name for n in notices])}
    common.update({'lib/'+name:value for name,value in libraries.items()})
    firmware=common|{'expand-disk.bin':programs['expand-disk.bin'],
                     'startup.ws':Path('assets/firmware-startup.ws').read_bytes()}
    recovery=common|{'startup.ws':Path('assets/recovery-startup.ws').read_bytes()}
    boot,loader=build_bios(output/'firmware')
    sizes=[volume_sectors(firmware),volume_sectors(recovery)]
    sectors=args.sectors or max(131072,((sum(sizes)+66+70000+2047)//2048)*2048)
    if sectors-sum(sizes)-66<70000:raise ValueError('disk needs at least 70000 sectors after firmware and recovery')
    bios=make_disk(boot,loader,firmware,recovery,files,sectors=sectors,
                   firmware_sectors=sizes[0],recovery_sectors=sizes[1])
    efi_files={'EFI/BOOT/'+EFI_NAMES[arch]:build_loader(output/'uefi'/arch,arch)for arch in ARCHITECTURES}
    from wmfs import Image,repack_image
    efi_disk=bios
    for partition in range(3):
        volume=Image(efi_disk,partition).files();volume['Permafrost']=efi_kernel
        efi_disk=repack_image(efi_disk,volume,partition)
    uefi=make_gpt_disk(make_efi_volume(efi_files),efi_disk)
    results={}
    for name,image in [('Permafrost-0.8.img',bios),('Permafrost-0.8-UEFI.img',uefi)]:
        (output/name).write_bytes(image)
        results[name]={'bytes':len(image),'sha256':hashlib.sha256(image).hexdigest()}
        print('Built %s (%d bytes)'%(name,len(image)),flush=True)
    sdk=build_sdk(output,libraries=libraries);archive=sdk.with_suffix('.sdk.zip')
    results[archive.name]={'bytes':archive.stat().st_size,'sha256':hashlib.sha256(archive.read_bytes()).hexdigest()}
    (output/'release.json').write_text(json.dumps({'version':'0.8','reference_version':'0.9',
        'architectures':list(ARCHITECTURES),'artifacts':results},indent=2)+'\n')


if __name__=='__main__':main()
