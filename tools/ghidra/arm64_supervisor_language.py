#!/usr/bin/env python3
"""Keep SMCCC arguments and results explicit in analysis-only AArch64 models.

Pooka's Free Software License. Ghidra retains its own Apache 2.0 license.
"""
import argparse
from pathlib import Path


def patch(source):
    for name,old in [('hvc','CallHyperVisor'),('smc','CallSecureMonitor')]:
        before=old+'(imm16:2);'
        after='x0 = pf_arm64_'+name+'(imm16:2,x0,x1,x2,x3);'
        if after in source:continue
        if source.count(before)!=1:raise ValueError('Unexpected supervisor model: '+name)
        source=source.replace(before,after)
    return source


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('languages',type=Path)
    args=parser.parse_args();path=args.languages/'AARCH64base.sinc'
    backup=path.with_suffix('.sinc.permafrost-supervisor-original')
    if not backup.exists():backup.write_bytes(path.read_bytes())
    path.write_text(patch(path.read_text()))
    path=args.languages/'AARCH64instructions.sinc';source=path.read_text()
    for name in ['smc','hvc']:
        declaration='define pcodeop pf_arm64_'+name+';'
        source=source.replace(declaration+'\n','')
        marker='define pcodeop CallSecureMonitor;'
        if source.count(marker)!=1:raise ValueError('Supervisor declaration not found')
        source=source.replace(marker,marker+'\n'+declaration)
    path.write_text(source)
    print('Preserved AArch64 SMCCC arguments and return values; compile the language before analysis.')
