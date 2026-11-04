#!/usr/bin/env python3
"""Run current-release BIOS/OpenBIOS checks on temporary guest disk copies."""
import argparse
from pathlib import Path
import subprocess
import sys


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path)
    parser.add_argument('images',type=Path,nargs='+')
    for name in ('bochs','bios','vgabios'):
        parser.add_argument('--'+name,type=Path,required=True)
    args=parser.parse_args()
    firmware=[]
    for name in ('bochs','bios','vgabios'):firmware+=['--'+name,str(getattr(args,name))]
    root=Path(__file__).parent
    for test in ('selftest.py','services.py','macho_apps.py','native_interpreters.py'):
        subprocess.run([sys.executable,str(root/test),*[str(p) for p in args.images],*firmware],check=True)
    for image in args.images:
        subprocess.run([sys.executable,str(root/'native_lua.py'),str(image),*firmware],check=True)
    # Directory-size comparison uses the BIOS reference and its matching image.
    bios=next((p for p in args.images if 'OpenBIOS' not in p.name),None)
    if bios:
        subprocess.run([sys.executable,str(root/'directory_sizes.py'),str(args.reference),str(bios),*firmware],check=True)
    print('Current-release hardware checks passed.')


if __name__=='__main__':main()
