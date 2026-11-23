#!/usr/bin/env python3
"""Compare IA32 kernel nonlocal contexts, floating controls and scope transfers.

Pooka's Free Software License. Kernel binaries remain external test inputs.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import x86_const as x86
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==7;m=json.loads(a.map.read_text());entries={'save':0x20696a0,'restore':0x20696f0,'scope':0x2069690}
for value in [0,1,7,0xffffffff,0x12345678]:
 results=[]
 for native in [True,False]:
  lib=Kernel((a.reference if native else a.source).read_bytes(),{name:entry if native else m['recovered_%x'%entry]for name,entry in entries.items()}|{'_ws_errorf':0x4fe0000});c=lib.cpu
  registers=[getattr(x86,'UC_X86_REG_'+name)for name in ['EBX','ESI','EDI','EBP']];expected=[0x33112200+i*0x101 for i in range(4)]
  for register,number in zip(registers,expected):c.reg_write(register,number)
  c.reg_write(x86.UC_X86_REG_MXCSR,0x3f80);c.reg_write(x86.UC_X86_REG_FPCW,0x77f);context=0x3002000;c.mem_write(context,b'\xa5'*48)
  assert lib.call('save',context,result_bits=32)==0;saved=bytes(c.mem_read(context,48));assert struct.unpack_from('<4I',saved)==tuple(expected)
  assert saved[28:30]==struct.pack('<H',0x77f) and saved[30:]==b'\xa5'*18
  for register in registers:c.reg_write(register,0xdeadbeef)
  c.reg_write(x86.UC_X86_REG_MXCSR,0x1f80);c.reg_write(x86.UC_X86_REG_FPCW,0x37f)
  assert lib.call('restore',context,value,result_bits=32)==(value or 1)
  assert [c.reg_read(register)for register in registers]==expected
  assert c.reg_read(x86.UC_X86_REG_FPCW)==0x77f
  if struct.unpack_from('<I',saved,24)[0]!=0xffffffff:assert c.reg_read(x86.UC_X86_REG_MXCSR)==0x3f80
  c.mem_write(context+32,struct.pack('<III',0x12345678,lib.stop,0x4fd0000));lib.call('scope',context)
  assert c.reg_read(x86.UC_X86_REG_EBP)==0x12345678 and c.reg_read(x86.UC_X86_REG_ESP)==0x4fd0000
  results.append(saved)
 assert results[0]==results[1]
print('IA32 nonlocal contexts: five native/source saves, restores, normalized returns, floating controls and scope transfers match.')
