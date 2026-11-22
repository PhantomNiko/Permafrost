#!/usr/bin/env python3
"""Compare recovered SDK C strings, memory, and integer conversion ABIs.

Pooka's Free Software License. Reference objects are emulator inputs only.
"""
import argparse
from pathlib import Path
from dll import DLL
from unicorn.arm64_const import UC_CPU_ARM64_MAX
from native import inspect

def exercise(reference,source):
 metadata,_=inspect(reference.read_bytes());libs=[DLL(p,cpu_model=UC_CPU_ARM64_MAX if metadata['cpu']==0x100000c else None)for p in [reference,source]]
 libs[1].call('_pf_rt_initialize');count=0
 cases=[]
 for text in [b'',b'hello',b'a/b/a',b'AaZz09',b'\x80\xff']:
  cases.append(('strlen',[text]))
  for limit in [0,1,3,8]:cases.append(('strnlen',[text,limit]))
  for char in [0,ord('a'),ord('/'),255]:
   for name in ['strchr','strrchr']:cases.append((name,[text,char]))
  for other in [b'',b'hello',b'HELLO',b'zz',b'a/']:
   for name in ['strcmp','strcasecmp','strspn','strcspn','strstr']:cases.append((name,[text,other]))
   for limit in [0,1,3,8]:
    for name in ['strncmp','strncasecmp']:cases.append((name,[text,other,limit]))
 for text in [b'',b'0',b'17',b'-19',b'  +42z',b'0x1f',b'077',b'2147483647',b'-2147483648']:
  for name in ['atoi','atol','atoll']:cases.append((name,[text]))
 for size in [0,1,3,7,16,33,129]:
  for offset in [0,1,7]:
   for name in ['memcpy','memmove','memset','memcmp','memchr']:cases.append((name,[size,offset]))
 for name,arguments in cases:
  if '_'+name not in libs[0].exports:continue
  results=[]
  for lib in libs:
   lib.cpu.mem_write(0x2e0000,bytes(4096));args=[]
   if name.startswith('mem'):
    size,offset=arguments;lib.cpu.mem_write(0x2e0000,bytes((i*31+7)&255 for i in range(1024)))
    args=[0x2e0000+offset,0x2e0020,size]if name in ['memcpy','memmove','memcmp']else[0x2e0000+offset,0xa5 if name=='memset'else 7,size]
   else:
    for i,arg in enumerate(arguments):
     if isinstance(arg,bytes):pointer=0x2e0100+i*256;lib.cpu.mem_write(pointer,arg+b'\0');args.append(pointer)
     else:args.append(arg)
   bits=64 if lib.wide and name not in ['strcmp','strncmp','strcasecmp','strncasecmp','memcmp','atoi']else 32
   try:result=lib.call('_'+name,*args,result_bits=bits)
   except AssertionError as error:raise AssertionError((name,arguments,'native'if lib is libs[0]else'source'))from error
   results.append((result,bytes(lib.cpu.mem_read(0x2e0000,256))if name in ['memcpy','memmove','memset']else b''))
  assert results[0]==results[1],(name,arguments,results);count+=1
 print('SDK C runtime: %d native string, memory, and integer-conversion comparisons passed.'%count)
if __name__=='__main__':
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);args=parser.parse_args();exercise(args.reference,args.source)
