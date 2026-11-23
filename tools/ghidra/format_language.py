#!/usr/bin/env python3
"""Install analysis models for fixed and variadic Apple ARM64 call operands.

The recovered C keeps its native variadic declarations. These models let a
call-site override enumerate known optional operands while retaining their
eight-byte stack slots. Pooka's Free Software License.
"""
from pathlib import Path
import argparse,copy,xml.etree.ElementTree as ET


def patch(text):
    root=ET.fromstring(text)
    native=root.find('./default_proto/prototype')
    if native is None:raise ValueError('missing native prototype')
    for fixed in (1,3):
        name='__pf_format'+str(fixed)
        if root.find('./prototype[@name="'+name+'"]') is not None:continue
        model=copy.deepcopy(native);model.set('name',name)
        inputs=model.find('input')
        for rule in list(inputs.findall('rule')):inputs.remove(rule)
        for index in range(fixed):
            rule=ET.SubElement(inputs,'rule');ET.SubElement(rule,'datatype',name='any')
            ET.SubElement(rule,'position',index=str(index));ET.SubElement(rule,'join',align='true')
        rule=ET.SubElement(inputs,'rule');ET.SubElement(rule,'datatype',name='any');ET.SubElement(rule,'goto_stack')
        root.append(model)
    ET.indent(root,space='  ')
    return '<?xml version="1.0" encoding="UTF-8"?>\n'+ET.tostring(root,encoding='unicode')+'\n'


def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('language',type=Path)
    args=parser.parse_args();text=args.language.read_text();updated=patch(text)
    if updated!=text:args.language.write_text(updated)
    print('Installed Apple ARM64 format-call analysis models.')


if __name__=='__main__':main()
