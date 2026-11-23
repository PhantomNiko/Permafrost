#!/usr/bin/env python3
"""Compare recovered zlib expansion with native codec routines.

Pooka's Free Software License. Reference binaries remain external test inputs.
"""
import argparse,random,struct,sys,zlib
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from dll import DLL
from unicorn.x86_const import UC_X86_REG_ECX,UC_X86_REG_EDX


def run(path,data,limit,api_base,native,entry):
    library=DLL(path,api_base=api_base,instruction_limit=100000000)
    metadata,_=inspect(path.read_bytes());symbols={n:a for a,n in metadata['symbols']};address=entry if native else symbols['_recovered_%x'%(0x10000000+entry)]
    library.exports['inflate']=library.base+address
    wide=library.wide;word='Q'if wide else'I';fmt='<3'+word
    library.cpu.mem_write(0x3000000,data);library.cpu.mem_write(0x3010000,struct.pack(fmt,0x3000000,len(data),len(data)))
    library.cpu.mem_write(0x3010100,bytes(24))
    if native and library.cpu_type==7:
        library.cpu.reg_write(UC_X86_REG_ECX,0x3010000);library.cpu.reg_write(UC_X86_REG_EDX,0x3010100)
        result=library.call('inflate',limit)
    else:result=library.call('inflate',0x3010000,0x3010100,limit)
    pointer,size,capacity=struct.unpack(fmt,bytes(library.cpu.mem_read(0x3010100,24 if wide else 12)))
    assert size<=limit and size<=capacity,(size,limit,capacity)
    output=bytes(library.cpu.mem_read(pointer,size))if size else b''
    return result,output


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('--api-base',type=lambda x:int(x,0),required=True)
    args=parser.parse_args();metadata,_=inspect(args.reference.read_bytes());entry=next(a for a,n in metadata['symbols']if 'inflate_zlib_stream'in n and '.cold.'not in n);rng=random.Random(344);payloads=[b'',b'A',b'abc'*1000,bytes(range(256))*30,bytes(rng.randrange(256)for _ in range(12000)),bytes(rng.randrange(32)for _ in range(8192))]
    cases=[]
    for payload in payloads:
        for strategy in [zlib.Z_DEFAULT_STRATEGY,zlib.Z_FIXED,zlib.Z_HUFFMAN_ONLY]:
            encoder=zlib.compressobj(9,zlib.DEFLATED,15,8,strategy);encoded=encoder.compress(payload)+encoder.flush();cases.append((encoded,len(payload),payload))
    for encoded,limit,payload in list(cases):
        if payload:cases.append((encoded,max(0,limit-1),None))
        broken=bytearray(encoded);broken[-1]^=1;cases.append((bytes(broken),limit,None));cases.append((encoded+b'\0',limit,None));cases.append((encoded[:-1],limit,None))
    for index,(data,limit,payload)in enumerate(cases):
        expected=run(args.reference,data,limit,args.api_base,True,entry);actual=run(args.source,data,limit,args.api_base,False,entry)
        assert actual[0]==expected[0],(index,actual[0],expected[0],len(data),limit)
        if payload is not None:assert actual==expected==(1,payload),(index,actual[0],expected[0])
    print('DEFLATE: %d native/source cases cover stored/fixed/dynamic trees, varied payloads, limits, checksum failures and trailing/truncated streams.'%len(cases))


if __name__=='__main__':main()
