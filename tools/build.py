#!/usr/bin/env python3
"""Build Permafrost entirely from checked-in source, without a reference image."""
import argparse
import hashlib
import subprocess
from pathlib import Path
from wmfs import make_disk
from kernel import compile_kernel
from cc import compile_object
from elf32 import Object, link
from lua import compile_lua


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--nasm', default='nasm')
    parser.add_argument('--out', type=Path, default=Path('build'))
    parser.add_argument('--sectors', type=int, default=None)
    parser.add_argument('--lua-source', type=Path, default=Path('../lua'))
    args = parser.parse_args()
    args.out.mkdir(parents=True, exist_ok=True)
    for variant in ('i386','IA64'):
        output = args.out / variant
        compile_kernel(output, variant)
        for part, source in (('boot','boot'),('loader','loader-'+variant),('kernel','kernel')):
            subprocess.run([args.nasm,'-I',str(output)+'/', '-f','bin','src/'+source+'.asm',
                            '-o',str(output/(part+'.bin'))],check=True)
        if variant=='IA64':
            subprocess.run([args.nasm,'-I',str(output)+'/', '-f','bin','src/long-entry.asm',
                            '-o',str(output/'kernel64.bin')],check=True)
        applications = {}
        for name,extension,base in [('wozmon','cpp',0x220000),('expand-disk','c',0x200000),
                                    ('nightmode','cpp',0x200000),('graphics','c',0x200000),('textmode','c',0x200000)]:
            target=output/(name+'.o')
            compile_object('apps/'+name+'.'+extension,target,['sdk/include'],
                           defines=['PF_TARGET_IA64=1'] if variant=='IA64' else [])
            binary,_,_=link([Object(target.read_bytes())],base=base,entry='main')
            (output/(name+'.bin')).write_bytes(binary)
            applications[name+'.bin']=binary
        files={p.name:p.read_bytes() for p in Path('assets').iterdir()
               if p.is_file() and p.name not in ('firmware-startup.ws','recovery-startup.ws')}
        files.update(applications)
        files['lua.bin']=compile_lua(output/'lua',args.lua_source,variant)
        files['LUA-LICENSE.TXT']=(output/'lua/LUA-LICENSE.TXT').read_bytes()
        files['THIRD-PARTY.TXT']=Path('licenses/THIRD-PARTY.TXT').read_bytes()
        files.update({'Permafrost-kernel.bin':(output/'kernel.bin').read_bytes(),
                      'LICENSE.TXT':Path('LICENSE.TXT').read_bytes(),
                      'UPSTREAM.TXT':Path('licenses/UPSTREAM.TXT').read_bytes()})
        common={name:files[name] for name in ('Permafrost-kernel.bin','bitmap-font.wbf','LICENSE.TXT','UPSTREAM.TXT')}
        firmware=common|{'expand-disk.bin':applications['expand-disk.bin'],
                         'startup.ws':Path('assets/firmware-startup.ws').read_bytes()}
        recovery=common|{'startup.ws':Path('assets/recovery-startup.ws').read_bytes()}
        if variant=='IA64':
            files['Permafrost64-kernel.bin']=(output/'kernel64.bin').read_bytes()
            firmware['Permafrost64-kernel.bin']=files['Permafrost64-kernel.bin']
        sectors=args.sectors or (16384 if variant=='IA64' else 8192)
        result=make_disk((output/'boot.bin').read_bytes(),(output/'loader.bin').read_bytes(),
                         firmware,recovery,files,sectors,
                         firmware_sectors=4097 if variant=='IA64' else 2048)
        name='Permafrost-0.4-'+variant+'.img'
        (args.out/name).write_bytes(result)
        print('Built %s (%d bytes, SHA-256 %s)'%(name,len(result),hashlib.sha256(result).hexdigest()))


if __name__ == '__main__':
    main()
