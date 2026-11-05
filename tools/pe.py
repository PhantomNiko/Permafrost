#!/usr/bin/env python3
"""Inspect and package source EFI applications. Pooka's Free Software License."""
import struct
from elf32 import align


def inspect(binary):
    if binary[:2]!=b'MZ' or len(binary)<64:raise ValueError('invalid DOS header')
    pe=struct.unpack_from('<I',binary,60)[0]
    if binary[pe:pe+4]!=b'PE\0\0':raise ValueError('invalid PE signature')
    machine,count,stamp,symbols,number,optional,flags=struct.unpack_from('<HHIIIHH',binary,pe+4)
    position=pe+24;magic=struct.unpack_from('<H',binary,position)[0]
    wide=magic==0x20b
    if magic not in(0x10b,0x20b) or machine not in ((0x8664,0xaa64) if wide else (0x14c,0x1c2,0x1c4)):raise ValueError('unsupported PE architecture')
    entry=struct.unpack_from('<I',binary,position+16)[0]
    image_base=struct.unpack_from('<Q'if wide else'<I',binary,position+(24 if wide else 28))[0]
    size=struct.unpack_from('<I',binary,position+56)[0]
    if not size or size>16*1024*1024:raise ValueError('unbounded EFI image')
    memory=bytearray(size);sections=[]
    for i in range(count):
        p=position+optional+i*40
        name=binary[p:p+8].split(b'\0')[0].decode('ascii')
        virtual,address,used,offset=struct.unpack_from('<4I',binary,p+8)
        if address+virtual>size or offset+used>len(binary):raise ValueError('invalid PE section extent')
        memory[address:address+min(used,virtual)]=binary[offset:offset+min(used,virtual)]
        sections.append((name,address,virtual))
    directories=position+(112 if wide else 96)
    reloc,reloc_size=struct.unpack_from('<II',binary,directories+5*8);fixups=[];relocation_kinds=[]
    end=reloc+reloc_size
    if end>len(memory):raise ValueError('invalid PE relocation directory')
    while reloc<end:
        page,block=struct.unpack_from('<II',memory,reloc)
        if block<8 or block%2 or reloc+block>end:raise ValueError('invalid PE relocation block')
        for p in range(reloc+8,reloc+block,2):
            value=struct.unpack_from('<H',memory,p)[0];kind=value>>12
            if kind not in ((0,3,7) if machine in (0x1c2,0x1c4) else (0,3,10)):raise ValueError('unsupported PE relocation')
            if kind:
                fixups.append((page+(value&4095),8 if kind in (7,10) else 4))
                relocation_kinds.append((page+(value&4095),kind))
        reloc+=block
    return dict(machine=machine,relocation_kinds=relocation_kinds,wide=wide,entry=entry,image_base=image_base,size=size,sections=sections,relocations=fixups),bytes(memory)


def pack(image,entry,relocations,architecture,data_start=None):
    """Package a source-linked core at RVA 0x1000 with optional separate data pages."""
    wide=architecture in ('x86_64','arm64');base=0x1000
    machines={'i386':0x14c,'x86_64':0x8664,'armv7':0x1c2,'arm64':0xaa64}
    if architecture not in machines or not base<=entry<base+len(image):raise ValueError('invalid EFI entry')
    if data_start is not None and (data_start%4096 or not base<data_start<base+len(image)):
        raise ValueError('EFI data must start on a separate page')
    pages={}
    for address,width in sorted(set(relocations)):
        if width not in(4,8)or not base<=address<=base+len(image)-width:raise ValueError('invalid EFI relocation location')
        pages.setdefault(address&~4095,[]).append(((10 if width==8 else 3)<<12)|(address&4095))
    table=bytearray()
    for page,entries in sorted(pages.items()):
        if len(entries)&1:entries.append(0)
        table.extend(struct.pack('<II',page,8+len(entries)*2));table.extend(struct.pack('<%dH'%len(entries),*entries))
    used=len(image.rstrip(b'\0'));raw_size=align(used,512);reloc_rva=align(base+len(image),4096)
    optional=240 if wide else 224;header=bytearray(512);header[:2]=b'MZ';struct.pack_into('<I',header,60,128);header[128:132]=b'PE\0\0'
    struct.pack_into('<HHIIIHH',header,132,machines[architecture],3 if data_start is not None else 2,0,0,0,optional,0x22 if wide else 0x102)
    p=152;struct.pack_into('<H',header,p,0x20b if wide else 0x10b);struct.pack_into('<III',header,p+4,raw_size,align(len(table),512),len(image)-used)
    struct.pack_into('<II',header,p+16,entry,base)
    if wide:struct.pack_into('<Q',header,p+24,0)
    else:struct.pack_into('<II',header,p+24,data_start or base,0)
    struct.pack_into('<II',header,p+32,4096,512);struct.pack_into('<HH',header,p+48,2,0)
    struct.pack_into('<II',header,p+56,align(reloc_rva+len(table),4096),512);struct.pack_into('<H',header,p+68,10)
    if wide:struct.pack_into('<4Q',header,p+72,0x100000,0x1000,0x100000,0x1000)
    else:struct.pack_into('<4I',header,p+72,0x100000,0x1000,0x100000,0x1000)
    struct.pack_into('<I',header,p+(108 if wide else 92),16);struct.pack_into('<II',header,p+(112 if wide else 96)+5*8,reloc_rva,len(table))
    sections=p+optional
    payload=bytearray()
    if data_start is None:
        records=[(b'.text',len(image),base,raw_size,512,0xe0000060)]
        payload.extend(image[:used].ljust(raw_size,b'\0'))
    else:
        split=data_start-base
        text_raw=align(min(used,split),512)
        data_raw=align(max(0,used-split),512)
        records=[(b'.text',split,base,text_raw,512,0x60000020),
                 (b'.data',len(image)-split,data_start,data_raw,512+text_raw,0xc0000040)]
        payload.extend(image[:min(used,split)].ljust(text_raw,b'\0'))
        payload.extend(image[split:used].ljust(data_raw,b'\0'))
        struct.pack_into('<II',header,p+4,text_raw,data_raw+align(len(table),512))
    records.append((b'.reloc',len(table),reloc_rva,align(len(table),512),512+len(payload),0x42000040))
    for index,(name,virtual,rva,length,offset,flags)in enumerate(records):
        struct.pack_into('<8s6I2HI',header,sections+index*40,name,virtual,rva,length,offset,0,0,0,0,flags)
    return bytes(header)+bytes(payload)+bytes(table).ljust(align(len(table),512),b'\0')
