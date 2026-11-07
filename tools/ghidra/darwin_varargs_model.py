#!/usr/bin/env python3
"""Build a Darwin ARM variadic analysis model for integer fixed args.

ARM64 fixed parameters use x0 onward and variadic arguments use stack slots.
ARM32 uses r0-r3 followed by the stack, without aligning register pairs.
Existing return and register-preservation rules remain in the model.
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
    parser.add_argument('--architecture', choices=('arm64','armv7'), default='arm64')
    args = parser.parse_args()
    root = ET.fromstring(args.compiler_spec.read_text())
    pointer = root.find('data_organization/pointer_size')
    stack = root.find('stackpointer')
    width='8'if args.architecture=='arm64'else'4'
    if pointer is None or pointer.get('value') != width or stack is None or stack.get('register') != 'sp':
        raise ValueError('The compiler specification does not match the requested architecture')
    prototype = root.find('default_proto/prototype')if args.architecture=='arm64'else root.find(".//prototype[@name='__stdcall_softfp']")
    if prototype is None:
        raise ValueError('Missing default calling convention')
    prototype.set('name', 'pf_darwin_varargs%d' % args.fixed_count)
    if args.architecture=='armv7':
        if args.fixed_count>4:raise ValueError('ARM32 supports at most four fixed register arguments')
        # Darwin permits an eight-byte payload to span r3 and stack offset
        # zero. Aligning register pairs would silently lose its low word.
        join=prototype.find('input/rule/join')
        if join is None:raise ValueError('Missing soft-float register join rule')
        join.set('align','false')
        args.output.write_text(ET.tostring(prototype,encoding='unicode')+'\n')
        return
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
