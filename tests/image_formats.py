#!/usr/bin/env python3
"""Compare r147 image format detection, encoders and decoders through their C++ ABI.

Pooka's Free Software License.
"""
from pathlib import Path
import argparse,struct
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2


def library(path):
    lib=DLL(path,instruction_limit=200000000);lib.files={}
    arm=lib.cpu_type in(12,0x100000c)
    def write(cpu,address,size,user):
        if lib.cpu_type==7:
            sp=cpu.reg_read(UC_X86_REG_ESP);name,data,count=struct.unpack('<III',bytes(cpu.mem_read(sp+4,12)))
        else:
            registers=(UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2)if lib.cpu_type==12 else(UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2)if arm else(UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX)
            name,data,count=[cpu.reg_read(r)for r in registers]
        assert count<0x1000000,'unbounded encoded file'
        filename=bytes(cpu.mem_read(name,256)).split(b'\0',1)[0].decode()
        lib.files[filename]=bytes(cpu.mem_read(data,count));cpu.reg_write(lib.result,1)
    table=0x40010800 if arm else 0x6800;hook=0x10030
    lib.cpu.mem_write(table+0x38,struct.pack('<I',hook))
    lib.cpu.mem_write(hook,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if arm else b'\xc3')
    lib.cpu.hook_add(UC_HOOK_CODE,write,begin=hook,end=hook)
    return lib


def inspect_image(lib,data):
    buffer,image=0x3100000,0x3120000
    lib.cpu.mem_write(buffer,data)
    kind=lib.call('__ZN2wm3png13detect_formatEPKhm',buffer,len(data),result_bits=32)
    lib.cpu.mem_write(image,bytes(32))
    decoded=lib.call('__ZN2wm3png11load_memoryEPKhmRNS0_5ImageE',buffer,len(data),image)
    if not decoded:return kind,None
    width,height,pixels,count,capacity=struct.unpack('<IIQQQ'if lib.wide else'<IIIII',bytes(lib.cpu.mem_read(image,32 if lib.wide else 20)))
    assert width*height*4==count and count<4000000,(width,height,count)
    return kind,(width,height,bytes(lib.cpu.mem_read(pixels,count)))


FORMATS=('bmp','png','rei','tga','xcf','jpeg')


def exercise(path,formats=FORMATS):
    results={};pixels=bytes([255,0,0,255,0,255,0,128,0,0,255,0,13,57,99,255,250,240,230,255,1,2,3,255])
    for format in formats:
        lib=library(path);name=('fixture.'+format).encode()+b'\0';lib.cpu.mem_write(0x3000000,name);lib.cpu.mem_write(0x3001000,pixels)
        symbol='__ZN2wm3png%d%s_rgba8_fileEPKcPKhii'%(20 if format=='jpeg'else 19,'save_'+format)
        assert lib.call(symbol,0x3000000,0x3001000,3,2)==1,(format,'encode failed')
        assert name[:-1].decode()in lib.files,(str(path),format,list(lib.files))
        data=lib.files[name[:-1].decode()];assert data
        try: decoded=inspect_image(lib,data)
        except Exception as error: raise AssertionError((str(path),format))from error
        results[format]=(data,decoded)
        for width,height in((0,2),(3,0),(-1,2)):
            assert lib.call(symbol,0x3000000,0x3001000,width&0xffffffff,height&0xffffffff)==0,(format,'accepted invalid dimensions')
    return results


def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);args=parser.parse_args()
    reference,source=exercise(args.reference),exercise(args.source)
    for format in reference:
        expected=reference[format][1]
        assert expected[1] is not None,(format,'reference fixture did not decode')
        for encoded in(reference[format][0],source[format][0]):
            original=inspect_image(library(args.reference),encoded)
            recovered=inspect_image(library(args.source),encoded)
            assert original[1] is not None,(format,'encoded stream rejected by native decoder')
            assert recovered==original,(format,'native/source decoded pixels differ')
            if format!='jpeg':
                assert original==expected,(format,'lossless encoder changed pixels')
    print('Image formats: six encoders, format detection, decoding, and invalid dimensions passed.')
if __name__=='__main__':main()
