#!/usr/bin/env python3
"""Compare TerrorUI window lifecycle, cached queries and service ABIs.

Pooka's Free Software License.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *


def exercise(path,api_base=None):
    lib=DLL(path,poison_stack=True,api_base=api_base);cpu=lib.cpu;wide=lib.wide
    ctx=0x3000000;spec=0x3010000;out=0x3020000;title=0x3030000
    events=[];results=[];keys=[];present_success=True
    def arguments(count):
        if lib.cpu_type==7:
            sp=cpu.reg_read(UC_X86_REG_ESP);return struct.unpack('<'+'I'*count,bytes(cpu.mem_read(sp+4,count*4)))
        regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6,UC_ARM64_REG_X7]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9]
        args=[cpu.reg_read(r)for r in regs[:count]]
        if count>len(regs):
            reg=UC_ARM_REG_SP if lib.cpu_type==12 else UC_X86_REG_RSP;sp=cpu.reg_read(reg)+(0 if lib.cpu_type==12 else 8);n=count-len(regs);args+=struct.unpack('<'+('Q'if wide else'I')*n,bytes(cpu.mem_read(sp,n*(8 if wide else 4))))
        return args
    def string(ptr):return bytes(cpu.mem_read(ptr,128)).split(b'\0',1)[0]if ptr else None
    record=bytearray(632);struct.pack_into('<I',record,0,17);struct.pack_into('<Q',record,8,0x3100000);struct.pack_into('<I',record,16,8*6*4);struct.pack_into('<6I',record,20,8,8,6,32,0x123456,0);struct.pack_into('<4I',record,64,128,64,2,2)
    specs={0xa0:('create',3),0xa4:('present',7),0xa8:('close',1),0xb0:('configure',5),0xb4:('query',2),0xec:('menus',4),0x160:('appearance',3),0x164:('mode',3),0x2c:('key',0),0x9c:('yield',0),0xac:('list',3),0xf0:('menu_command',3),0xfc:('pointer_event',4),0x100:('pointer_state',2),0x178:('text',5)}
    def service(cpu,address,length,user):
        offset=(address-0x10200)//16*4;name,count=specs[offset];a=list(arguments(count));result=1
        if name=='create':a[0]=string(a[0]);result=17
        elif name=='query':assert a[0]==17;cpu.mem_write(a[1],bytes(record));a=a[:1]
        elif name=='menus':a=[a[0],*[string(x)for x in a[1:]]]
        elif name=='present':
            a[3:]=[v&0xffffffff for v in a[3:]]
            a[1]=string(a[1]);a[2]=bytes(cpu.mem_read(a[2],a[5]*a[4]))if a[2]else None;result=int(present_success)
        elif name=='text':
            value=string(a[0]);scale=a[2];flags=a[3]&0xffffffff;w=len(value)*3*scale;h=5*scale;stride=w*4;data=0
            if flags:
                data=lib.next;lib.next=(data+max(stride*h,1)+15)&-16;lib.allocs[data]=stride*h
                r,g,b=(flags>>24)&255,(flags>>16)&255,(flags>>8)&255
                pixels=b''.join(bytes((r,g,b,[0,64,128,255][i%4]))for i in range(w*h));cpu.mem_write(data,pixels)
            cpu.mem_write(a[4],struct.pack('<Q4I',data,stride*h,w,h,stride));a=[value,a[1]&0xffffffff,scale,flags]
        elif name=='pointer_state':cpu.mem_write(a[1],struct.pack('<7I',17,11,13,2,1,0,0));a=a[:1]
        elif name=='key':result=keys.pop(0)if keys else 0
        events.append((name,*a));cpu.reg_write(lib.result,result)
    for offset in specs:
        address=0x10200+offset//4*16
        cpu.mem_write(address,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3')
        cpu.hook_add(UC_HOOK_CODE,service,begin=address,end=address)
        for table in lib.api_tables:cpu.mem_write(table+offset,struct.pack('<I',address))
    def call(name,*args):
        answer=lib.call('_terror_ui_'+name,*args,result_bits=32);results.append((name,None if name=='yield_frames'else answer));return answer
    cpu.mem_write(title,b'Fixture\0');cpu.mem_write(title+0x100,b'File\0');cpu.mem_write(title+0x200,b'Edit\0');cpu.mem_write(title+0x300,b'Window\0')
    def specification(custom=False,owned=False):
        d=bytearray(72 if wide else 52);fmt='<Q'if wide else'<I';w=8 if wide else 4;struct.pack_into(fmt,d,0,title);struct.pack_into('<8I',d,w,8,6,32,0x123456,*([25,50,2,40]if custom else[0xffffffff,0xffffffff,0xffffffff,0]));tail=w+32
        if custom:
            for i in range(3):struct.pack_into(fmt,d,tail+i*w,title+0x100*(i+1))
        struct.pack_into('<I',d,tail+3*w,int(owned));cpu.mem_write(spec,bytes(d))
    context_size=848 if wide else 832
    for custom,owned in[(False,False),(True,False),(True,True)]:
        specification(custom,owned);cpu.mem_write(ctx,b'\xa5'*(context_size+16));assert call('window_open',ctx,spec)==17
        assert bytes(cpu.mem_read(ctx+context_size,16))==b'\xa5'*16
        assert struct.unpack('<5I',bytes(cpu.mem_read(ctx,20)))==(17,8,6,32,0x123456)
        for _ in range(2):
            cpu.mem_write(out,b'\xa5'*648);assert call('window_query',ctx,out)==1;assert bytes(cpu.mem_read(out,632))==record,('query bytes',str(path),[(i,x,y)for i,(x,y)in enumerate(zip(bytes(cpu.mem_read(out,632)),record))if x!=y][:12]);assert bytes(cpu.mem_read(out+632,16))==b'\xa5'*16
        assert call('window_should_close',ctx)==0
        pixels=bytes(range(192));cpu.mem_write(0x3040000,pixels)
        assert call('window_present',ctx,title,0x3040000,8,6,32,0x123456)==1
        n=sum(e[0]=='present'for e in events);assert call('window_present',ctx,title,0x3040000,8,6,32,0x123456)==1;assert sum(e[0]=='present'for e in events)==n
        cpu.mem_write(0x3040000,b'\xff');assert call('window_present',ctx,title,0x3040000,8,6,32,0x123456)==1
        for name in['transparency','shadow','blur','refract']:
            for value in[0,25,100,255,0xffffffff]:call('window_set_'+name,ctx,value)
        call('window_set_solid',ctx);call('window_set_clear',ctx);call('window_set_mode',ctx,3,25);call('window_set_appearance',ctx,25,50);call('window_set_menus',ctx,title+0x100,title+0x200,title+0x300)
        assert call('window_resize_buffer',ctx,4,3)==1
        if owned:
            struct.pack_into('<4I',record,24,32,24,128,0x123456)
            def make_view(kind,color=0x5599cc,padding=(0,0,0,0),alignment=1,children=0,count=0):
                d=bytearray(88 if wide else 72);struct.pack_into('<II',d,0,kind,3);struct.pack_into('<Q'if wide else'<I',d,8,title);struct.pack_into('<Q'if wide else'<I',d,16 if wide else 12,children);struct.pack_into('<II4I2i4i',d,24 if wide else 16,count,3,alignment,0x102030,color,1,0,0,*padding)
                if kind==3:
                    struct.pack_into('<Q'if wide else'<I',d,72 if wide else 64,0x15000);struct.pack_into('<Q'if wide else'<I',d,80 if wide else 68,0x12345678)
                return bytes(d)
            def button_callback(cpu,address,length,user):
                assert arguments(1)[0]==0x12345678;events.append(('button',0x12345678))
            cpu.mem_write(0x15000,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');cpu.hook_add(UC_HOOK_CODE,button_callback,begin=0x15000,end=0x15000)
            for kind in[0,1,2,3,4,5,6,7]:
                for alignment in[0,1,2,3]:
                    cpu.mem_write(0x3050000,make_view(2)+make_view(4)+make_view(1));cpu.mem_write(0x3060000,make_view(kind,padding=(1,2,3,4),alignment=alignment,children=0x3050000,count=3))
                    assert call('window_render_view',ctx,0x3060000,0)==1
            for x,y,pressed,clicked in[(3,2,0,0),(3,2,1,0),(3,2,0,1),(100,100,0,1)]:
                cpu.mem_write(0x3060000,make_view(3));cpu.mem_write(0x3070000,struct.pack('<5I',1,x,y,pressed,clicked)+bytes(24));assert call('window_render_view',ctx,0x3060000,0x3070000)==1
            assert ('button',0x12345678)in events
        assert call('window_close',ctx)==1;assert bytes(cpu.mem_read(ctx,context_size))==bytes(context_size)
    for sequence in[[],[ord('a')],[ord('W'),8,13,27,ord('q'),ord('r'),ord('s'),ord('d')],[0x4800,0x5000,0x4b00,0x4d00],[ord(' '),ord('~'),0x7f]]:
        keys[:]=sequence;cpu.mem_write(out,b'\xa5'*40);assert call('keyboard_poll',out)==len(sequence);results.append(('keyboard',bytes(cpu.mem_read(out,24))));assert bytes(cpu.mem_read(out+24,16))==b'\xa5'*16
    call('yield_frames',3)
    # Bare tail forwards must preserve both argument registers and stack words.
    call('window_configure',17,3,5,7,9);call('window_list',out,4,out+0x100);call('window_menu_command',17,2,3);call('window_pointer_event',17,11,13,2);call('window_focus',17,3,5);call('window_request_close',17,3,5)
    struct.pack_into('<I',record,0,17);cpu.mem_write(ctx,struct.pack('<I',17));call('window_pointer_state',ctx,out)
    keys[:]=[ord('a'),0x4800];cpu.mem_write(out,b'\xa5'*60);assert call('input_poll',ctx,out)==3;results.append(('input',bytes(cpu.mem_read(out,44))));assert bytes(cpu.mem_read(out+44,16))==b'\xa5'*16
    draws=0;ticks=0;stop_draw=0;stop_tick=0
    def app_draw(cpu,address,length,user):
        nonlocal draws
        a=arguments(2);assert a[1]==0x12345678 and struct.unpack('<I',bytes(cpu.mem_read(a[0],4)))[0]==17;draws+=1;events.append(('draw',draws));cpu.reg_write(lib.result,int(not stop_draw or draws<stop_draw))
    def app_tick(cpu,address,length,user):
        nonlocal ticks
        a=arguments(3);assert a[2]==0x12345678 and bytes(cpu.mem_read(a[1],632))==record;ticks+=1;events.append(('tick',ticks));cpu.reg_write(lib.result,int(not stop_tick or ticks<stop_tick))
    for address,hook in[(0x16000,app_draw),(0x16010,app_tick)]:
        cpu.mem_write(address,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');cpu.hook_add(UC_HOOK_CODE,hook,begin=address,end=address)
    for frames,yields,stop_draw,stop_tick in[(1,0,0,0),(3,2,0,0),(0,1,2,0),(0,1,0,1)]:
        draws=ticks=0;specification(True,True);cpu.mem_write(ctx,bytes(context_size));w=8 if wide else 4;d=bytearray(112 if wide else 76);struct.pack_into('<Q'if wide else'<I',d,0,ctx);size=72 if wide else 52;d[w:w+size]=cpu.mem_read(spec,size);base=w+size
        for i,value in enumerate([0x16000,0x16010,0x12345678]):struct.pack_into('<Q'if wide else'<I',d,base+i*w,value)
        struct.pack_into('<2I',d,base+3*w,frames,yields);cpu.mem_write(0x3080000,bytes(d));assert call('app_run',0x3080000)==1;results.append(('app counters',draws,ticks));assert bytes(cpu.mem_read(ctx,context_size))==bytes(context_size)
    for offset,name,args in[(0xb0,'window_configure',(17,3,5,7,9)),(0xac,'window_list',(out,4,out+256)),(0xf0,'window_menu_command',(17,2,3)),(0xfc,'window_pointer_event',(17,11,13,2))]:
        for mode in['magic','version','size','null']:
            saved=[bytes(cpu.mem_read(t,12))for t in lib.api_tables];slots=[bytes(cpu.mem_read(t+offset,4))for t in lib.api_tables]
            for table in lib.api_tables:
                if mode=='null':cpu.mem_write(table+offset,bytes(4))
                else:cpu.mem_write(table,struct.pack('<3I',0 if mode=='magic'else 0x50414d57,0 if mode=='version'else 1000000,offset+3 if mode=='size'else 412))
            n=len(events);assert call(name,*args)==0 and len(events)==n
            for table,head,slot in zip(lib.api_tables,saved,slots):cpu.mem_write(table,head);cpu.mem_write(table+offset,slot)
    return results,events


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--api-base',type=lambda s:int(s,0));a=p.parse_args();native=exercise(a.reference,a.api_base);source=exercise(a.source,a.api_base)
    for i,(x,y)in enumerate(zip(native[0],source[0])):assert x==y,(i,x,y)
    for i,(x,y)in enumerate(zip(native[1],source[1])):
        def compact(v):return ('pixels',len(v),__import__('hashlib').sha256(v).hexdigest()[:12])if isinstance(v,bytes)and len(v)>128 else v
        assert x==y,(i,tuple(map(compact,x)),tuple(map(compact,y)))
    assert native==source
    print(f'TerrorUI: {len(native[0])} window/input operations and {len(native[1])} service calls passed.')


if __name__=='__main__':main()
