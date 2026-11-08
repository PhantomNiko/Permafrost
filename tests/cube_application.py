#!/usr/bin/env python3
"""Compare cube animation, window calls, CPU frames and GPU command streams.

Pooka's Free Software License. UI and GPU services are controlled ABI fixtures.
"""
import argparse,struct
from pathlib import Path
from cube_render import diagnostic_reference
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *
from native import inspect
from dylib import inspect as dynamic


def exercise(path,mode):
    lib=DLL(path,instruction_limit=150000000);cpu=lib.cpu;wide=lib.wide;w=8 if wide else 4
    meta,memory=inspect(path.read_bytes());names={n:a for a,n in meta['symbols']+meta['data_symbols']}
    entry=next(n for n in names if n=='_main'or n.endswith('_gpu_cube_entry'));lib.exports[entry]=lib.base+names[entry]
    if lib.cpu_type==7 and '_winterboot_gpu_cube_entry'in names:
        # This fixed-address i386 executable has absolute references rather
        # than dyld rebases. Keep that original data view for its code.
        cpu.mem_write(0x1800000,memory[0x1800000:])
    events=[];frames=0;submits=0
    def args(count):
        if lib.cpu_type==7:
            sp=cpu.reg_read(UC_X86_REG_ESP);return list(struct.unpack('<'+'I'*count,bytes(cpu.mem_read(sp+4,count*4))))
        regs=([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else
              [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6,UC_ARM64_REG_X7]if lib.cpu_type==0x100000c else
              [UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9])
        values=[cpu.reg_read(r)for r in regs[:count]]
        if count>len(regs):
            sp=cpu.reg_read(UC_ARM_REG_SP if lib.cpu_type==12 else UC_ARM64_REG_SP if lib.cpu_type==0x100000c else UC_X86_REG_RSP)+(0 if lib.cpu_type in [12,0x100000c]else 8)
            values+=struct.unpack('<'+('Q'if wide else'I')*(count-len(regs)),bytes(cpu.mem_read(sp,(count-len(regs))*w)))
        return values
    def done(result=0,pop=0):
        cpu.reg_write(lib.result,result)
        if lib.cpu_type in [7,0x1000007]:
            reg=UC_X86_REG_RSP if wide else UC_X86_REG_ESP;sp=cpu.reg_read(reg);pc=int.from_bytes(cpu.mem_read(sp,w),'little');cpu.reg_write(reg,sp+w+pop)
        else:pc=cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_LR)
        cpu.reg_write(lib.pc,pc)
    def text(ptr):return bytes(cpu.mem_read(ptr,64)).split(b'\0')[0]
    def service(name):
        def call(cpu,address,size,user):
            nonlocal frames,submits
            if name=='spec':
                if lib.cpu_type==0x100000c:out=cpu.reg_read(UC_ARM64_REG_X8);title,width,height=args(3)
                else:out,title,width,height=args(4)
                data=bytearray(72 if wide else 52);struct.pack_into('<Q'if wide else'<I',data,0,title);struct.pack_into('<3I',data,w,width,height,width*4);cpu.mem_write(out,bytes(data));events.append(('spec',text(title),width,height));done(out,pop=4 if lib.cpu_type==7 else 0)
            elif name=='open':
                window,spec=args(2);events.append(('open',struct.unpack('<I',bytes(cpu.mem_read(spec+(64 if wide else 48),4)))[0]));data=bytearray(848 if wide else 832);struct.pack_into('<4I',data,0,17,32,24,128);struct.pack_into('<I',data,40,3072);struct.pack_into('<Q'if wide else'<I',data,48 if wide else 44,0x3120000);cpu.mem_write(window,bytes(data));cpu.mem_write(0x3120000,bytes(3072))
                if mode=='no_pixels':cpu.mem_write(window+(48 if wide else 44),bytes(w))
                done(int(mode!='open_failure'))
            elif name=='query':
                window,out=args(2);cpu.mem_write(out,bytes(632));done(int(frames<64 and mode!='query_failure'))
            elif name=='requests_close':done(int(mode=='close'))
            elif name=='sync_buffer':done(int(mode!='sync_failure'))
            elif name=='present':
                window,title,pixels,width,height,stride,clear=args(7);events.append(('present',text(title),width,height,stride,clear,bytes(cpu.mem_read(pixels,3072))));frames+=1;done(1)
            elif name=='close':events.append(('close',));done(1)
            elif name=='gpu_info':
                out,=args(1);cpu.mem_write(out,struct.pack('<4I',144,1,5,256)+bytes(128));events.append(('gpu_info',));done(int(mode in ['gpu','fallback']))
            elif name=='gpu_submit':
                commands,count=args(2);events.append(('gpu_submit',count,bytes(cpu.mem_read(commands,count*112))));submits+=1;done(int(mode=='gpu'))
            elif name=='key':done({'q':ord('q'),'escape':27,'extended':0x100}.get(mode,0)if frames else 0)
            elif name=='wait':events.append(('wait',args(1)[0]));done(1)
            else:raise AssertionError(name)
        return call
    for item in dynamic(path.read_bytes())['stubs']:
        if item['name'] in names:
            target=lib.base+names[item['name']]
            def local_target(cpu,address,size,user,target=target):cpu.reg_write(lib.pc,target)
            address=lib.base+item['address'];cpu.hook_add(UC_HOOK_CODE,local_target,begin=address,end=address)
            continue
        name=item['name'].removeprefix('_terror_ui_window_')
        if name not in ['spec','open','query','info_requests_close','sync_buffer','present','close']:continue
        name='requests_close'if name=='info_requests_close'else name
        address=lib.base+item['address'];cpu.hook_add(UC_HOOK_CODE,service(name),begin=address,end=address)
    for offset,name in [(0x114,'gpu_info'),(0x118,'gpu_submit'),(0x2c,'key'),(0x174,'wait')]:
        address=0x18000+offset*16
        for table in lib.api_tables:cpu.mem_write(table+offset,struct.pack('<I',address))
        cpu.mem_write(address,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in [12,0x100000c]else b'\xc3');cpu.hook_add(UC_HOOK_CODE,service(name),begin=address,end=address)
    result=lib.call(entry,result_bits=32)
    expected_result=0 if mode in ['open_failure','no_pixels']else 1
    expected_frames=0 if mode in ['open_failure','no_pixels','query_failure','close','sync_failure']else 1 if mode in ['q','escape','extended']else 64
    assert (result,frames)==(expected_result,expected_frames),(mode,result,frames)
    return events


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();root=a.source.parent
    diagnostic_reference(a.reference,root/'reference-application-diagnostic');diagnostic_reference(a.source,root/'source-application-diagnostic')
    for mode in ['cpu','gpu','fallback','open_failure','no_pixels','query_failure','close','sync_failure','q','escape','extended']:
        native=exercise(root/'reference-application-diagnostic',mode);actual=exercise(root/'source-application-diagnostic',mode)
        assert len(native)==len(actual),(mode,len(native),len(actual))
        for index,(x,y)in enumerate(zip(native,actual)):assert x==y,(mode,index,x[:2],y[:2])
        print('Cube application: '+mode+' native/source frames and service calls passed.',flush=True)


if __name__=='__main__':main()
