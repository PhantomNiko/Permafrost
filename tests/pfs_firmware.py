#!/usr/bin/env python3
"""Exercise filesystem boot reads on all four compiled target CPUs.

Pooka's Free Software License. Optional Stage3 independently checks the fixture.
"""
import argparse
from pathlib import Path
import struct
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from pfs import build, Node, Image, BLOCK_SIZE, crc32c
from pfs_records import exercise as native_metadata
from darwin import compile_object, link_dynamic_executable
from cube_render import diagnostic_reference
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RCX, UC_X86_REG_ESP
from unicorn.arm_const import UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_SP
from unicorn.arm64_const import UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3


def exercise(output, reference, reference_image=None):
    payload = bytes(range(256)) * 1100
    nodes = {'Kernel/Test.kernel': payload, 'Empty': Node(2), 'Unicode/雪.txt': b'snow',
             'Apps': Node(6, b'Home/Applications')}
    nodes.update({f'Many/item-{i:03}': b'' for i in range(260)})
    raw = build(nodes, spare_blocks=8)
    image = Image(raw)
    if reference:
        with tempfile.TemporaryDirectory(prefix='permafrost-pfs-') as folder:
            path = Path(folder) / 'volume.img'
            path.write_bytes(raw)
            native_metadata(reference, path)
    # A two-head fragmented file with out-of-order physical allocation. Logical
    # blocks one and two live at the spare tail, rather than next to block zero.
    fragmented = bytearray(raw)
    head = dict(image.entries())['Kernel/Test.kernel'].first
    tail = image.total - 3
    def fat(block, logical, following):
        table, slot = divmod(block, 8191)
        struct.pack_into('<QQ', fragmented, (1+table)*BLOCK_SIZE+slot*16, logical, following)
    fat(head, 0, tail)
    fat(head+1, 0, 0); fat(head+2, 0, 0)
    fat(tail, 1, (1<<64)-1); fat(tail+1, tail, (1<<64)-6)
    fragmented[tail*BLOCK_SIZE:(tail+2)*BLOCK_SIZE] = raw[(head+1)*BLOCK_SIZE:(head+3)*BLOCK_SIZE]
    assert Image(fragmented).files()['Kernel/Test.kernel'] == payload
    for arch in ['i386','x86_64','armv7','arm64']:
        folder = output/arch
        folder.mkdir(parents=True, exist_ok=True)
        objects = []
        for tag, source in [('pfs','firmware/pfs.c'), ('fixture','tests/pfs_firmware.c'),
                            ('memory','kernel/runtime.c'), ('compiler','kernel/compiler.c')]:
            obj = folder/(tag+'.o')
            compile_object(Path(source),obj,arch,['sdk/include','firmware'],pic=True)
            objects.append(obj)
        binary = link_dynamic_executable(objects,folder/'reader',arch,{},entry='pf_test_pfs_open')
        diagnostic = folder/'reader.dylib'
        diagnostic_reference(binary, diagnostic)
        lib = DLL(diagnostic, instruction_limit=100000000)
        source, name, destination = 0x600000, 0x3000000, 0x3100000
        def call(name, *args): return lib.call('_pf_test_pfs_'+name,*args,result_bits=32)
        for contents in [raw, bytes(fragmented)]:
            lib.cpu.mem_write(source, contents)
            for base in [0, image.total*BLOCK_SIZE]:
                assert call('open',source,len(contents),base)==0
                for path, expected, kind in [('Kernel/Test.kernel',payload,1),
                    ('Kernel/../Unicode/雪.txt',b'snow',1), ('Apps',b'Home/Applications',6),
                    ('Many/item-259',b'',1), ('Empty',b'',2)]:
                    lib.cpu.mem_write(name,path.encode()+b'\0')
                    assert call('lookup',name)==0,(arch,path)
                    assert call('kind')==kind
                    assert call('size')==len(expected)
                    for offset, count in [(0,len(expected)), (max(0,len(expected)-7),min(7,len(expected)))]:
                        lib.cpu.mem_write(destination-16,b'\xa5'*(count+32))
                        assert call('read',offset,destination,count)==0,(arch,path,offset)
                        assert bytes(lib.cpu.mem_read(destination,count))==expected[offset:offset+count]
                        assert bytes(lib.cpu.mem_read(destination-16,16))==b'\xa5'*16
                        assert bytes(lib.cpu.mem_read(destination+count,16))==b'\xa5'*16
                    assert call('read',len(expected)+1,destination,0)!=0
                for bad in ['Missing','Kernel//Test.kernel','Apps/missing','Kernel/']:
                    lib.cpu.mem_write(name,bad.encode()+b'\0')
                    assert call('lookup',name)!=0,(arch,bad)
        assert call('open',source,len(raw),0)==0
        call('fail',1)
        lib.cpu.mem_write(name,b'Kernel/Test.kernel\0')
        assert call('lookup',name)==1
        corrupt = bytearray(raw); corrupt[0x14]^=1
        lib.cpu.mem_write(source,bytes(corrupt))
        assert call('open',source,len(corrupt),0)==2
        corrupt=bytearray(raw)
        offset=dict(image.entries())['Kernel'].record_offset
        corrupt[offset+4]^=1
        lib.cpu.mem_write(source,bytes(corrupt))
        assert call('open',source,len(corrupt),0)==0
        assert call('lookup',name)==5
        print(arch+': C boot reader passes primary/backup headers, fragmented reads, directory boundaries, Unicode, links, bounds and I/O failures.')
        if reference_image:
            supplied = reference_image.read_bytes()
            supplied_volume = Image(supplied)
            entries = dict(supplied_volume.entries())
            callback = 0x18000
            instruction = b'\xc3' if arch in ('i386','x86_64') else struct.pack('<I',0xe12fff1e if arch=='armv7' else 0xd65f03c0)
            lib.cpu.mem_write(callback,instruction)
            def read_disk(cpu,address,size,unused):
                if arch=='i386':
                    stack=cpu.reg_read(UC_X86_REG_ESP)
                    _,low,high,dest,count=struct.unpack('<5I',cpu.mem_read(stack+4,20))
                    offset=low|(high<<32)
                elif arch=='x86_64':
                    offset,dest,count=[cpu.reg_read(reg)for reg in (UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX)]
                elif arch=='armv7':
                    offset=cpu.reg_read(UC_ARM_REG_R1)|(cpu.reg_read(UC_ARM_REG_R2)<<32)
                    dest=cpu.reg_read(UC_ARM_REG_R3)
                    count=struct.unpack('<I',cpu.mem_read(cpu.reg_read(UC_ARM_REG_SP),4))[0]
                else:
                    offset,dest,count=[cpu.reg_read(reg)for reg in (UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3)]
                valid=offset<=len(supplied) and count<=len(supplied)-offset
                if valid: cpu.mem_write(dest,supplied[offset:offset+count])
                cpu.reg_write(lib.result,int(valid))
            hook=lib.cpu.hook_add(UC_HOOK_CODE,read_disk,begin=callback,end=callback)
            assert call('open_reader',callback,supplied_volume.base)==0
            for path in ['Config/startup.command','Config/startup.wsh','Fonts/EBGaramond08-Regular.ttf',
                         'Kernel/Permafrost.kernel','Kernel/Modules/Stage4.kmod']:
                expected=supplied_volume.read(entries[path].first,entries[path].size)
                lib.cpu.mem_write(name,path.encode()+b'\0')
                assert call('lookup',name)==0,(arch,path)
                assert call('size')==len(expected)
                assert call('read',0,destination,len(expected))==0,(arch,path)
                assert bytes(lib.cpu.mem_read(destination,len(expected)))==expected,(arch,path)
            lib.cpu.hook_del(hook)
            print(arch+': C boot reader matches five complete files from the supplied release, including the compressed kernel and Stage4 module.')


if __name__ == '__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output',required=True,type=Path)
    parser.add_argument('--stage3',type=Path)
    parser.add_argument('--image',type=Path)
    args=parser.parse_args()
    exercise(args.output,args.stage3,args.image)
