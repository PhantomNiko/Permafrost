#!/usr/bin/env python3
"""Compare in-house Lua/Rwby DLL execution through the original C++ entry ABI.

Pooka's Free Software License.
"""
from pathlib import Path
import argparse
import struct
from dll import DLL
from vm_fixtures import fixtures
from unicorn.arm64_const import UC_ARM64_REG_X8


def evaluate(path, language, code):
    lib=DLL(path,instruction_limit=200000000,poison_allocations=True,poison_stack=True)
    if language=='winterscript':
        for address,text in((0x3001000,code.encode()),(0x3001200,b'answer')):
            target=address-0x1000
            lib.cpu.mem_write(target,text+b'\0')
            lib.cpu.mem_write(address,struct.pack('<QQQ'if lib.wide else'<III',target,len(text),len(text)))
        vm,result=0x3100000,0x3110000
        lib.cpu.mem_write(vm,b'\xa5'*65536)
        lib.call('__ZN12WinterScriptC1Ev',vm)
        lib.call('__ZN12WinterScript9runScriptERKN2wm6stringE',vm,0x3001000)
        arguments=(vm,0x3001200)
        if lib.cpu_type==0x100000c:lib.cpu.reg_write(UC_ARM64_REG_X8,result)
        else:arguments=(result,)+arguments
        lib.call('__ZNK12WinterScript12pullVariableERKN2wm6stringE',*arguments)
        tag=int.from_bytes(bytes(lib.cpu.mem_read(result,4)),'little')
        payload=bytes(lib.cpu.mem_read(result+(8 if lib.wide else 4),8))
        if tag==1:return struct.unpack('<i',payload[:4])[0]
        if tag==2:return int(struct.unpack('<f',payload[:4])[0])
        raise AssertionError(('unexpected standalone numeric tag',tag))
    prefix='__ZN6winter3lua5LuaVM'if language=='lua'else'__ZN6winter4ruby6RubyVM'
    owner='__ZNK6winter3lua5LuaVM'if language=='lua'else'__ZNK6winter4ruby6RubyVM'
    value='__ZN6winter3lua8LuaValue'if language=='lua'else'__ZN6winter4ruby9RubyValue'
    getter='__ZNK6winter3lua8LuaValue9asIntegerEv'if language=='lua'else'__ZNK6winter4ruby9RubyValue9asIntegerEv'
    lookup='9getGlobalERKN2wm6stringERNS0_8LuaValueE'if language=='lua'else'9getGlobalERKN2wm6stringERNS0_9RubyValueE'
    cursor=0x3000000
    for address,text in((0x3001000,code.encode()),(0x3001100,b'[fixture]'),(0x3001200,b'answer')):
        lib.cpu.mem_write(cursor,text+b'\0')
        lib.cpu.mem_write(address,struct.pack('<QQQ'if lib.wide else'<III',cursor,len(text),len(text)))
        cursor+=len(text)+32
    vm,result=0x3100000,0x3110000
    lib.cpu.mem_write(vm,b'\xa5'*65536)
    lib.call(prefix+'C1Ev',vm)
    arguments=(vm,0x3001000,0x3001100)
    if lib.cpu_type==0x100000c:
        lib.cpu.reg_write(UC_ARM64_REG_X8,0x3120000)
    else:arguments=(0x3120000,)+arguments
    lib.call(prefix+'15runScriptStringERKN2wm6stringES5_',*arguments)
    lib.call(value+'C1Ev',result)
    if not lib.call(owner+lookup,vm,0x3001200,result):
        raise AssertionError('script did not define answer')
    raw=lib.call(getter,result,result_bits=64)
    number=raw if raw<1<<63 else raw-(1<<64)
    lib.call(prefix+'D1Ev',vm)
    return number


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('language',choices=('lua','rwby','winterscript'))
    parser.add_argument('reference',type=Path)
    parser.add_argument('source',type=Path)
    args=parser.parse_args()
    for index,(code,expected)in enumerate(fixtures(args.language)):
        native=evaluate(args.reference,args.language,code)
        assert native==expected,('reference',index,native,expected)
        try:actual=evaluate(args.source,args.language,code)
        except Exception as error:raise AssertionError(('source VM case failed',index))from error
        assert actual==native,('source',index,actual,native)
        print('%s case %d passed.'%(args.language,index),flush=True)
    print('%s: %d native/source entry-ABI cases passed.'%(args.language,len(fixtures(args.language))))


if __name__=='__main__':main()
