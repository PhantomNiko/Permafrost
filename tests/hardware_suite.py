#!/usr/bin/env python3
"""Compare the current reconstruction with its reference under a complete BIOS.

Requires Bochs and firmware supplied by the caller. All guest images and test
programs are built locally; no reference executables are committed.
"""
import argparse
from pathlib import Path
import re
import shutil
import struct
import subprocess
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, repack_image


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('candidate', type=Path)
    for name in ('bochs', 'bios', 'vgabios'):
        parser.add_argument('--' + name, required=True, type=Path)
    args = parser.parse_args()
    with tempfile.TemporaryDirectory(prefix='permafrost sdk validation ') as temporary:
        root = Path(temporary)
        sdk = root / 'Permafrost0.3.sdk'
        shutil.copytree('build/Permafrost0.3.sdk', sdk)
        programs = {}

        def compile(name, source, keys=None):
            output = root / (name + '.bin')
            command = [str(sdk / 'bin/pf-cc'), str(source), '-o', str(output)]
            if keys is not None:
                import json
                command += ['-D', 'PF_KEYS=' + json.dumps(keys).replace('\\u001b', '\\x1b')]
            subprocess.run(command, check=True, stdout=subprocess.DEVNULL)
            programs[name + '.bin'] = output.read_bytes()

        compile('hello', sdk / 'Examples/hello.c')
        compile('nightmode-cpp', sdk / 'Examples/nightmode.cpp')
        compile('native', 'tests/native.c')
        compile('keys-store', 'tests/keyqueue.c', '280000: C3\r\x1b')
        compile('keys-examine', 'tests/keyqueue.c', '280000.280000\r\x1b')
        compile('keys-run', 'tests/keyqueue.c', '280000R\r\x1b')
        line = b'serial("PF-BYTECODE")'
        programs['compat.wsbc'] = (b'WSBC' + struct.pack('<HII', 1, 1, 2) +
            struct.pack('<I', len(line)) + line + struct.pack('<B3xII', 0, 0, 0) +
            struct.pack('<B3xII', 20, 0, 0))
        programs['current.wsbc'] = (b'WSBC' + struct.pack('<HIII', 6, 0, 0, 1) +
            struct.pack('<I', len(line)) + line + struct.pack('<II', 0, 0))
        reference_raw = args.reference.read_bytes()
        original_files = Image(reference_raw, 2 if Image(reference_raw).partitions else 0).files()
        programs['original-nightmode.bin'] = original_files['nightmode.bin']
        programs['original-expand.bin'] = original_files['expand-disk.bin']
        compile('keys-lua', 'tests/keyqueue.c', 'exit\r')
        programs['original-lua.bin'] = original_files['lua.bin']
        programs['lua-port.bin'] = Path('build/lua/lua.bin').read_bytes()
        programs['index.lua'] = Path('tests/lua.lua').read_bytes()
        digests = []
        for role, path in [('reference', args.reference), ('candidate', args.candidate)]:
            raw = path.read_bytes()
            partition = 2 if Image(raw).partitions else 0
            files = Image(raw, partition).files()
            selftest = files['winterscript-selftest.ws'].decode()
            selftest = selftest.replace('print("WinterScript self-test: PASS")',
                                        'serial("PF-SELFTEST-PASS")')
            files.update(programs)
            # The original inherits uninitialized x87 state from this BIOS.
            # hardware.py initializes only its entry on an ephemeral test copy.
            init = ['--initialize-fpu'] if role == 'reference' else []

            def run(name, script, marker):
                image = root / (role + '-' + name + '.img')
                image.write_bytes(repack_image(raw, files, partition, sectors=8192))
                script_path = root / 'startup.ws'
                script_path.write_text(script)
                command = [sys.executable, 'tests/hardware.py', str(image), '--script',
                           str(script_path), '--expect', marker, '--timeout', '30'] + init
                for option in ('bochs', 'bios', 'vgabios'):
                    command += ['--' + option, str(getattr(args, option))]
                result = subprocess.run(command, text=True, stdout=subprocess.PIPE,
                                        stderr=subprocess.STDOUT)
                if result.returncode:
                    print(result.stdout)
                    raise SystemExit(role + ' ' + name + ' failed')
                return result.stdout.replace('\r', '')

            run('selftest', selftest, 'PF-SELFTEST-PASS')
            script = '''assert(runcode("/hello.bin",$200000)==42,"SDK C")
assert(runcode("/nightmode-cpp.bin",$200000)==1,"SDK C++")
assert(runcode("/nightmode.bin",$200000)==1,"native utility")
assert(runcode("/original-nightmode.bin",$200000)==1,"original native ABI")
runcode("/original-expand.bin",$200000)
assert(runcode("/native.bin",$200000)==42,"native memory interfaces")
'''
            for operation in ('store', 'examine', 'run'):
                script += ('assert(runcode("/keys-%s.bin",$200000)==1,"queue keys")\n'
                           'assert(runcode("/wozmon.bin",$220000)==0,"monitor return")\n') % operation
            script += '''assert(peek($280000)==195,"monitor memory store")
native inputIndex=0
native inputValues={"$B8","42","0","0","0","$C3","END","writer.bin"}
function input()
    inputIndex += 1
    return inputValues[inputIndex]
end
runFile("BinaryWriter.ws")
assert(runcode("/writer.bin",$200000)==42,"writer saved executable")
runFile("compat.wsbc")
runFile("current.wsbc")
assert(runcode("/keys-lua.bin",$200000)==1,"queue Lua exit")
assert(runcode("/lua-port.bin",$230000)==1,"Lua return")
assert(read("pf-lua-pass")=="PASS","source-linked Lua checks")
serial("PF-NATIVE-PASS")
'''
            extended_index = files['index.lua']
            files['index.lua'] = b'local m=require("lua-demo-module"); assert(m.add(2,3)==5); local f=assert(io.open("pf-original-lua-pass","w")); assert(f:write("PASS")); assert(f:close())'
            run('original-lua', 'runcode("keys-lua.bin",$200000)\nassert(runcode("original-lua.bin",$230000)==1,"original Lua return")\nassert(read("pf-original-lua-pass")=="PASS","original Lua host services")\nserial("PF-ORIGINAL-LUA-PASS")\n', 'PF-ORIGINAL-LUA-PASS')
            files['index.lua'] = extended_index
            stress = Path('tests/wmfs64.ws').read_text()
            run('wmfs64', stress, 'PF-WMFS64-PASS')
            output = run('native', script, 'PF-NATIVE-PASS')
            digest = re.search(r'PF-NATIVE-DIGEST ([0-9a-f]+)', output)
            if not digest:
                raise SystemExit(role + ' native digest is missing')
            digests.append(digest[1])
            if output.splitlines().count('PF-BYTECODE') != 2:
                print(output)
                raise SystemExit(role + ' WSBC compatibility execution failed')
            print(role + ': full self-test, relocated SDK, native routines, monitor, writer, WSBC, WMFS64 stress and both Lua applications passed')
        if digests[0] != digests[1]:
            raise SystemExit('native behavior differs: ' + ' / '.join(digests))
        print('Native memory/string digest matches: ' + digests[0])


if __name__ == '__main__':
    main()
