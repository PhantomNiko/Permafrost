#!/usr/bin/env python3
"""Package a relocatable macOS 15 development SDK (host Clang required)."""
import json
from pathlib import Path
import shutil
import zipfile


def main():
    root = Path('build/Permafrost0.2.sdk')
    if root.exists():
        for cache in root.rglob('__pycache__'):
            shutil.rmtree(cache)
    (root / 'bin').mkdir(parents=True, exist_ok=True)
    (root / 'usr/include').mkdir(parents=True, exist_ok=True)
    (root / 'Documentation').mkdir(parents=True, exist_ok=True)
    for path in Path('sdk/include').iterdir():
        shutil.copyfile(path, root / 'usr/include' / path.name)
    shutil.copytree('sdk/examples', root / 'Examples', dirs_exist_ok=True)
    for source, target in [('tools/cc.py', 'pf-cc'), ('tools/elf32.py', 'elf32.py'),
                           ('tools/wmfs.py', 'pf-wmfs')]:
        path = root / 'bin' / target
        shutil.copyfile(source, path)
        path.chmod(0o755 if target.startswith('pf-') else 0o644)
    for source in ('LICENSE.TXT', 'licenses/UPSTREAM.TXT'):
        shutil.copyfile(source, root / Path(source).name)
    shutil.copyfile('docs/recovery.md', root / 'Documentation/recovery.md')
    shutil.copyfile('docs/sdk.md', root / 'Documentation/sdk.md')
    settings = dict(CanonicalName='permafrost0.2', DisplayName='Permafrost 0.2',
                    Version='0.2', MaximumDeploymentTarget='0.2',
                    DefaultProperties=dict(PLATFORM_NAME='permafrost', ARCHS='i386'),
                    SupportedTargets=dict(permafrost=dict(Archs=['i386'])))
    (root / 'SDKSettings.json').write_text(json.dumps(settings, indent=2) + '\n')
    (root / 'README.txt').write_text(
        'Permafrost 0.2 SDK for macOS 15\n\n'
        'Requires Python 3 and Apple Command Line Tools (clang/clang++).\n'
        'Compile C: bin/pf-cc Examples/hello.c -o hello.bin\n'
        'Compile C++: bin/pf-cc Examples/nightmode.cpp -o nightmode.bin\n'
        'Install the binary in WMFS32 and run runcode("/hello.bin", $200000).\n'
        'Flat i386 ring-0 code; cdecl main returns an integer in EAX.\n'
        'This is a freestanding SDK, without a hosted libc, C++ standard library,\n'
        'exceptions, RTTI, dynamic linking, or Apple platform/Xcode integration.\n'
        'The bundle can be moved; no installation at a fixed path is required.\n')
    with zipfile.ZipFile(root.with_suffix('.sdk.zip'), 'w', zipfile.ZIP_DEFLATED) as archive:
        for path in sorted(root.rglob('*')):
            if path.is_file():
                archive.write(path, str(Path(root.name) / path.relative_to(root)))
    print('Built build/Permafrost0.2.sdk')


if __name__ == '__main__':
    main()
