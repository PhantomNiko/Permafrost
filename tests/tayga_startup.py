#!/usr/bin/env python3
"""Compare Tayga startup registration and logs through its first scheduler yield.

Pooka's Free Software License. Kernel services are emulated; no disk is modified.
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
 slots={0x40:1,0x9c:0,0xbc:0,0xc0:3,0xc8:3,0x110:2,0x13c:8}
 for index,l in enumerate(libs):
  if index:l.exports['initialize']=l.base+symbols['_pf_app_initialize'];l.call('initialize')
  a=names['_winterboot_tayga_entry'];l.exports['startup']=l.base+(symbols['_recovered_%x'%(a-m['base']+0x10000000)]if index else a)
  session={'events':[],'current':7,'files':{}};sessions.append(session)
  def text(pointer,l=l):return bytes(l.cpu.mem_read(pointer,512)).split(b'\0')[0]
  def service(cpu,address,size,user,l=l,s=session,text=text):
   slot=0x40+(address-0x12000)//16;count=slots[slot]
   if l.cpu_type==7:
    sp=cpu.reg_read(UC_X86_REG_ESP);args=list(struct.unpack('<'+'I'*count,bytes(cpu.mem_read(sp+4,count*4))))
   elif l.cpu_type==12:
    args=[cpu.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3][:count]]
    if count>4:args+=list(struct.unpack('<'+'I'*(count-4),bytes(cpu.mem_read(cpu.reg_read(UC_ARM_REG_SP),(count-4)*4))))
   elif l.cpu_type==0x100000c:args=[cpu.reg_read(r)for r in [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6,UC_ARM64_REG_X7][:count]]
   else:
    args=[cpu.reg_read(r)for r in [UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9][:count]]
    if count>6:args+=list(struct.unpack('<'+'Q'*(count-6),bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_RSP)+8,(count-6)*8))))
   result=1
   if slot==0xbc:result=s['current']&0xffffffff
   elif slot==0xc0:
    entries,capacity,out=args;assert capacity==32;cpu.mem_write(out,struct.pack('<I',3))
    for i,device in enumerate([1,7,12]):cpu.mem_write(entries+i*504,bytes(496)+struct.pack('<I',device)+bytes(4))
   elif slot==0x110:
    device,out=args;cpu.mem_write(out,struct.pack('<II',device,2 if device==7 else 6 if device==12 else 0)+bytes(132))
   elif slot==0xc8:
    device,path,out=args;s['events'].append(('read',device,text(path)));data=s['files'].get(device,b'');cpu.mem_write(0x2e4000,data+b'\0');cpu.mem_write(out,struct.pack('<III',0x2e4000,len(data),0));result=bool(data)
   elif slot==0x13c:s['events'].append(('register',tuple(x&0xffffffff for x in args[:6]),text(args[6]),text(args[7])))
   elif slot==0x40:s['events'].append(('log',text(args[0])))
   else:s['events'].append(('yield',));cpu.reg_write(l.pc,l.stop);cpu.emu_stop()
   cpu.reg_write(l.result,result)
  for slot,count in slots.items():
   address=0x12000+(slot-0x40)*16;l.cpu.mem_write(address,struct.pack('<I',0xe12fff1e if l.cpu_type==12 else 0xd65f03c0)if l.cpu_type in [12,0x100000c]else b'\xc3');l.cpu.hook_add(UC_HOOK_CODE,service,begin=address,end=address)
   for api in l.api_tables:l.cpu.mem_write(api+slot,struct.pack('<I',address))
 cases=[(7,{}),(7,{7:b'username=alpha\nramsize=1024\n'}),(7,{1:b'username=beta\nswap_only=true\n'}),(-1,{12:b'username=gamma\nramsize=0\n'})]
 for current,files in cases:
  results=[]
  for l,s in zip(libs,sessions):s.update(events=[],current=current,files=files);l.call('startup');results.append(s['events'])
  assert results[0]==results[1],(current,files,results)
  registration=next(event for event in results[0]if event[0]=='register');expected_config=7 if not files or 7 in files else next(iter(files))
  assert registration[1][1:3]==(7,expected_config),(current,files,registration)
  assert results[0][-1]==('yield',)
 print('Tayga startup: %d native device-selection, process-registration, log, and yield comparisons passed.'%len(cases))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
