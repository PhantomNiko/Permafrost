#!/usr/bin/env python3
"""Package a relocatable macOS 15 development SDK (host Clang required)."""
import json
from pathlib import Path
import shutil
import zipfile


def build_sdk(output=Path('build'),libraries=None):
    root = output / 'Permafrost0.9.sdk'
    # Recreate this generated bundle so removed notices/tools cannot survive
    # from an earlier build and leak into the new archive.
    if root.exists():
        shutil.rmtree(root)
    (root / 'bin').mkdir(parents=True, exist_ok=True)
    (root / 'usr/include').mkdir(parents=True, exist_ok=True)
    (root / 'usr/src').mkdir(parents=True, exist_ok=True)
    (root / 'Documentation').mkdir(parents=True, exist_ok=True)
    for path in Path('sdk/include').iterdir():
        if path.is_file() and not path.name.startswith('.'):
            shutil.copyfile(path, root / 'usr/include' / path.name)
    for name in ('compiler.c','runtime.c'):
        shutil.copyfile(Path('kernel')/name,root/'usr/src'/name)
    shutil.copytree('sdk/examples', root / 'Examples', dirs_exist_ok=True,
                    ignore=shutil.ignore_patterns('.DS_Store','._*','__pycache__','*.pyc'))
    for source, target in [('tools/cc.py', 'pf-cc'), ('tools/elf32.py', 'elf32.py'), ('tools/elf64.py','elf64.py'), ('tools/macho.py','macho.py'), ('tools/native.py','native.py'), ('tools/darwin.py','darwin.py'), ('tools/fat.py','fat.py'), ('tools/gpt.py','gpt.py'),
                           ('tools/wmfs.py', 'pf-wmfs')]:
        path = root / 'bin' / target
        shutil.copyfile(source, path)
        path.chmod(0o755 if target.startswith('pf-') else 0o644)
    for source in ('LICENSE.TXT', 'licenses/UPSTREAM.TXT', 'licenses/THIRD-PARTY.TXT',
                   'LICENSES.md'):
        shutil.copyfile(source, root / Path(source).name)
    shutil.copyfile('DEPENDENCIES.md', root / 'Documentation/DEPENDENCIES.md')
    shutil.copyfile('docs/recovery.md', root / 'Documentation/recovery.md')
    shutil.copyfile('docs/sdk.md', root / 'Documentation/sdk.md')
    if libraries:
        (root/'usr/lib').mkdir(parents=True,exist_ok=True)
        for name,binary in libraries.items():(root/'usr/lib'/name).write_bytes(binary)
    settings = dict(CanonicalName='permafrost0.9', DisplayName='Permafrost 0.9',
                    Version='0.9', MaximumDeploymentTarget='0.9',
                    DefaultProperties=dict(PLATFORM_NAME='permafrost', ARCHS='i386 x86_64 armv7 arm64'),
                    SupportedTargets=dict(permafrost=dict(Archs=['i386','x86_64','armv7','arm64'])))
    (root / 'SDKSettings.json').write_text(json.dumps(settings, indent=2) + '\n')
    (root / 'README.txt').write_text(
        'Permafrost 0.9 SDK for macOS 15\n\n'
        'Requires Python 3 and Apple Command Line Tools (clang/clang++).\n'
        'Compile C: bin/pf-cc Examples/hello.c -o hello\n'
        'Compile C++: bin/pf-cc Examples/nightmode.cpp -o nightmode\n'
        'Native callbacks: compile Examples/native-module.c with --format flat.\n'
        'Use --runtime for supplied 64-bit arithmetic and memory helpers.\n'
        'Install the Mach-O program in FAT32 (partition 2) and enter its filename at the OS prompt.\n'
        'Use --arch i386, x86_64, armv7, arm64, or universal for Mach-O or flat code.\n'
        'Default i386 uses cdecl; x86-64 uses the System V register ABI.\n'
        'WMAP v13 is 252 bytes with 32-bit service slots on every CPU.\n'
        'Callback values use native pointers: 24 bytes on 32-bit CPUs and 40 on 64-bit CPUs.\n'
        'Use --format flat for explicit raw runcode/bload workflows.\n'
        'This is a freestanding SDK, without a hosted libc, C++ standard library,\n'
        'exceptions, RTTI, dynamic linking, or Apple platform/Xcode integration.\n'
        'The bundle can be moved; no installation at a fixed path is required.\n')
    with zipfile.ZipFile(root.with_suffix('.sdk.zip'), 'w', zipfile.ZIP_DEFLATED) as archive:
        for path in sorted(root.rglob('*')):
            if path.is_file():
                info=zipfile.ZipInfo(str(Path(root.name)/path.relative_to(root)),(2026,5,3,0,0,0))
                info.create_system=3
                info.external_attr=(0o100755 if path.name.startswith('pf-') else 0o100644)<<16
                archive.writestr(info,path.read_bytes(),compress_type=zipfile.ZIP_DEFLATED)
    print('Built ' + root.name)
    return root


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--out', type=Path, default=Path('build'))
    build_sdk(parser.parse_args().out)
