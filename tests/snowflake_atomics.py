#!/usr/bin/env python3
"""Compare Snowflake's serialized atomic runtime with the original executable.

Pooka's Free Software License. Only emulator memory is modified.
"""
import argparse
from pathlib import Path
from desktop_calendar import load
from native import inspect

def exercise(reference,source,library,folder):
 m,memory=inspect(reference.read_bytes());native={n:a for a,n in m['symbols']};sm,_=inspect(source.read_bytes());symbols={n:a for a,n in sm['symbols']}
 from unicorn.arm64_const import UC_CPU_ARM64_MAX
 # The original ARM64 spinlock uses ARMv8.1 LSE's SWPAL instruction.
 libs=load(reference,source,folder,library,cpu_model=UC_CPU_ARM64_MAX if m['cpu']==0x100000c else None)
 for i,lib in enumerate(libs):
  if i:lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
  elif lib.cpu_type==12:
   end=next(a+n for k,a,n in m['sections']if k=='__text');lib.cpu.mem_write(end,memory[end-m['base']:])
  for name,address in native.items():
   if name.startswith('___atomic_'):lib.exports[name]=lib.base+(symbols['_recovered_%x'%(address-m['base']+0x10000000)]if i else address)
 count=0
 for width in [1,2,4,8]:
  mask=(1<<(width*8))-1
  for initial in [0,mask,mask//3,1<<(width*8-1)]:
   value=(0xa57937f12b8c4e6d&mask)
   for operation in ['load','store','exchange','compare_exchange','compare_fail','compare_null','fetch_add','fetch_sub','fetch_and','fetch_or','fetch_xor','fetch_nand']:
    results=[]
    for lib in libs:
     pointer,oldptr=0x2e0000,0x2e0100;lib.cpu.mem_write(pointer,initial.to_bytes(width,'little'));lib.cpu.mem_write(oldptr,(initial^int(operation=='compare_fail')).to_bytes(width,'little'))
     args=[pointer];name='compare_exchange'if operation.startswith('compare_')else operation;bits=width*8
     if name=='compare_exchange':args.append(0 if operation=='compare_null'else oldptr);bits=8
     if name!='load':args+=([value&0xffffffff,value>>32]if width==8 and not lib.wide else[value])
     result=lib.call('___atomic_'+name+'_'+str(width),*args,result_bits=bits)
     if name=='store':result=0
     results.append((result,bytes(lib.cpu.mem_read(pointer,width)),bytes(lib.cpu.mem_read(oldptr,width))))
    assert results[0]==results[1],(width,initial,operation,results);count+=1
 for size in [0,1,3,8,17]:
  initial=bytes((i*31+5)&255 for i in range(size));desired=bytes((i*17+9)&255 for i in range(size))
  for operation in ['load','store','exchange','compare_exchange','compare_fail']:
   results=[]
   for lib in libs:
    pointer,value,out=0x2e0000,0x2e0100,0x2e0200;lib.cpu.mem_write(pointer,initial or b'\0');lib.cpu.mem_write(value,(initial if operation.startswith('compare')else desired)or b'\0');lib.cpu.mem_write(out,desired or b'\0')
    if operation=='compare_fail'and size:lib.cpu.mem_write(value,bytes([initial[0]^1]))
    name='compare_exchange'if operation.startswith('compare')else operation;args=[size,pointer,value]
    if name in ['exchange','compare_exchange']:args.append(out)
    result=lib.call('___atomic_'+name,*args)
    if name!='compare_exchange':result=0
    results.append((result,bytes(lib.cpu.mem_read(pointer,size or 1)),bytes(lib.cpu.mem_read(value,size or 1)),bytes(lib.cpu.mem_read(out,size or 1))))
   assert results[0]==results[1],(size,operation,results);count+=1
 for value in [0,1,0xff]:
  results=[]
  for lib in libs:
   pointer=0x2e0000;lib.cpu.mem_write(pointer,bytes([value]));old=lib.call('___atomic_test_and_set',pointer);set_value=lib.cpu.mem_read(pointer,1)[0];lib.call('___atomic_clear',pointer);results.append((old,set_value,lib.cpu.mem_read(pointer,1)[0]))
  assert results[0]==results[1];count+=1
 print('Snowflake atomics: %d native fixed-width, generic, and flag comparisons passed.'%count)

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
