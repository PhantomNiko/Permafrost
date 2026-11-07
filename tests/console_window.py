#!/usr/bin/env python3
"""Compare console-window state, raster capture and keyboard exports.

Pooka's Free Software License.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RDI
from unicorn.arm_const import UC_ARM_REG_R0
from unicorn.arm64_const import UC_ARM64_REG_X0


def exercise(path,api_base=None,display=False):
    lib=DLL(path,poison_stack=True,poison_allocations=True,api_base=api_base);cpu=lib.cpu;wide=lib.wide;results=[];keys=[]
    def keyboard(cpu,address,length,user):cpu.reg_write(lib.result,keys.pop(0)if keys else 0)
    addr=0x10100;cpu.mem_write(addr,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');cpu.hook_add(UC_HOOK_CODE,keyboard,begin=addr,end=addr)
    for table in lib.api_tables:cpu.mem_write(table+0x2c,struct.pack('<I',addr))
    if display:
        screen=0x4000000;stride=31*4+8;screen_size=stride*23
        def framebuffer(cpu,address,length,user):
            if lib.cpu_type==7:ptr=struct.unpack('<I',bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,4)))[0]
            else:ptr=cpu.reg_read(UC_ARM_REG_R0 if lib.cpu_type==12 else UC_ARM64_REG_X0 if lib.cpu_type==0x100000c else UC_X86_REG_RDI)
            cpu.mem_write(ptr,struct.pack('<Q11I',screen,screen_size,stride,31,23,32,8,16,8,8,8,0));cpu.reg_write(lib.result,1)
        addr=0x10110;cpu.mem_write(addr,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');cpu.hook_add(UC_HOOK_CODE,framebuffer,begin=addr,end=addr)
        for table in lib.api_tables:cpu.mem_write(table+0x7c,struct.pack('<I',addr))
        cpu.mem_write(screen-16,b'\xa5'*(screen_size+32))
    def call(name,*args,bits=32):return lib.call('_'+name,*args,result_bits=bits)
    def dimensions(window):
        cpu.mem_write(0x3010000,b'\xa5'*16);call('getWindowSize',window,0x3010000,0x3010004);assert bytes(cpu.mem_read(0x3010008,8))==b'\xa5'*8;return struct.unpack('<II',bytes(cpu.mem_read(0x3010000,8)))
    def capture(window):
        image=call('captureWindow',window,bits=64 if wide else 32);assert image
        width,height=struct.unpack('<II',bytes(cpu.mem_read(image,8)));ptr=struct.unpack('<Q'if wide else'<I',bytes(cpu.mem_read(image+8,8 if wide else 4)))[0];data=bytes(cpu.mem_read(ptr,width*height*4));
        if display:
            call('updateWindow',window);results.append(('display',bytes(cpu.mem_read(screen,screen_size))));assert bytes(cpu.mem_read(screen-16,16))==b'\xa5'*16 and bytes(cpu.mem_read(screen+screen_size,16))==b'\xa5'*16
            for row in range(23):assert bytes(cpu.mem_read(screen+row*stride+31*4,8))==b'\xa5'*8
        call('free',ptr);call('free',image);return width,height,data
    cpu.mem_write(0x3000000,b'Fixture\0');cpu.mem_write(0x3000100,b'Renamed fixture\0')
    for width,height in[(1,1),(7,5),(16,12),(0,0)]:
        window=call('createWindow',0x3000000,width,height,bits=64 if wide else 32);assert window;results.append(('size',dimensions(window)));assert not call('windowShouldClose',window)
        text=call('getWindowTitle',window,bits=64 if wide else 32);assert bytes(cpu.mem_read(text,64)).split(b'\0',1)[0]==b'Fixture';call('free',text)
        for rgb in[(0,0,0),(17,34,51),(255,0,255)]:
            call('clearWindow',window,*rgb);w,h,data=capture(window);assert data==bytes((*rgb,255))*(w*h),(str(path),rgb,data[:20]);results.append(('clear',w,h,data))
        call('setWindowTitle',window,0x3000100);text=call('getWindowTitle',window,bits=64 if wide else 32);assert bytes(cpu.mem_read(text,64)).split(b'\0',1)[0]==b'Renamed fixture';call('free',text)
        for w,h in[(9,7),(2,3),(0,0)]:call('setWindowSize',window,w,h);results.append(('resized',dimensions(window)))
        call('setWindowSize',window,8,6)
        for w,h in[(2,2),(3,2),(2,3)]:
            pixels=bytes((i*17)&255 for i in range(w*h*4));cpu.mem_write(0x3020000,pixels);image=struct.pack('<IIQ'if wide else'<III',w,h,0x3020000)+bytes(16);cpu.mem_write(0x3030000,image);call('pushImage',window,0x3030000);results.append(('image',*capture(window)))
        call('getMousePosition',window,0x3010000,0x3010004);results.append(('mouse',bytes(cpu.mem_read(0x3010000,8))))
        call('closeWindow',window);assert call('windowShouldClose',window);call('destroyWindow',window)
    exported=['_key'+x for x in['a','w','back','return','up','down','left','right','lastchar']]
    for sequence in[[],[ord('a')],[ord('W'),8,13],[0x4800,0x5000,0x4b00,0x4d00],[ord('~'),0x7f]]:
        keys[:]=sequence;call('updateKeyboardState');results.append(('keyboard',tuple(bytes(cpu.mem_read(lib.exports[n],4))for n in exported)))
        call('consumeKeyboardState');results.append(('consumed',tuple(bytes(cpu.mem_read(lib.exports[n],4))for n in exported)))
    assert call('windowShouldClose',0)==1
    assert dimensions(0)==(0,0)
    return results


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--api-base',type=lambda s:int(s,0));p.add_argument('--display',action='store_true');a=p.parse_args();n=exercise(a.reference,a.api_base,a.display);s=exercise(a.source,a.api_base,a.display)
    for i,(x,y)in enumerate(zip(n,s)):
        def compact(v):return ('pixels',len(v),__import__('hashlib').sha256(v).hexdigest()[:12])if isinstance(v,bytes)else v
        assert x==y,(i,tuple(map(compact,x)),tuple(map(compact,y)))
    assert n==s;print(f'Console window: {len(n)} raster, state and input comparisons passed.')


if __name__=='__main__':main()
