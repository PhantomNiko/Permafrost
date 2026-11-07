#!/usr/bin/env python3
"""Compare recursive TerrorUI layout and text-service arguments.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3,UC_ARM_REG_SP
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4


def exercise(path,api_base=None):
    lib=DLL(path,poison_stack=True,api_base=api_base);cpu=lib.cpu;wide=lib.wide
    size=88 if wide else 72;pointer_fmt='<Q'if wide else'<I';results=[];events=[]
    def text_service(cpu,address,length,user):
        if lib.cpu_type==7:
            sp=cpu.reg_read(UC_X86_REG_ESP);args=struct.unpack('<5I',bytes(cpu.mem_read(sp+4,20)))
        elif lib.cpu_type==12:
            args=[cpu.reg_read(r)for r in[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]]+[struct.unpack('<I',bytes(cpu.mem_read(cpu.reg_read(UC_ARM_REG_SP),4)))[0]]
        else:
            registers=[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8];args=[cpu.reg_read(r)for r in registers]
        text,limit,scale,flags,out=args;value=bytes(cpu.mem_read(text,64)).split(b'\0',1)[0]
        assert limit&0xffffffff==0xffffffff and flags==0,(args,value)
        events.append((value,scale))
        cpu.mem_write(out,struct.pack('<6I',0,0,0,len(value)*7*scale,11*scale,0));cpu.reg_write(lib.result,1)
    address=0x10100
    cpu.mem_write(address,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3')
    cpu.hook_add(UC_HOOK_CODE,text_service,begin=address,end=address)
    for table in lib.api_tables:cpu.mem_write(table+0x178,struct.pack('<I',address))
    cpu.mem_write(0x3020000,b'Layout\0');cpu.mem_write(0x3020100,b'Button\0')
    def view(kind=0,flags=0,width=0,height=0,padding=(0,0,0,0),scale=1,children=0,count=0,spacing=0):
        data=bytearray(size);struct.pack_into('<II',data,0,kind,flags)
        struct.pack_into(pointer_fmt,data,8,0x3020100 if kind==3 else 0x3020000)
        struct.pack_into(pointer_fmt,data,16 if wide else 12,children)
        struct.pack_into('<II4I2i4i',data,24 if wide else 16,count,spacing&0xffffffff,1,0x202020,0xf6f6f6,scale,width,height,*padding)
        return bytes(data)
    def measure(value,available=(100,80),null=False):
        cpu.mem_write(0x3000000,value);ptr=0 if null else 0x3000000
        if lib.cpu_type==12:
            cpu.mem_write(0x3010000,b'\xa5'*16);lib.call('_terror_ui_view_measure',0x3010000,ptr,*[x&0xffffffff for x in available]);packed=bytes(cpu.mem_read(0x3010000,8));assert bytes(cpu.mem_read(0x3010008,8))==b'\xa5'*8
        else:
            args=(ptr,*[x&0xffffffff for x in available])if not wide else(ptr,(available[0]&0xffffffff)|((available[1]&0xffffffff)<<32));packed=struct.pack('<Q',lib.call('_terror_ui_view_measure',*args,result_bits=64))
        answer=struct.unpack('<ii',packed);results.append(answer);return answer
    assert measure(view(),null=True)==(0,0)
    assert measure(view(2))==(16,16)
    assert measure(view(1))==(42,11)
    assert measure(view(3))==(62,24)
    for kind in range(9):
        for available in [(100,80),(0,0),(-1,-1)]:
            for padding in[(0,0,0,0),(1,2,3,4),(-1,2,-3,4)]:
                measure(view(kind,padding=padding),available)
    for kind in[0,1,2,3,4,5,6,7]:
        for flags in[4,8,12]:
            for dimensions in[(0,0),(17,23),(-1,-1)]:measure(view(kind,flags,*dimensions,padding=(1,2,3,4)))
    for scale in[0,1,2,4]:measure(view(1,scale=scale));measure(view(3,scale=scale))
    for children in[[view(2),view(2)],[view(2),view(4),view(1)],[view(4),view(4)],[view(1),view(3),view(2)]]:
        cpu.mem_write(0x3030000,b''.join(children))
        for kind in[5,6,7]:
            for spacing in[0,3,-2]:
                for available in[(100,80),(4,7),(0,0)]:measure(view(kind,children=0x3030000,count=len(children),spacing=spacing,padding=(1,2,3,4)),available)
    return results,events


def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('--api-base',type=lambda s:int(s,0));args=parser.parse_args()
    a=exercise(args.reference,args.api_base);b=exercise(args.source,args.api_base)
    for index,(x,y)in enumerate(zip(a[0],b[0])):assert x==y,(index,x,y)
    assert a==b,('text service trace',a[1],b[1])
    print(f'TerrorUI: {len(a[0])} layout cases and {len(a[1])} text-service calls passed.')


if __name__=='__main__':main()
