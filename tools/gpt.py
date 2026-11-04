#!/usr/bin/env python3
"""Package the Permafrost EFI partition and nested WBPT disk deterministically."""
import struct
import uuid
import zlib

EFI_TYPE=uuid.UUID('c12a7328-f81f-11d2-ba4b-00a0c93ec93b')
SHIM_TYPE=uuid.UUID('5748534d-5742-4d33-8057-57696e53686d')


def make_disk(esp,payload):
    if len(esp)%512 or len(payload)%512:raise ValueError('GPT partitions must be sector aligned')
    esp_start=2048;shim_start=esp_start+len(esp)//512
    total=((shim_start+len(payload)//512+33+2047)//2048)*2048
    output=bytearray(total*512);output[510:512]=b'\x55\xaa'
    struct.pack_into('<B3sB3sII',output,446,0,b'\0\x02\0',0xee,b'\xff\xff\xff',1,min(total-1,0xffffffff))
    entries=bytearray(128*128)
    namespace=uuid.UUID('9c3b9535-8515-5d40-a430-63dc48574c09')
    for i,(kind,name,start,data)in enumerate(((EFI_TYPE,'EFI',esp_start,esp),(SHIM_TYPE,'Permafrost',shim_start,payload))):
        offset=i*128;entries[offset:offset+16]=kind.bytes_le;entries[offset+16:offset+32]=uuid.uuid5(namespace,name).bytes_le
        struct.pack_into('<QQQ',entries,offset+32,start,start+len(data)//512-1,0)
        encoded=name.encode('utf-16-le');entries[offset+56:offset+56+len(encoded)]=encoded;output[start*512:start*512+len(data)]=data
    entries_crc=zlib.crc32(entries)
    def header(current,backup,table):
        result=bytearray(512)
        struct.pack_into('<8sIIIIQQQQ16sQIII',result,0,b'EFI PART',0x10000,92,0,0,current,backup,34,total-34,uuid.uuid5(namespace,'Permafrost 0.7').bytes_le,table,128,128,entries_crc)
        struct.pack_into('<I',result,16,zlib.crc32(result[:92]));return result
    output[512:1024]=header(1,total-1,2);output[1024:1024+len(entries)]=entries
    output[(total-33)*512:(total-1)*512]=entries;output[(total-1)*512:]=header(total-1,1,total-33)
    return bytes(output)


def unpack_disk(data):
    """Read and validate the two partitions used by a Permafrost EFI disk."""
    if data[512:520]!=b'EFI PART':raise ValueError('not a GPT disk')
    header=bytearray(data[512:1024]);size=struct.unpack_from('<I',header,12)[0]
    if not 92<=size<=512:raise ValueError('invalid GPT header size')
    checksum=struct.unpack_from('<I',header,16)[0];struct.pack_into('<I',header,16,0)
    if zlib.crc32(header[:size])!=checksum:raise ValueError('GPT header checksum differs')
    table,count,extent,checksum=struct.unpack_from('<QIII',header,72)
    if count>4096 or extent<128 or extent>4096:raise ValueError('invalid GPT entry table')
    entries=data[table*512:table*512+count*extent]
    if len(entries)!=count*extent or zlib.crc32(entries)!=checksum:raise ValueError('GPT entry checksum differs')
    found={}
    for i in range(count):
        entry=entries[i*extent:(i+1)*extent];kind=uuid.UUID(bytes_le=entry[:16])
        if kind not in (EFI_TYPE,SHIM_TYPE):continue
        first,last=struct.unpack_from('<QQ',entry,32)
        if first>last or (last+1)*512>len(data):raise ValueError('invalid GPT partition extent')
        if kind in found:raise ValueError('duplicate Permafrost GPT partition')
        found[kind]=data[first*512:(last+1)*512]
    if set(found)!={EFI_TYPE,SHIM_TYPE}:raise ValueError('missing Permafrost GPT partition')
    return found[EFI_TYPE],found[SHIM_TYPE]
