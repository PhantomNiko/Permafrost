#!/usr/bin/env python3
"""FAT32 volume reader and writer for the current Permafrost user partition."""
import struct

class FAT32:
    def __init__(self,data,base=0):
        self.data=data;self.base=base
        self.bps=struct.unpack_from('<H',data,base+11)[0]
        self.spc=data[base+13];self.reserved=struct.unpack_from('<H',data,base+14)[0]
        self.copies=data[base+16];self.total=struct.unpack_from('<I',data,base+32)[0]
        self.fat_sectors=struct.unpack_from('<I',data,base+36)[0]
        self.root=struct.unpack_from('<I',data,base+44)[0]
        if self.bps!=512 or not self.spc or not self.fat_sectors:raise ValueError('unsupported FAT32 geometry')
        self.cluster_size=self.bps*self.spc
        self.fat=base+self.reserved*self.bps
        self.start=base+(self.reserved+self.copies*self.fat_sectors)*self.bps
    def chain(self,first):
        seen=set()
        while 2<=first<0xffffff8:
            if first in seen:raise ValueError('cyclic FAT32 chain')
            seen.add(first);yield first
            first=struct.unpack_from('<I',self.data,self.fat+first*4)[0]&0xfffffff
    def cluster(self,c):
        offset=self.start+(c-2)*self.cluster_size
        block=self.data[offset:offset+self.cluster_size]
        if len(block)!=self.cluster_size:raise ValueError('truncated FAT32 cluster')
        return block
    def read(self,first,size):
        out=bytearray()
        if not size:return b''
        for c in self.chain(first):
            out+=self.cluster(c)
            if len(out)>=size:return bytes(out[:size])
        raise ValueError('short FAT32 chain')
    def entries(self,first=None,recursive=False):
        parts={}
        for c in self.chain(self.root if first is None else first):
            block=self.cluster(c)
            for pos in range(0,len(block),32):
                e=block[pos:pos+32]
                if not e[0]:return
                if e[0]==0xe5:parts={};continue
                if e[11]==15:
                    index=e[0]&31
                    if e[0]&64:parts={}
                    parts[index]=e[1:11]+e[14:26]+e[28:32];continue
                if e[11]&8:parts={};continue
                if parts:
                    encoded=b''.join(parts[i] for i in sorted(parts));name=encoded.decode('utf-16-le').split('\0',1)[0].rstrip('\uffff')
                else:
                    stem=e[:8].decode('ascii').rstrip();ext=e[8:11].decode('ascii').rstrip()
                    if e[12]&8:stem=stem.lower()
                    if e[12]&16:ext=ext.lower()
                    name=stem+('.'+ext if ext else '')
                parts={};first=struct.unpack_from('<H',e,20)[0]<<16|struct.unpack_from('<H',e,26)[0];size=struct.unpack_from('<I',e,28)[0]
                if e[11]&16:
                    if recursive and name not in ('.','..'):
                        for child,cluster,length in self.entries(first,True):
                            yield name+'/'+child,cluster,length
                    continue
                yield name,first,size

def make_fat32(files,sectors):
    if any('/' in name.lstrip('/') for name in files):
        return make_fat32_tree(files,sectors)
    reserved=32;fat_sectors=1
    while True:
        clusters=sectors-reserved-2*fat_sectors
        needed=((clusters+2)*4+511)//512
        if needed<=fat_sectors:break
        fat_sectors=needed
    if clusters<65525:raise ValueError('FAT32 volume requires at least 65525 data clusters')
    if len({name.lstrip('/').casefold() for name in files})!=len(files):
        raise ValueError('duplicate case-insensitive FAT32 filename')
    entries=[]
    for index,(name,content) in enumerate(files.items()):
        name=name.lstrip('/')
        if not name or '/' in name or '\\' in name or '\0' in name:raise ValueError('invalid FAT32 filename')
        text=name.encode('utf-16-le')+b'\0\0';count=(len(text)+25)//26
        if count>20:raise ValueError('FAT32 filename too long')
        short=('PF%06d'%index).encode()+b'BIN';checksum=0
        for c in short:checksum=(((checksum&1)<<7)+(checksum>>1)+c)&255
        text=text.ljust(count*26,b'\xff')
        for part in range(count,0,-1):
            e=bytearray(32);e[0]=part|(64 if part==count else 0);e[11]=15;e[13]=checksum
            fragment=text[(part-1)*26:part*26];e[1:11]=fragment[:10];e[14:26]=fragment[10:22];e[28:32]=fragment[22:]
            entries.append(e)
        e=bytearray(32);e[:11]=short;e[11]=32;entries.append(e)
    root_clusters=max(1,(len(entries)*32+511)//512)
    data_start=reserved+2*fat_sectors
    output=bytearray(sectors*512);output[:3]=b'\xeb\x3c\x90';output[3:11]=b'PERMAFST'
    struct.pack_into('<HBHBHHBHHHII',output,11,512,1,reserved,2,0,0,0xf8,0,63,255,0,sectors)
    struct.pack_into('<IHHIHH',output,36,fat_sectors,0,0,2,1,6)
    output[64]=128;output[66]=41;struct.pack_into('<I',output,67,0x50465235)
    output[71:82]=b'PERMAFROST ';output[82:90]=b'FAT32   ';output[510:512]=b'\x55\xaa'
    output[6*512:7*512]=output[:512]
    fsinfo=bytearray(512);struct.pack_into('<I',fsinfo,0,0x41615252);struct.pack_into('<I',fsinfo,484,0x61417272)
    struct.pack_into('<II',fsinfo,488,0xffffffff,0xffffffff);struct.pack_into('<I',fsinfo,508,0xaa550000);output[512:1024]=fsinfo;output[7*512:8*512]=fsinfo
    fat=bytearray(fat_sectors*512);struct.pack_into('<II',fat,0,0xffffff8,0xfffffff)
    def allocate(first,count):
        if first+count>clusters+2:raise ValueError('FAT32 image too small')
        for i in range(count):struct.pack_into('<I',fat,(first+i)*4,first+i+1 if i+1<count else 0xfffffff)
    allocate(2,root_clusters);current=2+root_clusters;entry_index=0
    for name,content in files.items():
        while entries[entry_index][11]==15:entry_index+=1
        e=entries[entry_index];entry_index+=1;count=(len(content)+511)//512;first=current if count else 0
        struct.pack_into('<H',e,20,first>>16);struct.pack_into('<H',e,26,first&65535);struct.pack_into('<I',e,28,len(content))
        allocate(current,count);offset=(data_start+current-2)*512;output[offset:offset+len(content)]=content;current+=count
    root=b''.join(entries);offset=data_start*512;output[offset:offset+len(root)]=root
    for copy in range(2):offset=(reserved+copy*fat_sectors)*512;output[offset:offset+len(fat)]=fat
    check=FAT32(bytes(output));actual={n:check.read(c,s) for n,c,s in check.entries()}
    if actual!={n.lstrip('/'):c for n,c in files.items()}:raise ValueError('FAT32 round trip failed')
    return bytes(output)


def make_fat32_tree(files,sectors):
    """Build nested user files with long names and deterministic aliases."""
    volume=bytearray(make_fat32({},sectors));geometry=FAT32(volume)
    root={'children':{},'parent':None};directories=[root];payloads=[]
    folded=set()
    for path,data in sorted(files.items()):
        parts=path.strip('/').split('/');key='/'.join(parts).casefold()
        if key in folded:raise ValueError('duplicate case-insensitive FAT32 path')
        folded.add(key);node=root
        for name in parts:
            if not name or name in ('.','..') or '\\' in name or '\0' in name or len(name.encode('utf-16-le'))>510:
                raise ValueError('invalid FAT32 path component')
        for name in parts[:-1]:
            key=name.casefold()
            if key not in node['children']:
                child={'name':name,'children':{},'parent':node};node['children'][key]=child;directories.append(child)
            node=node['children'][key]
            if 'children'not in node:raise ValueError('FAT32 directory collides with file')
        key=parts[-1].casefold()
        if key in node['children']:raise ValueError('FAT32 file collides with directory')
        leaf={'name':parts[-1],'data':bytes(data),'parent':node};node['children'][key]=leaf;payloads.append(leaf)
    def entries(name,alias,directory,cluster=0,size=0):
        encoded=name.encode('utf-16-le')+b'\0\0';count=(len(encoded)+25)//26
        encoded=encoded.ljust(count*26,b'\xff');checksum=0;output=[]
        for byte in alias:checksum=(((checksum&1)<<7)+(checksum>>1)+byte)&255
        for part in range(count,0,-1):
            entry=bytearray(32);entry[0]=part|(64 if part==count else 0);entry[11]=15;entry[13]=checksum
            fragment=encoded[(part-1)*26:part*26];entry[1:11]=fragment[:10];entry[14:26]=fragment[10:22];entry[28:32]=fragment[22:]
            output.append(entry)
        entry=bytearray(32);entry[:11]=alias;entry[11]=16 if directory else 32
        struct.pack_into('<H',entry,20,cluster>>16);struct.pack_into('<H',entry,26,cluster&65535);struct.pack_into('<I',entry,28,size)
        return output+[entry]
    fat=bytearray(geometry.fat_sectors*512);struct.pack_into('<II',fat,0,0xffffff8,0xfffffff);current=2
    for node in directories:
        node['aliases']={key:('PF%06d'%i).encode()+b'BIN' for i,key in enumerate(node['children'])}
        node['slots']=sum(len(entries(child['name'],node['aliases'][key],'children'in child))for key,child in node['children'].items())
    for node in directories+payloads:
        length=(node['slots']+(0 if node is root else 2))*32 if 'children'in node else len(node['data'])
        count=max(1,(length+511)//512)if'children'in node else(length+511)//512
        if current+count>geometry.total-geometry.reserved-2*geometry.fat_sectors+2:raise ValueError('FAT32 image too small')
        node['cluster']=current if count else 0
        for index in range(count):struct.pack_into('<I',fat,(current+index)*4,current+index+1 if index+1<count else 0xfffffff)
        current+=count
    def write(node,data):
        offset=geometry.start+(node['cluster']-2)*512;volume[offset:offset+len(data)]=data
    for node in directories:
        output=[]
        if node is not root:
            for name,cluster in [('.',node['cluster']),('..',0 if node['parent']is root else node['parent']['cluster'])]:
                entry=bytearray(32);entry[:11]=name.ljust(11).encode();entry[11]=16
                struct.pack_into('<H',entry,20,cluster>>16);struct.pack_into('<H',entry,26,cluster&65535);output.append(entry)
        for key,child in node['children'].items():
            output+=entries(child['name'],node['aliases'][key],'children'in child,child['cluster'],len(child.get('data',b'')))
        write(node,b''.join(output))
    for node in payloads:
        if node['data']:write(node,node['data'])
    for copy in range(2):
        offset=(geometry.reserved+copy*geometry.fat_sectors)*512;volume[offset:offset+len(fat)]=fat
    check=FAT32(volume);actual={name:check.read(cluster,size)for name,cluster,size in check.entries(recursive=True)}
    if actual!={name.strip('/'):bytes(data)for name,data in files.items()}:raise ValueError('nested FAT32 round trip failed')
    return bytes(volume)


def make_efi_volume(files,sectors=69632):
    """Build the EFI system partition with deterministic 8.3 directories."""
    volume=bytearray(make_fat32({},sectors));geometry=FAT32(volume)
    root={'children':{},'cluster':2,'parent':0};directories=[root];payloads=[]
    for path,data in sorted(files.items()):
        parts=path.strip('/').split('/');node=root
        for name in parts:
            pieces=name.upper().split('.')
            if (name in ('.','..') or len(pieces)>2 or not 1<=len(pieces[0])<=8
                    or len(pieces[-1])>3 and len(pieces)>1
                    or any(not(c.isascii()and(c.isalnum()or c in '_-'))for c in ''.join(pieces))):
                raise ValueError('invalid EFI short name: '+name)
        for name in parts[:-1]:
            key=name.upper()
            if key not in node['children']:
                child={'children':{},'parent_node':node};node['children'][key]=child;directories.append(child)
            node=node['children'][key]
            if 'children'not in node:raise ValueError('EFI directory collides with file')
        key=parts[-1].upper()
        if key in node['children']:raise ValueError('duplicate EFI path')
        leaf={'data':bytes(data)};node['children'][key]=leaf;payloads.append(leaf)
    fat=bytearray(volume[geometry.fat:geometry.fat+geometry.fat_sectors*512]);current=2
    def allocate(node,count):
        nonlocal current
        if current+count>geometry.total-geometry.reserved-2*geometry.fat_sectors+2:raise ValueError('EFI partition full')
        node['cluster']=current if count else 0;node['count']=count
        for i in range(count):struct.pack_into('<I',fat,(current+i)*4,current+i+1 if i+1<count else 0xfffffff)
        current+=count
    for node in directories:allocate(node,max(1,(32*(len(node['children'])+(0 if node is root else 2))+511)//512))
    for node in payloads:allocate(node,(len(node['data'])+511)//512)
    def entry(name,cluster,size,directory):
        result=bytearray(32)
        if name in ('.','..'):short=name.ljust(11)
        else:
            stem,_,ext=name.partition('.');short=stem.ljust(8)+ext.ljust(3)
        result[:11]=short.encode('ascii');result[11]=16 if directory else 32
        struct.pack_into('<H',result,20,cluster>>16);struct.pack_into('<H',result,26,cluster&65535);struct.pack_into('<I',result,28,size)
        return result
    def write(node,data):
        offset=geometry.start+(node['cluster']-2)*512;volume[offset:offset+len(data)]=data
    for node in directories:
        entries=[]
        if node is not root:
            parent=node['parent_node'];entries=[entry('.',node['cluster'],0,True),entry('..',0 if parent is root else parent['cluster'],0,True)]
        for name,child in node['children'].items():entries.append(entry(name,child['cluster'],len(child.get('data',b'')),'children'in child))
        write(node,b''.join(entries))
    for node in payloads:
        if node['data']:write(node,node['data'])
    for copy in range(2):
        offset=geometry.fat+copy*geometry.fat_sectors*512;volume[offset:offset+len(fat)]=fat
    check=FAT32(volume);actual={name:check.read(cluster,size)for name,cluster,size in check.entries(recursive=True)}
    if actual!={name.strip('/').upper():bytes(data)for name,data in files.items()}:raise ValueError('EFI volume round trip failed')
    return bytes(volume)
