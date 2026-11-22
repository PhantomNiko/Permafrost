#!/usr/bin/env python3
"""Compare x86 process bursts and verify bounded interactive scheduling.

Pooka's Free Software License. Task transfer and process services are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *


def exercise(path,addresses,native,budget,deadline=False):
 lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;wide=lib.wide;word=8 if wide else 4;task=0x3000000;process=0x3010000;events=[];frames=[0];record=bytearray(272 if wide else 184);record[0]=1;record[4]=1;struct.pack_into('<Q'if wide else'<I',record,200 if wide else 116,process);c.mem_write(task,bytes(record));c.mem_write(process,b'\x01'+bytes(511));c.mem_write(0x2106c08 if wide else 0x20de14c,struct.pack('<I',1))
 def arg(index):
  if wide:return c.reg_read([UC_X86_REG_RDI,UC_X86_REG_RSI][index])
  if native:return c.reg_read([UC_X86_REG_ECX,UC_X86_REG_EDX][index])
  return int.from_bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4+4*index,4),'little')
 def finish(value):
  register=UC_X86_REG_RSP if wide else UC_X86_REG_ESP;sp=c.reg_read(register);c.reg_write(lib.result,value);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,word),'little'));c.reg_write(register,sp+word)
 def hook(kind):
  def call(c,a,z,u):
   if kind=='clock':finish(int(deadline and frames[0]>0));return
   if kind=='cpu':finish(0);return
   if kind=='select':
    owner=arg(0);events.append((kind,owner));c.mem_write(arg(1),bytes(word));finish(task);return
   if kind=='resume':frames[0]+=1
   if kind in ['resume','cleanup','prepare','alive']:events.append((kind,arg(0)))
   finish(1 if kind in ['prepare','alive']else 0)
  return call
 for name,kind in [('_wm_platform_smp_current_cpu_index','cpu'),('_wm_platform_ticks','clock'),('_scheduler_take_task_locked','select'),('_tayga_task_is_runtime_child','background'),('_scheduler_resume_task_on_cpu','resume'),('_scheduler_complete_dispatched_task','cleanup'),('_scheduler_begin_parallel_space','parallel'),('_scheduler_end_parallel_space','wait'),('_scheduler_restore_address_space_to_memory','prepare'),('_scheduler_staging_guard_intact','alive')]:
  address=addresses[name];c.hook_add(UC_HOOK_CODE,hook(kind),begin=address,end=address)
 status=lib.call('_scheduler_run_space_burst',budget,result_bits=32)
 return status,frames[0],events,bytes(c.mem_read(0x22741c4 if wide else 0x22452b4,8))


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();abi=json.loads(a.abi.read_text());names={k:v['original']for k,v in abi.items()};m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()}
 for budget in [1,8]:
  expected=exercise(a.reference,native,True,budget);actual=exercise(a.source,source,False,budget);assert expected==actual,(budget,expected,actual);assert actual[0:2]==(budget,budget),actual
  bounded=exercise(a.source,source,False,budget,True);assert bounded[0:2]==(1,1),bounded;assert bounded[3]==bytes(8),bounded
 print('Process bursts: native dispatch/cleanup and budget results match; elapsed clock ticks bound source bursts and release scheduler locks.')
