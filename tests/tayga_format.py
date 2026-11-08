#!/usr/bin/env python3
"""Compare Tayga variadic text/integer formatting with its native runtime.

Pooka's Free Software License. Native applications are test inputs only.
"""
import argparse,struct
from pathlib import Path
from types import SimpleNamespace
from desktop_calendar import load
from native import inspect
from varargs import format_text
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_XMM0,UC_X86_REG_RAX

def exercise(reference,source,library,folder):
 libs=load(reference,source,folder,library);m,memory=inspect(reference.read_bytes());native={n:a for a,n in m['symbols']};sm,_=inspect(source.read_bytes());symbols={n:a for a,n in sm['symbols']}
 if libs[0].cpu_type==12:
  end=next(a+n for k,a,n in m['sections']if k=='__text');libs[0].cpu.mem_write(end,memory[end:])
 for i,l in enumerate(libs):
  if i:l.exports['initialize']=l.base+symbols['_pf_app_initialize'];l.call('initialize')
  l.exports['format']=l.base+(symbols['_recovered_%x'%(native['_snprintf']-m['base']+0x10000000)]if i else native['_snprintf'])
 float_bits=[None]
 for l in libs:
  if l.cpu_type==0x1000007:
   def floating(cpu,address,size,user):
    if float_bits[0]is not None:cpu.reg_write(UC_X86_REG_XMM0,float_bits[0]);cpu.reg_write(UC_X86_REG_RAX,1)
   l.cpu.hook_add(UC_HOOK_CODE,floating,begin=l.exports['format'],end=l.exports['format'])
 cases=[('plain',[]),('%s',[None]),('%s',[0]),('%c:%d:%u:%x:%X',[65,-7,4294967295,0xabc,0xdef]),('%hhd:%hhu:%hd:%hu',[255,511,65535,131071]),('%I',[-2147483648]),('%05d %.3u %-8s',[7,12,None]),('%*s',[20,None]),('%.*s',[2,None]),('%% %q %e %g %o',[]),('%p',[0]),('%p',[0xabcdef]),('%s %s %s %s %s',[None]*5)]
 for value in [0,1,0x123456789abcdef,0x7fffffffffffffff,0x8000000000000000,0xffffffffffffffff]:
  words=[value]if libs[0].wide else[value&0xffffffff,value>>32];cases.extend([('%llu',words),('%lld',words),('%llx',words)])
 cases=[(text,words,None)for text,words in cases]
 for value in [0.0,3.5,-0.25,1.2,123456.125]:
  bits=struct.unpack('<Q',struct.pack('<d',value))[0];words=[bits]if libs[0].wide else[bits&0xffffffff,bits>>32];cases.append(('%f',words,bits))
 for text,words,floating in cases:
  float_bits[0]=floating
  result=[]
  for l in libs:
   machine=SimpleNamespace(cpu=l.cpu,cpu_type=l.cpu_type,data=0x2e0000,stack=0x4fe0000,stop=l.stop,address=l.exports['format'])
   result.append((format_text(machine,text,words),l.cpu.reg_read(l.result)&0xffffffff))
  assert result[0]==result[1],(text,words,result)
 print('Tayga formatter: %d native variadic formatting comparisons passed.'%len(cases))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
