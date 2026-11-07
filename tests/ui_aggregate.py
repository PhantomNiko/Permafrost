#!/usr/bin/env python3
"""Compare TerrorUI value exports using each architecture's aggregate ABI.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import random
import struct
from dll import DLL
from unicorn.x86_const import UC_X86_REG_RDX
from unicorn.arm64_const import UC_ARM64_REG_X8,UC_ARM64_REG_X1


def exercise(path,api_base=None):
    lib=DLL(path,poison_stack=True,api_base=api_base)
    out=0x3000000;incoming=0x3010000;wide=lib.wide
    width=8 if wide else 4;view_size=88 if wide else 72;spec_size=72 if wide else 52
    results=[]
    def aggregate(name,size,args=(),value=None):
        lib.cpu.mem_write(out,b'\xa5'*(size+16))
        if lib.cpu_type==0x100000c:
            lib.cpu.reg_write(UC_ARM64_REG_X8,out)
            if value is not None:
                lib.cpu.mem_write(incoming,value);args=(incoming,*args)
            returned=lib.call('_terror_ui_'+name,*args,result_bits=64)
            if size==16:
                lib.cpu.mem_write(out,struct.pack('<QQ',returned,lib.cpu.reg_read(UC_ARM64_REG_X1)))
        elif lib.cpu_type==0x1000007:
            if size==16:
                returned=lib.call('_terror_ui_'+name,*args,result_bits=64)
                lib.cpu.mem_write(out,struct.pack('<QQ',returned,lib.cpu.reg_read(UC_X86_REG_RDX)))
            elif value is not None:
                registers=[out,*args];registers += [0]*(6-len(registers))
                lib.call('_terror_ui_'+name,*registers,*struct.unpack('<'+'Q'*(size//8),value),result_bits=64)
            else:lib.call('_terror_ui_'+name,out,*args,result_bits=64)
        else:
            words=struct.unpack('<'+'I'*(size//4),value)if value is not None else()
            lib.call('_terror_ui_'+name,out,*words,*args,result_bits=32)
        data=bytes(lib.cpu.mem_read(out,size+16))
        assert data[size:]==b'\xa5'*16,(name,'overwritten result boundary')
        results.append((name,data[:size]));return data[:size]
    def modifier(name,value,*args):return aggregate(name,len(value),args,value)
    rng=random.Random(0x100)
    for _ in range(5):
        view=rng.randbytes(view_size);spec=rng.randbytes(spec_size)
        for name in ['foreground','background','text_scale','alignment']:
            for value in [0,1,3,4,0xffffffff,0x123456]:modifier('view_'+name,view,value)
        for w,h in [(-1,-1),(0,0),(17,23),(-1,64),(72,-1)]:modifier('view_frame',view,w&0xffffffff,h&0xffffffff)
        padding=(0x0000000200000001,0x0000000400000003)if wide else(1,2,3,4)
        modifier('view_padding',view,*padding)
        for name in ['transparency','shadow','blur','refract']:
            for value in [0,1,50,100,255,0xffffffff]:modifier('window_spec_'+name,spec,value)
        for name in ['clear','solid']:modifier('window_spec_'+name,spec)
        for mode in [0,1,2,3,4,0xffffffff]:modifier('window_spec_mode',spec,mode,0xffffffff)
    for value in [0,1,0x7fffffff,0x80000000,0xffffffff]:
        assert aggregate('insets',16,(value,))==struct.pack('<4I',*[value]*4)
        assert aggregate('insets_xy',16,(value,17))==struct.pack('<4I',17,value,17,value)
    assert aggregate('insets_make',16,(1,2,3,4))==struct.pack('<4I',1,2,3,4)
    default=bytearray(view_size);struct.pack_into('<4I',default,32 if wide else 24,1,0x202020,0xf6f6f6,1)
    assert aggregate('view_empty',view_size)==default
    ptr=lambda data,offset,value:struct.pack_into('<Q'if wide else'<I',data,offset,value)
    for name,kind,args in [('text',1,(0x3020000,)),('rectangle',2,(0x123456,)),('spacer',4,()),('button',3,(0x3020000,0x3030000,0x3040000)),('hstack',5,(0x3050000,3,7)),('vstack',6,(0x3050000,3,7)),('zstack',7,(0x3050000,3))]:
        expected=bytearray(default);struct.pack_into('<I',expected,0,kind)
        if kind in[1,3]:ptr(expected,8,args[0])
        if kind==2:struct.pack_into('<I',expected,4,2);struct.pack_into('<I',expected,40 if wide else 32,args[0])
        if kind==3:ptr(expected,72 if wide else 64,args[1]);ptr(expected,80 if wide else 68,args[2])
        if kind in[5,6,7]:
            ptr(expected,16 if wide else 12,args[0]);struct.pack_into('<II',expected,24 if wide else 16,args[1],args[2]if kind!=7 else 0)
        assert aggregate(name,view_size,args)==expected,(name,results[-1][1].hex(),expected.hex())
    for w,h in[(0,0),(17,23),(0xffffffff,3)]:
        expected=bytearray(spec_size);ptr(expected,0,0x3020000);struct.pack_into('<8I',expected,width,w,h,w*4&0xffffffff,0xf6f6f6,0xffffffff,0xffffffff,0xffffffff,0)
        assert aggregate('window_spec',spec_size,(0x3020000,w,h))==expected
    return results


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path)
    parser.add_argument('--api-base',type=lambda s:int(s,0))
    args=parser.parse_args();native=exercise(args.reference,args.api_base);source=exercise(args.source,args.api_base)
    for i,(a,b)in enumerate(zip(native,source)):assert a==b,(i,a,b)
    assert len(native)==len(source)
    print(f'TerrorUI: {len(native)} aggregate constructor/modifier cases passed.')


if __name__=='__main__':main()
