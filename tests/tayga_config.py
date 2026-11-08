#!/usr/bin/env python3
"""Compare Tayga configuration parsing and device/fallback file-service selection.

Pooka's Free Software License. Reference programs are test inputs only.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *

def exercise(reference,source,library,folder):
 libs=load(reference,source,folder,library);m,memory=inspect(reference.read_bytes());names={n:a for a,n in m['symbols']};sm,_=inspect(source.read_bytes());symbols={n:a for a,n in sm['symbols']};sessions=[]
 if libs[0].cpu_type==12:
  end=next(a+n for k,a,n in m['sections']if k=='__text');libs[0].cpu.mem_write(end,memory[end:])
 for index,l in enumerate(libs):
  if index:l.exports['initialize']=l.base+symbols['_pf_app_initialize'];l.call('initialize')
  a=names['_tayga_load_config_on_device'];l.exports['config']=l.base+(symbols['_recovered_%x'%(a-m['base']+0x10000000)]if index else a)
  session={'calls':[],'text':b'','status':1};sessions.append(session)
  def read(cpu,address,size,user,l=l,s=session):
   n=3 if address==0x12000 else 2
   if l.cpu_type==7:
    sp=cpu.reg_read(UC_X86_REG_ESP);args=struct.unpack('<'+'I'*n,bytes(cpu.mem_read(sp+4,n*4)))
   else:
    regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]if l.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]if l.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX];args=[cpu.reg_read(r)for r in regs[:n]]
   path,out=args[-2:];s['calls'].append((args[0]if n==3 else None,bytes(cpu.mem_read(path,128)).split(b'\0')[0]));cpu.mem_write(0x2e4000,s['text']+b'\0');cpu.mem_write(out,struct.pack('<III',0x2e4000,len(s['text']),0));cpu.reg_write(l.result,s['status'])
  for address in [0x12000,0x12010]:
   l.cpu.mem_write(address,struct.pack('<I',0xe12fff1e if l.cpu_type==12 else 0xd65f03c0)if l.cpu_type in [12,0x100000c]else b'\xc3');l.cpu.hook_add(UC_HOOK_CODE,read,begin=address,end=address)
  for api in l.api_tables:l.cpu.mem_write(api+0xc8,struct.pack('<I',0x12000));l.cpu.mem_write(api+0x34,struct.pack('<I',0x12010))
 cases=[b'',b'unknown=1\n',b'ramsize=123456\n',b'ramsize=0\n',b'ramsize=-1\n',b'ramsize=4294967295\n',b'ramsize=4294967296\n',b' ramsize = 4096 ;\n',b'username=alpha\nroot_password=beta\nuser_password=gamma\n',b'username="alpha beta"\n',b'# ramsize=123\n// ramsize=456\n',b'username='+b'x'*150+b'\n',b'ramsize=7\nramsize=9\n']
 cases += [b'swap_only='+v+b'\n'for v in [b'1',b'true',b'yes',b'on',b'0',b'false',b'TRUE',b' true ',b'"true"']]
 count=0
 for size in [412,200]:
  for text in cases:
   results=[]
   for index,(l,s)in enumerate(zip(libs,sessions)):
    l.cpu.mem_write(0x2e0000,b'\xa5'*168);s.update(calls=[],text=text,status=1)
    for api in l.api_tables:l.cpu.mem_write(api+8,struct.pack('<I',size))
    if index==0 and l.cpu_type==7:l.cpu.reg_write(UC_X86_REG_ECX,7);l.cpu.reg_write(UC_X86_REG_EDX,0x2e0000);result=l.call('config')
    else:result=l.call('config',7,0x2e0000)
    results.append((result,tuple(s['calls']),bytes(l.cpu.mem_read(0x2e0000,168))))
   assert results[0]==results[1],(size,text,results)
   count+=1
 print('Tayga configuration: %d native parser and file-service comparisons passed.'%count)
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
