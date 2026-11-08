#!/usr/bin/env python3
"""Compare recovered cube rasterization with the original application routine.

Pooka's Free Software License. Diagnostic containers never become release inputs.
"""
import argparse,json,random,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable
from native import inspect
from dll import DLL
from unicorn.x86_const import UC_X86_REG_ECX,UC_X86_REG_EDX


def diagnostic_reference(original,output):
    binary=bytearray(original.read_bytes());metadata,_=inspect(binary)
    struct.pack_into('<I',binary,12,6)
    if metadata['base']:
        wide=metadata['cpu']==0x1000007;header=32 if wide else 28
        count,length=struct.unpack_from('<II',binary,16)
        segment=struct.pack('<II16s4Q4I'if wide else'<II16s8I',
                            0x19 if wide else 1,72 if wide else 56,b'__LOWGAP',
                            0,metadata['base'],0,0,7,7,0,0)
        position=header
        for _ in range(count):
            command,size=struct.unpack_from('<II',binary,position)
            if command in (1,0x19) and binary[position+8:position+24].split(b'\0')[0]==b'__LINKEDIT':
                assert size==len(segment)
                binary[position:position+size]=segment
                break
            position+=size
        else:raise AssertionError('diagnostic image has no link-edit segment')
    output.write_bytes(binary)
    return metadata


def exercise(original,source):
    native=DLL(original,instruction_limit=100000000)
    actual=DLL(source,instruction_limit=100000000)
    nm,_=inspect(original.read_bytes());sm,_=inspect(source.read_bytes())
    for lib,metadata in [(native,nm),(actual,sm)]:
        names={name:address for address,name in metadata['symbols']+metadata['data_symbols']}
        lib.exports['_drawCubeCpu']=lib.base+names['_drawCubeCpu']
        if '_gCubeWindowWidth'in names:
            width=names['_gCubeWindowWidth'];height=names['_gCubeWindowHeight']
        else:width=names['__MergedGlobals'];height=width+4
        lib.cpu.mem_write(lib.base+width,struct.pack('<I',32));lib.cpu.mem_write(lib.base+height,struct.pack('<I',24))
        if lib is native and lib.cpu_type==7:
            lib.cpu.mem_write(width,struct.pack('<I',32));lib.cpu.mem_write(height,struct.pack('<I',24))
    rng=random.Random(232);cases=0
    for fixture in range(12):
        points=[(rng.randrange(-12,44),rng.randrange(-12,36),rng.randrange(-100,100))for _ in range(8)]
        if fixture==0:points=[(0,0,0),(31,0,0),(31,23,0),(0,23,0)]*2
        if fixture==1:points=[(16,12,0)]*8
        vertices=b''.join(struct.pack('<3i',*point)for point in points)
        faces=b''.join(struct.pack('<3BxIi',*(rng.randrange(8)for _ in range(3)),rng.randrange(1<<32),0)for _ in range(12))
        images=[]
        for lib in [native,actual]:
            lib.cpu.mem_write(0x3100000,vertices);lib.cpu.mem_write(0x3110000,faces);lib.cpu.mem_write(0x3120000,b'\xa5'*(32*24*4))
            if lib is native and lib.cpu_type==7:
                lib.cpu.reg_write(UC_X86_REG_ECX,0x3120000);lib.cpu.reg_write(UC_X86_REG_EDX,0x3100000);lib.call('_drawCubeCpu',0x3110000)
            else:lib.call('_drawCubeCpu',0x3120000,0x3100000,0x3110000)
            images.append(bytes(lib.cpu.mem_read(0x3120000,32*24*4)))
        assert images[0]==images[1],('cube raster differs',fixture,next(i for i,(x,y)in enumerate(zip(*images))if x!=y))
        cases+=1
    print('Cube CPU raster: %d native/source clipping, winding, colour and degenerate cases passed.'%cases)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('architecture',choices=['i386','x86_64','armv7','arm64'])
    parser.add_argument('reference',type=Path);parser.add_argument('library',type=Path)
    args=parser.parse_args();root=Path('build/cube-render')/args.architecture;root.mkdir(parents=True,exist_ok=True)
    obj=root/'render.o';compile_object(Path('recovery/in-progress/applications/cube/render.c'),obj,args.architecture,['sdk/include'],pic=True)
    source=root/'source';link_dynamic_executable([obj],source,args.architecture,{'/lib/TerrorUI.dylib':args.library},entry='drawCubeCpu')
    diagnostic_reference(source,root/'source-diagnostic');diagnostic_reference(args.reference,root/'reference-diagnostic')
    exercise(root/'reference-diagnostic',root/'source-diagnostic')


if __name__=='__main__':main()
