"""Compile the same C image codecs into libraries and kernels.

Pooka's Free Software License.
"""
from pathlib import Path
import json
import re


def make_image_module(output, architecture):
    source = Path('libraries/png', architecture)
    profile = json.loads((source/'profile.json').read_text())
    functions = profile['functions']
    exports = {entry['name']: functions.get(format(entry['address'], 'x'))
               for entry in profile['exports']}
    header = (source/'functions.h').read_text()
    implementation = (source/'runtime.c').read_text().replace('#include "functions.h"', '')
    if '#include "codec32.h"' in implementation:
        implementation = implementation.replace('#include "codec32.h"', (source/'codec32.h').read_text())
    # Kernel allocation must also work before the public WMAP table is installed.
    for match in reversed(list(re.finditer(r'\b((?:recovered_|pf_png32_)[0-9a-f]+)\s*\(([^;{}]*)\)\s*\{', implementation))):
        opening = match.end(); end = opening; depth = 1
        while depth:
            depth += (implementation[end] == '{') - (implementation[end] == '}'); end += 1
        body = implementation[opening:end-1]
        names = [re.findall(r'\w+', arg)[-1] for arg in match[2].split(',')
                 if arg.strip() != 'void' and re.findall(r'\w+', arg)]
        replacement = None
        if 'api[0x4c/4]' in body and len(names) == 1:
            replacement = 'return pf_image_allocate((uintptr_t)%s);' % names[0]
        elif 'api[0x50/4]' in body and len(names) == 1:
            replacement = 'pf_image_release((void *)%s);' % names[0]
        elif 'api[0x54/4]' in body and len(names) == 2:
            replacement = 'return pf_image_reallocate((void *)%s,(uintptr_t)%s);' % tuple(names)
        if replacement is not None:
            implementation = implementation[:opening] + replacement + implementation[end-1:]
    state = (source/'state.c').read_text()
    beginning = state.index('unsigned char pf_module_state[')
    state_array = state[beginning:state.index('\n};', beginning)+3]
    initializers = re.findall(r'\(void \(\*\)\(void\)\)(recovered_[0-9a-f]+)', state)
    fixups = []
    for relocation in profile['relocations']:
        target = relocation['target']
        if target['kind'] == 'data':
            value = '(uintptr_t)pf_module_state+%d' % target['offset']
        elif target['kind'] == 'function':
            value = '(uintptr_t)' + functions[target['address']]
        elif target['kind'] == 'header':
            value = '0'
        else:
            raise ValueError('unexpected image module relocation')
        fixups.append('*(uint%d_t *)(pf_module_state+%d)=(uint%d_t)(%s);' % (
            8*relocation['width'], relocation['offset'], 8*relocation['width'], value))
    initialize = ('static int pf_image_initialized;\nstatic void pf_image_initialize(void){\n'
                  'if(pf_image_initialized)return;\n' + '\n'.join(fixups) + '\n' +
                  ''.join(name+'();\n' for name in initializers) + 'pf_image_initialized=1;\n}\n')
    decode = exports['__ZN2wm3png11load_memoryEPKhmRNS0_5ImageE']
    detect = exports['__ZN2wm3png13detect_formatEPKhm']
    bridge = ('int pf_image_decode(const void *data,uintptr_t size,void *image){\n'
              'pf_image_initialize();return (uintptr_t)%s((void *)data,(void *)size,image)!=0;\n}\n'
              'int pf_image_detect(const void *data,uintptr_t size){\n'
              'pf_image_initialize();return (int)%s((void *)data,(void *)size);\n}\n') % (decode, detect)
    text = ('/* Shared C codec implementation. Pooka\'s Free Software License. */\n'
            '#include <stdint.h>\nvoid *pf_image_allocate(uintptr_t);\n'
            'void pf_image_release(void *);\nvoid *pf_image_reallocate(void *,uintptr_t);\n' +
            header + '\n' + state_array + '\n' + implementation + '\n' + initialize + bridge)
    text = re.sub(r'\brecovered_([0-9a-f]+)\b', r'pf_image_function_\1', text)
    text = re.sub(r'\bpf_module_state\b', 'pf_image_module_state', text)
    path = Path(output)/'image-module.c'; path.write_text(text)
    return path
