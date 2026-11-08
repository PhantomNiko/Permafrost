#!/usr/bin/env python3
"""Compare kernel variadic console logging with the reference calling ABI.

Pooka's Free Software License.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc,UC_ARCH_X86,UC_ARCH_ARM,UC_ARCH_ARM64,UC_MODE_32,UC_MODE_64,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *


def exercise(binary,metadata,mapping=None):
    m,memory=inspect(binary);kind=m['cpu'];wide=kind in [0x1000007,0x100000c];arm=kind in [12,0x100000c];w=8 if wide else 4
    cpu=Uc(UC_ARCH_ARM if kind==12 else UC_ARCH_ARM64 if arm else UC_ARCH_X86,UC_MODE_ARM if arm else UC_MODE_64 if wide else UC_MODE_32)
    cpu.mem_map(0,0x5000000)
    if arm:
        cpu.mem_map(0x40000000,0x8000000)
        if kind==0x100000c:cpu.mem_map(0x80000000,0x8000000)
    if kind==12:cpu.reg_write(UC_ARM_REG_C1_C0_2,15<<20);cpu.reg_write(UC_ARM_REG_FPEXC,1<<30)
    cpu.mem_write(m['base'],memory);names={n:a for a,n in metadata['symbols']}
    def target(name):
        a=names[name]
        return a if mapping is None else mapping.get('recovered_%x'%a,mapping.get('_recovered_%x'%a))
    logger=target('_console_logf')
    if kind==0x100000c:
        original=next(a for a,n in metadata['symbols']if a==0x8242d468)
        writer=original if mapping is None else mapping['_recovered_%x'%original]
    else:writer=target('_console_push_line_internal')
    data=0x43000000 if arm else 0x3000000;stack=0x47fe0000 if arm else 0x4fe0000;stop=stack+0x10000;captured=[]
    def read_text(ptr,limit=1024):
        result=bytearray()
        for i in range(limit):
            b=cpu.mem_read(ptr+i,1)[0]
            if not b:break
            result.append(b)
        return bytes(result)
    def output(cpu,address,size,user):
        if kind==7:
            sp=cpu.reg_read(UC_X86_REG_ESP)
            if mapping is None:ptr,count=cpu.reg_read(UC_X86_REG_ECX),cpu.reg_read(UC_X86_REG_EDX)
            else:ptr,count=struct.unpack('<II',bytes(cpu.mem_read(sp+4,8)))
        elif kind==0x1000007:ptr,count=cpu.reg_read(UC_X86_REG_RDI),cpu.reg_read(UC_X86_REG_RSI)
        elif kind==12:ptr,count=cpu.reg_read(UC_ARM_REG_R0),cpu.reg_read(UC_ARM_REG_R1)
        else:ptr,count=cpu.reg_read(UC_ARM64_REG_X0),None
        if count is None:captured.extend(read_text(ptr).replace(b'\r',b'').split(b'\n'))
        else:captured.append(bytes(cpu.mem_read(ptr,count)))
        if kind in [7,0x1000007]:
            spreg=UC_X86_REG_RSP if wide else UC_X86_REG_ESP;pc=UC_X86_REG_RIP if wide else UC_X86_REG_EIP;sp=cpu.reg_read(spreg);address=int.from_bytes(cpu.mem_read(sp,w),'little');cpu.reg_write(spreg,sp+w);cpu.reg_write(pc,address)
        else:cpu.reg_write(UC_ARM_REG_PC if kind==12 else UC_ARM64_REG_PC,cpu.reg_read(UC_ARM_REG_LR if kind==12 else UC_ARM64_REG_X30))
    cpu.hook_add(UC_HOOK_CODE,output,begin=writer,end=writer)
    cases=[('DRIVER %s %s %s %s',[None,None,None,None]),('%d %u %x %X',[-42,999,0xabcd,0xabcd]),('%s %s %s %s %s %s %s %s',[None]*8),('%% %s\r\n%s',[None,None])]
    all_results=[]
    for text,values in cases:
        cpu.mem_write(data,text.encode()+b'\0');cpu.mem_write(data+512,b'Permafrost\0');arguments=[data]+[data+512 if value is None else value&((1<<(w*8))-1)for value in values];captured.clear()
        if kind==7:
            sp=stack-4*(len(arguments)+1);cpu.mem_write(sp,struct.pack('<'+'I'*(len(arguments)+1),stop,*arguments));cpu.reg_write(UC_X86_REG_ESP,sp)
        elif kind==0x1000007:
            sp=stack-8;cpu.mem_write(sp,struct.pack('<Q',stop));cpu.reg_write(UC_X86_REG_RSP,sp);cpu.reg_write(UC_X86_REG_RAX,0)
            for r,value in zip([UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9],arguments):cpu.reg_write(r,value)
            for i,value in enumerate(arguments[6:]):cpu.mem_write(stack+i*8,struct.pack('<Q',value))
        elif kind==12:
            cpu.reg_write(UC_ARM_REG_SP,stack);cpu.reg_write(UC_ARM_REG_LR,stop)
            for r,value in zip([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3],arguments):cpu.reg_write(r,value)
            for i,value in enumerate(arguments[4:]):cpu.mem_write(stack+i*4,struct.pack('<I',value))
        else:
            cpu.reg_write(UC_ARM64_REG_SP,stack);cpu.reg_write(UC_ARM64_REG_X30,stop);cpu.reg_write(UC_ARM64_REG_X0,data)
            for i,value in enumerate(arguments[1:]):cpu.mem_write(stack+i*8,struct.pack('<Q',value))
        cpu.emu_start(logger,stop,count=3000000);all_results.append(list(captured))
    return all_results


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('metadata',type=Path);p.add_argument('source',type=Path);p.add_argument('source_map',type=Path);a=p.parse_args();m=json.loads(a.metadata.read_text());mapping=json.loads(a.source_map.read_text())
    expected=exercise(a.reference.read_bytes(),m);actual=exercise(a.source.read_bytes(),m,mapping)
    assert actual==expected,(actual,expected)
    assert expected[0]==[b'DRIVER Permafrost Permafrost Permafrost Permafrost']
    assert expected[1]==[b'-42 999 abcd ABCD']
    assert expected[2]==[b' '.join([b'Permafrost']*8)]
    assert expected[3]==[b'% Permafrost',b'Permafrost']
    print('Kernel logging: four native/source register, stack-spill and line-break cases passed.')


if __name__=='__main__':main()
