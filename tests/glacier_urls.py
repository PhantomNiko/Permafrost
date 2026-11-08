#!/usr/bin/env python3
"""Compare recovered browser URL parsing with the native application.

Pooka's Free Software License. Reference applications are test inputs only.
"""
import argparse
from pathlib import Path
from desktop_calendar import load
from native import inspect


def exercise(reference,source,library,folder):
    libs=load(reference,source,folder,library)
    original,_=inspect(reference.read_bytes());native={n:a for a,n in original['symbols']}
    metadata,_=inspect(source.read_bytes());symbols={n:a for a,n in metadata['symbols']}
    for index,lib in enumerate(libs):
        if index:
            lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
        for name in ['_glacier_parse_http_url','_glacier_url_decode_path_in_place']:
            address=native[name]
            if index:address=symbols['_recovered_%x'%(address-original['base']+0x10000000)]
            lib.exports[name]=lib.base+address
    count=0
    for value in [b'',b'http://example.test/',b'https://example.test/a?q=1',b'HTTP://EXAMPLE.TEST/a',b'https://example.test:8443/path',b'ftp://example.test/',b'http://',b'http://host:bad/',b'http://host:65536/',b'https://host',b'http://host/#fragment']:
        results=[]
        for lib in libs:
            lib.cpu.mem_write(0x2e0000,value+b'\0');lib.cpu.mem_write(0x2e1000,b'\xa5'*0x144);lib.cpu.mem_write(0x2e2000,bytes(128))
            result=lib.call('_glacier_parse_http_url',0x2e0000,0x2e1000,0x2e2000,128,result_bits=8)
            results.append((result,bytes(lib.cpu.mem_read(0x2e1000,0x144)),bytes(lib.cpu.mem_read(0x2e2000,128))))
        assert results[0]==results[1],('HTTP URL parser differs',value,results);count+=1
    for value in [b'',b'/plain/path',b'/a%20b',b'%2Ftmp%2Ffile',b'%zz%2',b'%00tail',b'plus+sign',b'%e2%98%83']:
        results=[]
        for lib in libs:
            lib.cpu.mem_write(0x2e0000,value+b'\0'+bytes(32));lib.call('_glacier_url_decode_path_in_place',0x2e0000)
            results.append(bytes(lib.cpu.mem_read(0x2e0000,len(value)+1)))
        assert results[0]==results[1],('URL decoding differs',value,results);count+=1
    print('Glacier: %d native HTTP parser and percent-decoding comparisons passed.'%count)


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
