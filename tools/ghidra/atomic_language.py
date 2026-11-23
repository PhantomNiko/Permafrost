#!/usr/bin/env python3
"""Keep ARM exclusive instructions explicit in analysis-only SLEIGH models.

Pooka's Free Software License. This edits an installed analysis tool, never
the supplied executable or any release image. Original language sources are
backed up beside the tool files. Ghidra retains its own Apache 2.0 license.
"""
import argparse
import os
from pathlib import Path
import re
import subprocess


def replace_instructions(source, thumb=False):
    counts = {}
    pattern = re.compile(r'(^:(ldrex[bhd]?|strex[bhd]?)\^[^{]+\{)([^}]+)\}', re.M)
    def replace(match):
        header, name, old = match.groups()
        counts[name] = counts.get(name, 0) + 1
        suffix = name[5:]
        width = {'':32, 'b':8, 'h':16, 'd':64}[suffix]
        condition = 'ItCond' if thumb else 'COND'
        setup = '  build '+condition+';\n'
        if not thumb:
            address, low, high, result = 'Rn', 'Rm', 'Rm2', 'Rd'
            loaded, loaded_high = 'Rd', 'Rd2'
        else:
            address, low, high = 'Rn0003', 'Rt1215', 'Rt0811'
            result = 'Rd0811' if width==32 else 'Rd0003'
            loaded, loaded_high = 'Rt1215', 'Rt0811'
            if width==32:
                setup += '  build Immed8_4;\n  local address:4 = Rn0003 + Immed8_4;\n'
                address = 'address'
        if name.startswith('ldrex'):
            if width==64:
                body = ('  local value:8 = pf_arm_ldrex64('+address+');\n'
                        '  '+loaded+' = value:4;\n  '+loaded_high+' = value(4);\n')
            else:
                body = '  '+loaded+' = pf_arm_ldrex'+str(width)+'('+address+');\n'
        else:
            if width==64:
                setup += '  local value:8 = (zext('+high+') << 32) | zext('+low+');\n'
                value = 'value'
            else:
                value = low
            body = '  '+result+' = pf_arm_strex'+str(width)+'('+address+','+value+');\n'
        return header+'\n'+setup+body+'}'
    source = pattern.sub(replace, source)
    if counts != {name:1 for name in ['ldrex','ldrexb','ldrexh','ldrexd','strex','strexb','strexh','strexd']}:
        raise ValueError('unexpected ARM instruction definitions: '+str(counts))
    return source


def prepare(ghidra, java_home):
    language = ghidra/'Ghidra/Processors/ARM/data/languages'
    for name in ['ARM.sinc', 'ARMinstructions.sinc', 'ARMTHUMBinstructions.sinc']:
        path = language/name
        backup = path.with_suffix(path.suffix+'.permafrost-original')
        if not backup.exists():
            backup.write_bytes(path.read_bytes())
        original = backup.read_text()
        if name=='ARM.sinc':
            additions=''.join('define pcodeop pf_arm_'+op+str(width)+';\n'
                              for op in ['ldrex','strex'] for width in [8,16,32,64])
            updated=original.replace('define pcodeop hasExclusiveAccess;',
                                      'define pcodeop hasExclusiveAccess;\n'+additions)
            if updated==original:raise ValueError('exclusive-access userop declaration not found')
        else:
            updated=replace_instructions(original,thumb=name.startswith('ARMTHUMB'))
        path.write_text(updated)
    environment=dict(os.environ,JAVA_HOME=str(java_home),
                     JAVA_TOOL_OPTIONS='-Duser.home='+str(Path('build/ghidra-home').resolve()))
    subprocess.run([str((ghidra/'support/sleigh').resolve()),str((language/'ARM7_le.slaspec').resolve())],
                   env=environment,check=True)
    print('Built explicit ARM exclusive-instruction analysis models.')


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--ghidra',type=Path,required=True)
    parser.add_argument('--java-home',type=Path)
    args=parser.parse_args()
    java=args.java_home or next(Path('build/host-tools/jdk').glob('*/Contents/Home'))
    prepare(args.ghidra,java.resolve())
