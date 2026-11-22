#!/usr/bin/env python3
"""Compare network receive/transmit data, rings, completions, and error paths.

Pooka's Free Software License. Hardware callbacks are intercepted.
"""
import argparse,struct,hashlib,itertools
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *
LAYOUTS={7:dict(api=0xd000,enabled=4,header=16,rxq=36,rxused=40,txq=48,txused=52,rxring=0xd170,rxbuf=0xd200,txring=0x152e0),0x1000007:dict(api=0x10000,enabled=8,header=20,rxq=40,rxused=44,txq=56,txused=60,rxring=0x10180,rxbuf=0x10210,txring=0x182f0),12:dict(api=0x8020,enabled=4,header=16,rxq=36,rxused=40,txq=48,txused=52,rxring=0x8160,rxbuf=0x81f0,txring=0x10ad0),0x100000c:dict(api=0x10118,enabled=8,header=20,rxq=40,rxused=44,txq=56,txused=60,rxring=0x10160,rxbuf=0x8000,txring=0x100d0)}
def exercise(path,reference,native):
 ref,refmem=inspect(reference.read_bytes());layout=LAYOUTS[ref['cpu']];state=next(a+n for k,a,n in ref['sections']if k=='__text');bss,length=next((a,n)for k,a,n in ref['sections']if k=='__bss');names={n:a for a,n in ref['symbols']};results=[]
 cases=[('rx',i,cap,extra,enabled,queue,has_api,has_out)for i,cap,extra,enabled,queue,has_api,has_out in [(i,64,32,1,16,1,1)for i in [0,1,15,16]]+[(0,c,32,1,16,1,1)for c in[0,8,31,32,2048]]+[(0,2048,n,1,16,1,1)for n in[0,1,2048,2049]]+[(0,64,32,0,16,1,1),(0,64,32,1,0,1,1),(0,64,32,1,16,0,1),(0,64,32,1,16,1,0)]]
 cases += [('tx',0,length,complete,1,16,1,1)for length,complete in [(0,0),(1,0),(64,0),(2048,0),(2049,0),(64,2),(64,-1)]]
 for operation,identifier,capacity,amount,enabled,queue,has_api,has_out in cases:
  lib=DLL(path);c=lib.cpu;meta,_=inspect(path.read_bytes());symbols={n:a+lib.base for a,n in meta['symbols']};sbase=lib.base+state if native else lib.base+next(a for k,a,n in meta['sections']if k=='__pf_state');events=[];mode={'polls':0};api=0x2e0000;frame=0x2f0000;out=0x2f2000
  def address(relative):return sbase+(relative-state)
  def norm(pointer):return pointer-sbase+state if sbase<=pointer<sbase+ref['end']-state else pointer
  def put(relative,value,width=4):c.mem_write(address(relative),value.to_bytes(width,'little'))
  c.mem_write(address(bss),bytes(length));put(layout['api'],api if has_api else 0,8 if lib.wide else 4);put(layout['api']+layout['enabled'],enabled);put(layout['api']+layout['header'],10);put(layout['api']+layout['rxq'],queue,2);put(layout['api']+layout['txq'],queue,2);put(layout['api']+layout['rxq']+8,0x2f6000,8 if lib.wide else 4);put(layout['api']+layout['txq']+8,0x2f6004,8 if lib.wide else 4);c.mem_write(frame,bytes(i%251 for i in range(2048))+bytes(64));c.mem_write(out,b'\xa5'*32)
  if operation=='rx':
   put(layout['rxring']+2,1,2);put(layout['rxring']+4,identifier);put(layout['rxring']+8,10+amount)
   if identifier<16:c.mem_write(address(layout['rxbuf']+identifier*0x80c),b'\x55'*10+bytes(i%251 for i in range(2048))+b'\xcc'*2)
  else:put(layout['api']+layout['txused'],3,2);put(layout['txring']+2,3,2)
  def args(n):
   if lib.cpu_type==7:return list(struct.unpack('<'+'I'*n,c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,4*n)))
   regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX];return[c.reg_read(r)for r in regs[:n]]
  def callback(slot):
   def fn(c,a,z,u):
    if slot==29:
     owner,pointer,size=args(3);events.append((slot,owner,norm(pointer),size))
     if operation=='tx'and norm(pointer)==layout['txring']:
      if amount>=0 and mode['polls']>=amount:put(layout['txring']+2,7,2)
      mode['polls']+=1
    elif slot==12:events.append((slot,args(1)[0]))
    elif slot in[27,48]:events.append((slot,*args(3)))
    else:events.append((slot,))
    c.reg_write(lib.result,1)
   return fn
  c.mem_write(api,struct.pack('<3I',0x54584b57,1000000,208)+bytes(196))
  for slot in [12,27,29,30,48]:
   a=0x18000+slot*16;c.mem_write(a,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');c.hook_add(UC_HOOK_CODE,callback(slot),begin=a,end=a);c.mem_write(api+slot*4,struct.pack('<I',a))
  name='_qemu_network_poll_frame'if operation=='rx'else'_qemu_network_send_frame';a=names[name];lib.exports['packet']=symbols.get(name,symbols.get('_recovered_%x'%(0x10000000+a)))
  value=lib.call('packet',frame,capacity,*([out if has_out else 0]if operation=='rx'else[]),result_bits=8)
  results.append((value,tuple(events),bytes(c.mem_read(frame,2112)),bytes(c.mem_read(out,32)),hashlib.sha256(c.mem_read(address(bss),length)).hexdigest()))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();e=exercise(a.reference,a.reference,True);s=exercise(a.source,a.reference,False);assert e==s,[(i,x[0],y[0],x[-1],y[-1],x[1][:6],y[1][:6])for i,(x,y)in enumerate(zip(e,s))if x!=y][:3];print('Network packets:',len(e),'native receive, transmit, payload, capacity, completion, timeout, ring and guard comparisons passed.')
