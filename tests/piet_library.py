#!/usr/bin/env python3
"""Compare Piet value, variable and engine execution through the native C++ ABI.

Pooka's Free Software License.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from unicorn.arm64_const import UC_ARM64_REG_X8
from unicorn.x86_const import UC_X86_REG_ESP
V='__ZN6winter4piet5Value';W='__ZN6winter4piet8Variable';E='__ZN6winter4piet6Engine';K='__ZNK6winter4piet6Engine'


def exercise(path,api_base=None):
    lib=DLL(path,poison_stack=True,poison_allocations=True,api_base=api_base);cpu=lib.cpu;wide=lib.wide;word=8 if wide else 4;fmt='<Q'if wide else'<I';results=[];out=0x3000000;value=0x3010000;engine=0x3100000
    def call(name,*args,bits=32):return lib.call(name,*args,result_bits=bits)
    def number_args(value):return(value&0xffffffffffffffff,)if wide else(value&0xffffffff,(value>>32)&0xffffffff)
    def aggregate(name,*args):
        cpu.mem_write(out,b'\xa5'*128)
        if lib.cpu_type==0x100000c:cpu.reg_write(UC_ARM64_REG_X8,out);call(name,*args)
        else:call(name,out,*args)
        if lib.cpu_type==7:assert cpu.reg_read(UC_X86_REG_ESP)==0x4fe0008,('aggregate hidden result cleanup',name)
    def string(address,text):
        data=text.encode();cpu.mem_write(address+0x100,data+b'\0');cpu.mem_write(address,struct.pack('<QQQ'if wide else'<III',address+0x100,len(data),len(data)))
    for n in[0,1,-1,42,-123456789,0x123456789abcdef]:
        aggregate(V+'10makeNumberEx',*number_args(n));raw=bytes(cpu.mem_read(out,64));assert raw[0]==1;offset=32 if wide else 16;assert struct.unpack_from('<q',raw,offset)[0]==n;assert raw[48 if wide else 28]==0;results.append(('number',n))
    for n in[0,1,17,0xffffffff]:
        aggregate(V+'12makeVariableEm',n);raw=bytes(cpu.mem_read(out,64));assert raw[0]==2;assert struct.unpack_from(fmt,raw,40 if wide else 24)[0]==max(n,1);results.append(('variable',n))
    for text in['','Piet','42','-17','0x2a','bad']:
        string(0x3020000,text);aggregate(V+'10makeStringERKSs',0x3020000);ptr,length,capacity=struct.unpack('<QQQ'if wide else'<III',bytes(cpu.mem_read(out+word,word*3)));assert bytes(cpu.mem_read(ptr,length))==text.encode()and length==len(text);assert cpu.mem_read(out,1)==b'\0';results.append(('text',text))
        cpu.mem_write(value,bytes(64));call(W+'9setStringERKSs',value,0x3020000);numeric=call('__ZNK6winter4piet8Variable8toNumberEv',value,bits=64);results.append(('parsed',text,numeric))
        aggregate('__ZNK6winter4piet8Variable8toStringEv',value);ptr,length,capacity=struct.unpack('<QQQ'if wide else'<III',bytes(cpu.mem_read(out,word*3)));assert bytes(cpu.mem_read(ptr,length))==text.encode()
        call(W+'5clearEv',value);assert cpu.mem_read(value,1)==b'\0'
    cpu.mem_write(value,bytes(64))
    for n in[0,1,-19,0x123456789abcdef]:
        call(W+'9setNumberEx',value,*number_args(n));assert call('__ZNK6winter4piet8Variable8toNumberEv',value,bits=64)==n&0xffffffffffffffff;results.append(('stored',n))
    for colors,width,height in[([],0,0),([0xffffff],1,1),([0,0xffffff,0xff0000,0,0x00ff00,0x0000ff,0xfff,0,0xffffff],3,3)]:
        cpu.mem_write(engine,b'\xa5'*4096);image=0x3030000;pixels=0x3040000
        if colors:cpu.mem_write(pixels,b''.join(struct.pack('<I',x)for x in colors))
        cpu.mem_write(image,struct.pack('<IIQ'if wide else'<III',width,height,pixels)+bytes(16));call(E+'C1EP10PlushImage',engine,image)
        assert call(K+'5imageEv',engine,bits=64 if wide else 32)==image
        assert call(K+'7cursorXEv',engine)==1 and call(K+'7cursorYEv',engine)==1
        for _ in range(5):
            results.append(('direction',call(K+'9directionEv',engine)));call(E+'15rotateClockwiseEv',engine)
        call(E+'6jumpToEii',engine,7,9);assert(call(K+'7cursorXEv',engine),call(K+'7cursorYEv',engine))==(7,9)
        call(E+'16setColourCounterEj',engine,0x1234);assert call(K+'13colourCounterEv',engine)==0x1234
        call(E+'11resetCursorEv',engine)
        for _ in range(8):
            result=call(E+'4stepEv',engine);results.append(('step',result,call(K+'7cursorXEv',engine),call(K+'7cursorYEv',engine),call(K+'9directionEv',engine),call(K+'10terminatedEv',engine)))
        call(E+'20appendNumberVariableEx',engine,*number_args(42));ptr=call(K+'14tryGetVariableEm',engine,1,bits=64 if wide else 32);results.append(('appended',bool(ptr)))
        if ptr:results.append(('appended value',call('__ZNK6winter4piet8Variable8toNumberEv',ptr,bits=64)))
    # Call installed builtins through their real virtual invoke slots. This
    # exercises the function table and argument-value ABI independently of
    # image token parsing.
    for identifier in range(1,23):
        cpu.mem_write(engine,b'\xa5'*4096);call(E+'C1EP10PlushImage',engine,0)
        for n in[42,7]:call(E+'20appendNumberVariableEx',engine,*number_args(n))
        call(E+'22setActiveVariableIndexEm',engine,1)
        table=call(K+'9functionsEv',engine,bits=64 if wide else 32)
        data,count,capacity=struct.unpack('<QQQ'if wide else'<III',bytes(cpu.mem_read(table,word*3)))
        assert identifier<count
        definition=data+identifier*word*4
        types,arity,capacity,holder=struct.unpack('<QQQQ'if wide else'<IIII',bytes(cpu.mem_read(definition,word*4)))
        if not holder:continue
        arguments=bytes(cpu.mem_read(types,arity));results.append(('builtin signature',identifier,arguments))
        value_size=56 if wide else 32
        for index,kind in enumerate(arguments):
            if kind==0:string(0x3020000,'17');aggregate(V+'10makeStringERKSs',0x3020000)
            elif kind==1:aggregate(V+'10makeNumberEx',*number_args(7 if index==0 else 3))
            elif kind==2:aggregate(V+'12makeVariableEm',1)
            else:raise AssertionError(('unknown builtin input type',kind))
            cpu.mem_write(0x3200000+index*value_size,bytes(cpu.mem_read(out,value_size)))
        cpu.mem_write(0x3210000,struct.pack('<QQQ'if wide else'<III',0x3200000,arity,arity))
        vtable=struct.unpack(fmt,bytes(cpu.mem_read(holder,word)))[0]
        invoke=struct.unpack(fmt,bytes(cpu.mem_read(vtable+2*word,word)))[0]
        lib.exports['_fixture_builtin']=invoke;call('_fixture_builtin',holder,engine,0x3210000)
        variables=call(K+'9variablesEv',engine,bits=64 if wide else 32)
        data,count,capacity=struct.unpack('<QQQ'if wide else'<III',bytes(cpu.mem_read(variables,word*3)))
        assert count<64,('unbounded builtin variable count',identifier,count)
        values=[]
        for index in range(count):
            variable=data+index*(40 if wide else 24);tag=cpu.mem_read(variable,1)[0]
            numeric=call('__ZNK6winter4piet8Variable8toNumberEv',variable,bits=64)
            text_ptr,length,capacity=struct.unpack('<QQQ'if wide else'<III',bytes(cpu.mem_read(variable+word,word*3)))
            values.append((tag,numeric,bytes(cpu.mem_read(text_ptr,length))if text_ptr else b''))
        results.append(('builtin state',identifier,call(K+'19activeVariableIndexEv',engine,bits=64 if wide else 32),values,call(K+'7cursorXEv',engine),call(K+'7cursorYEv',engine),call(K+'9directionEv',engine),call(K+'10terminatedEv',engine)))
    return results


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--api-base',type=lambda s:int(s,0));a=p.parse_args();n=exercise(a.reference,a.api_base);s=exercise(a.source,a.api_base)
    for i,(x,y)in enumerate(zip(n,s)):assert x==y,(i,x,y)
    assert n==s;print(f'Piet: {len(n)} value, variable and engine comparisons passed.')


if __name__=='__main__':main()
