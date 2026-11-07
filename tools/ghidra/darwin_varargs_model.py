#!/usr/bin/env python3
"""Build an ARM64 Darwin stack-variadic analysis model for integer fixed args.

The fixed parameters use x0 onward; variadic parameters occupy aligned stack
slots. Existing return and register-preservation rules remain in the model.
Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import xml.etree.ElementTree as ET


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('compiler_spec', type=Path)
    parser.add_argument('output', type=Path)
    parser.add_argument('--fixed-count', type=int, default=3, choices=range(9))
    args = parser.parse_args()
    root = ET.fromstring(args.compiler_spec.read_text())
    pointer = root.find('data_organization/pointer_size')
    stack = root.find('stackpointer')
    if pointer is None or pointer.get('value') != '8' or stack is None or stack.get('register') != 'sp':
        raise ValueError('An ARM64 compiler specification is required')
    prototype = root.find('default_proto/prototype')
    if prototype is None:
        raise ValueError('Missing default calling convention')
    prototype.set('name', 'pf_darwin_varargs%d' % args.fixed_count)
    prototype.remove(prototype.find('input'))
    inputs = ET.Element('input')
    prototype.insert(0, inputs)
    for index in range(args.fixed_count):
        entry = ET.SubElement(inputs, 'pentry', minsize='1', maxsize='8')
        ET.SubElement(entry, 'register', name='x%d' % index)
    entry = ET.SubElement(inputs, 'pentry', minsize='1', maxsize='500', align='8')
    ET.SubElement(entry, 'addr', space='stack', offset='0')
    args.output.write_text(ET.tostring(prototype, encoding='unicode')+'\n')


if __name__ == '__main__':
    main()
