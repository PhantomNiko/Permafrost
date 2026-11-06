"""Run relocated native/source libraries with emulated WMAP allocation services.

Pooka's Free Software License.
"""
from pathlib import Path
import struct
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect as native_inspect
from dylib import inspect,rebase_locations
from unicorn import Uc,UcError,UC_ARCH_X86,UC_ARCH_ARM,UC_ARCH_ARM64,UC_MODE_32,UC_MODE_64,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *


class DLL:
    def __init__(self,path,instruction_limit=20000000,poison_allocations=False,poison_stack=False):
        self.instruction_limit=instruction_limit
        self.poison_stack=poison_stack
        binary=Path(path).read_bytes();metadata,memory=native_inspect(binary);dynamic=inspect(binary)
        self.cpu_type=metadata['cpu'];self.wide=self.cpu_type in (0x1000007,0x100000c)
        arm=self.cpu_type in (12,0x100000c)
        architecture=UC_ARCH_ARM if self.cpu_type==12 else UC_ARCH_ARM64 if arm else UC_ARCH_X86
        self.cpu=Uc(architecture,UC_MODE_ARM if arm else UC_MODE_64 if self.wide else UC_MODE_32)
        if self.cpu_type==12:
            self.cpu.reg_write(UC_ARM_REG_C1_C0_2,15<<20);self.cpu.reg_write(UC_ARM_REG_FPEXC,1<<30)
        self.base=0x2800000;self.stop=0x4ff0000;self.next=0x300000;self.allocs={}
        self.cpu.mem_map(0,0x5000000)
        # Firmware leaves the null page inaccessible; a mapped zero page can
        # conceal invalid AST pointers and other bad native/source accesses.
        self.cpu.mem_unmap(0,0x1000)
        if arm:self.cpu.mem_map(0x40010000,0x10000)
        memory=bytearray(memory);locations=rebase_locations(binary,dynamic);handled=set()
        if self.cpu_type==12:
            text,size=next((a,n)for k,a,n in metadata['sections']if k=='__text');pending={}
            for address,width in sorted(locations):
                if width!=4 or not text<=address<text+size:continue
                word=int.from_bytes(memory[address:address+4],'little');op=word&0x0ff00000;r=(word>>12)&15;immediate=((word>>4)&0xf000)|(word&4095)
                if op==0x03000000:pending[r]=(address,word,immediate)
                elif op==0x03400000:
                    first,low,low_value=pending.pop(r);value=((immediate<<16)|low_value)+self.base
                    for a,instruction,half in ((first,low,value&65535),(address,word,value>>16)):
                        memory[a:a+4]=((instruction&~0x000f0fff)|((half&0xf000)<<4)|(half&4095)).to_bytes(4,'little');handled.add(a)
            if pending:raise AssertionError('unpaired ARM address relocation')
        for address,width in locations:
            if address in handled:continue
            value=int.from_bytes(memory[address:address+width],'little');tag=value&(1<<63)if width==8 else 0
            memory[address:address+width]=(((value&~tag)+self.base)|tag).to_bytes(width,'little')
        self.cpu.mem_write(self.base,bytes(memory));self.exports={e['name']:self.base+e['address']for e in dynamic['exports']}
        table=0x40010800 if arm else 0x6800
        self.cpu.mem_write(table,struct.pack('<III',0x50414d57,13,252))
        self.result=UC_ARM_REG_R0 if self.cpu_type==12 else UC_ARM64_REG_X0 if arm else UC_X86_REG_RAX if self.wide else UC_X86_REG_EAX
        self.pc=UC_ARM_REG_PC if self.cpu_type==12 else UC_ARM64_REG_PC if arm else UC_X86_REG_RIP if self.wide else UC_X86_REG_EIP
        def args(count):
            if self.cpu_type==7:
                sp=self.cpu.reg_read(UC_X86_REG_ESP);return list(struct.unpack('<'+'I'*count,bytes(self.cpu.mem_read(sp+4,4*count))))
            registers=(UC_ARM_REG_R0,UC_ARM_REG_R1)if self.cpu_type==12 else(UC_ARM64_REG_X0,UC_ARM64_REG_X1)if arm else(UC_X86_REG_RDI,UC_X86_REG_RSI)
            return [self.cpu.reg_read(r)for r in registers[:count]]
        def allocate(size):
            if size>0x1000000 or self.next+size>=0x2000000:raise AssertionError('unbounded library allocation')
            address=self.next;self.next=(address+max(size,1)+15)&-16;self.allocs[address]=size
            if poison_allocations:self.cpu.mem_write(address,b'\xa5'*max(size,1))
            return address
        def malloc(cpu,address,size,user):cpu.reg_write(self.result,allocate(args(1)[0]))
        def free(cpu,address,size,user):
            pointer=args(1)[0]
            if pointer:
                if pointer not in self.allocs:raise AssertionError('library released an unowned address %#x'%pointer)
                del self.allocs[pointer]
            cpu.reg_write(self.result,0)
        def realloc(cpu,address,size,user):
            old,count=args(2);result=allocate(count)
            if old:
                if old not in self.allocs:raise AssertionError('library resized an unowned address %#x'%old)
                cpu.mem_write(result,bytes(cpu.mem_read(old,min(self.allocs[old],count))))
                del self.allocs[old]
            cpu.reg_write(self.result,result)
        for slot,address,hook in ((0x4c,0x10000,malloc),(0x50,0x10010,free),(0x54,0x10020,realloc)):
            self.cpu.mem_write(table+slot,struct.pack('<I',address))
            self.cpu.mem_write(address,b'\xc3'if not arm else struct.pack('<I',0xe12fff1e if self.cpu_type==12 else 0xd65f03c0))
            self.cpu.hook_add(UC_HOOK_CODE,hook,begin=address,end=address)

    def call(self,name,*arguments,result_bits=8):
        cpu=self.cpu;stack=0x4fe0000
        if getattr(self,"poison_stack",False):cpu.mem_write(stack-0x10000,b"\x5a"*0x10000)
        if self.cpu_type==7:
            cpu.reg_write(UC_X86_REG_ESP,stack);cpu.mem_write(stack,struct.pack('<'+'I'*(1+len(arguments)),self.stop,*arguments))
        elif self.cpu_type==0x1000007:
            for reg,value in zip((UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9),arguments):cpu.reg_write(reg,value)
            cpu.reg_write(UC_X86_REG_RSP,stack-8);cpu.mem_write(stack-8,struct.pack('<Q',self.stop))
        elif self.cpu_type==12:
            for reg,value in zip((UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3),arguments):cpu.reg_write(reg,value)
            cpu.reg_write(UC_ARM_REG_SP,stack);cpu.reg_write(UC_ARM_REG_LR,self.stop)
            if len(arguments)>4:cpu.mem_write(stack,struct.pack('<'+'I'*(len(arguments)-4),*arguments[4:]))
        else:
            for reg,value in zip((UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6,UC_ARM64_REG_X7),arguments):cpu.reg_write(reg,value)
            cpu.reg_write(UC_ARM64_REG_SP,stack);cpu.reg_write(UC_ARM64_REG_LR,self.stop)
        try:cpu.emu_start(self.exports[name],self.stop,count=self.instruction_limit)
        except UcError as error:
            raise AssertionError('%s failed at %#x'%(name,cpu.reg_read(self.pc)))from error
        if cpu.reg_read(self.pc)!=self.stop:raise AssertionError('library function did not return at %#x'%cpu.reg_read(self.pc))
        value=cpu.reg_read(self.result)
        if result_bits>32 and not self.wide:
            value|=cpu.reg_read(UC_ARM_REG_R1 if self.cpu_type==12 else UC_X86_REG_EDX)<<32
        return value&((1<<result_bits)-1)
