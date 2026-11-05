#!/usr/bin/env python3
"""Compare in-house Lua/Rwby DLL execution through the original C++ entry ABI.

Pooka's Free Software License.
"""
from pathlib import Path
import argparse
import struct
from dll import DLL
from unicorn.arm64_const import UC_ARM64_REG_X8


def evaluate(path, language, code):
    lib=DLL(path)
    if lib.cpu_type!=0x100000c:
        raise ValueError('this entry-ABI fixture currently covers ARM64')
    prefix='__ZN6winter3lua5LuaVM'if language=='lua'else'__ZN6winter4ruby6RubyVM'
    owner='__ZNK6winter3lua5LuaVM'if language=='lua'else'__ZNK6winter4ruby6RubyVM'
    value='__ZN6winter3lua8LuaValue'if language=='lua'else'__ZN6winter4ruby9RubyValue'
    getter='__ZNK6winter3lua8LuaValue9asIntegerEv'if language=='lua'else'__ZNK6winter4ruby9RubyValue9asIntegerEv'
    lookup='9getGlobalERKN2wm6stringERNS0_8LuaValueE'if language=='lua'else'9getGlobalERKN2wm6stringERNS0_9RubyValueE'
    cursor=0x3000000
    for address,text in((0x3001000,code.encode()),(0x3001100,b'[fixture]'),(0x3001200,b'answer')):
        lib.cpu.mem_write(cursor,text+b'\0')
        lib.cpu.mem_write(address,struct.pack('<QQQ',cursor,len(text),len(text)))
        cursor+=len(text)+32
    vm,result=0x3100000,0x3110000
    lib.call(prefix+'C1Ev',vm)
    lib.cpu.reg_write(UC_ARM64_REG_X8,0x3120000)
    lib.call(prefix+'15runScriptStringERKN2wm6stringES5_',vm,0x3001000,0x3001100)
    lib.call(value+'C1Ev',result)
    if not lib.call(owner+lookup,vm,0x3001200,result):
        raise AssertionError('script did not define answer')
    raw=lib.call(getter,result,result_bits=64)
    number=raw if raw<1<<63 else raw-(1<<64)
    return number


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('language',choices=('lua','rwby'))
    parser.add_argument('reference',type=Path)
    parser.add_argument('source',type=Path)
    args=parser.parse_args()
    common=[('answer=6*7',42),('answer=2+3*4',14),('answer=-19+7',-12)]
    extra=([
        ('answer=0; for i=1,12 do answer=answer+i end',78),
                ('a={3,5,8}; answer=a[2]',5),
        ('answer=(1.5*2.0+0.25)*4',13),
    ]if args.language=='lua'else[
        ('answer=0\ni=1\nwhile i<=12\nanswer=answer+i\ni=i+1\nend',78),
        ('def twice(x)\nreturn x*2\nend\nanswer=twice(7)',14),
        ('a=[3,5,8]\nanswer=a[1]',5),
        ('answer=(1.5*2.0+0.25)*4',13),
    ])
    for index,(code,expected)in enumerate(common+extra):
        native=evaluate(args.reference,args.language,code)
        assert native==expected,('reference',index,native,expected)
        try:actual=evaluate(args.source,args.language,code)
        except Exception as error:raise AssertionError(('source VM case failed',index))from error
        assert actual==native,('source',index,actual,native)
        print('%s case %d passed.'%(args.language,index),flush=True)
    print('%s: %d native/source entry-ABI cases passed.'%(args.language,len(common+extra)))


if __name__=='__main__':main()
