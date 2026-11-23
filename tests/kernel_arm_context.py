#!/usr/bin/env python3
"""Compare ARM nonlocal contexts, floating/thread state and scope transfers.

Pooka's Free Software License. Kernel binaries remain external inputs.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import arm_const as arm,arm64_const as arm64

def exercise(binary,addresses,value):
 lib=Kernel(binary,dict(addresses,_ws_errorf=0x4fe0000));wide=lib.cpu_type==0x100000c;assert wide or lib.cpu_type==12
 registers=[getattr(arm64,'UC_ARM64_REG_X'+str(i))for i in range(19,30)]if wide else[getattr(arm,'UC_ARM_REG_R'+str(i))for i in range(4,12)]
 floating=[getattr(arm64 if wide else arm,('UC_ARM64_REG_D'if wide else'UC_ARM_REG_D')+str(i))for i in range(8,16)]
 controls=([(arm64.UC_ARM64_REG_TPIDR_EL0,0x11223344),(arm64.UC_ARM64_REG_TPIDRRO_EL0,0x55667788),(arm64.UC_ARM64_REG_FPCR,0x400000),(arm64.UC_ARM64_REG_FPSR,0x8000000)]if wide else[(arm.UC_ARM_REG_FPSCR,0x400000)])
 expected=[0x33112200+i*0x101 for i in range(len(registers))]
 float_expected=[0x400123456789abcd+i*0x10101 for i in range(8)]
 c=lib.cpu
 threads=[] if wide else [(2,0x11223344),(3,0x55667788)]
 for opc2,bits in threads:c.cpr_write(15,0,13,0,opc2,0,False,bits)
 for register,bits in list(zip(registers,expected))+list(zip(floating,float_expected))+controls:c.reg_write(register,bits)
 context=0x3002000;length=192 if wide else 116;c.mem_write(context-16,b'\xa5'*(length+48))
 assert lib.call('_setjmp',context,result_bits=32)==0
 saved=bytes(c.mem_read(context-16,length+48));assert saved[:16]==b'\xa5'*16 and saved[-32:]==b'\xa5'*32
 for register in registers+floating+[r for r,v in controls]:c.reg_write(register,0)
 for opc2,bits in threads:c.cpr_write(15,0,13,0,opc2,0,False,0)
 assert lib.call('_longjmp',context,value&0xffffffff,result_bits=32)==(value if value else 1)&0xffffffff
 assert [c.reg_read(r)for r in registers]==expected
 assert [c.reg_read(r)for r in floating]==float_expected
 assert [c.reg_read(r)for r,v in controls]==[v for r,v in controls]
 assert [c.cpr_read(15,0,13,0,opc2,0,False)for opc2,bits in threads]==[bits for opc2,bits in threads]
 offset=64 if wide else 32;fmt='<QQQ'if wide else'<III';frame,stack=0x12345678,0x4fd0000
 c.mem_write(context+offset,struct.pack(fmt,frame,lib.stop,stack));lib.call('_winterboot_sjlj_jump',context)
 assert c.reg_read(arm64.UC_ARM64_REG_X29 if wide else arm.UC_ARM_REG_R7)==frame
 assert c.reg_read(arm64.UC_ARM64_REG_SP if wide else arm.UC_ARM_REG_SP)==stack
 return saved

def main():
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
 meta,_=inspect(a.reference.read_bytes());names={n:x for x,n in meta['symbols']};mapping=json.loads(a.map.read_text());selected=['_setjmp','_longjmp','_winterboot_sjlj_jump'];native={n:names[n]for n in selected};source={n:mapping['_recovered_%x'%names[n]]for n in selected}
 for value in [0,7,-1]:assert exercise(a.reference.read_bytes(),native,value)==exercise(a.source.read_bytes(),source,value)
 print('ARM contexts: native register buffers, floating/thread controls, zero/nonzero restores and scope transfers match.')

if __name__=='__main__':main()
