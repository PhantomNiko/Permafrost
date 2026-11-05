#!/usr/bin/env python3
"""Compare guest directory sizes with known files and on-disk directory records.

Uses only temporary guest disk copies. Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import re
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from wmfs import Image,repack_image


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('images',type=Path,nargs='+')
    for name in ['bochs','bios','vgabios']:
        parser.add_argument('--'+name,type=Path,required=True)
    args=parser.parse_args()
    probes={'pf-size-empty':b'', 'pf-size-one':b'x',
            'pf-size-boundary':b'a'*257,'pf-size-clusters':b'b'*4097}
    for path in args.images:
        raw=path.read_bytes();files=Image(raw,2).files();files.update(probes)
        raw=repack_image(raw,files,partition=2,sectors=max(81920,len(raw)//512))
        # Record lengths independently of the guest's directory printer.
        expected={name:len(value) for name,value in Image(raw,2).files().items()}
        for name,value in probes.items():
            assert expected[name]==len(value),'on-disk probe size differs'
        with tempfile.TemporaryDirectory(prefix='permafrost-directory-test-') as temp:
            root=Path(temp);image=root/'disk.img';image.write_bytes(raw)
            script=root/'directory.ws'
            script.write_text('serial("PF-DIRECTORY-BEGIN")\ndir("list")\nserial("PF-DIRECTORY-PASS")\n')
            command=[sys.executable,str(Path(__file__).with_name('hardware.py')),str(image),
                '--script',str(script),'--expect','PF-DIRECTORY-PASS','--timeout','40']
            for name in ['bochs','bios','vgabios']:command+=['--'+name,str(getattr(args,name))]
            if any(value[:4]==b'WMLP' and value[16]==0xfc for value in Image(raw).files().values()):
                command.append('--initialize-fpu')
            result=subprocess.run(command,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True)
            if result.returncode:raise SystemExit(result.stdout)
            actual={name.lstrip('/'):int(size) for name,size in re.findall(r'^([^\r\n]+) \((\d+) bytes\)',result.stdout,re.M)}
            for name,size in expected.items():
                if actual.get(name)!=size:
                    raise SystemExit(result.stdout+'\n'+'%s: %s listed as %r bytes; expected %d'%(path.name,name,actual.get(name),size))
            print('%s: %d file sizes match disk records, including 0/1/257/4097-byte probes.'%(path.name,len(expected)))


if __name__=='__main__':main()
