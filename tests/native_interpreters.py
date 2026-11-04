#!/usr/bin/env python3
"""Exercise the source-built Rwby and standalone WinterScript VMs."""
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
    parser.add_argument('--program',choices=('all','rwby','winterscript'),default='all')
    for name in ('bochs','bios','vgabios'):
        parser.add_argument('--'+name,type=Path,required=True)
    args=parser.parse_args()
    cases=[('rwby','index.rb','native-rwby.rb','PF-RWBY-PASS'),
           ('winterscript','index.ws','native-winterscript.ws','PF-NATIVE-WS-PASS')]
    if args.program!='all':cases=[case for case in cases if case[0]==args.program]
    with tempfile.TemporaryDirectory(prefix='permafrost-native-vm-') as temp:
        root=Path(temp)
        for path in args.images:
            base=path.read_bytes()
            queue_source='tests/keyqueue.c'
            for program,filename,fixture,marker in cases:
                source=Path(__file__).with_name(fixture).read_bytes()
                queue=root/'queue.bin'
                # Keep the queue below the default heap and above the VM cores.
                subprocess.run(['build/Permafrost0.7.sdk/bin/pf-cc',queue_source,'--format','flat',
                    '--base','0x2e0000','-D','PF_KEYS="'+program+'\\r"','-o',str(queue)],
                    check=True,stdout=subprocess.DEVNULL)
                files=Image(base,2).files()
                files.update({'queue.bin':queue.read_bytes(),filename:source})
                image=root/'disk.img'
                image.write_bytes(repack_image(base,files,partition=2,sectors=max(81920,len(base)//512)))
                script=root/'startup.ws'
                script.write_text('assert(runcode("/queue.bin",$2e0000)==1)\n')
                command=[sys.executable,str(Path(__file__).with_name('hardware.py')),str(image),
                    '--script',str(script),'--expect',marker,'--timeout','90']
                for name in ('bochs','bios','vgabios'):command+=['--'+name,str(getattr(args,name))]
                result=subprocess.run(command,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True)
                if result.returncode:raise SystemExit(result.stdout)
                if program=='rwby' and '613566757.571429' not in result.stdout:
                    raise AssertionError('Rwby large-number formatting differs')
                print(path.name+': source-built '+program+' conformance checks passed.',flush=True)


if __name__=='__main__':main()
