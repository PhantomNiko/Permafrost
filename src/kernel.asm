%include "kernel_c.inc"
; Permafrost 0.2 — recovered assembly, Pooka's Free Software License.
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
    db 0xa2, 0x08
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
l_kernel_00020028: mov [dword 0x2082e],esp
pf_at 0x1e
l_kernel_0002002e: mov word [dword 0x20832],0x0
pf_at 0x27
l_kernel_00020037: cli
pf_at 0x28
l_kernel_00020038: lgdt [dword 0x20828]
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
l_kernel_00000058: and al,0xfe
pf_at 0x15
l_kernel_0000005a: mov cr0,eax
pf_at 0x18
l_kernel_0000005d: jmp 0x2000:0x62
pf_at 0x1d
l_kernel_00000062: mov ax,0x2000
pf_at 0x20
l_kernel_00000065: mov ds,ax
pf_at 0x22
l_kernel_00000067: mov es,ax
pf_at 0x24
l_kernel_00000069: mov fs,ax
pf_at 0x26
l_kernel_0000006b: mov gs,ax
pf_at 0x28
l_kernel_0000006d: mov ax,0x800
pf_at 0x2b
l_kernel_00000070: mov ss,ax
pf_at 0x2d
l_kernel_00000072: mov sp,0xfffc
pf_at 0x30
l_kernel_00000075: sti
pf_at 0x31
l_kernel_00000076: nop
pf_at 0x32
l_kernel_00000077: mov ah,0x11
pf_at 0x34
l_kernel_00000079: int 0x16
pf_at 0x36
l_kernel_0000007b: jnz short 0x89
pf_at 0x38
l_kernel_0000007d: mov ah,0x1
pf_at 0x3a
l_kernel_0000007f: int 0x16
pf_at 0x3c
l_kernel_00000081: jz short 0x91
pf_at 0x3e
l_kernel_00000083: mov ah,0x0
pf_at 0x40
l_kernel_00000085: int 0x16
pf_at 0x42
l_kernel_00000087: jmp short 0x8d
pf_at 0x44
l_kernel_00000089: mov ah,0x10
pf_at 0x46
l_kernel_0000008b: int 0x16
pf_at 0x48
l_kernel_0000008d: mov [cs:0x832],ax
pf_at 0x4c
l_kernel_00000091: cli
pf_at 0x4d
l_kernel_00000092: lgdt [cs:0x828]
pf_at 0x53
l_kernel_00000098: mov eax,cr0
pf_at 0x56
l_kernel_0000009b: or al,0x1
pf_at 0x58
l_kernel_0000009d: mov cr0,eax
pf_at 0x5b
l_kernel_000000a0: jmp dword 0x8:0x200a8

section part3 start=0xa8 vstart=0x200a8 align=1
bits 32
pf_at 0x0
l_kernel_000200a8: mov ax,0x10
pf_at 0x4
l_kernel_000200ac: o16 mov ds,ax
pf_at 0x7
l_kernel_000200af: o16 mov es,ax
pf_at 0xa
l_kernel_000200b2: o16 mov fs,ax
pf_at 0xd
l_kernel_000200b5: o16 mov gs,ax
pf_at 0x10
l_kernel_000200b8: o16 mov ss,ax
pf_at 0x13
l_kernel_000200bb: mov esp,[dword 0x2082e]
pf_at 0x19
l_kernel_000200c1: movzx eax,word [dword 0x20832]
pf_at 0x20
l_kernel_000200c8: pop ebp
pf_at 0x21
l_kernel_000200c9: pop edi
pf_at 0x22
l_kernel_000200ca: pop esi
pf_at 0x23
l_kernel_000200cb: pop ebx
pf_at 0x24
l_kernel_000200cc: popf
pf_at 0x25
l_kernel_000200cd: ret
pf_at 0x26
l_kernel_000200ce: pushf
pf_at 0x27
l_kernel_000200cf: push ebx
pf_at 0x28
l_kernel_000200d0: push esi
pf_at 0x29
l_kernel_000200d1: push edi
pf_at 0x2a
l_kernel_000200d2: push ebp
pf_at 0x2b
l_kernel_000200d3: mov [dword 0x2082e],esp
pf_at 0x31
l_kernel_000200d9: mov dword [dword 0x20834],0x0
pf_at 0x3b
l_kernel_000200e3: mov word [dword 0x20838],0x0
pf_at 0x44
l_kernel_000200ec: mov word [dword 0x2083a],0x0
pf_at 0x4d
l_kernel_000200f5: mov word [dword 0x2083c],0x0
pf_at 0x56
l_kernel_000200fe: cli
pf_at 0x57
l_kernel_000200ff: lgdt [dword 0x20828]
pf_at 0x5e
l_kernel_00020106: jmp word 0x18:0x10c

section part4 start=0x10c vstart=0x10c align=1
bits 16
pf_at 0x0
l_kernel_0000010c: mov ax,0x20
pf_at 0x3
l_kernel_0000010f: mov ds,ax
pf_at 0x5
l_kernel_00000111: mov es,ax
pf_at 0x7
l_kernel_00000113: mov fs,ax
pf_at 0x9
l_kernel_00000115: mov gs,ax
pf_at 0xb
l_kernel_00000117: mov ss,ax
pf_at 0xd
l_kernel_00000119: mov sp,0xfffc
pf_at 0x10
l_kernel_0000011c: mov eax,cr0
pf_at 0x13
l_kernel_0000011f: and al,0xfe
pf_at 0x15
l_kernel_00000121: mov cr0,eax
pf_at 0x18
l_kernel_00000124: jmp 0x2000:0x129
pf_at 0x1d
l_kernel_00000129: mov ax,0x2000
pf_at 0x20
l_kernel_0000012c: mov ds,ax
pf_at 0x22
l_kernel_0000012e: mov es,ax
pf_at 0x24
l_kernel_00000130: mov fs,ax
pf_at 0x26
l_kernel_00000132: mov gs,ax
pf_at 0x28
l_kernel_00000134: mov ax,0x800
pf_at 0x2b
l_kernel_00000137: mov ss,ax
pf_at 0x2d
l_kernel_00000139: mov sp,0xfffc
pf_at 0x30
l_kernel_0000013c: sti
pf_at 0x31
l_kernel_0000013d: mov ax,0x1130
pf_at 0x34
l_kernel_00000140: mov bh,0x6
pf_at 0x36
l_kernel_00000142: int 0x10
pf_at 0x38
l_kernel_00000144: mov [cs:0x838],es
pf_at 0x3d
l_kernel_00000149: mov [cs:0x83a],bp
pf_at 0x42
l_kernel_0000014e: mov [cs:0x83c],cx
pf_at 0x47
l_kernel_00000153: mov ax,es
pf_at 0x49
l_kernel_00000155: or ax,bp
pf_at 0x4b
l_kernel_00000157: jz short 0x165
pf_at 0x4d
l_kernel_00000159: mov dword [cs:0x834],0x1
pf_at 0x57
l_kernel_00000163: jmp short 0x16f
pf_at 0x59
l_kernel_00000165: mov dword [cs:0x834],0x0
pf_at 0x63
l_kernel_0000016f: cli
pf_at 0x64
l_kernel_00000170: lgdt [cs:0x828]
pf_at 0x6a
l_kernel_00000176: mov eax,cr0
pf_at 0x6d
l_kernel_00000179: or al,0x1
pf_at 0x6f
l_kernel_0000017b: mov cr0,eax
pf_at 0x72
l_kernel_0000017e: jmp dword 0x8:0x20186

section part5 start=0x186 vstart=0x20186 align=1
bits 32
pf_at 0x0
l_kernel_00020186: mov ax,0x10
pf_at 0x4
l_kernel_0002018a: o16 mov ds,ax
pf_at 0x7
l_kernel_0002018d: o16 mov es,ax
pf_at 0xa
l_kernel_00020190: o16 mov fs,ax
pf_at 0xd
l_kernel_00020193: o16 mov gs,ax
pf_at 0x10
l_kernel_00020196: o16 mov ss,ax
pf_at 0x13
l_kernel_00020199: mov esp,[dword 0x2082e]
pf_at 0x19
l_kernel_0002019f: mov eax,[0x20834]
pf_at 0x1e
l_kernel_000201a4: pop ebp
pf_at 0x1f
l_kernel_000201a5: pop edi
pf_at 0x20
l_kernel_000201a6: pop esi
pf_at 0x21
l_kernel_000201a7: pop ebx
pf_at 0x22
l_kernel_000201a8: popf
pf_at 0x23
l_kernel_000201a9: ret
pf_at 0x24
l_kernel_000201aa: pushf
pf_at 0x25
l_kernel_000201ab: push ebx
pf_at 0x26
l_kernel_000201ac: push esi
pf_at 0x27
l_kernel_000201ad: push edi
pf_at 0x28
l_kernel_000201ae: push ebp
pf_at 0x29
l_kernel_000201af: mov [dword 0x2082e],esp
pf_at 0x2f
l_kernel_000201b5: mov dword [dword 0x20862],0x0
pf_at 0x39
l_kernel_000201bf: cli
pf_at 0x3a
l_kernel_000201c0: lgdt [dword 0x20828]
pf_at 0x41
l_kernel_000201c7: jmp word 0x18:0x1cd

section part6 start=0x1cd vstart=0x1cd align=1
bits 16
pf_at 0x0
l_kernel_000001cd: mov ax,0x20
pf_at 0x3
l_kernel_000001d0: mov ds,ax
pf_at 0x5
l_kernel_000001d2: mov es,ax
pf_at 0x7
l_kernel_000001d4: mov fs,ax
pf_at 0x9
l_kernel_000001d6: mov gs,ax
pf_at 0xb
l_kernel_000001d8: mov ss,ax
pf_at 0xd
l_kernel_000001da: mov sp,0xfffc
pf_at 0x10
l_kernel_000001dd: mov eax,cr0
pf_at 0x13
l_kernel_000001e0: and al,0xfe
pf_at 0x15
l_kernel_000001e2: mov cr0,eax
pf_at 0x18
l_kernel_000001e5: jmp 0x2000:0x1ea
pf_at 0x1d
l_kernel_000001ea: mov ax,0x2000
pf_at 0x20
l_kernel_000001ed: mov ds,ax
pf_at 0x22
l_kernel_000001ef: mov es,ax
pf_at 0x24
l_kernel_000001f1: mov fs,ax
pf_at 0x26
l_kernel_000001f3: mov gs,ax
pf_at 0x28
l_kernel_000001f5: mov ax,0x800
pf_at 0x2b
l_kernel_000001f8: mov ss,ax
pf_at 0x2d
l_kernel_000001fa: mov sp,0xfffc
pf_at 0x30
l_kernel_000001fd: sti
pf_at 0x31
l_kernel_000001fe: mov ecx,[cs:0x84a]
pf_at 0x37
l_kernel_00000204: test ecx,ecx
pf_at 0x3a
l_kernel_00000207: jz short 0x278
pf_at 0x3c
l_kernel_00000209: mov eax,[cs:0x846]
pf_at 0x41
l_kernel_0000020e: mov edx,eax
pf_at 0x44
l_kernel_00000211: and edx,0x1ff
pf_at 0x4b
l_kernel_00000218: add ecx,edx
pf_at 0x4e
l_kernel_0000021b: add ecx,0x1ff
pf_at 0x55
l_kernel_00000222: shr ecx,byte 0x9
pf_at 0x59
l_kernel_00000226: cmp ecx,byte +0x38
pf_at 0x5d
l_kernel_0000022a: ja short 0x284
pf_at 0x5f
l_kernel_0000022c: shr eax,byte 0x9
pf_at 0x63
l_kernel_00000230: add eax,[cs:0x842]
pf_at 0x69
l_kernel_00000236: mov edx,eax
pf_at 0x6c
l_kernel_00000239: mov ax,0x1000
pf_at 0x6f
l_kernel_0000023c: mov ds,ax
pf_at 0x71
l_kernel_0000023e: mov si,0x7f00
pf_at 0x74
l_kernel_00000241: mov word [si],0x10
pf_at 0x78
l_kernel_00000245: mov [si+0x2],cx
pf_at 0x7b
l_kernel_00000248: mov word [si+0x4],0x0
pf_at 0x80
l_kernel_0000024d: mov word [si+0x6],0x1000
pf_at 0x85
l_kernel_00000252: mov [si+0x8],edx
pf_at 0x89
l_kernel_00000256: mov dword [si+0xc],0x0
pf_at 0x91
l_kernel_0000025e: mov dl,[cs:0x83e]
pf_at 0x96
l_kernel_00000263: mov ah,0x42
pf_at 0x98
l_kernel_00000265: int 0x13
pf_at 0x9a
l_kernel_00000267: jnc short 0x278
pf_at 0x9c
l_kernel_00000269: xor ah,ah
pf_at 0x9e
l_kernel_0000026b: int 0x13
pf_at 0xa0
l_kernel_0000026d: mov dl,[cs:0x83e]
pf_at 0xa5
l_kernel_00000272: mov ah,0x42
pf_at 0xa7
l_kernel_00000274: int 0x13
pf_at 0xa9
l_kernel_00000276: jc short 0x284
pf_at 0xab
l_kernel_00000278: mov dword [cs:0x862],0x1
pf_at 0xb5
l_kernel_00000282: jmp short 0x28e
pf_at 0xb7
l_kernel_00000284: mov dword [cs:0x862],0x0
pf_at 0xc1
l_kernel_0000028e: cli
pf_at 0xc2
l_kernel_0000028f: lgdt [cs:0x828]
pf_at 0xc8
l_kernel_00000295: mov eax,cr0
pf_at 0xcb
l_kernel_00000298: or al,0x1
pf_at 0xcd
l_kernel_0000029a: mov cr0,eax
pf_at 0xd0
l_kernel_0000029d: jmp dword 0x8:0x202a5

section part7 start=0x2a5 vstart=0x202a5 align=1
bits 32
pf_at 0x0
l_kernel_000202a5: mov ax,0x10
pf_at 0x4
l_kernel_000202a9: o16 mov ds,ax
pf_at 0x7
l_kernel_000202ac: o16 mov es,ax
pf_at 0xa
l_kernel_000202af: o16 mov fs,ax
pf_at 0xd
l_kernel_000202b2: o16 mov gs,ax
pf_at 0x10
l_kernel_000202b5: o16 mov ss,ax
pf_at 0x13
l_kernel_000202b8: mov esp,[dword 0x2082e]
pf_at 0x19
l_kernel_000202be: mov eax,[0x20862]
pf_at 0x1e
l_kernel_000202c3: pop ebp
pf_at 0x1f
l_kernel_000202c4: pop edi
pf_at 0x20
l_kernel_000202c5: pop esi
pf_at 0x21
l_kernel_000202c6: pop ebx
pf_at 0x22
l_kernel_000202c7: popf
pf_at 0x23
l_kernel_000202c8: ret
pf_at 0x24
l_kernel_000202c9: pushf
pf_at 0x25
l_kernel_000202ca: push ebx
pf_at 0x26
l_kernel_000202cb: push esi
pf_at 0x27
l_kernel_000202cc: push edi
pf_at 0x28
l_kernel_000202cd: push ebp
pf_at 0x29
l_kernel_000202ce: mov [dword 0x2082e],esp
pf_at 0x2f
l_kernel_000202d4: mov dword [dword 0x2086a],0x0
pf_at 0x39
l_kernel_000202de: mov dword [dword 0x2085e],0x0
pf_at 0x43
l_kernel_000202e8: cli
pf_at 0x44
l_kernel_000202e9: lgdt [dword 0x20828]
pf_at 0x4b
l_kernel_000202f0: jmp word 0x18:0x2f6

section part8 start=0x2f6 vstart=0x2f6 align=1
bits 16
pf_at 0x0
l_kernel_000002f6: mov ax,0x20
pf_at 0x3
l_kernel_000002f9: mov ds,ax
pf_at 0x5
l_kernel_000002fb: mov es,ax
pf_at 0x7
l_kernel_000002fd: mov fs,ax
pf_at 0x9
l_kernel_000002ff: mov gs,ax
pf_at 0xb
l_kernel_00000301: mov ss,ax
pf_at 0xd
l_kernel_00000303: mov sp,0xfffc
pf_at 0x10
l_kernel_00000306: mov eax,cr0
pf_at 0x13
l_kernel_00000309: and al,0xfe
pf_at 0x15
l_kernel_0000030b: mov cr0,eax
pf_at 0x18
l_kernel_0000030e: jmp 0x2000:0x313
pf_at 0x1d
l_kernel_00000313: mov ax,0x2000
pf_at 0x20
l_kernel_00000316: mov ds,ax
pf_at 0x22
l_kernel_00000318: mov es,ax
pf_at 0x24
l_kernel_0000031a: mov fs,ax
pf_at 0x26
l_kernel_0000031c: mov gs,ax
pf_at 0x28
l_kernel_0000031e: mov ax,0x800
pf_at 0x2b
l_kernel_00000321: mov ss,ax
pf_at 0x2d
l_kernel_00000323: mov sp,0xfffc
pf_at 0x30
l_kernel_00000326: sti
pf_at 0x31
l_kernel_00000327: mov ax,0x1000
pf_at 0x34
l_kernel_0000032a: mov ds,ax
pf_at 0x36
l_kernel_0000032c: mov es,ax
pf_at 0x38
l_kernel_0000032e: mov di,0x7d00
pf_at 0x3b
l_kernel_00000331: mov cx,0xf
pf_at 0x3e
l_kernel_00000334: xor ax,ax
pf_at 0x40
l_kernel_00000336: rep stosw
pf_at 0x42
l_kernel_00000338: mov word [0x7d00],0x1e
pf_at 0x48
l_kernel_0000033e: mov dl,[cs:0x85a]
pf_at 0x4d
l_kernel_00000343: mov si,0x7d00
pf_at 0x50
l_kernel_00000346: mov ah,0x48
pf_at 0x52
l_kernel_00000348: int 0x13
pf_at 0x54
l_kernel_0000034a: jc short 0x371
pf_at 0x56
l_kernel_0000034c: mov eax,[0x7d10]
pf_at 0x5a
l_kernel_00000350: mov edx,[0x7d14]
pf_at 0x5f
l_kernel_00000355: test edx,edx
pf_at 0x62
l_kernel_00000358: jz short 0x360
pf_at 0x64
l_kernel_0000035a: mov eax,0xffffffff
pf_at 0x6a
l_kernel_00000360: mov [cs:0x85e],eax
pf_at 0x6f
l_kernel_00000365: mov dword [cs:0x86a],0x1
pf_at 0x79
l_kernel_0000036f: jmp short 0x385
pf_at 0x7b
l_kernel_00000371: mov dword [cs:0x86a],0x0
pf_at 0x85
l_kernel_0000037b: mov dword [cs:0x85e],0x0
pf_at 0x8f
l_kernel_00000385: cli
pf_at 0x90
l_kernel_00000386: lgdt [cs:0x828]
pf_at 0x96
l_kernel_0000038c: mov eax,cr0
pf_at 0x99
l_kernel_0000038f: or al,0x1
pf_at 0x9b
l_kernel_00000391: mov cr0,eax
pf_at 0x9e
l_kernel_00000394: jmp dword 0x8:0x2039c

section part9 start=0x39c vstart=0x2039c align=1
bits 32
pf_at 0x0
l_kernel_0002039c: mov ax,0x10
pf_at 0x4
l_kernel_000203a0: o16 mov ds,ax
pf_at 0x7
l_kernel_000203a3: o16 mov es,ax
pf_at 0xa
l_kernel_000203a6: o16 mov fs,ax
pf_at 0xd
l_kernel_000203a9: o16 mov gs,ax
pf_at 0x10
l_kernel_000203ac: o16 mov ss,ax
pf_at 0x13
l_kernel_000203af: mov esp,[dword 0x2082e]
pf_at 0x19
l_kernel_000203b5: mov eax,[0x2086a]
pf_at 0x1e
l_kernel_000203ba: pop ebp
pf_at 0x1f
l_kernel_000203bb: pop edi
pf_at 0x20
l_kernel_000203bc: pop esi
pf_at 0x21
l_kernel_000203bd: pop ebx
pf_at 0x22
l_kernel_000203be: popf
pf_at 0x23
l_kernel_000203bf: ret
pf_at 0x24
l_kernel_000203c0: pushf
pf_at 0x25
l_kernel_000203c1: push ebx
pf_at 0x26
l_kernel_000203c2: push esi
pf_at 0x27
l_kernel_000203c3: push edi
pf_at 0x28
l_kernel_000203c4: push ebp
pf_at 0x29
l_kernel_000203c5: mov [dword 0x2082e],esp
pf_at 0x2f
l_kernel_000203cb: mov dword [dword 0x20866],0x0
pf_at 0x39
l_kernel_000203d5: cli
pf_at 0x3a
l_kernel_000203d6: lgdt [dword 0x20828]
pf_at 0x41
l_kernel_000203dd: jmp word 0x18:0x3e3

section part10 start=0x3e3 vstart=0x3e3 align=1
bits 16
pf_at 0x0
l_kernel_000003e3: mov ax,0x20
pf_at 0x3
l_kernel_000003e6: mov ds,ax
pf_at 0x5
l_kernel_000003e8: mov es,ax
pf_at 0x7
l_kernel_000003ea: mov fs,ax
pf_at 0x9
l_kernel_000003ec: mov gs,ax
pf_at 0xb
l_kernel_000003ee: mov ss,ax
pf_at 0xd
l_kernel_000003f0: mov sp,0xfffc
pf_at 0x10
l_kernel_000003f3: mov eax,cr0
pf_at 0x13
l_kernel_000003f6: and al,0xfe
pf_at 0x15
l_kernel_000003f8: mov cr0,eax
pf_at 0x18
l_kernel_000003fb: jmp 0x2000:0x400
pf_at 0x1d
l_kernel_00000400: mov ax,0x2000
pf_at 0x20
l_kernel_00000403: mov ds,ax
pf_at 0x22
l_kernel_00000405: mov es,ax
pf_at 0x24
l_kernel_00000407: mov fs,ax
pf_at 0x26
l_kernel_00000409: mov gs,ax
pf_at 0x28
l_kernel_0000040b: mov ax,0x800
pf_at 0x2b
l_kernel_0000040e: mov ss,ax
pf_at 0x2d
l_kernel_00000410: mov sp,0xfffc
pf_at 0x30
l_kernel_00000413: sti
pf_at 0x31
l_kernel_00000414: mov cx,[cs:0x856]
pf_at 0x36
l_kernel_00000419: test cx,cx
pf_at 0x38
l_kernel_0000041b: jz short 0x461
pf_at 0x3a
l_kernel_0000041d: mov ax,0x1000
pf_at 0x3d
l_kernel_00000420: mov ds,ax
pf_at 0x3f
l_kernel_00000422: mov si,0x7f00
pf_at 0x42
l_kernel_00000425: mov word [si],0x10
pf_at 0x46
l_kernel_00000429: mov [si+0x2],cx
pf_at 0x49
l_kernel_0000042c: mov word [si+0x4],0x0
pf_at 0x4e
l_kernel_00000431: mov word [si+0x6],0x1000
pf_at 0x53
l_kernel_00000436: mov eax,[cs:0x852]
pf_at 0x58
l_kernel_0000043b: mov [si+0x8],eax
pf_at 0x5c
l_kernel_0000043f: mov dword [si+0xc],0x0
pf_at 0x64
l_kernel_00000447: mov dl,[cs:0x84e]
pf_at 0x69
l_kernel_0000044c: mov ah,0x43
pf_at 0x6b
l_kernel_0000044e: int 0x13
pf_at 0x6d
l_kernel_00000450: jnc short 0x461
pf_at 0x6f
l_kernel_00000452: xor ah,ah
pf_at 0x71
l_kernel_00000454: int 0x13
pf_at 0x73
l_kernel_00000456: mov dl,[cs:0x84e]
pf_at 0x78
l_kernel_0000045b: mov ah,0x43
pf_at 0x7a
l_kernel_0000045d: int 0x13
pf_at 0x7c
l_kernel_0000045f: jc short 0x46d
pf_at 0x7e
l_kernel_00000461: mov dword [cs:0x866],0x1
pf_at 0x88
l_kernel_0000046b: jmp short 0x477
pf_at 0x8a
l_kernel_0000046d: mov dword [cs:0x866],0x0
pf_at 0x94
l_kernel_00000477: cli
pf_at 0x95
l_kernel_00000478: lgdt [cs:0x828]
pf_at 0x9b
l_kernel_0000047e: mov eax,cr0
pf_at 0x9e
l_kernel_00000481: or al,0x1
pf_at 0xa0
l_kernel_00000483: mov cr0,eax
pf_at 0xa3
l_kernel_00000486: jmp dword 0x8:0x2048e

section part11 start=0x48e vstart=0x2048e align=1
bits 32
pf_at 0x0
l_kernel_0002048e: mov ax,0x10
pf_at 0x4
l_kernel_00020492: o16 mov ds,ax
pf_at 0x7
l_kernel_00020495: o16 mov es,ax
pf_at 0xa
l_kernel_00020498: o16 mov fs,ax
pf_at 0xd
l_kernel_0002049b: o16 mov gs,ax
pf_at 0x10
l_kernel_0002049e: o16 mov ss,ax
pf_at 0x13
l_kernel_000204a1: mov esp,[dword 0x2082e]
pf_at 0x19
l_kernel_000204a7: mov eax,[0x20866]
pf_at 0x1e
l_kernel_000204ac: pop ebp
pf_at 0x1f
l_kernel_000204ad: pop edi
pf_at 0x20
l_kernel_000204ae: pop esi
pf_at 0x21
l_kernel_000204af: pop ebx
pf_at 0x22
l_kernel_000204b0: popf
pf_at 0x23
l_kernel_000204b1: ret
pf_at 0x24
l_kernel_000204b2: pushf
pf_at 0x25
l_kernel_000204b3: push ebx
pf_at 0x26
l_kernel_000204b4: push esi
pf_at 0x27
l_kernel_000204b5: push edi
pf_at 0x28
l_kernel_000204b6: push ebp
pf_at 0x29
l_kernel_000204b7: mov [dword 0x2082e],esp
pf_at 0x2f
l_kernel_000204bd: cli
pf_at 0x30
l_kernel_000204be: lgdt [dword 0x20828]
pf_at 0x37
l_kernel_000204c5: jmp word 0x18:0x4cb

section part12 start=0x4cb vstart=0x4cb align=1
bits 16
pf_at 0x0
l_kernel_000004cb: mov ax,0x20
pf_at 0x3
l_kernel_000004ce: mov ds,ax
pf_at 0x5
l_kernel_000004d0: mov es,ax
pf_at 0x7
l_kernel_000004d2: mov fs,ax
pf_at 0x9
l_kernel_000004d4: mov gs,ax
pf_at 0xb
l_kernel_000004d6: mov ss,ax
pf_at 0xd
l_kernel_000004d8: mov sp,0xfffc
pf_at 0x10
l_kernel_000004db: mov eax,cr0
pf_at 0x13
l_kernel_000004de: and al,0xfe
pf_at 0x15
l_kernel_000004e0: mov cr0,eax
pf_at 0x18
l_kernel_000004e3: jmp 0x2000:0x4e8
pf_at 0x1d
l_kernel_000004e8: mov ax,0x2000
pf_at 0x20
l_kernel_000004eb: mov ds,ax
pf_at 0x22
l_kernel_000004ed: mov es,ax
pf_at 0x24
l_kernel_000004ef: mov fs,ax
pf_at 0x26
l_kernel_000004f1: mov gs,ax
pf_at 0x28
l_kernel_000004f3: mov ax,0x800
pf_at 0x2b
l_kernel_000004f6: mov ss,ax
pf_at 0x2d
l_kernel_000004f8: mov sp,0xfffc
pf_at 0x30
l_kernel_000004fb: sti
pf_at 0x31
l_kernel_000004fc: mov ax,0x13
pf_at 0x34
l_kernel_000004ff: int 0x10
pf_at 0x36
l_kernel_00000501: cli
pf_at 0x37
l_kernel_00000502: lgdt [cs:0x828]
pf_at 0x3d
l_kernel_00000508: mov eax,cr0
pf_at 0x40
l_kernel_0000050b: or al,0x1
pf_at 0x42
l_kernel_0000050d: mov cr0,eax
pf_at 0x45
l_kernel_00000510: jmp dword 0x8:0x20518

section part13 start=0x518 vstart=0x20518 align=1
bits 32
pf_at 0x0
l_kernel_00020518: mov ax,0x10
pf_at 0x4
l_kernel_0002051c: o16 mov ds,ax
pf_at 0x7
l_kernel_0002051f: o16 mov es,ax
pf_at 0xa
l_kernel_00020522: o16 mov fs,ax
pf_at 0xd
l_kernel_00020525: o16 mov gs,ax
pf_at 0x10
l_kernel_00020528: o16 mov ss,ax
pf_at 0x13
l_kernel_0002052b: mov esp,[dword 0x2082e]
pf_at 0x19
l_kernel_00020531: pop ebp
pf_at 0x1a
l_kernel_00020532: pop edi
pf_at 0x1b
l_kernel_00020533: pop esi
pf_at 0x1c
l_kernel_00020534: pop ebx
pf_at 0x1d
l_kernel_00020535: popf
pf_at 0x1e
l_kernel_00020536: ret
pf_at 0x1f
l_kernel_00020537: pushf
pf_at 0x20
l_kernel_00020538: push ebx
pf_at 0x21
l_kernel_00020539: push esi
pf_at 0x22
l_kernel_0002053a: push edi
pf_at 0x23
l_kernel_0002053b: push ebp
pf_at 0x24
l_kernel_0002053c: mov [dword 0x2082e],esp
pf_at 0x2a
l_kernel_00020542: cli
pf_at 0x2b
l_kernel_00020543: lgdt [dword 0x20828]
pf_at 0x32
l_kernel_0002054a: jmp word 0x18:0x550

section part14 start=0x550 vstart=0x550 align=1
bits 16
pf_at 0x0
l_kernel_00000550: mov ax,0x20
pf_at 0x3
l_kernel_00000553: mov ds,ax
pf_at 0x5
l_kernel_00000555: mov es,ax
pf_at 0x7
l_kernel_00000557: mov fs,ax
pf_at 0x9
l_kernel_00000559: mov gs,ax
pf_at 0xb
l_kernel_0000055b: mov ss,ax
pf_at 0xd
l_kernel_0000055d: mov sp,0xfffc
pf_at 0x10
l_kernel_00000560: mov eax,cr0
pf_at 0x13
l_kernel_00000563: and al,0xfe
pf_at 0x15
l_kernel_00000565: mov cr0,eax
pf_at 0x18
l_kernel_00000568: jmp 0x2000:0x56d
pf_at 0x1d
l_kernel_0000056d: mov ax,0x2000
pf_at 0x20
l_kernel_00000570: mov ds,ax
pf_at 0x22
l_kernel_00000572: mov es,ax
pf_at 0x24
l_kernel_00000574: mov fs,ax
pf_at 0x26
l_kernel_00000576: mov gs,ax
pf_at 0x28
l_kernel_00000578: mov ax,0x800
pf_at 0x2b
l_kernel_0000057b: mov ss,ax
pf_at 0x2d
l_kernel_0000057d: mov sp,0xfffc
pf_at 0x30
l_kernel_00000580: sti
pf_at 0x31
l_kernel_00000581: mov ax,0x3
pf_at 0x34
l_kernel_00000584: int 0x10
pf_at 0x36
l_kernel_00000586: cli
pf_at 0x37
l_kernel_00000587: lgdt [cs:0x828]
pf_at 0x3d
l_kernel_0000058d: mov eax,cr0
pf_at 0x40
l_kernel_00000590: or al,0x1
pf_at 0x42
l_kernel_00000592: mov cr0,eax
pf_at 0x45
l_kernel_00000595: jmp dword 0x8:0x2059d

section part15 start=0x59d vstart=0x2059d align=1
bits 32
pf_at 0x0
l_kernel_0002059d: mov ax,0x10
pf_at 0x4
l_kernel_000205a1: o16 mov ds,ax
pf_at 0x7
l_kernel_000205a4: o16 mov es,ax
pf_at 0xa
l_kernel_000205a7: o16 mov fs,ax
pf_at 0xd
l_kernel_000205aa: o16 mov gs,ax
pf_at 0x10
l_kernel_000205ad: o16 mov ss,ax
pf_at 0x13
l_kernel_000205b0: mov esp,[dword 0x2082e]
pf_at 0x19
l_kernel_000205b6: pop ebp
pf_at 0x1a
l_kernel_000205b7: pop edi
pf_at 0x1b
l_kernel_000205b8: pop esi
pf_at 0x1c
l_kernel_000205b9: pop ebx
pf_at 0x1d
l_kernel_000205ba: popf
pf_at 0x1e
l_kernel_000205bb: ret
pf_at 0x1f
l_kernel_000205bc: pushf
pf_at 0x20
l_kernel_000205bd: push ebx
pf_at 0x21
l_kernel_000205be: push esi
pf_at 0x22
l_kernel_000205bf: push edi
pf_at 0x23
l_kernel_000205c0: push ebp
pf_at 0x24
l_kernel_000205c1: mov [dword 0x2082e],esp
pf_at 0x2a
l_kernel_000205c7: mov dword [dword 0x2086e],0x0
pf_at 0x34
l_kernel_000205d1: mov dword [dword 0x20876],0x0
pf_at 0x3e
l_kernel_000205db: mov dword [dword 0x2087a],0x0
pf_at 0x48
l_kernel_000205e5: mov dword [dword 0x2087e],0x0
pf_at 0x52
l_kernel_000205ef: mov dword [dword 0x20882],0x0
pf_at 0x5c
l_kernel_000205f9: mov dword [dword 0x20886],0x0
pf_at 0x66
l_kernel_00020603: mov dword [dword 0x2088a],0x0
pf_at 0x70
l_kernel_0002060d: mov dword [dword 0x2088e],0x0
pf_at 0x7a
l_kernel_00020617: mov dword [dword 0x20892],0x0
pf_at 0x84
l_kernel_00020621: mov dword [dword 0x20896],0x0
pf_at 0x8e
l_kernel_0002062b: mov dword [dword 0x2089a],0x0
pf_at 0x98
l_kernel_00020635: mov dword [dword 0x2089e],0x0
pf_at 0xa2
l_kernel_0002063f: cli
pf_at 0xa3
l_kernel_00020640: lgdt [dword 0x20828]
pf_at 0xaa
l_kernel_00020647: jmp word 0x18:0x64d

section part16 start=0x64d vstart=0x64d align=1
bits 16
pf_at 0x0
l_kernel_0000064d: mov ax,0x20
pf_at 0x3
l_kernel_00000650: mov ds,ax
pf_at 0x5
l_kernel_00000652: mov es,ax
pf_at 0x7
l_kernel_00000654: mov fs,ax
pf_at 0x9
l_kernel_00000656: mov gs,ax
pf_at 0xb
l_kernel_00000658: mov ss,ax
pf_at 0xd
l_kernel_0000065a: mov sp,0xfffc
pf_at 0x10
l_kernel_0000065d: mov eax,cr0
pf_at 0x13
l_kernel_00000660: and al,0xfe
pf_at 0x15
l_kernel_00000662: mov cr0,eax
pf_at 0x18
l_kernel_00000665: jmp 0x2000:0x66a
pf_at 0x1d
l_kernel_0000066a: mov ax,0x2000
pf_at 0x20
l_kernel_0000066d: mov ds,ax
pf_at 0x22
l_kernel_0000066f: mov es,ax
pf_at 0x24
l_kernel_00000671: mov fs,ax
pf_at 0x26
l_kernel_00000673: mov gs,ax
pf_at 0x28
l_kernel_00000675: mov ax,0x800
pf_at 0x2b
l_kernel_00000678: mov ss,ax
pf_at 0x2d
l_kernel_0000067a: mov sp,0xfffc
pf_at 0x30
l_kernel_0000067d: sti
pf_at 0x31
l_kernel_0000067e: mov ax,0x1000
pf_at 0x34
l_kernel_00000681: mov es,ax
pf_at 0x36
l_kernel_00000683: mov di,0x7c00
pf_at 0x39
l_kernel_00000686: mov cx,0x100
pf_at 0x3c
l_kernel_00000689: xor ax,ax
pf_at 0x3e
l_kernel_0000068b: rep stosw
pf_at 0x40
l_kernel_0000068d: mov di,0x7c00
pf_at 0x43
l_kernel_00000690: mov dword [es:di],0x32454256
pf_at 0x4b
l_kernel_00000698: mov ax,0x4f00
pf_at 0x4e
l_kernel_0000069b: int 0x10
pf_at 0x50
l_kernel_0000069d: cmp ax,byte +0x4f
pf_at 0x53
l_kernel_000006a0: jnz near 0x7b9
pf_at 0x57
l_kernel_000006a4: mov ax,[es:0x7c0e]
pf_at 0x5b
l_kernel_000006a8: mov [0x872],ax
pf_at 0x5e
l_kernel_000006ab: mov ax,[es:0x7c10]
pf_at 0x62
l_kernel_000006af: mov [0x874],ax
pf_at 0x65
l_kernel_000006b2: mov ax,[cs:0x874]
pf_at 0x69
l_kernel_000006b6: mov ds,ax
pf_at 0x6b
l_kernel_000006b8: mov si,[cs:0x872]
pf_at 0x70
l_kernel_000006bd: mov cx,[si]
pf_at 0x72
l_kernel_000006bf: cmp cx,byte -0x1
pf_at 0x75
l_kernel_000006c2: jz near 0x7b9
pf_at 0x79
l_kernel_000006c6: add si,byte +0x2
pf_at 0x7c
l_kernel_000006c9: mov [cs:0x872],si
pf_at 0x81
l_kernel_000006ce: mov ax,0x2000
pf_at 0x84
l_kernel_000006d1: mov ds,ax
pf_at 0x86
l_kernel_000006d3: mov ax,0x1000
pf_at 0x89
l_kernel_000006d6: mov es,ax
pf_at 0x8b
l_kernel_000006d8: mov di,0x7e00
pf_at 0x8e
l_kernel_000006db: mov cx,0x80
pf_at 0x91
l_kernel_000006de: xor ax,ax
pf_at 0x93
l_kernel_000006e0: rep stosw
pf_at 0x95
l_kernel_000006e2: mov di,0x7e00
pf_at 0x98
l_kernel_000006e5: mov ax,0x4f01
pf_at 0x9b
l_kernel_000006e8: int 0x10
pf_at 0x9d
l_kernel_000006ea: cmp ax,byte +0x4f
pf_at 0xa0
l_kernel_000006ed: jnz short 0x6b2
pf_at 0xa2
l_kernel_000006ef: mov ax,0x1000
pf_at 0xa5
l_kernel_000006f2: mov ds,ax
pf_at 0xa7
l_kernel_000006f4: mov ax,[0x7e00]
pf_at 0xaa
l_kernel_000006f7: test ax,0x1
pf_at 0xad
l_kernel_000006fa: jz short 0x6b2
pf_at 0xaf
l_kernel_000006fc: test ax,0x10
pf_at 0xb2
l_kernel_000006ff: jz short 0x6b2
pf_at 0xb4
l_kernel_00000701: test ax,0x80
pf_at 0xb7
l_kernel_00000704: jz short 0x6b2
pf_at 0xb9
l_kernel_00000706: cmp word [0x7e12],0x500
pf_at 0xbf
l_kernel_0000070c: jnz short 0x6b2
pf_at 0xc1
l_kernel_0000070e: cmp word [0x7e14],0x320
pf_at 0xc7
l_kernel_00000714: jnz short 0x6b2
pf_at 0xc9
l_kernel_00000716: cmp byte [0x7e19],0x20
pf_at 0xce
l_kernel_0000071b: jnz short 0x6b2
pf_at 0xd0
l_kernel_0000071d: cmp byte [0x7e1b],0x6
pf_at 0xd5
l_kernel_00000722: jnz short 0x6b2
pf_at 0xd7
l_kernel_00000724: mov bx,cx
pf_at 0xd9
l_kernel_00000726: or bx,0x4000
pf_at 0xdd
l_kernel_0000072a: mov ax,0x4f02
pf_at 0xe0
l_kernel_0000072d: int 0x10
pf_at 0xe2
l_kernel_0000072f: cmp ax,byte +0x4f
pf_at 0xe5
l_kernel_00000732: jnz near 0x7b9
pf_at 0xe9
l_kernel_00000736: mov eax,[0x7e28]
pf_at 0xed
l_kernel_0000073a: mov [cs:0x876],eax
pf_at 0xf2
l_kernel_0000073f: xor eax,eax
pf_at 0xf5
l_kernel_00000742: mov ax,[0x7e10]
pf_at 0xf8
l_kernel_00000745: mov [cs:0x87a],eax
pf_at 0xfd
l_kernel_0000074a: xor eax,eax
pf_at 0x100
l_kernel_0000074d: mov ax,[0x7e12]
pf_at 0x103
l_kernel_00000750: mov [cs:0x87e],eax
pf_at 0x108
l_kernel_00000755: xor eax,eax
pf_at 0x10b
l_kernel_00000758: mov ax,[0x7e14]
pf_at 0x10e
l_kernel_0000075b: mov [cs:0x882],eax
pf_at 0x113
l_kernel_00000760: xor eax,eax
pf_at 0x116
l_kernel_00000763: mov al,[0x7e19]
pf_at 0x119
l_kernel_00000766: mov [cs:0x886],eax
pf_at 0x11e
l_kernel_0000076b: xor eax,eax
pf_at 0x121
l_kernel_0000076e: mov al,[0x7e1f]
pf_at 0x124
l_kernel_00000771: mov [cs:0x88a],eax
pf_at 0x129
l_kernel_00000776: xor eax,eax
pf_at 0x12c
l_kernel_00000779: mov al,[0x7e20]
pf_at 0x12f
l_kernel_0000077c: mov [cs:0x88e],eax
pf_at 0x134
l_kernel_00000781: xor eax,eax
pf_at 0x137
l_kernel_00000784: mov al,[0x7e21]
pf_at 0x13a
l_kernel_00000787: mov [cs:0x892],eax
pf_at 0x13f
l_kernel_0000078c: xor eax,eax
pf_at 0x142
l_kernel_0000078f: mov al,[0x7e22]
pf_at 0x145
l_kernel_00000792: mov [cs:0x896],eax
pf_at 0x14a
l_kernel_00000797: xor eax,eax
pf_at 0x14d
l_kernel_0000079a: mov al,[0x7e23]
pf_at 0x150
l_kernel_0000079d: mov [cs:0x89a],eax
pf_at 0x155
l_kernel_000007a2: xor eax,eax
pf_at 0x158
l_kernel_000007a5: mov al,[0x7e24]
pf_at 0x15b
l_kernel_000007a8: mov [cs:0x89e],eax
pf_at 0x160
l_kernel_000007ad: mov dword [cs:0x86e],0x1
pf_at 0x16a
l_kernel_000007b7: jmp short 0x7c3
pf_at 0x16c
l_kernel_000007b9: mov dword [cs:0x86e],0x0
pf_at 0x176
l_kernel_000007c3: cli
pf_at 0x177
l_kernel_000007c4: lgdt [cs:0x828]
pf_at 0x17d
l_kernel_000007ca: mov eax,cr0
pf_at 0x180
l_kernel_000007cd: or al,0x1
pf_at 0x182
l_kernel_000007cf: mov cr0,eax
pf_at 0x185
l_kernel_000007d2: jmp dword 0x8:0x207da

section part17 start=0x7da vstart=0x207da align=1
bits 32
pf_at 0x0
l_kernel_000207da: mov ax,0x10
pf_at 0x4
l_kernel_000207de: o16 mov ds,ax
pf_at 0x7
l_kernel_000207e1: o16 mov es,ax
pf_at 0xa
l_kernel_000207e4: o16 mov fs,ax
pf_at 0xd
l_kernel_000207e7: o16 mov gs,ax
pf_at 0x10
l_kernel_000207ea: o16 mov ss,ax
pf_at 0x13
l_kernel_000207ed: mov esp,[dword 0x2082e]
pf_at 0x19
l_kernel_000207f3: mov eax,[0x2086e]
pf_at 0x1e
l_kernel_000207f8: pop ebp
pf_at 0x1f
l_kernel_000207f9: pop edi
pf_at 0x20
l_kernel_000207fa: pop esi
pf_at 0x21
l_kernel_000207fb: pop ebx
pf_at 0x22
l_kernel_000207fc: popf
pf_at 0x23
l_kernel_000207fd: ret
pf_at 0x24
l_kernel_000207fe: xchg ax,ax

section part18 start=0x800 vstart=0x0 align=1
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
    times 2 db 0
    db 0x08, 0x02
    times 117 db 0


%include "kernel_abi.inc"
section bootstrap start=pf_bootstrap_offset vstart=0x20000+pf_bootstrap_offset align=1
bits 32
pf_relocate:
    cld
    mov esi, 0x20000+pf_payload_offset
    mov edi, pf_core_base
    mov ecx, pf_compiled_end-pf_compiled_start
    rep movsb
    xor eax, eax
    mov edi, pf_initialized_end
    mov ecx, pf_state_end-pf_initialized_end
    rep stosb
    call FUN_00023bb1
.halt:
    cli
    hlt
    jmp .halt
section initial_state start=pf_state_start-0x20000 vstart=pf_state_start align=1
incbin "kernel_state.bin"
section c_runtime start=pf_payload_offset vstart=pf_core_base align=1
bits 32
pf_compiled_start:
incbin "kernel_c.bin"
%include "kernel_adapters.inc"
pf_compiled_end:
%if pf_payload_offset+pf_compiled_end-pf_compiled_start >= 0x80000
%error "temporary kernel payload reaches VGA memory"
%endif
%if pf_core_base+pf_compiled_end-pf_compiled_start >= 0x170000
%error "compiled kernel approaches main stack"
%endif
