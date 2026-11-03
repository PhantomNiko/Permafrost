%include "kernel_c.inc"
; Permafrost 0.6 — recovered assembly, Pooka's Free Software License.
; Fixed virtual addresses preserve compatibility with original raw programs.
; at() retains original instruction boundaries when NASM shortens an encoding.
%macro pf_at 1
    times %1 - ($-$$) db 0x90
%endmacro

section part0 start=0x0 vstart=0x0 align=1
    db "WMLP"
    db 0x01
    times 3 db 0
    db 0x10
    times 1 db 0
    db 0x02
    times 1 db 0
    db 0x84, 0x0c
    times 2 db 0

section part1 start=0x10 vstart=0x20010 align=1
bits 32
pf_at 0x0
l_kernel_00020010: jmp pf_relocate
pf_at 0x13
l_kernel_00020023: pushf
pf_at 0x14
l_kernel_00020024: push ebx
pf_at 0x15
l_kernel_00020025: push esi
pf_at 0x16
l_kernel_00020026: push edi
pf_at 0x17
l_kernel_00020027: push ebp
pf_at 0x18
l_kernel_00020028: mov [dword 0x20bfe],esp
pf_at 0x1e
l_kernel_0002002e: mov word [dword 0x20c06],0x0
pf_at 0x27
l_kernel_00020037: cli
pf_at 0x28
l_kernel_00020038: lgdt [dword 0x20bf8]
pf_at 0x2f
l_kernel_0002003f: jmp word 0x18:0x45

section part2 start=0x45 vstart=0x45 align=1
bits 16
pf_at 0x0
l_kernel_00000045: mov ax,0x20
pf_at 0x3
l_kernel_00000048: mov ds,ax
pf_at 0x5
l_kernel_0000004a: mov es,ax
pf_at 0x7
l_kernel_0000004c: mov fs,ax
pf_at 0x9
l_kernel_0000004e: mov gs,ax
pf_at 0xb
l_kernel_00000050: mov ss,ax
pf_at 0xd
l_kernel_00000052: mov sp,0xfffc
pf_at 0x10
l_kernel_00000055: mov eax,cr0
pf_at 0x13
l_kernel_00000058: mov [0xc02],eax
pf_at 0x17
l_kernel_0000005c: test eax,0x80000000
pf_at 0x1d
l_kernel_00000062: jz short 0x6d
pf_at 0x1f
l_kernel_00000064: and eax,0x7fffffff
pf_at 0x25
l_kernel_0000006a: mov cr0,eax
pf_at 0x28
l_kernel_0000006d: and al,0xfe
pf_at 0x2a
l_kernel_0000006f: mov cr0,eax
pf_at 0x2d
l_kernel_00000072: jmp 0x2000:0x77
pf_at 0x32
l_kernel_00000077: mov ax,0x2000
pf_at 0x35
l_kernel_0000007a: mov ds,ax
pf_at 0x37
l_kernel_0000007c: mov es,ax
pf_at 0x39
l_kernel_0000007e: mov fs,ax
pf_at 0x3b
l_kernel_00000080: mov gs,ax
pf_at 0x3d
l_kernel_00000082: mov ax,0x800
pf_at 0x40
l_kernel_00000085: mov ss,ax
pf_at 0x42
l_kernel_00000087: mov sp,0xfffc
pf_at 0x45
l_kernel_0000008a: sti
pf_at 0x46
l_kernel_0000008b: nop
pf_at 0x47
l_kernel_0000008c: mov ah,0x11
pf_at 0x49
l_kernel_0000008e: int 0x16
pf_at 0x4b
l_kernel_00000090: jnz short 0x9e
pf_at 0x4d
l_kernel_00000092: mov ah,0x1
pf_at 0x4f
l_kernel_00000094: int 0x16
pf_at 0x51
l_kernel_00000096: jz short 0xa6
pf_at 0x53
l_kernel_00000098: mov ah,0x0
pf_at 0x55
l_kernel_0000009a: int 0x16
pf_at 0x57
l_kernel_0000009c: jmp short 0xa2
pf_at 0x59
l_kernel_0000009e: mov ah,0x10
pf_at 0x5b
l_kernel_000000a0: int 0x16
pf_at 0x5d
l_kernel_000000a2: mov [cs:0xc06],ax
pf_at 0x61
l_kernel_000000a6: cli
pf_at 0x62
l_kernel_000000a7: lgdt [cs:0xbf8]
pf_at 0x68
l_kernel_000000ad: mov eax,cr0
pf_at 0x6b
l_kernel_000000b0: or al,0x1
pf_at 0x6d
l_kernel_000000b2: mov cr0,eax
pf_at 0x70
l_kernel_000000b5: jmp dword 0x8:0x200bd

section part3 start=0xbd vstart=0x200bd align=1
bits 32
pf_at 0x0
l_kernel_000200bd: mov ax,0x10
pf_at 0x4
l_kernel_000200c1: o16 mov ds,ax
pf_at 0x7
l_kernel_000200c4: o16 mov es,ax
pf_at 0xa
l_kernel_000200c7: o16 mov fs,ax
pf_at 0xd
l_kernel_000200ca: o16 mov gs,ax
pf_at 0x10
l_kernel_000200cd: o16 mov ss,ax
pf_at 0x13
l_kernel_000200d0: mov eax,[0x20c02]
pf_at 0x18
l_kernel_000200d5: test eax,0x80000000
pf_at 0x1d
l_kernel_000200da: jz short 0x200f7
pf_at 0x1f
l_kernel_000200dc: mov ecx,cr4
pf_at 0x22
l_kernel_000200df: or ecx,byte +0x20
pf_at 0x25
l_kernel_000200e2: mov cr4,ecx
pf_at 0x28
l_kernel_000200e5: mov ecx,cr3
pf_at 0x2b
l_kernel_000200e8: mov cr3,ecx
pf_at 0x2e
l_kernel_000200eb: mov ecx,cr0
pf_at 0x31
l_kernel_000200ee: or ecx,0x80000000
pf_at 0x37
l_kernel_000200f4: mov cr0,ecx
pf_at 0x3a
l_kernel_000200f7: mov esp,[dword 0x20bfe]
pf_at 0x40
l_kernel_000200fd: movzx eax,word [dword 0x20c06]
pf_at 0x47
l_kernel_00020104: pop ebp
pf_at 0x48
l_kernel_00020105: pop edi
pf_at 0x49
l_kernel_00020106: pop esi
pf_at 0x4a
l_kernel_00020107: pop ebx
pf_at 0x4b
l_kernel_00020108: popf
pf_at 0x4c
l_kernel_00020109: ret
pf_at 0x4d
l_kernel_0002010a: pushf
pf_at 0x4e
l_kernel_0002010b: push ebx
pf_at 0x4f
l_kernel_0002010c: push esi
pf_at 0x50
l_kernel_0002010d: push edi
pf_at 0x51
l_kernel_0002010e: push ebp
pf_at 0x52
l_kernel_0002010f: mov [dword 0x20bfe],esp
pf_at 0x58
l_kernel_00020115: mov dword [dword 0x20c08],0x0
pf_at 0x62
l_kernel_0002011f: mov word [dword 0x20c0c],0x0
pf_at 0x6b
l_kernel_00020128: mov word [dword 0x20c0e],0x0
pf_at 0x74
l_kernel_00020131: mov word [dword 0x20c10],0x0
pf_at 0x7d
l_kernel_0002013a: cli
pf_at 0x7e
l_kernel_0002013b: lgdt [dword 0x20bf8]
pf_at 0x85
l_kernel_00020142: jmp word 0x18:0x148

section part4 start=0x148 vstart=0x148 align=1
bits 16
pf_at 0x0
l_kernel_00000148: mov ax,0x20
pf_at 0x3
l_kernel_0000014b: mov ds,ax
pf_at 0x5
l_kernel_0000014d: mov es,ax
pf_at 0x7
l_kernel_0000014f: mov fs,ax
pf_at 0x9
l_kernel_00000151: mov gs,ax
pf_at 0xb
l_kernel_00000153: mov ss,ax
pf_at 0xd
l_kernel_00000155: mov sp,0xfffc
pf_at 0x10
l_kernel_00000158: mov eax,cr0
pf_at 0x13
l_kernel_0000015b: mov [0xc02],eax
pf_at 0x17
l_kernel_0000015f: test eax,0x80000000
pf_at 0x1d
l_kernel_00000165: jz short 0x170
pf_at 0x1f
l_kernel_00000167: and eax,0x7fffffff
pf_at 0x25
l_kernel_0000016d: mov cr0,eax
pf_at 0x28
l_kernel_00000170: and al,0xfe
pf_at 0x2a
l_kernel_00000172: mov cr0,eax
pf_at 0x2d
l_kernel_00000175: jmp 0x2000:0x17a
pf_at 0x32
l_kernel_0000017a: mov ax,0x2000
pf_at 0x35
l_kernel_0000017d: mov ds,ax
pf_at 0x37
l_kernel_0000017f: mov es,ax
pf_at 0x39
l_kernel_00000181: mov fs,ax
pf_at 0x3b
l_kernel_00000183: mov gs,ax
pf_at 0x3d
l_kernel_00000185: mov ax,0x800
pf_at 0x40
l_kernel_00000188: mov ss,ax
pf_at 0x42
l_kernel_0000018a: mov sp,0xfffc
pf_at 0x45
l_kernel_0000018d: sti
pf_at 0x46
l_kernel_0000018e: mov ax,0x1130
pf_at 0x49
l_kernel_00000191: mov bh,0x6
pf_at 0x4b
l_kernel_00000193: int 0x10
pf_at 0x4d
l_kernel_00000195: mov [cs:0xc0c],es
pf_at 0x52
l_kernel_0000019a: mov [cs:0xc0e],bp
pf_at 0x57
l_kernel_0000019f: mov [cs:0xc10],cx
pf_at 0x5c
l_kernel_000001a4: mov ax,es
pf_at 0x5e
l_kernel_000001a6: or ax,bp
pf_at 0x60
l_kernel_000001a8: jz short 0x1b6
pf_at 0x62
l_kernel_000001aa: mov dword [cs:0xc08],0x1
pf_at 0x6c
l_kernel_000001b4: jmp short 0x1c0
pf_at 0x6e
l_kernel_000001b6: mov dword [cs:0xc08],0x0
pf_at 0x78
l_kernel_000001c0: cli
pf_at 0x79
l_kernel_000001c1: lgdt [cs:0xbf8]
pf_at 0x7f
l_kernel_000001c7: mov eax,cr0
pf_at 0x82
l_kernel_000001ca: or al,0x1
pf_at 0x84
l_kernel_000001cc: mov cr0,eax
pf_at 0x87
l_kernel_000001cf: jmp dword 0x8:0x201d7

section part5 start=0x1d7 vstart=0x201d7 align=1
bits 32
pf_at 0x0
l_kernel_000201d7: mov ax,0x10
pf_at 0x4
l_kernel_000201db: o16 mov ds,ax
pf_at 0x7
l_kernel_000201de: o16 mov es,ax
pf_at 0xa
l_kernel_000201e1: o16 mov fs,ax
pf_at 0xd
l_kernel_000201e4: o16 mov gs,ax
pf_at 0x10
l_kernel_000201e7: o16 mov ss,ax
pf_at 0x13
l_kernel_000201ea: mov eax,[0x20c02]
pf_at 0x18
l_kernel_000201ef: test eax,0x80000000
pf_at 0x1d
l_kernel_000201f4: jz short 0x20211
pf_at 0x1f
l_kernel_000201f6: mov ecx,cr4
pf_at 0x22
l_kernel_000201f9: or ecx,byte +0x20
pf_at 0x25
l_kernel_000201fc: mov cr4,ecx
pf_at 0x28
l_kernel_000201ff: mov ecx,cr3
pf_at 0x2b
l_kernel_00020202: mov cr3,ecx
pf_at 0x2e
l_kernel_00020205: mov ecx,cr0
pf_at 0x31
l_kernel_00020208: or ecx,0x80000000
pf_at 0x37
l_kernel_0002020e: mov cr0,ecx
pf_at 0x3a
l_kernel_00020211: mov esp,[dword 0x20bfe]
pf_at 0x40
l_kernel_00020217: mov eax,[0x20c08]
pf_at 0x45
l_kernel_0002021c: pop ebp
pf_at 0x46
l_kernel_0002021d: pop edi
pf_at 0x47
l_kernel_0002021e: pop esi
pf_at 0x48
l_kernel_0002021f: pop ebx
pf_at 0x49
l_kernel_00020220: popf
pf_at 0x4a
l_kernel_00020221: ret
pf_at 0x4b
l_kernel_00020222: pushf
pf_at 0x4c
l_kernel_00020223: push ebx
pf_at 0x4d
l_kernel_00020224: push esi
pf_at 0x4e
l_kernel_00020225: push edi
pf_at 0x4f
l_kernel_00020226: push ebp
pf_at 0x50
l_kernel_00020227: mov [dword 0x20bfe],esp
pf_at 0x56
l_kernel_0002022d: mov dword [dword 0x20c36],0x0
pf_at 0x60
l_kernel_00020237: cli
pf_at 0x61
l_kernel_00020238: lgdt [dword 0x20bf8]
pf_at 0x68
l_kernel_0002023f: jmp word 0x18:0x245

section part6 start=0x245 vstart=0x245 align=1
bits 16
pf_at 0x0
l_kernel_00000245: mov ax,0x20
pf_at 0x3
l_kernel_00000248: mov ds,ax
pf_at 0x5
l_kernel_0000024a: mov es,ax
pf_at 0x7
l_kernel_0000024c: mov fs,ax
pf_at 0x9
l_kernel_0000024e: mov gs,ax
pf_at 0xb
l_kernel_00000250: mov ss,ax
pf_at 0xd
l_kernel_00000252: mov sp,0xfffc
pf_at 0x10
l_kernel_00000255: mov eax,cr0
pf_at 0x13
l_kernel_00000258: mov [0xc02],eax
pf_at 0x17
l_kernel_0000025c: test eax,0x80000000
pf_at 0x1d
l_kernel_00000262: jz short 0x26d
pf_at 0x1f
l_kernel_00000264: and eax,0x7fffffff
pf_at 0x25
l_kernel_0000026a: mov cr0,eax
pf_at 0x28
l_kernel_0000026d: and al,0xfe
pf_at 0x2a
l_kernel_0000026f: mov cr0,eax
pf_at 0x2d
l_kernel_00000272: jmp 0x2000:0x277
pf_at 0x32
l_kernel_00000277: mov ax,0x2000
pf_at 0x35
l_kernel_0000027a: mov ds,ax
pf_at 0x37
l_kernel_0000027c: mov es,ax
pf_at 0x39
l_kernel_0000027e: mov fs,ax
pf_at 0x3b
l_kernel_00000280: mov gs,ax
pf_at 0x3d
l_kernel_00000282: mov ax,0x800
pf_at 0x40
l_kernel_00000285: mov ss,ax
pf_at 0x42
l_kernel_00000287: mov sp,0xfffc
pf_at 0x45
l_kernel_0000028a: sti
pf_at 0x46
l_kernel_0000028b: mov ecx,[cs:0xc1e]
pf_at 0x4c
l_kernel_00000291: test ecx,ecx
pf_at 0x4f
l_kernel_00000294: jz short 0x305
pf_at 0x51
l_kernel_00000296: mov eax,[cs:0xc1a]
pf_at 0x56
l_kernel_0000029b: mov edx,eax
pf_at 0x59
l_kernel_0000029e: and edx,0x1ff
pf_at 0x60
l_kernel_000002a5: add ecx,edx
pf_at 0x63
l_kernel_000002a8: add ecx,0x1ff
pf_at 0x6a
l_kernel_000002af: shr ecx,byte 0x9
pf_at 0x6e
l_kernel_000002b3: cmp ecx,byte +0x38
pf_at 0x72
l_kernel_000002b7: ja short 0x311
pf_at 0x74
l_kernel_000002b9: shr eax,byte 0x9
pf_at 0x78
l_kernel_000002bd: add eax,[cs:0xc16]
pf_at 0x7e
l_kernel_000002c3: mov edx,eax
pf_at 0x81
l_kernel_000002c6: mov ax,0x1000
pf_at 0x84
l_kernel_000002c9: mov ds,ax
pf_at 0x86
l_kernel_000002cb: mov si,0x7f00
pf_at 0x89
l_kernel_000002ce: mov word [si],0x10
pf_at 0x8d
l_kernel_000002d2: mov [si+0x2],cx
pf_at 0x90
l_kernel_000002d5: mov word [si+0x4],0x0
pf_at 0x95
l_kernel_000002da: mov word [si+0x6],0x1000
pf_at 0x9a
l_kernel_000002df: mov [si+0x8],edx
pf_at 0x9e
l_kernel_000002e3: mov dword [si+0xc],0x0
pf_at 0xa6
l_kernel_000002eb: mov dl,[cs:0xc12]
pf_at 0xab
l_kernel_000002f0: mov ah,0x42
pf_at 0xad
l_kernel_000002f2: int 0x13
pf_at 0xaf
l_kernel_000002f4: jnc short 0x305
pf_at 0xb1
l_kernel_000002f6: xor ah,ah
pf_at 0xb3
l_kernel_000002f8: int 0x13
pf_at 0xb5
l_kernel_000002fa: mov dl,[cs:0xc12]
pf_at 0xba
l_kernel_000002ff: mov ah,0x42
pf_at 0xbc
l_kernel_00000301: int 0x13
pf_at 0xbe
l_kernel_00000303: jc short 0x311
pf_at 0xc0
l_kernel_00000305: mov dword [cs:0xc36],0x1
pf_at 0xca
l_kernel_0000030f: jmp short 0x31b
pf_at 0xcc
l_kernel_00000311: mov dword [cs:0xc36],0x0
pf_at 0xd6
l_kernel_0000031b: cli
pf_at 0xd7
l_kernel_0000031c: lgdt [cs:0xbf8]
pf_at 0xdd
l_kernel_00000322: mov eax,cr0
pf_at 0xe0
l_kernel_00000325: or al,0x1
pf_at 0xe2
l_kernel_00000327: mov cr0,eax
pf_at 0xe5
l_kernel_0000032a: jmp dword 0x8:0x20332

section part7 start=0x332 vstart=0x20332 align=1
bits 32
pf_at 0x0
l_kernel_00020332: mov ax,0x10
pf_at 0x4
l_kernel_00020336: o16 mov ds,ax
pf_at 0x7
l_kernel_00020339: o16 mov es,ax
pf_at 0xa
l_kernel_0002033c: o16 mov fs,ax
pf_at 0xd
l_kernel_0002033f: o16 mov gs,ax
pf_at 0x10
l_kernel_00020342: o16 mov ss,ax
pf_at 0x13
l_kernel_00020345: mov eax,[0x20c02]
pf_at 0x18
l_kernel_0002034a: test eax,0x80000000
pf_at 0x1d
l_kernel_0002034f: jz short 0x2036c
pf_at 0x1f
l_kernel_00020351: mov ecx,cr4
pf_at 0x22
l_kernel_00020354: or ecx,byte +0x20
pf_at 0x25
l_kernel_00020357: mov cr4,ecx
pf_at 0x28
l_kernel_0002035a: mov ecx,cr3
pf_at 0x2b
l_kernel_0002035d: mov cr3,ecx
pf_at 0x2e
l_kernel_00020360: mov ecx,cr0
pf_at 0x31
l_kernel_00020363: or ecx,0x80000000
pf_at 0x37
l_kernel_00020369: mov cr0,ecx
pf_at 0x3a
l_kernel_0002036c: mov esp,[dword 0x20bfe]
pf_at 0x40
l_kernel_00020372: mov eax,[0x20c36]
pf_at 0x45
l_kernel_00020377: pop ebp
pf_at 0x46
l_kernel_00020378: pop edi
pf_at 0x47
l_kernel_00020379: pop esi
pf_at 0x48
l_kernel_0002037a: pop ebx
pf_at 0x49
l_kernel_0002037b: popf
pf_at 0x4a
l_kernel_0002037c: ret
pf_at 0x4b
l_kernel_0002037d: pushf
pf_at 0x4c
l_kernel_0002037e: push ebx
pf_at 0x4d
l_kernel_0002037f: push esi
pf_at 0x4e
l_kernel_00020380: push edi
pf_at 0x4f
l_kernel_00020381: push ebp
pf_at 0x50
l_kernel_00020382: mov [dword 0x20bfe],esp
pf_at 0x56
l_kernel_00020388: mov dword [dword 0x20c3e],0x0
pf_at 0x60
l_kernel_00020392: mov dword [dword 0x20c32],0x0
pf_at 0x6a
l_kernel_0002039c: cli
pf_at 0x6b
l_kernel_0002039d: lgdt [dword 0x20bf8]
pf_at 0x72
l_kernel_000203a4: jmp word 0x18:0x3aa

section part8 start=0x3aa vstart=0x3aa align=1
bits 16
pf_at 0x0
l_kernel_000003aa: mov ax,0x20
pf_at 0x3
l_kernel_000003ad: mov ds,ax
pf_at 0x5
l_kernel_000003af: mov es,ax
pf_at 0x7
l_kernel_000003b1: mov fs,ax
pf_at 0x9
l_kernel_000003b3: mov gs,ax
pf_at 0xb
l_kernel_000003b5: mov ss,ax
pf_at 0xd
l_kernel_000003b7: mov sp,0xfffc
pf_at 0x10
l_kernel_000003ba: mov eax,cr0
pf_at 0x13
l_kernel_000003bd: mov [0xc02],eax
pf_at 0x17
l_kernel_000003c1: test eax,0x80000000
pf_at 0x1d
l_kernel_000003c7: jz short 0x3d2
pf_at 0x1f
l_kernel_000003c9: and eax,0x7fffffff
pf_at 0x25
l_kernel_000003cf: mov cr0,eax
pf_at 0x28
l_kernel_000003d2: and al,0xfe
pf_at 0x2a
l_kernel_000003d4: mov cr0,eax
pf_at 0x2d
l_kernel_000003d7: jmp 0x2000:0x3dc
pf_at 0x32
l_kernel_000003dc: mov ax,0x2000
pf_at 0x35
l_kernel_000003df: mov ds,ax
pf_at 0x37
l_kernel_000003e1: mov es,ax
pf_at 0x39
l_kernel_000003e3: mov fs,ax
pf_at 0x3b
l_kernel_000003e5: mov gs,ax
pf_at 0x3d
l_kernel_000003e7: mov ax,0x800
pf_at 0x40
l_kernel_000003ea: mov ss,ax
pf_at 0x42
l_kernel_000003ec: mov sp,0xfffc
pf_at 0x45
l_kernel_000003ef: sti
pf_at 0x46
l_kernel_000003f0: mov ax,0x1000
pf_at 0x49
l_kernel_000003f3: mov ds,ax
pf_at 0x4b
l_kernel_000003f5: mov es,ax
pf_at 0x4d
l_kernel_000003f7: mov di,0x7d00
pf_at 0x50
l_kernel_000003fa: mov cx,0xf
pf_at 0x53
l_kernel_000003fd: xor ax,ax
pf_at 0x55
l_kernel_000003ff: rep stosw
pf_at 0x57
l_kernel_00000401: mov word [0x7d00],0x1e
pf_at 0x5d
l_kernel_00000407: mov dl,[cs:0xc2e]
pf_at 0x62
l_kernel_0000040c: mov si,0x7d00
pf_at 0x65
l_kernel_0000040f: mov ah,0x48
pf_at 0x67
l_kernel_00000411: int 0x13
pf_at 0x69
l_kernel_00000413: jc short 0x43a
pf_at 0x6b
l_kernel_00000415: mov eax,[0x7d10]
pf_at 0x6f
l_kernel_00000419: mov edx,[0x7d14]
pf_at 0x74
l_kernel_0000041e: test edx,edx
pf_at 0x77
l_kernel_00000421: jz short 0x429
pf_at 0x79
l_kernel_00000423: mov eax,0xffffffff
pf_at 0x7f
l_kernel_00000429: mov [cs:0xc32],eax
pf_at 0x84
l_kernel_0000042e: mov dword [cs:0xc3e],0x1
pf_at 0x8e
l_kernel_00000438: jmp short 0x44e
pf_at 0x90
l_kernel_0000043a: mov dword [cs:0xc3e],0x0
pf_at 0x9a
l_kernel_00000444: mov dword [cs:0xc32],0x0
pf_at 0xa4
l_kernel_0000044e: cli
pf_at 0xa5
l_kernel_0000044f: lgdt [cs:0xbf8]
pf_at 0xab
l_kernel_00000455: mov eax,cr0
pf_at 0xae
l_kernel_00000458: or al,0x1
pf_at 0xb0
l_kernel_0000045a: mov cr0,eax
pf_at 0xb3
l_kernel_0000045d: jmp dword 0x8:0x20465

section part9 start=0x465 vstart=0x20465 align=1
bits 32
pf_at 0x0
l_kernel_00020465: mov ax,0x10
pf_at 0x4
l_kernel_00020469: o16 mov ds,ax
pf_at 0x7
l_kernel_0002046c: o16 mov es,ax
pf_at 0xa
l_kernel_0002046f: o16 mov fs,ax
pf_at 0xd
l_kernel_00020472: o16 mov gs,ax
pf_at 0x10
l_kernel_00020475: o16 mov ss,ax
pf_at 0x13
l_kernel_00020478: mov eax,[0x20c02]
pf_at 0x18
l_kernel_0002047d: test eax,0x80000000
pf_at 0x1d
l_kernel_00020482: jz short 0x2049f
pf_at 0x1f
l_kernel_00020484: mov ecx,cr4
pf_at 0x22
l_kernel_00020487: or ecx,byte +0x20
pf_at 0x25
l_kernel_0002048a: mov cr4,ecx
pf_at 0x28
l_kernel_0002048d: mov ecx,cr3
pf_at 0x2b
l_kernel_00020490: mov cr3,ecx
pf_at 0x2e
l_kernel_00020493: mov ecx,cr0
pf_at 0x31
l_kernel_00020496: or ecx,0x80000000
pf_at 0x37
l_kernel_0002049c: mov cr0,ecx
pf_at 0x3a
l_kernel_0002049f: mov esp,[dword 0x20bfe]
pf_at 0x40
l_kernel_000204a5: mov eax,[0x20c3e]
pf_at 0x45
l_kernel_000204aa: pop ebp
pf_at 0x46
l_kernel_000204ab: pop edi
pf_at 0x47
l_kernel_000204ac: pop esi
pf_at 0x48
l_kernel_000204ad: pop ebx
pf_at 0x49
l_kernel_000204ae: popf
pf_at 0x4a
l_kernel_000204af: ret
pf_at 0x4b
l_kernel_000204b0: pushf
pf_at 0x4c
l_kernel_000204b1: push ebx
pf_at 0x4d
l_kernel_000204b2: push esi
pf_at 0x4e
l_kernel_000204b3: push edi
pf_at 0x4f
l_kernel_000204b4: push ebp
pf_at 0x50
l_kernel_000204b5: mov [dword 0x20bfe],esp
pf_at 0x56
l_kernel_000204bb: mov dword [dword 0x20c3a],0x0
pf_at 0x60
l_kernel_000204c5: cli
pf_at 0x61
l_kernel_000204c6: lgdt [dword 0x20bf8]
pf_at 0x68
l_kernel_000204cd: jmp word 0x18:0x4d3

section part10 start=0x4d3 vstart=0x4d3 align=1
bits 16
pf_at 0x0
l_kernel_000004d3: mov ax,0x20
pf_at 0x3
l_kernel_000004d6: mov ds,ax
pf_at 0x5
l_kernel_000004d8: mov es,ax
pf_at 0x7
l_kernel_000004da: mov fs,ax
pf_at 0x9
l_kernel_000004dc: mov gs,ax
pf_at 0xb
l_kernel_000004de: mov ss,ax
pf_at 0xd
l_kernel_000004e0: mov sp,0xfffc
pf_at 0x10
l_kernel_000004e3: mov eax,cr0
pf_at 0x13
l_kernel_000004e6: mov [0xc02],eax
pf_at 0x17
l_kernel_000004ea: test eax,0x80000000
pf_at 0x1d
l_kernel_000004f0: jz short 0x4fb
pf_at 0x1f
l_kernel_000004f2: and eax,0x7fffffff
pf_at 0x25
l_kernel_000004f8: mov cr0,eax
pf_at 0x28
l_kernel_000004fb: and al,0xfe
pf_at 0x2a
l_kernel_000004fd: mov cr0,eax
pf_at 0x2d
l_kernel_00000500: jmp 0x2000:0x505
pf_at 0x32
l_kernel_00000505: mov ax,0x2000
pf_at 0x35
l_kernel_00000508: mov ds,ax
pf_at 0x37
l_kernel_0000050a: mov es,ax
pf_at 0x39
l_kernel_0000050c: mov fs,ax
pf_at 0x3b
l_kernel_0000050e: mov gs,ax
pf_at 0x3d
l_kernel_00000510: mov ax,0x800
pf_at 0x40
l_kernel_00000513: mov ss,ax
pf_at 0x42
l_kernel_00000515: mov sp,0xfffc
pf_at 0x45
l_kernel_00000518: sti
pf_at 0x46
l_kernel_00000519: mov cx,[cs:0xc2a]
pf_at 0x4b
l_kernel_0000051e: test cx,cx
pf_at 0x4d
l_kernel_00000520: jz short 0x566
pf_at 0x4f
l_kernel_00000522: mov ax,0x1000
pf_at 0x52
l_kernel_00000525: mov ds,ax
pf_at 0x54
l_kernel_00000527: mov si,0x7f00
pf_at 0x57
l_kernel_0000052a: mov word [si],0x10
pf_at 0x5b
l_kernel_0000052e: mov [si+0x2],cx
pf_at 0x5e
l_kernel_00000531: mov word [si+0x4],0x0
pf_at 0x63
l_kernel_00000536: mov word [si+0x6],0x1000
pf_at 0x68
l_kernel_0000053b: mov eax,[cs:0xc26]
pf_at 0x6d
l_kernel_00000540: mov [si+0x8],eax
pf_at 0x71
l_kernel_00000544: mov dword [si+0xc],0x0
pf_at 0x79
l_kernel_0000054c: mov dl,[cs:0xc22]
pf_at 0x7e
l_kernel_00000551: mov ah,0x43
pf_at 0x80
l_kernel_00000553: int 0x13
pf_at 0x82
l_kernel_00000555: jnc short 0x566
pf_at 0x84
l_kernel_00000557: xor ah,ah
pf_at 0x86
l_kernel_00000559: int 0x13
pf_at 0x88
l_kernel_0000055b: mov dl,[cs:0xc22]
pf_at 0x8d
l_kernel_00000560: mov ah,0x43
pf_at 0x8f
l_kernel_00000562: int 0x13
pf_at 0x91
l_kernel_00000564: jc short 0x572
pf_at 0x93
l_kernel_00000566: mov dword [cs:0xc3a],0x1
pf_at 0x9d
l_kernel_00000570: jmp short 0x57c
pf_at 0x9f
l_kernel_00000572: mov dword [cs:0xc3a],0x0
pf_at 0xa9
l_kernel_0000057c: cli
pf_at 0xaa
l_kernel_0000057d: lgdt [cs:0xbf8]
pf_at 0xb0
l_kernel_00000583: mov eax,cr0
pf_at 0xb3
l_kernel_00000586: or al,0x1
pf_at 0xb5
l_kernel_00000588: mov cr0,eax
pf_at 0xb8
l_kernel_0000058b: jmp dword 0x8:0x20593

section part11 start=0x593 vstart=0x20593 align=1
bits 32
pf_at 0x0
l_kernel_00020593: mov ax,0x10
pf_at 0x4
l_kernel_00020597: o16 mov ds,ax
pf_at 0x7
l_kernel_0002059a: o16 mov es,ax
pf_at 0xa
l_kernel_0002059d: o16 mov fs,ax
pf_at 0xd
l_kernel_000205a0: o16 mov gs,ax
pf_at 0x10
l_kernel_000205a3: o16 mov ss,ax
pf_at 0x13
l_kernel_000205a6: mov eax,[0x20c02]
pf_at 0x18
l_kernel_000205ab: test eax,0x80000000
pf_at 0x1d
l_kernel_000205b0: jz short 0x205cd
pf_at 0x1f
l_kernel_000205b2: mov ecx,cr4
pf_at 0x22
l_kernel_000205b5: or ecx,byte +0x20
pf_at 0x25
l_kernel_000205b8: mov cr4,ecx
pf_at 0x28
l_kernel_000205bb: mov ecx,cr3
pf_at 0x2b
l_kernel_000205be: mov cr3,ecx
pf_at 0x2e
l_kernel_000205c1: mov ecx,cr0
pf_at 0x31
l_kernel_000205c4: or ecx,0x80000000
pf_at 0x37
l_kernel_000205ca: mov cr0,ecx
pf_at 0x3a
l_kernel_000205cd: mov esp,[dword 0x20bfe]
pf_at 0x40
l_kernel_000205d3: mov eax,[0x20c3a]
pf_at 0x45
l_kernel_000205d8: pop ebp
pf_at 0x46
l_kernel_000205d9: pop edi
pf_at 0x47
l_kernel_000205da: pop esi
pf_at 0x48
l_kernel_000205db: pop ebx
pf_at 0x49
l_kernel_000205dc: popf
pf_at 0x4a
l_kernel_000205dd: ret
pf_at 0x4b
l_kernel_000205de: pushf
pf_at 0x4c
l_kernel_000205df: push ebx
pf_at 0x4d
l_kernel_000205e0: push esi
pf_at 0x4e
l_kernel_000205e1: push edi
pf_at 0x4f
l_kernel_000205e2: push ebp
pf_at 0x50
l_kernel_000205e3: mov [dword 0x20bfe],esp
pf_at 0x56
l_kernel_000205e9: cli
pf_at 0x57
l_kernel_000205ea: lgdt [dword 0x20bf8]
pf_at 0x5e
l_kernel_000205f1: jmp word 0x18:0x5f7

section part12 start=0x5f7 vstart=0x5f7 align=1
bits 16
pf_at 0x0
l_kernel_000005f7: mov ax,0x20
pf_at 0x3
l_kernel_000005fa: mov ds,ax
pf_at 0x5
l_kernel_000005fc: mov es,ax
pf_at 0x7
l_kernel_000005fe: mov fs,ax
pf_at 0x9
l_kernel_00000600: mov gs,ax
pf_at 0xb
l_kernel_00000602: mov ss,ax
pf_at 0xd
l_kernel_00000604: mov sp,0xfffc
pf_at 0x10
l_kernel_00000607: mov eax,cr0
pf_at 0x13
l_kernel_0000060a: mov [0xc02],eax
pf_at 0x17
l_kernel_0000060e: test eax,0x80000000
pf_at 0x1d
l_kernel_00000614: jz short 0x61f
pf_at 0x1f
l_kernel_00000616: and eax,0x7fffffff
pf_at 0x25
l_kernel_0000061c: mov cr0,eax
pf_at 0x28
l_kernel_0000061f: and al,0xfe
pf_at 0x2a
l_kernel_00000621: mov cr0,eax
pf_at 0x2d
l_kernel_00000624: jmp 0x2000:0x629
pf_at 0x32
l_kernel_00000629: mov ax,0x2000
pf_at 0x35
l_kernel_0000062c: mov ds,ax
pf_at 0x37
l_kernel_0000062e: mov es,ax
pf_at 0x39
l_kernel_00000630: mov fs,ax
pf_at 0x3b
l_kernel_00000632: mov gs,ax
pf_at 0x3d
l_kernel_00000634: mov ax,0x800
pf_at 0x40
l_kernel_00000637: mov ss,ax
pf_at 0x42
l_kernel_00000639: mov sp,0xfffc
pf_at 0x45
l_kernel_0000063c: sti
pf_at 0x46
l_kernel_0000063d: mov ax,0x13
pf_at 0x49
l_kernel_00000640: int 0x10
pf_at 0x4b
l_kernel_00000642: cli
pf_at 0x4c
l_kernel_00000643: lgdt [cs:0xbf8]
pf_at 0x52
l_kernel_00000649: mov eax,cr0
pf_at 0x55
l_kernel_0000064c: or al,0x1
pf_at 0x57
l_kernel_0000064e: mov cr0,eax
pf_at 0x5a
l_kernel_00000651: jmp dword 0x8:0x20659

section part13 start=0x659 vstart=0x20659 align=1
bits 32
pf_at 0x0
l_kernel_00020659: mov ax,0x10
pf_at 0x4
l_kernel_0002065d: o16 mov ds,ax
pf_at 0x7
l_kernel_00020660: o16 mov es,ax
pf_at 0xa
l_kernel_00020663: o16 mov fs,ax
pf_at 0xd
l_kernel_00020666: o16 mov gs,ax
pf_at 0x10
l_kernel_00020669: o16 mov ss,ax
pf_at 0x13
l_kernel_0002066c: mov eax,[0x20c02]
pf_at 0x18
l_kernel_00020671: test eax,0x80000000
pf_at 0x1d
l_kernel_00020676: jz short 0x20693
pf_at 0x1f
l_kernel_00020678: mov ecx,cr4
pf_at 0x22
l_kernel_0002067b: or ecx,byte +0x20
pf_at 0x25
l_kernel_0002067e: mov cr4,ecx
pf_at 0x28
l_kernel_00020681: mov ecx,cr3
pf_at 0x2b
l_kernel_00020684: mov cr3,ecx
pf_at 0x2e
l_kernel_00020687: mov ecx,cr0
pf_at 0x31
l_kernel_0002068a: or ecx,0x80000000
pf_at 0x37
l_kernel_00020690: mov cr0,ecx
pf_at 0x3a
l_kernel_00020693: mov esp,[dword 0x20bfe]
pf_at 0x40
l_kernel_00020699: pop ebp
pf_at 0x41
l_kernel_0002069a: pop edi
pf_at 0x42
l_kernel_0002069b: pop esi
pf_at 0x43
l_kernel_0002069c: pop ebx
pf_at 0x44
l_kernel_0002069d: popf
pf_at 0x45
l_kernel_0002069e: ret
pf_at 0x46
l_kernel_0002069f: pushf
pf_at 0x47
l_kernel_000206a0: push ebx
pf_at 0x48
l_kernel_000206a1: push esi
pf_at 0x49
l_kernel_000206a2: push edi
pf_at 0x4a
l_kernel_000206a3: push ebp
pf_at 0x4b
l_kernel_000206a4: mov eax,[esp+0x18]
pf_at 0x4f
l_kernel_000206a8: mov [dword 0x20bfe],esp
pf_at 0x55
l_kernel_000206ae: mov [0x20c46],eax
pf_at 0x5a
l_kernel_000206b3: mov dword [dword 0x20c4a],0x0
pf_at 0x64
l_kernel_000206bd: cli
pf_at 0x65
l_kernel_000206be: lgdt [dword 0x20bf8]
pf_at 0x6c
l_kernel_000206c5: jmp word 0x18:0x6cb

section part14 start=0x6cb vstart=0x6cb align=1
bits 16
pf_at 0x0
l_kernel_000006cb: mov ax,0x20
pf_at 0x3
l_kernel_000006ce: mov ds,ax
pf_at 0x5
l_kernel_000006d0: mov es,ax
pf_at 0x7
l_kernel_000006d2: mov fs,ax
pf_at 0x9
l_kernel_000006d4: mov gs,ax
pf_at 0xb
l_kernel_000006d6: mov ss,ax
pf_at 0xd
l_kernel_000006d8: mov sp,0xfffc
pf_at 0x10
l_kernel_000006db: mov eax,cr0
pf_at 0x13
l_kernel_000006de: mov [0xc02],eax
pf_at 0x17
l_kernel_000006e2: test eax,0x80000000
pf_at 0x1d
l_kernel_000006e8: jz short 0x6f3
pf_at 0x1f
l_kernel_000006ea: and eax,0x7fffffff
pf_at 0x25
l_kernel_000006f0: mov cr0,eax
pf_at 0x28
l_kernel_000006f3: and al,0xfe
pf_at 0x2a
l_kernel_000006f5: mov cr0,eax
pf_at 0x2d
l_kernel_000006f8: jmp 0x2000:0x6fd
pf_at 0x32
l_kernel_000006fd: mov ax,0x2000
pf_at 0x35
l_kernel_00000700: mov ds,ax
pf_at 0x37
l_kernel_00000702: mov es,ax
pf_at 0x39
l_kernel_00000704: mov fs,ax
pf_at 0x3b
l_kernel_00000706: mov gs,ax
pf_at 0x3d
l_kernel_00000708: mov ax,0x800
pf_at 0x40
l_kernel_0000070b: mov ss,ax
pf_at 0x42
l_kernel_0000070d: mov sp,0xfffc
pf_at 0x45
l_kernel_00000710: sti
pf_at 0x46
l_kernel_00000711: mov eax,[cs:0xc46]
pf_at 0x4b
l_kernel_00000716: mov dx,ax
pf_at 0x4d
l_kernel_00000718: shr eax,byte 0x10
pf_at 0x51
l_kernel_0000071c: mov cx,ax
pf_at 0x53
l_kernel_0000071e: mov ax,0x8600
pf_at 0x56
l_kernel_00000721: int 0x15
pf_at 0x58
l_kernel_00000723: jc short 0x731
pf_at 0x5a
l_kernel_00000725: mov dword [cs:0xc4a],0x1
pf_at 0x64
l_kernel_0000072f: jmp short 0x73b
pf_at 0x66
l_kernel_00000731: mov dword [cs:0xc4a],0x0
pf_at 0x70
l_kernel_0000073b: cli
pf_at 0x71
l_kernel_0000073c: lgdt [cs:0xbf8]
pf_at 0x77
l_kernel_00000742: mov eax,cr0
pf_at 0x7a
l_kernel_00000745: or al,0x1
pf_at 0x7c
l_kernel_00000747: mov cr0,eax
pf_at 0x7f
l_kernel_0000074a: jmp dword 0x8:0x20752

section part15 start=0x752 vstart=0x20752 align=1
bits 32
pf_at 0x0
l_kernel_00020752: mov ax,0x10
pf_at 0x4
l_kernel_00020756: o16 mov ds,ax
pf_at 0x7
l_kernel_00020759: o16 mov es,ax
pf_at 0xa
l_kernel_0002075c: o16 mov fs,ax
pf_at 0xd
l_kernel_0002075f: o16 mov gs,ax
pf_at 0x10
l_kernel_00020762: o16 mov ss,ax
pf_at 0x13
l_kernel_00020765: mov eax,[0x20c02]
pf_at 0x18
l_kernel_0002076a: test eax,0x80000000
pf_at 0x1d
l_kernel_0002076f: jz short 0x2078c
pf_at 0x1f
l_kernel_00020771: mov ecx,cr4
pf_at 0x22
l_kernel_00020774: or ecx,byte +0x20
pf_at 0x25
l_kernel_00020777: mov cr4,ecx
pf_at 0x28
l_kernel_0002077a: mov ecx,cr3
pf_at 0x2b
l_kernel_0002077d: mov cr3,ecx
pf_at 0x2e
l_kernel_00020780: mov ecx,cr0
pf_at 0x31
l_kernel_00020783: or ecx,0x80000000
pf_at 0x37
l_kernel_00020789: mov cr0,ecx
pf_at 0x3a
l_kernel_0002078c: mov esp,[dword 0x20bfe]
pf_at 0x40
l_kernel_00020792: mov eax,[0x20c4a]
pf_at 0x45
l_kernel_00020797: pop ebp
pf_at 0x46
l_kernel_00020798: pop edi
pf_at 0x47
l_kernel_00020799: pop esi
pf_at 0x48
l_kernel_0002079a: pop ebx
pf_at 0x49
l_kernel_0002079b: popf
pf_at 0x4a
l_kernel_0002079c: ret
pf_at 0x4b
l_kernel_0002079d: pushf
pf_at 0x4c
l_kernel_0002079e: push ebx
pf_at 0x4d
l_kernel_0002079f: push esi
pf_at 0x4e
l_kernel_000207a0: push edi
pf_at 0x4f
l_kernel_000207a1: push ebp
pf_at 0x50
l_kernel_000207a2: mov [dword 0x20bfe],esp
pf_at 0x56
l_kernel_000207a8: cli
pf_at 0x57
l_kernel_000207a9: lgdt [dword 0x20bf8]
pf_at 0x5e
l_kernel_000207b0: jmp word 0x18:0x7b6

section part16 start=0x7b6 vstart=0x7b6 align=1
bits 16
pf_at 0x0
l_kernel_000007b6: mov ax,0x20
pf_at 0x3
l_kernel_000007b9: mov ds,ax
pf_at 0x5
l_kernel_000007bb: mov es,ax
pf_at 0x7
l_kernel_000007bd: mov fs,ax
pf_at 0x9
l_kernel_000007bf: mov gs,ax
pf_at 0xb
l_kernel_000007c1: mov ss,ax
pf_at 0xd
l_kernel_000007c3: mov sp,0xfffc
pf_at 0x10
l_kernel_000007c6: mov eax,cr0
pf_at 0x13
l_kernel_000007c9: mov [0xc02],eax
pf_at 0x17
l_kernel_000007cd: test eax,0x80000000
pf_at 0x1d
l_kernel_000007d3: jz short 0x7de
pf_at 0x1f
l_kernel_000007d5: and eax,0x7fffffff
pf_at 0x25
l_kernel_000007db: mov cr0,eax
pf_at 0x28
l_kernel_000007de: and al,0xfe
pf_at 0x2a
l_kernel_000007e0: mov cr0,eax
pf_at 0x2d
l_kernel_000007e3: jmp 0x2000:0x7e8
pf_at 0x32
l_kernel_000007e8: mov ax,0x2000
pf_at 0x35
l_kernel_000007eb: mov ds,ax
pf_at 0x37
l_kernel_000007ed: mov es,ax
pf_at 0x39
l_kernel_000007ef: mov fs,ax
pf_at 0x3b
l_kernel_000007f1: mov gs,ax
pf_at 0x3d
l_kernel_000007f3: mov ax,0x800
pf_at 0x40
l_kernel_000007f6: mov ss,ax
pf_at 0x42
l_kernel_000007f8: mov sp,0xfffc
pf_at 0x45
l_kernel_000007fb: sti
pf_at 0x46
l_kernel_000007fc: mov ax,0x3
pf_at 0x49
l_kernel_000007ff: int 0x10
pf_at 0x4b
l_kernel_00000801: cli
pf_at 0x4c
l_kernel_00000802: lgdt [cs:0xbf8]
pf_at 0x52
l_kernel_00000808: mov eax,cr0
pf_at 0x55
l_kernel_0000080b: or al,0x1
pf_at 0x57
l_kernel_0000080d: mov cr0,eax
pf_at 0x5a
l_kernel_00000810: jmp dword 0x8:0x20818

section part17 start=0x818 vstart=0x20818 align=1
bits 32
pf_at 0x0
l_kernel_00020818: mov ax,0x10
pf_at 0x4
l_kernel_0002081c: o16 mov ds,ax
pf_at 0x7
l_kernel_0002081f: o16 mov es,ax
pf_at 0xa
l_kernel_00020822: o16 mov fs,ax
pf_at 0xd
l_kernel_00020825: o16 mov gs,ax
pf_at 0x10
l_kernel_00020828: o16 mov ss,ax
pf_at 0x13
l_kernel_0002082b: mov eax,[0x20c02]
pf_at 0x18
l_kernel_00020830: test eax,0x80000000
pf_at 0x1d
l_kernel_00020835: jz short 0x20852
pf_at 0x1f
l_kernel_00020837: mov ecx,cr4
pf_at 0x22
l_kernel_0002083a: or ecx,byte +0x20
pf_at 0x25
l_kernel_0002083d: mov cr4,ecx
pf_at 0x28
l_kernel_00020840: mov ecx,cr3
pf_at 0x2b
l_kernel_00020843: mov cr3,ecx
pf_at 0x2e
l_kernel_00020846: mov ecx,cr0
pf_at 0x31
l_kernel_00020849: or ecx,0x80000000
pf_at 0x37
l_kernel_0002084f: mov cr0,ecx
pf_at 0x3a
l_kernel_00020852: mov esp,[dword 0x20bfe]
pf_at 0x40
l_kernel_00020858: pop ebp
pf_at 0x41
l_kernel_00020859: pop edi
pf_at 0x42
l_kernel_0002085a: pop esi
pf_at 0x43
l_kernel_0002085b: pop ebx
pf_at 0x44
l_kernel_0002085c: popf
pf_at 0x45
l_kernel_0002085d: ret
pf_at 0x46
l_kernel_0002085e: pushf
pf_at 0x47
l_kernel_0002085f: push ebx
pf_at 0x48
l_kernel_00020860: push esi
pf_at 0x49
l_kernel_00020861: push edi
pf_at 0x4a
l_kernel_00020862: push ebp
pf_at 0x4b
l_kernel_00020863: mov [dword 0x20bfe],esp
pf_at 0x51
l_kernel_00020869: mov dword [dword 0x20c42],0x0
pf_at 0x5b
l_kernel_00020873: mov dword [dword 0x20c58],0x0
pf_at 0x65
l_kernel_0002087d: mov dword [dword 0x20c5c],0x0
pf_at 0x6f
l_kernel_00020887: mov dword [dword 0x20c60],0x0
pf_at 0x79
l_kernel_00020891: mov dword [dword 0x20c64],0x0
pf_at 0x83
l_kernel_0002089b: mov dword [dword 0x20c68],0x0
pf_at 0x8d
l_kernel_000208a5: mov dword [dword 0x20c6c],0x0
pf_at 0x97
l_kernel_000208af: mov dword [dword 0x20c70],0x0
pf_at 0xa1
l_kernel_000208b9: mov dword [dword 0x20c74],0x0
pf_at 0xab
l_kernel_000208c3: mov dword [dword 0x20c78],0x0
pf_at 0xb5
l_kernel_000208cd: mov dword [dword 0x20c7c],0x0
pf_at 0xbf
l_kernel_000208d7: mov dword [dword 0x20c80],0x0
pf_at 0xc9
l_kernel_000208e1: cli
pf_at 0xca
l_kernel_000208e2: lgdt [dword 0x20bf8]
pf_at 0xd1
l_kernel_000208e9: jmp word 0x18:0x8ef

section part18 start=0x8ef vstart=0x8ef align=1
bits 16
pf_at 0x0
l_kernel_000008ef: mov ax,0x20
pf_at 0x3
l_kernel_000008f2: mov ds,ax
pf_at 0x5
l_kernel_000008f4: mov es,ax
pf_at 0x7
l_kernel_000008f6: mov fs,ax
pf_at 0x9
l_kernel_000008f8: mov gs,ax
pf_at 0xb
l_kernel_000008fa: mov ss,ax
pf_at 0xd
l_kernel_000008fc: mov sp,0xfffc
pf_at 0x10
l_kernel_000008ff: mov eax,cr0
pf_at 0x13
l_kernel_00000902: mov [0xc02],eax
pf_at 0x17
l_kernel_00000906: test eax,0x80000000
pf_at 0x1d
l_kernel_0000090c: jz short 0x917
pf_at 0x1f
l_kernel_0000090e: and eax,0x7fffffff
pf_at 0x25
l_kernel_00000914: mov cr0,eax
pf_at 0x28
l_kernel_00000917: and al,0xfe
pf_at 0x2a
l_kernel_00000919: mov cr0,eax
pf_at 0x2d
l_kernel_0000091c: jmp 0x2000:0x921
pf_at 0x32
l_kernel_00000921: mov ax,0x2000
pf_at 0x35
l_kernel_00000924: mov ds,ax
pf_at 0x37
l_kernel_00000926: mov es,ax
pf_at 0x39
l_kernel_00000928: mov fs,ax
pf_at 0x3b
l_kernel_0000092a: mov gs,ax
pf_at 0x3d
l_kernel_0000092c: mov ax,0x800
pf_at 0x40
l_kernel_0000092f: mov ss,ax
pf_at 0x42
l_kernel_00000931: mov sp,0xfffc
pf_at 0x45
l_kernel_00000934: sti
pf_at 0x46
l_kernel_00000935: mov ax,0x1000
pf_at 0x49
l_kernel_00000938: mov es,ax
pf_at 0x4b
l_kernel_0000093a: mov di,0x7c00
pf_at 0x4e
l_kernel_0000093d: mov cx,0x100
pf_at 0x51
l_kernel_00000940: xor ax,ax
pf_at 0x53
l_kernel_00000942: rep stosw
pf_at 0x55
l_kernel_00000944: mov di,0x7c00
pf_at 0x58
l_kernel_00000947: mov dword [es:di],0x32454256
pf_at 0x60
l_kernel_0000094f: mov ax,0x4f00
pf_at 0x63
l_kernel_00000952: int 0x10
pf_at 0x65
l_kernel_00000954: cmp ax,byte +0x4f
pf_at 0x68
l_kernel_00000957: jnz near 0xb60
pf_at 0x6c
l_kernel_0000095b: mov ax,[es:0x7c0e]
pf_at 0x70
l_kernel_0000095f: mov [0xc4e],ax
pf_at 0x73
l_kernel_00000962: mov ax,[es:0x7c10]
pf_at 0x77
l_kernel_00000966: mov [0xc50],ax
pf_at 0x7a
l_kernel_00000969: mov word [0xc52],0xffff
pf_at 0x80
l_kernel_0000096f: mov dword [0xc54],0x0
pf_at 0x89
l_kernel_00000978: mov ax,[cs:0xc50]
pf_at 0x8d
l_kernel_0000097c: mov ds,ax
pf_at 0x8f
l_kernel_0000097e: mov si,[cs:0xc4e]
pf_at 0x94
l_kernel_00000983: mov cx,[si]
pf_at 0x96
l_kernel_00000985: cmp cx,byte -0x1
pf_at 0x99
l_kernel_00000988: jz near 0xa46
pf_at 0x9d
l_kernel_0000098c: mov dx,cx
pf_at 0x9f
l_kernel_0000098e: add si,byte +0x2
pf_at 0xa2
l_kernel_00000991: mov [cs:0xc4e],si
pf_at 0xa7
l_kernel_00000996: mov ax,0x2000
pf_at 0xaa
l_kernel_00000999: mov ds,ax
pf_at 0xac
l_kernel_0000099b: mov ax,0x1000
pf_at 0xaf
l_kernel_0000099e: mov es,ax
pf_at 0xb1
l_kernel_000009a0: mov di,0x7e00
pf_at 0xb4
l_kernel_000009a3: mov cx,0x80
pf_at 0xb7
l_kernel_000009a6: xor ax,ax
pf_at 0xb9
l_kernel_000009a8: rep stosw
pf_at 0xbb
l_kernel_000009aa: mov di,0x7e00
pf_at 0xbe
l_kernel_000009ad: mov cx,dx
pf_at 0xc0
l_kernel_000009af: mov ax,0x4f01
pf_at 0xc3
l_kernel_000009b2: int 0x10
pf_at 0xc5
l_kernel_000009b4: cmp ax,byte +0x4f
pf_at 0xc8
l_kernel_000009b7: jnz short 0x978
pf_at 0xca
l_kernel_000009b9: mov ax,0x1000
pf_at 0xcd
l_kernel_000009bc: mov ds,ax
pf_at 0xcf
l_kernel_000009be: mov ax,[0x7e00]
pf_at 0xd2
l_kernel_000009c1: test ax,0x1
pf_at 0xd5
l_kernel_000009c4: jz short 0x978
pf_at 0xd7
l_kernel_000009c6: test ax,0x10
pf_at 0xda
l_kernel_000009c9: jz short 0x978
pf_at 0xdc
l_kernel_000009cb: test ax,0x80
pf_at 0xdf
l_kernel_000009ce: jz short 0x978
pf_at 0xe1
l_kernel_000009d0: cmp word [0x7e12],0x280
pf_at 0xe7
l_kernel_000009d6: jc short 0x978
pf_at 0xe9
l_kernel_000009d8: cmp word [0x7e14],0x1e0
pf_at 0xef
l_kernel_000009de: jc short 0x978
pf_at 0xf1
l_kernel_000009e0: mov al,[0x7e19]
pf_at 0xf4
l_kernel_000009e3: cmp al,0xf
pf_at 0xf6
l_kernel_000009e5: jz short 0x9f3
pf_at 0xf8
l_kernel_000009e7: cmp al,0x10
pf_at 0xfa
l_kernel_000009e9: jz short 0x9f3
pf_at 0xfc
l_kernel_000009eb: cmp al,0x18
pf_at 0xfe
l_kernel_000009ed: jz short 0x9f3
pf_at 0x100
l_kernel_000009ef: cmp al,0x20
pf_at 0x102
l_kernel_000009f1: jnz short 0x978
pf_at 0x104
l_kernel_000009f3: cmp byte [0x7e1b],0x6
pf_at 0x109
l_kernel_000009f8: jnz near 0x978
pf_at 0x10d
l_kernel_000009fc: xor eax,eax
pf_at 0x110
l_kernel_000009ff: mov al,[0x7e19]
pf_at 0x113
l_kernel_00000a02: shl eax,byte 0x18
pf_at 0x117
l_kernel_00000a06: movzx ebx,word [0x7e12]
pf_at 0x11d
l_kernel_00000a0c: movzx ecx,word [0x7e14]
pf_at 0x123
l_kernel_00000a12: imul ebx,ecx
pf_at 0x127
l_kernel_00000a16: add eax,ebx
pf_at 0x12a
l_kernel_00000a19: cmp word [0x7e12],0x500
pf_at 0x130
l_kernel_00000a1f: jnz short 0xa2f
pf_at 0x132
l_kernel_00000a21: cmp word [0x7e14],0x320
pf_at 0x138
l_kernel_00000a27: jnz short 0xa2f
pf_at 0x13a
l_kernel_00000a29: or eax,0x40000000
pf_at 0x140
l_kernel_00000a2f: cmp eax,[cs:0xc54]
pf_at 0x146
l_kernel_00000a35: jna near 0x978
pf_at 0x14a
l_kernel_00000a39: mov [cs:0xc54],eax
pf_at 0x14f
l_kernel_00000a3e: mov [cs:0xc52],dx
pf_at 0x154
l_kernel_00000a43: jmp near 0x978
pf_at 0x157
l_kernel_00000a46: mov dx,[cs:0xc52]
pf_at 0x15c
l_kernel_00000a4b: cmp dx,byte -0x1
pf_at 0x15f
l_kernel_00000a4e: jz near 0xb60
pf_at 0x163
l_kernel_00000a52: mov ax,0x2000
pf_at 0x166
l_kernel_00000a55: mov ds,ax
pf_at 0x168
l_kernel_00000a57: mov ax,0x1000
pf_at 0x16b
l_kernel_00000a5a: mov es,ax
pf_at 0x16d
l_kernel_00000a5c: mov di,0x7e00
pf_at 0x170
l_kernel_00000a5f: mov cx,0x80
pf_at 0x173
l_kernel_00000a62: xor ax,ax
pf_at 0x175
l_kernel_00000a64: rep stosw
pf_at 0x177
l_kernel_00000a66: mov di,0x7e00
pf_at 0x17a
l_kernel_00000a69: mov cx,dx
pf_at 0x17c
l_kernel_00000a6b: mov ax,0x4f01
pf_at 0x17f
l_kernel_00000a6e: int 0x10
pf_at 0x181
l_kernel_00000a70: cmp ax,byte +0x4f
pf_at 0x184
l_kernel_00000a73: jnz near 0xb60
pf_at 0x188
l_kernel_00000a77: mov bx,dx
pf_at 0x18a
l_kernel_00000a79: or bx,0x4000
pf_at 0x18e
l_kernel_00000a7d: mov ax,0x4f02
pf_at 0x191
l_kernel_00000a80: int 0x10
pf_at 0x193
l_kernel_00000a82: cmp ax,byte +0x4f
pf_at 0x196
l_kernel_00000a85: jnz near 0xb60
pf_at 0x19a
l_kernel_00000a89: mov ax,0x1000
pf_at 0x19d
l_kernel_00000a8c: mov ds,ax
pf_at 0x19f
l_kernel_00000a8e: mov eax,[0x7e28]
pf_at 0x1a3
l_kernel_00000a92: mov [cs:0xc58],eax
pf_at 0x1a8
l_kernel_00000a97: xor eax,eax
pf_at 0x1ab
l_kernel_00000a9a: mov ax,[0x7e32]
pf_at 0x1ae
l_kernel_00000a9d: test ax,ax
pf_at 0x1b0
l_kernel_00000a9f: jnz short 0xaa4
pf_at 0x1b2
l_kernel_00000aa1: mov ax,[0x7e10]
pf_at 0x1b5
l_kernel_00000aa4: mov [cs:0xc5c],eax
pf_at 0x1ba
l_kernel_00000aa9: xor eax,eax
pf_at 0x1bd
l_kernel_00000aac: mov ax,[0x7e12]
pf_at 0x1c0
l_kernel_00000aaf: mov [cs:0xc60],eax
pf_at 0x1c5
l_kernel_00000ab4: xor eax,eax
pf_at 0x1c8
l_kernel_00000ab7: mov ax,[0x7e14]
pf_at 0x1cb
l_kernel_00000aba: mov [cs:0xc64],eax
pf_at 0x1d0
l_kernel_00000abf: xor eax,eax
pf_at 0x1d3
l_kernel_00000ac2: mov al,[0x7e19]
pf_at 0x1d6
l_kernel_00000ac5: mov [cs:0xc68],eax
pf_at 0x1db
l_kernel_00000aca: xor eax,eax
pf_at 0x1de
l_kernel_00000acd: mov al,[0x7e36]
pf_at 0x1e1
l_kernel_00000ad0: test al,al
pf_at 0x1e3
l_kernel_00000ad2: jnz short 0xad9
pf_at 0x1e5
l_kernel_00000ad4: mov al,[0x7e1f]
pf_at 0x1e8
l_kernel_00000ad7: jmp short 0xadc
pf_at 0x1ea
l_kernel_00000ad9: mov al,[0x7e36]
pf_at 0x1ed
l_kernel_00000adc: mov [cs:0xc6c],eax
pf_at 0x1f2
l_kernel_00000ae1: xor eax,eax
pf_at 0x1f5
l_kernel_00000ae4: mov al,[0x7e36]
pf_at 0x1f8
l_kernel_00000ae7: test al,al
pf_at 0x1fa
l_kernel_00000ae9: jz short 0xaf0
pf_at 0x1fc
l_kernel_00000aeb: mov al,[0x7e37]
pf_at 0x1ff
l_kernel_00000aee: jmp short 0xaf3
pf_at 0x201
l_kernel_00000af0: mov al,[0x7e20]
pf_at 0x204
l_kernel_00000af3: mov [cs:0xc70],eax
pf_at 0x209
l_kernel_00000af8: xor eax,eax
pf_at 0x20c
l_kernel_00000afb: mov al,[0x7e38]
pf_at 0x20f
l_kernel_00000afe: test al,al
pf_at 0x211
l_kernel_00000b00: jnz short 0xb07
pf_at 0x213
l_kernel_00000b02: mov al,[0x7e21]
pf_at 0x216
l_kernel_00000b05: jmp short 0xb0a
pf_at 0x218
l_kernel_00000b07: mov al,[0x7e38]
pf_at 0x21b
l_kernel_00000b0a: mov [cs:0xc74],eax
pf_at 0x220
l_kernel_00000b0f: xor eax,eax
pf_at 0x223
l_kernel_00000b12: mov al,[0x7e38]
pf_at 0x226
l_kernel_00000b15: test al,al
pf_at 0x228
l_kernel_00000b17: jz short 0xb1e
pf_at 0x22a
l_kernel_00000b19: mov al,[0x7e39]
pf_at 0x22d
l_kernel_00000b1c: jmp short 0xb21
pf_at 0x22f
l_kernel_00000b1e: mov al,[0x7e22]
pf_at 0x232
l_kernel_00000b21: mov [cs:0xc78],eax
pf_at 0x237
l_kernel_00000b26: xor eax,eax
pf_at 0x23a
l_kernel_00000b29: mov al,[0x7e3a]
pf_at 0x23d
l_kernel_00000b2c: test al,al
pf_at 0x23f
l_kernel_00000b2e: jnz short 0xb35
pf_at 0x241
l_kernel_00000b30: mov al,[0x7e23]
pf_at 0x244
l_kernel_00000b33: jmp short 0xb38
pf_at 0x246
l_kernel_00000b35: mov al,[0x7e3a]
pf_at 0x249
l_kernel_00000b38: mov [cs:0xc7c],eax
pf_at 0x24e
l_kernel_00000b3d: xor eax,eax
pf_at 0x251
l_kernel_00000b40: mov al,[0x7e3a]
pf_at 0x254
l_kernel_00000b43: test al,al
pf_at 0x256
l_kernel_00000b45: jz short 0xb4c
pf_at 0x258
l_kernel_00000b47: mov al,[0x7e3b]
pf_at 0x25b
l_kernel_00000b4a: jmp short 0xb4f
pf_at 0x25d
l_kernel_00000b4c: mov al,[0x7e24]
pf_at 0x260
l_kernel_00000b4f: mov [cs:0xc80],eax
pf_at 0x265
l_kernel_00000b54: mov dword [cs:0xc42],0x1
pf_at 0x26f
l_kernel_00000b5e: jmp short 0xb6a
pf_at 0x271
l_kernel_00000b60: mov dword [cs:0xc42],0x0
pf_at 0x27b
l_kernel_00000b6a: cli
pf_at 0x27c
l_kernel_00000b6b: lgdt [cs:0xbf8]
pf_at 0x282
l_kernel_00000b71: mov eax,cr0
pf_at 0x285
l_kernel_00000b74: or al,0x1
pf_at 0x287
l_kernel_00000b76: mov cr0,eax
pf_at 0x28a
l_kernel_00000b79: jmp dword 0x8:0x20b81

section part19 start=0xb81 vstart=0x20b81 align=1
bits 32
pf_at 0x0
l_kernel_00020b81: mov ax,0x10
pf_at 0x4
l_kernel_00020b85: o16 mov ds,ax
pf_at 0x7
l_kernel_00020b88: o16 mov es,ax
pf_at 0xa
l_kernel_00020b8b: o16 mov fs,ax
pf_at 0xd
l_kernel_00020b8e: o16 mov gs,ax
pf_at 0x10
l_kernel_00020b91: o16 mov ss,ax
pf_at 0x13
l_kernel_00020b94: mov eax,[0x20c02]
pf_at 0x18
l_kernel_00020b99: test eax,0x80000000
pf_at 0x1d
l_kernel_00020b9e: jz short 0x20bbb
pf_at 0x1f
l_kernel_00020ba0: mov ecx,cr4
pf_at 0x22
l_kernel_00020ba3: or ecx,byte +0x20
pf_at 0x25
l_kernel_00020ba6: mov cr4,ecx
pf_at 0x28
l_kernel_00020ba9: mov ecx,cr3
pf_at 0x2b
l_kernel_00020bac: mov cr3,ecx
pf_at 0x2e
l_kernel_00020baf: mov ecx,cr0
pf_at 0x31
l_kernel_00020bb2: or ecx,0x80000000
pf_at 0x37
l_kernel_00020bb8: mov cr0,ecx
pf_at 0x3a
l_kernel_00020bbb: mov esp,[dword 0x20bfe]
pf_at 0x40
l_kernel_00020bc1: mov eax,[0x20c42]
pf_at 0x45
l_kernel_00020bc6: pop ebp
pf_at 0x46
l_kernel_00020bc7: pop edi
pf_at 0x47
l_kernel_00020bc8: pop esi
pf_at 0x48
l_kernel_00020bc9: pop ebx
pf_at 0x49
l_kernel_00020bca: popf
pf_at 0x4a
l_kernel_00020bcb: ret
pf_at 0x4b
l_kernel_00020bcc: nop dword [byte eax+0]

section part20 start=0xbd0 vstart=0x0 align=1
    times 8 db 0
    db 0xff, 0xff
    times 3 db 0
    db 0x9a, 0xcf
    times 1 db 0
    db 0xff, 0xff
    times 3 db 0
    db 0x92, 0xcf
    times 1 db 0
    db 0xff, 0xff
    times 2 db 0
    db 0x02, 0x9a
    times 2 db 0
    db 0xff, 0xff
    times 2 db 0
    db 0x02, 0x92
    times 2 db 0
    db 0x27
    times 1 db 0
    db 0xd0, 0x0b, 0x02
    times 85 db 0
    db 0xff, 0xff
    times 48 db 0

%include "kernel_abi.inc"
section initial_state start=pf_state_start-0x20000 vstart=pf_state_start align=1
incbin "kernel_state.bin"
section payload start=pf_payload_offset vstart=0x20000+pf_payload_offset align=1
bits 32
incbin "kernel_unpack.bin"
pf_packed_start:
incbin "kernel_packed.bin"
pf_relocate:
    fninit
    cld
    push dword pf_packed_size
    push dword pf_packed_start
    push dword pf_unpacked_size
    push dword pf_core_base
    call pf_unpack
    add esp,16
    test eax,eax
    jnz pf_stage2
.halt:
    cli
    hlt
    jmp .halt
%if $-$$+pf_payload_offset >= 0x80000
%error "temporary kernel payload reaches VGA memory"
%endif
%if pf_core_base+pf_unpacked_size >= 0x170000
%error "compiled kernel approaches main stack"
%endif
