#!/usr/bin/env python3
"""Boot relocated-SDK C and C++ Mach-O applications through the BIOS OS prompt.

All programs and disk modifications are confined to test copies.
Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from wmfs import Image,repack_image
from macho import segments


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('images',type=Path,nargs='+')
    for name in ['bochs','bios','vgabios']:
        parser.add_argument('--'+name,type=Path,required=True)
    args=parser.parse_args()
    with tempfile.TemporaryDirectory(prefix='permafrost sdk macho ') as temp:
        root=Path(temp);sdk=root/'relocated SDK.sdk';shutil.copytree('build/Permafrost0.6.sdk',sdk)
        compiler=sdk/'bin/pf-cc'
        queue=root/'queue.bin'
        subprocess.run([str(compiler),'tests/keyqueue.c','--format','flat','--base','0x240000',
                        '-D','PF_KEYS="hello\\r"','-o',str(queue)],check=True,stdout=subprocess.DEVNULL)
        for language in ['c','cpp']:
            source=root/('hello.'+language)
            source.write_text('#include <permafrost.h>\n'+
                ('extern "C" ' if language=='cpp' else '')+
                'int main(void) { pf_log("PF-MACHO-%s result=%u signed=%d hex=%08X", "'+language+'", 42U, -7, 0xBEEFU); return 42; }\n')
            target=root/'hello';subprocess.run([str(compiler),str(source),'-o',str(target)],check=True,stdout=subprocess.DEVNULL)
            parts,entry=segments(target.read_bytes());assert entry==0x200000 and parts[0][0]==0x200000
            for path in args.images:
                raw=path.read_bytes();files=Image(raw,2).files()
                files.update({'hello':target.read_bytes(),'queue.bin':queue.read_bytes()})
                raw=repack_image(raw,files,partition=2,sectors=max(81920,len(raw)//512))
                image=root/'disk.img';image.write_bytes(raw)
                script=root/'startup.ws';script.write_text('assert(runcode("/queue.bin",$240000)==1)\n')
                expect='PF-MACHO-'+language+' result=42 signed=-7 hex=0000BEEF'
                command=[sys.executable,str(Path(__file__).with_name('hardware.py')),str(image),
                    '--script',str(script),'--expect',expect,'--timeout','35']
                for name in ['bochs','bios','vgabios']:command+=['--'+name,str(getattr(args,name))]
                if any(value[:4]==b'WMLP' and value[16:18]==b'\xfc\xe8' for value in Image(raw).files().values()):
                    command.append('--initialize-fpu')
                result=subprocess.run(command,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True)
                if result.returncode:raise SystemExit(result.stdout)
                print(path.name+': relocated-SDK '+language+' Mach-O program executed through the OS prompt.')


if __name__=='__main__':main()
