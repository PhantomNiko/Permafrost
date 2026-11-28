#!/usr/bin/env python3
"""Package the relocatable Permafrost 1.0 SDK for macOS 15 hosts."""
import argparse,json,shutil,zipfile
from pathlib import Path
from sdk_runtime import build_runtime
from library_native import build_library

ARCHITECTURES=('i386','x86_64','armv7','arm64')

def build_sdk(output=Path('build'),products=None,source_root=Path('.'),version='1.0'):
    source_root=Path(source_root)
    output=Path(output);output.mkdir(parents=True,exist_ok=True);root=output/('Permafrost'+version+'.sdk')
    if root.exists():shutil.rmtree(root)
    (root/'bin').mkdir(parents=True);(root/'Documentation').mkdir()
    ignore=shutil.ignore_patterns('.DS_Store','__pycache__','*.pyc')
    shutil.copytree('sdk/include',root/'usr/include',ignore=ignore)
    if source_root!=Path('.'):
        shutil.copytree(source_root/'sdk/include',root/'usr/include',dirs_exist_ok=True,ignore=ignore)
    shutil.copytree(source_root/'sdk/runtime',root/'usr/src/runtime');shutil.copytree('sdk/examples',root/'Examples')
    for source,target in [('tayga_cc.py','pf-cc'),('tayga_cc.py','pf-tayga-cc'),('sdk_runtime.py','pf-build-runtime'),('wmfs.py','pf-wmfs'),('darwin.py','darwin.py'),('native.py','native.py'),('macho.py','macho.py'),('dylib.py','dylib.py'),('fat.py','fat.py'),('gpt.py','gpt.py'),('pfz.py','pfz.py'),('pfz.py','pf-pfz'),('pfs.py','pf-pfs')]:
        p=root/'bin'/target;shutil.copyfile(Path('tools')/source,p);p.chmod(0o755 if target.startswith('pf-')else 0o644)
    libraries=sorted(d.name for d in (source_root/'libraries').iterdir()if d.is_dir())
    for arch in ARCHITECTURES:
        directory=root/'usr/lib'/arch;directory.mkdir(parents=True)
        runtime=Path(products)/'sdk-runtime'/arch if products else output/'sdk-runtime'/arch
        if products is None:build_runtime(source_root/'sdk/runtime',runtime,arch)
        for name in ['crt1.o','libtayga.a']:shutil.copyfile(runtime/name,directory/name)
        for name in libraries:
            source=source_root/'libraries'/name/arch;profile=json.loads((source/'profile.json').read_text());module=profile['module'];path=Path(products)/'libraries'/name/arch/module if products else build_library(source,output/'libraries'/name/arch)
            shutil.copyfile(path,directory/(module+'.dylib'))
    for name in ['LICENSE.TXT','licenses/UPSTREAM.TXT','licenses/THIRD-PARTY.TXT','LICENSES.md']:shutil.copyfile(name,root/Path(name).name)
    for name in ['DEPENDENCIES.md','docs/sdk.md','docs/recovery.md']:shutil.copyfile(name,root/'Documentation'/Path(name).name)
    settings=dict(CanonicalName='permafrost'+version,DisplayName='Permafrost '+version,Version=version,MaximumDeploymentTarget=version,DefaultProperties=dict(PLATFORM_NAME='permafrost',ARCHS=' '.join(ARCHITECTURES)),SupportedTargets=dict(permafrost=dict(Archs=list(ARCHITECTURES))))
    (root/'SDKSettings.json').write_text(json.dumps(settings,indent=2)+'\n')
    execution=('Copy programs into Home on the user volume and run them from WinterShell.'
               if version!='1.0' else 'Copy programs into Tayga/root on the user volume and run them through Tayga or Snowflake.')
    (root/'README.txt').write_text('Permafrost '+version+' SDK for macOS 15\n\nRequires Python 3 and Apple Command Line Tools (clang/clang++).\nCompile C: bin/pf-cc --arch arm64 Examples/runtime.c -o hello\nCompile C++: bin/pf-cc --arch arm64 Examples/runtime.cpp -o hello-cpp\nSupported architectures: i386, x86_64, armv7, arm64.\nThe bundle includes the C/C++ headers, startup objects, runtime archives,\nand native libraries for each architecture. '+execution+'\nThe public WMAP ABI and TerrorUI interfaces are in usr/include/permafrost.\nBuild source runtime archives with bin/pf-build-runtime.\nThis freestanding runtime has no C++ exception unwinding or RTTI.\nThe bundle is relocatable and contains no host checkout paths.\n')
    with zipfile.ZipFile(root.with_suffix('.sdk.zip'),'w',zipfile.ZIP_DEFLATED)as archive:
        for path in sorted(root.rglob('*')):
            if path.is_file():
                info=zipfile.ZipInfo(str(Path(root.name)/path.relative_to(root)),(2026,11,22,0,0,0));info.create_system=3;info.external_attr=(0o100755 if path.name.startswith('pf-')else 0o100644)<<16;archive.writestr(info,path.read_bytes(),compress_type=zipfile.ZIP_DEFLATED)
    print('Built '+root.name,flush=True);return root

if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--out',type=Path,default=Path('build'));build_sdk(parser.parse_args().out)
