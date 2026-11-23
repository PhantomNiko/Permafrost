#!/usr/bin/env python3
"""Preserve encoded ARM coprocessor selectors and coherent paired reads.

Analysis-only changes to an installed Ghidra language. Pooka's Free Software
License. Ghidra and its language files retain their Apache 2.0 license.
"""
import argparse
from pathlib import Path
import re


def patch(source):
    if 'pf_crm=(0,3)' not in source:
        source=source.replace('CRm=(0,3)','CRm=(0,3)\n    pf_crm=(0,3)\n    pf_crn=(16,19)',1)
    pattern=re.compile(r'(^:(mrc|mcr|mrrc|mcrr)(?:2|\^COND)[^{]+)\{([^}]+)\}',re.M)
    counts={}
    def instruction(match):
        header,name,body=match.groups()
        counts[name]=counts.get(name,0)+1
        if '& pf_crm & pf_crn' not in header:
            header=header.rstrip()+' & pf_crm & pf_crn\n'
        body=re.sub(r'\bCRm\b','pf_crm',body)
        body=re.sub(r'\bCRn\b','pf_crn',body)
        conditional='  build COND;\n' if '^COND' in header else ''
        # MRRC returns a single snapshot, not two independently sampled words.
        if name=='mrrc' and '^COND' in header:
            body=conditional+'''  local value:8 = pf_arm_mrrc(cpn:4,opcode3:4,pf_crm:4);
  Rd = value:4;
  Rn = value(4);
'''
        elif name=='mcrr' and '^COND' in header:
            body=conditional+'''  local value:8 = (zext(Rn) << 32) | zext(Rd);
  pf_arm_mcrr(cpn:4,opcode3:4,pf_crm:4,value);
'''
        elif name=='mrc' and 'mcrOperands' not in header and '^COND' in header:
            body=conditional+'  Rd = pf_arm_mrc(cpn:4,opc1:4,pf_crn:4,pf_crm:4,opc2:4);\n'
        elif name=='mcr' and 'mcrOperands' not in header and '^COND' in header:
            body=conditional+'  pf_arm_mcr(cpn:4,opc1:4,pf_crn:4,pf_crm:4,opc2:4,Rd);\n'
        body=re.sub(r'\b(pf_crm|pf_crn)\b(?!:)',r'\1:4',body)
        return header+'{\n'+body+'}'
    source=pattern.sub(instruction,source)
    if not all(counts.get(name,0)>0 for name in ['mrc','mcr','mrrc','mcrr']):
        raise ValueError('Coprocessor instruction definitions not found')
    declarations=''.join('define pcodeop pf_arm_'+name+';\n' for name in ['mrc','mcr','mrrc','mcrr'])
    if 'define pcodeop pf_arm_mrc;' not in source:source=declarations+source
    for operation in ['smc','hvc']:
        pattern=re.compile(r'(^:'+operation+r'[^\n]*\bis\b[^\n]*\n\s*\{)([^}]+)\}',re.M)
        def supervisor(match):
            body=match[2]
            call=re.search(r'(?:software_|pf_arm_)'+operation+r'\(([^,;)]+)',body)
            if call is None:raise ValueError('Unknown supervisor-call model')
            immediate=call[1]
            condition='  build COND;\n'if '^COND' in match[1]else ''
            return match[1]+'\n'+condition+'  r0 = pf_arm_'+operation+'('+immediate+',r0,r1,r2,r3);\n}'
        source,count=pattern.subn(supervisor,source)
        if count!=1:raise ValueError('Supervisor-call instruction not found: '+operation)
        declaration='define pcodeop pf_arm_'+operation+';'
        if declaration not in source:source=declaration+'\n'+source
    return source


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('language_directory',type=Path)
    args=parser.parse_args();path=args.language_directory/'ARMinstructions.sinc'
    backup=path.with_suffix(path.suffix+'.permafrost-coprocessor-original')
    if not backup.exists():backup.write_bytes(path.read_bytes())
    path.write_text(patch(path.read_text()))
    print('Preserved ARM coprocessor selector constants; compile the language before analysis.')
