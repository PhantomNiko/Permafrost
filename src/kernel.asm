%include "kernel_c.inc"
; Permafrost 0.1 — recovered assembly, Pooka's Free Software License.
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
    db 0x1e, 0x07
    times 2 db 0

section part1 start=0x10 vstart=0x20010 align=1
bits 32
pf_at 0x0
l_kernel_00020010: cld
pf_at 0x1
l_kernel_00020011: mov word [dword 0xb8002],0xf4c
pf_at 0xa
l_kernel_0002001a: call 0x22462
pf_at 0xf
l_kernel_0002001f: cli
pf_at 0x10
l_kernel_00020020: hlt
pf_at 0x11
l_kernel_00020021: jmp short 0x2001f
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
l_kernel_00020028: mov [dword 0x206b6],esp
pf_at 0x1e
l_kernel_0002002e: mov word [dword 0x206ba],0x0
pf_at 0x27
l_kernel_00020037: cli
pf_at 0x28
l_kernel_00020038: lgdt [dword 0x206b0]
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
l_kernel_0000008d: mov [cs:0x6ba],ax
pf_at 0x4c
l_kernel_00000091: cli
pf_at 0x4d
l_kernel_00000092: lgdt [cs:0x6b0]
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
l_kernel_000200bb: mov esp,[dword 0x206b6]
pf_at 0x19
l_kernel_000200c1: movzx eax,word [dword 0x206ba]
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
l_kernel_000200d3: mov [dword 0x206b6],esp
pf_at 0x31
l_kernel_000200d9: mov dword [dword 0x206bc],0x0
pf_at 0x3b
l_kernel_000200e3: mov word [dword 0x206c0],0x0
pf_at 0x44
l_kernel_000200ec: mov word [dword 0x206c2],0x0
pf_at 0x4d
l_kernel_000200f5: mov word [dword 0x206c4],0x0
pf_at 0x56
l_kernel_000200fe: cli
pf_at 0x57
l_kernel_000200ff: lgdt [dword 0x206b0]
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
l_kernel_00000144: mov [cs:0x6c0],es
pf_at 0x3d
l_kernel_00000149: mov [cs:0x6c2],bp
pf_at 0x42
l_kernel_0000014e: mov [cs:0x6c4],cx
pf_at 0x47
l_kernel_00000153: mov ax,es
pf_at 0x49
l_kernel_00000155: or ax,bp
pf_at 0x4b
l_kernel_00000157: jz short 0x165
pf_at 0x4d
l_kernel_00000159: mov dword [cs:0x6bc],0x1
pf_at 0x57
l_kernel_00000163: jmp short 0x16f
pf_at 0x59
l_kernel_00000165: mov dword [cs:0x6bc],0x0
pf_at 0x63
l_kernel_0000016f: cli
pf_at 0x64
l_kernel_00000170: lgdt [cs:0x6b0]
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
l_kernel_00020199: mov esp,[dword 0x206b6]
pf_at 0x19
l_kernel_0002019f: mov eax,[0x206bc]
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
l_kernel_000201af: mov [dword 0x206b6],esp
pf_at 0x2f
l_kernel_000201b5: mov dword [dword 0x206e2],0x0
pf_at 0x39
l_kernel_000201bf: cli
pf_at 0x3a
l_kernel_000201c0: lgdt [dword 0x206b0]
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
l_kernel_000001fe: mov ecx,[cs:0x6d2]
pf_at 0x37
l_kernel_00000204: test ecx,ecx
pf_at 0x3a
l_kernel_00000207: jz short 0x278
pf_at 0x3c
l_kernel_00000209: mov eax,[cs:0x6ce]
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
l_kernel_00000230: add eax,[cs:0x6ca]
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
l_kernel_0000025e: mov dl,[cs:0x6c6]
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
l_kernel_0000026d: mov dl,[cs:0x6c6]
pf_at 0xa5
l_kernel_00000272: mov ah,0x42
pf_at 0xa7
l_kernel_00000274: int 0x13
pf_at 0xa9
l_kernel_00000276: jc short 0x284
pf_at 0xab
l_kernel_00000278: mov dword [cs:0x6e2],0x1
pf_at 0xb5
l_kernel_00000282: jmp short 0x28e
pf_at 0xb7
l_kernel_00000284: mov dword [cs:0x6e2],0x0
pf_at 0xc1
l_kernel_0000028e: cli
pf_at 0xc2
l_kernel_0000028f: lgdt [cs:0x6b0]
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
l_kernel_000202b8: mov esp,[dword 0x206b6]
pf_at 0x19
l_kernel_000202be: mov eax,[0x206e2]
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
l_kernel_000202ce: mov [dword 0x206b6],esp
pf_at 0x2f
l_kernel_000202d4: mov dword [dword 0x206e6],0x0
pf_at 0x39
l_kernel_000202de: cli
pf_at 0x3a
l_kernel_000202df: lgdt [dword 0x206b0]
pf_at 0x41
l_kernel_000202e6: jmp word 0x18:0x2ec

section part8 start=0x2ec vstart=0x2ec align=1
bits 16
pf_at 0x0
l_kernel_000002ec: mov ax,0x20
pf_at 0x3
l_kernel_000002ef: mov ds,ax
pf_at 0x5
l_kernel_000002f1: mov es,ax
pf_at 0x7
l_kernel_000002f3: mov fs,ax
pf_at 0x9
l_kernel_000002f5: mov gs,ax
pf_at 0xb
l_kernel_000002f7: mov ss,ax
pf_at 0xd
l_kernel_000002f9: mov sp,0xfffc
pf_at 0x10
l_kernel_000002fc: mov eax,cr0
pf_at 0x13
l_kernel_000002ff: and al,0xfe
pf_at 0x15
l_kernel_00000301: mov cr0,eax
pf_at 0x18
l_kernel_00000304: jmp 0x2000:0x309
pf_at 0x1d
l_kernel_00000309: mov ax,0x2000
pf_at 0x20
l_kernel_0000030c: mov ds,ax
pf_at 0x22
l_kernel_0000030e: mov es,ax
pf_at 0x24
l_kernel_00000310: mov fs,ax
pf_at 0x26
l_kernel_00000312: mov gs,ax
pf_at 0x28
l_kernel_00000314: mov ax,0x800
pf_at 0x2b
l_kernel_00000317: mov ss,ax
pf_at 0x2d
l_kernel_00000319: mov sp,0xfffc
pf_at 0x30
l_kernel_0000031c: sti
pf_at 0x31
l_kernel_0000031d: mov cx,[cs:0x6de]
pf_at 0x36
l_kernel_00000322: test cx,cx
pf_at 0x38
l_kernel_00000324: jz short 0x36a
pf_at 0x3a
l_kernel_00000326: mov ax,0x1000
pf_at 0x3d
l_kernel_00000329: mov ds,ax
pf_at 0x3f
l_kernel_0000032b: mov si,0x7f00
pf_at 0x42
l_kernel_0000032e: mov word [si],0x10
pf_at 0x46
l_kernel_00000332: mov [si+0x2],cx
pf_at 0x49
l_kernel_00000335: mov word [si+0x4],0x0
pf_at 0x4e
l_kernel_0000033a: mov word [si+0x6],0x1000
pf_at 0x53
l_kernel_0000033f: mov eax,[cs:0x6da]
pf_at 0x58
l_kernel_00000344: mov [si+0x8],eax
pf_at 0x5c
l_kernel_00000348: mov dword [si+0xc],0x0
pf_at 0x64
l_kernel_00000350: mov dl,[cs:0x6d6]
pf_at 0x69
l_kernel_00000355: mov ah,0x43
pf_at 0x6b
l_kernel_00000357: int 0x13
pf_at 0x6d
l_kernel_00000359: jnc short 0x36a
pf_at 0x6f
l_kernel_0000035b: xor ah,ah
pf_at 0x71
l_kernel_0000035d: int 0x13
pf_at 0x73
l_kernel_0000035f: mov dl,[cs:0x6d6]
pf_at 0x78
l_kernel_00000364: mov ah,0x43
pf_at 0x7a
l_kernel_00000366: int 0x13
pf_at 0x7c
l_kernel_00000368: jc short 0x376
pf_at 0x7e
l_kernel_0000036a: mov dword [cs:0x6e6],0x1
pf_at 0x88
l_kernel_00000374: jmp short 0x380
pf_at 0x8a
l_kernel_00000376: mov dword [cs:0x6e6],0x0
pf_at 0x94
l_kernel_00000380: cli
pf_at 0x95
l_kernel_00000381: lgdt [cs:0x6b0]
pf_at 0x9b
l_kernel_00000387: mov eax,cr0
pf_at 0x9e
l_kernel_0000038a: or al,0x1
pf_at 0xa0
l_kernel_0000038c: mov cr0,eax
pf_at 0xa3
l_kernel_0000038f: jmp dword 0x8:0x20397

section part9 start=0x397 vstart=0x20397 align=1
bits 32
pf_at 0x0
l_kernel_00020397: mov ax,0x10
pf_at 0x4
l_kernel_0002039b: o16 mov ds,ax
pf_at 0x7
l_kernel_0002039e: o16 mov es,ax
pf_at 0xa
l_kernel_000203a1: o16 mov fs,ax
pf_at 0xd
l_kernel_000203a4: o16 mov gs,ax
pf_at 0x10
l_kernel_000203a7: o16 mov ss,ax
pf_at 0x13
l_kernel_000203aa: mov esp,[dword 0x206b6]
pf_at 0x19
l_kernel_000203b0: mov eax,[0x206e6]
pf_at 0x1e
l_kernel_000203b5: pop ebp
pf_at 0x1f
l_kernel_000203b6: pop edi
pf_at 0x20
l_kernel_000203b7: pop esi
pf_at 0x21
l_kernel_000203b8: pop ebx
pf_at 0x22
l_kernel_000203b9: popf
pf_at 0x23
l_kernel_000203ba: ret
pf_at 0x24
l_kernel_000203bb: pushf
pf_at 0x25
l_kernel_000203bc: push ebx
pf_at 0x26
l_kernel_000203bd: push esi
pf_at 0x27
l_kernel_000203be: push edi
pf_at 0x28
l_kernel_000203bf: push ebp
pf_at 0x29
l_kernel_000203c0: mov [dword 0x206b6],esp
pf_at 0x2f
l_kernel_000203c6: cli
pf_at 0x30
l_kernel_000203c7: lgdt [dword 0x206b0]
pf_at 0x37
l_kernel_000203ce: jmp word 0x18:0x3d4

section part10 start=0x3d4 vstart=0x3d4 align=1
bits 16
pf_at 0x0
l_kernel_000003d4: mov ax,0x20
pf_at 0x3
l_kernel_000003d7: mov ds,ax
pf_at 0x5
l_kernel_000003d9: mov es,ax
pf_at 0x7
l_kernel_000003db: mov fs,ax
pf_at 0x9
l_kernel_000003dd: mov gs,ax
pf_at 0xb
l_kernel_000003df: mov ss,ax
pf_at 0xd
l_kernel_000003e1: mov sp,0xfffc
pf_at 0x10
l_kernel_000003e4: mov eax,cr0
pf_at 0x13
l_kernel_000003e7: and al,0xfe
pf_at 0x15
l_kernel_000003e9: mov cr0,eax
pf_at 0x18
l_kernel_000003ec: jmp 0x2000:0x3f1
pf_at 0x1d
l_kernel_000003f1: mov ax,0x2000
pf_at 0x20
l_kernel_000003f4: mov ds,ax
pf_at 0x22
l_kernel_000003f6: mov es,ax
pf_at 0x24
l_kernel_000003f8: mov fs,ax
pf_at 0x26
l_kernel_000003fa: mov gs,ax
pf_at 0x28
l_kernel_000003fc: mov ax,0x800
pf_at 0x2b
l_kernel_000003ff: mov ss,ax
pf_at 0x2d
l_kernel_00000401: mov sp,0xfffc
pf_at 0x30
l_kernel_00000404: sti
pf_at 0x31
l_kernel_00000405: mov ax,0x13
pf_at 0x34
l_kernel_00000408: int 0x10
pf_at 0x36
l_kernel_0000040a: cli
pf_at 0x37
l_kernel_0000040b: lgdt [cs:0x6b0]
pf_at 0x3d
l_kernel_00000411: mov eax,cr0
pf_at 0x40
l_kernel_00000414: or al,0x1
pf_at 0x42
l_kernel_00000416: mov cr0,eax
pf_at 0x45
l_kernel_00000419: jmp dword 0x8:0x20421

section part11 start=0x421 vstart=0x20421 align=1
bits 32
pf_at 0x0
l_kernel_00020421: mov ax,0x10
pf_at 0x4
l_kernel_00020425: o16 mov ds,ax
pf_at 0x7
l_kernel_00020428: o16 mov es,ax
pf_at 0xa
l_kernel_0002042b: o16 mov fs,ax
pf_at 0xd
l_kernel_0002042e: o16 mov gs,ax
pf_at 0x10
l_kernel_00020431: o16 mov ss,ax
pf_at 0x13
l_kernel_00020434: mov esp,[dword 0x206b6]
pf_at 0x19
l_kernel_0002043a: pop ebp
pf_at 0x1a
l_kernel_0002043b: pop edi
pf_at 0x1b
l_kernel_0002043c: pop esi
pf_at 0x1c
l_kernel_0002043d: pop ebx
pf_at 0x1d
l_kernel_0002043e: popf
pf_at 0x1e
l_kernel_0002043f: ret
pf_at 0x1f
l_kernel_00020440: pushf
pf_at 0x20
l_kernel_00020441: push ebx
pf_at 0x21
l_kernel_00020442: push esi
pf_at 0x22
l_kernel_00020443: push edi
pf_at 0x23
l_kernel_00020444: push ebp
pf_at 0x24
l_kernel_00020445: mov [dword 0x206b6],esp
pf_at 0x2a
l_kernel_0002044b: mov dword [dword 0x206ea],0x0
pf_at 0x34
l_kernel_00020455: mov dword [dword 0x206f2],0x0
pf_at 0x3e
l_kernel_0002045f: mov dword [dword 0x206f6],0x0
pf_at 0x48
l_kernel_00020469: mov dword [dword 0x206fa],0x0
pf_at 0x52
l_kernel_00020473: mov dword [dword 0x206fe],0x0
pf_at 0x5c
l_kernel_0002047d: mov dword [dword 0x20702],0x0
pf_at 0x66
l_kernel_00020487: mov dword [dword 0x20706],0x0
pf_at 0x70
l_kernel_00020491: mov dword [dword 0x2070a],0x0
pf_at 0x7a
l_kernel_0002049b: mov dword [dword 0x2070e],0x0
pf_at 0x84
l_kernel_000204a5: mov dword [dword 0x20712],0x0
pf_at 0x8e
l_kernel_000204af: mov dword [dword 0x20716],0x0
pf_at 0x98
l_kernel_000204b9: mov dword [dword 0x2071a],0x0
pf_at 0xa2
l_kernel_000204c3: cli
pf_at 0xa3
l_kernel_000204c4: lgdt [dword 0x206b0]
pf_at 0xaa
l_kernel_000204cb: jmp word 0x18:0x4d1

section part12 start=0x4d1 vstart=0x4d1 align=1
bits 16
pf_at 0x0
l_kernel_000004d1: mov ax,0x20
pf_at 0x3
l_kernel_000004d4: mov ds,ax
pf_at 0x5
l_kernel_000004d6: mov es,ax
pf_at 0x7
l_kernel_000004d8: mov fs,ax
pf_at 0x9
l_kernel_000004da: mov gs,ax
pf_at 0xb
l_kernel_000004dc: mov ss,ax
pf_at 0xd
l_kernel_000004de: mov sp,0xfffc
pf_at 0x10
l_kernel_000004e1: mov eax,cr0
pf_at 0x13
l_kernel_000004e4: and al,0xfe
pf_at 0x15
l_kernel_000004e6: mov cr0,eax
pf_at 0x18
l_kernel_000004e9: jmp 0x2000:0x4ee
pf_at 0x1d
l_kernel_000004ee: mov ax,0x2000
pf_at 0x20
l_kernel_000004f1: mov ds,ax
pf_at 0x22
l_kernel_000004f3: mov es,ax
pf_at 0x24
l_kernel_000004f5: mov fs,ax
pf_at 0x26
l_kernel_000004f7: mov gs,ax
pf_at 0x28
l_kernel_000004f9: mov ax,0x800
pf_at 0x2b
l_kernel_000004fc: mov ss,ax
pf_at 0x2d
l_kernel_000004fe: mov sp,0xfffc
pf_at 0x30
l_kernel_00000501: sti
pf_at 0x31
l_kernel_00000502: mov ax,0x1000
pf_at 0x34
l_kernel_00000505: mov es,ax
pf_at 0x36
l_kernel_00000507: mov di,0x7c00
pf_at 0x39
l_kernel_0000050a: mov cx,0x100
pf_at 0x3c
l_kernel_0000050d: xor ax,ax
pf_at 0x3e
l_kernel_0000050f: rep stosw
pf_at 0x40
l_kernel_00000511: mov di,0x7c00
pf_at 0x43
l_kernel_00000514: mov dword [es:di],0x32454256
pf_at 0x4b
l_kernel_0000051c: mov ax,0x4f00
pf_at 0x4e
l_kernel_0000051f: int 0x10
pf_at 0x50
l_kernel_00000521: cmp ax,byte +0x4f
pf_at 0x53
l_kernel_00000524: jnz near 0x63d
pf_at 0x57
l_kernel_00000528: mov ax,[es:0x7c0e]
pf_at 0x5b
l_kernel_0000052c: mov [0x6ee],ax
pf_at 0x5e
l_kernel_0000052f: mov ax,[es:0x7c10]
pf_at 0x62
l_kernel_00000533: mov [0x6f0],ax
pf_at 0x65
l_kernel_00000536: mov ax,[cs:0x6f0]
pf_at 0x69
l_kernel_0000053a: mov ds,ax
pf_at 0x6b
l_kernel_0000053c: mov si,[cs:0x6ee]
pf_at 0x70
l_kernel_00000541: mov cx,[si]
pf_at 0x72
l_kernel_00000543: cmp cx,byte -0x1
pf_at 0x75
l_kernel_00000546: jz near 0x63d
pf_at 0x79
l_kernel_0000054a: add si,byte +0x2
pf_at 0x7c
l_kernel_0000054d: mov [cs:0x6ee],si
pf_at 0x81
l_kernel_00000552: mov ax,0x2000
pf_at 0x84
l_kernel_00000555: mov ds,ax
pf_at 0x86
l_kernel_00000557: mov ax,0x1000
pf_at 0x89
l_kernel_0000055a: mov es,ax
pf_at 0x8b
l_kernel_0000055c: mov di,0x7e00
pf_at 0x8e
l_kernel_0000055f: mov cx,0x80
pf_at 0x91
l_kernel_00000562: xor ax,ax
pf_at 0x93
l_kernel_00000564: rep stosw
pf_at 0x95
l_kernel_00000566: mov di,0x7e00
pf_at 0x98
l_kernel_00000569: mov ax,0x4f01
pf_at 0x9b
l_kernel_0000056c: int 0x10
pf_at 0x9d
l_kernel_0000056e: cmp ax,byte +0x4f
pf_at 0xa0
l_kernel_00000571: jnz short 0x536
pf_at 0xa2
l_kernel_00000573: mov ax,0x1000
pf_at 0xa5
l_kernel_00000576: mov ds,ax
pf_at 0xa7
l_kernel_00000578: mov ax,[0x7e00]
pf_at 0xaa
l_kernel_0000057b: test ax,0x1
pf_at 0xad
l_kernel_0000057e: jz short 0x536
pf_at 0xaf
l_kernel_00000580: test ax,0x10
pf_at 0xb2
l_kernel_00000583: jz short 0x536
pf_at 0xb4
l_kernel_00000585: test ax,0x80
pf_at 0xb7
l_kernel_00000588: jz short 0x536
pf_at 0xb9
l_kernel_0000058a: cmp word [0x7e12],0x500
pf_at 0xbf
l_kernel_00000590: jnz short 0x536
pf_at 0xc1
l_kernel_00000592: cmp word [0x7e14],0x320
pf_at 0xc7
l_kernel_00000598: jnz short 0x536
pf_at 0xc9
l_kernel_0000059a: cmp byte [0x7e19],0x20
pf_at 0xce
l_kernel_0000059f: jnz short 0x536
pf_at 0xd0
l_kernel_000005a1: cmp byte [0x7e1b],0x6
pf_at 0xd5
l_kernel_000005a6: jnz short 0x536
pf_at 0xd7
l_kernel_000005a8: mov bx,cx
pf_at 0xd9
l_kernel_000005aa: or bx,0x4000
pf_at 0xdd
l_kernel_000005ae: mov ax,0x4f02
pf_at 0xe0
l_kernel_000005b1: int 0x10
pf_at 0xe2
l_kernel_000005b3: cmp ax,byte +0x4f
pf_at 0xe5
l_kernel_000005b6: jnz near 0x63d
pf_at 0xe9
l_kernel_000005ba: mov eax,[0x7e28]
pf_at 0xed
l_kernel_000005be: mov [cs:0x6f2],eax
pf_at 0xf2
l_kernel_000005c3: xor eax,eax
pf_at 0xf5
l_kernel_000005c6: mov ax,[0x7e10]
pf_at 0xf8
l_kernel_000005c9: mov [cs:0x6f6],eax
pf_at 0xfd
l_kernel_000005ce: xor eax,eax
pf_at 0x100
l_kernel_000005d1: mov ax,[0x7e12]
pf_at 0x103
l_kernel_000005d4: mov [cs:0x6fa],eax
pf_at 0x108
l_kernel_000005d9: xor eax,eax
pf_at 0x10b
l_kernel_000005dc: mov ax,[0x7e14]
pf_at 0x10e
l_kernel_000005df: mov [cs:0x6fe],eax
pf_at 0x113
l_kernel_000005e4: xor eax,eax
pf_at 0x116
l_kernel_000005e7: mov al,[0x7e19]
pf_at 0x119
l_kernel_000005ea: mov [cs:0x702],eax
pf_at 0x11e
l_kernel_000005ef: xor eax,eax
pf_at 0x121
l_kernel_000005f2: mov al,[0x7e1f]
pf_at 0x124
l_kernel_000005f5: mov [cs:0x706],eax
pf_at 0x129
l_kernel_000005fa: xor eax,eax
pf_at 0x12c
l_kernel_000005fd: mov al,[0x7e20]
pf_at 0x12f
l_kernel_00000600: mov [cs:0x70a],eax
pf_at 0x134
l_kernel_00000605: xor eax,eax
pf_at 0x137
l_kernel_00000608: mov al,[0x7e21]
pf_at 0x13a
l_kernel_0000060b: mov [cs:0x70e],eax
pf_at 0x13f
l_kernel_00000610: xor eax,eax
pf_at 0x142
l_kernel_00000613: mov al,[0x7e22]
pf_at 0x145
l_kernel_00000616: mov [cs:0x712],eax
pf_at 0x14a
l_kernel_0000061b: xor eax,eax
pf_at 0x14d
l_kernel_0000061e: mov al,[0x7e23]
pf_at 0x150
l_kernel_00000621: mov [cs:0x716],eax
pf_at 0x155
l_kernel_00000626: xor eax,eax
pf_at 0x158
l_kernel_00000629: mov al,[0x7e24]
pf_at 0x15b
l_kernel_0000062c: mov [cs:0x71a],eax
pf_at 0x160
l_kernel_00000631: mov dword [cs:0x6ea],0x1
pf_at 0x16a
l_kernel_0000063b: jmp short 0x647
pf_at 0x16c
l_kernel_0000063d: mov dword [cs:0x6ea],0x0
pf_at 0x176
l_kernel_00000647: cli
pf_at 0x177
l_kernel_00000648: lgdt [cs:0x6b0]
pf_at 0x17d
l_kernel_0000064e: mov eax,cr0
pf_at 0x180
l_kernel_00000651: or al,0x1
pf_at 0x182
l_kernel_00000653: mov cr0,eax
pf_at 0x185
l_kernel_00000656: jmp dword 0x8:0x2065e

section part13 start=0x65e vstart=0x2065e align=1
bits 32
pf_at 0x0
l_kernel_0002065e: mov ax,0x10
pf_at 0x4
l_kernel_00020662: o16 mov ds,ax
pf_at 0x7
l_kernel_00020665: o16 mov es,ax
pf_at 0xa
l_kernel_00020668: o16 mov fs,ax
pf_at 0xd
l_kernel_0002066b: o16 mov gs,ax
pf_at 0x10
l_kernel_0002066e: o16 mov ss,ax
pf_at 0x13
l_kernel_00020671: mov esp,[dword 0x206b6]
pf_at 0x19
l_kernel_00020677: mov eax,[0x206ea]
pf_at 0x1e
l_kernel_0002067c: pop ebp
pf_at 0x1f
l_kernel_0002067d: pop edi
pf_at 0x20
l_kernel_0002067e: pop esi
pf_at 0x21
l_kernel_0002067f: pop ebx
pf_at 0x22
l_kernel_00020680: popf
pf_at 0x23
l_kernel_00020681: ret
pf_at 0x24
l_kernel_00020682: nop word [byte eax+eax+0]

section part14 start=0x688 vstart=0x0 align=1
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
    db 0x88, 0x06, 0x02
    times 105 db 0

; The operating-system implementation is compiled from kernel/core C source.
%include "kernel_abi.inc"
section initial_state start=0xc8c1 vstart=0x2c8c1 align=1
incbin "kernel_state.bin"
section c_runtime start=0x51000 vstart=0x71000 align=1
incbin "kernel_c.bin"
section abi_adapters start=0x51000+pf_core_size vstart=0x71000+pf_core_size align=1
bits 32
%include "kernel_adapters.inc"
