#!/usr/bin/env python3
"""Compare all Tayga utility launchers with their native command forwarding.

Pooka's Free Software License. No commands are executed outside the emulator.
"""
import argparse,hashlib,struct,sys
from pathlib import Path
from cube_render import diagnostic_reference
from dll import DLL
from native import inspect,slices,CPUS
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *

def exercise(reference,source,arch,folder):
 folder.mkdir(parents=True,exist_ok=True);code_variants=set();count=0
 for path in sorted(reference.iterdir()):
  binary=slices(path.read_bytes())[CPUS[arch]];m,memory=inspect(binary);start,size=next((a,n)for k,a,n in m['sections']if k=='__text');digest=hashlib.sha256(memory[start-m['base']:start-m['base']+size]).hexdigest()
  code_variants.add(digest)
  thin=folder/(path.name+'-thin');thin.write_bytes(binary);native=folder/(path.name+'-native');diagnostic_reference(thin,native);actual=folder/(path.name+'-source');diagnostic_reference(source/path.name/path.name,actual);libs=[DLL(native),DLL(actual)];sessions=[]
  if libs[0].cpu_type in [7,0x1000007]:libs[0].cpu.mem_write(m['base'],memory)
  elif libs[0].cpu_type==12:libs[0].cpu.mem_write(start+size,memory[start+size:])
  for index,l in enumerate(libs):
   meta,_=inspect((native if not index else actual).read_bytes());names={n:a for a,n in meta['symbols']};l.exports['entry']=l.base+names['_winterboot_tayga_tool_entry'if not index else'_main'];s={'events':[]};sessions.append(s)
   def service(cpu,address,size,user,l=l,s=s):
    slot=0x40+(address-0x12000)//16;n={0x40:1,0x130:1,0x138:3,0x144:1,0x148:3}[slot]
    if l.cpu_type==7:args=list(struct.unpack('<'+'I'*n,bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,n*4))))
    else:
     regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]if l.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]if l.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX];args=[cpu.reg_read(r)for r in regs[:n]]
    def text(pointer):return bytes(cpu.mem_read(pointer,4096)).split(b'\0')[0]
    result=1
    if slot==0x130:cpu.mem_write(args[0],struct.pack('<III',1,444,s['active'])+bytes(432));result=s['status']
    elif slot==0x144:cpu.mem_write(args[0],bytes(8)+struct.pack('<I',s['flags'])+bytes(530)+s['command']+b'\0');result=s['process']
    elif slot==0x138:s['events'].append(('execute',text(args[0]),args[2]));cpu.mem_write(args[1],s['output']+b'\0');result=s['success']
    elif slot==0x148:s['events'].append(('stream',args[0],bytes(cpu.mem_read(args[1],args[2]))));result=s['stream']
    else:s['events'].append(('log',text(args[0])))
    cpu.reg_write(l.result,result)
   for slot in [0x40,0x130,0x138,0x144,0x148]:
    address=0x12000+(slot-0x40)*16;l.cpu.mem_write(address,struct.pack('<I',0xe12fff1e if l.cpu_type==12 else 0xd65f03c0)if l.cpu_type in [12,0x100000c]else b'\xc3');l.cpu.hook_add(UC_HOOK_CODE,service,begin=address,end=address)
    for api in l.api_tables:l.cpu.mem_write(api+slot,struct.pack('<I',address))
  defaults=dict(status=1,active=1,process=0,flags=0,command=b'',success=1,output=b'',stream=1)
  cases=[{},dict(process=1,flags=2,command=(path.name+' sample').encode())]
  if path.name=='cat':cases += [dict(status=0),dict(active=0),dict(process=1,flags=0,command=b'ignored'),dict(process=1,flags=2,command=b'x'*511),dict(success=0),dict(success=0,output=b'error\n',stream=0),dict(output=b'alpha\n\nbeta\n'),dict(output=b'alpha\n\nbeta\n',stream=0),dict(output=b'x'*300+b'\nend',stream=0),dict(output=b'x'*4095)]
  for case in cases:
   results=[]
   for l,s in zip(libs,sessions):s.update(defaults);s.update(case);s['events']=[];result=l.call('entry',result_bits=32);results.append((result,tuple(s['events'])))
   assert results[0]==results[1],(path.name,case,results)
   if not case:assert results[0]==(0,(('execute',path.name.encode(),4096),)),(path.name,results)
   count+=1
 print('Tayga tools: 24 source launchers, %d native comparisons passed (%d native text variants).'%(count,len(code_variants)))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--arch',choices=CPUS,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.arch,a.output)
