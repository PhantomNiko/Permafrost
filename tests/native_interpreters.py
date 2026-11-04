#!/usr/bin/env python3
"""Run the packaged Rwby and standalone WinterScript VMs on test images."""
import argparse
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, repack_image


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('images',type=Path,nargs='+')
    for name in ('bochs','bios','vgabios'):
        parser.add_argument('--'+name,type=Path,required=True)
    args=parser.parse_args()
    cases=[('rwby','index.rb',
        'total=0\ni=1\nwhile i<=12\ntotal=total+i\ni=i+1\nend\n'
        'if total==78\nif 2+3*4==14\nprint("PF-RWBY-PASS")\nend\nend\n','PF-RWBY-PASS'),
        ('winterscript','index.ws',
        'total=0\ni=1\nwhile i<=12\ntotal=total+i\ni=i+1\nend\n'
        'assert(total==78)\nassert(2+3*4==14)\nprint("PF-NATIVE-WS-PASS")\n','PF-NATIVE-WS-PASS')]
    with tempfile.TemporaryDirectory(prefix='permafrost-native-vm-') as temp:
        root=Path(temp)
        for path in args.images:
            base=path.read_bytes()
            queue_source='tests/openbios_queue.c' if 'OpenBIOS.wmlp' in Image(base).files() else 'tests/keyqueue.c'
            for program,filename,source,marker in cases:
                queue=root/'queue.bin'
                subprocess.run(['build/Permafrost0.6.sdk/bin/pf-cc',queue_source,'--format','flat',
                    '--base','0x280000','-D','PF_KEYS="'+program+'\\r"','-o',str(queue)],
                    check=True,stdout=subprocess.DEVNULL)
                files=Image(base,2).files()
                files.update({'queue.bin':queue.read_bytes(),filename:source.encode()})
                image=root/'disk.img'
                image.write_bytes(repack_image(base,files,partition=2,sectors=max(81920,len(base)//512)))
                script=root/'startup.ws'
                script.write_text('assert(runcode("/queue.bin",$280000)==1)\n')
                command=[sys.executable,str(Path(__file__).with_name('hardware.py')),str(image),
                    '--script',str(script),'--expect',marker,'--timeout','45']
                for name in ('bochs','bios','vgabios'):command+=['--'+name,str(getattr(args,name))]
                result=subprocess.run(command,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True)
                if result.returncode:raise SystemExit(result.stdout)
                print(path.name+': bundled '+program+' arithmetic and loop checks passed.',flush=True)


if __name__=='__main__':main()
