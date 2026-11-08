#!/usr/bin/env python3
"""Compare installer command construction, device parsing, and status handling.

All command execution is intercepted in the emulator. No disk is modified.
Pooka's Free Software License. Reference applications are test inputs only.
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
 libs=load(reference,source,folder,library);metadata,_=inspect(reference.read_bytes());native={n:a for a,n in metadata['symbols']};m,_=inspect(source.read_bytes());symbols={n:a for a,n in m['symbols']}
 if libs[0].cpu_type==12:
  # ARM32 executable pointer tables retain low addresses without dyld rebases.
  _,memory=inspect(reference.read_bytes());end=next(a+n for k,a,n in metadata['sections']if k=='__text')
  libs[0].cpu.mem_write(end,memory[end:])
 sessions=[]
 for index,lib in enumerate(libs):
  if index:
   lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
  for name in ['_refreshDevices','_runInstall']:
   a=native[name];lib.exports[name]=lib.base+(symbols['_recovered_%x'%(a-metadata['base']+0x10000000)]if index else a)
  session={'calls':[],'text':b'','status':0};sessions.append(session)
  def execute(cpu,address,size,user,lib=lib,s=session):
   if lib.cpu_type==7:
    sp=cpu.reg_read(UC_X86_REG_ESP);args=struct.unpack('<3I',bytes(cpu.mem_read(sp+4,12)))
   else:
    regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX];args=[cpu.reg_read(r)for r in regs]
   command,out,capacity=args;s['calls'].append(bytes(cpu.mem_read(command,512)).split(b'\0')[0]);assert capacity==4096
   cpu.mem_write(out,s['text'][:capacity-1]+b'\0');cpu.reg_write(lib.result,s['status'])
  address=0x12000
  lib.cpu.mem_write(address,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in [12,0x100000c]else b'\xc3')
  lib.cpu.hook_add(UC_HOOK_CODE,execute,begin=address,end=address)
  for table in lib.api_tables:lib.cpu.mem_write(table+0x98,struct.pack('<I',address))
 cases=[('_runInstall',0,0,b''),('_refreshDevices',0,0,b''),('_refreshDevices',0,0,b'controller unavailable'),('_refreshDevices',0,1,b'INSTALLER DEVICE 7 disk\nINSTALLER DEVICE 12 removable\n'),('_refreshDevices',0,1,b'unrelated\n')]
 for status in [0,1]:
  for text in [b'',b'WinterShell error: unavailable\n',b'INSTALL ERROR: bad device\n',b'working\nINSTALL COMPLETE\n',b'first\nlast status\n']:
   cases.append(('_runInstall',1,status,text))
 cases=[(*case,{})for case in cases]
 for fmt in range(5):
  for target in range(15):cases.append(('_runInstall',1,0,b'INSTALL ERROR: selected target\n',{0xc6c:fmt,0xc74:target}))
 cases += [('_runInstall',1,0,b'',{0:0xffffffff,0xc70:0xffffffff,0xc78:0xffffffff}),
           ('_refreshDevices',0,1,b''.join(b'INSTALLER DEVICE '+str(i).encode()+b' disk\n'for i in range(30)),{0xc64:99}),
           ('_refreshDevices',0,1,b'INSTALLER DEVICE no digits\nINSTALLER DEVICE -7 odd\n',{}),
           ('_refreshDevices',0,1,b'X'*240+b'\nINSTALLER DEVICE 3 disk\n',{}),
           ('_runInstall',1,1,b'first\n\t \r\nfinal\n \t\r\n',{})]
 for name,count,status,text,fields in cases:
  results=[]
  for index,(lib,s)in enumerate(zip(libs,sessions)):
   state=bytearray(0xf80);struct.pack_into('<I',state,0,7);struct.pack_into('<I',state,0xc60,count);struct.pack_into('<I',state,0xc70,50)
   for offset,value in fields.items():struct.pack_into('<I',state,offset,value)
   lib.cpu.mem_write(0x2e0000,bytes(state));s.update(calls=[],text=text,status=status)
   if index==0 and lib.cpu_type==7:lib.cpu.reg_write(UC_X86_REG_ECX,0x2e0000);lib.call(name)
   else:lib.call(name,0x2e0000)
   results.append((tuple(s['calls']),bytes(lib.cpu.mem_read(0x2e0000,len(state)))))
  assert results[0]==results[1],(name,count,status,text,[(r[0],r[1][0xc60:0xcc0])for r in results])
 print('Installer: %d native device, command, and status comparisons passed.'%len(cases))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
