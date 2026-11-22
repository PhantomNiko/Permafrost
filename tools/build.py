#!/usr/bin/env python3
"""Build Permafrost 1.0 BIOS/UEFI images and a macOS 15 SDK from C/C++."""
import argparse,concurrent.futures,hashlib,json,struct,subprocess,sys
from pathlib import Path
from firmware import build_bios
from kernel_native import build_kernel
from arm_kernel import build_kernel as build_arm_kernel
from library_native import build_library
from application_native import build_application
from darwin import compile_object,link_dynamic_executable
from sdk_runtime import build_runtime
from sdk import build_sdk
from macho import universal
from uefi_portable import build_loader
from fat import make_fat32_tree,make_efi_volume
from gpt import make_disk
from wmfs import Image,make_image,BASE

ARCHITECTURES=('i386','x86_64','armv7','arm64')
EFI_NAMES=dict(zip(ARCHITECTURES,('BOOTIA32.EFI','BOOTX64.EFI','BOOTARM.EFI','BOOTAA64.EFI')))
APPLICATIONS={'tayga':(0,'Tayga.app/Contents/Permafrost/Tayga'),'desktop':(2,'Tundra.app/Contents/Permafrost/Tundra'),'cube':(2,'3D Demo.app/Contents/Permafrost/3DDemo'),'activity-monitor':(2,'ActivityMonitor.app/Contents/Permafrost/ActivityMonitor'),'terminal':(2,'Cancer.app/Contents/Permafrost/Cancer'),'text-editor':(2,'TextEditor.app/Contents/Permafrost/TextEditor'),'glacier':(2,'Glacier.app/Contents/Permafrost/Glacier'),'installer':(2,'Install.app/Contents/Permafrost/Install'),'snowflake':(2,'Tayga/usr/bin/snowflake')}


def digest(data):return hashlib.sha256(data).hexdigest()

def assets():
    root=Path('assets/disk');manifest=json.loads((root/'manifest.json').read_text());volumes=[]
    for index,volume in enumerate(manifest['volumes']):
        files={name:b''for name in volume['directories']}
        for entry in volume['files']:
            data=(root/str(index)/entry['path']).read_bytes()
            if digest(data)!=entry['sha256']:raise ValueError('asset hash mismatch: '+entry['path'])
            files[entry['path']]=data
        volumes.append(files)
    return volumes


def build_cube(output,architecture,library):
    output.mkdir(parents=True,exist_ok=True);objects=[]
    for name,path in [('main',Path('applications/cube/main.c')),('render',Path('applications/cube/render.c')),('compiler',Path('kernel/compiler.c')),('runtime',Path('kernel/runtime.c'))]:
        obj=output/(name+'.o');compile_object(path,obj,architecture,['sdk/include'],pic=True);objects.append(obj)
    target=output/'3DDemo';link_dynamic_executable(objects,target,architecture,{'/lib/TerrorUI.dylib':library});return target


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--out',type=Path,default=Path('build'));p.add_argument('--sectors',type=int,help='WBPT payload sector count, including swap');p.add_argument('--jobs',type=int,default=4);args=p.parse_args();output=args.out;output.mkdir(parents=True,exist_ok=True)
    logs=output/'logs';logs.mkdir(exist_ok=True)
    # Independent compiler jobs keep diagnostics in the generated output tree.
    def batch(jobs):
        def run(job):
            label,command=job
            with(logs/(label+'.log')).open('w')as log:r=subprocess.run(command,stdout=log,stderr=log)
            if r.returncode:raise RuntimeError('Build failed: '+label+'; see its build log')
            print('Built '+label,flush=True)
        with concurrent.futures.ThreadPoolExecutor(max_workers=max(1,args.jobs))as pool:list(pool.map(run,jobs))
    jobs=[]
    for arch in ARCHITECTURES:
        if arch.startswith('arm'):command=[sys.executable,'tools/arm_kernel.py','kernel/'+arch,str(output/'kernel'/arch)]
        else:command=[sys.executable,'tools/kernel_native.py','--arch',arch,'--output',str(output/'kernel'/arch)]
        jobs.append(('kernel-'+arch,command));jobs.append(('firmware-'+arch,[sys.executable,'tools/uefi_portable.py','--arch',arch,'--out',str(output/'firmware'/arch)]))
        jobs.append(('sdk-runtime-'+arch,[sys.executable,'tools/sdk_runtime.py','--source','sdk/runtime','--arch',arch,'--output',str(output/'sdk-runtime'/arch)]))
    libraries=sorted(d.name for d in Path('libraries').iterdir()if d.is_dir())
    for name in libraries:
        for arch in ARCHITECTURES:jobs.append(('library-'+name+'-'+arch,[sys.executable,'tools/library_native.py',str(Path('libraries',name,arch)),str(output/'libraries'/name/arch)]))
    drivers=json.loads(Path('drivers/manifest.json').read_text());seen=set()
    for entry in drivers['drivers']:
        for arch in entry['architectures']:
            key=(entry['directory'],arch)
            if key in seen:continue
            seen.add(key);jobs.append(('driver-'+entry['directory']+'-'+arch,[sys.executable,'tools/library_native.py',str(Path('drivers',*key)),str(output/'drivers'/key[0]/arch)]))
    batch(jobs);jobs=[]
    for name in APPLICATIONS:
        if name=='cube':continue
        for arch in ARCHITECTURES:
            command=[sys.executable,'tools/application_native.py',str(Path('applications',name,arch)),str(output/'applications'/name/arch)]
            for library in (['ui','js','tls']if name=='glacier'else[]if name in ['tayga','snowflake']else['ui']):
                profile=json.loads(Path('libraries',library,arch,'profile.json').read_text());command+=['--library',profile['install_name']+'='+str(output/'libraries'/library/arch/profile['module'])]
            jobs.append(('application-'+name+'-'+arch,command))
    batch(jobs)
    for arch in ARCHITECTURES:build_cube(output/'applications/cube'/arch,arch,output/'libraries/ui'/arch/'TerrorUI')
    tools=json.loads(Path('applications/tayga-tools/profile.json').read_text())['tools']
    for arch in ARCHITECTURES:
        for name in tools:
            folder=output/'applications/tayga-tools'/arch/name;obj=folder/'tool.o';compile_object(Path('applications/tayga-tools/tool.c'),obj,arch,['sdk/include'],pic=True,defines=['PF_TAYGA_TOOL_NAME='+json.dumps(name)]);link_dynamic_executable([obj],folder/name,arch,{})
    volumes=assets();provenance=[]
    def install(index,path,products):
        data=universal([p.read_bytes()for p in products]);volumes[index][path]=data;provenance.append(dict(partition=index,path=path,sha256=digest(data),source='C/C++'))
    kernel=[output/'kernel'/arch/'Permafrost'for arch in ARCHITECTURES]
    for index in [0,1]:
        install(index,'Permafrost',kernel)
        for name in libraries:
            module=json.loads(Path('libraries',name,'arm64/profile.json').read_text())['module'];install(index,'lib/'+module+'.dylib',[output/'libraries'/name/arch/module for arch in ARCHITECTURES])
    for name,(index,path)in APPLICATIONS.items():
        module=Path(path).name;install(index,path,[output/'applications'/name/arch/module for arch in ARCHITECTURES])
    for entry in drivers['drivers']:
        folder=entry['directory'];module=json.loads(Path('drivers',folder,entry['architectures'][0],'profile.json').read_text())['module'];products=[output/'drivers'/folder/arch/module for arch in entry['architectures']]
        for name in entry['files']:install(2,'Drivers/'+name,products)
    for name in tools:install(2,'Tayga/bin/'+name,[output/'applications/tayga-tools'/arch/name/name for arch in ARCHITECTURES])
    for arch in ARCHITECTURES:
        for name in ['crt1.o','libtayga.a']:
            data=(output/'sdk-runtime'/arch/name).read_bytes();path='Tayga/usr/lib/'+arch+'/'+name;volumes[2][path]=data;provenance.append(dict(partition=2,path=path,sha256=digest(data),source='C/C++'))
    for files in volumes:
        for path in ['LICENSE.TXT','licenses/UPSTREAM.TXT','licenses/THIRD-PARTY.TXT','LICENSES.md','DEPENDENCIES.md']:files[Path(path).name]=Path(path).read_bytes()
    for index,files in enumerate(volumes):
        for path,data in files.items():
            if path=='Mach'or path.startswith(('mach_servers/','Batagaika/mach_servers/')):provenance.append(dict(partition=index,path=path,sha256=digest(data),exception='embedded Mach distribution'))
    boot,loader=build_bios(output/'firmware/bios');sizes=[131072,131072,393216,64000]
    if args.sectors:
        sizes[3]=args.sectors-66-sum(sizes[:3])
        if sizes[3]<8192:raise ValueError('disk leaves too little swap space')
    starts=[66]
    for size in sizes[:-1]:starts.append(starts[-1]+size)
    parts=[make_image(boot,loader,volumes[i],sizes[i]+BASE)[BASE*512:]for i in [0,1]]+[make_fat32_tree(volumes[2],sizes[2]),bytes(sizes[3]*512)]
    disk=bytearray((starts[-1]+sizes[-1])*512);disk[:512]=boot;disk[512:BASE*512]=loader;table=65*512;struct.pack_into('<4sHH',disk,table,b'WBPT',1,4);disk[table+8:table+20]=b'PermafrostOS'
    for i,(name,kind,flags)in enumerate([('firmware',1,0),('recovery',1,1),('user data',5,0),('PermafrostSwap',1347900247,0)]):
        offset=table+32+i*32;struct.pack_into('<4I',disk,offset,kind,starts[i],sizes[i],flags);disk[offset+16:offset+16+len(name)]=name.encode();disk[starts[i]*512:(starts[i]+sizes[i])*512]=parts[i]
    for i in range(3):assert Image(bytes(disk),i).files()==volumes[i],i
    bios=bytes(disk);esp=make_efi_volume({'EFI/BOOT/'+EFI_NAMES[a]:(output/'firmware'/a/EFI_NAMES[a]).read_bytes()for a in ARCHITECTURES});uefi=make_disk(esp,bios);results={}
    for name,data in [('Permafrost-1.0.img',bios),('Permafrost-1.0-UEFI.img',uefi)]:
        (output/name).write_bytes(data);results[name]=dict(bytes=len(data),sha256=digest(data));print('Built '+name,flush=True)
    sdk=build_sdk(output,products=output);archive=sdk.with_suffix('.sdk.zip');results[archive.name]=dict(bytes=archive.stat().st_size,sha256=digest(archive.read_bytes()))
    (output/'image-provenance.json').write_text(json.dumps(provenance,indent=2)+'\n');(output/'release.json').write_text(json.dumps(dict(version='1.0',reference_release='1.0r232-Beta',architectures=list(ARCHITECTURES),artifacts=results,exceptions=['embedded Mach distribution']),indent=2)+'\n')

if __name__=='__main__':main()
