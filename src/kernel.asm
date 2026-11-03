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

section part15 start=0x71e vstart=0x2071e align=1
bits 32
pf_at 0x0
l_kernel_0002071e: push ebp
pf_at 0x1
l_kernel_0002071f: mov ebp,esp
pf_at 0x3
l_kernel_00020721: mov byte [dword 0x2f0b0],0x0
pf_at 0xa
l_kernel_00020728: pop ebp
pf_at 0xb
l_kernel_00020729: jmp near 0x2072e
pf_at 0x10
l_kernel_0002072e: cmp byte [dword 0x2f0b0],0x0
pf_at 0x17
l_kernel_00020735: jnz short 0x20787
pf_at 0x19
l_kernel_00020737: push ebp
pf_at 0x1a
l_kernel_00020738: mov ebp,esp
pf_at 0x1c
l_kernel_0002073a: mov eax,[0x6088]
pf_at 0x21
l_kernel_0002073f: mov ecx,eax
pf_at 0x23
l_kernel_00020741: and ecx,byte -0x10
pf_at 0x26
l_kernel_00020744: cmp eax,0x300001
pf_at 0x2b
l_kernel_00020749: mov eax,0x4000000
pf_at 0x30
l_kernel_0002074e: cmovnc eax,ecx
pf_at 0x33
l_kernel_00020751: lea ecx,[eax-0x30000c]
pf_at 0x39
l_kernel_00020757: cmp eax,0x30001d
pf_at 0x3e
l_kernel_0002075c: mov dword [dword 0x2f0b4],0x300000
pf_at 0x48
l_kernel_00020766: mov eax,0x3cffff4
pf_at 0x4d
l_kernel_0002076b: cmovnc eax,ecx
pf_at 0x50
l_kernel_0002076e: mov [0x300000],eax
pf_at 0x55
l_kernel_00020773: and dword [dword 0x300004],byte +0x0
pf_at 0x5c
l_kernel_0002077a: mov al,0x1
pf_at 0x5e
l_kernel_0002077c: mov [0x300008],al
pf_at 0x63
l_kernel_00020781: mov [0x2f0b0],al
pf_at 0x68
l_kernel_00020786: pop ebp
pf_at 0x69
l_kernel_00020787: ret
pf_at 0x6a
l_kernel_00020788: push ebp
pf_at 0x6b
l_kernel_00020789: mov ebp,esp
pf_at 0x6d
l_kernel_0002078b: sub esp,byte +0x8
pf_at 0x70
l_kernel_0002078e: call 0x2072e
pf_at 0x75
l_kernel_00020793: mov ecx,0x2f0b4
pf_at 0x7a
l_kernel_00020798: xor eax,eax
pf_at 0x7c
l_kernel_0002079a: mov ecx,[ecx]
pf_at 0x7e
l_kernel_0002079c: test ecx,ecx
pf_at 0x80
l_kernel_0002079e: jz short 0x207ad
pf_at 0x82
l_kernel_000207a0: cmp byte [ecx+0x8],0x1
pf_at 0x86
l_kernel_000207a4: jnz short 0x207a8
pf_at 0x88
l_kernel_000207a6: add eax,[ecx]
pf_at 0x8a
l_kernel_000207a8: add ecx,byte +0x4
pf_at 0x8d
l_kernel_000207ab: jmp short 0x2079a
pf_at 0x8f
l_kernel_000207ad: add esp,byte +0x8
pf_at 0x92
l_kernel_000207b0: pop ebp
pf_at 0x93
l_kernel_000207b1: ret
pf_at 0x94
l_kernel_000207b2: push ebp
pf_at 0x95
l_kernel_000207b3: mov ebp,esp
pf_at 0x97
l_kernel_000207b5: push ebx
pf_at 0x98
l_kernel_000207b6: push edi
pf_at 0x99
l_kernel_000207b7: push esi
pf_at 0x9a
l_kernel_000207b8: sub esp,byte +0xc
pf_at 0x9d
l_kernel_000207bb: mov edi,[ebp+0x8]
pf_at 0xa0
l_kernel_000207be: xor esi,esi
pf_at 0xa2
l_kernel_000207c0: test edi,edi
pf_at 0xa4
l_kernel_000207c2: jz short 0x207fb
pf_at 0xa6
l_kernel_000207c4: call 0x2072e
pf_at 0xab
l_kernel_000207c9: add edi,byte +0xf
pf_at 0xae
l_kernel_000207cc: and edi,byte -0x10
pf_at 0xb1
l_kernel_000207cf: mov ebx,0x2f0b4
pf_at 0xb6
l_kernel_000207d4: mov ebx,[ebx]
pf_at 0xb8
l_kernel_000207d6: test ebx,ebx
pf_at 0xba
l_kernel_000207d8: jz short 0x207fb
pf_at 0xbc
l_kernel_000207da: cmp byte [ebx+0x8],0x1
pf_at 0xc0
l_kernel_000207de: jnz short 0x207e4
pf_at 0xc2
l_kernel_000207e0: cmp [ebx],edi
pf_at 0xc4
l_kernel_000207e2: jnc short 0x207e9
pf_at 0xc6
l_kernel_000207e4: add ebx,byte +0x4
pf_at 0xc9
l_kernel_000207e7: jmp short 0x207d4
pf_at 0xcb
l_kernel_000207e9: mov ecx,ebx
pf_at 0xcd
l_kernel_000207eb: mov edx,edi
pf_at 0xcf
l_kernel_000207ed: call 0x20805
pf_at 0xd4
l_kernel_000207f2: mov byte [ebx+0x8],0x0
pf_at 0xd8
l_kernel_000207f6: add ebx,byte +0xc
pf_at 0xdb
l_kernel_000207f9: mov esi,ebx
pf_at 0xdd
l_kernel_000207fb: mov eax,esi
pf_at 0xdf
l_kernel_000207fd: add esp,byte +0xc
pf_at 0xe2
l_kernel_00020800: pop esi
pf_at 0xe3
l_kernel_00020801: pop edi
pf_at 0xe4
l_kernel_00020802: pop ebx
pf_at 0xe5
l_kernel_00020803: pop ebp
pf_at 0xe6
l_kernel_00020804: ret
pf_at 0xe7
l_kernel_00020805: test ecx,ecx
pf_at 0xe9
l_kernel_00020807: jz short 0x2083a
pf_at 0xeb
l_kernel_00020809: push ebp
pf_at 0xec
l_kernel_0002080a: mov ebp,esp
pf_at 0xee
l_kernel_0002080c: push esi
pf_at 0xef
l_kernel_0002080d: add edx,byte +0xf
pf_at 0xf2
l_kernel_00020810: and edx,byte -0x10
pf_at 0xf5
l_kernel_00020813: mov eax,[ecx]
pf_at 0xf7
l_kernel_00020815: lea esi,[edx+0x1c]
pf_at 0xfa
l_kernel_00020818: cmp eax,esi
pf_at 0xfc
l_kernel_0002081a: jc short 0x20838
pf_at 0xfe
l_kernel_0002081c: lea esi,[ecx+edx]
pf_at 0x101
l_kernel_0002081f: add esi,byte +0xc
pf_at 0x104
l_kernel_00020822: sub eax,edx
pf_at 0x106
l_kernel_00020824: add eax,byte -0xc
pf_at 0x109
l_kernel_00020827: mov [esi],eax
pf_at 0x10b
l_kernel_00020829: mov eax,[ecx+0x4]
pf_at 0x10e
l_kernel_0002082c: mov [esi+0x4],eax
pf_at 0x111
l_kernel_0002082f: mov byte [esi+0x8],0x1
pf_at 0x115
l_kernel_00020833: mov [ecx],edx
pf_at 0x117
l_kernel_00020835: mov [ecx+0x4],esi
pf_at 0x11a
l_kernel_00020838: pop esi
pf_at 0x11b
l_kernel_00020839: pop ebp
pf_at 0x11c
l_kernel_0002083a: ret
pf_at 0x11d
l_kernel_0002083b: push ebp
pf_at 0x11e
l_kernel_0002083c: mov ebp,esp
pf_at 0x120
l_kernel_0002083e: push ebx
pf_at 0x121
l_kernel_0002083f: push esi
pf_at 0x122
l_kernel_00020840: mov ecx,[ebp+0xc]
pf_at 0x125
l_kernel_00020843: mov esi,[ebp+0x8]
pf_at 0x128
l_kernel_00020846: mov ebx,[ebp+0x10]
pf_at 0x12b
l_kernel_00020849: test ebx,ebx
pf_at 0x12d
l_kernel_0002084b: jng short 0x2086c
pf_at 0x12f
l_kernel_0002084d: xor eax,eax
pf_at 0x131
l_kernel_0002084f: mov edx,0x0
pf_at 0x136
l_kernel_00020854: cmp ebx,byte +0x3f
pf_at 0x139
l_kernel_00020857: ja short 0x20870
pf_at 0x13b
l_kernel_00020859: sub esp,byte +0x4
pf_at 0x13e
l_kernel_0002085c: movzx eax,bl
pf_at 0x141
l_kernel_0002085f: push eax
pf_at 0x142
l_kernel_00020860: push ecx
pf_at 0x143
l_kernel_00020861: push esi
pf_at 0x144
l_kernel_00020862: call 0x2083b
pf_at 0x149
l_kernel_00020867: add esp,byte +0x10
pf_at 0x14c
l_kernel_0002086a: jmp short 0x20870
pf_at 0x14e
l_kernel_0002086c: mov eax,esi
pf_at 0x150
l_kernel_0002086e: mov edx,ecx
pf_at 0x152
l_kernel_00020870: pop esi
pf_at 0x153
l_kernel_00020871: pop ebx
pf_at 0x154
l_kernel_00020872: pop ebp
pf_at 0x155
l_kernel_00020873: ret
pf_at 0x156
l_kernel_00020874: push ebp
pf_at 0x157
l_kernel_00020875: mov ebp,esp
pf_at 0x159
l_kernel_00020877: push ebx
pf_at 0x15a
l_kernel_00020878: push esi
pf_at 0x15b
l_kernel_00020879: mov ecx,[ebp+0xc]
pf_at 0x15e
l_kernel_0002087c: mov esi,[ebp+0x8]
pf_at 0x161
l_kernel_0002087f: mov ebx,[ebp+0x10]
pf_at 0x164
l_kernel_00020882: test ebx,ebx
pf_at 0x166
l_kernel_00020884: jng short 0x208a5
pf_at 0x168
l_kernel_00020886: xor eax,eax
pf_at 0x16a
l_kernel_00020888: mov edx,0x0
pf_at 0x16f
l_kernel_0002088d: cmp ebx,byte +0x3f
pf_at 0x172
l_kernel_00020890: ja short 0x208a9
pf_at 0x174
l_kernel_00020892: sub esp,byte +0x4
pf_at 0x177
l_kernel_00020895: movzx eax,bl
pf_at 0x17a
l_kernel_00020898: push eax
pf_at 0x17b
l_kernel_00020899: push ecx
pf_at 0x17c
l_kernel_0002089a: push esi
pf_at 0x17d
l_kernel_0002089b: call 0x20874
pf_at 0x182
l_kernel_000208a0: add esp,byte +0x10
pf_at 0x185
l_kernel_000208a3: jmp short 0x208a9
pf_at 0x187
l_kernel_000208a5: mov eax,esi
pf_at 0x189
l_kernel_000208a7: mov edx,ecx
pf_at 0x18b
l_kernel_000208a9: pop esi
pf_at 0x18c
l_kernel_000208aa: pop ebx
pf_at 0x18d
l_kernel_000208ab: pop ebp
pf_at 0x18e
l_kernel_000208ac: ret
pf_at 0x18f
l_kernel_000208ad: push ebp
pf_at 0x190
l_kernel_000208ae: mov ebp,esp
pf_at 0x192
l_kernel_000208b0: sub esp,byte +0x8
pf_at 0x195
l_kernel_000208b3: mov ecx,[ebp+0x8]
pf_at 0x198
l_kernel_000208b6: mov edx,[ebp+0xc]
pf_at 0x19b
l_kernel_000208b9: sub esp,byte +0x4
pf_at 0x19e
l_kernel_000208bc: push byte +0x0
pf_at 0x1a0
l_kernel_000208be: push dword [ebp+0x14]
pf_at 0x1a3
l_kernel_000208c1: push dword [ebp+0x10]
pf_at 0x1a6
l_kernel_000208c4: call 0x208ce
pf_at 0x1ab
l_kernel_000208c9: add esp,byte +0x18
pf_at 0x1ae
l_kernel_000208cc: pop ebp
pf_at 0x1af
l_kernel_000208cd: ret
pf_at 0x1b0
l_kernel_000208ce: push ebp
pf_at 0x1b1
l_kernel_000208cf: mov ebp,esp
pf_at 0x1b3
l_kernel_000208d1: push ebx
pf_at 0x1b4
l_kernel_000208d2: push edi
pf_at 0x1b5
l_kernel_000208d3: push esi
pf_at 0x1b6
l_kernel_000208d4: sub esp,byte +0x1c
pf_at 0x1b9
l_kernel_000208d7: mov [ebp-0x18],edx
pf_at 0x1bc
l_kernel_000208da: mov [ebp-0x14],ecx
pf_at 0x1bf
l_kernel_000208dd: mov eax,[ebp+0x8]
pf_at 0x1c2
l_kernel_000208e0: or eax,[ebp+0xc]
pf_at 0x1c5
l_kernel_000208e3: mov esi,[ebp+0x10]
pf_at 0x1c8
l_kernel_000208e6: jz near 0x2099a
pf_at 0x1ce
l_kernel_000208ec: mov dword [ebp-0x10],0x0
pf_at 0x1d5
l_kernel_000208f3: push byte +0x3f
pf_at 0x1d7
l_kernel_000208f5: pop ecx
pf_at 0x1d8
l_kernel_000208f6: xor edx,edx
pf_at 0x1da
l_kernel_000208f8: xor ebx,ebx
pf_at 0x1dc
l_kernel_000208fa: xor edi,edi
pf_at 0x1de
l_kernel_000208fc: test ecx,ecx
pf_at 0x1e0
l_kernel_000208fe: js near 0x20986
pf_at 0x1e6
l_kernel_00020904: mov [ebp-0x28],edx
pf_at 0x1e9
l_kernel_00020907: shld edi,ebx,0x1
pf_at 0x1ed
l_kernel_0002090b: sub esp,byte +0x4
pf_at 0x1f0
l_kernel_0002090e: mov [ebp-0x20],ecx
pf_at 0x1f3
l_kernel_00020911: movzx esi,cl
pf_at 0x1f6
l_kernel_00020914: push esi
pf_at 0x1f7
l_kernel_00020915: push dword [ebp-0x18]
pf_at 0x1fa
l_kernel_00020918: push dword [ebp-0x14]
pf_at 0x1fd
l_kernel_0002091b: call 0x20874
pf_at 0x202
l_kernel_00020920: add esp,byte +0x10
pf_at 0x205
l_kernel_00020923: and eax,byte +0x1
pf_at 0x208
l_kernel_00020926: lea ebx,[eax+ebx*2]
pf_at 0x20b
l_kernel_00020929: sub esp,byte +0x4
pf_at 0x20e
l_kernel_0002092c: push esi
pf_at 0x20f
l_kernel_0002092d: push byte +0x0
pf_at 0x211
l_kernel_0002092f: push byte +0x1
pf_at 0x213
l_kernel_00020931: call 0x2083b
pf_at 0x218
l_kernel_00020936: add esp,byte +0x10
pf_at 0x21b
l_kernel_00020939: mov [ebp-0x1c],eax
pf_at 0x21e
l_kernel_0002093c: xor ecx,ecx
pf_at 0x220
l_kernel_0002093e: cmp ebx,[ebp+0x8]
pf_at 0x223
l_kernel_00020941: mov [ebp-0x24],edi
pf_at 0x226
l_kernel_00020944: mov eax,edi
pf_at 0x228
l_kernel_00020946: sbb eax,[ebp+0xc]
pf_at 0x22b
l_kernel_00020949: mov eax,edx
pf_at 0x22d
l_kernel_0002094b: mov edx,0x0
pf_at 0x232
l_kernel_00020950: mov edi,0x0
pf_at 0x237
l_kernel_00020955: mov esi,0x0
pf_at 0x23c
l_kernel_0002095a: jc short 0x20967
pf_at 0x23e
l_kernel_0002095c: mov ecx,[ebp-0x1c]
pf_at 0x241
l_kernel_0002095f: mov edx,eax
pf_at 0x243
l_kernel_00020961: mov edi,[ebp+0xc]
pf_at 0x246
l_kernel_00020964: mov esi,[ebp+0x8]
pf_at 0x249
l_kernel_00020967: mov eax,[ebp-0x28]
pf_at 0x24c
l_kernel_0002096a: or eax,edx
pf_at 0x24e
l_kernel_0002096c: mov edx,eax
pf_at 0x250
l_kernel_0002096e: or [ebp-0x10],ecx
pf_at 0x253
l_kernel_00020971: sub ebx,esi
pf_at 0x255
l_kernel_00020973: mov eax,[ebp-0x24]
pf_at 0x258
l_kernel_00020976: sbb eax,edi
pf_at 0x25a
l_kernel_00020978: mov edi,eax
pf_at 0x25c
l_kernel_0002097a: mov ecx,[ebp-0x20]
pf_at 0x25f
l_kernel_0002097d: dec ecx
pf_at 0x260
l_kernel_0002097e: mov esi,[ebp+0x10]
pf_at 0x263
l_kernel_00020981: jmp near 0x208fc
pf_at 0x268
l_kernel_00020986: test esi,esi
pf_at 0x26a
l_kernel_00020988: mov eax,[ebp-0x10]
pf_at 0x26d
l_kernel_0002098b: jz short 0x20992
pf_at 0x26f
l_kernel_0002098d: mov [esi],ebx
pf_at 0x271
l_kernel_0002098f: mov [esi+0x4],edi
pf_at 0x274
l_kernel_00020992: add esp,byte +0x1c
pf_at 0x277
l_kernel_00020995: pop esi
pf_at 0x278
l_kernel_00020996: pop edi
pf_at 0x279
l_kernel_00020997: pop ebx
pf_at 0x27a
l_kernel_00020998: pop ebp
pf_at 0x27b
l_kernel_00020999: ret
pf_at 0x27c
l_kernel_0002099a: xor ebx,ebx
pf_at 0x27e
l_kernel_0002099c: mov edi,0x0
pf_at 0x283
l_kernel_000209a1: mov eax,0x0
pf_at 0x288
l_kernel_000209a6: mov edx,0x0
pf_at 0x28d
l_kernel_000209ab: test esi,esi
pf_at 0x28f
l_kernel_000209ad: jnz short 0x2098d
pf_at 0x291
l_kernel_000209af: jmp short 0x20992
pf_at 0x293
l_kernel_000209b1: push ebp
pf_at 0x294
l_kernel_000209b2: mov ebp,esp
pf_at 0x296
l_kernel_000209b4: push edi
pf_at 0x297
l_kernel_000209b5: push esi
pf_at 0x298
l_kernel_000209b6: sub esp,byte +0x10
pf_at 0x29b
l_kernel_000209b9: mov ecx,[ebp+0x8]
pf_at 0x29e
l_kernel_000209bc: mov edx,[ebp+0xc]
pf_at 0x2a1
l_kernel_000209bf: mov eax,[ebp+0x10]
pf_at 0x2a4
l_kernel_000209c2: lea esi,[ebp-0x10]
pf_at 0x2a7
l_kernel_000209c5: and dword [esi+0x4],byte +0x0
pf_at 0x2ab
l_kernel_000209c9: mov edi,[ebp+0x14]
pf_at 0x2ae
l_kernel_000209cc: and dword [esi],byte +0x0
pf_at 0x2b1
l_kernel_000209cf: sub esp,byte +0x4
pf_at 0x2b4
l_kernel_000209d2: push esi
pf_at 0x2b5
l_kernel_000209d3: push edi
pf_at 0x2b6
l_kernel_000209d4: push eax
pf_at 0x2b7
l_kernel_000209d5: call 0x208ce
pf_at 0x2bc
l_kernel_000209da: add esp,byte +0x10
pf_at 0x2bf
l_kernel_000209dd: mov eax,[esi]
pf_at 0x2c1
l_kernel_000209df: mov edx,[esi+0x4]
pf_at 0x2c4
l_kernel_000209e2: add esp,byte +0x10
pf_at 0x2c7
l_kernel_000209e5: pop esi
pf_at 0x2c8
l_kernel_000209e6: pop edi
pf_at 0x2c9
l_kernel_000209e7: pop ebp
pf_at 0x2ca
l_kernel_000209e8: ret
pf_at 0x2cb
l_kernel_000209e9: push ebp
pf_at 0x2cc
l_kernel_000209ea: mov ebp,esp
pf_at 0x2ce
l_kernel_000209ec: push ebx
pf_at 0x2cf
l_kernel_000209ed: push edi
pf_at 0x2d0
l_kernel_000209ee: push esi
pf_at 0x2d1
l_kernel_000209ef: sub esp,byte +0xc
pf_at 0x2d4
l_kernel_000209f2: mov eax,[ebp+0x14]
pf_at 0x2d7
l_kernel_000209f5: mov esi,[ebp+0x10]
pf_at 0x2da
l_kernel_000209f8: mov ecx,esi
pf_at 0x2dc
l_kernel_000209fa: or ecx,eax
pf_at 0x2de
l_kernel_000209fc: jz short 0x20a51
pf_at 0x2e0
l_kernel_000209fe: mov edi,[ebp+0xc]
pf_at 0x2e3
l_kernel_00020a01: mov ecx,edi
pf_at 0x2e5
l_kernel_00020a03: shr ecx,byte 0x1f
pf_at 0x2e8
l_kernel_00020a06: mov [ebp-0x10],ecx
pf_at 0x2eb
l_kernel_00020a09: mov ebx,eax
pf_at 0x2ed
l_kernel_00020a0b: shr ebx,byte 0x1f
pf_at 0x2f0
l_kernel_00020a0e: mov edx,edi
pf_at 0x2f2
l_kernel_00020a10: sar edx,byte 0x1f
pf_at 0x2f5
l_kernel_00020a13: xor edi,edx
pf_at 0x2f7
l_kernel_00020a15: mov ecx,[ebp+0x8]
pf_at 0x2fa
l_kernel_00020a18: xor ecx,edx
pf_at 0x2fc
l_kernel_00020a1a: sub ecx,edx
pf_at 0x2fe
l_kernel_00020a1c: sbb edi,edx
pf_at 0x300
l_kernel_00020a1e: mov edx,eax
pf_at 0x302
l_kernel_00020a20: sar edx,byte 0x1f
pf_at 0x305
l_kernel_00020a23: xor eax,edx
pf_at 0x307
l_kernel_00020a25: xor esi,edx
pf_at 0x309
l_kernel_00020a27: sub esi,edx
pf_at 0x30b
l_kernel_00020a29: sbb eax,edx
pf_at 0x30d
l_kernel_00020a2b: sub esp,byte +0x4
pf_at 0x310
l_kernel_00020a2e: mov edx,edi
pf_at 0x312
l_kernel_00020a30: push byte +0x0
pf_at 0x314
l_kernel_00020a32: push eax
pf_at 0x315
l_kernel_00020a33: push esi
pf_at 0x316
l_kernel_00020a34: call 0x208ce
pf_at 0x31b
l_kernel_00020a39: add esp,byte +0x10
pf_at 0x31e
l_kernel_00020a3c: mov ecx,eax
pf_at 0x320
l_kernel_00020a3e: mov esi,edx
pf_at 0x322
l_kernel_00020a40: xor edx,edx
pf_at 0x324
l_kernel_00020a42: neg eax
pf_at 0x326
l_kernel_00020a44: sbb edx,esi
pf_at 0x328
l_kernel_00020a46: cmp [ebp-0x10],ebx
pf_at 0x32b
l_kernel_00020a49: cmovz eax,ecx
pf_at 0x32e
l_kernel_00020a4c: cmovz edx,esi
pf_at 0x331
l_kernel_00020a4f: jmp short 0x20a55
pf_at 0x333
l_kernel_00020a51: xor eax,eax
pf_at 0x335
l_kernel_00020a53: xor edx,edx
pf_at 0x337
l_kernel_00020a55: add esp,byte +0xc
pf_at 0x33a
l_kernel_00020a58: pop esi
pf_at 0x33b
l_kernel_00020a59: pop edi
pf_at 0x33c
l_kernel_00020a5a: pop ebx
pf_at 0x33d
l_kernel_00020a5b: pop ebp
pf_at 0x33e
l_kernel_00020a5c: ret
pf_at 0x33f
l_kernel_00020a5d: push ebp
pf_at 0x340
l_kernel_00020a5e: mov ebp,esp
pf_at 0x342
l_kernel_00020a60: push ebx
pf_at 0x343
l_kernel_00020a61: push edi
pf_at 0x344
l_kernel_00020a62: push esi
pf_at 0x345
l_kernel_00020a63: sub esp,byte +0xc
pf_at 0x348
l_kernel_00020a66: mov eax,[ebp+0x14]
pf_at 0x34b
l_kernel_00020a69: mov edi,[ebp+0x10]
pf_at 0x34e
l_kernel_00020a6c: mov ecx,edi
pf_at 0x350
l_kernel_00020a6e: or ecx,eax
pf_at 0x352
l_kernel_00020a70: jz short 0x20ac3
pf_at 0x354
l_kernel_00020a72: mov esi,[ebp+0xc]
pf_at 0x357
l_kernel_00020a75: mov ebx,esi
pf_at 0x359
l_kernel_00020a77: sar ebx,byte 0x1f
pf_at 0x35c
l_kernel_00020a7a: mov edx,esi
pf_at 0x35e
l_kernel_00020a7c: xor edx,ebx
pf_at 0x360
l_kernel_00020a7e: mov ecx,[ebp+0x8]
pf_at 0x363
l_kernel_00020a81: xor ecx,ebx
pf_at 0x365
l_kernel_00020a83: sub ecx,ebx
pf_at 0x367
l_kernel_00020a85: sbb edx,ebx
pf_at 0x369
l_kernel_00020a87: mov ebx,eax
pf_at 0x36b
l_kernel_00020a89: sar ebx,byte 0x1f
pf_at 0x36e
l_kernel_00020a8c: xor eax,ebx
pf_at 0x370
l_kernel_00020a8e: xor edi,ebx
pf_at 0x372
l_kernel_00020a90: sub edi,ebx
pf_at 0x374
l_kernel_00020a92: sbb eax,ebx
pf_at 0x376
l_kernel_00020a94: lea ebx,[ebp-0x18]
pf_at 0x379
l_kernel_00020a97: and dword [ebx+0x4],byte +0x0
pf_at 0x37d
l_kernel_00020a9b: and dword [ebx],byte +0x0
pf_at 0x380
l_kernel_00020a9e: sub esp,byte +0x4
pf_at 0x383
l_kernel_00020aa1: push ebx
pf_at 0x384
l_kernel_00020aa2: push eax
pf_at 0x385
l_kernel_00020aa3: push edi
pf_at 0x386
l_kernel_00020aa4: call 0x208ce
pf_at 0x38b
l_kernel_00020aa9: add esp,byte +0x10
pf_at 0x38e
l_kernel_00020aac: mov ecx,[ebx]
pf_at 0x390
l_kernel_00020aae: mov edi,[ebx+0x4]
pf_at 0x393
l_kernel_00020ab1: xor edx,edx
pf_at 0x395
l_kernel_00020ab3: mov eax,ecx
pf_at 0x397
l_kernel_00020ab5: neg eax
pf_at 0x399
l_kernel_00020ab7: sbb edx,edi
pf_at 0x39b
l_kernel_00020ab9: test esi,esi
pf_at 0x39d
l_kernel_00020abb: cmovns eax,ecx
pf_at 0x3a0
l_kernel_00020abe: cmovns edx,edi
pf_at 0x3a3
l_kernel_00020ac1: jmp short 0x20ac7
pf_at 0x3a5
l_kernel_00020ac3: xor eax,eax
pf_at 0x3a7
l_kernel_00020ac5: xor edx,edx
pf_at 0x3a9
l_kernel_00020ac7: add esp,byte +0xc
pf_at 0x3ac
l_kernel_00020aca: pop esi
pf_at 0x3ad
l_kernel_00020acb: pop edi
pf_at 0x3ae
l_kernel_00020acc: pop ebx
pf_at 0x3af
l_kernel_00020acd: pop ebp
pf_at 0x3b0
l_kernel_00020ace: ret
pf_at 0x3b1
l_kernel_00020acf: push ebp
pf_at 0x3b2
l_kernel_00020ad0: mov ebp,esp
pf_at 0x3b4
l_kernel_00020ad2: cli
pf_at 0x3b5
l_kernel_00020ad3: hlt
pf_at 0x3b6
l_kernel_00020ad4: jmp short 0x20ad2
pf_at 0x3b8
l_kernel_00020ad6: push ebp
pf_at 0x3b9
l_kernel_00020ad7: mov ebp,esp
pf_at 0x3bb
l_kernel_00020ad9: mov ecx,[ebp+0x8]
pf_at 0x3be
l_kernel_00020adc: mov eax,ecx
pf_at 0x3c0
l_kernel_00020ade: neg eax
pf_at 0x3c2
l_kernel_00020ae0: cmovs eax,ecx
pf_at 0x3c5
l_kernel_00020ae3: pop ebp
pf_at 0x3c6
l_kernel_00020ae4: ret
pf_at 0x3c7
l_kernel_00020ae5: push ebp
pf_at 0x3c8
l_kernel_00020ae6: mov ebp,esp
pf_at 0x3ca
l_kernel_00020ae8: pop ebp
pf_at 0x3cb
l_kernel_00020ae9: jmp near 0x207b2
pf_at 0x3d0
l_kernel_00020aee: push ebp
pf_at 0x3d1
l_kernel_00020aef: mov ebp,esp
pf_at 0x3d3
l_kernel_00020af1: push esi
pf_at 0x3d4
l_kernel_00020af2: push eax
pf_at 0x3d5
l_kernel_00020af3: mov esi,[ebp+0x8]
pf_at 0x3d8
l_kernel_00020af6: test esi,esi
pf_at 0x3da
l_kernel_00020af8: jz short 0x20b37
pf_at 0x3dc
l_kernel_00020afa: call 0x2072e
pf_at 0x3e1
l_kernel_00020aff: mov byte [esi-0x4],0x1
pf_at 0x3e5
l_kernel_00020b03: add esi,byte -0xc
pf_at 0x3e8
l_kernel_00020b06: mov ecx,esi
pf_at 0x3ea
l_kernel_00020b08: call 0x20b3d
pf_at 0x3ef
l_kernel_00020b0d: mov edx,0x2f0b4
pf_at 0x3f4
l_kernel_00020b12: xor eax,eax
pf_at 0x3f6
l_kernel_00020b14: mov ecx,eax
pf_at 0x3f8
l_kernel_00020b16: mov eax,[edx]
pf_at 0x3fa
l_kernel_00020b18: test eax,eax
pf_at 0x3fc
l_kernel_00020b1a: jz short 0x20b23
pf_at 0x3fe
l_kernel_00020b1c: lea edx,[eax+0x4]
pf_at 0x401
l_kernel_00020b1f: cmp eax,esi
pf_at 0x403
l_kernel_00020b21: jnz short 0x20b14
pf_at 0x405
l_kernel_00020b23: test ecx,ecx
pf_at 0x407
l_kernel_00020b25: jz short 0x20b37
pf_at 0x409
l_kernel_00020b27: cmp byte [ecx+0x8],0x1
pf_at 0x40d
l_kernel_00020b2b: jnz short 0x20b37
pf_at 0x40f
l_kernel_00020b2d: add esp,byte +0x4
pf_at 0x412
l_kernel_00020b30: pop esi
pf_at 0x413
l_kernel_00020b31: pop ebp
pf_at 0x414
l_kernel_00020b32: jmp near 0x20b3d
pf_at 0x419
l_kernel_00020b37: add esp,byte +0x4
pf_at 0x41c
l_kernel_00020b3a: pop esi
pf_at 0x41d
l_kernel_00020b3b: pop ebp
pf_at 0x41e
l_kernel_00020b3c: ret
pf_at 0x41f
l_kernel_00020b3d: test ecx,ecx
pf_at 0x421
l_kernel_00020b3f: jz short 0x20b67
pf_at 0x423
l_kernel_00020b41: push ebp
pf_at 0x424
l_kernel_00020b42: mov ebp,esp
pf_at 0x426
l_kernel_00020b44: push esi
pf_at 0x427
l_kernel_00020b45: mov eax,[ecx+0x4]
pf_at 0x42a
l_kernel_00020b48: test eax,eax
pf_at 0x42c
l_kernel_00020b4a: jz short 0x20b65
pf_at 0x42e
l_kernel_00020b4c: cmp byte [eax+0x8],0x1
pf_at 0x432
l_kernel_00020b50: jnz short 0x20b65
pf_at 0x434
l_kernel_00020b52: mov edx,[eax]
pf_at 0x436
l_kernel_00020b54: mov esi,[ecx]
pf_at 0x438
l_kernel_00020b56: add edx,esi
pf_at 0x43a
l_kernel_00020b58: add edx,byte +0xc
pf_at 0x43d
l_kernel_00020b5b: mov [ecx],edx
pf_at 0x43f
l_kernel_00020b5d: mov eax,[eax+0x4]
pf_at 0x442
l_kernel_00020b60: mov [ecx+0x4],eax
pf_at 0x445
l_kernel_00020b63: jmp short 0x20b48
pf_at 0x447
l_kernel_00020b65: pop esi
pf_at 0x448
l_kernel_00020b66: pop ebp
pf_at 0x449
l_kernel_00020b67: ret
pf_at 0x44a
l_kernel_00020b68: push ebp
pf_at 0x44b
l_kernel_00020b69: mov ebp,esp
pf_at 0x44d
l_kernel_00020b6b: push ebx
pf_at 0x44e
l_kernel_00020b6c: push edi
pf_at 0x44f
l_kernel_00020b6d: push esi
pf_at 0x450
l_kernel_00020b6e: sub esp,byte +0xc
pf_at 0x453
l_kernel_00020b71: mov edi,[ebp+0xc]
pf_at 0x456
l_kernel_00020b74: mov esi,[ebp+0x8]
pf_at 0x459
l_kernel_00020b77: test esi,esi
pf_at 0x45b
l_kernel_00020b79: jz short 0x20bde
pf_at 0x45d
l_kernel_00020b7b: test edi,edi
pf_at 0x45f
l_kernel_00020b7d: jz short 0x20be8
pf_at 0x461
l_kernel_00020b7f: call 0x2072e
pf_at 0x466
l_kernel_00020b84: add edi,byte +0xf
pf_at 0x469
l_kernel_00020b87: and edi,byte -0x10
pf_at 0x46c
l_kernel_00020b8a: lea ebx,[esi-0xc]
pf_at 0x46f
l_kernel_00020b8d: mov eax,[esi-0xc]
pf_at 0x472
l_kernel_00020b90: cmp eax,edi
pf_at 0x474
l_kernel_00020b92: jnc short 0x20bf4
pf_at 0x476
l_kernel_00020b94: mov ecx,[esi-0x8]
pf_at 0x479
l_kernel_00020b97: test ecx,ecx
pf_at 0x47b
l_kernel_00020b99: jz short 0x20bac
pf_at 0x47d
l_kernel_00020b9b: cmp byte [ecx+0x8],0x1
pf_at 0x481
l_kernel_00020b9f: jnz short 0x20bac
pf_at 0x483
l_kernel_00020ba1: mov ecx,[ecx]
pf_at 0x485
l_kernel_00020ba3: add eax,ecx
pf_at 0x487
l_kernel_00020ba5: add eax,byte +0xc
pf_at 0x48a
l_kernel_00020ba8: cmp eax,edi
pf_at 0x48c
l_kernel_00020baa: jnc short 0x20c07
pf_at 0x48e
l_kernel_00020bac: mov [esp],edi
pf_at 0x491
l_kernel_00020baf: call 0x207b2
pf_at 0x496
l_kernel_00020bb4: test eax,eax
pf_at 0x498
l_kernel_00020bb6: jz short 0x20bf0
pf_at 0x49a
l_kernel_00020bb8: mov ebx,eax
pf_at 0x49c
l_kernel_00020bba: mov eax,[esi-0xc]
pf_at 0x49f
l_kernel_00020bbd: cmp eax,edi
pf_at 0x4a1
l_kernel_00020bbf: cmovc edi,eax
pf_at 0x4a4
l_kernel_00020bc2: mov [esp+0x8],edi
pf_at 0x4a8
l_kernel_00020bc6: mov [esp+0x4],esi
pf_at 0x4ac
l_kernel_00020bca: mov [esp],ebx
pf_at 0x4af
l_kernel_00020bcd: call 0x20c1d
pf_at 0x4b4
l_kernel_00020bd2: mov [esp],esi
pf_at 0x4b7
l_kernel_00020bd5: call 0x20aee
pf_at 0x4bc
l_kernel_00020bda: mov esi,ebx
pf_at 0x4be
l_kernel_00020bdc: jmp short 0x20bfd
pf_at 0x4c0
l_kernel_00020bde: mov [esp],edi
pf_at 0x4c3
l_kernel_00020be1: call 0x207b2
pf_at 0x4c8
l_kernel_00020be6: jmp short 0x20bff
pf_at 0x4ca
l_kernel_00020be8: mov [esp],esi
pf_at 0x4cd
l_kernel_00020beb: call 0x20aee
pf_at 0x4d2
l_kernel_00020bf0: xor esi,esi
pf_at 0x4d4
l_kernel_00020bf2: jmp short 0x20bfd
pf_at 0x4d6
l_kernel_00020bf4: mov ecx,ebx
pf_at 0x4d8
l_kernel_00020bf6: mov edx,edi
pf_at 0x4da
l_kernel_00020bf8: call 0x20805
pf_at 0x4df
l_kernel_00020bfd: mov eax,esi
pf_at 0x4e1
l_kernel_00020bff: add esp,byte +0xc
pf_at 0x4e4
l_kernel_00020c02: pop esi
pf_at 0x4e5
l_kernel_00020c03: pop edi
pf_at 0x4e6
l_kernel_00020c04: pop ebx
pf_at 0x4e7
l_kernel_00020c05: pop ebp
pf_at 0x4e8
l_kernel_00020c06: ret
pf_at 0x4e9
l_kernel_00020c07: mov ecx,ebx
pf_at 0x4eb
l_kernel_00020c09: call 0x20b3d
pf_at 0x4f0
l_kernel_00020c0e: mov ecx,ebx
pf_at 0x4f2
l_kernel_00020c10: mov edx,edi
pf_at 0x4f4
l_kernel_00020c12: call 0x20805
pf_at 0x4f9
l_kernel_00020c17: mov byte [esi-0x4],0x0
pf_at 0x4fd
l_kernel_00020c1b: jmp short 0x20bfd
pf_at 0x4ff
l_kernel_00020c1d: push ebp
pf_at 0x500
l_kernel_00020c1e: mov ebp,esp
pf_at 0x502
l_kernel_00020c20: push ebx
pf_at 0x503
l_kernel_00020c21: push esi
pf_at 0x504
l_kernel_00020c22: xor ecx,ecx
pf_at 0x506
l_kernel_00020c24: mov edx,[ebp+0x10]
pf_at 0x509
l_kernel_00020c27: mov esi,[ebp+0xc]
pf_at 0x50c
l_kernel_00020c2a: mov eax,[ebp+0x8]
pf_at 0x50f
l_kernel_00020c2d: cmp edx,ecx
pf_at 0x511
l_kernel_00020c2f: jz short 0x20c3a
pf_at 0x513
l_kernel_00020c31: mov bl,[esi+ecx]
pf_at 0x516
l_kernel_00020c34: mov [eax+ecx],bl
pf_at 0x519
l_kernel_00020c37: inc ecx
pf_at 0x51a
l_kernel_00020c38: jmp short 0x20c2d
pf_at 0x51c
l_kernel_00020c3a: pop esi
pf_at 0x51d
l_kernel_00020c3b: pop ebx
pf_at 0x51e
l_kernel_00020c3c: pop ebp
pf_at 0x51f
l_kernel_00020c3d: ret
pf_at 0x520
l_kernel_00020c3e: push ebp
pf_at 0x521
l_kernel_00020c3f: mov ebp,esp
pf_at 0x523
l_kernel_00020c41: push ebx
pf_at 0x524
l_kernel_00020c42: push esi
pf_at 0x525
l_kernel_00020c43: mov edx,[ebp+0x10]
pf_at 0x528
l_kernel_00020c46: mov ecx,[ebp+0xc]
pf_at 0x52b
l_kernel_00020c49: mov eax,[ebp+0x8]
pf_at 0x52e
l_kernel_00020c4c: cmp eax,ecx
pf_at 0x530
l_kernel_00020c4e: setz bl
pf_at 0x533
l_kernel_00020c51: test edx,edx
pf_at 0x535
l_kernel_00020c53: setz bh
pf_at 0x538
l_kernel_00020c56: or bh,bl
pf_at 0x53a
l_kernel_00020c58: jz short 0x20c5e
pf_at 0x53c
l_kernel_00020c5a: pop esi
pf_at 0x53d
l_kernel_00020c5b: pop ebx
pf_at 0x53e
l_kernel_00020c5c: pop ebp
pf_at 0x53f
l_kernel_00020c5d: ret
pf_at 0x540
l_kernel_00020c5e: cmp eax,ecx
pf_at 0x542
l_kernel_00020c60: jnc short 0x20c71
pf_at 0x544
l_kernel_00020c62: xor esi,esi
pf_at 0x546
l_kernel_00020c64: cmp edx,esi
pf_at 0x548
l_kernel_00020c66: jz short 0x20c5a
pf_at 0x54a
l_kernel_00020c68: mov bl,[ecx+esi]
pf_at 0x54d
l_kernel_00020c6b: mov [eax+esi],bl
pf_at 0x550
l_kernel_00020c6e: inc esi
pf_at 0x551
l_kernel_00020c6f: jmp short 0x20c64
pf_at 0x553
l_kernel_00020c71: mov esi,edx
pf_at 0x555
l_kernel_00020c73: sub esi,byte +0x1
pf_at 0x558
l_kernel_00020c76: jc short 0x20c5a
pf_at 0x55a
l_kernel_00020c78: mov bl,[ecx+edx-0x1]
pf_at 0x55e
l_kernel_00020c7c: mov [eax+edx-0x1],bl
pf_at 0x562
l_kernel_00020c80: mov edx,esi
pf_at 0x564
l_kernel_00020c82: jmp short 0x20c73
pf_at 0x566
l_kernel_00020c84: push ebp
pf_at 0x567
l_kernel_00020c85: mov ebp,esp
pf_at 0x569
l_kernel_00020c87: push esi
pf_at 0x56a
l_kernel_00020c88: mov ecx,[ebp+0x10]
pf_at 0x56d
l_kernel_00020c8b: mov eax,[ebp+0x8]
pf_at 0x570
l_kernel_00020c8e: mov dl,[ebp+0xc]
pf_at 0x573
l_kernel_00020c91: xor esi,esi
pf_at 0x575
l_kernel_00020c93: cmp ecx,esi
pf_at 0x577
l_kernel_00020c95: jz short 0x20c9d
pf_at 0x579
l_kernel_00020c97: mov [eax+esi],dl
pf_at 0x57c
l_kernel_00020c9a: inc esi
pf_at 0x57d
l_kernel_00020c9b: jmp short 0x20c93
pf_at 0x57f
l_kernel_00020c9d: pop esi
pf_at 0x580
l_kernel_00020c9e: pop ebp
pf_at 0x581
l_kernel_00020c9f: ret
pf_at 0x582
l_kernel_00020ca0: push ebp
pf_at 0x583
l_kernel_00020ca1: mov ebp,esp
pf_at 0x585
l_kernel_00020ca3: push ebx
pf_at 0x586
l_kernel_00020ca4: push edi
pf_at 0x587
l_kernel_00020ca5: push esi
pf_at 0x588
l_kernel_00020ca6: mov ecx,[ebp+0x10]
pf_at 0x58b
l_kernel_00020ca9: mov eax,[ebp+0xc]
pf_at 0x58e
l_kernel_00020cac: mov esi,[ebp+0x8]
pf_at 0x591
l_kernel_00020caf: xor edi,edi
pf_at 0x593
l_kernel_00020cb1: cmp ecx,edi
pf_at 0x595
l_kernel_00020cb3: jz short 0x20cc8
pf_at 0x597
l_kernel_00020cb5: movzx ebx,byte [esi+edi]
pf_at 0x59b
l_kernel_00020cb9: movzx edx,byte [eax+edi]
pf_at 0x59f
l_kernel_00020cbd: inc edi
pf_at 0x5a0
l_kernel_00020cbe: cmp bl,dl
pf_at 0x5a2
l_kernel_00020cc0: jz short 0x20cb1
pf_at 0x5a4
l_kernel_00020cc2: sub ebx,edx
pf_at 0x5a6
l_kernel_00020cc4: mov eax,ebx
pf_at 0x5a8
l_kernel_00020cc6: jmp short 0x20cca
pf_at 0x5aa
l_kernel_00020cc8: xor eax,eax
pf_at 0x5ac
l_kernel_00020cca: pop esi
pf_at 0x5ad
l_kernel_00020ccb: pop edi
pf_at 0x5ae
l_kernel_00020ccc: pop ebx
pf_at 0x5af
l_kernel_00020ccd: pop ebp
pf_at 0x5b0
l_kernel_00020cce: ret
pf_at 0x5b1
l_kernel_00020ccf: push ebp
pf_at 0x5b2
l_kernel_00020cd0: mov ebp,esp
pf_at 0x5b4
l_kernel_00020cd2: xor eax,eax
pf_at 0x5b6
l_kernel_00020cd4: mov edx,[ebp+0x8]
pf_at 0x5b9
l_kernel_00020cd7: xor ecx,ecx
pf_at 0x5bb
l_kernel_00020cd9: test edx,edx
pf_at 0x5bd
l_kernel_00020cdb: jz short 0x20ce8
pf_at 0x5bf
l_kernel_00020cdd: cmp byte [edx+ecx],0x0
pf_at 0x5c3
l_kernel_00020ce1: jz short 0x20ce6
pf_at 0x5c5
l_kernel_00020ce3: inc ecx
pf_at 0x5c6
l_kernel_00020ce4: jmp short 0x20cd9
pf_at 0x5c8
l_kernel_00020ce6: mov eax,ecx
pf_at 0x5ca
l_kernel_00020ce8: pop ebp
pf_at 0x5cb
l_kernel_00020ce9: ret
pf_at 0x5cc
l_kernel_00020cea: push ebp
pf_at 0x5cd
l_kernel_00020ceb: mov ebp,esp
pf_at 0x5cf
l_kernel_00020ced: push ebx
pf_at 0x5d0
l_kernel_00020cee: push esi
pf_at 0x5d1
l_kernel_00020cef: xor ecx,ecx
pf_at 0x5d3
l_kernel_00020cf1: mov edx,[ebp+0xc]
pf_at 0x5d6
l_kernel_00020cf4: mov esi,[ebp+0x8]
pf_at 0x5d9
l_kernel_00020cf7: movzx eax,byte [esi+ecx]
pf_at 0x5dd
l_kernel_00020cfb: mov bl,[edx+ecx]
pf_at 0x5e0
l_kernel_00020cfe: test eax,eax
pf_at 0x5e2
l_kernel_00020d00: jz short 0x20d09
pf_at 0x5e4
l_kernel_00020d02: cmp al,bl
pf_at 0x5e6
l_kernel_00020d04: jnz short 0x20d09
pf_at 0x5e8
l_kernel_00020d06: inc ecx
pf_at 0x5e9
l_kernel_00020d07: jmp short 0x20cf7
pf_at 0x5eb
l_kernel_00020d09: movzx ecx,bl
pf_at 0x5ee
l_kernel_00020d0c: sub eax,ecx
pf_at 0x5f0
l_kernel_00020d0e: pop esi
pf_at 0x5f1
l_kernel_00020d0f: pop ebx
pf_at 0x5f2
l_kernel_00020d10: pop ebp
pf_at 0x5f3
l_kernel_00020d11: ret
pf_at 0x5f4
l_kernel_00020d12: push ebp
pf_at 0x5f5
l_kernel_00020d13: mov ebp,esp
pf_at 0x5f7
l_kernel_00020d15: pop ebp
pf_at 0x5f8
l_kernel_00020d16: jmp near 0x20cea
pf_at 0x5fd
l_kernel_00020d1b: push ebp
pf_at 0x5fe
l_kernel_00020d1c: mov ebp,esp
pf_at 0x600
l_kernel_00020d1e: push ebx
pf_at 0x601
l_kernel_00020d1f: xor ecx,ecx
pf_at 0x603
l_kernel_00020d21: mov edx,[ebp+0xc]
pf_at 0x606
l_kernel_00020d24: mov eax,[ebp+0x8]
pf_at 0x609
l_kernel_00020d27: mov bl,[edx+ecx]
pf_at 0x60c
l_kernel_00020d2a: mov [eax+ecx],bl
pf_at 0x60f
l_kernel_00020d2d: inc ecx
pf_at 0x610
l_kernel_00020d2e: test bl,bl
pf_at 0x612
l_kernel_00020d30: jnz short 0x20d27
pf_at 0x614
l_kernel_00020d32: pop ebx
pf_at 0x615
l_kernel_00020d33: pop ebp
pf_at 0x616
l_kernel_00020d34: ret
pf_at 0x617
l_kernel_00020d35: push ebp
pf_at 0x618
l_kernel_00020d36: mov ebp,esp
pf_at 0x61a
l_kernel_00020d38: push esi
pf_at 0x61b
l_kernel_00020d39: mov ecx,[ebp+0xc]
pf_at 0x61e
l_kernel_00020d3c: mov eax,[ebp+0x8]
pf_at 0x621
l_kernel_00020d3f: movsx edx,cl
pf_at 0x624
l_kernel_00020d42: movsx esi,byte [eax]
pf_at 0x627
l_kernel_00020d45: test esi,esi
pf_at 0x629
l_kernel_00020d47: jz short 0x20d50
pf_at 0x62b
l_kernel_00020d49: cmp edx,esi
pf_at 0x62d
l_kernel_00020d4b: jz short 0x20d57
pf_at 0x62f
l_kernel_00020d4d: inc eax
pf_at 0x630
l_kernel_00020d4e: jmp short 0x20d42
pf_at 0x632
l_kernel_00020d50: xor edx,edx
pf_at 0x634
l_kernel_00020d52: test cl,cl
pf_at 0x636
l_kernel_00020d54: cmovnz eax,edx
pf_at 0x639
l_kernel_00020d57: pop esi
pf_at 0x63a
l_kernel_00020d58: pop ebp
pf_at 0x63b
l_kernel_00020d59: ret
pf_at 0x63c
l_kernel_00020d5a: push ebp
pf_at 0x63d
l_kernel_00020d5b: mov ebp,esp
pf_at 0x63f
l_kernel_00020d5d: push ebx
pf_at 0x640
l_kernel_00020d5e: push edi
pf_at 0x641
l_kernel_00020d5f: push esi
pf_at 0x642
l_kernel_00020d60: sub esp,byte +0xc
pf_at 0x645
l_kernel_00020d63: xor esi,esi
pf_at 0x647
l_kernel_00020d65: mov edi,[ebp+0xc]
pf_at 0x64a
l_kernel_00020d68: mov ebx,[ebp+0x8]
pf_at 0x64d
l_kernel_00020d6b: movsx eax,byte [ebx+esi]
pf_at 0x651
l_kernel_00020d6f: test eax,eax
pf_at 0x653
l_kernel_00020d71: jz short 0x20d87
pf_at 0x655
l_kernel_00020d73: sub esp,byte +0x8
pf_at 0x658
l_kernel_00020d76: push eax
pf_at 0x659
l_kernel_00020d77: push edi
pf_at 0x65a
l_kernel_00020d78: call 0x20d35
pf_at 0x65f
l_kernel_00020d7d: add esp,byte +0x10
pf_at 0x662
l_kernel_00020d80: test eax,eax
pf_at 0x664
l_kernel_00020d82: jz short 0x20d87
pf_at 0x666
l_kernel_00020d84: inc esi
pf_at 0x667
l_kernel_00020d85: jmp short 0x20d6b
pf_at 0x669
l_kernel_00020d87: mov eax,esi
pf_at 0x66b
l_kernel_00020d89: add esp,byte +0xc
pf_at 0x66e
l_kernel_00020d8c: pop esi
pf_at 0x66f
l_kernel_00020d8d: pop edi
pf_at 0x670
l_kernel_00020d8e: pop ebx
pf_at 0x671
l_kernel_00020d8f: pop ebp
pf_at 0x672
l_kernel_00020d90: ret
pf_at 0x673
l_kernel_00020d91: push ebp
pf_at 0x674
l_kernel_00020d92: mov ebp,esp
pf_at 0x676
l_kernel_00020d94: push edi
pf_at 0x677
l_kernel_00020d95: push esi
pf_at 0x678
l_kernel_00020d96: mov edi,[ebp+0xc]
pf_at 0x67b
l_kernel_00020d99: mov esi,[ebp+0x8]
pf_at 0x67e
l_kernel_00020d9c: movsx eax,byte [esi]
pf_at 0x681
l_kernel_00020d9f: test eax,eax
pf_at 0x683
l_kernel_00020da1: jz short 0x20db7
pf_at 0x685
l_kernel_00020da3: sub esp,byte +0x8
pf_at 0x688
l_kernel_00020da6: push eax
pf_at 0x689
l_kernel_00020da7: push edi
pf_at 0x68a
l_kernel_00020da8: call 0x20d35
pf_at 0x68f
l_kernel_00020dad: add esp,byte +0x10
pf_at 0x692
l_kernel_00020db0: test eax,eax
pf_at 0x694
l_kernel_00020db2: jnz short 0x20db9
pf_at 0x696
l_kernel_00020db4: inc esi
pf_at 0x697
l_kernel_00020db5: jmp short 0x20d9c
pf_at 0x699
l_kernel_00020db7: xor esi,esi
pf_at 0x69b
l_kernel_00020db9: mov eax,esi
pf_at 0x69d
l_kernel_00020dbb: pop esi
pf_at 0x69e
l_kernel_00020dbc: pop edi
pf_at 0x69f
l_kernel_00020dbd: pop ebp
pf_at 0x6a0
l_kernel_00020dbe: ret
pf_at 0x6a1
l_kernel_00020dbf: push ebp
pf_at 0x6a2
l_kernel_00020dc0: mov ebp,esp
pf_at 0x6a4
l_kernel_00020dc2: push ebx
pf_at 0x6a5
l_kernel_00020dc3: push esi
pf_at 0x6a6
l_kernel_00020dc4: mov ecx,[ebp+0xc]
pf_at 0x6a9
l_kernel_00020dc7: mov eax,[ebp+0x8]
pf_at 0x6ac
l_kernel_00020dca: cmp byte [ecx],0x0
pf_at 0x6af
l_kernel_00020dcd: jz short 0x20dec
pf_at 0x6b1
l_kernel_00020dcf: cmp byte [eax],0x0
pf_at 0x6b4
l_kernel_00020dd2: jz short 0x20dea
pf_at 0x6b6
l_kernel_00020dd4: xor edx,edx
pf_at 0x6b8
l_kernel_00020dd6: mov bl,[ecx+edx]
pf_at 0x6bb
l_kernel_00020dd9: test bl,bl
pf_at 0x6bd
l_kernel_00020ddb: jz short 0x20dec
pf_at 0x6bf
l_kernel_00020ddd: lea esi,[edx+0x1]
pf_at 0x6c2
l_kernel_00020de0: cmp [eax+edx],bl
pf_at 0x6c5
l_kernel_00020de3: mov edx,esi
pf_at 0x6c7
l_kernel_00020de5: jz short 0x20dd6
pf_at 0x6c9
l_kernel_00020de7: inc eax
pf_at 0x6ca
l_kernel_00020de8: jmp short 0x20dcf
pf_at 0x6cc
l_kernel_00020dea: xor eax,eax
pf_at 0x6ce
l_kernel_00020dec: pop esi
pf_at 0x6cf
l_kernel_00020ded: pop ebx
pf_at 0x6d0
l_kernel_00020dee: pop ebp
pf_at 0x6d1
l_kernel_00020def: ret
pf_at 0x6d2
l_kernel_00020df0: push ebp
pf_at 0x6d3
l_kernel_00020df1: mov ebp,esp
pf_at 0x6d5
l_kernel_00020df3: mov eax,0x2ca98
pf_at 0x6da
l_kernel_00020df8: pop ebp
pf_at 0x6db
l_kernel_00020df9: ret
pf_at 0x6dc
l_kernel_00020dfa: push ebp
pf_at 0x6dd
l_kernel_00020dfb: mov ebp,esp
pf_at 0x6df
l_kernel_00020dfd: mov eax,0x2f074
pf_at 0x6e4
l_kernel_00020e02: pop ebp
pf_at 0x6e5
l_kernel_00020e03: ret
pf_at 0x6e6
l_kernel_00020e04: push ebp
pf_at 0x6e7
l_kernel_00020e05: mov ebp,esp
pf_at 0x6e9
l_kernel_00020e07: mov eax,[ebp+0x8]
pf_at 0x6ec
l_kernel_00020e0a: test eax,eax
pf_at 0x6ee
l_kernel_00020e0c: jz short 0x20e14
pf_at 0x6f0
l_kernel_00020e0e: mov dword [eax],0x574d4236
pf_at 0x6f6
l_kernel_00020e14: mov eax,0x574d4236
pf_at 0x6fb
l_kernel_00020e19: pop ebp
pf_at 0x6fc
l_kernel_00020e1a: ret
pf_at 0x6fd
l_kernel_00020e1b: push ebp
pf_at 0x6fe
l_kernel_00020e1c: mov ebp,esp
pf_at 0x700
l_kernel_00020e1e: mov eax,[ebp+0x10]
pf_at 0x703
l_kernel_00020e21: fld qword [ebp+0x8]
pf_at 0x706
l_kernel_00020e24: mov ecx,eax
pf_at 0x708
l_kernel_00020e26: test ecx,ecx
pf_at 0x70a
l_kernel_00020e28: jng short 0x20e2f
pf_at 0x70c
l_kernel_00020e2a: fadd to st0
pf_at 0x70e
l_kernel_00020e2c: dec ecx
pf_at 0x70f
l_kernel_00020e2d: jmp short 0x20e26
pf_at 0x711
l_kernel_00020e2f: mov ecx,eax
pf_at 0x713
l_kernel_00020e31: sar ecx,byte 0x1f
pf_at 0x716
l_kernel_00020e34: and ecx,eax
pf_at 0x718
l_kernel_00020e36: test ecx,ecx
pf_at 0x71a
l_kernel_00020e38: jz short 0x20e43
pf_at 0x71c
l_kernel_00020e3a: fmul dword [dword 0x2c8c8]
pf_at 0x722
l_kernel_00020e40: inc ecx
pf_at 0x723
l_kernel_00020e41: jmp short 0x20e36
pf_at 0x725
l_kernel_00020e43: pop ebp
pf_at 0x726
l_kernel_00020e44: ret
pf_at 0x727
l_kernel_00020e45: push ebp
pf_at 0x728
l_kernel_00020e46: mov ebp,esp
pf_at 0x72a
l_kernel_00020e48: mov eax,[ebp+0x10]
pf_at 0x72d
l_kernel_00020e4b: fld qword [ebp+0x8]
pf_at 0x730
l_kernel_00020e4e: test eax,eax
pf_at 0x732
l_kernel_00020e50: jz short 0x20e55
pf_at 0x734
l_kernel_00020e52: and dword [eax],byte +0x0
pf_at 0x737
l_kernel_00020e55: fldz
pf_at 0x739
l_kernel_00020e57: fxch st1
pf_at 0x73b
l_kernel_00020e59: fucomi st1
pf_at 0x73d
l_kernel_00020e5b: jnz short 0x20e5f
pf_at 0x73f
l_kernel_00020e5d: jpo short 0x20eb9
pf_at 0x741
l_kernel_00020e5f: fstp st1
pf_at 0x743
l_kernel_00020e61: fld st0
pf_at 0x745
l_kernel_00020e63: fchs
pf_at 0x747
l_kernel_00020e65: fucomi st1
pf_at 0x749
l_kernel_00020e67: fld st1
pf_at 0x74b
l_kernel_00020e69: fcmovnbe st1
pf_at 0x74d
l_kernel_00020e6b: fstp st1
pf_at 0x74f
l_kernel_00020e6d: xor ecx,ecx
pf_at 0x751
l_kernel_00020e6f: fld1
pf_at 0x753
l_kernel_00020e71: fxch st1
pf_at 0x755
l_kernel_00020e73: fucomi st1
pf_at 0x757
l_kernel_00020e75: jc short 0x20e82
pf_at 0x759
l_kernel_00020e77: fmul dword [dword 0x2c8c8]
pf_at 0x75f
l_kernel_00020e7d: inc ecx
pf_at 0x760
l_kernel_00020e7e: fxch st1
pf_at 0x762
l_kernel_00020e80: jmp short 0x20e71
pf_at 0x764
l_kernel_00020e82: fstp st1
pf_at 0x766
l_kernel_00020e84: fldz
pf_at 0x768
l_kernel_00020e86: fld dword [dword 0x2c8c8]
pf_at 0x76e
l_kernel_00020e8c: fxch st2
pf_at 0x770
l_kernel_00020e8e: fucomi st1
pf_at 0x772
l_kernel_00020e90: jna short 0x20ea1
pf_at 0x774
l_kernel_00020e92: fxch st2
pf_at 0x776
l_kernel_00020e94: fucomi st2
pf_at 0x778
l_kernel_00020e96: fxch st2
pf_at 0x77a
l_kernel_00020e98: jna short 0x20ea1
pf_at 0x77c
l_kernel_00020e9a: fadd to st0
pf_at 0x77e
l_kernel_00020e9c: dec ecx
pf_at 0x77f
l_kernel_00020e9d: fxch st2
pf_at 0x781
l_kernel_00020e9f: jmp short 0x20e8c
pf_at 0x783
l_kernel_00020ea1: fstp st2
pf_at 0x785
l_kernel_00020ea3: test eax,eax
pf_at 0x787
l_kernel_00020ea5: jz short 0x20ea9
pf_at 0x789
l_kernel_00020ea7: mov [eax],ecx
pf_at 0x78b
l_kernel_00020ea9: fucomip st2
pf_at 0x78d
l_kernel_00020eab: fstp st1
pf_at 0x78f
l_kernel_00020ead: fld st0
pf_at 0x791
l_kernel_00020eaf: fchs
pf_at 0x793
l_kernel_00020eb1: fxch st1
pf_at 0x795
l_kernel_00020eb3: fcmovnbe st1
pf_at 0x797
l_kernel_00020eb5: fstp st1
pf_at 0x799
l_kernel_00020eb7: fldz
pf_at 0x79b
l_kernel_00020eb9: fstp st0
pf_at 0x79d
l_kernel_00020ebb: pop ebp
pf_at 0x79e
l_kernel_00020ebc: ret
pf_at 0x79f
l_kernel_00020ebd: push ebp
pf_at 0x7a0
l_kernel_00020ebe: mov ebp,esp
pf_at 0x7a2
l_kernel_00020ec0: sub esp,byte +0xc
pf_at 0x7a5
l_kernel_00020ec3: fld qword [ebp+0x10]
pf_at 0x7a8
l_kernel_00020ec6: fld qword [ebp+0x8]
pf_at 0x7ab
l_kernel_00020ec9: fldz
pf_at 0x7ad
l_kernel_00020ecb: fxch st2
pf_at 0x7af
l_kernel_00020ecd: fucomi st2
pf_at 0x7b1
l_kernel_00020ecf: jnz short 0x20ed9
pf_at 0x7b3
l_kernel_00020ed1: jpe short 0x20ed9
pf_at 0x7b5
l_kernel_00020ed3: fstp st1
pf_at 0x7b7
l_kernel_00020ed5: fstp st0
pf_at 0x7b9
l_kernel_00020ed7: jmp short 0x20f05
pf_at 0x7bb
l_kernel_00020ed9: fstp st2
pf_at 0x7bd
l_kernel_00020edb: fld st0
pf_at 0x7bf
l_kernel_00020edd: fdiv st2
pf_at 0x7c1
l_kernel_00020edf: fnstcw [ebp-0x2]
pf_at 0x7c4
l_kernel_00020ee2: movzx eax,word [ebp-0x2]
pf_at 0x7c8
l_kernel_00020ee6: or eax,0xc00
pf_at 0x7cd
l_kernel_00020eeb: mov [ebp-0x4],ax
pf_at 0x7d1
l_kernel_00020eef: fldcw [ebp-0x4]
pf_at 0x7d4
l_kernel_00020ef2: fistp dword [ebp-0x8]
pf_at 0x7d7
l_kernel_00020ef5: fldcw [ebp-0x2]
pf_at 0x7da
l_kernel_00020ef8: mov eax,[ebp-0x8]
pf_at 0x7dd
l_kernel_00020efb: mov [ebp-0xc],eax
pf_at 0x7e0
l_kernel_00020efe: fxch st1
pf_at 0x7e2
l_kernel_00020f00: fimul dword [ebp-0xc]
pf_at 0x7e5
l_kernel_00020f03: fsubp st1
pf_at 0x7e7
l_kernel_00020f05: add esp,byte +0xc
pf_at 0x7ea
l_kernel_00020f08: pop ebp
pf_at 0x7eb
l_kernel_00020f09: ret
pf_at 0x7ec
l_kernel_00020f0a: push ebp
pf_at 0x7ed
l_kernel_00020f0b: mov ebp,esp
pf_at 0x7ef
l_kernel_00020f0d: sub esp,byte +0xc
pf_at 0x7f2
l_kernel_00020f10: fld qword [ebp+0x8]
pf_at 0x7f5
l_kernel_00020f13: fld qword [ebp+0x10]
pf_at 0x7f8
l_kernel_00020f16: fnstcw [ebp-0x2]
pf_at 0x7fb
l_kernel_00020f19: movzx eax,word [ebp-0x2]
pf_at 0x7ff
l_kernel_00020f1d: or eax,0xc00
pf_at 0x804
l_kernel_00020f22: mov [ebp-0x4],ax
pf_at 0x808
l_kernel_00020f26: fldcw [ebp-0x4]
pf_at 0x80b
l_kernel_00020f29: fist dword [ebp-0x8]
pf_at 0x80e
l_kernel_00020f2c: fldcw [ebp-0x2]
pf_at 0x811
l_kernel_00020f2f: mov eax,[ebp-0x8]
pf_at 0x814
l_kernel_00020f32: mov [ebp-0xc],eax
pf_at 0x817
l_kernel_00020f35: fild dword [ebp-0xc]
pf_at 0x81a
l_kernel_00020f38: fldz
pf_at 0x81c
l_kernel_00020f3a: fxch st1
pf_at 0x81e
l_kernel_00020f3c: fucomip st2
pf_at 0x820
l_kernel_00020f3e: fstp st1
pf_at 0x822
l_kernel_00020f40: jnz short 0x20f87
pf_at 0x824
l_kernel_00020f42: jpe short 0x20f87
pf_at 0x826
l_kernel_00020f44: fstp st0
pf_at 0x828
l_kernel_00020f46: fld1
pf_at 0x82a
l_kernel_00020f48: test eax,eax
pf_at 0x82c
l_kernel_00020f4a: jz short 0x20f87
pf_at 0x82e
l_kernel_00020f4c: fstp st0
pf_at 0x830
l_kernel_00020f4e: mov ecx,eax
pf_at 0x832
l_kernel_00020f50: neg ecx
pf_at 0x834
l_kernel_00020f52: cmovs ecx,eax
pf_at 0x837
l_kernel_00020f55: fld1
pf_at 0x839
l_kernel_00020f57: test ecx,ecx
pf_at 0x83b
l_kernel_00020f59: jz short 0x20f70
pf_at 0x83d
l_kernel_00020f5b: test cl,0x1
pf_at 0x840
l_kernel_00020f5e: fld st1
pf_at 0x842
l_kernel_00020f60: fmul st1
pf_at 0x844
l_kernel_00020f62: fcmove st1
pf_at 0x846
l_kernel_00020f64: fstp st1
pf_at 0x848
l_kernel_00020f66: fxch st1
pf_at 0x84a
l_kernel_00020f68: fmul to st0
pf_at 0x84c
l_kernel_00020f6a: shr ecx,1
pf_at 0x84e
l_kernel_00020f6c: fxch st1
pf_at 0x850
l_kernel_00020f6e: jmp short 0x20f57
pf_at 0x852
l_kernel_00020f70: fstp st1
pf_at 0x854
l_kernel_00020f72: test eax,eax
pf_at 0x856
l_kernel_00020f74: sets al
pf_at 0x859
l_kernel_00020f77: fld1
pf_at 0x85b
l_kernel_00020f79: fdiv st1
pf_at 0x85d
l_kernel_00020f7b: test al,al
pf_at 0x85f
l_kernel_00020f7d: fxch st1
pf_at 0x861
l_kernel_00020f7f: fcmovne st1
pf_at 0x863
l_kernel_00020f81: fstp st1
pf_at 0x865
l_kernel_00020f83: fldz
pf_at 0x867
l_kernel_00020f85: fxch st1
pf_at 0x869
l_kernel_00020f87: fstp st1
pf_at 0x86b
l_kernel_00020f89: add esp,byte +0xc
pf_at 0x86e
l_kernel_00020f8c: pop ebp
pf_at 0x86f
l_kernel_00020f8d: ret
pf_at 0x870
l_kernel_00020f8e: push ebp
pf_at 0x871
l_kernel_00020f8f: mov ebp,esp
pf_at 0x873
l_kernel_00020f91: sub esp,byte +0x10
pf_at 0x876
l_kernel_00020f94: fld qword [ebp+0x8]
pf_at 0x879
l_kernel_00020f97: fnstcw [ebp-0x2]
pf_at 0x87c
l_kernel_00020f9a: movzx eax,word [ebp-0x2]
pf_at 0x880
l_kernel_00020f9e: or eax,0xc00
pf_at 0x885
l_kernel_00020fa3: mov [ebp-0x4],ax
pf_at 0x889
l_kernel_00020fa7: fldcw [ebp-0x4]
pf_at 0x88c
l_kernel_00020faa: fist dword [ebp-0x8]
pf_at 0x88f
l_kernel_00020fad: fldcw [ebp-0x2]
pf_at 0x892
l_kernel_00020fb0: mov eax,[ebp-0x8]
pf_at 0x895
l_kernel_00020fb3: mov [ebp-0xc],eax
pf_at 0x898
l_kernel_00020fb6: fild dword [ebp-0xc]
pf_at 0x89b
l_kernel_00020fb9: dec eax
pf_at 0x89c
l_kernel_00020fba: fucomi st1
pf_at 0x89e
l_kernel_00020fbc: fstp st1
pf_at 0x8a0
l_kernel_00020fbe: mov [ebp-0x10],eax
pf_at 0x8a3
l_kernel_00020fc1: fild dword [ebp-0x10]
pf_at 0x8a6
l_kernel_00020fc4: fxch st1
pf_at 0x8a8
l_kernel_00020fc6: fcmovnbe st1
pf_at 0x8aa
l_kernel_00020fc8: fstp st1
pf_at 0x8ac
l_kernel_00020fca: add esp,byte +0x10
pf_at 0x8af
l_kernel_00020fcd: pop ebp
pf_at 0x8b0
l_kernel_00020fce: ret
pf_at 0x8b1
l_kernel_00020fcf: push ebp
pf_at 0x8b2
l_kernel_00020fd0: mov ebp,esp
pf_at 0x8b4
l_kernel_00020fd2: sub esp,byte +0x8
pf_at 0x8b7
l_kernel_00020fd5: fld qword [ebp+0x8]
pf_at 0x8ba
l_kernel_00020fd8: fstp qword [esp]
pf_at 0x8bd
l_kernel_00020fdb: call 0x21011
pf_at 0x8c2
l_kernel_00020fe0: fld st0
pf_at 0x8c4
l_kernel_00020fe2: fmul st1
pf_at 0x8c6
l_kernel_00020fe4: fld st0
pf_at 0x8c8
l_kernel_00020fe6: fdiv dword [dword 0x2c8cc]
pf_at 0x8ce
l_kernel_00020fec: fld1
pf_at 0x8d0
l_kernel_00020fee: faddp st1
pf_at 0x8d2
l_kernel_00020ff0: fld st1
pf_at 0x8d4
l_kernel_00020ff2: fmul st2
pf_at 0x8d6
l_kernel_00020ff4: fld st0
pf_at 0x8d8
l_kernel_00020ff6: fdiv dword [dword 0x2c8d0]
pf_at 0x8de
l_kernel_00020ffc: faddp st2
pf_at 0x8e0
l_kernel_00020ffe: fmulp st2
pf_at 0x8e2
l_kernel_00021000: fxch st1
pf_at 0x8e4
l_kernel_00021002: fdiv dword [dword 0x2c8d4]
pf_at 0x8ea
l_kernel_00021008: faddp st1
pf_at 0x8ec
l_kernel_0002100a: fmulp st1
pf_at 0x8ee
l_kernel_0002100c: add esp,byte +0x8
pf_at 0x8f1
l_kernel_0002100f: pop ebp
pf_at 0x8f2
l_kernel_00021010: ret
pf_at 0x8f3
l_kernel_00021011: push ebp
pf_at 0x8f4
l_kernel_00021012: mov ebp,esp
pf_at 0x8f6
l_kernel_00021014: fld qword [ebp+0x8]
pf_at 0x8f9
l_kernel_00021017: fld qword [dword 0x2c8e8]
pf_at 0x8ff
l_kernel_0002101d: fxch st1
pf_at 0x901
l_kernel_0002101f: fucomi st1
pf_at 0x903
l_kernel_00021021: jna short 0x2102d
pf_at 0x905
l_kernel_00021023: fadd qword [dword 0x2c900]
pf_at 0x90b
l_kernel_00021029: fxch st1
pf_at 0x90d
l_kernel_0002102b: jmp short 0x2101d
pf_at 0x90f
l_kernel_0002102d: fstp st1
pf_at 0x911
l_kernel_0002102f: fld qword [dword 0x2c8f0]
pf_at 0x917
l_kernel_00021035: fucomi st1
pf_at 0x919
l_kernel_00021037: jna short 0x21045
pf_at 0x91b
l_kernel_00021039: fxch st1
pf_at 0x91d
l_kernel_0002103b: fadd qword [dword 0x2c8f8]
pf_at 0x923
l_kernel_00021041: fxch st1
pf_at 0x925
l_kernel_00021043: jmp short 0x21035
pf_at 0x927
l_kernel_00021045: fstp st0
pf_at 0x929
l_kernel_00021047: pop ebp
pf_at 0x92a
l_kernel_00021048: ret
pf_at 0x92b
l_kernel_00021049: push ebp
pf_at 0x92c
l_kernel_0002104a: mov ebp,esp
pf_at 0x92e
l_kernel_0002104c: sub esp,byte +0x8
pf_at 0x931
l_kernel_0002104f: fld qword [ebp+0x8]
pf_at 0x934
l_kernel_00021052: fstp qword [esp]
pf_at 0x937
l_kernel_00021055: call 0x21011
pf_at 0x93c
l_kernel_0002105a: fmul to st0
pf_at 0x93e
l_kernel_0002105c: fld st0
pf_at 0x940
l_kernel_0002105e: fmul dword [dword 0x2c8d8]
pf_at 0x946
l_kernel_00021064: fld1
pf_at 0x948
l_kernel_00021066: faddp st1
pf_at 0x94a
l_kernel_00021068: fld st1
pf_at 0x94c
l_kernel_0002106a: fmul st2
pf_at 0x94e
l_kernel_0002106c: fld st0
pf_at 0x950
l_kernel_0002106e: fdiv dword [dword 0x2c8dc]
pf_at 0x956
l_kernel_00021074: faddp st2
pf_at 0x958
l_kernel_00021076: fmulp st2
pf_at 0x95a
l_kernel_00021078: fxch st1
pf_at 0x95c
l_kernel_0002107a: fdiv dword [dword 0x2c8e0]
pf_at 0x962
l_kernel_00021080: faddp st1
pf_at 0x964
l_kernel_00021082: add esp,byte +0x8
pf_at 0x967
l_kernel_00021085: pop ebp
pf_at 0x968
l_kernel_00021086: ret
pf_at 0x969
l_kernel_00021087: push ebp
pf_at 0x96a
l_kernel_00021088: mov ebp,esp
pf_at 0x96c
l_kernel_0002108a: fld qword [ebp+0x8]
pf_at 0x96f
l_kernel_0002108d: fld st0
pf_at 0x971
l_kernel_0002108f: fchs
pf_at 0x973
l_kernel_00021091: fucomi st1
pf_at 0x975
l_kernel_00021093: fxch st1
pf_at 0x977
l_kernel_00021095: fcmovnbe st1
pf_at 0x979
l_kernel_00021097: fstp st1
pf_at 0x97b
l_kernel_00021099: pop ebp
pf_at 0x97c
l_kernel_0002109a: ret
pf_at 0x97d
l_kernel_0002109b: push ebp
pf_at 0x97e
l_kernel_0002109c: mov ebp,esp
pf_at 0x980
l_kernel_0002109e: sub esp,byte +0x10
pf_at 0x983
l_kernel_000210a1: fld dword [ebp+0xc]
pf_at 0x986
l_kernel_000210a4: fld dword [ebp+0x8]
pf_at 0x989
l_kernel_000210a7: fldz
pf_at 0x98b
l_kernel_000210a9: fxch st2
pf_at 0x98d
l_kernel_000210ab: fucomi st2
pf_at 0x98f
l_kernel_000210ad: jnz short 0x210b1
pf_at 0x991
l_kernel_000210af: jpo short 0x210e7
pf_at 0x993
l_kernel_000210b1: fstp st2
pf_at 0x995
l_kernel_000210b3: fld st0
pf_at 0x997
l_kernel_000210b5: fdiv st2
pf_at 0x999
l_kernel_000210b7: fnstcw [ebp-0x2]
pf_at 0x99c
l_kernel_000210ba: movzx eax,word [ebp-0x2]
pf_at 0x9a0
l_kernel_000210be: or eax,0xc00
pf_at 0x9a5
l_kernel_000210c3: mov [ebp-0x4],ax
pf_at 0x9a9
l_kernel_000210c7: fldcw [ebp-0x4]
pf_at 0x9ac
l_kernel_000210ca: fistp dword [ebp-0xc]
pf_at 0x9af
l_kernel_000210cd: fldcw [ebp-0x2]
pf_at 0x9b2
l_kernel_000210d0: mov eax,[ebp-0xc]
pf_at 0x9b5
l_kernel_000210d3: mov [ebp-0x10],eax
pf_at 0x9b8
l_kernel_000210d6: fxch st1
pf_at 0x9ba
l_kernel_000210d8: fimul dword [ebp-0x10]
pf_at 0x9bd
l_kernel_000210db: fsubp st1
pf_at 0x9bf
l_kernel_000210dd: fstp dword [ebp-0x8]
pf_at 0x9c2
l_kernel_000210e0: fld dword [ebp-0x8]
pf_at 0x9c5
l_kernel_000210e3: fldz
pf_at 0x9c7
l_kernel_000210e5: fldz
pf_at 0x9c9
l_kernel_000210e7: fstp st1
pf_at 0x9cb
l_kernel_000210e9: fstp st0
pf_at 0x9cd
l_kernel_000210eb: add esp,byte +0x10
pf_at 0x9d0
l_kernel_000210ee: pop ebp
pf_at 0x9d1
l_kernel_000210ef: ret
pf_at 0x9d2
l_kernel_000210f0: push ebp
pf_at 0x9d3
l_kernel_000210f1: mov ebp,esp
pf_at 0x9d5
l_kernel_000210f3: sub esp,byte +0x18
pf_at 0x9d8
l_kernel_000210f6: mov eax,[ebp+0xc]
pf_at 0x9db
l_kernel_000210f9: fld dword [ebp+0x8]
pf_at 0x9de
l_kernel_000210fc: mov [esp+0x8],eax
pf_at 0x9e2
l_kernel_00021100: fstp qword [esp]
pf_at 0x9e5
l_kernel_00021103: call 0x20e45
pf_at 0x9ea
l_kernel_00021108: fstp dword [ebp-0x4]
pf_at 0x9ed
l_kernel_0002110b: fld dword [ebp-0x4]
pf_at 0x9f0
l_kernel_0002110e: add esp,byte +0x18
pf_at 0x9f3
l_kernel_00021111: pop ebp
pf_at 0x9f4
l_kernel_00021112: ret
pf_at 0x9f5
l_kernel_00021113: push ebp
pf_at 0x9f6
l_kernel_00021114: mov ebp,esp
pf_at 0x9f8
l_kernel_00021116: sub esp,byte +0x18
pf_at 0x9fb
l_kernel_00021119: mov eax,[ebp+0xc]
pf_at 0x9fe
l_kernel_0002111c: fld dword [ebp+0x8]
pf_at 0xa01
l_kernel_0002111f: mov [esp+0x8],eax
pf_at 0xa05
l_kernel_00021123: fstp qword [esp]
pf_at 0xa08
l_kernel_00021126: call 0x20e1b
pf_at 0xa0d
l_kernel_0002112b: fstp dword [ebp-0x4]
pf_at 0xa10
l_kernel_0002112e: fld dword [ebp-0x4]
pf_at 0xa13
l_kernel_00021131: add esp,byte +0x18
pf_at 0xa16
l_kernel_00021134: pop ebp
pf_at 0xa17
l_kernel_00021135: ret
pf_at 0xa18
l_kernel_00021136: push ebp
pf_at 0xa19
l_kernel_00021137: mov ebp,esp
pf_at 0xa1b
l_kernel_00021139: sub esp,byte +0x18
pf_at 0xa1e
l_kernel_0002113c: fld dword [ebp+0x8]
pf_at 0xa21
l_kernel_0002113f: fld dword [ebp+0xc]
pf_at 0xa24
l_kernel_00021142: fstp qword [esp+0x8]
pf_at 0xa28
l_kernel_00021146: fstp qword [esp]
pf_at 0xa2b
l_kernel_00021149: call 0x20f0a
pf_at 0xa30
l_kernel_0002114e: fstp dword [ebp-0x4]
pf_at 0xa33
l_kernel_00021151: fld dword [ebp-0x4]
pf_at 0xa36
l_kernel_00021154: add esp,byte +0x18
pf_at 0xa39
l_kernel_00021157: pop ebp
pf_at 0xa3a
l_kernel_00021158: ret
pf_at 0xa3b
l_kernel_00021159: push ebp
pf_at 0xa3c
l_kernel_0002115a: mov ebp,esp
pf_at 0xa3e
l_kernel_0002115c: sub esp,byte +0x14
pf_at 0xa41
l_kernel_0002115f: fld dword [ebp+0x8]
pf_at 0xa44
l_kernel_00021162: fnstcw [ebp-0x2]
pf_at 0xa47
l_kernel_00021165: movzx eax,word [ebp-0x2]
pf_at 0xa4b
l_kernel_00021169: or eax,0xc00
pf_at 0xa50
l_kernel_0002116e: mov [ebp-0x4],ax
pf_at 0xa54
l_kernel_00021172: fldcw [ebp-0x4]
pf_at 0xa57
l_kernel_00021175: fist dword [ebp-0xc]
pf_at 0xa5a
l_kernel_00021178: fldcw [ebp-0x2]
pf_at 0xa5d
l_kernel_0002117b: mov eax,[ebp-0xc]
pf_at 0xa60
l_kernel_0002117e: mov [ebp-0x10],eax
pf_at 0xa63
l_kernel_00021181: fild dword [ebp-0x10]
pf_at 0xa66
l_kernel_00021184: dec eax
pf_at 0xa67
l_kernel_00021185: fucomi st1
pf_at 0xa69
l_kernel_00021187: fstp st1
pf_at 0xa6b
l_kernel_00021189: mov [ebp-0x14],eax
pf_at 0xa6e
l_kernel_0002118c: fild dword [ebp-0x14]
pf_at 0xa71
l_kernel_0002118f: fxch st1
pf_at 0xa73
l_kernel_00021191: fcmovnbe st1
pf_at 0xa75
l_kernel_00021193: fstp st1
pf_at 0xa77
l_kernel_00021195: fstp dword [ebp-0x8]
pf_at 0xa7a
l_kernel_00021198: fld dword [ebp-0x8]
pf_at 0xa7d
l_kernel_0002119b: add esp,byte +0x14
pf_at 0xa80
l_kernel_0002119e: pop ebp
pf_at 0xa81
l_kernel_0002119f: ret
pf_at 0xa82
l_kernel_000211a0: push ebp
pf_at 0xa83
l_kernel_000211a1: mov ebp,esp
pf_at 0xa85
l_kernel_000211a3: sub esp,byte +0x18
pf_at 0xa88
l_kernel_000211a6: fld dword [ebp+0x8]
pf_at 0xa8b
l_kernel_000211a9: fstp qword [esp]
pf_at 0xa8e
l_kernel_000211ac: call 0x20fcf
pf_at 0xa93
l_kernel_000211b1: fstp dword [ebp-0x4]
pf_at 0xa96
l_kernel_000211b4: fld dword [ebp-0x4]
pf_at 0xa99
l_kernel_000211b7: add esp,byte +0x18
pf_at 0xa9c
l_kernel_000211ba: pop ebp
pf_at 0xa9d
l_kernel_000211bb: ret
pf_at 0xa9e
l_kernel_000211bc: push ebp
pf_at 0xa9f
l_kernel_000211bd: mov ebp,esp
pf_at 0xaa1
l_kernel_000211bf: sub esp,byte +0x18
pf_at 0xaa4
l_kernel_000211c2: fld dword [ebp+0x8]
pf_at 0xaa7
l_kernel_000211c5: fstp qword [esp]
pf_at 0xaaa
l_kernel_000211c8: call 0x21049
pf_at 0xaaf
l_kernel_000211cd: fstp dword [ebp-0x4]
pf_at 0xab2
l_kernel_000211d0: fld dword [ebp-0x4]
pf_at 0xab5
l_kernel_000211d3: add esp,byte +0x18
pf_at 0xab8
l_kernel_000211d6: pop ebp
pf_at 0xab9
l_kernel_000211d7: ret
pf_at 0xaba
l_kernel_000211d8: push ebp
pf_at 0xabb
l_kernel_000211d9: mov ebp,esp
pf_at 0xabd
l_kernel_000211db: fld dword [ebp+0x8]
pf_at 0xac0
l_kernel_000211de: fld st0
pf_at 0xac2
l_kernel_000211e0: fchs
pf_at 0xac4
l_kernel_000211e2: fucomi st1
pf_at 0xac6
l_kernel_000211e4: fxch st1
pf_at 0xac8
l_kernel_000211e6: fcmovnbe st1
pf_at 0xaca
l_kernel_000211e8: fstp st1
pf_at 0xacc
l_kernel_000211ea: pop ebp
pf_at 0xacd
l_kernel_000211eb: ret
pf_at 0xace
l_kernel_000211ec: push ebp
pf_at 0xacf
l_kernel_000211ed: mov ebp,esp
pf_at 0xad1
l_kernel_000211ef: push ebx
pf_at 0xad2
l_kernel_000211f0: push edi
pf_at 0xad3
l_kernel_000211f1: push esi
pf_at 0xad4
l_kernel_000211f2: sub esp,byte +0x1c
pf_at 0xad7
l_kernel_000211f5: mov esi,[ebp+0xc]
pf_at 0xada
l_kernel_000211f8: mov edi,[ebp+0x8]
pf_at 0xadd
l_kernel_000211fb: mov ecx,0x80001f
pf_at 0xae2
l_kernel_00021200: mov eax,edi
pf_at 0xae4
l_kernel_00021202: movzx ebx,byte [eax]
pf_at 0xae7
l_kernel_00021205: lea edx,[ebx-0x9]
pf_at 0xaea
l_kernel_00021208: cmp edx,byte +0x17
pf_at 0xaed
l_kernel_0002120b: ja short 0x21215
pf_at 0xaef
l_kernel_0002120d: bt ecx,edx
pf_at 0xaf2
l_kernel_00021210: jnc short 0x21215
pf_at 0xaf4
l_kernel_00021212: inc eax
pf_at 0xaf5
l_kernel_00021213: jmp short 0x21202
pf_at 0xaf7
l_kernel_00021215: mov ecx,ebx
pf_at 0xaf9
l_kernel_00021217: add cl,0xd5
pf_at 0xafc
l_kernel_0002121a: and cl,0xfd
pf_at 0xaff
l_kernel_0002121d: cmp cl,0x1
pf_at 0xb02
l_kernel_00021220: adc eax,byte +0x0
pf_at 0xb05
l_kernel_00021223: fldz
pf_at 0xb07
l_kernel_00021225: xor edx,edx
pf_at 0xb09
l_kernel_00021227: mov cl,[eax]
pf_at 0xb0b
l_kernel_00021229: mov ch,cl
pf_at 0xb0d
l_kernel_0002122b: add ch,0xd0
pf_at 0xb10
l_kernel_0002122e: cmp ch,0x9
pf_at 0xb13
l_kernel_00021231: ja short 0x2124a
pf_at 0xb15
l_kernel_00021233: movzx ecx,cl
pf_at 0xb18
l_kernel_00021236: add ecx,byte -0x30
pf_at 0xb1b
l_kernel_00021239: mov [ebp-0x18],ecx
pf_at 0xb1e
l_kernel_0002123c: fmul dword [dword 0x2c8e4]
pf_at 0xb24
l_kernel_00021242: fiadd dword [ebp-0x18]
pf_at 0xb27
l_kernel_00021245: inc eax
pf_at 0xb28
l_kernel_00021246: mov dl,0x1
pf_at 0xb2a
l_kernel_00021248: jmp short 0x21227
pf_at 0xb2c
l_kernel_0002124a: fld1
pf_at 0xb2e
l_kernel_0002124c: fldz
pf_at 0xb30
l_kernel_0002124e: cmp cl,0x2e
pf_at 0xb33
l_kernel_00021251: jnz short 0x2128d
pf_at 0xb35
l_kernel_00021253: fstp st1
pf_at 0xb37
l_kernel_00021255: fstp st0
pf_at 0xb39
l_kernel_00021257: inc eax
pf_at 0xb3a
l_kernel_00021258: fld1
pf_at 0xb3c
l_kernel_0002125a: fldz
pf_at 0xb3e
l_kernel_0002125c: fld dword [dword 0x2c8e4]
pf_at 0xb44
l_kernel_00021262: mov cl,[eax]
pf_at 0xb46
l_kernel_00021264: mov ch,cl
pf_at 0xb48
l_kernel_00021266: add ch,0xd0
pf_at 0xb4b
l_kernel_00021269: cmp ch,0x9
pf_at 0xb4e
l_kernel_0002126c: ja short 0x2128b
pf_at 0xb50
l_kernel_0002126e: movzx ecx,cl
pf_at 0xb53
l_kernel_00021271: add ecx,byte -0x30
pf_at 0xb56
l_kernel_00021274: mov [ebp-0x1c],ecx
pf_at 0xb59
l_kernel_00021277: fmul to st1
pf_at 0xb5b
l_kernel_00021279: fxch st1
pf_at 0xb5d
l_kernel_0002127b: fiadd dword [ebp-0x1c]
pf_at 0xb60
l_kernel_0002127e: fxch st2
pf_at 0xb62
l_kernel_00021280: fmul st1
pf_at 0xb64
l_kernel_00021282: inc eax
pf_at 0xb65
l_kernel_00021283: mov dl,0x1
pf_at 0xb67
l_kernel_00021285: fxch st2
pf_at 0xb69
l_kernel_00021287: fxch st1
pf_at 0xb6b
l_kernel_00021289: jmp short 0x21262
pf_at 0xb6d
l_kernel_0002128b: fstp st0
pf_at 0xb6f
l_kernel_0002128d: test dl,0x1
pf_at 0xb72
l_kernel_00021290: jz short 0x212bd
pf_at 0xb74
l_kernel_00021292: fdivrp st1
pf_at 0xb76
l_kernel_00021294: faddp st1
pf_at 0xb78
l_kernel_00021296: movzx ecx,cl
pf_at 0xb7b
l_kernel_00021299: or ecx,byte +0x20
pf_at 0xb7e
l_kernel_0002129c: cmp ecx,byte +0x65
pf_at 0xb81
l_kernel_0002129f: jnz short 0x212cd
pf_at 0xb83
l_kernel_000212a1: movzx ecx,byte [eax+0x1]
pf_at 0xb87
l_kernel_000212a5: xor edx,edx
pf_at 0xb89
l_kernel_000212a7: inc edx
pf_at 0xb8a
l_kernel_000212a8: cmp ecx,byte +0x2b
pf_at 0xb8d
l_kernel_000212ab: jz short 0x212d1
pf_at 0xb8f
l_kernel_000212ad: cmp ecx,byte +0x2d
pf_at 0xb92
l_kernel_000212b0: jnz short 0x212d9
pf_at 0xb94
l_kernel_000212b2: lea edi,[eax+0x2]
pf_at 0xb97
l_kernel_000212b5: xor ecx,ecx
pf_at 0xb99
l_kernel_000212b7: dec ecx
pf_at 0xb9a
l_kernel_000212b8: mov [ebp-0x10],ecx
pf_at 0xb9d
l_kernel_000212bb: jmp short 0x212df
pf_at 0xb9f
l_kernel_000212bd: fstp st2
pf_at 0xba1
l_kernel_000212bf: fstp st0
pf_at 0xba3
l_kernel_000212c1: fstp st0
pf_at 0xba5
l_kernel_000212c3: fldz
pf_at 0xba7
l_kernel_000212c5: test esi,esi
pf_at 0xba9
l_kernel_000212c7: jz short 0x21336
pf_at 0xbab
l_kernel_000212c9: mov [esi],edi
pf_at 0xbad
l_kernel_000212cb: jmp short 0x21336
pf_at 0xbaf
l_kernel_000212cd: mov edi,eax
pf_at 0xbb1
l_kernel_000212cf: jmp short 0x21323
pf_at 0xbb3
l_kernel_000212d1: mov [ebp-0x10],edx
pf_at 0xbb6
l_kernel_000212d4: lea edi,[eax+0x2]
pf_at 0xbb9
l_kernel_000212d7: jmp short 0x212df
pf_at 0xbbb
l_kernel_000212d9: mov [ebp-0x10],edx
pf_at 0xbbe
l_kernel_000212dc: lea edi,[eax+0x1]
pf_at 0xbc1
l_kernel_000212df: xor esi,esi
pf_at 0xbc3
l_kernel_000212e1: mov dword [ebp-0x14],0x0
pf_at 0xbca
l_kernel_000212e8: movzx ecx,byte [edi]
pf_at 0xbcd
l_kernel_000212eb: mov edx,ecx
pf_at 0xbcf
l_kernel_000212ed: add dl,0xd0
pf_at 0xbd2
l_kernel_000212f0: cmp dl,0x9
pf_at 0xbd5
l_kernel_000212f3: ja short 0x21306
pf_at 0xbd7
l_kernel_000212f5: imul edx,esi,byte +0xa
pf_at 0xbda
l_kernel_000212f8: lea esi,[edx+ecx]
pf_at 0xbdd
l_kernel_000212fb: add esi,byte -0x30
pf_at 0xbe0
l_kernel_000212fe: inc edi
pf_at 0xbe1
l_kernel_000212ff: mov cl,0x1
pf_at 0xbe3
l_kernel_00021301: mov [ebp-0x14],ecx
pf_at 0xbe6
l_kernel_00021304: jmp short 0x212e8
pf_at 0xbe8
l_kernel_00021306: test byte [ebp-0x14],0x1
pf_at 0xbec
l_kernel_0002130a: jz short 0x2131e
pf_at 0xbee
l_kernel_0002130c: imul esi,[ebp-0x10]
pf_at 0xbf2
l_kernel_00021310: mov [esp+0x8],esi
pf_at 0xbf6
l_kernel_00021314: fstp qword [esp]
pf_at 0xbf9
l_kernel_00021317: call 0x20e1b
pf_at 0xbfe
l_kernel_0002131c: jmp short 0x21320
pf_at 0xc00
l_kernel_0002131e: mov edi,eax
pf_at 0xc02
l_kernel_00021320: mov esi,[ebp+0xc]
pf_at 0xc05
l_kernel_00021323: test esi,esi
pf_at 0xc07
l_kernel_00021325: jz short 0x21329
pf_at 0xc09
l_kernel_00021327: mov [esi],edi
pf_at 0xc0b
l_kernel_00021329: cmp bl,0x2d
pf_at 0xc0e
l_kernel_0002132c: fld st0
pf_at 0xc10
l_kernel_0002132e: fchs
pf_at 0xc12
l_kernel_00021330: fxch st1
pf_at 0xc14
l_kernel_00021332: fcmove st1
pf_at 0xc16
l_kernel_00021334: fstp st1
pf_at 0xc18
l_kernel_00021336: add esp,byte +0x1c
pf_at 0xc1b
l_kernel_00021339: pop esi
pf_at 0xc1c
l_kernel_0002133a: pop edi
pf_at 0xc1d
l_kernel_0002133b: pop ebx
pf_at 0xc1e
l_kernel_0002133c: pop ebp
pf_at 0xc1f
l_kernel_0002133d: ret
pf_at 0xc20
l_kernel_0002133e: push ebp
pf_at 0xc21
l_kernel_0002133f: mov ebp,esp
pf_at 0xc23
l_kernel_00021341: sub esp,byte +0x8
pf_at 0xc26
l_kernel_00021344: sub esp,byte +0x8
pf_at 0xc29
l_kernel_00021347: push dword [ebp+0xc]
pf_at 0xc2c
l_kernel_0002134a: push dword [ebp+0x8]
pf_at 0xc2f
l_kernel_0002134d: call 0x211ec
pf_at 0xc34
l_kernel_00021352: add esp,byte +0x10
pf_at 0xc37
l_kernel_00021355: fstp dword [ebp-0x4]
pf_at 0xc3a
l_kernel_00021358: fld dword [ebp-0x4]
pf_at 0xc3d
l_kernel_0002135b: add esp,byte +0x8
pf_at 0xc40
l_kernel_0002135e: pop ebp
pf_at 0xc41
l_kernel_0002135f: ret
pf_at 0xc42
l_kernel_00021360: push ebp
pf_at 0xc43
l_kernel_00021361: mov ebp,esp
pf_at 0xc45
l_kernel_00021363: push ebx
pf_at 0xc46
l_kernel_00021364: push edi
pf_at 0xc47
l_kernel_00021365: push esi
pf_at 0xc48
l_kernel_00021366: sub esp,byte +0x3c
pf_at 0xc4b
l_kernel_00021369: mov ecx,[ebp+0xc]
pf_at 0xc4e
l_kernel_0002136c: mov eax,[ebp+0x8]
pf_at 0xc51
l_kernel_0002136f: mov [ebp-0x10],eax
pf_at 0xc54
l_kernel_00021372: mov [ebp-0x14],ecx
pf_at 0xc57
l_kernel_00021375: and dword [ebp-0x18],byte +0x0
pf_at 0xc5b
l_kernel_00021379: test ecx,ecx
pf_at 0xc5d
l_kernel_0002137b: jz short 0x21380
pf_at 0xc5f
l_kernel_0002137d: mov byte [eax],0x0
pf_at 0xc62
l_kernel_00021380: mov edi,[ebp+0x14]
pf_at 0xc65
l_kernel_00021383: mov esi,[ebp+0x10]
pf_at 0xc68
l_kernel_00021386: movzx eax,byte [esi]
pf_at 0xc6b
l_kernel_00021389: cmp eax,byte +0x25
pf_at 0xc6e
l_kernel_0002138c: jz short 0x213ad
pf_at 0xc70
l_kernel_0002138e: test eax,eax
pf_at 0xc72
l_kernel_00021390: jz near 0x215db
pf_at 0xc78
l_kernel_00021396: mov ecx,[ebp-0x14]
pf_at 0xc7b
l_kernel_00021399: cmp ecx,byte +0x2
pf_at 0xc7e
l_kernel_0002139c: jc short 0x213cb
pf_at 0xc80
l_kernel_0002139e: mov edx,[ebp-0x10]
pf_at 0xc83
l_kernel_000213a1: mov [edx],al
pf_at 0xc85
l_kernel_000213a3: inc edx
pf_at 0xc86
l_kernel_000213a4: mov [ebp-0x10],edx
pf_at 0xc89
l_kernel_000213a7: dec ecx
pf_at 0xc8a
l_kernel_000213a8: mov [ebp-0x14],ecx
pf_at 0xc8d
l_kernel_000213ab: jmp short 0x213cb
pf_at 0xc8f
l_kernel_000213ad: mov al,[esi+0x1]
pf_at 0xc92
l_kernel_000213b0: inc esi
pf_at 0xc93
l_kernel_000213b1: cmp al,0x25
pf_at 0xc95
l_kernel_000213b3: jnz short 0x213d5
pf_at 0xc97
l_kernel_000213b5: mov eax,[ebp-0x14]
pf_at 0xc9a
l_kernel_000213b8: cmp eax,byte +0x2
pf_at 0xc9d
l_kernel_000213bb: jc short 0x213cb
pf_at 0xc9f
l_kernel_000213bd: mov ecx,[ebp-0x10]
pf_at 0xca2
l_kernel_000213c0: mov byte [ecx],0x25
pf_at 0xca5
l_kernel_000213c3: inc ecx
pf_at 0xca6
l_kernel_000213c4: mov [ebp-0x10],ecx
pf_at 0xca9
l_kernel_000213c7: dec eax
pf_at 0xcaa
l_kernel_000213c8: mov [ebp-0x14],eax
pf_at 0xcad
l_kernel_000213cb: inc dword [ebp-0x18]
pf_at 0xcb0
l_kernel_000213ce: inc esi
pf_at 0xcb1
l_kernel_000213cf: jmp short 0x21386
pf_at 0xcb3
l_kernel_000213d1: mov al,[esi+0x1]
pf_at 0xcb6
l_kernel_000213d4: inc esi
pf_at 0xcb7
l_kernel_000213d5: mov ecx,eax
pf_at 0xcb9
l_kernel_000213d7: add cl,0xd0
pf_at 0xcbc
l_kernel_000213da: cmp cl,0x9
pf_at 0xcbf
l_kernel_000213dd: jna short 0x213d1
pf_at 0xcc1
l_kernel_000213df: cmp al,0x2e
pf_at 0xcc3
l_kernel_000213e1: jnz short 0x213f1
pf_at 0xcc5
l_kernel_000213e3: mov al,[esi+0x1]
pf_at 0xcc8
l_kernel_000213e6: inc esi
pf_at 0xcc9
l_kernel_000213e7: mov ecx,eax
pf_at 0xccb
l_kernel_000213e9: add cl,0xd0
pf_at 0xcce
l_kernel_000213ec: cmp cl,0xa
pf_at 0xcd1
l_kernel_000213ef: jc short 0x213e3
pf_at 0xcd3
l_kernel_000213f1: movzx eax,al
pf_at 0xcd6
l_kernel_000213f4: lea ecx,[eax-0x63]
pf_at 0xcd9
l_kernel_000213f7: cmp ecx,byte +0x17
pf_at 0xcdc
l_kernel_000213fa: ja short 0x21409
pf_at 0xcde
l_kernel_000213fc: jmp [ecx*4+0x2c908]
pf_at 0xce5
l_kernel_00021403: mov al,[esi+0x1]
pf_at 0xce8
l_kernel_00021406: inc esi
pf_at 0xce9
l_kernel_00021407: jmp short 0x213f1
pf_at 0xceb
l_kernel_00021409: cmp eax,byte +0x49
pf_at 0xcee
l_kernel_0002140c: jz short 0x21420
pf_at 0xcf0
l_kernel_0002140e: cmp eax,byte +0x58
pf_at 0xcf3
l_kernel_00021411: jnz short 0x21454
pf_at 0xcf5
l_kernel_00021413: lea ecx,[ebp-0x10]
pf_at 0xcf8
l_kernel_00021416: lea edx,[ebp-0x14]
pf_at 0xcfb
l_kernel_00021419: push byte +0x1
pf_at 0xcfd
l_kernel_0002141b: jmp near 0x215b7
pf_at 0xd02
l_kernel_00021420: mov eax,[edi]
pf_at 0xd04
l_kernel_00021422: test eax,eax
pf_at 0xd06
l_kernel_00021424: jns short 0x21441
pf_at 0xd08
l_kernel_00021426: mov ecx,[ebp-0x14]
pf_at 0xd0b
l_kernel_00021429: cmp ecx,byte +0x2
pf_at 0xd0e
l_kernel_0002142c: jc short 0x2143c
pf_at 0xd10
l_kernel_0002142e: mov edx,[ebp-0x10]
pf_at 0xd13
l_kernel_00021431: mov byte [edx],0x2d
pf_at 0xd16
l_kernel_00021434: inc edx
pf_at 0xd17
l_kernel_00021435: mov [ebp-0x10],edx
pf_at 0xd1a
l_kernel_00021438: dec ecx
pf_at 0xd1b
l_kernel_00021439: mov [ebp-0x14],ecx
pf_at 0xd1e
l_kernel_0002143c: inc dword [ebp-0x18]
pf_at 0xd21
l_kernel_0002143f: neg eax
pf_at 0xd23
l_kernel_00021441: add edi,byte +0x4
pf_at 0xd26
l_kernel_00021444: lea ecx,[ebp-0x10]
pf_at 0xd29
l_kernel_00021447: lea edx,[ebp-0x14]
pf_at 0xd2c
l_kernel_0002144a: push byte +0x0
pf_at 0xd2e
l_kernel_0002144c: push byte +0xa
pf_at 0xd30
l_kernel_0002144e: push eax
pf_at 0xd31
l_kernel_0002144f: jmp near 0x215ca
pf_at 0xd36
l_kernel_00021454: mov eax,[ebp-0x14]
pf_at 0xd39
l_kernel_00021457: cmp eax,byte +0x2
pf_at 0xd3c
l_kernel_0002145a: jc near 0x213cb
pf_at 0xd42
l_kernel_00021460: mov ecx,[ebp-0x10]
pf_at 0xd45
l_kernel_00021463: mov byte [ecx],0x3f
pf_at 0xd48
l_kernel_00021466: jmp near 0x213c3
pf_at 0xd4d
l_kernel_0002146b: sub esp,byte +0x8
pf_at 0xd50
l_kernel_0002146e: lea ecx,[ebp-0x10]
pf_at 0xd53
l_kernel_00021471: lea edx,[ebp-0x14]
pf_at 0xd56
l_kernel_00021474: push dword [edi]
pf_at 0xd58
l_kernel_00021476: add edi,byte +0x4
pf_at 0xd5b
l_kernel_00021479: lea eax,[ebp-0x18]
pf_at 0xd5e
l_kernel_0002147c: push eax
pf_at 0xd5f
l_kernel_0002147d: call 0x21610
pf_at 0xd64
l_kernel_00021482: jmp near 0x215d3
pf_at 0xd69
l_kernel_00021487: mov eax,[ebp-0x14]
pf_at 0xd6c
l_kernel_0002148a: cmp eax,byte +0x2
pf_at 0xd6f
l_kernel_0002148d: jc short 0x2149e
pf_at 0xd71
l_kernel_0002148f: mov cl,[edi]
pf_at 0xd73
l_kernel_00021491: mov edx,[ebp-0x10]
pf_at 0xd76
l_kernel_00021494: mov [edx],cl
pf_at 0xd78
l_kernel_00021496: inc edx
pf_at 0xd79
l_kernel_00021497: mov [ebp-0x10],edx
pf_at 0xd7c
l_kernel_0002149a: dec eax
pf_at 0xd7d
l_kernel_0002149b: mov [ebp-0x14],eax
pf_at 0xd80
l_kernel_0002149e: add edi,byte +0x4
pf_at 0xd83
l_kernel_000214a1: jmp near 0x213cb
pf_at 0xd88
l_kernel_000214a6: fld qword [edi]
pf_at 0xd8a
l_kernel_000214a8: fldz
pf_at 0xd8c
l_kernel_000214aa: fucomip st1
pf_at 0xd8e
l_kernel_000214ac: mov [ebp-0x24],edi
pf_at 0xd91
l_kernel_000214af: jna short 0x214cc
pf_at 0xd93
l_kernel_000214b1: mov eax,[ebp-0x14]
pf_at 0xd96
l_kernel_000214b4: cmp eax,byte +0x2
pf_at 0xd99
l_kernel_000214b7: jc short 0x214c7
pf_at 0xd9b
l_kernel_000214b9: mov ecx,[ebp-0x10]
pf_at 0xd9e
l_kernel_000214bc: mov byte [ecx],0x2d
pf_at 0xda1
l_kernel_000214bf: inc ecx
pf_at 0xda2
l_kernel_000214c0: mov [ebp-0x10],ecx
pf_at 0xda5
l_kernel_000214c3: dec eax
pf_at 0xda6
l_kernel_000214c4: mov [ebp-0x14],eax
pf_at 0xda9
l_kernel_000214c7: inc dword [ebp-0x18]
pf_at 0xdac
l_kernel_000214ca: fchs
pf_at 0xdae
l_kernel_000214cc: fnstcw [ebp-0x1c]
pf_at 0xdb1
l_kernel_000214cf: movzx eax,word [ebp-0x1c]
pf_at 0xdb5
l_kernel_000214d3: or eax,0xc00
pf_at 0xdba
l_kernel_000214d8: mov [ebp-0x20],ax
pf_at 0xdbe
l_kernel_000214dc: fldcw [ebp-0x20]
pf_at 0xdc1
l_kernel_000214df: fst qword [ebp-0x40]
pf_at 0xdc4
l_kernel_000214e2: fistp dword [ebp-0x38]
pf_at 0xdc7
l_kernel_000214e5: fldcw [ebp-0x1c]
pf_at 0xdca
l_kernel_000214e8: mov edi,[ebp-0x38]
pf_at 0xdcd
l_kernel_000214eb: lea ecx,[ebp-0x10]
pf_at 0xdd0
l_kernel_000214ee: lea edx,[ebp-0x14]
pf_at 0xdd3
l_kernel_000214f1: push byte +0x0
pf_at 0xdd5
l_kernel_000214f3: push byte +0xa
pf_at 0xdd7
l_kernel_000214f5: push edi
pf_at 0xdd8
l_kernel_000214f6: lea eax,[ebp-0x18]
pf_at 0xddb
l_kernel_000214f9: push eax
pf_at 0xddc
l_kernel_000214fa: call 0x21651
pf_at 0xde1
l_kernel_000214ff: add esp,byte +0x10
pf_at 0xde4
l_kernel_00021502: mov eax,[ebp-0x14]
pf_at 0xde7
l_kernel_00021505: mov ecx,[ebp-0x10]
pf_at 0xdea
l_kernel_00021508: cmp eax,byte +0x2
pf_at 0xded
l_kernel_0002150b: jc short 0x21512
pf_at 0xdef
l_kernel_0002150d: mov byte [ecx],0x2e
pf_at 0xdf2
l_kernel_00021510: inc ecx
pf_at 0xdf3
l_kernel_00021511: dec eax
pf_at 0xdf4
l_kernel_00021512: add dword [ebp-0x24],byte +0x8
pf_at 0xdf8
l_kernel_00021516: mov edx,[ebp-0x18]
pf_at 0xdfb
l_kernel_00021519: mov [ebp-0x28],edx
pf_at 0xdfe
l_kernel_0002151c: mov [ebp-0x34],edi
pf_at 0xe01
l_kernel_0002151f: fld qword [ebp-0x40]
pf_at 0xe04
l_kernel_00021522: fisub dword [ebp-0x34]
pf_at 0xe07
l_kernel_00021525: push byte +0x6
pf_at 0xe09
l_kernel_00021527: pop edi
pf_at 0xe0a
l_kernel_00021528: sub edi,byte +0x1
pf_at 0xe0d
l_kernel_0002152b: jc short 0x21566
pf_at 0xe0f
l_kernel_0002152d: fmul dword [dword 0x2c8e4]
pf_at 0xe15
l_kernel_00021533: fnstcw [ebp-0x1a]
pf_at 0xe18
l_kernel_00021536: movzx edx,word [ebp-0x1a]
pf_at 0xe1c
l_kernel_0002153a: or edx,0xc00
pf_at 0xe22
l_kernel_00021540: mov [ebp-0x1e],dx
pf_at 0xe26
l_kernel_00021544: fldcw [ebp-0x1e]
pf_at 0xe29
l_kernel_00021547: fist dword [ebp-0x30]
pf_at 0xe2c
l_kernel_0002154a: fldcw [ebp-0x1a]
pf_at 0xe2f
l_kernel_0002154d: mov edx,[ebp-0x30]
pf_at 0xe32
l_kernel_00021550: cmp eax,byte +0x2
pf_at 0xe35
l_kernel_00021553: jc short 0x2155e
pf_at 0xe37
l_kernel_00021555: mov ebx,edx
pf_at 0xe39
l_kernel_00021557: add bl,0x30
pf_at 0xe3c
l_kernel_0002155a: mov [ecx],bl
pf_at 0xe3e
l_kernel_0002155c: inc ecx
pf_at 0xe3f
l_kernel_0002155d: dec eax
pf_at 0xe40
l_kernel_0002155e: mov [ebp-0x2c],edx
pf_at 0xe43
l_kernel_00021561: fisub dword [ebp-0x2c]
pf_at 0xe46
l_kernel_00021564: jmp short 0x21528
pf_at 0xe48
l_kernel_00021566: fstp st0
pf_at 0xe4a
l_kernel_00021568: mov edx,[ebp-0x28]
pf_at 0xe4d
l_kernel_0002156b: add edx,byte +0x7
pf_at 0xe50
l_kernel_0002156e: mov [ebp-0x14],eax
pf_at 0xe53
l_kernel_00021571: mov [ebp-0x10],ecx
pf_at 0xe56
l_kernel_00021574: mov [ebp-0x18],edx
pf_at 0xe59
l_kernel_00021577: mov edi,[ebp-0x24]
pf_at 0xe5c
l_kernel_0002157a: jmp near 0x213ce
pf_at 0xe61
l_kernel_0002157f: mov ebx,edi
pf_at 0xe63
l_kernel_00021581: mov edi,[edi]
pf_at 0xe65
l_kernel_00021583: add ebx,byte +0x4
pf_at 0xe68
l_kernel_00021586: sub esp,byte +0x8
pf_at 0xe6b
l_kernel_00021589: lea ecx,[ebp-0x10]
pf_at 0xe6e
l_kernel_0002158c: lea edx,[ebp-0x14]
pf_at 0xe71
l_kernel_0002158f: push dword 0x2cac6
pf_at 0xe76
l_kernel_00021594: lea eax,[ebp-0x18]
pf_at 0xe79
l_kernel_00021597: push eax
pf_at 0xe7a
l_kernel_00021598: call 0x21610
pf_at 0xe7f
l_kernel_0002159d: add esp,byte +0x10
pf_at 0xe82
l_kernel_000215a0: lea ecx,[ebp-0x10]
pf_at 0xe85
l_kernel_000215a3: lea edx,[ebp-0x14]
pf_at 0xe88
l_kernel_000215a6: push byte +0x0
pf_at 0xe8a
l_kernel_000215a8: push byte +0x10
pf_at 0xe8c
l_kernel_000215aa: push edi
pf_at 0xe8d
l_kernel_000215ab: mov edi,ebx
pf_at 0xe8f
l_kernel_000215ad: jmp short 0x215ca
pf_at 0xe91
l_kernel_000215af: lea ecx,[ebp-0x10]
pf_at 0xe94
l_kernel_000215b2: lea edx,[ebp-0x14]
pf_at 0xe97
l_kernel_000215b5: push byte +0x0
pf_at 0xe99
l_kernel_000215b7: push byte +0x10
pf_at 0xe9b
l_kernel_000215b9: jmp short 0x215c5
pf_at 0xe9d
l_kernel_000215bb: lea ecx,[ebp-0x10]
pf_at 0xea0
l_kernel_000215be: lea edx,[ebp-0x14]
pf_at 0xea3
l_kernel_000215c1: push byte +0x0
pf_at 0xea5
l_kernel_000215c3: push byte +0xa
pf_at 0xea7
l_kernel_000215c5: push dword [edi]
pf_at 0xea9
l_kernel_000215c7: add edi,byte +0x4
pf_at 0xeac
l_kernel_000215ca: lea eax,[ebp-0x18]
pf_at 0xeaf
l_kernel_000215cd: push eax
pf_at 0xeb0
l_kernel_000215ce: call 0x21651
pf_at 0xeb5
l_kernel_000215d3: add esp,byte +0x10
pf_at 0xeb8
l_kernel_000215d6: jmp near 0x213ce
pf_at 0xebd
l_kernel_000215db: cmp dword [ebp+0xc],byte +0x0
pf_at 0xec1
l_kernel_000215df: jz short 0x215e7
pf_at 0xec3
l_kernel_000215e1: mov eax,[ebp-0x10]
pf_at 0xec6
l_kernel_000215e4: mov byte [eax],0x0
pf_at 0xec9
l_kernel_000215e7: mov eax,[ebp-0x18]
pf_at 0xecc
l_kernel_000215ea: add esp,byte +0x3c
pf_at 0xecf
l_kernel_000215ed: pop esi
pf_at 0xed0
l_kernel_000215ee: pop edi
pf_at 0xed1
l_kernel_000215ef: pop ebx
pf_at 0xed2
l_kernel_000215f0: pop ebp
pf_at 0xed3
l_kernel_000215f1: ret
pf_at 0xed4
l_kernel_000215f2: push ebp
pf_at 0xed5
l_kernel_000215f3: mov ebp,esp
pf_at 0xed7
l_kernel_000215f5: push ebx
pf_at 0xed8
l_kernel_000215f6: push esi
pf_at 0xed9
l_kernel_000215f7: mov eax,[ebp+0x8]
pf_at 0xedc
l_kernel_000215fa: cmp dword [edx],byte +0x2
pf_at 0xedf
l_kernel_000215fd: jc short 0x2160a
pf_at 0xee1
l_kernel_000215ff: mov bl,[ebp+0xc]
pf_at 0xee4
l_kernel_00021602: mov esi,[ecx]
pf_at 0xee6
l_kernel_00021604: mov [esi],bl
pf_at 0xee8
l_kernel_00021606: inc dword [ecx]
pf_at 0xeea
l_kernel_00021608: dec dword [edx]
pf_at 0xeec
l_kernel_0002160a: inc dword [eax]
pf_at 0xeee
l_kernel_0002160c: pop esi
pf_at 0xeef
l_kernel_0002160d: pop ebx
pf_at 0xef0
l_kernel_0002160e: pop ebp
pf_at 0xef1
l_kernel_0002160f: ret
pf_at 0xef2
l_kernel_00021610: push ebp
pf_at 0xef3
l_kernel_00021611: mov ebp,esp
pf_at 0xef5
l_kernel_00021613: push ebx
pf_at 0xef6
l_kernel_00021614: push edi
pf_at 0xef7
l_kernel_00021615: push esi
pf_at 0xef8
l_kernel_00021616: sub esp,byte +0xc
pf_at 0xefb
l_kernel_00021619: mov esi,edx
pf_at 0xefd
l_kernel_0002161b: mov edi,ecx
pf_at 0xeff
l_kernel_0002161d: mov eax,[ebp+0xc]
pf_at 0xf02
l_kernel_00021620: test eax,eax
pf_at 0xf04
l_kernel_00021622: mov ebx,0x2ca9d
pf_at 0xf09
l_kernel_00021627: cmovnz ebx,eax
pf_at 0xf0c
l_kernel_0002162a: mov al,[ebx]
pf_at 0xf0e
l_kernel_0002162c: test al,al
pf_at 0xf10
l_kernel_0002162e: jz short 0x21649
pf_at 0xf12
l_kernel_00021630: inc ebx
pf_at 0xf13
l_kernel_00021631: sub esp,byte +0x8
pf_at 0xf16
l_kernel_00021634: movsx eax,al
pf_at 0xf19
l_kernel_00021637: mov ecx,edi
pf_at 0xf1b
l_kernel_00021639: mov edx,esi
pf_at 0xf1d
l_kernel_0002163b: push eax
pf_at 0xf1e
l_kernel_0002163c: push dword [ebp+0x8]
pf_at 0xf21
l_kernel_0002163f: call 0x215f2
pf_at 0xf26
l_kernel_00021644: add esp,byte +0x10
pf_at 0xf29
l_kernel_00021647: jmp short 0x2162a
pf_at 0xf2b
l_kernel_00021649: add esp,byte +0xc
pf_at 0xf2e
l_kernel_0002164c: pop esi
pf_at 0xf2f
l_kernel_0002164d: pop edi
pf_at 0xf30
l_kernel_0002164e: pop ebx
pf_at 0xf31
l_kernel_0002164f: pop ebp
pf_at 0xf32
l_kernel_00021650: ret
pf_at 0xf33
l_kernel_00021651: push ebp
pf_at 0xf34
l_kernel_00021652: mov ebp,esp
pf_at 0xf36
l_kernel_00021654: push ebx
pf_at 0xf37
l_kernel_00021655: push edi
pf_at 0xf38
l_kernel_00021656: push esi
pf_at 0xf39
l_kernel_00021657: sub esp,byte +0x2c
pf_at 0xf3c
l_kernel_0002165a: mov [ebp-0x10],edx
pf_at 0xf3f
l_kernel_0002165d: mov [ebp-0x14],ecx
pf_at 0xf42
l_kernel_00021660: mov eax,0x2caa4
pf_at 0xf47
l_kernel_00021665: mov esi,0x2cab5
pf_at 0xf4c
l_kernel_0002166a: cmp byte [ebp+0x14],0x0
pf_at 0xf50
l_kernel_0002166e: cmovnz esi,eax
pf_at 0xf53
l_kernel_00021671: mov edi,[ebp+0x10]
pf_at 0xf56
l_kernel_00021674: mov ecx,[ebp+0xc]
pf_at 0xf59
l_kernel_00021677: xor ebx,ebx
pf_at 0xf5b
l_kernel_00021679: mov eax,ecx
pf_at 0xf5d
l_kernel_0002167b: xor edx,edx
pf_at 0xf5f
l_kernel_0002167d: div edi
pf_at 0xf61
l_kernel_0002167f: mov dl,[esi+edx]
pf_at 0xf64
l_kernel_00021682: mov [ebp+ebx-0x34],dl
pf_at 0xf68
l_kernel_00021686: inc ebx
pf_at 0xf69
l_kernel_00021687: cmp ecx,edi
pf_at 0xf6b
l_kernel_00021689: mov ecx,eax
pf_at 0xf6d
l_kernel_0002168b: jnc short 0x21679
pf_at 0xf6f
l_kernel_0002168d: mov esi,ebx
pf_at 0xf71
l_kernel_0002168f: mov edi,[ebp-0x10]
pf_at 0xf74
l_kernel_00021692: sub esi,byte +0x1
pf_at 0xf77
l_kernel_00021695: jc short 0x216b4
pf_at 0xf79
l_kernel_00021697: movsx eax,byte [ebp+ebx-0x35]
pf_at 0xf7e
l_kernel_0002169c: sub esp,byte +0x8
pf_at 0xf81
l_kernel_0002169f: mov ecx,[ebp-0x14]
pf_at 0xf84
l_kernel_000216a2: mov edx,edi
pf_at 0xf86
l_kernel_000216a4: push eax
pf_at 0xf87
l_kernel_000216a5: push dword [ebp+0x8]
pf_at 0xf8a
l_kernel_000216a8: call 0x215f2
pf_at 0xf8f
l_kernel_000216ad: add esp,byte +0x10
pf_at 0xf92
l_kernel_000216b0: mov ebx,esi
pf_at 0xf94
l_kernel_000216b2: jmp short 0x21692
pf_at 0xf96
l_kernel_000216b4: add esp,byte +0x2c
pf_at 0xf99
l_kernel_000216b7: pop esi
pf_at 0xf9a
l_kernel_000216b8: pop edi
pf_at 0xf9b
l_kernel_000216b9: pop ebx
pf_at 0xf9c
l_kernel_000216ba: pop ebp
pf_at 0xf9d
l_kernel_000216bb: ret
pf_at 0xf9e
l_kernel_000216bc: push ebp
pf_at 0xf9f
l_kernel_000216bd: mov ebp,esp
pf_at 0xfa1
l_kernel_000216bf: push esi
pf_at 0xfa2
l_kernel_000216c0: push eax
pf_at 0xfa3
l_kernel_000216c1: mov eax,[ebp+0x8]
pf_at 0xfa6
l_kernel_000216c4: mov ecx,[ebp+0xc]
pf_at 0xfa9
l_kernel_000216c7: mov edx,[ebp+0x10]
pf_at 0xfac
l_kernel_000216ca: lea esi,[ebp+0x14]
pf_at 0xfaf
l_kernel_000216cd: mov [ebp-0x8],esi
pf_at 0xfb2
l_kernel_000216d0: push esi
pf_at 0xfb3
l_kernel_000216d1: push edx
pf_at 0xfb4
l_kernel_000216d2: push ecx
pf_at 0xfb5
l_kernel_000216d3: push eax
pf_at 0xfb6
l_kernel_000216d4: call 0x21360
pf_at 0xfbb
l_kernel_000216d9: add esp,byte +0x14
pf_at 0xfbe
l_kernel_000216dc: pop esi
pf_at 0xfbf
l_kernel_000216dd: pop ebp
pf_at 0xfc0
l_kernel_000216de: ret
pf_at 0xfc1
l_kernel_000216df: push ebp
pf_at 0xfc2
l_kernel_000216e0: mov ebp,esp
pf_at 0xfc4
l_kernel_000216e2: push edi
pf_at 0xfc5
l_kernel_000216e3: push esi
pf_at 0xfc6
l_kernel_000216e4: cmp dword [dword 0x2f0b8],byte +0x0
pf_at 0xfcd
l_kernel_000216eb: jz short 0x2173b
pf_at 0xfcf
l_kernel_000216ed: mov eax,[0x3f0c0]
pf_at 0xfd4
l_kernel_000216f2: test eax,eax
pf_at 0xfd6
l_kernel_000216f4: setnz cl
pf_at 0xfd9
l_kernel_000216f7: test [dword 0x3f0d4],cl
pf_at 0xfdf
l_kernel_000216fd: jz short 0x2173b
pf_at 0xfe1
l_kernel_000216ff: mov esi,[dword 0x6084]
pf_at 0xfe7
l_kernel_00021705: sub esi,[dword 0x3f0cc]
pf_at 0xfed
l_kernel_0002170b: jna short 0x2174b
pf_at 0xfef
l_kernel_0002170d: imul eax,esi
pf_at 0xff2
l_kernel_00021710: mov edi,[dword 0x3f0d0]
pf_at 0xff8
l_kernel_00021716: cmp eax,edi
pf_at 0xffa
l_kernel_00021718: jna short 0x21752
pf_at 0xffc
l_kernel_0002171a: mov [0x3f0d0],eax
pf_at 0x1001
l_kernel_0002171f: call 0x217ea
pf_at 0x1006
l_kernel_00021724: test al,al
pf_at 0x1008
l_kernel_00021726: jz short 0x21761
pf_at 0x100a
l_kernel_00021728: sub esp,byte +0x8
pf_at 0x100d
l_kernel_0002172b: push esi
pf_at 0x100e
l_kernel_0002172c: push dword 0x2cb3f
pf_at 0x1013
l_kernel_00021731: call 0x21c41
pf_at 0x1018
l_kernel_00021736: add esp,byte +0x10
pf_at 0x101b
l_kernel_00021739: jmp short 0x2175c
pf_at 0x101d
l_kernel_0002173b: mov ecx,0x2cac9
pf_at 0x1022
l_kernel_00021740: call 0x2176e
pf_at 0x1027
l_kernel_00021745: xor eax,eax
pf_at 0x1029
l_kernel_00021747: pop esi
pf_at 0x102a
l_kernel_00021748: pop edi
pf_at 0x102b
l_kernel_00021749: pop ebp
pf_at 0x102c
l_kernel_0002174a: ret
pf_at 0x102d
l_kernel_0002174b: mov ecx,0x2cadf
pf_at 0x1032
l_kernel_00021750: jmp short 0x21740
pf_at 0x1034
l_kernel_00021752: mov ecx,0x2cb00
pf_at 0x1039
l_kernel_00021757: call 0x2176e
pf_at 0x103e
l_kernel_0002175c: xor eax,eax
pf_at 0x1040
l_kernel_0002175e: inc eax
pf_at 0x1041
l_kernel_0002175f: jmp short 0x21747
pf_at 0x1043
l_kernel_00021761: mov [dword 0x3f0d0],edi
pf_at 0x1049
l_kernel_00021767: mov ecx,0x2cb22
pf_at 0x104e
l_kernel_0002176c: jmp short 0x21740
pf_at 0x1050
l_kernel_0002176e: test ecx,ecx
pf_at 0x1052
l_kernel_00021770: jz short 0x217e0
pf_at 0x1054
l_kernel_00021772: push ebp
pf_at 0x1055
l_kernel_00021773: mov ebp,esp
pf_at 0x1057
l_kernel_00021775: push edi
pf_at 0x1058
l_kernel_00021776: push esi
pf_at 0x1059
l_kernel_00021777: sub esp,0x100
pf_at 0x105f
l_kernel_0002177d: mov esi,ecx
pf_at 0x1061
l_kernel_0002177f: xor eax,eax
pf_at 0x1063
l_kernel_00021781: lea edi,[ebp-0x108]
pf_at 0x1069
l_kernel_00021787: inc esi
pf_at 0x106a
l_kernel_00021788: movzx ecx,byte [esi-0x1]
pf_at 0x106e
l_kernel_0002178c: cmp ecx,byte +0xd
pf_at 0x1071
l_kernel_0002178f: jz short 0x21787
pf_at 0x1073
l_kernel_00021791: test ecx,ecx
pf_at 0x1075
l_kernel_00021793: jz short 0x217c3
pf_at 0x1077
l_kernel_00021795: cmp ecx,byte +0xa
pf_at 0x107a
l_kernel_00021798: jnz short 0x217ad
pf_at 0x107c
l_kernel_0002179a: mov byte [ebp+eax-0x108],0x0
pf_at 0x1084
l_kernel_000217a2: mov ecx,edi
pf_at 0x1086
l_kernel_000217a4: call 0x2440f
pf_at 0x108b
l_kernel_000217a9: xor eax,eax
pf_at 0x108d
l_kernel_000217ab: jmp short 0x21787
pf_at 0x108f
l_kernel_000217ad: lea edx,[eax+0x1]
pf_at 0x1092
l_kernel_000217b0: cmp edx,0xff
pf_at 0x1098
l_kernel_000217b6: ja short 0x21787
pf_at 0x109a
l_kernel_000217b8: mov [ebp+eax-0x108],cl
pf_at 0x10a1
l_kernel_000217bf: mov eax,edx
pf_at 0x10a3
l_kernel_000217c1: jmp short 0x21787
pf_at 0x10a5
l_kernel_000217c3: mov byte [ebp+eax-0x108],0x0
pf_at 0x10ad
l_kernel_000217cb: lea ecx,[ebp-0x108]
pf_at 0x10b3
l_kernel_000217d1: call 0x2440f
pf_at 0x10b8
l_kernel_000217d6: add esp,0x100
pf_at 0x10be
l_kernel_000217dc: pop esi
pf_at 0x10bf
l_kernel_000217dd: pop edi
pf_at 0x10c0
l_kernel_000217de: pop ebp
pf_at 0x10c1
l_kernel_000217df: ret
pf_at 0x10c2
l_kernel_000217e0: mov ecx,0x2ca9c
pf_at 0x10c7
l_kernel_000217e5: jmp near 0x2440f
pf_at 0x10cc
l_kernel_000217ea: push ebp
pf_at 0x10cd
l_kernel_000217eb: mov ebp,esp
pf_at 0x10cf
l_kernel_000217ed: push ebx
pf_at 0x10d0
l_kernel_000217ee: push edi
pf_at 0x10d1
l_kernel_000217ef: push esi
pf_at 0x10d2
l_kernel_000217f0: sub esp,0x87c
pf_at 0x10d8
l_kernel_000217f6: mov al,[0x3f0d4]
pf_at 0x10dd
l_kernel_000217fb: xor al,0x1
pf_at 0x10df
l_kernel_000217fd: mov edx,[dword 0x3f0c0]
pf_at 0x10e5
l_kernel_00021803: test edx,edx
pf_at 0x10e7
l_kernel_00021805: setz cl
pf_at 0x10ea
l_kernel_00021808: or cl,al
pf_at 0x10ec
l_kernel_0002180a: mov esi,[dword 0x3f0c4]
pf_at 0x10f2
l_kernel_00021810: test esi,esi
pf_at 0x10f4
l_kernel_00021812: setz ch
pf_at 0x10f7
l_kernel_00021815: xor eax,eax
pf_at 0x10f9
l_kernel_00021817: or ch,cl
pf_at 0x10fb
l_kernel_00021819: jnz near 0x21a5a
pf_at 0x1101
l_kernel_0002181f: mov [ebp-0x34],esi
pf_at 0x1104
l_kernel_00021822: mov ebx,edx
pf_at 0x1106
l_kernel_00021824: mov edi,[dword 0x3f0bc]
pf_at 0x110c
l_kernel_0002182a: mov ecx,[dword 0x3f0c8]
pf_at 0x1112
l_kernel_00021830: mov eax,[0x3f0d0]
pf_at 0x1117
l_kernel_00021835: mov [ebp-0x20],eax
pf_at 0x111a
l_kernel_00021838: mov esi,edi
pf_at 0x111c
l_kernel_0002183a: shl esi,byte 0x8
pf_at 0x111f
l_kernel_0002183d: mov eax,esi
pf_at 0x1121
l_kernel_0002183f: xor edx,edx
pf_at 0x1123
l_kernel_00021841: div ebx
pf_at 0x1125
l_kernel_00021843: mov [ebp-0x24],ebx
pf_at 0x1128
l_kernel_00021846: lea eax,[esi+ebx]
pf_at 0x112b
l_kernel_00021849: xor ebx,ebx
pf_at 0x112d
l_kernel_0002184b: mov [ebp-0x1c],edx
pf_at 0x1130
l_kernel_0002184e: sub eax,edx
pf_at 0x1132
l_kernel_00021850: mov [ebp-0x18],eax
pf_at 0x1135
l_kernel_00021853: mov [ebp-0x2c],ecx
pf_at 0x1138
l_kernel_00021856: lea eax,[ecx-0x1]
pf_at 0x113b
l_kernel_00021859: mov [ebp-0x10],eax
pf_at 0x113e
l_kernel_0002185c: mov ecx,0x2f1b4
pf_at 0x1143
l_kernel_00021861: mov [ebp-0x28],edi
pf_at 0x1146
l_kernel_00021864: sub edi,byte +0x1
pf_at 0x1149
l_kernel_00021867: jc short 0x2187d
pf_at 0x114b
l_kernel_00021869: mov eax,[ecx]
pf_at 0x114d
l_kernel_0002186b: add eax,[ebp-0x10]
pf_at 0x1150
l_kernel_0002186e: xor edx,edx
pf_at 0x1152
l_kernel_00021870: div dword [ebp-0x2c]
pf_at 0x1155
l_kernel_00021873: add ebx,eax
pf_at 0x1157
l_kernel_00021875: add ecx,0x100
pf_at 0x115d
l_kernel_0002187b: jmp short 0x21864
pf_at 0x115f
l_kernel_0002187d: mov [ebp-0x14],ebx
pf_at 0x1162
l_kernel_00021880: cmp dword [ebp-0x1c],byte +0x0
pf_at 0x1166
l_kernel_00021884: mov eax,[ebp-0x18]
pf_at 0x1169
l_kernel_00021887: cmovz eax,esi
pf_at 0x116c
l_kernel_0002188a: mov [ebp-0x18],eax
pf_at 0x116f
l_kernel_0002188d: push byte +0x2
pf_at 0x1171
l_kernel_0002188f: pop edi
pf_at 0x1172
l_kernel_00021890: xor ebx,ebx
pf_at 0x1174
l_kernel_00021892: mov ecx,0x2f1b4
pf_at 0x1179
l_kernel_00021897: cmp [ebp-0x28],ebx
pf_at 0x117c
l_kernel_0002189a: jz short 0x218dc
pf_at 0x117e
l_kernel_0002189c: mov esi,[ecx]
pf_at 0x1180
l_kernel_0002189e: test esi,esi
pf_at 0x1182
l_kernel_000218a0: jz short 0x218c3
pf_at 0x1184
l_kernel_000218a2: add esi,[ebp-0x10]
pf_at 0x1187
l_kernel_000218a5: mov eax,esi
pf_at 0x1189
l_kernel_000218a7: xor edx,edx
pf_at 0x118b
l_kernel_000218a9: div dword [ebp-0x2c]
pf_at 0x118e
l_kernel_000218ac: mov [ebp+ebx*4-0x888],eax
pf_at 0x1195
l_kernel_000218b3: cmp [ebp-0x2c],esi
pf_at 0x1198
l_kernel_000218b6: ja short 0x218cb
pf_at 0x119a
l_kernel_000218b8: mov [ebp+ebx*4-0x488],edi
pf_at 0x11a1
l_kernel_000218bf: add edi,eax
pf_at 0x11a3
l_kernel_000218c1: jmp short 0x218d3
pf_at 0x11a5
l_kernel_000218c3: and dword [ebp+ebx*4-0x888],byte +0x0
pf_at 0x11ad
l_kernel_000218cb: and dword [ebp+ebx*4-0x488],byte +0x0
pf_at 0x11b5
l_kernel_000218d3: inc ebx
pf_at 0x11b6
l_kernel_000218d4: add ecx,0x100
pf_at 0x11bc
l_kernel_000218da: jmp short 0x21897
pf_at 0x11be
l_kernel_000218dc: mov eax,[ebp-0x20]
pf_at 0x11c1
l_kernel_000218df: xor edx,edx
pf_at 0x11c3
l_kernel_000218e1: mov ebx,[ebp-0x24]
pf_at 0x11c6
l_kernel_000218e4: div ebx
pf_at 0x11c8
l_kernel_000218e6: mov ecx,eax
pf_at 0x11ca
l_kernel_000218e8: mov eax,[ebp-0x18]
pf_at 0x11cd
l_kernel_000218eb: xor edx,edx
pf_at 0x11cf
l_kernel_000218ed: div ebx
pf_at 0x11d1
l_kernel_000218ef: mov [ebp-0x10],eax
pf_at 0x11d4
l_kernel_000218f2: add edi,byte -0x2
pf_at 0x11d7
l_kernel_000218f5: cmp edi,[ebp-0x14]
pf_at 0x11da
l_kernel_000218f8: ja near 0x21a58
pf_at 0x11e0
l_kernel_000218fe: mov [ebp-0x44],ecx
pf_at 0x11e3
l_kernel_00021901: mov esi,[ebp-0x14]
pf_at 0x11e6
l_kernel_00021904: lea ecx,[esi*4+0x8]
pf_at 0x11ed
l_kernel_0002190b: mov eax,ecx
pf_at 0x11ef
l_kernel_0002190d: xor edx,edx
pf_at 0x11f1
l_kernel_0002190f: div ebx
pf_at 0x11f3
l_kernel_00021911: lea eax,[ebx+esi*4]
pf_at 0x11f6
l_kernel_00021914: add eax,byte +0x8
pf_at 0x11f9
l_kernel_00021917: sub eax,edx
pf_at 0x11fb
l_kernel_00021919: test edx,edx
pf_at 0x11fd
l_kernel_0002191b: cmovz eax,ecx
pf_at 0x1200
l_kernel_0002191e: xor edx,edx
pf_at 0x1202
l_kernel_00021920: div ebx
pf_at 0x1204
l_kernel_00021922: mov ecx,eax
pf_at 0x1206
l_kernel_00021924: mov eax,[ebp-0x10]
pf_at 0x1209
l_kernel_00021927: mov [ebp-0x30],ecx
pf_at 0x120c
l_kernel_0002192a: lea edx,[ecx+eax]
pf_at 0x120f
l_kernel_0002192d: inc edx
pf_at 0x1210
l_kernel_0002192e: mov eax,[ebp-0x34]
pf_at 0x1213
l_kernel_00021931: imul eax,esi
pf_at 0x1216
l_kernel_00021934: mov edi,[ebp-0x44]
pf_at 0x1219
l_kernel_00021937: mov [ebp-0x40],edx
pf_at 0x121c
l_kernel_0002193a: add eax,edx
pf_at 0x121e
l_kernel_0002193c: cmp ebx,[ebp-0x20]
pf_at 0x1221
l_kernel_0002193f: ja short 0x21949
pf_at 0x1223
l_kernel_00021941: cmp eax,edi
pf_at 0x1225
l_kernel_00021943: ja near 0x21a58
pf_at 0x122b
l_kernel_00021949: mov edx,eax
pf_at 0x122d
l_kernel_0002194b: imul edx,ebx
pf_at 0x1230
l_kernel_0002194e: sub esp,byte +0xc
pf_at 0x1233
l_kernel_00021951: mov [ebp-0x1c],edx
pf_at 0x1236
l_kernel_00021954: push edx
pf_at 0x1237
l_kernel_00021955: mov esi,eax
pf_at 0x1239
l_kernel_00021957: call 0x20ae5
pf_at 0x123e
l_kernel_0002195c: add esp,byte +0x10
pf_at 0x1241
l_kernel_0002195f: test eax,eax
pf_at 0x1243
l_kernel_00021961: jz near 0x21a58
pf_at 0x1249
l_kernel_00021967: mov ecx,esi
pf_at 0x124b
l_kernel_00021969: mov esi,edi
pf_at 0x124d
l_kernel_0002196b: mov edx,[ebp-0x30]
pf_at 0x1250
l_kernel_0002196e: inc edx
pf_at 0x1251
l_kernel_0002196f: mov [ebp-0x38],edx
pf_at 0x1254
l_kernel_00021972: sub esp,byte +0x4
pf_at 0x1257
l_kernel_00021975: push dword [ebp-0x1c]
pf_at 0x125a
l_kernel_00021978: push byte +0x0
pf_at 0x125c
l_kernel_0002197a: push eax
pf_at 0x125d
l_kernel_0002197b: mov [ebp-0x18],eax
pf_at 0x1260
l_kernel_0002197e: mov [ebp-0x3c],ecx
pf_at 0x1263
l_kernel_00021981: call 0x20c84
pf_at 0x1268
l_kernel_00021986: add esp,byte +0xc
pf_at 0x126b
l_kernel_00021989: push byte +0x44
pf_at 0x126d
l_kernel_0002198b: pop eax
pf_at 0x126e
l_kernel_0002198c: lea edi,[ebp-0x88]
pf_at 0x1274
l_kernel_00021992: push eax
pf_at 0x1275
l_kernel_00021993: push byte +0x0
pf_at 0x1277
l_kernel_00021995: push edi
pf_at 0x1278
l_kernel_00021996: call 0x20c84
pf_at 0x127d
l_kernel_0002199b: add esp,byte +0xc
pf_at 0x1280
l_kernel_0002199e: push byte +0x8
pf_at 0x1282
l_kernel_000219a0: push dword 0x2ca90
pf_at 0x1287
l_kernel_000219a5: push edi
pf_at 0x1288
l_kernel_000219a6: call 0x20c1d
pf_at 0x128d
l_kernel_000219ab: add esp,byte +0x10
pf_at 0x1290
l_kernel_000219ae: xor ecx,ecx
pf_at 0x1292
l_kernel_000219b0: inc ecx
pf_at 0x1293
l_kernel_000219b1: mov [edi+0x8],ecx
pf_at 0x1296
l_kernel_000219b4: mov [edi+0xc],ebx
pf_at 0x1299
l_kernel_000219b7: mov eax,[ebp-0x34]
pf_at 0x129c
l_kernel_000219ba: mov [edi+0x10],eax
pf_at 0x129f
l_kernel_000219bd: mov [edi+0x14],ecx
pf_at 0x12a2
l_kernel_000219c0: mov eax,[ebp-0x30]
pf_at 0x12a5
l_kernel_000219c3: mov [edi+0x18],eax
pf_at 0x12a8
l_kernel_000219c6: mov eax,[ebp-0x38]
pf_at 0x12ab
l_kernel_000219c9: mov [edi+0x1c],eax
pf_at 0x12ae
l_kernel_000219cc: mov eax,[ebp-0x10]
pf_at 0x12b1
l_kernel_000219cf: mov [edi+0x20],eax
pf_at 0x12b4
l_kernel_000219d2: cmp ebx,[ebp-0x20]
pf_at 0x12b7
l_kernel_000219d5: cmova esi,[ebp-0x3c]
pf_at 0x12bb
l_kernel_000219d9: mov eax,[ebp-0x40]
pf_at 0x12be
l_kernel_000219dc: mov [edi+0x24],eax
pf_at 0x12c1
l_kernel_000219df: mov eax,[ebp-0x14]
pf_at 0x12c4
l_kernel_000219e2: mov [edi+0x28],eax
pf_at 0x12c7
l_kernel_000219e5: mov eax,[ebp-0x28]
pf_at 0x12ca
l_kernel_000219e8: mov [edi+0x2c],eax
pf_at 0x12cd
l_kernel_000219eb: mov [edi+0x30],esi
pf_at 0x12d0
l_kernel_000219ee: sub esp,byte +0x4
pf_at 0x12d3
l_kernel_000219f1: push byte +0x44
pf_at 0x12d5
l_kernel_000219f3: pop eax
pf_at 0x12d6
l_kernel_000219f4: push eax
pf_at 0x12d7
l_kernel_000219f5: push edi
pf_at 0x12d8
l_kernel_000219f6: mov esi,[ebp-0x18]
pf_at 0x12db
l_kernel_000219f9: push esi
pf_at 0x12dc
l_kernel_000219fa: call 0x20c1d
pf_at 0x12e1
l_kernel_000219ff: add esp,byte +0x10
pf_at 0x12e4
l_kernel_00021a02: mov eax,[edi+0x14]
pf_at 0x12e7
l_kernel_00021a05: imul eax,ebx
pf_at 0x12ea
l_kernel_00021a08: or dword [esi+eax],byte -0x1
pf_at 0x12ee
l_kernel_00021a0c: or dword [esi+eax+0x4],byte -0x1
pf_at 0x12f3
l_kernel_00021a11: add eax,esi
pf_at 0x12f5
l_kernel_00021a13: mov [ebp-0x10],eax
pf_at 0x12f8
l_kernel_00021a16: xor ecx,ecx
pf_at 0x12fa
l_kernel_00021a18: cmp ecx,[ebp-0x28]
pf_at 0x12fd
l_kernel_00021a1b: jz short 0x21a65
pf_at 0x12ff
l_kernel_00021a1d: xor edx,edx
pf_at 0x1301
l_kernel_00021a1f: sub edx,[ebp+ecx*4-0x888]
pf_at 0x1308
l_kernel_00021a26: xor edi,edi
pf_at 0x130a
l_kernel_00021a28: inc edi
pf_at 0x130b
l_kernel_00021a29: lea ebx,[edx+edi]
pf_at 0x130e
l_kernel_00021a2c: cmp ebx,byte +0x1
pf_at 0x1311
l_kernel_00021a2f: jz short 0x21a52
pf_at 0x1313
l_kernel_00021a31: mov ebx,[ebp+ecx*4-0x488]
pf_at 0x131a
l_kernel_00021a38: add ebx,edi
pf_at 0x131c
l_kernel_00021a3a: mov esi,edx
pf_at 0x131e
l_kernel_00021a3c: add esi,edi
pf_at 0x1320
l_kernel_00021a3e: mov esi,ebx
pf_at 0x1322
l_kernel_00021a40: mov eax,0xffffffff
pf_at 0x1327
l_kernel_00021a45: cmovz esi,eax
pf_at 0x132a
l_kernel_00021a48: mov eax,[ebp-0x10]
pf_at 0x132d
l_kernel_00021a4b: mov [eax+ebx*4-0x4],esi
pf_at 0x1331
l_kernel_00021a4f: inc edi
pf_at 0x1332
l_kernel_00021a50: jmp short 0x21a29
pf_at 0x1334
l_kernel_00021a52: inc ecx
pf_at 0x1335
l_kernel_00021a53: mov ebx,[ebp-0x24]
pf_at 0x1338
l_kernel_00021a56: jmp short 0x21a18
pf_at 0x133a
l_kernel_00021a58: xor eax,eax
pf_at 0x133c
l_kernel_00021a5a: add esp,0x87c
pf_at 0x1342
l_kernel_00021a60: pop esi
pf_at 0x1343
l_kernel_00021a61: pop edi
pf_at 0x1344
l_kernel_00021a62: pop ebx
pf_at 0x1345
l_kernel_00021a63: pop ebp
pf_at 0x1346
l_kernel_00021a64: ret
pf_at 0x1347
l_kernel_00021a65: mov ecx,[ebp-0x6c]
pf_at 0x134a
l_kernel_00021a68: imul ecx,ebx
pf_at 0x134d
l_kernel_00021a6b: mov eax,[ebp-0x18]
pf_at 0x1350
l_kernel_00021a6e: add ecx,eax
pf_at 0x1352
l_kernel_00021a70: mov [ebp-0x20],ecx
pf_at 0x1355
l_kernel_00021a73: xor edi,edi
pf_at 0x1357
l_kernel_00021a75: xor ecx,ecx
pf_at 0x1359
l_kernel_00021a77: cmp [ebp-0x28],ecx
pf_at 0x135c
l_kernel_00021a7a: jz short 0x21af0
pf_at 0x135e
l_kernel_00021a7c: mov esi,[ebp-0x20]
pf_at 0x1361
l_kernel_00021a7f: lea edx,[esi+edi]
pf_at 0x1364
l_kernel_00021a82: mov [ebp-0x14],edx
pf_at 0x1367
l_kernel_00021a85: sub esp,byte +0x4
pf_at 0x136a
l_kernel_00021a88: mov eax,0x100
pf_at 0x136f
l_kernel_00021a8d: push eax
pf_at 0x1370
l_kernel_00021a8e: push byte +0x0
pf_at 0x1372
l_kernel_00021a90: push edx
pf_at 0x1373
l_kernel_00021a91: mov [ebp-0x10],ecx
pf_at 0x1376
l_kernel_00021a94: call 0x20c84
pf_at 0x137b
l_kernel_00021a99: add esp,byte +0x10
pf_at 0x137e
l_kernel_00021a9c: lea ebx,[edi+0x2f0bc]
pf_at 0x1384
l_kernel_00021aa2: push ebx
pf_at 0x1385
l_kernel_00021aa3: push dword 0x2cb77
pf_at 0x138a
l_kernel_00021aa8: push dword 0xf0
pf_at 0x138f
l_kernel_00021aad: push dword [ebp-0x14]
pf_at 0x1392
l_kernel_00021ab0: call 0x216bc
pf_at 0x1397
l_kernel_00021ab5: mov ecx,[ebp-0x10]
pf_at 0x139a
l_kernel_00021ab8: add esp,byte +0x10
pf_at 0x139d
l_kernel_00021abb: mov eax,[ebp+ecx*4-0x488]
pf_at 0x13a4
l_kernel_00021ac2: mov [esi+edi+0xf0],eax
pf_at 0x13ab
l_kernel_00021ac9: mov eax,[ebx+0xf8]
pf_at 0x13b1
l_kernel_00021acf: mov [esi+edi+0xf4],eax
pf_at 0x13b8
l_kernel_00021ad6: mov eax,[ebx+0xfc]
pf_at 0x13be
l_kernel_00021adc: mov [esi+edi+0xf8],eax
pf_at 0x13c5
l_kernel_00021ae3: mov eax,[ebp-0x18]
pf_at 0x13c8
l_kernel_00021ae6: inc ecx
pf_at 0x13c9
l_kernel_00021ae7: mov edx,0x100
pf_at 0x13ce
l_kernel_00021aec: add edi,edx
pf_at 0x13d0
l_kernel_00021aee: jmp short 0x21a77
pf_at 0x13d2
l_kernel_00021af0: mov ecx,[ebp-0x64]
pf_at 0x13d5
l_kernel_00021af3: imul ecx,[ebp-0x24]
pf_at 0x13d9
l_kernel_00021af7: add ecx,eax
pf_at 0x13db
l_kernel_00021af9: mov [ebp-0x24],ecx
pf_at 0x13de
l_kernel_00021afc: xor ecx,ecx
pf_at 0x13e0
l_kernel_00021afe: mov edx,[ebp-0x2c]
pf_at 0x13e3
l_kernel_00021b01: cmp ecx,[ebp-0x28]
pf_at 0x13e6
l_kernel_00021b04: jz near 0x21b9d
pf_at 0x13ec
l_kernel_00021b0a: mov eax,ecx
pf_at 0x13ee
l_kernel_00021b0c: mov [ebp-0x14],ecx
pf_at 0x13f1
l_kernel_00021b0f: shl eax,byte 0x8
pf_at 0x13f4
l_kernel_00021b12: cmp dword [eax+0x2f1b0],byte +0x0
pf_at 0x13fb
l_kernel_00021b19: jz short 0x21b91
pf_at 0x13fd
l_kernel_00021b1b: lea esi,[eax+0x2f0bc]
pf_at 0x1403
l_kernel_00021b21: cmp dword [esi+0xf8],byte +0x0
pf_at 0x140a
l_kernel_00021b28: jz short 0x21b91
pf_at 0x140c
l_kernel_00021b2a: xor ebx,ebx
pf_at 0x140e
l_kernel_00021b2c: xor ecx,ecx
pf_at 0x1410
l_kernel_00021b2e: mov eax,[ebp-0x14]
pf_at 0x1413
l_kernel_00021b31: sub ecx,[ebp+eax*4-0x888]
pf_at 0x141a
l_kernel_00021b38: mov [ebp-0x10],ecx
pf_at 0x141d
l_kernel_00021b3b: push byte -0x2
pf_at 0x141f
l_kernel_00021b3d: pop edi
pf_at 0x1420
l_kernel_00021b3e: mov eax,[ebp-0x10]
pf_at 0x1423
l_kernel_00021b41: add eax,edi
pf_at 0x1425
l_kernel_00021b43: cmp eax,byte -0x2
pf_at 0x1428
l_kernel_00021b46: jz short 0x21b91
pf_at 0x142a
l_kernel_00021b48: mov eax,[esi+0xf8]
pf_at 0x1430
l_kernel_00021b4e: sub eax,ebx
pf_at 0x1432
l_kernel_00021b50: mov ecx,0x0
pf_at 0x1437
l_kernel_00021b55: cmovc eax,ecx
pf_at 0x143a
l_kernel_00021b58: cmp eax,edx
pf_at 0x143c
l_kernel_00021b5a: cmovnc eax,edx
pf_at 0x143f
l_kernel_00021b5d: test eax,eax
pf_at 0x1441
l_kernel_00021b5f: jz short 0x21b8c
pf_at 0x1443
l_kernel_00021b61: mov ecx,[ebp-0x14]
pf_at 0x1446
l_kernel_00021b64: mov ecx,[ebp+ecx*4-0x488]
pf_at 0x144d
l_kernel_00021b6b: add ecx,edi
pf_at 0x144f
l_kernel_00021b6d: imul ecx,edx
pf_at 0x1452
l_kernel_00021b70: add ecx,[ebp-0x24]
pf_at 0x1455
l_kernel_00021b73: mov edx,[esi+0xf4]
pf_at 0x145b
l_kernel_00021b79: add edx,ebx
pf_at 0x145d
l_kernel_00021b7b: sub esp,byte +0x4
pf_at 0x1460
l_kernel_00021b7e: push eax
pf_at 0x1461
l_kernel_00021b7f: push edx
pf_at 0x1462
l_kernel_00021b80: push ecx
pf_at 0x1463
l_kernel_00021b81: call 0x20c1d
pf_at 0x1468
l_kernel_00021b86: mov edx,[ebp-0x2c]
pf_at 0x146b
l_kernel_00021b89: add esp,byte +0x10
pf_at 0x146e
l_kernel_00021b8c: inc edi
pf_at 0x146f
l_kernel_00021b8d: add ebx,edx
pf_at 0x1471
l_kernel_00021b8f: jmp short 0x21b3e
pf_at 0x1473
l_kernel_00021b91: mov ecx,[ebp-0x14]
pf_at 0x1476
l_kernel_00021b94: inc ecx
pf_at 0x1477
l_kernel_00021b95: mov eax,[ebp-0x18]
pf_at 0x147a
l_kernel_00021b98: jmp near 0x21b01
pf_at 0x147f
l_kernel_00021b9d: mov dword [ebp-0x14],0x0
pf_at 0x1486
l_kernel_00021ba4: mov ebx,[ebp-0x1c]
pf_at 0x1489
l_kernel_00021ba7: test bx,0x1ff
pf_at 0x148e
l_kernel_00021bac: jnz short 0x21c2d
pf_at 0x1490
l_kernel_00021bae: test ebx,ebx
pf_at 0x1492
l_kernel_00021bb0: jz short 0x21c2d
pf_at 0x1494
l_kernel_00021bb2: cmp dword [dword 0x2f0b8],byte +0x0
pf_at 0x149b
l_kernel_00021bb9: jz short 0x21c2d
pf_at 0x149d
l_kernel_00021bbb: mov ecx,[dword 0x3f0cc]
pf_at 0x14a3
l_kernel_00021bc1: mov [ebp-0x10],ecx
pf_at 0x14a6
l_kernel_00021bc4: xor edi,edi
pf_at 0x14a8
l_kernel_00021bc6: sub ebx,edi
pf_at 0x14aa
l_kernel_00021bc8: setna cl
pf_at 0x14ad
l_kernel_00021bcb: mov [ebp-0x14],ecx
pf_at 0x14b0
l_kernel_00021bce: jna short 0x21c2d
pf_at 0x14b2
l_kernel_00021bd0: shr ebx,byte 0x9
pf_at 0x14b5
l_kernel_00021bd3: cmp ebx,byte +0x38
pf_at 0x14b8
l_kernel_00021bd6: push byte +0x38
pf_at 0x14ba
l_kernel_00021bd8: pop eax
pf_at 0x14bb
l_kernel_00021bd9: cmovnc ebx,eax
pf_at 0x14be
l_kernel_00021bdc: mov esi,ebx
pf_at 0x14c0
l_kernel_00021bde: shl esi,byte 0x9
pf_at 0x14c3
l_kernel_00021be1: mov eax,[ebp-0x18]
pf_at 0x14c6
l_kernel_00021be4: add eax,edi
pf_at 0x14c8
l_kernel_00021be6: sub esp,byte +0x4
pf_at 0x14cb
l_kernel_00021be9: push esi
pf_at 0x14cc
l_kernel_00021bea: push eax
pf_at 0x14cd
l_kernel_00021beb: push dword 0x10000
pf_at 0x14d2
l_kernel_00021bf0: call 0x20c1d
pf_at 0x14d7
l_kernel_00021bf5: add esp,byte +0x10
pf_at 0x14da
l_kernel_00021bf8: mov eax,[0x6068]
pf_at 0x14df
l_kernel_00021bfd: mov ecx,[dword 0x2f01c]
pf_at 0x14e5
l_kernel_00021c03: mov [ecx],eax
pf_at 0x14e7
l_kernel_00021c05: mov eax,edi
pf_at 0x14e9
l_kernel_00021c07: shr eax,byte 0x9
pf_at 0x14ec
l_kernel_00021c0a: add eax,[ebp-0x10]
pf_at 0x14ef
l_kernel_00021c0d: mov ecx,[dword 0x2f024]
pf_at 0x14f5
l_kernel_00021c13: mov [ecx],eax
pf_at 0x14f7
l_kernel_00021c15: mov eax,[0x2f020]
pf_at 0x14fc
l_kernel_00021c1a: mov [eax],ebx
pf_at 0x14fe
l_kernel_00021c1c: call 0x202c9
pf_at 0x1503
l_kernel_00021c21: mov ebx,[ebp-0x1c]
pf_at 0x1506
l_kernel_00021c24: add edi,esi
pf_at 0x1508
l_kernel_00021c26: test eax,eax
pf_at 0x150a
l_kernel_00021c28: mov eax,[ebp-0x18]
pf_at 0x150d
l_kernel_00021c2b: jnz short 0x21bc6
pf_at 0x150f
l_kernel_00021c2d: sub esp,byte +0xc
pf_at 0x1512
l_kernel_00021c30: push eax
pf_at 0x1513
l_kernel_00021c31: call 0x20aee
pf_at 0x1518
l_kernel_00021c36: add esp,byte +0x10
pf_at 0x151b
l_kernel_00021c39: mov eax,[ebp-0x14]
pf_at 0x151e
l_kernel_00021c3c: jmp near 0x21a5a
pf_at 0x1523
l_kernel_00021c41: push ebp
pf_at 0x1524
l_kernel_00021c42: mov ebp,esp
pf_at 0x1526
l_kernel_00021c44: push esi
pf_at 0x1527
l_kernel_00021c45: sub esp,0x204
pf_at 0x152d
l_kernel_00021c4b: mov eax,[ebp+0x8]
pf_at 0x1530
l_kernel_00021c4e: lea ecx,[ebp+0xc]
pf_at 0x1533
l_kernel_00021c51: mov [ebp-0x8],ecx
pf_at 0x1536
l_kernel_00021c54: lea esi,[ebp-0x208]
pf_at 0x153c
l_kernel_00021c5a: push ecx
pf_at 0x153d
l_kernel_00021c5b: push eax
pf_at 0x153e
l_kernel_00021c5c: push dword 0x200
pf_at 0x1543
l_kernel_00021c61: push esi
pf_at 0x1544
l_kernel_00021c62: call 0x21360
pf_at 0x1549
l_kernel_00021c67: add esp,byte +0x10
pf_at 0x154c
l_kernel_00021c6a: mov ecx,esi
pf_at 0x154e
l_kernel_00021c6c: call 0x2176e
pf_at 0x1553
l_kernel_00021c71: add esp,0x204
pf_at 0x1559
l_kernel_00021c77: pop esi
pf_at 0x155a
l_kernel_00021c78: pop ebp
pf_at 0x155b
l_kernel_00021c79: ret
pf_at 0x155c
l_kernel_00021c7a: push ebp
pf_at 0x155d
l_kernel_00021c7b: mov ebp,esp
pf_at 0x155f
l_kernel_00021c7d: sub esp,byte +0x8
pf_at 0x1562
l_kernel_00021c80: mov al,[ebp+0x10]
pf_at 0x1565
l_kernel_00021c83: mov ecx,[ebp+0xc]
pf_at 0x1568
l_kernel_00021c86: mov edx,[ebp+0x8]
pf_at 0x156b
l_kernel_00021c89: mov [dword 0x4f1cd],dh
pf_at 0x1571
l_kernel_00021c8f: mov [dword 0x2f0a5],dl
pf_at 0x1577
l_kernel_00021c95: shr edx,byte 0x10
pf_at 0x157a
l_kernel_00021c98: mov [dword 0x2f0a4],dl
pf_at 0x1580
l_kernel_00021c9e: mov [dword 0x4f1cf],ch
pf_at 0x1586
l_kernel_00021ca4: mov [dword 0x4f1d0],cl
pf_at 0x158c
l_kernel_00021caa: shr ecx,byte 0x10
pf_at 0x158f
l_kernel_00021cad: mov [dword 0x4f1ce],cl
pf_at 0x1595
l_kernel_00021cb3: mov [0x2f0a6],al
pf_at 0x159a
l_kernel_00021cb8: call 0x244f0
pf_at 0x159f
l_kernel_00021cbd: call 0x21cca
pf_at 0x15a4
l_kernel_00021cc2: xor eax,eax
pf_at 0x15a6
l_kernel_00021cc4: inc eax
pf_at 0x15a7
l_kernel_00021cc5: add esp,byte +0x8
pf_at 0x15aa
l_kernel_00021cc8: pop ebp
pf_at 0x15ab
l_kernel_00021cc9: ret
pf_at 0x15ac
l_kernel_00021cca: push ebp
pf_at 0x15ad
l_kernel_00021ccb: mov ebp,esp
pf_at 0x15af
l_kernel_00021ccd: push ebx
pf_at 0x15b0
l_kernel_00021cce: push edi
pf_at 0x15b1
l_kernel_00021ccf: push esi
pf_at 0x15b2
l_kernel_00021cd0: sub esp,byte +0x4c
pf_at 0x15b5
l_kernel_00021cd3: mov eax,[0x46c]
pf_at 0x15ba
l_kernel_00021cd8: xor esi,esi
pf_at 0x15bc
l_kernel_00021cda: push byte +0x9
pf_at 0x15be
l_kernel_00021cdc: pop ecx
pf_at 0x15bf
l_kernel_00021cdd: xor edx,edx
pf_at 0x15c1
l_kernel_00021cdf: div ecx
pf_at 0x15c3
l_kernel_00021ce1: mov [ebp-0x48],eax
pf_at 0x15c6
l_kernel_00021ce4: cmp byte [dword 0x4f1f4],0x1
pf_at 0x15cd
l_kernel_00021ceb: jnz near 0x22014
pf_at 0x15d3
l_kernel_00021cf1: cmp byte [dword 0x4f1e0],0x1
pf_at 0x15da
l_kernel_00021cf8: jnz near 0x22014
pf_at 0x15e0
l_kernel_00021cfe: cmp byte [dword 0x4f1f0],0x1
pf_at 0x15e7
l_kernel_00021d05: jnz near 0x22014
pf_at 0x15ed
l_kernel_00021d0b: mov eax,[0x4f1e4]
pf_at 0x15f2
l_kernel_00021d10: lea edx,[eax-0x30]
pf_at 0x15f5
l_kernel_00021d13: cmp eax,byte +0x31
pf_at 0x15f8
l_kernel_00021d16: cmovc edx,eax
pf_at 0x15fb
l_kernel_00021d19: mov eax,edx
pf_at 0x15fd
l_kernel_00021d1b: shr eax,byte 0x3
pf_at 0x1600
l_kernel_00021d1e: mov edi,[dword 0x4f1e8]
pf_at 0x1606
l_kernel_00021d24: mov esi,edi
pf_at 0x1608
l_kernel_00021d26: shr esi,byte 0x4
pf_at 0x160b
l_kernel_00021d29: xor ecx,ecx
pf_at 0x160d
l_kernel_00021d2b: inc ecx
pf_at 0x160e
l_kernel_00021d2c: cmp edx,byte +0x8
pf_at 0x1611
l_kernel_00021d2f: cmovnc ecx,eax
pf_at 0x1614
l_kernel_00021d32: call 0x2457a
pf_at 0x1619
l_kernel_00021d37: mov eax,[0x4f1d8]
pf_at 0x161e
l_kernel_00021d3c: mul dword [dword 0x4f1d4]
pf_at 0x1624
l_kernel_00021d42: mov ecx,eax
pf_at 0x1626
l_kernel_00021d44: add ecx,0xc0000000
pf_at 0x162c
l_kernel_00021d4a: adc edx,byte -0x1
pf_at 0x162f
l_kernel_00021d4d: shl eax,byte 0x2
pf_at 0x1632
l_kernel_00021d50: xor ebx,ebx
pf_at 0x1634
l_kernel_00021d52: cmp ecx,0xc0000001
pf_at 0x163a
l_kernel_00021d58: sbb edx,byte -0x1
pf_at 0x163d
l_kernel_00021d5b: cmovc eax,ebx
pf_at 0x1640
l_kernel_00021d5e: sub esp,byte +0x4
pf_at 0x1643
l_kernel_00021d61: push eax
pf_at 0x1644
l_kernel_00021d62: push dword [dword 0x4f1dc]
pf_at 0x164a
l_kernel_00021d68: push dword [dword 0x4f1ec]
pf_at 0x1650
l_kernel_00021d6e: call 0x20c1d
pf_at 0x1655
l_kernel_00021d73: add esp,byte +0x10
pf_at 0x1658
l_kernel_00021d76: mov ebx,[dword 0x6f3f8]
pf_at 0x165e
l_kernel_00021d7c: mov eax,ebx
pf_at 0x1660
l_kernel_00021d7e: sub eax,esi
pf_at 0x1662
l_kernel_00021d80: mov ecx,0x0
pf_at 0x1667
l_kernel_00021d85: cmovc eax,ecx
pf_at 0x166a
l_kernel_00021d88: mov dword [ebp-0x3c],0x0
pf_at 0x1671
l_kernel_00021d8f: cmp edi,byte +0x10
pf_at 0x1674
l_kernel_00021d92: cmovc eax,ecx
pf_at 0x1677
l_kernel_00021d95: mov [ebp-0x30],eax
pf_at 0x167a
l_kernel_00021d98: jc short 0x21dad
pf_at 0x167c
l_kernel_00021d9a: xor eax,eax
pf_at 0x167e
l_kernel_00021d9c: mov ecx,esi
pf_at 0x1680
l_kernel_00021d9e: sub ecx,ebx
pf_at 0x1682
l_kernel_00021da0: cmovc ecx,eax
pf_at 0x1685
l_kernel_00021da3: shr ecx,1
pf_at 0x1687
l_kernel_00021da5: cmp ebx,esi
pf_at 0x1689
l_kernel_00021da7: cmovnc ecx,eax
pf_at 0x168c
l_kernel_00021daa: mov [ebp-0x3c],ecx
pf_at 0x168f
l_kernel_00021dad: sub ebx,[ebp-0x30]
pf_at 0x1692
l_kernel_00021db0: mov eax,0x0
pf_at 0x1697
l_kernel_00021db5: cmovc ebx,eax
pf_at 0x169a
l_kernel_00021db8: cmp ebx,esi
pf_at 0x169c
l_kernel_00021dba: cmovnc ebx,esi
pf_at 0x169f
l_kernel_00021dbd: xor ecx,ecx
pf_at 0x16a1
l_kernel_00021dbf: mov [ebp-0x50],ebx
pf_at 0x16a4
l_kernel_00021dc2: cmp ecx,ebx
pf_at 0x16a6
l_kernel_00021dc4: jz near 0x22180
pf_at 0x16ac
l_kernel_00021dca: mov eax,[ebp-0x30]
pf_at 0x16af
l_kernel_00021dcd: mov [ebp-0x4c],ecx
pf_at 0x16b2
l_kernel_00021dd0: add eax,ecx
pf_at 0x16b4
l_kernel_00021dd2: imul eax,eax,dword 0x101
pf_at 0x16ba
l_kernel_00021dd8: lea edi,[eax+0x4f1f8]
pf_at 0x16c0
l_kernel_00021dde: cmp byte [edi+0x100],0x1
pf_at 0x16c7
l_kernel_00021de5: push byte +0x18
pf_at 0x16c9
l_kernel_00021de7: pop eax
pf_at 0x16ca
l_kernel_00021de8: mov [ebp-0x18],eax
pf_at 0x16cd
l_kernel_00021deb: jnz short 0x21e1b
pf_at 0x16cf
l_kernel_00021ded: sub esp,byte +0xc
pf_at 0x16d2
l_kernel_00021df0: push edi
pf_at 0x16d3
l_kernel_00021df1: call 0x20ccf
pf_at 0x16d8
l_kernel_00021df6: add esp,byte +0x10
pf_at 0x16db
l_kernel_00021df9: shl eax,byte 0x3
pf_at 0x16de
l_kernel_00021dfc: mov ecx,[dword 0x4f1e4]
pf_at 0x16e4
l_kernel_00021e02: sub ecx,eax
pf_at 0x16e6
l_kernel_00021e04: mov eax,ecx
pf_at 0x16e8
l_kernel_00021e06: cdq
pf_at 0x16e9
l_kernel_00021e07: push byte +0x2
pf_at 0x16eb
l_kernel_00021e09: pop ecx
pf_at 0x16ec
l_kernel_00021e0a: idiv ecx
pf_at 0x16ee
l_kernel_00021e0c: mov ecx,eax
pf_at 0x16f0
l_kernel_00021e0e: test eax,eax
pf_at 0x16f2
l_kernel_00021e10: mov eax,0x0
pf_at 0x16f7
l_kernel_00021e15: cmovng ecx,eax
pf_at 0x16fa
l_kernel_00021e18: mov [ebp-0x18],ecx
pf_at 0x16fd
l_kernel_00021e1b: cmp byte [dword 0x4f1f0],0x1
pf_at 0x1704
l_kernel_00021e22: jnz near 0x22008
pf_at 0x170a
l_kernel_00021e28: cmp dword [dword 0x4f1ec],byte +0x0
pf_at 0x1711
l_kernel_00021e2f: jz near 0x22008
pf_at 0x1717
l_kernel_00021e35: mov al,[0x4f1ce]
pf_at 0x171c
l_kernel_00021e3a: mov [ebp-0x1c],al
pf_at 0x171f
l_kernel_00021e3d: mov al,[0x4f1cf]
pf_at 0x1724
l_kernel_00021e42: mov [ebp-0x24],al
pf_at 0x1727
l_kernel_00021e45: mov al,[0x4f1d0]
pf_at 0x172c
l_kernel_00021e4a: mov [ebp-0x38],al
pf_at 0x172f
l_kernel_00021e4d: cmp byte [dword 0x6f408],0x0
pf_at 0x1736
l_kernel_00021e54: jz near 0x21f95
pf_at 0x173c
l_kernel_00021e5a: mov eax,[ebp-0x3c]
pf_at 0x173f
l_kernel_00021e5d: mov ecx,[ebp-0x4c]
pf_at 0x1742
l_kernel_00021e60: add eax,ecx
pf_at 0x1744
l_kernel_00021e62: shl eax,byte 0x4
pf_at 0x1747
l_kernel_00021e65: mov [ebp-0x20],eax
pf_at 0x174a
l_kernel_00021e68: mov eax,[ebp-0x18]
pf_at 0x174d
l_kernel_00021e6b: mov [ebp-0x28],eax
pf_at 0x1750
l_kernel_00021e6e: movzx ecx,byte [edi]
pf_at 0x1753
l_kernel_00021e71: cmp ecx,byte +0xa
pf_at 0x1756
l_kernel_00021e74: jz near 0x21f85
pf_at 0x175c
l_kernel_00021e7a: mov [ebp-0x40],edi
pf_at 0x175f
l_kernel_00021e7d: cmp ecx,byte +0x20
pf_at 0x1762
l_kernel_00021e80: jz near 0x21f7c
pf_at 0x1768
l_kernel_00021e86: test ecx,ecx
pf_at 0x176a
l_kernel_00021e88: jz near 0x22008
pf_at 0x1770
l_kernel_00021e8e: movzx eax,word [dword 0x7040a]
pf_at 0x1777
l_kernel_00021e95: test eax,eax
pf_at 0x1779
l_kernel_00021e97: setnz dl
pf_at 0x177c
l_kernel_00021e9a: and dl,[dword 0x6f408]
pf_at 0x1782
l_kernel_00021ea0: imul ecx,eax
pf_at 0x1785
l_kernel_00021ea3: lea esi,[ecx+0x6f40a]
pf_at 0x178b
l_kernel_00021ea9: test dl,dl
pf_at 0x178d
l_kernel_00021eab: mov ecx,0x0
pf_at 0x1792
l_kernel_00021eb0: cmovz esi,ecx
pf_at 0x1795
l_kernel_00021eb3: mov [ebp-0x34],esi
pf_at 0x1798
l_kernel_00021eb6: cmp dl,0x1
pf_at 0x179b
l_kernel_00021eb9: jnz near 0x21f7c
pf_at 0x17a1
l_kernel_00021ebf: cmp byte [dword 0x4f1f0],0x1
pf_at 0x17a8
l_kernel_00021ec6: jnz near 0x21f7c
pf_at 0x17ae
l_kernel_00021ecc: cmp dword [dword 0x4f1ec],byte +0x0
pf_at 0x17b5
l_kernel_00021ed3: jz near 0x21f7c
pf_at 0x17bb
l_kernel_00021ed9: xor esi,esi
pf_at 0x17bd
l_kernel_00021edb: movzx eax,ax
pf_at 0x17c0
l_kernel_00021ede: mov [ebp-0x10],eax
pf_at 0x17c3
l_kernel_00021ee1: add eax,byte +0xf
pf_at 0x17c6
l_kernel_00021ee4: mov [ebp-0x14],eax
pf_at 0x17c9
l_kernel_00021ee7: mov ecx,esi
pf_at 0x17cb
l_kernel_00021ee9: shl ecx,byte 0x4
pf_at 0x17ce
l_kernel_00021eec: cmp esi,[ebp-0x10]
pf_at 0x17d1
l_kernel_00021eef: jnc near 0x21f7c
pf_at 0x17d7
l_kernel_00021ef5: mov eax,ecx
pf_at 0x17d9
l_kernel_00021ef7: xor edx,edx
pf_at 0x17db
l_kernel_00021ef9: mov ebx,[ebp-0x10]
pf_at 0x17de
l_kernel_00021efc: div ebx
pf_at 0x17e0
l_kernel_00021efe: mov edi,eax
pf_at 0x17e2
l_kernel_00021f00: inc esi
pf_at 0x17e3
l_kernel_00021f01: mov eax,[ebp-0x14]
pf_at 0x17e6
l_kernel_00021f04: add eax,ecx
pf_at 0x17e8
l_kernel_00021f06: xor edx,edx
pf_at 0x17ea
l_kernel_00021f08: div ebx
pf_at 0x17ec
l_kernel_00021f0a: mov ebx,eax
pf_at 0x17ee
l_kernel_00021f0c: add ecx,byte +0x10
pf_at 0x17f1
l_kernel_00021f0f: sub ebx,edi
pf_at 0x17f3
l_kernel_00021f11: jna short 0x21eec
pf_at 0x17f5
l_kernel_00021f13: add edi,[ebp-0x20]
pf_at 0x17f8
l_kernel_00021f16: mov eax,[ebp-0x34]
pf_at 0x17fb
l_kernel_00021f19: movzx eax,byte [eax+esi-0x1]
pf_at 0x1800
l_kernel_00021f1e: mov [ebp-0x44],eax
pf_at 0x1803
l_kernel_00021f21: xor ecx,ecx
pf_at 0x1805
l_kernel_00021f23: cmp ecx,byte +0x8
pf_at 0x1808
l_kernel_00021f26: jz short 0x21f70
pf_at 0x180a
l_kernel_00021f28: mov eax,[ebp-0x44]
pf_at 0x180d
l_kernel_00021f2b: shl eax,cl
pf_at 0x180f
l_kernel_00021f2d: test al,al
pf_at 0x1811
l_kernel_00021f2f: jns short 0x21f6d
pf_at 0x1813
l_kernel_00021f31: mov eax,[ebp-0x28]
pf_at 0x1816
l_kernel_00021f34: mov [ebp-0x10],ecx
pf_at 0x1819
l_kernel_00021f37: mov ecx,[ebp-0x10]
pf_at 0x181c
l_kernel_00021f3a: lea edx,[eax+ecx]
pf_at 0x181f
l_kernel_00021f3d: sub esp,byte +0x8
pf_at 0x1822
l_kernel_00021f40: movzx eax,byte [ebp-0x38]
pf_at 0x1826
l_kernel_00021f44: movzx ecx,byte [ebp-0x24]
pf_at 0x182a
l_kernel_00021f48: mov [ebp-0x14],ecx
pf_at 0x182d
l_kernel_00021f4b: movzx ecx,byte [ebp-0x1c]
pf_at 0x1831
l_kernel_00021f4f: mov [ebp-0x2c],ecx
pf_at 0x1834
l_kernel_00021f52: mov ecx,0x4f1e4
pf_at 0x1839
l_kernel_00021f57: push eax
pf_at 0x183a
l_kernel_00021f58: push dword [ebp-0x14]
pf_at 0x183d
l_kernel_00021f5b: push dword [ebp-0x2c]
pf_at 0x1840
l_kernel_00021f5e: push ebx
pf_at 0x1841
l_kernel_00021f5f: push byte +0x1
pf_at 0x1843
l_kernel_00021f61: push edi
pf_at 0x1844
l_kernel_00021f62: call 0x249e9
pf_at 0x1849
l_kernel_00021f67: mov ecx,[ebp-0x10]
pf_at 0x184c
l_kernel_00021f6a: add esp,byte +0x20
pf_at 0x184f
l_kernel_00021f6d: inc ecx
pf_at 0x1850
l_kernel_00021f6e: jmp short 0x21f23
pf_at 0x1852
l_kernel_00021f70: movzx eax,word [dword 0x7040a]
pf_at 0x1859
l_kernel_00021f77: jmp near 0x21edb
pf_at 0x185e
l_kernel_00021f7c: add dword [ebp-0x28],byte +0x8
pf_at 0x1862
l_kernel_00021f80: mov edi,[ebp-0x40]
pf_at 0x1865
l_kernel_00021f83: jmp short 0x21f8f
pf_at 0x1867
l_kernel_00021f85: add dword [ebp-0x20],byte +0x10
pf_at 0x186b
l_kernel_00021f89: mov eax,[ebp-0x18]
pf_at 0x186e
l_kernel_00021f8c: mov [ebp-0x28],eax
pf_at 0x1871
l_kernel_00021f8f: inc edi
pf_at 0x1872
l_kernel_00021f90: jmp near 0x21e6e
pf_at 0x1877
l_kernel_00021f95: cmp byte [dword 0x6f409],0x0
pf_at 0x187e
l_kernel_00021f9c: jnz short 0x22008
pf_at 0x1880
l_kernel_00021f9e: mov byte [dword 0x6f409],0x1
pf_at 0x1887
l_kernel_00021fa5: call 0x200ce
pf_at 0x188c
l_kernel_00021faa: test eax,eax
pf_at 0x188e
l_kernel_00021fac: jz short 0x22008
pf_at 0x1890
l_kernel_00021fae: mov eax,[0x2f018]
pf_at 0x1895
l_kernel_00021fb3: movzx ecx,word [eax]
pf_at 0x1898
l_kernel_00021fb6: shl ecx,byte 0x4
pf_at 0x189b
l_kernel_00021fb9: mov eax,[0x2f014]
pf_at 0x18a0
l_kernel_00021fbe: movzx eax,word [eax]
pf_at 0x18a3
l_kernel_00021fc1: add eax,ecx
pf_at 0x18a5
l_kernel_00021fc3: jz short 0x22008
pf_at 0x18a7
l_kernel_00021fc5: mov ecx,[dword 0x2f010]
pf_at 0x18ad
l_kernel_00021fcb: movzx ecx,word [ecx]
pf_at 0x18b0
l_kernel_00021fce: lea edx,[ecx-0x11]
pf_at 0x18b3
l_kernel_00021fd1: cmp dx,byte -0x10
pf_at 0x18b7
l_kernel_00021fd5: push byte +0x10
pf_at 0x18b9
l_kernel_00021fd7: pop edx
pf_at 0x18ba
l_kernel_00021fd8: cmovc ecx,edx
pf_at 0x18bd
l_kernel_00021fdb: movzx esi,cx
pf_at 0x18c0
l_kernel_00021fde: mov ecx,esi
pf_at 0x18c2
l_kernel_00021fe0: shl ecx,byte 0x8
pf_at 0x18c5
l_kernel_00021fe3: sub esp,byte +0x4
pf_at 0x18c8
l_kernel_00021fe6: push ecx
pf_at 0x18c9
l_kernel_00021fe7: push eax
pf_at 0x18ca
l_kernel_00021fe8: push dword 0x6f40a
pf_at 0x18cf
l_kernel_00021fed: call 0x20c1d
pf_at 0x18d4
l_kernel_00021ff2: add esp,byte +0x10
pf_at 0x18d7
l_kernel_00021ff5: mov [dword 0x7040a],si
pf_at 0x18de
l_kernel_00021ffc: mov byte [dword 0x6f408],0x1
pf_at 0x18e5
l_kernel_00022003: jmp near 0x21e5a
pf_at 0x18ea
l_kernel_00022008: mov ecx,[ebp-0x4c]
pf_at 0x18ed
l_kernel_0002200b: inc ecx
pf_at 0x18ee
l_kernel_0002200c: mov ebx,[ebp-0x50]
pf_at 0x18f1
l_kernel_0002200f: jmp near 0x21dc2
pf_at 0x18f6
l_kernel_00022014: push byte +0x4c
pf_at 0x18f8
l_kernel_00022016: pop ecx
pf_at 0x18f9
l_kernel_00022017: call 0x2457a
pf_at 0x18fe
l_kernel_0002201c: movzx eax,byte [dword 0x2f0a6]
pf_at 0x1905
l_kernel_00022023: shl eax,byte 0x8
pf_at 0x1908
l_kernel_00022026: or eax,byte +0x20
pf_at 0x190b
l_kernel_00022029: mov ecx,0xb8000
pf_at 0x1910
l_kernel_0002202e: cmp esi,byte +0x19
pf_at 0x1913
l_kernel_00022031: jz short 0x2204a
pf_at 0x1915
l_kernel_00022033: xor edx,edx
pf_at 0x1917
l_kernel_00022035: cmp edx,byte +0x50
pf_at 0x191a
l_kernel_00022038: jz short 0x22041
pf_at 0x191c
l_kernel_0002203a: mov [ecx+edx*2],ax
pf_at 0x1920
l_kernel_0002203e: inc edx
pf_at 0x1921
l_kernel_0002203f: jmp short 0x22035
pf_at 0x1923
l_kernel_00022041: inc esi
pf_at 0x1924
l_kernel_00022042: add ecx,0xa0
pf_at 0x192a
l_kernel_00022048: jmp short 0x2202e
pf_at 0x192c
l_kernel_0002204a: mov edx,[dword 0x6f3f8]
pf_at 0x1932
l_kernel_00022050: xor esi,esi
pf_at 0x1934
l_kernel_00022052: push byte +0x19
pf_at 0x1936
l_kernel_00022054: pop eax
pf_at 0x1937
l_kernel_00022055: mov ecx,eax
pf_at 0x1939
l_kernel_00022057: sub ecx,edx
pf_at 0x193b
l_kernel_00022059: cmovc ecx,esi
pf_at 0x193e
l_kernel_0002205c: shr ecx,1
pf_at 0x1940
l_kernel_0002205e: mov ebx,edx
pf_at 0x1942
l_kernel_00022060: sub ebx,byte +0x19
pf_at 0x1945
l_kernel_00022063: cmovc ebx,esi
pf_at 0x1948
l_kernel_00022066: cmovnc ecx,esi
pf_at 0x194b
l_kernel_00022069: sub edx,ebx
pf_at 0x194d
l_kernel_0002206b: cmovc edx,esi
pf_at 0x1950
l_kernel_0002206e: cmp edx,byte +0x19
pf_at 0x1953
l_kernel_00022071: cmovnc edx,eax
pf_at 0x1956
l_kernel_00022074: mov [ebp-0x10],edx
pf_at 0x1959
l_kernel_00022077: mov [ebp-0x14],ecx
pf_at 0x195c
l_kernel_0002207a: imul edi,ecx,dword 0xa0
pf_at 0x1962
l_kernel_00022080: or edi,0xb8000
pf_at 0x1968
l_kernel_00022086: mov [ebp-0x2c],ebx
pf_at 0x196b
l_kernel_00022089: cmp esi,[ebp-0x10]
pf_at 0x196e
l_kernel_0002208c: jz short 0x22102
pf_at 0x1970
l_kernel_0002208e: lea eax,[esi+ebx]
pf_at 0x1973
l_kernel_00022091: imul eax,eax,dword 0x101
pf_at 0x1979
l_kernel_00022097: lea ebx,[eax+0x4f1f8]
pf_at 0x197f
l_kernel_0002209d: cmp byte [ebx+0x100],0x1
pf_at 0x1986
l_kernel_000220a4: push byte +0x2
pf_at 0x1988
l_kernel_000220a6: pop ecx
pf_at 0x1989
l_kernel_000220a7: jnz short 0x220c8
pf_at 0x198b
l_kernel_000220a9: sub esp,byte +0xc
pf_at 0x198e
l_kernel_000220ac: push ebx
pf_at 0x198f
l_kernel_000220ad: call 0x20ccf
pf_at 0x1994
l_kernel_000220b2: add esp,byte +0x10
pf_at 0x1997
l_kernel_000220b5: lea ecx,[eax-0x4c]
pf_at 0x199a
l_kernel_000220b8: neg ecx
pf_at 0x199c
l_kernel_000220ba: shr ecx,1
pf_at 0x199e
l_kernel_000220bc: add ecx,byte +0x2
pf_at 0x19a1
l_kernel_000220bf: cmp eax,byte +0x4c
pf_at 0x19a4
l_kernel_000220c2: push byte +0x2
pf_at 0x19a6
l_kernel_000220c4: pop eax
pf_at 0x19a7
l_kernel_000220c5: cmovnc ecx,eax
pf_at 0x19aa
l_kernel_000220c8: mov eax,[ebp-0x14]
pf_at 0x19ad
l_kernel_000220cb: add eax,esi
pf_at 0x19af
l_kernel_000220cd: cmp eax,byte +0x18
pf_at 0x19b2
l_kernel_000220d0: jna short 0x220de
pf_at 0x19b4
l_kernel_000220d2: inc esi
pf_at 0x19b5
l_kernel_000220d3: add edi,0xa0
pf_at 0x19bb
l_kernel_000220d9: mov ebx,[ebp-0x2c]
pf_at 0x19be
l_kernel_000220dc: jmp short 0x22089
pf_at 0x19c0
l_kernel_000220de: movzx eax,byte [dword 0x2f0a6]
pf_at 0x19c7
l_kernel_000220e5: shl eax,byte 0x8
pf_at 0x19ca
l_kernel_000220e8: movzx edx,byte [ebx]
pf_at 0x19cd
l_kernel_000220eb: test dx,dx
pf_at 0x19d0
l_kernel_000220ee: jz short 0x220d2
pf_at 0x19d2
l_kernel_000220f0: cmp ecx,byte +0x4f
pf_at 0x19d5
l_kernel_000220f3: ja short 0x220d2
pf_at 0x19d7
l_kernel_000220f5: inc ebx
pf_at 0x19d8
l_kernel_000220f6: movzx edx,dx
pf_at 0x19db
l_kernel_000220f9: or edx,eax
pf_at 0x19dd
l_kernel_000220fb: mov [edi+ecx*2],dx
pf_at 0x19e1
l_kernel_000220ff: inc ecx
pf_at 0x19e2
l_kernel_00022100: jmp short 0x220e8
pf_at 0x19e4
l_kernel_00022102: test byte [ebp-0x48],0x1
pf_at 0x19e8
l_kernel_00022106: jnz short 0x2216f
pf_at 0x19ea
l_kernel_00022108: cmp byte [dword 0x6f404],0x1
pf_at 0x19f1
l_kernel_0002210f: jnz short 0x2216f
pf_at 0x19f3
l_kernel_00022111: mov eax,[0x6f3fc]
pf_at 0x19f8
l_kernel_00022116: cmp eax,ebx
pf_at 0x19fa
l_kernel_00022118: setc cl
pf_at 0x19fd
l_kernel_0002211b: mov edx,[ebp-0x10]
pf_at 0x1a00
l_kernel_0002211e: add edx,ebx
pf_at 0x1a02
l_kernel_00022120: cmp eax,edx
pf_at 0x1a04
l_kernel_00022122: setnc dl
pf_at 0x1a07
l_kernel_00022125: or dl,cl
pf_at 0x1a09
l_kernel_00022127: jnz short 0x2216f
pf_at 0x1a0b
l_kernel_00022129: mov edx,[ebp-0x14]
pf_at 0x1a0e
l_kernel_0002212c: sub edx,ebx
pf_at 0x1a10
l_kernel_0002212e: add edx,eax
pf_at 0x1a12
l_kernel_00022130: mov eax,[0x6f400]
pf_at 0x1a17
l_kernel_00022135: add eax,byte +0x2
pf_at 0x1a1a
l_kernel_00022138: cmp edx,byte +0x18
pf_at 0x1a1d
l_kernel_0002213b: push byte +0x18
pf_at 0x1a1f
l_kernel_0002213d: pop ecx
pf_at 0x1a20
l_kernel_0002213e: cmovc ecx,edx
pf_at 0x1a23
l_kernel_00022141: cmp eax,byte +0x4f
pf_at 0x1a26
l_kernel_00022144: push byte +0x4f
pf_at 0x1a28
l_kernel_00022146: pop edx
pf_at 0x1a29
l_kernel_00022147: cmovc edx,eax
pf_at 0x1a2c
l_kernel_0002214a: imul ecx,ecx,byte +0x50
pf_at 0x1a2f
l_kernel_0002214d: add ecx,edx
pf_at 0x1a31
l_kernel_0002214f: mov al,0xe
pf_at 0x1a33
l_kernel_00022151: mov dx,0x3d4
pf_at 0x1a37
l_kernel_00022155: out dx,al
pf_at 0x1a38
l_kernel_00022156: mov al,ch
pf_at 0x1a3a
l_kernel_00022158: mov dx,0x3d5
pf_at 0x1a3e
l_kernel_0002215c: out dx,al
pf_at 0x1a3f
l_kernel_0002215d: mov al,0xf
pf_at 0x1a41
l_kernel_0002215f: mov dx,0x3d4
pf_at 0x1a45
l_kernel_00022163: out dx,al
pf_at 0x1a46
l_kernel_00022164: mov eax,ecx
pf_at 0x1a48
l_kernel_00022166: mov dx,0x3d5
pf_at 0x1a4c
l_kernel_0002216a: out dx,al
pf_at 0x1a4d
l_kernel_0002216b: mov al,0x1
pf_at 0x1a4f
l_kernel_0002216d: jmp short 0x22171
pf_at 0x1a51
l_kernel_0002216f: xor eax,eax
pf_at 0x1a53
l_kernel_00022171: movzx ecx,al
pf_at 0x1a56
l_kernel_00022174: add esp,byte +0x4c
pf_at 0x1a59
l_kernel_00022177: pop esi
pf_at 0x1a5a
l_kernel_00022178: pop edi
pf_at 0x1a5b
l_kernel_00022179: pop ebx
pf_at 0x1a5c
l_kernel_0002217a: pop ebp
pf_at 0x1a5d
l_kernel_0002217b: jmp near 0x24a9b
pf_at 0x1a62
l_kernel_00022180: test byte [ebp-0x48],0x1
pf_at 0x1a66
l_kernel_00022184: jnz short 0x221ee
pf_at 0x1a68
l_kernel_00022186: cmp byte [dword 0x6f404],0x1
pf_at 0x1a6f
l_kernel_0002218d: jnz short 0x221ee
pf_at 0x1a71
l_kernel_0002218f: mov eax,[0x6f3fc]
pf_at 0x1a76
l_kernel_00022194: mov edx,[ebp-0x30]
pf_at 0x1a79
l_kernel_00022197: cmp eax,edx
pf_at 0x1a7b
l_kernel_00022199: setc cl
pf_at 0x1a7e
l_kernel_0002219c: add ebx,edx
pf_at 0x1a80
l_kernel_0002219e: cmp eax,ebx
pf_at 0x1a82
l_kernel_000221a0: setnc dl
pf_at 0x1a85
l_kernel_000221a3: or dl,cl
pf_at 0x1a87
l_kernel_000221a5: jnz short 0x221ee
pf_at 0x1a89
l_kernel_000221a7: mov ebx,[ebp-0x3c]
pf_at 0x1a8c
l_kernel_000221aa: sub ebx,[ebp-0x30]
pf_at 0x1a8f
l_kernel_000221ad: add ebx,eax
pf_at 0x1a91
l_kernel_000221af: mov eax,[0x6f400]
pf_at 0x1a96
l_kernel_000221b4: lea edx,[eax*8+0x18]
pf_at 0x1a9d
l_kernel_000221bb: shl ebx,byte 0x4
pf_at 0x1aa0
l_kernel_000221be: or ebx,byte +0xd
pf_at 0x1aa3
l_kernel_000221c1: movzx eax,byte [dword 0x4f1ce]
pf_at 0x1aaa
l_kernel_000221c8: movzx esi,byte [dword 0x4f1cf]
pf_at 0x1ab1
l_kernel_000221cf: movzx edi,byte [dword 0x4f1d0]
pf_at 0x1ab8
l_kernel_000221d6: sub esp,byte +0x8
pf_at 0x1abb
l_kernel_000221d9: mov ecx,0x4f1e4
pf_at 0x1ac0
l_kernel_000221de: push edi
pf_at 0x1ac1
l_kernel_000221df: push esi
pf_at 0x1ac2
l_kernel_000221e0: push eax
pf_at 0x1ac3
l_kernel_000221e1: push byte +0x2
pf_at 0x1ac5
l_kernel_000221e3: push byte +0x8
pf_at 0x1ac7
l_kernel_000221e5: push ebx
pf_at 0x1ac8
l_kernel_000221e6: call 0x249e9
pf_at 0x1acd
l_kernel_000221eb: add esp,byte +0x20
pf_at 0x1ad0
l_kernel_000221ee: xor ecx,ecx
pf_at 0x1ad2
l_kernel_000221f0: call 0x24a9b
pf_at 0x1ad7
l_kernel_000221f5: cmp byte [dword 0x4f1f0],0x1
pf_at 0x1ade
l_kernel_000221fc: jnz near 0x22435
pf_at 0x1ae4
l_kernel_00022202: cmp dword [dword 0x4f1ec],byte +0x0
pf_at 0x1aeb
l_kernel_00022209: jz near 0x22435
pf_at 0x1af1
l_kernel_0002220f: mov eax,[0x2f038]
pf_at 0x1af6
l_kernel_00022214: mov eax,[eax]
pf_at 0x1af8
l_kernel_00022216: mov [ebp-0x18],eax
pf_at 0x1afb
l_kernel_00022219: test eax,eax
pf_at 0x1afd
l_kernel_0002221b: setnz al
pf_at 0x1b00
l_kernel_0002221e: and al,[dword 0x4f1f4]
pf_at 0x1b06
l_kernel_00022224: mov ecx,[dword 0x2f03c]
pf_at 0x1b0c
l_kernel_0002222a: mov ecx,[ecx]
pf_at 0x1b0e
l_kernel_0002222c: mov [ebp-0x20],ecx
pf_at 0x1b11
l_kernel_0002222f: test ecx,ecx
pf_at 0x1b13
l_kernel_00022231: setnz cl
pf_at 0x1b16
l_kernel_00022234: mov edx,[dword 0x2f040]
pf_at 0x1b1c
l_kernel_0002223a: mov edi,[edx]
pf_at 0x1b1e
l_kernel_0002223c: test edi,edi
pf_at 0x1b20
l_kernel_0002223e: setnz dl
pf_at 0x1b23
l_kernel_00022241: and dl,cl
pf_at 0x1b25
l_kernel_00022243: mov ecx,[dword 0x2f034]
pf_at 0x1b2b
l_kernel_00022249: mov ebx,[ecx]
pf_at 0x1b2d
l_kernel_0002224b: test ebx,ebx
pf_at 0x1b2f
l_kernel_0002224d: setnz cl
pf_at 0x1b32
l_kernel_00022250: and cl,dl
pf_at 0x1b34
l_kernel_00022252: and cl,al
pf_at 0x1b36
l_kernel_00022254: cmp cl,0x1
pf_at 0x1b39
l_kernel_00022257: jnz near 0x22435
pf_at 0x1b3f
l_kernel_0002225d: mov eax,[0x2f030]
pf_at 0x1b44
l_kernel_00022262: mov eax,[eax]
pf_at 0x1b46
l_kernel_00022264: mov [ebp-0x1c],eax
pf_at 0x1b49
l_kernel_00022267: cmp eax,byte +0x20
pf_at 0x1b4c
l_kernel_0002226a: jz short 0x22276
pf_at 0x1b4e
l_kernel_0002226c: cmp dword [ebp-0x1c],byte +0x18
pf_at 0x1b52
l_kernel_00022270: jnz near 0x22435
pf_at 0x1b58
l_kernel_00022276: mov esi,[dword 0x4f1e8]
pf_at 0x1b5e
l_kernel_0002227c: mov eax,esi
pf_at 0x1b60
l_kernel_0002227e: mul edi
pf_at 0x1b62
l_kernel_00022280: mov [ebp-0x10],edi
pf_at 0x1b65
l_kernel_00022283: mov edi,[dword 0x4f1e4]
pf_at 0x1b6b
l_kernel_00022289: push byte +0x0
pf_at 0x1b6d
l_kernel_0002228b: push edi
pf_at 0x1b6e
l_kernel_0002228c: push edx
pf_at 0x1b6f
l_kernel_0002228d: push eax
pf_at 0x1b70
l_kernel_0002228e: call 0x208ad
pf_at 0x1b75
l_kernel_00022293: add esp,byte +0x10
pf_at 0x1b78
l_kernel_00022296: cmp ebx,eax
pf_at 0x1b7a
l_kernel_00022298: jnc short 0x222b4
pf_at 0x1b7c
l_kernel_0002229a: mov eax,edi
pf_at 0x1b7e
l_kernel_0002229c: mul ebx
pf_at 0x1b80
l_kernel_0002229e: push byte +0x0
pf_at 0x1b82
l_kernel_000222a0: push esi
pf_at 0x1b83
l_kernel_000222a1: push edx
pf_at 0x1b84
l_kernel_000222a2: push eax
pf_at 0x1b85
l_kernel_000222a3: call 0x208ad
pf_at 0x1b8a
l_kernel_000222a8: add esp,byte +0x10
pf_at 0x1b8d
l_kernel_000222ab: mov ecx,ebx
pf_at 0x1b8f
l_kernel_000222ad: mov esi,ebx
pf_at 0x1b91
l_kernel_000222af: mov edx,[ebp-0x10]
pf_at 0x1b94
l_kernel_000222b2: jmp short 0x222bd
pf_at 0x1b96
l_kernel_000222b4: mov ecx,eax
pf_at 0x1b98
l_kernel_000222b6: mov edx,[ebp-0x10]
pf_at 0x1b9b
l_kernel_000222b9: mov eax,edx
pf_at 0x1b9d
l_kernel_000222bb: mov esi,ebx
pf_at 0x1b9f
l_kernel_000222bd: shr dword [ebp-0x1c],byte 0x3
pf_at 0x1ba3
l_kernel_000222c1: mov [ebp-0x38],eax
pf_at 0x1ba6
l_kernel_000222c4: sub edx,eax
pf_at 0x1ba8
l_kernel_000222c6: mov [ebp-0x10],edx
pf_at 0x1bab
l_kernel_000222c9: mov [ebp-0x24],esi
pf_at 0x1bae
l_kernel_000222cc: mov edi,[ebp-0x18]
pf_at 0x1bb1
l_kernel_000222cf: mov [ebp-0x34],ecx
pf_at 0x1bb4
l_kernel_000222d2: sub esi,byte +0x1
pf_at 0x1bb7
l_kernel_000222d5: jc short 0x222f0
pf_at 0x1bb9
l_kernel_000222d7: sub esp,byte +0x4
pf_at 0x1bbc
l_kernel_000222da: mov ebx,[ebp-0x20]
pf_at 0x1bbf
l_kernel_000222dd: push ebx
pf_at 0x1bc0
l_kernel_000222de: push byte +0x0
pf_at 0x1bc2
l_kernel_000222e0: push edi
pf_at 0x1bc3
l_kernel_000222e1: call 0x20c84
pf_at 0x1bc8
l_kernel_000222e6: mov ecx,[ebp-0x34]
pf_at 0x1bcb
l_kernel_000222e9: add esp,byte +0x10
pf_at 0x1bce
l_kernel_000222ec: add edi,ebx
pf_at 0x1bd0
l_kernel_000222ee: jmp short 0x222d2
pf_at 0x1bd2
l_kernel_000222f0: mov esi,[ebp-0x24]
pf_at 0x1bd5
l_kernel_000222f3: sub esi,ecx
pf_at 0x1bd7
l_kernel_000222f5: mov eax,[ebp-0x10]
pf_at 0x1bda
l_kernel_000222f8: shr eax,1
pf_at 0x1bdc
l_kernel_000222fa: shr esi,1
pf_at 0x1bde
l_kernel_000222fc: imul eax,[ebp-0x1c]
pf_at 0x1be2
l_kernel_00022300: add [ebp-0x18],eax
pf_at 0x1be5
l_kernel_00022303: xor ebx,ebx
pf_at 0x1be7
l_kernel_00022305: mov edi,[ebp-0x38]
pf_at 0x1bea
l_kernel_00022308: mov [ebp-0x24],esi
pf_at 0x1bed
l_kernel_0002230b: cmp ebx,ecx
pf_at 0x1bef
l_kernel_0002230d: jnc near 0x22435
pf_at 0x1bf5
l_kernel_00022313: mov eax,ebx
pf_at 0x1bf7
l_kernel_00022315: mul dword [dword 0x4f1e8]
pf_at 0x1bfd
l_kernel_0002231b: push byte +0x0
pf_at 0x1bff
l_kernel_0002231d: push ecx
pf_at 0x1c00
l_kernel_0002231e: push edx
pf_at 0x1c01
l_kernel_0002231f: push eax
pf_at 0x1c02
l_kernel_00022320: call 0x208ad
pf_at 0x1c07
l_kernel_00022325: add esp,byte +0x10
pf_at 0x1c0a
l_kernel_00022328: mov [ebp-0x44],eax
pf_at 0x1c0d
l_kernel_0002232b: lea eax,[ebx+esi]
pf_at 0x1c10
l_kernel_0002232e: imul eax,[ebp-0x20]
pf_at 0x1c14
l_kernel_00022332: add eax,[ebp-0x18]
pf_at 0x1c17
l_kernel_00022335: mov [ebp-0x28],eax
pf_at 0x1c1a
l_kernel_00022338: xor ecx,ecx
pf_at 0x1c1c
l_kernel_0002233a: mov [ebp-0x2c],ebx
pf_at 0x1c1f
l_kernel_0002233d: cmp ecx,edi
pf_at 0x1c21
l_kernel_0002233f: jz near 0x2242c
pf_at 0x1c27
l_kernel_00022345: mov esi,[dword 0x4f1e4]
pf_at 0x1c2d
l_kernel_0002234b: mov eax,esi
pf_at 0x1c2f
l_kernel_0002234d: mov [ebp-0x10],ecx
pf_at 0x1c32
l_kernel_00022350: mul ecx
pf_at 0x1c34
l_kernel_00022352: push byte +0x0
pf_at 0x1c36
l_kernel_00022354: push edi
pf_at 0x1c37
l_kernel_00022355: push edx
pf_at 0x1c38
l_kernel_00022356: push eax
pf_at 0x1c39
l_kernel_00022357: call 0x208ad
pf_at 0x1c3e
l_kernel_0002235c: add esp,byte +0x10
pf_at 0x1c41
l_kernel_0002235f: mov edx,[dword 0x4f1ec]
pf_at 0x1c47
l_kernel_00022365: imul esi,[ebp-0x44]
pf_at 0x1c4b
l_kernel_00022369: add esi,eax
pf_at 0x1c4d
l_kernel_0002236b: movzx ecx,byte [edx+esi*4]
pf_at 0x1c51
l_kernel_0002236f: movzx edi,byte [edx+esi*4+0x1]
pf_at 0x1c56
l_kernel_00022374: movzx eax,byte [edx+esi*4+0x2]
pf_at 0x1c5b
l_kernel_00022379: mov [ebp-0x14],eax
pf_at 0x1c5e
l_kernel_0002237c: mov eax,[0x2f04c]
pf_at 0x1c63
l_kernel_00022381: mov edx,[eax]
pf_at 0x1c65
l_kernel_00022383: test edx,edx
pf_at 0x1c67
l_kernel_00022385: setz al
pf_at 0x1c6a
l_kernel_00022388: mov esi,[dword 0x2f044]
pf_at 0x1c70
l_kernel_0002238e: mov esi,[esi]
pf_at 0x1c72
l_kernel_00022390: test esi,esi
pf_at 0x1c74
l_kernel_00022392: setz ah
pf_at 0x1c77
l_kernel_00022395: or ah,al
pf_at 0x1c79
l_kernel_00022397: mov ebx,[dword 0x2f028]
pf_at 0x1c7f
l_kernel_0002239d: mov ebx,[ebx]
pf_at 0x1c81
l_kernel_0002239f: test ebx,ebx
pf_at 0x1c83
l_kernel_000223a1: setz al
pf_at 0x1c86
l_kernel_000223a4: or al,ah
pf_at 0x1c88
l_kernel_000223a6: cmp al,0x1
pf_at 0x1c8a
l_kernel_000223a8: jnz short 0x223b7
pf_at 0x1c8c
l_kernel_000223aa: shl ecx,byte 0x10
pf_at 0x1c8f
l_kernel_000223ad: shl edi,byte 0x8
pf_at 0x1c92
l_kernel_000223b0: or edi,ecx
pf_at 0x1c94
l_kernel_000223b2: add edi,[ebp-0x14]
pf_at 0x1c97
l_kernel_000223b5: jmp short 0x223f8
pf_at 0x1c99
l_kernel_000223b7: call 0x24ba4
pf_at 0x1c9e
l_kernel_000223bc: mov [ebp-0x40],ebx
pf_at 0x1ca1
l_kernel_000223bf: mov ebx,eax
pf_at 0x1ca3
l_kernel_000223c1: mov eax,[0x2f050]
pf_at 0x1ca8
l_kernel_000223c6: mov cl,[eax]
pf_at 0x1caa
l_kernel_000223c8: shl ebx,cl
pf_at 0x1cac
l_kernel_000223ca: mov ecx,edi
pf_at 0x1cae
l_kernel_000223cc: mov edx,esi
pf_at 0x1cb0
l_kernel_000223ce: call 0x24ba4
pf_at 0x1cb5
l_kernel_000223d3: mov esi,eax
pf_at 0x1cb7
l_kernel_000223d5: mov eax,[0x2f048]
pf_at 0x1cbc
l_kernel_000223da: mov cl,[eax]
pf_at 0x1cbe
l_kernel_000223dc: shl esi,cl
pf_at 0x1cc0
l_kernel_000223de: or esi,ebx
pf_at 0x1cc2
l_kernel_000223e0: mov ecx,[ebp-0x14]
pf_at 0x1cc5
l_kernel_000223e3: mov edx,[ebp-0x40]
pf_at 0x1cc8
l_kernel_000223e6: call 0x24ba4
pf_at 0x1ccd
l_kernel_000223eb: mov edi,eax
pf_at 0x1ccf
l_kernel_000223ed: mov eax,[0x2f02c]
pf_at 0x1cd4
l_kernel_000223f2: mov cl,[eax]
pf_at 0x1cd6
l_kernel_000223f4: shl edi,cl
pf_at 0x1cd8
l_kernel_000223f6: or edi,esi
pf_at 0x1cda
l_kernel_000223f8: mov esi,[ebp-0x10]
pf_at 0x1cdd
l_kernel_000223fb: mov edx,[ebp-0x1c]
pf_at 0x1ce0
l_kernel_000223fe: imul esi,edx
pf_at 0x1ce3
l_kernel_00022401: add esi,[ebp-0x28]
pf_at 0x1ce6
l_kernel_00022404: xor ecx,ecx
pf_at 0x1ce8
l_kernel_00022406: xor ebx,ebx
pf_at 0x1cea
l_kernel_00022408: sub edx,byte +0x1
pf_at 0x1ced
l_kernel_0002240b: jc short 0x2241a
pf_at 0x1cef
l_kernel_0002240d: mov eax,edi
pf_at 0x1cf1
l_kernel_0002240f: shr eax,cl
pf_at 0x1cf3
l_kernel_00022411: mov [esi+ebx],al
pf_at 0x1cf6
l_kernel_00022414: inc ebx
pf_at 0x1cf7
l_kernel_00022415: add ecx,byte +0x8
pf_at 0x1cfa
l_kernel_00022418: jmp short 0x22408
pf_at 0x1cfc
l_kernel_0002241a: mov ecx,[ebp-0x10]
pf_at 0x1cff
l_kernel_0002241d: inc ecx
pf_at 0x1d00
l_kernel_0002241e: mov esi,[ebp-0x24]
pf_at 0x1d03
l_kernel_00022421: mov edi,[ebp-0x38]
pf_at 0x1d06
l_kernel_00022424: mov ebx,[ebp-0x2c]
pf_at 0x1d09
l_kernel_00022427: jmp near 0x2233d
pf_at 0x1d0e
l_kernel_0002242c: inc ebx
pf_at 0x1d0f
l_kernel_0002242d: mov ecx,[ebp-0x34]
pf_at 0x1d12
l_kernel_00022430: jmp near 0x2230b
pf_at 0x1d17
l_kernel_00022435: add esp,byte +0x4c
pf_at 0x1d1a
l_kernel_00022438: pop esi
pf_at 0x1d1b
l_kernel_00022439: pop edi
pf_at 0x1d1c
l_kernel_0002243a: pop ebx
pf_at 0x1d1d
l_kernel_0002243b: pop ebp
pf_at 0x1d1e
l_kernel_0002243c: ret
pf_at 0x1d1f
l_kernel_0002243d: push ebp
pf_at 0x1d20
l_kernel_0002243e: mov ebp,esp
pf_at 0x1d22
l_kernel_00022440: sub esp,byte +0x8
pf_at 0x1d25
l_kernel_00022443: sub esp,byte +0x4
pf_at 0x1d28
l_kernel_00022446: push byte +0x1b
pf_at 0x1d2a
l_kernel_00022448: push dword 0x55ffff
pf_at 0x1d2f
l_kernel_0002244d: push dword 0xaa
pf_at 0x1d34
l_kernel_00022452: call 0x21c7a
pf_at 0x1d39
l_kernel_00022457: add esp,byte +0x10
pf_at 0x1d3c
l_kernel_0002245a: xor eax,eax
pf_at 0x1d3e
l_kernel_0002245c: inc eax
pf_at 0x1d3f
l_kernel_0002245d: add esp,byte +0x8
pf_at 0x1d42
l_kernel_00022460: pop ebp
pf_at 0x1d43
l_kernel_00022461: ret
pf_at 0x1d44
l_kernel_00022462: push ebp
pf_at 0x1d45
l_kernel_00022463: mov ebp,esp
pf_at 0x1d47
l_kernel_00022465: push ebx
pf_at 0x1d48
l_kernel_00022466: push edi
pf_at 0x1d49
l_kernel_00022467: push esi
pf_at 0x1d4a
l_kernel_00022468: sub esp,0xc6c
pf_at 0x1d50
l_kernel_0002246e: mov dword [dword 0x2f0b8],0x6000
pf_at 0x1d5a
l_kernel_00022478: xor eax,eax
pf_at 0x1d5c
l_kernel_0002247a: mov dx,0x3f9
pf_at 0x1d60
l_kernel_0002247e: out dx,al
pf_at 0x1d61
l_kernel_0002247f: mov al,0x80
pf_at 0x1d63
l_kernel_00022481: mov dx,0x3fb
pf_at 0x1d67
l_kernel_00022485: out dx,al
pf_at 0x1d68
l_kernel_00022486: mov al,0x3
pf_at 0x1d6a
l_kernel_00022488: mov dx,0x3f8
pf_at 0x1d6e
l_kernel_0002248c: out dx,al
pf_at 0x1d6f
l_kernel_0002248d: xor eax,eax
pf_at 0x1d71
l_kernel_0002248f: mov dx,0x3f9
pf_at 0x1d75
l_kernel_00022493: out dx,al
pf_at 0x1d76
l_kernel_00022494: mov al,0x3
pf_at 0x1d78
l_kernel_00022496: mov dx,0x3fb
pf_at 0x1d7c
l_kernel_0002249a: out dx,al
pf_at 0x1d7d
l_kernel_0002249b: mov al,0xc7
pf_at 0x1d7f
l_kernel_0002249d: mov dx,0x3fa
pf_at 0x1d83
l_kernel_000224a1: out dx,al
pf_at 0x1d84
l_kernel_000224a2: mov al,0xb
pf_at 0x1d86
l_kernel_000224a4: mov dx,0x3fc
pf_at 0x1d8a
l_kernel_000224a8: out dx,al
pf_at 0x1d8b
l_kernel_000224a9: mov byte [dword 0x4f1cc],0x1
pf_at 0x1d92
l_kernel_000224b0: call 0x20440
pf_at 0x1d97
l_kernel_000224b5: test eax,eax
pf_at 0x1d99
l_kernel_000224b7: setnz al
pf_at 0x1d9c
l_kernel_000224ba: mov ecx,[dword 0x2f038]
pf_at 0x1da2
l_kernel_000224c0: cmp dword [ecx],byte +0x0
pf_at 0x1da5
l_kernel_000224c3: setnz cl
pf_at 0x1da8
l_kernel_000224c6: and cl,al
pf_at 0x1daa
l_kernel_000224c8: mov eax,[0x2f040]
pf_at 0x1daf
l_kernel_000224cd: cmp dword [eax],byte +0x0
pf_at 0x1db2
l_kernel_000224d0: setnz al
pf_at 0x1db5
l_kernel_000224d3: mov edx,[dword 0x2f034]
pf_at 0x1dbb
l_kernel_000224d9: cmp dword [edx],byte +0x0
pf_at 0x1dbe
l_kernel_000224dc: setnz dl
pf_at 0x1dc1
l_kernel_000224df: and dl,al
pf_at 0x1dc3
l_kernel_000224e1: and dl,cl
pf_at 0x1dc5
l_kernel_000224e3: mov [dword 0x4f1f4],dl
pf_at 0x1dcb
l_kernel_000224e9: mov ecx,0x4f1d4
pf_at 0x1dd0
l_kernel_000224ee: call 0x24bd8
pf_at 0x1dd5
l_kernel_000224f3: test al,al
pf_at 0x1dd7
l_kernel_000224f5: jz short 0x2250a
pf_at 0x1dd9
l_kernel_000224f7: mov ecx,0x4f1e4
pf_at 0x1dde
l_kernel_000224fc: call 0x24bd8
pf_at 0x1de3
l_kernel_00022501: test al,al
pf_at 0x1de5
l_kernel_00022503: jz short 0x2250a
pf_at 0x1de7
l_kernel_00022505: call 0x244f0
pf_at 0x1dec
l_kernel_0002250a: and dword [dword 0x3f1c8],byte +0x0
pf_at 0x1df3
l_kernel_00022511: mov byte [dword 0x3f0d8],0x0
pf_at 0x1dfa
l_kernel_00022518: mov eax,[0x46c]
pf_at 0x1dff
l_kernel_0002251d: lea ecx,[ebp-0xc74]
pf_at 0x1e05
l_kernel_00022523: and dword [ecx],byte +0x0
pf_at 0x1e08
l_kernel_00022526: and dword [ecx+0x4],byte +0x0
pf_at 0x1e0c
l_kernel_0002252a: and dword [ecx+0x8],byte +0x0
pf_at 0x1e10
l_kernel_0002252e: and dword [ecx+0xc],byte +0x0
pf_at 0x1e14
l_kernel_00022532: and dword [ecx+0x10],byte +0x0
pf_at 0x1e18
l_kernel_00022536: and dword [ecx+0x14],byte +0x0
pf_at 0x1e1c
l_kernel_0002253a: and dword [ecx+0x18],byte +0x0
pf_at 0x1e20
l_kernel_0002253e: mov [0x7040c],eax
pf_at 0x1e25
l_kernel_00022543: and dword [ecx+0x1c],byte +0x0
pf_at 0x1e29
l_kernel_00022547: mov edx,0x2cb8d
pf_at 0x1e2e
l_kernel_0002254c: call 0x24c66
pf_at 0x1e33
l_kernel_00022551: test al,al
pf_at 0x1e35
l_kernel_00022553: jz short 0x2256e
pf_at 0x1e37
l_kernel_00022555: lea esi,[ebp-0xc74]
pf_at 0x1e3d
l_kernel_0002255b: mov ecx,0x2cc26
pf_at 0x1e42
l_kernel_00022560: mov edx,esi
pf_at 0x1e44
l_kernel_00022562: call 0x24c97
pf_at 0x1e49
l_kernel_00022567: mov ecx,esi
pf_at 0x1e4b
l_kernel_00022569: call 0x24daf
pf_at 0x1e50
l_kernel_0002256e: lea edx,[ebp-0x28c]
pf_at 0x1e56
l_kernel_00022574: and dword [edx],byte +0x0
pf_at 0x1e59
l_kernel_00022577: mov ecx,0x2cb9a
pf_at 0x1e5e
l_kernel_0002257c: call 0x24e95
pf_at 0x1e63
l_kernel_00022581: test al,al
pf_at 0x1e65
l_kernel_00022583: jz short 0x225b4
pf_at 0x1e67
l_kernel_00022585: fld dword [ebp-0x28c]
pf_at 0x1e6d
l_kernel_0002258b: sub esp,byte +0x10
pf_at 0x1e70
l_kernel_0002258e: fstp dword [esp]
pf_at 0x1e73
l_kernel_00022591: lea esi,[ebp-0xc74]
pf_at 0x1e79
l_kernel_00022597: mov ecx,esi
pf_at 0x1e7b
l_kernel_00022599: call 0x24f15
pf_at 0x1e80
l_kernel_0002259e: add esp,byte +0x10
pf_at 0x1e83
l_kernel_000225a1: mov ecx,0x2cc32
pf_at 0x1e88
l_kernel_000225a6: mov edx,esi
pf_at 0x1e8a
l_kernel_000225a8: call 0x24c97
pf_at 0x1e8f
l_kernel_000225ad: mov ecx,esi
pf_at 0x1e91
l_kernel_000225af: call 0x24daf
pf_at 0x1e96
l_kernel_000225b4: lea ecx,[ebp-0xc74]
pf_at 0x1e9c
l_kernel_000225ba: mov edx,0x2cb9e
pf_at 0x1ea1
l_kernel_000225bf: call 0x24c66
pf_at 0x1ea6
l_kernel_000225c4: test al,al
pf_at 0x1ea8
l_kernel_000225c6: jz short 0x225e1
pf_at 0x1eaa
l_kernel_000225c8: lea esi,[ebp-0xc74]
pf_at 0x1eb0
l_kernel_000225ce: mov ecx,0x2cc41
pf_at 0x1eb5
l_kernel_000225d3: mov edx,esi
pf_at 0x1eb7
l_kernel_000225d5: call 0x24c97
pf_at 0x1ebc
l_kernel_000225da: mov ecx,esi
pf_at 0x1ebe
l_kernel_000225dc: call 0x24daf
pf_at 0x1ec3
l_kernel_000225e1: lea ecx,[ebp-0xc74]
pf_at 0x1ec9
l_kernel_000225e7: mov edx,0x2cbd0
pf_at 0x1ece
l_kernel_000225ec: call 0x24c66
pf_at 0x1ed3
l_kernel_000225f1: test al,al
pf_at 0x1ed5
l_kernel_000225f3: jz short 0x2260e
pf_at 0x1ed7
l_kernel_000225f5: lea esi,[ebp-0xc74]
pf_at 0x1edd
l_kernel_000225fb: mov ecx,0x2cc50
pf_at 0x1ee2
l_kernel_00022600: mov edx,esi
pf_at 0x1ee4
l_kernel_00022602: call 0x24c97
pf_at 0x1ee9
l_kernel_00022607: mov ecx,esi
pf_at 0x1eeb
l_kernel_00022609: call 0x24daf
pf_at 0x1ef0
l_kernel_0002260e: lea esi,[ebp-0xc74]
pf_at 0x1ef6
l_kernel_00022614: mov ecx,esi
pf_at 0x1ef8
l_kernel_00022616: mov edx,0x2cbd6
pf_at 0x1efd
l_kernel_0002261b: call 0x24c66
pf_at 0x1f02
l_kernel_00022620: test al,al
pf_at 0x1f04
l_kernel_00022622: jz short 0x2263d
pf_at 0x1f06
l_kernel_00022624: lea edi,[ebp-0xc74]
pf_at 0x1f0c
l_kernel_0002262a: mov ecx,0x2cc5e
pf_at 0x1f11
l_kernel_0002262f: mov edx,edi
pf_at 0x1f13
l_kernel_00022631: call 0x24c97
pf_at 0x1f18
l_kernel_00022636: mov ecx,edi
pf_at 0x1f1a
l_kernel_00022638: call 0x24daf
pf_at 0x1f1f
l_kernel_0002263d: call 0x25165
pf_at 0x1f24
l_kernel_00022642: lea edi,[ebp-0x28c]
pf_at 0x1f2a
l_kernel_00022648: push byte +0x44
pf_at 0x1f2c
l_kernel_0002264a: pop edx
pf_at 0x1f2d
l_kernel_0002264b: mov ecx,edi
pf_at 0x1f2f
l_kernel_0002264d: call 0x251b1
pf_at 0x1f34
l_kernel_00022652: test al,al
pf_at 0x1f36
l_kernel_00022654: jz near 0x22894
pf_at 0x1f3c
l_kernel_0002265a: sub esp,byte +0x4
pf_at 0x1f3f
l_kernel_0002265d: push byte +0x8
pf_at 0x1f41
l_kernel_0002265f: push dword 0x2ca90
pf_at 0x1f46
l_kernel_00022664: push edi
pf_at 0x1f47
l_kernel_00022665: call 0x20ca0
pf_at 0x1f4c
l_kernel_0002266a: add esp,byte +0x10
pf_at 0x1f4f
l_kernel_0002266d: mov edx,[ebp-0x284]
pf_at 0x1f55
l_kernel_00022673: mov ecx,[ebp-0x280]
pf_at 0x1f5b
l_kernel_00022679: xor edx,byte +0x1
pf_at 0x1f5e
l_kernel_0002267c: or edx,eax
pf_at 0x1f60
l_kernel_0002267e: setnz al
pf_at 0x1f63
l_kernel_00022681: test ecx,ecx
pf_at 0x1f65
l_kernel_00022683: setz dl
pf_at 0x1f68
l_kernel_00022686: mov ebx,[ebp-0x27c]
pf_at 0x1f6e
l_kernel_0002268c: test ebx,ebx
pf_at 0x1f70
l_kernel_0002268e: setz ah
pf_at 0x1f73
l_kernel_00022691: or ah,dl
pf_at 0x1f75
l_kernel_00022693: or ah,al
pf_at 0x1f77
l_kernel_00022695: jnz near 0x22894
pf_at 0x1f7d
l_kernel_0002269b: imul ebx,[ebp-0x264]
pf_at 0x1f84
l_kernel_000226a2: add ebx,[ebp-0x268]
pf_at 0x1f8a
l_kernel_000226a8: mov eax,[ebp-0x25c]
pf_at 0x1f90
l_kernel_000226ae: cmp eax,ebx
pf_at 0x1f92
l_kernel_000226b0: cmovna eax,ebx
pf_at 0x1f95
l_kernel_000226b3: mov [ebp-0x60],eax
pf_at 0x1f98
l_kernel_000226b6: imul ebx,ecx
pf_at 0x1f9b
l_kernel_000226b9: sub esp,byte +0xc
pf_at 0x1f9e
l_kernel_000226bc: push ebx
pf_at 0x1f9f
l_kernel_000226bd: call 0x20ae5
pf_at 0x1fa4
l_kernel_000226c2: add esp,byte +0x10
pf_at 0x1fa7
l_kernel_000226c5: test eax,eax
pf_at 0x1fa9
l_kernel_000226c7: jz near 0x22894
pf_at 0x1faf
l_kernel_000226cd: mov ecx,eax
pf_at 0x1fb1
l_kernel_000226cf: mov edx,ebx
pf_at 0x1fb3
l_kernel_000226d1: mov ebx,eax
pf_at 0x1fb5
l_kernel_000226d3: call 0x251b1
pf_at 0x1fba
l_kernel_000226d8: test al,al
pf_at 0x1fbc
l_kernel_000226da: jz near 0x22873
pf_at 0x1fc2
l_kernel_000226e0: mov ecx,[ebp-0x280]
pf_at 0x1fc8
l_kernel_000226e6: mov eax,[ebp-0x27c]
pf_at 0x1fce
l_kernel_000226ec: imul eax,ecx
pf_at 0x1fd1
l_kernel_000226ef: mov [ebp-0x14],eax
pf_at 0x1fd4
l_kernel_000226f2: mov eax,[ebp-0x278]
pf_at 0x1fda
l_kernel_000226f8: imul eax,ecx
pf_at 0x1fdd
l_kernel_000226fb: mov edx,[ebp-0x270]
pf_at 0x1fe3
l_kernel_00022701: imul edx,ecx
pf_at 0x1fe6
l_kernel_00022704: imul ecx,[ebp-0x268]
pf_at 0x1fed
l_kernel_0002270b: add eax,ebx
pf_at 0x1fef
l_kernel_0002270d: mov [ebp-0x58],eax
pf_at 0x1ff2
l_kernel_00022710: add edx,ebx
pf_at 0x1ff4
l_kernel_00022712: mov [ebp-0x64],edx
pf_at 0x1ff7
l_kernel_00022715: add ecx,ebx
pf_at 0x1ff9
l_kernel_00022717: mov [ebp-0x5c],ecx
pf_at 0x1ffc
l_kernel_0002271a: xor ecx,ecx
pf_at 0x1ffe
l_kernel_0002271c: mov [ebp-0x54],ebx
pf_at 0x2001
l_kernel_0002271f: cmp ecx,[ebp-0x260]
pf_at 0x2007
l_kernel_00022725: jnc near 0x228a7
pf_at 0x200d
l_kernel_0002272b: cmp dword [dword 0x3f0bc],0x100
pf_at 0x2017
l_kernel_00022735: jnc near 0x22939
pf_at 0x201d
l_kernel_0002273b: mov eax,esi
pf_at 0x201f
l_kernel_0002273d: mov [ebp-0x68],ecx
pf_at 0x2022
l_kernel_00022740: mov esi,ecx
pf_at 0x2024
l_kernel_00022742: shl esi,byte 0x8
pf_at 0x2027
l_kernel_00022745: add esi,[ebp-0x64]
pf_at 0x202a
l_kernel_00022748: sub esp,byte +0x4
pf_at 0x202d
l_kernel_0002274b: push dword 0xf0
pf_at 0x2032
l_kernel_00022750: push esi
pf_at 0x2033
l_kernel_00022751: push eax
pf_at 0x2034
l_kernel_00022752: call 0x20c1d
pf_at 0x2039
l_kernel_00022757: add esp,byte +0x10
pf_at 0x203c
l_kernel_0002275a: mov byte [ebp-0xb84],0x0
pf_at 0x2043
l_kernel_00022761: cmp byte [ebp-0xc74],0x0
pf_at 0x204a
l_kernel_00022768: jz near 0x22861
pf_at 0x2050
l_kernel_0002276e: mov eax,[0x3f0bc]
pf_at 0x2055
l_kernel_00022773: shl eax,byte 0x8
pf_at 0x2058
l_kernel_00022776: lea edi,[eax+0x2f0bc]
pf_at 0x205e
l_kernel_0002277c: sub esp,byte +0x4
pf_at 0x2061
l_kernel_0002277f: push dword 0x100
pf_at 0x2066
l_kernel_00022784: push byte +0x0
pf_at 0x2068
l_kernel_00022786: push edi
pf_at 0x2069
l_kernel_00022787: call 0x20c84
pf_at 0x206e
l_kernel_0002278c: add esp,byte +0x10
pf_at 0x2071
l_kernel_0002278f: lea ecx,[ebp-0xc74]
pf_at 0x2077
l_kernel_00022795: mov edx,edi
pf_at 0x2079
l_kernel_00022797: call 0x25240
pf_at 0x207e
l_kernel_0002279c: mov eax,[esi+0xf4]
pf_at 0x2084
l_kernel_000227a2: mov [edi+0xf8],eax
pf_at 0x208a
l_kernel_000227a8: mov ecx,[esi+0xf8]
pf_at 0x2090
l_kernel_000227ae: mov [ebp-0x10],edi
pf_at 0x2093
l_kernel_000227b1: mov [edi+0xfc],ecx
pf_at 0x2099
l_kernel_000227b7: test eax,eax
pf_at 0x209b
l_kernel_000227b9: jz near 0x22855
pf_at 0x20a1
l_kernel_000227bf: sub esp,byte +0xc
pf_at 0x20a4
l_kernel_000227c2: push eax
pf_at 0x20a5
l_kernel_000227c3: call 0x20ae5
pf_at 0x20aa
l_kernel_000227c8: add esp,byte +0x10
pf_at 0x20ad
l_kernel_000227cb: mov ecx,[ebp-0x10]
pf_at 0x20b0
l_kernel_000227ce: mov [ecx+0xf4],eax
pf_at 0x20b6
l_kernel_000227d4: test eax,eax
pf_at 0x20b8
l_kernel_000227d6: jz near 0x22881
pf_at 0x20be
l_kernel_000227dc: mov ecx,[esi+0xf0]
pf_at 0x20c4
l_kernel_000227e2: mov eax,[ebp-0x10]
pf_at 0x20c7
l_kernel_000227e5: mov ebx,[eax+0xf8]
pf_at 0x20cd
l_kernel_000227eb: xor esi,esi
pf_at 0x20cf
l_kernel_000227ed: lea eax,[ecx-0x2]
pf_at 0x20d2
l_kernel_000227f0: imul eax,[ebp-0x14]
pf_at 0x20d6
l_kernel_000227f4: add eax,[ebp-0x5c]
pf_at 0x20d9
l_kernel_000227f7: mov [ebp-0x2c],eax
pf_at 0x20dc
l_kernel_000227fa: mov [ebp-0x1c],ecx
pf_at 0x20df
l_kernel_000227fd: sub ebx,esi
pf_at 0x20e1
l_kernel_000227ff: jna short 0x22855
pf_at 0x20e3
l_kernel_00022801: cmp ecx,byte +0x2
pf_at 0x20e6
l_kernel_00022804: jc short 0x22881
pf_at 0x20e8
l_kernel_00022806: mov eax,[ebp-0x264]
pf_at 0x20ee
l_kernel_0002280c: add eax,byte +0x2
pf_at 0x20f1
l_kernel_0002280f: cmp ecx,eax
pf_at 0x20f3
l_kernel_00022811: jnc short 0x22881
pf_at 0x20f5
l_kernel_00022813: mov eax,[ebp-0x14]
pf_at 0x20f8
l_kernel_00022816: cmp ebx,eax
pf_at 0x20fa
l_kernel_00022818: cmovnc ebx,eax
pf_at 0x20fd
l_kernel_0002281b: mov edi,[ebp-0x10]
pf_at 0x2100
l_kernel_0002281e: mov eax,[edi+0xf4]
pf_at 0x2106
l_kernel_00022824: add eax,esi
pf_at 0x2108
l_kernel_00022826: sub esp,byte +0x4
pf_at 0x210b
l_kernel_00022829: push ebx
pf_at 0x210c
l_kernel_0002282a: push dword [ebp-0x2c]
pf_at 0x210f
l_kernel_0002282d: push eax
pf_at 0x2110
l_kernel_0002282e: call 0x20c1d
pf_at 0x2115
l_kernel_00022833: mov ecx,[ebp-0x1c]
pf_at 0x2118
l_kernel_00022836: add esp,byte +0x10
pf_at 0x211b
l_kernel_00022839: add esi,ebx
pf_at 0x211d
l_kernel_0002283b: mov ebx,[edi+0xf8]
pf_at 0x2123
l_kernel_00022841: cmp esi,ebx
pf_at 0x2125
l_kernel_00022843: jnc short 0x227fd
pf_at 0x2127
l_kernel_00022845: mov eax,[ebp-0x58]
pf_at 0x212a
l_kernel_00022848: mov ecx,[eax+ecx*4]
pf_at 0x212d
l_kernel_0002284b: lea eax,[ecx+0x1]
pf_at 0x2130
l_kernel_0002284e: cmp eax,byte +0x2
pf_at 0x2133
l_kernel_00022851: jnc short 0x227ed
pf_at 0x2135
l_kernel_00022853: jmp short 0x22881
pf_at 0x2137
l_kernel_00022855: inc dword [dword 0x3f0bc]
pf_at 0x213d
l_kernel_0002285b: lea edi,[ebp-0x28c]
pf_at 0x2143
l_kernel_00022861: mov ecx,[ebp-0x68]
pf_at 0x2146
l_kernel_00022864: inc ecx
pf_at 0x2147
l_kernel_00022865: lea esi,[ebp-0xc74]
pf_at 0x214d
l_kernel_0002286b: mov ebx,[ebp-0x54]
pf_at 0x2150
l_kernel_0002286e: jmp near 0x2271f
pf_at 0x2155
l_kernel_00022873: sub esp,byte +0xc
pf_at 0x2158
l_kernel_00022876: push ebx
pf_at 0x2159
l_kernel_00022877: call 0x20aee
pf_at 0x215e
l_kernel_0002287c: add esp,byte +0x10
pf_at 0x2161
l_kernel_0002287f: jmp short 0x22894
pf_at 0x2163
l_kernel_00022881: sub esp,byte +0xc
pf_at 0x2166
l_kernel_00022884: push dword [ebp-0x54]
pf_at 0x2169
l_kernel_00022887: call 0x20aee
pf_at 0x216e
l_kernel_0002288c: add esp,byte +0x10
pf_at 0x2171
l_kernel_0002288f: call 0x25165
pf_at 0x2176
l_kernel_00022894: mov ecx,0x2cb5b
pf_at 0x217b
l_kernel_00022899: call 0x2176e
pf_at 0x2180
l_kernel_0002289e: call 0x21cca
pf_at 0x2185
l_kernel_000228a3: cli
pf_at 0x2186
l_kernel_000228a4: hlt
pf_at 0x2187
l_kernel_000228a5: jmp short 0x228a3
pf_at 0x2189
l_kernel_000228a7: sub esp,byte +0xc
pf_at 0x218c
l_kernel_000228aa: push ebx
pf_at 0x218d
l_kernel_000228ab: call 0x20aee
pf_at 0x2192
l_kernel_000228b0: add esp,byte +0x10
pf_at 0x2195
l_kernel_000228b3: mov eax,[ebp-0x280]
pf_at 0x219b
l_kernel_000228b9: mov ecx,[ebp-0x27c]
pf_at 0x21a1
l_kernel_000228bf: mov [0x3f0c0],eax
pf_at 0x21a6
l_kernel_000228c4: mov [dword 0x3f0c4],ecx
pf_at 0x21ac
l_kernel_000228ca: mov ecx,[ebp-0x14]
pf_at 0x21af
l_kernel_000228cd: mov [dword 0x3f0c8],ecx
pf_at 0x21b5
l_kernel_000228d3: mov dword [dword 0x3f0cc],0x41
pf_at 0x21bf
l_kernel_000228dd: mov ecx,[ebp-0x60]
pf_at 0x21c2
l_kernel_000228e0: imul ecx,eax
pf_at 0x21c5
l_kernel_000228e3: mov [dword 0x3f0d0],ecx
pf_at 0x21cb
l_kernel_000228e9: lea edx,[ebp-0xc74]
pf_at 0x21d1
l_kernel_000228ef: and dword [edx],byte +0x0
pf_at 0x21d4
l_kernel_000228f2: mov byte [dword 0x3f0d4],0x1
pf_at 0x21db
l_kernel_000228f9: and dword [ebp-0x28c],byte +0x0
pf_at 0x21e2
l_kernel_00022900: sub esp,byte +0xc
pf_at 0x21e5
l_kernel_00022903: mov ecx,0x2ca51
pf_at 0x21ea
l_kernel_00022908: push edi
pf_at 0x21eb
l_kernel_00022909: call 0x253f8
pf_at 0x21f0
l_kernel_0002290e: add esp,byte +0x10
pf_at 0x21f3
l_kernel_00022911: mov edx,[ebp-0x28c]
pf_at 0x21f9
l_kernel_00022917: test edx,edx
pf_at 0x21fb
l_kernel_00022919: setnz cl
pf_at 0x21fe
l_kernel_0002291c: and cl,al
pf_at 0x2200
l_kernel_0002291e: cmp cl,0x1
pf_at 0x2203
l_kernel_00022921: jnz short 0x22942
pf_at 0x2205
l_kernel_00022923: mov ecx,[ebp-0xc74]
pf_at 0x220b
l_kernel_00022929: call 0x25440
pf_at 0x2210
l_kernel_0002292e: test al,al
pf_at 0x2212
l_kernel_00022930: jz short 0x2297b
pf_at 0x2214
l_kernel_00022932: call 0x25519
pf_at 0x2219
l_kernel_00022937: jmp short 0x22985
pf_at 0x221b
l_kernel_00022939: sub esp,byte +0xc
pf_at 0x221e
l_kernel_0002293c: push ebx
pf_at 0x221f
l_kernel_0002293d: jmp near 0x22887
pf_at 0x2224
l_kernel_00022942: sub esp,byte +0xc
pf_at 0x2227
l_kernel_00022945: lea edx,[ebp-0xc74]
pf_at 0x222d
l_kernel_0002294b: mov ecx,0x2ca5d
pf_at 0x2232
l_kernel_00022950: push edi
pf_at 0x2233
l_kernel_00022951: call 0x253f8
pf_at 0x2238
l_kernel_00022956: add esp,byte +0x10
pf_at 0x223b
l_kernel_00022959: test al,al
pf_at 0x223d
l_kernel_0002295b: jz short 0x22985
pf_at 0x223f
l_kernel_0002295d: cmp dword [ebp-0x28c],byte +0x0
pf_at 0x2246
l_kernel_00022964: jz short 0x22985
pf_at 0x2248
l_kernel_00022966: mov ecx,0x2ca5d
pf_at 0x224d
l_kernel_0002296b: call 0x2552e
pf_at 0x2252
l_kernel_00022970: test al,al
pf_at 0x2254
l_kernel_00022972: jnz short 0x22985
pf_at 0x2256
l_kernel_00022974: mov ecx,0x2cc95
pf_at 0x225b
l_kernel_00022979: jmp short 0x22980
pf_at 0x225d
l_kernel_0002297b: mov ecx,0x2cc73
pf_at 0x2262
l_kernel_00022980: call 0x2176e
pf_at 0x2267
l_kernel_00022985: call 0x21cca
pf_at 0x226c
l_kernel_0002298a: lea edi,[ebp-0x46d]
pf_at 0x2272
l_kernel_00022990: call 0x241e6
pf_at 0x2277
l_kernel_00022995: push dword 0x3f0d8
pf_at 0x227c
l_kernel_0002299a: push dword 0x2cb77
pf_at 0x2281
l_kernel_0002299f: push dword 0xf0
pf_at 0x2286
l_kernel_000229a4: push edi
pf_at 0x2287
l_kernel_000229a5: call 0x216bc
pf_at 0x228c
l_kernel_000229aa: add esp,byte +0x10
pf_at 0x228f
l_kernel_000229ad: mov ecx,edi
pf_at 0x2291
l_kernel_000229af: call 0x243a7
pf_at 0x2296
l_kernel_000229b4: cmp byte [ebp-0x46d],0x0
pf_at 0x229d
l_kernel_000229bb: jz near 0x2350e
pf_at 0x22a3
l_kernel_000229c1: sub esp,byte +0x4
pf_at 0x22a6
l_kernel_000229c4: push edi
pf_at 0x22a7
l_kernel_000229c5: push dword 0x2ca40
pf_at 0x22ac
l_kernel_000229ca: push dword 0x2cb7a
pf_at 0x22b1
l_kernel_000229cf: call 0x21c41
pf_at 0x22b6
l_kernel_000229d4: add esp,byte +0x10
pf_at 0x22b9
l_kernel_000229d7: push edi
pf_at 0x22ba
l_kernel_000229d8: push dword 0x2cb77
pf_at 0x22bf
l_kernel_000229dd: push dword 0x140
pf_at 0x22c4
l_kernel_000229e2: lea esi,[ebp-0xc74]
pf_at 0x22ca
l_kernel_000229e8: push esi
pf_at 0x22cb
l_kernel_000229e9: call 0x216bc
pf_at 0x22d0
l_kernel_000229ee: add esp,byte +0x10
pf_at 0x22d3
l_kernel_000229f1: mov ecx,esi
pf_at 0x22d5
l_kernel_000229f3: call 0x2c5f9
pf_at 0x22da
l_kernel_000229f8: mov cl,[eax]
pf_at 0x22dc
l_kernel_000229fa: cmp cl,0x3e
pf_at 0x22df
l_kernel_000229fd: jnz short 0x22a57
pf_at 0x22e1
l_kernel_000229ff: lea ecx,[eax+0x1]
pf_at 0x22e4
l_kernel_00022a02: mov esi,eax
pf_at 0x22e6
l_kernel_00022a04: add esi,byte +0x2
pf_at 0x22e9
l_kernel_00022a07: cmp byte [eax+0x1],0x20
pf_at 0x22ed
l_kernel_00022a0b: cmovnz esi,ecx
pf_at 0x22f0
l_kernel_00022a0e: sub esp,byte +0xc
pf_at 0x22f3
l_kernel_00022a11: push esi
pf_at 0x22f4
l_kernel_00022a12: call 0x20ccf
pf_at 0x22f9
l_kernel_00022a17: add esp,byte +0x10
pf_at 0x22fc
l_kernel_00022a1a: mov ecx,esi
pf_at 0x22fe
l_kernel_00022a1c: mov edx,eax
pf_at 0x2300
l_kernel_00022a1e: call 0x24f9e
pf_at 0x2305
l_kernel_00022a23: test eax,eax
pf_at 0x2307
l_kernel_00022a25: jz near 0x22ac5
pf_at 0x230d
l_kernel_00022a2b: mov esi,eax
pf_at 0x230f
l_kernel_00022a2d: mov ecx,[dword 0x70420]
pf_at 0x2315
l_kernel_00022a33: inc ecx
pf_at 0x2316
l_kernel_00022a34: call 0x2c61e
pf_at 0x231b
l_kernel_00022a39: test al,al
pf_at 0x231d
l_kernel_00022a3b: jz short 0x22ab9
pf_at 0x231f
l_kernel_00022a3d: mov eax,[0x7041c]
pf_at 0x2324
l_kernel_00022a42: mov ecx,[dword 0x70420]
pf_at 0x232a
l_kernel_00022a48: mov [eax+ecx*4],esi
pf_at 0x232d
l_kernel_00022a4b: inc ecx
pf_at 0x232e
l_kernel_00022a4c: mov [dword 0x70420],ecx
pf_at 0x2334
l_kernel_00022a52: jmp near 0x22d6f
pf_at 0x2339
l_kernel_00022a57: mov edx,ecx
pf_at 0x233b
l_kernel_00022a59: add dl,0xbf
pf_at 0x233e
l_kernel_00022a5c: movzx esi,cl
pf_at 0x2341
l_kernel_00022a5f: or cl,0x20
pf_at 0x2344
l_kernel_00022a62: cmp dl,0x1a
pf_at 0x2347
l_kernel_00022a65: movzx ecx,cl
pf_at 0x234a
l_kernel_00022a68: cmovnc ecx,esi
pf_at 0x234d
l_kernel_00022a6b: xor ebx,ebx
pf_at 0x234f
l_kernel_00022a6d: mov [ebp-0x10],ecx
pf_at 0x2352
l_kernel_00022a70: cmp cl,0x69
pf_at 0x2355
l_kernel_00022a73: setz bl
pf_at 0x2358
l_kernel_00022a76: mov dl,[eax+ebx]
pf_at 0x235b
l_kernel_00022a79: mov dh,dl
pf_at 0x235d
l_kernel_00022a7b: add dh,0xd0
pf_at 0x2360
l_kernel_00022a7e: cmp dh,0x9
pf_at 0x2363
l_kernel_00022a81: ja near 0x22b13
pf_at 0x2369
l_kernel_00022a87: add ebx,eax
pf_at 0x236b
l_kernel_00022a89: inc ebx
pf_at 0x236c
l_kernel_00022a8a: xor edi,edi
pf_at 0x236e
l_kernel_00022a8c: mov eax,edx
pf_at 0x2370
l_kernel_00022a8e: add al,0xd0
pf_at 0x2372
l_kernel_00022a90: cmp al,0x9
pf_at 0x2374
l_kernel_00022a92: ja short 0x22ad9
pf_at 0x2376
l_kernel_00022a94: movzx esi,dl
pf_at 0x2379
l_kernel_00022a97: push byte +0x2f
pf_at 0x237b
l_kernel_00022a99: pop eax
pf_at 0x237c
l_kernel_00022a9a: sub eax,esi
pf_at 0x237e
l_kernel_00022a9c: xor edx,edx
pf_at 0x2380
l_kernel_00022a9e: push byte +0xa
pf_at 0x2382
l_kernel_00022aa0: pop ecx
pf_at 0x2383
l_kernel_00022aa1: div ecx
pf_at 0x2385
l_kernel_00022aa3: cmp edi,eax
pf_at 0x2387
l_kernel_00022aa5: ja near 0x22d5a
pf_at 0x238d
l_kernel_00022aab: imul eax,edi,byte +0xa
pf_at 0x2390
l_kernel_00022aae: lea edi,[esi+eax]
pf_at 0x2393
l_kernel_00022ab1: add edi,byte -0x30
pf_at 0x2396
l_kernel_00022ab4: mov dl,[ebx]
pf_at 0x2398
l_kernel_00022ab6: inc ebx
pf_at 0x2399
l_kernel_00022ab7: jmp short 0x22a8c
pf_at 0x239b
l_kernel_00022ab9: sub esp,byte +0xc
pf_at 0x239e
l_kernel_00022abc: push esi
pf_at 0x239f
l_kernel_00022abd: call 0x20aee
pf_at 0x23a4
l_kernel_00022ac2: add esp,byte +0x10
pf_at 0x23a7
l_kernel_00022ac5: mov ecx,0x2e228
pf_at 0x23ac
l_kernel_00022aca: call 0x2176e
pf_at 0x23b1
l_kernel_00022acf: call 0x21cca
pf_at 0x23b6
l_kernel_00022ad4: jmp near 0x22d6f
pf_at 0x23bb
l_kernel_00022ad9: cmp dl,0x3e
pf_at 0x23be
l_kernel_00022adc: jnz short 0x22b13
pf_at 0x23c0
l_kernel_00022ade: test edi,edi
pf_at 0x23c2
l_kernel_00022ae0: jz near 0x22fd7
pf_at 0x23c8
l_kernel_00022ae6: lea esi,[ebx+0x1]
pf_at 0x23cb
l_kernel_00022ae9: cmp byte [ebx],0x20
pf_at 0x23ce
l_kernel_00022aec: cmovnz esi,ebx
pf_at 0x23d1
l_kernel_00022aef: mov eax,[0x70420]
pf_at 0x23d6
l_kernel_00022af4: cmp byte [ebp-0x10],0x69
pf_at 0x23da
l_kernel_00022af8: jnz near 0x2302b
pf_at 0x23e0
l_kernel_00022afe: lea ecx,[eax+0x1]
pf_at 0x23e3
l_kernel_00022b01: cmp edi,ecx
pf_at 0x23e5
l_kernel_00022b03: jna near 0x23081
pf_at 0x23eb
l_kernel_00022b09: mov ecx,0x2e28f
pf_at 0x23f0
l_kernel_00022b0e: jmp near 0x22d5f
pf_at 0x23f5
l_kernel_00022b13: lea eax,[ebp-0x46d]
pf_at 0x23fb
l_kernel_00022b19: push eax
pf_at 0x23fc
l_kernel_00022b1a: push dword 0x2cb77
pf_at 0x2401
l_kernel_00022b1f: push dword 0x140
pf_at 0x2406
l_kernel_00022b24: lea esi,[ebp-0xc74]
pf_at 0x240c
l_kernel_00022b2a: push esi
pf_at 0x240d
l_kernel_00022b2b: call 0x216bc
pf_at 0x2412
l_kernel_00022b30: add esp,byte +0x10
pf_at 0x2415
l_kernel_00022b33: mov ecx,esi
pf_at 0x2417
l_kernel_00022b35: call 0x243a7
pf_at 0x241c
l_kernel_00022b3a: mov cl,[ebp-0xc74]
pf_at 0x2422
l_kernel_00022b40: test cl,cl
pf_at 0x2424
l_kernel_00022b42: jz near 0x22d79
pf_at 0x242a
l_kernel_00022b48: xor eax,eax
pf_at 0x242c
l_kernel_00022b4a: inc eax
pf_at 0x242d
l_kernel_00022b4b: lea edi,[ebp-0x28c]
pf_at 0x2433
l_kernel_00022b51: movzx edx,cl
pf_at 0x2436
l_kernel_00022b54: cmp cl,0xd
pf_at 0x2439
l_kernel_00022b57: ja short 0x22b63
pf_at 0x243b
l_kernel_00022b59: mov esi,0x3e01
pf_at 0x2440
l_kernel_00022b5e: bt esi,edx
pf_at 0x2443
l_kernel_00022b61: jc short 0x22b83
pf_at 0x2445
l_kernel_00022b63: cmp edx,byte +0x20
pf_at 0x2448
l_kernel_00022b66: jz short 0x22b83
pf_at 0x244a
l_kernel_00022b68: cmp edx,byte +0x2c
pf_at 0x244d
l_kernel_00022b6b: jz short 0x22b83
pf_at 0x244f
l_kernel_00022b6d: cmp eax,byte +0x3f
pf_at 0x2452
l_kernel_00022b70: ja short 0x22b79
pf_at 0x2454
l_kernel_00022b72: mov [ebp+eax-0x28d],cl
pf_at 0x245b
l_kernel_00022b79: mov cl,[ebp+eax-0xc74]
pf_at 0x2462
l_kernel_00022b80: inc eax
pf_at 0x2463
l_kernel_00022b81: jmp short 0x22b51
pf_at 0x2465
l_kernel_00022b83: dec eax
pf_at 0x2466
l_kernel_00022b84: cmp eax,byte +0x3f
pf_at 0x2469
l_kernel_00022b87: push byte +0x3f
pf_at 0x246b
l_kernel_00022b89: pop ecx
pf_at 0x246c
l_kernel_00022b8a: cmovnc eax,ecx
pf_at 0x246f
l_kernel_00022b8d: mov byte [ebp+eax-0x28c],0x0
pf_at 0x2477
l_kernel_00022b95: mov ecx,edi
pf_at 0x2479
l_kernel_00022b97: mov edx,0x2e2ea
pf_at 0x247e
l_kernel_00022b9c: call 0x26ebe
pf_at 0x2483
l_kernel_00022ba1: test al,al
pf_at 0x2485
l_kernel_00022ba3: jnz near 0x22d7f
pf_at 0x248b
l_kernel_00022ba9: mov ecx,edi
pf_at 0x248d
l_kernel_00022bab: mov edx,0x2e2ee
pf_at 0x2492
l_kernel_00022bb0: call 0x26ebe
pf_at 0x2497
l_kernel_00022bb5: test al,al
pf_at 0x2499
l_kernel_00022bb7: jnz near 0x22d7f
pf_at 0x249f
l_kernel_00022bbd: mov ecx,edi
pf_at 0x24a1
l_kernel_00022bbf: mov edx,0x2e2f3
pf_at 0x24a6
l_kernel_00022bc4: call 0x26ebe
pf_at 0x24ab
l_kernel_00022bc9: test al,al
pf_at 0x24ad
l_kernel_00022bcb: jnz near 0x22d7f
pf_at 0x24b3
l_kernel_00022bd1: mov ecx,edi
pf_at 0x24b5
l_kernel_00022bd3: mov edx,0x2e2f7
pf_at 0x24ba
l_kernel_00022bd8: call 0x26ebe
pf_at 0x24bf
l_kernel_00022bdd: test al,al
pf_at 0x24c1
l_kernel_00022bdf: jnz near 0x22d7f
pf_at 0x24c7
l_kernel_00022be5: mov ecx,edi
pf_at 0x24c9
l_kernel_00022be7: mov edx,0x2e2fc
pf_at 0x24ce
l_kernel_00022bec: call 0x26ebe
pf_at 0x24d3
l_kernel_00022bf1: test al,al
pf_at 0x24d5
l_kernel_00022bf3: jnz near 0x22d7f
pf_at 0x24db
l_kernel_00022bf9: mov ecx,edi
pf_at 0x24dd
l_kernel_00022bfb: mov edx,0x2e301
pf_at 0x24e2
l_kernel_00022c00: call 0x26ebe
pf_at 0x24e7
l_kernel_00022c05: test al,al
pf_at 0x24e9
l_kernel_00022c07: jnz near 0x22d7f
pf_at 0x24ef
l_kernel_00022c0d: mov ecx,edi
pf_at 0x24f1
l_kernel_00022c0f: mov edx,0x2e305
pf_at 0x24f6
l_kernel_00022c14: call 0x26ebe
pf_at 0x24fb
l_kernel_00022c19: test al,al
pf_at 0x24fd
l_kernel_00022c1b: jnz near 0x22d7f
pf_at 0x2503
l_kernel_00022c21: mov ecx,edi
pf_at 0x2505
l_kernel_00022c23: mov edx,0x2e30c
pf_at 0x250a
l_kernel_00022c28: call 0x26ebe
pf_at 0x250f
l_kernel_00022c2d: test al,al
pf_at 0x2511
l_kernel_00022c2f: jnz near 0x22d7f
pf_at 0x2517
l_kernel_00022c35: mov ecx,edi
pf_at 0x2519
l_kernel_00022c37: mov edx,0x2e313
pf_at 0x251e
l_kernel_00022c3c: call 0x26ebe
pf_at 0x2523
l_kernel_00022c41: test al,al
pf_at 0x2525
l_kernel_00022c43: jnz near 0x22d7f
pf_at 0x252b
l_kernel_00022c49: lea eax,[ebp-0x46d]
pf_at 0x2531
l_kernel_00022c4f: push eax
pf_at 0x2532
l_kernel_00022c50: push dword 0x2cb77
pf_at 0x2537
l_kernel_00022c55: push dword 0x140
pf_at 0x253c
l_kernel_00022c5a: lea esi,[ebp-0xc74]
pf_at 0x2542
l_kernel_00022c60: push esi
pf_at 0x2543
l_kernel_00022c61: call 0x216bc
pf_at 0x2548
l_kernel_00022c66: add esp,byte +0x10
pf_at 0x254b
l_kernel_00022c69: mov [ebp-0x6c],esi
pf_at 0x254e
l_kernel_00022c6c: and dword [ebp-0x28],byte +0x0
pf_at 0x2552
l_kernel_00022c70: mov [ebp-0x24],esi
pf_at 0x2555
l_kernel_00022c73: mov ecx,esi
pf_at 0x2557
l_kernel_00022c75: lea edx,[ebp-0xac]
pf_at 0x255d
l_kernel_00022c7b: call 0x26135
pf_at 0x2562
l_kernel_00022c80: test al,al
pf_at 0x2564
l_kernel_00022c82: jz near 0x23803
pf_at 0x256a
l_kernel_00022c88: and dword [ebp-0x50],byte +0x0
pf_at 0x256e
l_kernel_00022c8c: and dword [ebp-0x4c],byte +0x0
pf_at 0x2572
l_kernel_00022c90: and dword [ebp-0x48],byte +0x0
pf_at 0x2576
l_kernel_00022c94: xor eax,eax
pf_at 0x2578
l_kernel_00022c96: cmp [ebp-0xac],eax
pf_at 0x257e
l_kernel_00022c9c: jz near 0x22d4a
pf_at 0x2584
l_kernel_00022ca2: mov eax,[ebp-0xa4]
pf_at 0x258a
l_kernel_00022ca8: mov esi,[eax]
pf_at 0x258c
l_kernel_00022caa: mov ecx,esi
pf_at 0x258e
l_kernel_00022cac: mov edx,0x2cd03
pf_at 0x2593
l_kernel_00022cb1: call 0x26458
pf_at 0x2598
l_kernel_00022cb6: test al,al
pf_at 0x259a
l_kernel_00022cb8: jnz short 0x22d0e
pf_at 0x259c
l_kernel_00022cba: mov ecx,esi
pf_at 0x259e
l_kernel_00022cbc: mov edx,0x2cd87
pf_at 0x25a3
l_kernel_00022cc1: call 0x26458
pf_at 0x25a8
l_kernel_00022cc6: test al,al
pf_at 0x25aa
l_kernel_00022cc8: jnz short 0x22d0e
pf_at 0x25ac
l_kernel_00022cca: mov ecx,esi
pf_at 0x25ae
l_kernel_00022ccc: mov edx,0x2cddb
pf_at 0x25b3
l_kernel_00022cd1: call 0x26458
pf_at 0x25b8
l_kernel_00022cd6: test al,al
pf_at 0x25ba
l_kernel_00022cd8: jnz short 0x22d0e
pf_at 0x25bc
l_kernel_00022cda: mov ecx,esi
pf_at 0x25be
l_kernel_00022cdc: mov edx,0x2ccc0
pf_at 0x25c3
l_kernel_00022ce1: call 0x26458
pf_at 0x25c8
l_kernel_00022ce6: test al,al
pf_at 0x25ca
l_kernel_00022ce8: jnz short 0x22d0e
pf_at 0x25cc
l_kernel_00022cea: mov ecx,esi
pf_at 0x25ce
l_kernel_00022cec: mov edx,0x2ccc4
pf_at 0x25d3
l_kernel_00022cf1: call 0x26458
pf_at 0x25d8
l_kernel_00022cf6: test al,al
pf_at 0x25da
l_kernel_00022cf8: jnz short 0x22d0e
pf_at 0x25dc
l_kernel_00022cfa: mov ecx,esi
pf_at 0x25de
l_kernel_00022cfc: mov edx,0x2ccc9
pf_at 0x25e3
l_kernel_00022d01: call 0x26458
pf_at 0x25e8
l_kernel_00022d06: test al,al
pf_at 0x25ea
l_kernel_00022d08: jz near 0x238c4
pf_at 0x25f0
l_kernel_00022d0e: and dword [ebp-0x28c],byte +0x0
pf_at 0x25f7
l_kernel_00022d15: sub esp,byte +0xc
pf_at 0x25fa
l_kernel_00022d18: lea ecx,[ebp-0x6c]
pf_at 0x25fd
l_kernel_00022d1b: xor edx,edx
pf_at 0x25ff
l_kernel_00022d1d: inc edx
pf_at 0x2600
l_kernel_00022d1e: push edi
pf_at 0x2601
l_kernel_00022d1f: call 0x257e3
pf_at 0x2606
l_kernel_00022d24: add esp,byte +0x10
pf_at 0x2609
l_kernel_00022d27: test al,al
pf_at 0x260b
l_kernel_00022d29: jz short 0x22d4a
pf_at 0x260d
l_kernel_00022d2b: cmp dword [ebp-0x28c],byte +0x0
pf_at 0x2614
l_kernel_00022d32: jnz short 0x22d4a
pf_at 0x2616
l_kernel_00022d34: sub esp,byte +0x4
pf_at 0x2619
l_kernel_00022d37: push dword 0x2cccf
pf_at 0x261e
l_kernel_00022d3c: push byte +0x0
pf_at 0x2620
l_kernel_00022d3e: lea eax,[ebp-0x28]
pf_at 0x2623
l_kernel_00022d41: push eax
pf_at 0x2624
l_kernel_00022d42: call 0x2609c
pf_at 0x2629
l_kernel_00022d47: add esp,byte +0x10
pf_at 0x262c
l_kernel_00022d4a: lea ecx,[ebp-0xac]
pf_at 0x2632
l_kernel_00022d50: call 0x26419
pf_at 0x2637
l_kernel_00022d55: jmp near 0x23508
pf_at 0x263c
l_kernel_00022d5a: mov ecx,0x2e242
pf_at 0x2641
l_kernel_00022d5f: call 0x2176e
pf_at 0x2646
l_kernel_00022d64: call 0x21cca
pf_at 0x264b
l_kernel_00022d69: lea edi,[ebp-0x46d]
pf_at 0x2651
l_kernel_00022d6f: call 0x21cca
pf_at 0x2656
l_kernel_00022d74: jmp near 0x2350e
pf_at 0x265b
l_kernel_00022d79: lea edi,[ebp-0x28c]
pf_at 0x2661
l_kernel_00022d7f: lea eax,[ebp-0x46d]
pf_at 0x2667
l_kernel_00022d85: push eax
pf_at 0x2668
l_kernel_00022d86: push dword 0x2cb77
pf_at 0x266d
l_kernel_00022d8b: push dword 0x140
pf_at 0x2672
l_kernel_00022d90: push edi
pf_at 0x2673
l_kernel_00022d91: call 0x216bc
pf_at 0x2678
l_kernel_00022d96: add esp,byte +0x10
pf_at 0x267b
l_kernel_00022d99: mov ecx,edi
pf_at 0x267d
l_kernel_00022d9b: call 0x243a7
pf_at 0x2682
l_kernel_00022da0: mov al,[ebp-0x28c]
pf_at 0x2688
l_kernel_00022da6: test al,al
pf_at 0x268a
l_kernel_00022da8: jz near 0x23508
pf_at 0x2690
l_kernel_00022dae: xor ecx,ecx
pf_at 0x2692
l_kernel_00022db0: mov [ebp-0x10],al
pf_at 0x2695
l_kernel_00022db3: cmp ecx,byte +0x3
pf_at 0x2698
l_kernel_00022db6: jz near 0x23508
pf_at 0x269e
l_kernel_00022dbc: movzx edx,byte [ecx+0x2e2ea]
pf_at 0x26a5
l_kernel_00022dc3: movzx eax,byte [ebp+ecx-0x28c]
pf_at 0x26ad
l_kernel_00022dcb: mov ebx,eax
pf_at 0x26af
l_kernel_00022dcd: add bl,0x9f
pf_at 0x26b2
l_kernel_00022dd0: mov bh,al
pf_at 0x26b4
l_kernel_00022dd2: add bh,0xe0
pf_at 0x26b7
l_kernel_00022dd5: cmp bl,0x1a
pf_at 0x26ba
l_kernel_00022dd8: movzx ebx,bh
pf_at 0x26bd
l_kernel_00022ddb: cmovnc ebx,eax
pf_at 0x26c0
l_kernel_00022dde: mov eax,edx
pf_at 0x26c2
l_kernel_00022de0: add al,0x9f
pf_at 0x26c4
l_kernel_00022de2: mov ah,dl
pf_at 0x26c6
l_kernel_00022de4: add ah,0xe0
pf_at 0x26c9
l_kernel_00022de7: cmp al,0x1a
pf_at 0x26cb
l_kernel_00022de9: movzx eax,ah
pf_at 0x26ce
l_kernel_00022dec: cmovnc eax,edx
pf_at 0x26d1
l_kernel_00022def: cmp bl,al
pf_at 0x26d3
l_kernel_00022df1: jnz short 0x22df6
pf_at 0x26d5
l_kernel_00022df3: inc ecx
pf_at 0x26d6
l_kernel_00022df4: jmp short 0x22db3
pf_at 0x26d8
l_kernel_00022df6: xor ecx,ecx
pf_at 0x26da
l_kernel_00022df8: mov bl,[ebp-0x10]
pf_at 0x26dd
l_kernel_00022dfb: movzx edx,bl
pf_at 0x26e0
l_kernel_00022dfe: cmp bl,0xd
pf_at 0x26e3
l_kernel_00022e01: ja short 0x22e0d
pf_at 0x26e5
l_kernel_00022e03: mov eax,0x3e01
pf_at 0x26ea
l_kernel_00022e08: bt eax,edx
pf_at 0x26ed
l_kernel_00022e0b: jc short 0x22e40
pf_at 0x26ef
l_kernel_00022e0d: cmp edx,byte +0x20
pf_at 0x26f2
l_kernel_00022e10: jz short 0x22e40
pf_at 0x26f4
l_kernel_00022e12: cmp edx,byte +0x2c
pf_at 0x26f7
l_kernel_00022e15: jz short 0x22e40
pf_at 0x26f9
l_kernel_00022e17: lea esi,[ecx+0x1]
pf_at 0x26fc
l_kernel_00022e1a: cmp esi,byte +0x3f
pf_at 0x26ff
l_kernel_00022e1d: ja short 0x22e35
pf_at 0x2701
l_kernel_00022e1f: mov eax,ebx
pf_at 0x2703
l_kernel_00022e21: add al,0x9f
pf_at 0x2705
l_kernel_00022e23: add bl,0xe0
pf_at 0x2708
l_kernel_00022e26: cmp al,0x1a
pf_at 0x270a
l_kernel_00022e28: movzx eax,bl
pf_at 0x270d
l_kernel_00022e2b: cmovc edx,eax
pf_at 0x2710
l_kernel_00022e2e: mov [ebp+ecx-0xac],dl
pf_at 0x2717
l_kernel_00022e35: mov bl,[ebp+ecx-0x28b]
pf_at 0x271e
l_kernel_00022e3c: mov ecx,esi
pf_at 0x2720
l_kernel_00022e3e: jmp short 0x22dfb
pf_at 0x2722
l_kernel_00022e40: cmp ecx,byte +0x3f
pf_at 0x2725
l_kernel_00022e43: push byte +0x3f
pf_at 0x2727
l_kernel_00022e45: pop eax
pf_at 0x2728
l_kernel_00022e46: cmovnc ecx,eax
pf_at 0x272b
l_kernel_00022e49: mov byte [ebp+ecx-0xac],0x0
pf_at 0x2733
l_kernel_00022e51: lea edi,[ecx+ebp]
pf_at 0x2736
l_kernel_00022e54: add edi,0xfffffd74
pf_at 0x273c
l_kernel_00022e5a: mov ecx,edi
pf_at 0x273e
l_kernel_00022e5c: call 0x243a7
pf_at 0x2743
l_kernel_00022e61: and dword [ebp-0xc74],byte +0x0
pf_at 0x274a
l_kernel_00022e68: xor ebx,ebx
pf_at 0x274c
l_kernel_00022e6a: mov al,[edi]
pf_at 0x274e
l_kernel_00022e6c: test al,al
pf_at 0x2750
l_kernel_00022e6e: lea esi,[ebp-0xac]
pf_at 0x2756
l_kernel_00022e74: jz near 0x22f55
pf_at 0x275c
l_kernel_00022e7a: cmp al,0x9
pf_at 0x275e
l_kernel_00022e7c: jz short 0x22e8b
pf_at 0x2760
l_kernel_00022e7e: movzx ecx,al
pf_at 0x2763
l_kernel_00022e81: cmp ecx,byte +0x20
pf_at 0x2766
l_kernel_00022e84: jz short 0x22e8b
pf_at 0x2768
l_kernel_00022e86: cmp ecx,byte +0x2c
pf_at 0x276b
l_kernel_00022e89: jnz short 0x22e91
pf_at 0x276d
l_kernel_00022e8b: mov al,[edi+0x1]
pf_at 0x2770
l_kernel_00022e8e: inc edi
pf_at 0x2771
l_kernel_00022e8f: jmp short 0x22e7a
pf_at 0x2773
l_kernel_00022e91: test ecx,ecx
pf_at 0x2775
l_kernel_00022e93: jz near 0x22f55
pf_at 0x277b
l_kernel_00022e99: cmp ebx,byte +0x7
pf_at 0x277e
l_kernel_00022e9c: ja near 0x232ed
pf_at 0x2784
l_kernel_00022ea2: shl ebx,byte 0x8
pf_at 0x2787
l_kernel_00022ea5: lea ecx,[ebp-0xc70]
pf_at 0x278d
l_kernel_00022eab: add ebx,ecx
pf_at 0x278f
l_kernel_00022ead: mov [ebp-0x2c],ebx
pf_at 0x2792
l_kernel_00022eb0: mov dword [ebp-0x14],0x0
pf_at 0x2799
l_kernel_00022eb7: mov dword [ebp-0x10],0x0
pf_at 0x27a0
l_kernel_00022ebe: mov dword [ebp-0x1c],0x0
pf_at 0x27a7
l_kernel_00022ec5: cmp al,0x2c
pf_at 0x27a9
l_kernel_00022ec7: setnz ah
pf_at 0x27ac
l_kernel_00022eca: test al,al
pf_at 0x27ae
l_kernel_00022ecc: jz short 0x22f2a
pf_at 0x27b0
l_kernel_00022ece: or ah,[ebp-0x10]
pf_at 0x27b3
l_kernel_00022ed1: test ah,0x1
pf_at 0x27b6
l_kernel_00022ed4: jz short 0x22f2a
pf_at 0x27b8
l_kernel_00022ed6: movzx ebx,al
pf_at 0x27bb
l_kernel_00022ed9: cmp al,0x27
pf_at 0x27bd
l_kernel_00022edb: jz short 0x22ee2
pf_at 0x27bf
l_kernel_00022edd: cmp ebx,byte +0x22
pf_at 0x27c2
l_kernel_00022ee0: jnz short 0x22f0a
pf_at 0x27c4
l_kernel_00022ee2: cmp [ebp-0x1c],al
pf_at 0x27c7
l_kernel_00022ee5: setnz ah
pf_at 0x27ca
l_kernel_00022ee8: mov edx,[ebp-0x10]
pf_at 0x27cd
l_kernel_00022eeb: mov ecx,edx
pf_at 0x27cf
l_kernel_00022eed: xor cl,0x1
pf_at 0x27d2
l_kernel_00022ef0: or cl,ah
pf_at 0x27d4
l_kernel_00022ef2: mov esi,edx
pf_at 0x27d6
l_kernel_00022ef4: movzx edx,byte [ebp-0x1c]
pf_at 0x27da
l_kernel_00022ef8: mov [ebp-0x1c],edx
pf_at 0x27dd
l_kernel_00022efb: mov edx,esi
pf_at 0x27df
l_kernel_00022efd: test dl,0x1
pf_at 0x27e2
l_kernel_00022f00: cmovnz ebx,[ebp-0x1c]
pf_at 0x27e6
l_kernel_00022f04: mov [ebp-0x10],ecx
pf_at 0x27e9
l_kernel_00022f07: mov [ebp-0x1c],ebx
pf_at 0x27ec
l_kernel_00022f0a: mov ecx,[ebp-0x14]
pf_at 0x27ef
l_kernel_00022f0d: lea ebx,[ecx+0x1]
pf_at 0x27f2
l_kernel_00022f10: cmp ebx,0xff
pf_at 0x27f8
l_kernel_00022f16: ja short 0x22f24
pf_at 0x27fa
l_kernel_00022f18: mov ecx,[ebp-0x2c]
pf_at 0x27fd
l_kernel_00022f1b: mov edx,[ebp-0x14]
pf_at 0x2800
l_kernel_00022f1e: mov [ecx+edx],al
pf_at 0x2803
l_kernel_00022f21: mov [ebp-0x14],ebx
pf_at 0x2806
l_kernel_00022f24: mov al,[edi+0x1]
pf_at 0x2809
l_kernel_00022f27: inc edi
pf_at 0x280a
l_kernel_00022f28: jmp short 0x22ec5
pf_at 0x280c
l_kernel_00022f2a: mov ecx,[ebp-0x2c]
pf_at 0x280f
l_kernel_00022f2d: mov eax,[ebp-0x14]
pf_at 0x2812
l_kernel_00022f30: mov byte [ecx+eax],0x0
pf_at 0x2816
l_kernel_00022f34: call 0x243a7
pf_at 0x281b
l_kernel_00022f39: mov ebx,[ebp-0xc74]
pf_at 0x2821
l_kernel_00022f3f: inc ebx
pf_at 0x2822
l_kernel_00022f40: mov [ebp-0xc74],ebx
pf_at 0x2828
l_kernel_00022f46: xor eax,eax
pf_at 0x282a
l_kernel_00022f48: cmp byte [edi],0x2c
pf_at 0x282d
l_kernel_00022f4b: setz al
pf_at 0x2830
l_kernel_00022f4e: add edi,eax
pf_at 0x2832
l_kernel_00022f50: jmp near 0x22e6a
pf_at 0x2837
l_kernel_00022f55: mov ecx,esi
pf_at 0x2839
l_kernel_00022f57: mov edx,0x2e2ee
pf_at 0x283e
l_kernel_00022f5c: call 0x26ebe
pf_at 0x2843
l_kernel_00022f61: test al,al
pf_at 0x2845
l_kernel_00022f63: jz short 0x22fa8
pf_at 0x2847
l_kernel_00022f65: mov eax,[0x70420]
pf_at 0x284c
l_kernel_00022f6a: test eax,eax
pf_at 0x284e
l_kernel_00022f6c: jz near 0x2303d
pf_at 0x2854
l_kernel_00022f72: xor esi,esi
pf_at 0x2856
l_kernel_00022f74: cmp esi,eax
pf_at 0x2858
l_kernel_00022f76: jnc near 0x23503
pf_at 0x285e
l_kernel_00022f7c: mov eax,[0x7041c]
pf_at 0x2863
l_kernel_00022f81: mov eax,[eax+esi*4]
pf_at 0x2866
l_kernel_00022f84: inc esi
pf_at 0x2867
l_kernel_00022f85: test eax,eax
pf_at 0x2869
l_kernel_00022f87: mov ecx,0x2ca9c
pf_at 0x286e
l_kernel_00022f8c: cmovz eax,ecx
pf_at 0x2871
l_kernel_00022f8f: sub esp,byte +0x4
pf_at 0x2874
l_kernel_00022f92: push eax
pf_at 0x2875
l_kernel_00022f93: push esi
pf_at 0x2876
l_kernel_00022f94: push dword 0x2e3c5
pf_at 0x287b
l_kernel_00022f99: call 0x21c41
pf_at 0x2880
l_kernel_00022f9e: add esp,byte +0x10
pf_at 0x2883
l_kernel_00022fa1: mov eax,[0x70420]
pf_at 0x2888
l_kernel_00022fa6: jmp short 0x22f74
pf_at 0x288a
l_kernel_00022fa8: mov ecx,esi
pf_at 0x288c
l_kernel_00022faa: mov edx,0x2e2f3
pf_at 0x2891
l_kernel_00022faf: call 0x26ebe
pf_at 0x2896
l_kernel_00022fb4: test al,al
pf_at 0x2898
l_kernel_00022fb6: jz short 0x22fe1
pf_at 0x289a
l_kernel_00022fb8: xor esi,esi
pf_at 0x289c
l_kernel_00022fba: xor edi,edi
pf_at 0x289e
l_kernel_00022fbc: cmp edi,[dword 0x70420]
pf_at 0x28a4
l_kernel_00022fc2: jnc short 0x2301a
pf_at 0x28a6
l_kernel_00022fc4: mov ecx,[dword 0x7041c]
pf_at 0x28ac
l_kernel_00022fca: add ecx,esi
pf_at 0x28ae
l_kernel_00022fcc: call 0x2571d
pf_at 0x28b3
l_kernel_00022fd1: inc edi
pf_at 0x28b4
l_kernel_00022fd2: add esi,byte +0x4
pf_at 0x28b7
l_kernel_00022fd5: jmp short 0x22fbc
pf_at 0x28b9
l_kernel_00022fd7: mov ecx,0x2e269
pf_at 0x28be
l_kernel_00022fdc: jmp near 0x22d5f
pf_at 0x28c3
l_kernel_00022fe1: mov ecx,esi
pf_at 0x28c5
l_kernel_00022fe3: mov edx,0x2e2f7
pf_at 0x28ca
l_kernel_00022fe8: call 0x26ebe
pf_at 0x28cf
l_kernel_00022fed: test al,al
pf_at 0x28d1
l_kernel_00022fef: lea edi,[ebp-0x50]
pf_at 0x28d4
l_kernel_00022ff2: jz short 0x23047
pf_at 0x28d6
l_kernel_00022ff4: test ebx,ebx
pf_at 0x28d8
l_kernel_00022ff6: jz near 0x23180
pf_at 0x28de
l_kernel_00022ffc: sub esp,byte +0xc
pf_at 0x28e1
l_kernel_00022fff: lea ecx,[ebp-0xc70]
pf_at 0x28e7
l_kernel_00023005: lea edx,[ebp-0x37d]
pf_at 0x28ed
l_kernel_0002300b: push dword 0xf1
pf_at 0x28f2
l_kernel_00023010: call 0x2b1d0
pf_at 0x28f7
l_kernel_00023015: jmp near 0x2319b
pf_at 0x28fc
l_kernel_0002301a: and dword [dword 0x70420],byte +0x0
pf_at 0x2903
l_kernel_00023021: mov ecx,0x2e333
pf_at 0x2908
l_kernel_00023026: jmp near 0x234fe
pf_at 0x290d
l_kernel_0002302b: cmp edi,eax
pf_at 0x290f
l_kernel_0002302d: jna near 0x23103
pf_at 0x2915
l_kernel_00023033: mov ecx,0x2e2af
pf_at 0x291a
l_kernel_00023038: jmp near 0x22d5f
pf_at 0x291f
l_kernel_0002303d: mov ecx,0x2ccb8
pf_at 0x2924
l_kernel_00023042: jmp near 0x234fe
pf_at 0x2929
l_kernel_00023047: mov ecx,esi
pf_at 0x292b
l_kernel_00023049: mov edx,0x2e305
pf_at 0x2930
l_kernel_0002304e: call 0x26ebe
pf_at 0x2935
l_kernel_00023053: test al,al
pf_at 0x2937
l_kernel_00023055: jz near 0x23144
pf_at 0x293d
l_kernel_0002305b: test ebx,ebx
pf_at 0x293f
l_kernel_0002305d: jz near 0x232f7
pf_at 0x2945
l_kernel_00023063: sub esp,byte +0xc
pf_at 0x2948
l_kernel_00023066: lea ecx,[ebp-0xc70]
pf_at 0x294e
l_kernel_0002306c: lea edx,[ebp-0x37d]
pf_at 0x2954
l_kernel_00023072: push dword 0xf1
pf_at 0x2959
l_kernel_00023077: call 0x2b1d0
pf_at 0x295e
l_kernel_0002307c: jmp near 0x23312
pf_at 0x2963
l_kernel_00023081: lea ebx,[edi-0x1]
pf_at 0x2966
l_kernel_00023084: cmp eax,ebx
pf_at 0x2968
l_kernel_00023086: jc near 0x2352b
pf_at 0x296e
l_kernel_0002308c: sub esp,byte +0xc
pf_at 0x2971
l_kernel_0002308f: push esi
pf_at 0x2972
l_kernel_00023090: call 0x20ccf
pf_at 0x2977
l_kernel_00023095: add esp,byte +0x10
pf_at 0x297a
l_kernel_00023098: mov ecx,esi
pf_at 0x297c
l_kernel_0002309a: mov edx,eax
pf_at 0x297e
l_kernel_0002309c: call 0x24f9e
pf_at 0x2983
l_kernel_000230a1: test eax,eax
pf_at 0x2985
l_kernel_000230a3: jz near 0x2352b
pf_at 0x298b
l_kernel_000230a9: mov esi,eax
pf_at 0x298d
l_kernel_000230ab: mov ecx,[dword 0x70420]
pf_at 0x2993
l_kernel_000230b1: inc ecx
pf_at 0x2994
l_kernel_000230b2: call 0x2c61e
pf_at 0x2999
l_kernel_000230b7: test al,al
pf_at 0x299b
l_kernel_000230b9: jz near 0x2351f
pf_at 0x29a1
l_kernel_000230bf: mov eax,[0x70420]
pf_at 0x29a6
l_kernel_000230c4: mov ecx,eax
pf_at 0x29a8
l_kernel_000230c6: sub ecx,ebx
pf_at 0x29aa
l_kernel_000230c8: jna short 0x230ee
pf_at 0x29ac
l_kernel_000230ca: mov eax,[0x7041c]
pf_at 0x29b1
l_kernel_000230cf: lea edx,[eax+ebx*4]
pf_at 0x29b4
l_kernel_000230d2: lea eax,[eax+ebx*4]
pf_at 0x29b7
l_kernel_000230d5: add eax,byte +0x4
pf_at 0x29ba
l_kernel_000230d8: shl ecx,byte 0x2
pf_at 0x29bd
l_kernel_000230db: sub esp,byte +0x4
pf_at 0x29c0
l_kernel_000230de: push ecx
pf_at 0x29c1
l_kernel_000230df: push edx
pf_at 0x29c2
l_kernel_000230e0: push eax
pf_at 0x29c3
l_kernel_000230e1: call 0x20c3e
pf_at 0x29c8
l_kernel_000230e6: add esp,byte +0x10
pf_at 0x29cb
l_kernel_000230e9: mov eax,[0x70420]
pf_at 0x29d0
l_kernel_000230ee: mov ecx,[dword 0x7041c]
pf_at 0x29d6
l_kernel_000230f4: mov [ecx+edi*4-0x4],esi
pf_at 0x29da
l_kernel_000230f8: inc eax
pf_at 0x29db
l_kernel_000230f9: mov [0x70420],eax
pf_at 0x29e0
l_kernel_000230fe: jmp near 0x22d69
pf_at 0x29e5
l_kernel_00023103: sub esp,byte +0xc
pf_at 0x29e8
l_kernel_00023106: push esi
pf_at 0x29e9
l_kernel_00023107: call 0x20ccf
pf_at 0x29ee
l_kernel_0002310c: add esp,byte +0x10
pf_at 0x29f1
l_kernel_0002310f: mov ecx,esi
pf_at 0x29f3
l_kernel_00023111: mov edx,eax
pf_at 0x29f5
l_kernel_00023113: call 0x24f9e
pf_at 0x29fa
l_kernel_00023118: test eax,eax
pf_at 0x29fc
l_kernel_0002311a: jz near 0x232a7
pf_at 0x2a02
l_kernel_00023120: mov esi,eax
pf_at 0x2a04
l_kernel_00023122: mov eax,[0x7041c]
pf_at 0x2a09
l_kernel_00023127: sub esp,byte +0xc
pf_at 0x2a0c
l_kernel_0002312a: push dword [eax+edi*4-0x4]
pf_at 0x2a10
l_kernel_0002312e: call 0x20aee
pf_at 0x2a15
l_kernel_00023133: add esp,byte +0x10
pf_at 0x2a18
l_kernel_00023136: mov eax,[0x7041c]
pf_at 0x2a1d
l_kernel_0002313b: mov [eax+edi*4-0x4],esi
pf_at 0x2a21
l_kernel_0002313f: jmp near 0x22d69
pf_at 0x2a26
l_kernel_00023144: mov ecx,esi
pf_at 0x2a28
l_kernel_00023146: mov edx,0x2e2fc
pf_at 0x2a2d
l_kernel_0002314b: call 0x26ebe
pf_at 0x2a32
l_kernel_00023150: test al,al
pf_at 0x2a34
l_kernel_00023152: jz near 0x232b1
pf_at 0x2a3a
l_kernel_00023158: test ebx,ebx
pf_at 0x2a3c
l_kernel_0002315a: jz near 0x23550
pf_at 0x2a42
l_kernel_00023160: sub esp,byte +0xc
pf_at 0x2a45
l_kernel_00023163: lea ecx,[ebp-0xc70]
pf_at 0x2a4b
l_kernel_00023169: lea esi,[ebp-0x37d]
pf_at 0x2a51
l_kernel_0002316f: mov edx,esi
pf_at 0x2a53
l_kernel_00023171: push dword 0xf1
pf_at 0x2a58
l_kernel_00023176: call 0x2b1d0
pf_at 0x2a5d
l_kernel_0002317b: jmp near 0x2356b
pf_at 0x2a62
l_kernel_00023180: push dword 0x2ca6b
pf_at 0x2a67
l_kernel_00023185: push dword 0x2cb77
pf_at 0x2a6c
l_kernel_0002318a: push dword 0xf1
pf_at 0x2a71
l_kernel_0002318f: lea eax,[ebp-0x37d]
pf_at 0x2a77
l_kernel_00023195: push eax
pf_at 0x2a78
l_kernel_00023196: call 0x216bc
pf_at 0x2a7d
l_kernel_0002319b: add esp,byte +0x10
pf_at 0x2a80
l_kernel_0002319e: xor edi,edi
pf_at 0x2a82
l_kernel_000231a0: mov ecx,[dword 0x70420]
pf_at 0x2a88
l_kernel_000231a6: xor esi,esi
pf_at 0x2a8a
l_kernel_000231a8: cmp edi,ecx
pf_at 0x2a8c
l_kernel_000231aa: jnc short 0x231d7
pf_at 0x2a8e
l_kernel_000231ac: mov eax,[0x7041c]
pf_at 0x2a93
l_kernel_000231b1: mov eax,[eax+edi*4]
pf_at 0x2a96
l_kernel_000231b4: test eax,eax
pf_at 0x2a98
l_kernel_000231b6: mov ecx,0x2ca9c
pf_at 0x2a9d
l_kernel_000231bb: cmovz eax,ecx
pf_at 0x2aa0
l_kernel_000231be: sub esp,byte +0xc
pf_at 0x2aa3
l_kernel_000231c1: push eax
pf_at 0x2aa4
l_kernel_000231c2: call 0x20ccf
pf_at 0x2aa9
l_kernel_000231c7: add esp,byte +0x10
pf_at 0x2aac
l_kernel_000231ca: inc edi
pf_at 0x2aad
l_kernel_000231cb: mov ecx,[dword 0x70420]
pf_at 0x2ab3
l_kernel_000231d1: cmp edi,ecx
pf_at 0x2ab5
l_kernel_000231d3: adc esi,eax
pf_at 0x2ab7
l_kernel_000231d5: jmp short 0x231a8
pf_at 0x2ab9
l_kernel_000231d7: cmp esi,byte +0x1
pf_at 0x2abc
l_kernel_000231da: adc esi,byte +0x0
pf_at 0x2abf
l_kernel_000231dd: sub esp,byte +0xc
pf_at 0x2ac2
l_kernel_000231e0: push esi
pf_at 0x2ac3
l_kernel_000231e1: call 0x20ae5
pf_at 0x2ac8
l_kernel_000231e6: add esp,byte +0x10
pf_at 0x2acb
l_kernel_000231e9: test eax,eax
pf_at 0x2acd
l_kernel_000231eb: jz near 0x2329d
pf_at 0x2ad3
l_kernel_000231f1: mov [ebp-0x1c],eax
pf_at 0x2ad6
l_kernel_000231f4: mov dword [ebp-0x10],0x0
pf_at 0x2add
l_kernel_000231fb: mov eax,[0x70420]
pf_at 0x2ae2
l_kernel_00023200: xor ecx,ecx
pf_at 0x2ae4
l_kernel_00023202: lea esi,[ebp-0x37d]
pf_at 0x2aea
l_kernel_00023208: cmp ecx,eax
pf_at 0x2aec
l_kernel_0002320a: jnc short 0x23261
pf_at 0x2aee
l_kernel_0002320c: mov eax,[0x7041c]
pf_at 0x2af3
l_kernel_00023211: mov esi,[eax+ecx*4]
pf_at 0x2af6
l_kernel_00023214: test esi,esi
pf_at 0x2af8
l_kernel_00023216: mov eax,0x2ca9c
pf_at 0x2afd
l_kernel_0002321b: cmovz esi,eax
pf_at 0x2b00
l_kernel_0002321e: sub esp,byte +0xc
pf_at 0x2b03
l_kernel_00023221: push esi
pf_at 0x2b04
l_kernel_00023222: mov [ebp-0x14],ecx
pf_at 0x2b07
l_kernel_00023225: call 0x20ccf
pf_at 0x2b0c
l_kernel_0002322a: add esp,byte +0x10
pf_at 0x2b0f
l_kernel_0002322d: mov edi,eax
pf_at 0x2b11
l_kernel_0002322f: mov ebx,[ebp-0x10]
pf_at 0x2b14
l_kernel_00023232: mov eax,[ebp-0x1c]
pf_at 0x2b17
l_kernel_00023235: add eax,ebx
pf_at 0x2b19
l_kernel_00023237: sub esp,byte +0x4
pf_at 0x2b1c
l_kernel_0002323a: push edi
pf_at 0x2b1d
l_kernel_0002323b: push esi
pf_at 0x2b1e
l_kernel_0002323c: push eax
pf_at 0x2b1f
l_kernel_0002323d: call 0x20c1d
pf_at 0x2b24
l_kernel_00023242: mov ecx,[ebp-0x14]
pf_at 0x2b27
l_kernel_00023245: add esp,byte +0x10
pf_at 0x2b2a
l_kernel_00023248: add edi,ebx
pf_at 0x2b2c
l_kernel_0002324a: inc ecx
pf_at 0x2b2d
l_kernel_0002324b: mov eax,[0x70420]
pf_at 0x2b32
l_kernel_00023250: cmp ecx,eax
pf_at 0x2b34
l_kernel_00023252: jnc short 0x2325c
pf_at 0x2b36
l_kernel_00023254: mov edx,[ebp-0x1c]
pf_at 0x2b39
l_kernel_00023257: mov byte [edx+edi],0xa
pf_at 0x2b3d
l_kernel_0002325b: inc edi
pf_at 0x2b3e
l_kernel_0002325c: mov [ebp-0x10],edi
pf_at 0x2b41
l_kernel_0002325f: jmp short 0x23202
pf_at 0x2b43
l_kernel_00023261: sub esp,byte +0xc
pf_at 0x2b46
l_kernel_00023264: mov ecx,esi
pf_at 0x2b48
l_kernel_00023266: mov edi,[ebp-0x1c]
pf_at 0x2b4b
l_kernel_00023269: mov edx,edi
pf_at 0x2b4d
l_kernel_0002326b: push dword [ebp-0x10]
pf_at 0x2b50
l_kernel_0002326e: call 0x2be36
pf_at 0x2b55
l_kernel_00023273: add esp,byte +0x10
pf_at 0x2b58
l_kernel_00023276: mov ebx,eax
pf_at 0x2b5a
l_kernel_00023278: sub esp,byte +0xc
pf_at 0x2b5d
l_kernel_0002327b: push edi
pf_at 0x2b5e
l_kernel_0002327c: call 0x20aee
pf_at 0x2b63
l_kernel_00023281: add esp,byte +0x10
pf_at 0x2b66
l_kernel_00023284: test bl,bl
pf_at 0x2b68
l_kernel_00023286: jz short 0x2329d
pf_at 0x2b6a
l_kernel_00023288: mov ecx,esi
pf_at 0x2b6c
l_kernel_0002328a: call 0x2c63b
pf_at 0x2b71
l_kernel_0002328f: sub esp,byte +0x8
pf_at 0x2b74
l_kernel_00023292: push eax
pf_at 0x2b75
l_kernel_00023293: push dword 0x2e349
pf_at 0x2b7a
l_kernel_00023298: jmp near 0x236e5
pf_at 0x2b7f
l_kernel_0002329d: mov ecx,0x2e336
pf_at 0x2b84
l_kernel_000232a2: jmp near 0x235d4
pf_at 0x2b89
l_kernel_000232a7: mov ecx,0x2e2d2
pf_at 0x2b8e
l_kernel_000232ac: jmp near 0x22d5f
pf_at 0x2b93
l_kernel_000232b1: mov ecx,esi
pf_at 0x2b95
l_kernel_000232b3: mov edx,0x2e30c
pf_at 0x2b9a
l_kernel_000232b8: call 0x26ebe
pf_at 0x2b9f
l_kernel_000232bd: test al,al
pf_at 0x2ba1
l_kernel_000232bf: jz near 0x23535
pf_at 0x2ba7
l_kernel_000232c5: test ebx,ebx
pf_at 0x2ba9
l_kernel_000232c7: jz near 0x2361a
pf_at 0x2baf
l_kernel_000232cd: sub esp,byte +0xc
pf_at 0x2bb2
l_kernel_000232d0: lea ecx,[ebp-0xc70]
pf_at 0x2bb8
l_kernel_000232d6: lea esi,[ebp-0x37d]
pf_at 0x2bbe
l_kernel_000232dc: mov edx,esi
pf_at 0x2bc0
l_kernel_000232de: push dword 0xf1
pf_at 0x2bc5
l_kernel_000232e3: call 0x2b1d0
pf_at 0x2bca
l_kernel_000232e8: jmp near 0x23635
pf_at 0x2bcf
l_kernel_000232ed: mov ecx,0x2e319
pf_at 0x2bd4
l_kernel_000232f2: jmp near 0x235d4
pf_at 0x2bd9
l_kernel_000232f7: push dword 0x2ca77
pf_at 0x2bde
l_kernel_000232fc: push dword 0x2cb77
pf_at 0x2be3
l_kernel_00023301: push dword 0xf1
pf_at 0x2be8
l_kernel_00023306: lea eax,[ebp-0x37d]
pf_at 0x2bee
l_kernel_0002330c: push eax
pf_at 0x2bef
l_kernel_0002330d: call 0x216bc
pf_at 0x2bf4
l_kernel_00023312: add esp,byte +0x10
pf_at 0x2bf7
l_kernel_00023315: xor eax,eax
pf_at 0x2bf9
l_kernel_00023317: inc eax
pf_at 0x2bfa
l_kernel_00023318: mov [ebp-0x50],ax
pf_at 0x2bfe
l_kernel_0002331c: and dword [ebp-0x4c],byte +0x0
pf_at 0x2c02
l_kernel_00023320: and dword [ebp-0x48],byte +0x0
pf_at 0x2c06
l_kernel_00023324: and dword [ebp-0x44],byte +0x0
pf_at 0x2c0a
l_kernel_00023328: and dword [ebp-0x40],byte +0x0
pf_at 0x2c0e
l_kernel_0002332c: mov [ebp-0x14c],ax
pf_at 0x2c15
l_kernel_00023333: and dword [ebp-0x148],byte +0x0
pf_at 0x2c1c
l_kernel_0002333a: and dword [ebp-0x144],byte +0x0
pf_at 0x2c23
l_kernel_00023341: and dword [ebp-0x140],byte +0x0
pf_at 0x2c2a
l_kernel_00023348: mov ebx,[dword 0x7041c]
pf_at 0x2c30
l_kernel_0002334e: and dword [ebp-0x13c],byte +0x0
pf_at 0x2c37
l_kernel_00023355: mov eax,[0x70420]
pf_at 0x2c3c
l_kernel_0002335a: and dword [ebp-0x138],byte +0x0
pf_at 0x2c43
l_kernel_00023361: and dword [ebp-0x134],byte +0x0
pf_at 0x2c4a
l_kernel_00023368: xor ecx,ecx
pf_at 0x2c4c
l_kernel_0002336a: mov [ebp-0x1c],ebx
pf_at 0x2c4f
l_kernel_0002336d: mov [ebp-0x2c],eax
pf_at 0x2c52
l_kernel_00023370: cmp ecx,eax
pf_at 0x2c54
l_kernel_00023372: jz near 0x236fc
pf_at 0x2c5a
l_kernel_00023378: and dword [ebp-0x18],byte +0x0
pf_at 0x2c5e
l_kernel_0002337c: test ebx,ebx
pf_at 0x2c60
l_kernel_0002337e: mov [ebp-0x14],ecx
pf_at 0x2c63
l_kernel_00023381: jz short 0x23392
pf_at 0x2c65
l_kernel_00023383: mov esi,[ebx+ecx*4]
pf_at 0x2c68
l_kernel_00023386: test esi,esi
pf_at 0x2c6a
l_kernel_00023388: mov eax,0x2ca9c
pf_at 0x2c6f
l_kernel_0002338d: cmovz esi,eax
pf_at 0x2c72
l_kernel_00023390: jmp short 0x23397
pf_at 0x2c74
l_kernel_00023392: mov esi,0x2ca9c
pf_at 0x2c79
l_kernel_00023397: sub esp,byte +0xc
pf_at 0x2c7c
l_kernel_0002339a: push esi
pf_at 0x2c7d
l_kernel_0002339b: call 0x20ccf
pf_at 0x2c82
l_kernel_000233a0: add esp,byte +0x10
pf_at 0x2c85
l_kernel_000233a3: mov ecx,esi
pf_at 0x2c87
l_kernel_000233a5: mov edx,eax
pf_at 0x2c89
l_kernel_000233a7: call 0x24f9e
pf_at 0x2c8e
l_kernel_000233ac: test eax,eax
pf_at 0x2c90
l_kernel_000233ae: jz near 0x234ee
pf_at 0x2c96
l_kernel_000233b4: mov esi,eax
pf_at 0x2c98
l_kernel_000233b6: xor ebx,ebx
pf_at 0x2c9a
l_kernel_000233b8: xor edx,edx
pf_at 0x2c9c
l_kernel_000233ba: mov dword [ebp-0x10],0x0
pf_at 0x2ca3
l_kernel_000233c1: movzx ecx,byte [eax]
pf_at 0x2ca6
l_kernel_000233c4: test ecx,ecx
pf_at 0x2ca8
l_kernel_000233c6: jz short 0x23418
pf_at 0x2caa
l_kernel_000233c8: test bl,0x1
pf_at 0x2cad
l_kernel_000233cb: jz short 0x233dd
pf_at 0x2caf
l_kernel_000233cd: mov bl,0x1
pf_at 0x2cb1
l_kernel_000233cf: test dl,0x1
pf_at 0x2cb4
l_kernel_000233d2: jnz short 0x23410
pf_at 0x2cb6
l_kernel_000233d4: cmp cl,0x5c
pf_at 0x2cb9
l_kernel_000233d7: jnz short 0x233fd
pf_at 0x2cbb
l_kernel_000233d9: mov dl,0x1
pf_at 0x2cbd
l_kernel_000233db: jmp short 0x23412
pf_at 0x2cbf
l_kernel_000233dd: mov bl,0x1
pf_at 0x2cc1
l_kernel_000233df: cmp ecx,byte +0x22
pf_at 0x2cc4
l_kernel_000233e2: jz short 0x233f8
pf_at 0x2cc6
l_kernel_000233e4: cmp ecx,byte +0x27
pf_at 0x2cc9
l_kernel_000233e7: jz short 0x233f8
pf_at 0x2ccb
l_kernel_000233e9: cmp ecx,byte +0x40
pf_at 0x2cce
l_kernel_000233ec: jnz short 0x233f4
pf_at 0x2cd0
l_kernel_000233ee: cmp byte [eax+0x1],0x40
pf_at 0x2cd4
l_kernel_000233f2: jz short 0x23415
pf_at 0x2cd6
l_kernel_000233f4: xor ebx,ebx
pf_at 0x2cd8
l_kernel_000233f6: jmp short 0x23412
pf_at 0x2cda
l_kernel_000233f8: mov [ebp-0x10],ecx
pf_at 0x2cdd
l_kernel_000233fb: jmp short 0x23412
pf_at 0x2cdf
l_kernel_000233fd: xor edi,edi
pf_at 0x2ce1
l_kernel_000233ff: mov edx,[ebp-0x10]
pf_at 0x2ce4
l_kernel_00023402: cmp cl,dl
pf_at 0x2ce6
l_kernel_00023404: setnz bl
pf_at 0x2ce9
l_kernel_00023407: movzx edx,dl
pf_at 0x2cec
l_kernel_0002340a: cmovz edx,edi
pf_at 0x2cef
l_kernel_0002340d: mov [ebp-0x10],edx
pf_at 0x2cf2
l_kernel_00023410: xor edx,edx
pf_at 0x2cf4
l_kernel_00023412: inc eax
pf_at 0x2cf5
l_kernel_00023413: jmp short 0x233c1
pf_at 0x2cf7
l_kernel_00023415: mov byte [eax],0x0
pf_at 0x2cfa
l_kernel_00023418: mov ecx,esi
pf_at 0x2cfc
l_kernel_0002341a: call 0x243a7
pf_at 0x2d01
l_kernel_0002341f: mov ecx,esi
pf_at 0x2d03
l_kernel_00023421: lea edx,[ebp-0x28]
pf_at 0x2d06
l_kernel_00023424: call 0x26135
pf_at 0x2d0b
l_kernel_00023429: test al,al
pf_at 0x2d0d
l_kernel_0002342b: jz near 0x234e2
pf_at 0x2d13
l_kernel_00023431: sub esp,byte +0xc
pf_at 0x2d16
l_kernel_00023434: lea ecx,[ebp-0x14c]
pf_at 0x2d1c
l_kernel_0002343a: mov edx,esi
pf_at 0x2d1e
l_kernel_0002343c: lea eax,[ebp-0x18]
pf_at 0x2d21
l_kernel_0002343f: push eax
pf_at 0x2d22
l_kernel_00023440: call 0x2c666
pf_at 0x2d27
l_kernel_00023445: add esp,byte +0x10
pf_at 0x2d2a
l_kernel_00023448: test al,al
pf_at 0x2d2c
l_kernel_0002344a: jz near 0x234da
pf_at 0x2d32
l_kernel_00023450: sub esp,byte +0x8
pf_at 0x2d35
l_kernel_00023453: lea ecx,[ebp-0x13c]
pf_at 0x2d3b
l_kernel_00023459: xor edx,edx
pf_at 0x2d3d
l_kernel_0002345b: push dword [ebp-0x28]
pf_at 0x2d40
l_kernel_0002345e: push dword [ebp-0x18]
pf_at 0x2d43
l_kernel_00023461: call 0x2c579
pf_at 0x2d48
l_kernel_00023466: add esp,byte +0x10
pf_at 0x2d4b
l_kernel_00023469: test al,al
pf_at 0x2d4d
l_kernel_0002346b: jz short 0x234da
pf_at 0x2d4f
l_kernel_0002346d: xor ebx,ebx
pf_at 0x2d51
l_kernel_0002346f: cmp ebx,[ebp-0x28]
pf_at 0x2d54
l_kernel_00023472: jnc short 0x234b7
pf_at 0x2d56
l_kernel_00023474: and dword [ebp-0x34],byte +0x0
pf_at 0x2d5a
l_kernel_00023478: mov eax,[ebp-0x20]
pf_at 0x2d5d
l_kernel_0002347b: mov edx,[eax+ebx*4]
pf_at 0x2d60
l_kernel_0002347e: sub esp,byte +0xc
pf_at 0x2d63
l_kernel_00023481: lea ecx,[ebp-0x14c]
pf_at 0x2d69
l_kernel_00023487: lea eax,[ebp-0x34]
pf_at 0x2d6c
l_kernel_0002348a: push eax
pf_at 0x2d6d
l_kernel_0002348b: call 0x2c666
pf_at 0x2d72
l_kernel_00023490: add esp,byte +0x10
pf_at 0x2d75
l_kernel_00023493: test al,al
pf_at 0x2d77
l_kernel_00023495: jz short 0x234da
pf_at 0x2d79
l_kernel_00023497: sub esp,byte +0x8
pf_at 0x2d7c
l_kernel_0002349a: lea ecx,[ebp-0x13c]
pf_at 0x2d82
l_kernel_000234a0: push byte +0x2
pf_at 0x2d84
l_kernel_000234a2: pop edx
pf_at 0x2d85
l_kernel_000234a3: push byte +0x0
pf_at 0x2d87
l_kernel_000234a5: push dword [ebp-0x34]
pf_at 0x2d8a
l_kernel_000234a8: call 0x2c579
pf_at 0x2d8f
l_kernel_000234ad: add esp,byte +0x10
pf_at 0x2d92
l_kernel_000234b0: test al,al
pf_at 0x2d94
l_kernel_000234b2: jz short 0x234da
pf_at 0x2d96
l_kernel_000234b4: inc ebx
pf_at 0x2d97
l_kernel_000234b5: jmp short 0x2346f
pf_at 0x2d99
l_kernel_000234b7: lea ecx,[ebp-0x28]
pf_at 0x2d9c
l_kernel_000234ba: call 0x26419
pf_at 0x2da1
l_kernel_000234bf: sub esp,byte +0xc
pf_at 0x2da4
l_kernel_000234c2: push esi
pf_at 0x2da5
l_kernel_000234c3: call 0x20aee
pf_at 0x2daa
l_kernel_000234c8: add esp,byte +0x10
pf_at 0x2dad
l_kernel_000234cb: mov ecx,[ebp-0x14]
pf_at 0x2db0
l_kernel_000234ce: inc ecx
pf_at 0x2db1
l_kernel_000234cf: mov ebx,[ebp-0x1c]
pf_at 0x2db4
l_kernel_000234d2: mov eax,[ebp-0x2c]
pf_at 0x2db7
l_kernel_000234d5: jmp near 0x23370
pf_at 0x2dbc
l_kernel_000234da: lea ecx,[ebp-0x28]
pf_at 0x2dbf
l_kernel_000234dd: call 0x26419
pf_at 0x2dc4
l_kernel_000234e2: sub esp,byte +0xc
pf_at 0x2dc7
l_kernel_000234e5: push esi
pf_at 0x2dc8
l_kernel_000234e6: call 0x20aee
pf_at 0x2dcd
l_kernel_000234eb: add esp,byte +0x10
pf_at 0x2dd0
l_kernel_000234ee: lea ecx,[ebp-0x14c]
pf_at 0x2dd6
l_kernel_000234f4: call 0x2c544
pf_at 0x2ddb
l_kernel_000234f9: mov ecx,0x2e352
pf_at 0x2de0
l_kernel_000234fe: call 0x2176e
pf_at 0x2de5
l_kernel_00023503: call 0x21cca
pf_at 0x2dea
l_kernel_00023508: lea edi,[ebp-0x46d]
pf_at 0x2df0
l_kernel_0002350e: mov byte [dword 0x3f0d8],0x0
pf_at 0x2df7
l_kernel_00023515: call 0x21cca
pf_at 0x2dfc
l_kernel_0002351a: jmp near 0x22990
pf_at 0x2e01
l_kernel_0002351f: sub esp,byte +0xc
pf_at 0x2e04
l_kernel_00023522: push esi
pf_at 0x2e05
l_kernel_00023523: call 0x20aee
pf_at 0x2e0a
l_kernel_00023528: add esp,byte +0x10
pf_at 0x2e0d
l_kernel_0002352b: mov ecx,0x2e228
pf_at 0x2e12
l_kernel_00023530: jmp near 0x22d5f
pf_at 0x2e17
l_kernel_00023535: mov ecx,esi
pf_at 0x2e19
l_kernel_00023537: mov edx,0x2e301
pf_at 0x2e1e
l_kernel_0002353c: call 0x26ebe
pf_at 0x2e23
l_kernel_00023541: test al,al
pf_at 0x2e25
l_kernel_00023543: jz near 0x235de
pf_at 0x2e2b
l_kernel_00023549: call 0x25519
pf_at 0x2e30
l_kernel_0002354e: jmp short 0x23503
pf_at 0x2e32
l_kernel_00023550: push dword 0x2ca6b
pf_at 0x2e37
l_kernel_00023555: push dword 0x2cb77
pf_at 0x2e3c
l_kernel_0002355a: push dword 0xf1
pf_at 0x2e41
l_kernel_0002355f: lea esi,[ebp-0x37d]
pf_at 0x2e47
l_kernel_00023565: push esi
pf_at 0x2e48
l_kernel_00023566: call 0x216bc
pf_at 0x2e4d
l_kernel_0002356b: add esp,byte +0x10
pf_at 0x2e50
l_kernel_0002356e: and dword [ebp-0x14c],byte +0x0
pf_at 0x2e57
l_kernel_00023575: and dword [ebp-0x50],byte +0x0
pf_at 0x2e5b
l_kernel_00023579: sub esp,byte +0xc
pf_at 0x2e5e
l_kernel_0002357c: mov ecx,esi
pf_at 0x2e60
l_kernel_0002357e: lea edx,[ebp-0x14c]
pf_at 0x2e66
l_kernel_00023584: push edi
pf_at 0x2e67
l_kernel_00023585: call 0x253f8
pf_at 0x2e6c
l_kernel_0002358a: add esp,byte +0x10
pf_at 0x2e6f
l_kernel_0002358d: test al,al
pf_at 0x2e71
l_kernel_0002358f: jz short 0x235cf
pf_at 0x2e73
l_kernel_00023591: mov edx,[ebp-0x50]
pf_at 0x2e76
l_kernel_00023594: cmp edx,byte +0x4
pf_at 0x2e79
l_kernel_00023597: jc short 0x235bc
pf_at 0x2e7b
l_kernel_00023599: sub esp,byte +0x4
pf_at 0x2e7e
l_kernel_0002359c: push byte +0x4
pf_at 0x2e80
l_kernel_0002359e: push dword 0x2e00b
pf_at 0x2e85
l_kernel_000235a3: push dword [ebp-0x14c]
pf_at 0x2e8b
l_kernel_000235a9: call 0x20ca0
pf_at 0x2e90
l_kernel_000235ae: add esp,byte +0x10
pf_at 0x2e93
l_kernel_000235b1: test eax,eax
pf_at 0x2e95
l_kernel_000235b3: jz near 0x236f2
pf_at 0x2e9b
l_kernel_000235b9: mov edx,[ebp-0x50]
pf_at 0x2e9e
l_kernel_000235bc: mov ecx,[ebp-0x14c]
pf_at 0x2ea4
l_kernel_000235c2: call 0x25440
pf_at 0x2ea9
l_kernel_000235c7: test al,al
pf_at 0x2eab
l_kernel_000235c9: jnz near 0x236b4
pf_at 0x2eb1
l_kernel_000235cf: mov ecx,0x2e367
pf_at 0x2eb6
l_kernel_000235d4: call 0x2176e
pf_at 0x2ebb
l_kernel_000235d9: jmp near 0x23508
pf_at 0x2ec0
l_kernel_000235de: mov ecx,esi
pf_at 0x2ec2
l_kernel_000235e0: mov edx,0x2e313
pf_at 0x2ec7
l_kernel_000235e5: call 0x26ebe
pf_at 0x2ecc
l_kernel_000235ea: test al,al
pf_at 0x2ece
l_kernel_000235ec: jz near 0x236ca
pf_at 0x2ed4
l_kernel_000235f2: test ebx,ebx
pf_at 0x2ed6
l_kernel_000235f4: jz near 0x2381e
pf_at 0x2edc
l_kernel_000235fa: sub esp,byte +0xc
pf_at 0x2edf
l_kernel_000235fd: lea ecx,[ebp-0xc70]
pf_at 0x2ee5
l_kernel_00023603: lea esi,[ebp-0x37d]
pf_at 0x2eeb
l_kernel_00023609: mov edx,esi
pf_at 0x2eed
l_kernel_0002360b: push dword 0xf1
pf_at 0x2ef2
l_kernel_00023610: call 0x2b1d0
pf_at 0x2ef7
l_kernel_00023615: jmp near 0x23839
pf_at 0x2efc
l_kernel_0002361a: push dword 0x2ca77
pf_at 0x2f01
l_kernel_0002361f: push dword 0x2cb77
pf_at 0x2f06
l_kernel_00023624: push dword 0xf1
pf_at 0x2f0b
l_kernel_00023629: lea esi,[ebp-0x37d]
pf_at 0x2f11
l_kernel_0002362f: push esi
pf_at 0x2f12
l_kernel_00023630: call 0x216bc
pf_at 0x2f17
l_kernel_00023635: add esp,byte +0x10
pf_at 0x2f1a
l_kernel_00023638: and dword [ebp-0x28],byte +0x0
pf_at 0x2f1e
l_kernel_0002363c: and dword [ebp-0x18],byte +0x0
pf_at 0x2f22
l_kernel_00023640: and dword [ebp-0x34],byte +0x0
pf_at 0x2f26
l_kernel_00023644: mov word [ebp-0x50],0x1
pf_at 0x2f2c
l_kernel_0002364a: and dword [ebp-0x4c],byte +0x0
pf_at 0x2f30
l_kernel_0002364e: and dword [ebp-0x48],byte +0x0
pf_at 0x2f34
l_kernel_00023652: and dword [ebp-0x44],byte +0x0
pf_at 0x2f38
l_kernel_00023656: and dword [ebp-0x40],byte +0x0
pf_at 0x2f3c
l_kernel_0002365a: and dword [ebp-0x3c],byte +0x0
pf_at 0x2f40
l_kernel_0002365e: and dword [ebp-0x38],byte +0x0
pf_at 0x2f44
l_kernel_00023662: sub esp,byte +0xc
pf_at 0x2f47
l_kernel_00023665: mov ecx,esi
pf_at 0x2f49
l_kernel_00023667: mov edx,edi
pf_at 0x2f4b
l_kernel_00023669: lea esi,[ebp-0x14c]
pf_at 0x2f51
l_kernel_0002366f: push esi
pf_at 0x2f52
l_kernel_00023670: call 0x2c208
pf_at 0x2f57
l_kernel_00023675: add esp,byte +0x10
pf_at 0x2f5a
l_kernel_00023678: test al,al
pf_at 0x2f5c
l_kernel_0002367a: jz short 0x236dc
pf_at 0x2f5e
l_kernel_0002367c: sub esp,byte +0x4
pf_at 0x2f61
l_kernel_0002367f: mov ecx,edi
pf_at 0x2f63
l_kernel_00023681: lea edx,[ebp-0x28]
pf_at 0x2f66
l_kernel_00023684: push esi
pf_at 0x2f67
l_kernel_00023685: lea eax,[ebp-0x34]
pf_at 0x2f6a
l_kernel_00023688: push eax
pf_at 0x2f6b
l_kernel_00023689: lea eax,[ebp-0x18]
pf_at 0x2f6e
l_kernel_0002368c: push eax
pf_at 0x2f6f
l_kernel_0002368d: call 0x2c38e
pf_at 0x2f74
l_kernel_00023692: add esp,byte +0x10
pf_at 0x2f77
l_kernel_00023695: test al,al
pf_at 0x2f79
l_kernel_00023697: jz short 0x236d5
pf_at 0x2f7b
l_kernel_00023699: mov ecx,[ebp-0x28]
pf_at 0x2f7e
l_kernel_0002369c: mov edx,[ebp-0x18]
pf_at 0x2f81
l_kernel_0002369f: sub esp,byte +0xc
pf_at 0x2f84
l_kernel_000236a2: push dword [ebp-0x34]
pf_at 0x2f87
l_kernel_000236a5: call 0x25638
pf_at 0x2f8c
l_kernel_000236aa: add esp,byte +0x10
pf_at 0x2f8f
l_kernel_000236ad: mov ecx,edi
pf_at 0x2f91
l_kernel_000236af: call 0x2c544
pf_at 0x2f96
l_kernel_000236b4: lea ecx,[ebp-0x37d]
pf_at 0x2f9c
l_kernel_000236ba: call 0x2c63b
pf_at 0x2fa1
l_kernel_000236bf: sub esp,byte +0x8
pf_at 0x2fa4
l_kernel_000236c2: push eax
pf_at 0x2fa5
l_kernel_000236c3: push dword 0x2e39f
pf_at 0x2faa
l_kernel_000236c8: jmp short 0x236e5
pf_at 0x2fac
l_kernel_000236ca: sub esp,byte +0x8
pf_at 0x2faf
l_kernel_000236cd: push esi
pf_at 0x2fb0
l_kernel_000236ce: push dword 0x2e3a9
pf_at 0x2fb5
l_kernel_000236d3: jmp short 0x236e5
pf_at 0x2fb7
l_kernel_000236d5: mov ecx,edi
pf_at 0x2fb9
l_kernel_000236d7: call 0x2c544
pf_at 0x2fbe
l_kernel_000236dc: sub esp,byte +0x8
pf_at 0x2fc1
l_kernel_000236df: push esi
pf_at 0x2fc2
l_kernel_000236e0: push dword 0x2dfe4
pf_at 0x2fc7
l_kernel_000236e5: call 0x21c41
pf_at 0x2fcc
l_kernel_000236ea: add esp,byte +0x10
pf_at 0x2fcf
l_kernel_000236ed: jmp near 0x23503
pf_at 0x2fd4
l_kernel_000236f2: mov ecx,0x2e37a
pf_at 0x2fd9
l_kernel_000236f7: jmp near 0x235d4
pf_at 0x2fde
l_kernel_000236fc: sub esp,byte +0x8
pf_at 0x2fe1
l_kernel_000236ff: lea ecx,[ebp-0x13c]
pf_at 0x2fe7
l_kernel_00023705: push byte +0x14
pf_at 0x2fe9
l_kernel_00023707: pop edx
pf_at 0x2fea
l_kernel_00023708: push byte +0x0
pf_at 0x2fec
l_kernel_0002370a: push byte +0x0
pf_at 0x2fee
l_kernel_0002370c: call 0x2c579
pf_at 0x2ff3
l_kernel_00023711: add esp,byte +0x10
pf_at 0x2ff6
l_kernel_00023714: test al,al
pf_at 0x2ff8
l_kernel_00023716: jz near 0x234ee
pf_at 0x2ffe
l_kernel_0002371c: push byte +0x7
pf_at 0x3000
l_kernel_0002371e: pop ecx
pf_at 0x3001
l_kernel_0002371f: lea edi,[ebp-0x50]
pf_at 0x3004
l_kernel_00023722: lea ebx,[ebp-0x14c]
pf_at 0x300a
l_kernel_00023728: mov esi,ebx
pf_at 0x300c
l_kernel_0002372a: rep movsd
pf_at 0x300e
l_kernel_0002372c: and dword [ebp-0x14c],byte +0x0
pf_at 0x3015
l_kernel_00023733: and dword [ebp-0x148],byte +0x0
pf_at 0x301c
l_kernel_0002373a: and dword [ebp-0x144],byte +0x0
pf_at 0x3023
l_kernel_00023741: sub esp,byte +0xc
pf_at 0x3026
l_kernel_00023744: mov ecx,ebx
pf_at 0x3028
l_kernel_00023746: mov edx,0x2e00b
pf_at 0x302d
l_kernel_0002374b: push byte +0x4
pf_at 0x302f
l_kernel_0002374d: call 0x2b6be
pf_at 0x3034
l_kernel_00023752: add esp,byte +0x10
pf_at 0x3037
l_kernel_00023755: test al,al
pf_at 0x3039
l_kernel_00023757: jz near 0x237ea
pf_at 0x303f
l_kernel_0002375d: movzx eax,word [ebp-0x50]
pf_at 0x3043
l_kernel_00023761: mov [ebp-0x28],ax
pf_at 0x3047
l_kernel_00023765: sub esp,byte +0xc
pf_at 0x304a
l_kernel_00023768: mov ecx,ebx
pf_at 0x304c
l_kernel_0002376a: lea edx,[ebp-0x28]
pf_at 0x304f
l_kernel_0002376d: push byte +0x2
pf_at 0x3051
l_kernel_0002376f: call 0x2b6be
pf_at 0x3056
l_kernel_00023774: add esp,byte +0x10
pf_at 0x3059
l_kernel_00023777: test al,al
pf_at 0x305b
l_kernel_00023779: jz short 0x237ea
pf_at 0x305d
l_kernel_0002377b: mov edx,[ebp-0x4c]
pf_at 0x3060
l_kernel_0002377e: mov ecx,ebx
pf_at 0x3062
l_kernel_00023780: call 0x2c709
pf_at 0x3067
l_kernel_00023785: test al,al
pf_at 0x3069
l_kernel_00023787: jz short 0x237ea
pf_at 0x306b
l_kernel_00023789: mov edx,[ebp-0x40]
pf_at 0x306e
l_kernel_0002378c: mov ecx,ebx
pf_at 0x3070
l_kernel_0002378e: call 0x2c709
pf_at 0x3075
l_kernel_00023793: test al,al
pf_at 0x3077
l_kernel_00023795: jz short 0x237ea
pf_at 0x3079
l_kernel_00023797: xor ebx,ebx
pf_at 0x307b
l_kernel_00023799: cmp ebx,[ebp-0x4c]
pf_at 0x307e
l_kernel_0002379c: jnc near 0x23848
pf_at 0x3084
l_kernel_000237a2: mov eax,[ebp-0x44]
pf_at 0x3087
l_kernel_000237a5: mov esi,[eax+ebx*4]
pf_at 0x308a
l_kernel_000237a8: test esi,esi
pf_at 0x308c
l_kernel_000237aa: mov eax,0x2ca9c
pf_at 0x3091
l_kernel_000237af: cmovz esi,eax
pf_at 0x3094
l_kernel_000237b2: sub esp,byte +0xc
pf_at 0x3097
l_kernel_000237b5: push esi
pf_at 0x3098
l_kernel_000237b6: call 0x20ccf
pf_at 0x309d
l_kernel_000237bb: add esp,byte +0x10
pf_at 0x30a0
l_kernel_000237be: mov edi,eax
pf_at 0x30a2
l_kernel_000237c0: lea ecx,[ebp-0x14c]
pf_at 0x30a8
l_kernel_000237c6: mov edx,eax
pf_at 0x30aa
l_kernel_000237c8: call 0x2c709
pf_at 0x30af
l_kernel_000237cd: test al,al
pf_at 0x30b1
l_kernel_000237cf: jz short 0x237ea
pf_at 0x30b3
l_kernel_000237d1: sub esp,byte +0xc
pf_at 0x30b6
l_kernel_000237d4: lea ecx,[ebp-0x14c]
pf_at 0x30bc
l_kernel_000237da: mov edx,esi
pf_at 0x30be
l_kernel_000237dc: push edi
pf_at 0x30bf
l_kernel_000237dd: call 0x2b6be
pf_at 0x30c4
l_kernel_000237e2: add esp,byte +0x10
pf_at 0x30c7
l_kernel_000237e5: inc ebx
pf_at 0x30c8
l_kernel_000237e6: test al,al
pf_at 0x30ca
l_kernel_000237e8: jnz short 0x23799
pf_at 0x30cc
l_kernel_000237ea: sub esp,byte +0xc
pf_at 0x30cf
l_kernel_000237ed: push dword [ebp-0x144]
pf_at 0x30d5
l_kernel_000237f3: call 0x20aee
pf_at 0x30da
l_kernel_000237f8: add esp,byte +0x10
pf_at 0x30dd
l_kernel_000237fb: lea ecx,[ebp-0x50]
pf_at 0x30e0
l_kernel_000237fe: jmp near 0x234f4
pf_at 0x30e5
l_kernel_00023803: sub esp,byte +0x4
pf_at 0x30e8
l_kernel_00023806: push dword 0x2cceb
pf_at 0x30ed
l_kernel_0002380b: push byte +0x0
pf_at 0x30ef
l_kernel_0002380d: lea eax,[ebp-0x28]
pf_at 0x30f2
l_kernel_00023810: push eax
pf_at 0x30f3
l_kernel_00023811: call 0x2609c
pf_at 0x30f8
l_kernel_00023816: add esp,byte +0x10
pf_at 0x30fb
l_kernel_00023819: jmp near 0x23508
pf_at 0x3100
l_kernel_0002381e: push dword 0x2ca77
pf_at 0x3105
l_kernel_00023823: push dword 0x2cb77
pf_at 0x310a
l_kernel_00023828: push dword 0xf1
pf_at 0x310f
l_kernel_0002382d: lea esi,[ebp-0x37d]
pf_at 0x3115
l_kernel_00023833: push esi
pf_at 0x3116
l_kernel_00023834: call 0x216bc
pf_at 0x311b
l_kernel_00023839: add esp,byte +0x10
pf_at 0x311e
l_kernel_0002383c: mov ecx,esi
pf_at 0x3120
l_kernel_0002383e: call 0x2552e
pf_at 0x3125
l_kernel_00023843: jmp near 0x23503
pf_at 0x312a
l_kernel_00023848: xor esi,esi
pf_at 0x312c
l_kernel_0002384a: push byte +0x8
pf_at 0x312e
l_kernel_0002384c: pop edi
pf_at 0x312f
l_kernel_0002384d: lea ecx,[ebp-0x14c]
pf_at 0x3135
l_kernel_00023853: cmp esi,[ebp-0x40]
pf_at 0x3138
l_kernel_00023856: jnc near 0x239ed
pf_at 0x313e
l_kernel_0002385c: mov eax,[ebp-0x38]
pf_at 0x3141
l_kernel_0002385f: mov dl,[eax+edi-0x8]
pf_at 0x3145
l_kernel_00023863: mov [ebp-0x28],dl
pf_at 0x3148
l_kernel_00023866: and word [ebp-0x27],byte +0x0
pf_at 0x314d
l_kernel_0002386b: mov byte [ebp-0x25],0x0
pf_at 0x3151
l_kernel_0002386f: mov dl,[eax+edi-0x4]
pf_at 0x3155
l_kernel_00023873: mov [ebp-0x24],dl
pf_at 0x3158
l_kernel_00023876: mov dl,[eax+edi-0x3]
pf_at 0x315c
l_kernel_0002387a: mov [ebp-0x23],dl
pf_at 0x315f
l_kernel_0002387d: mov dl,[eax+edi-0x2]
pf_at 0x3163
l_kernel_00023881: mov [ebp-0x22],dl
pf_at 0x3166
l_kernel_00023884: mov dl,[eax+edi-0x1]
pf_at 0x316a
l_kernel_00023888: mov [ebp-0x21],dl
pf_at 0x316d
l_kernel_0002388b: mov dl,[eax+edi]
pf_at 0x3170
l_kernel_0002388e: mov [ebp-0x20],dl
pf_at 0x3173
l_kernel_00023891: mov dl,[eax+edi+0x1]
pf_at 0x3177
l_kernel_00023895: mov [ebp-0x1f],dl
pf_at 0x317a
l_kernel_00023898: mov dl,[eax+edi+0x2]
pf_at 0x317e
l_kernel_0002389c: mov [ebp-0x1e],dl
pf_at 0x3181
l_kernel_0002389f: mov al,[eax+edi+0x3]
pf_at 0x3185
l_kernel_000238a3: mov [ebp-0x1d],al
pf_at 0x3188
l_kernel_000238a6: sub esp,byte +0xc
pf_at 0x318b
l_kernel_000238a9: lea edx,[ebp-0x28]
pf_at 0x318e
l_kernel_000238ac: push byte +0xc
pf_at 0x3190
l_kernel_000238ae: call 0x2b6be
pf_at 0x3195
l_kernel_000238b3: add esp,byte +0x10
pf_at 0x3198
l_kernel_000238b6: test al,al
pf_at 0x319a
l_kernel_000238b8: jz near 0x237ea
pf_at 0x31a0
l_kernel_000238be: inc esi
pf_at 0x31a1
l_kernel_000238bf: add edi,byte +0xc
pf_at 0x31a4
l_kernel_000238c2: jmp short 0x2384d
pf_at 0x31a6
l_kernel_000238c4: mov byte [ebp-0x2d],0x0
pf_at 0x31aa
l_kernel_000238c8: sub esp,byte +0xc
pf_at 0x31ad
l_kernel_000238cb: lea ecx,[ebp-0x28]
pf_at 0x31b0
l_kernel_000238ce: lea edx,[ebp-0xac]
pf_at 0x31b6
l_kernel_000238d4: lea eax,[ebp-0x2d]
pf_at 0x31b9
l_kernel_000238d7: push eax
pf_at 0x31ba
l_kernel_000238d8: call 0x266b0
pf_at 0x31bf
l_kernel_000238dd: add esp,byte +0x10
pf_at 0x31c2
l_kernel_000238e0: test al,al
pf_at 0x31c4
l_kernel_000238e2: jz near 0x22d4a
pf_at 0x31ca
l_kernel_000238e8: cmp byte [ebp-0x2d],0x1
pf_at 0x31ce
l_kernel_000238ec: jz near 0x22d4a
pf_at 0x31d4
l_kernel_000238f2: and dword [ebp-0x14c],byte +0x0
pf_at 0x31db
l_kernel_000238f9: and dword [ebp-0x148],byte +0x0
pf_at 0x31e2
l_kernel_00023900: and dword [ebp-0x144],byte +0x0
pf_at 0x31e9
l_kernel_00023907: and dword [ebp-0x140],byte +0x0
pf_at 0x31f0
l_kernel_0002390e: and dword [ebp-0x13c],byte +0x0
pf_at 0x31f7
l_kernel_00023915: and dword [ebp-0x138],byte +0x0
pf_at 0x31fe
l_kernel_0002391c: and dword [ebp-0x134],byte +0x0
pf_at 0x3205
l_kernel_00023923: and dword [ebp-0x130],byte +0x0
pf_at 0x320c
l_kernel_0002392a: lea ecx,[ebp-0x50]
pf_at 0x320f
l_kernel_0002392d: call 0x28ab1
pf_at 0x3214
l_kernel_00023932: and dword [ebp-0x50],byte +0x0
pf_at 0x3218
l_kernel_00023936: and dword [ebp-0x4c],byte +0x0
pf_at 0x321c
l_kernel_0002393a: and dword [ebp-0x48],byte +0x0
pf_at 0x3220
l_kernel_0002393e: cmp dword [ebp-0xac],byte +0x3
pf_at 0x3227
l_kernel_00023945: jc short 0x23997
pf_at 0x3229
l_kernel_00023947: mov esi,[ebp-0xa4]
pf_at 0x322f
l_kernel_0002394d: mov ecx,[esi]
pf_at 0x3231
l_kernel_0002394f: call 0x28877
pf_at 0x3236
l_kernel_00023954: test al,al
pf_at 0x3238
l_kernel_00023956: jz short 0x23997
pf_at 0x323a
l_kernel_00023958: sub esp,byte +0x8
pf_at 0x323d
l_kernel_0002395b: push dword 0x2ced0
pf_at 0x3242
l_kernel_00023960: push dword [esi+0x4]
pf_at 0x3245
l_kernel_00023963: call 0x20cea
pf_at 0x324a
l_kernel_00023968: add esp,byte +0x10
pf_at 0x324d
l_kernel_0002396b: test eax,eax
pf_at 0x324f
l_kernel_0002396d: jnz short 0x23997
pf_at 0x3251
l_kernel_0002396f: mov eax,[ebp-0xac]
pf_at 0x3257
l_kernel_00023975: mov ecx,[ebp-0xa4]
pf_at 0x325d
l_kernel_0002397b: sub esp,byte +0x8
pf_at 0x3260
l_kernel_0002397e: push dword 0x2ced2
pf_at 0x3265
l_kernel_00023983: push dword [ecx+eax*4-0x4]
pf_at 0x3269
l_kernel_00023987: call 0x20cea
pf_at 0x326e
l_kernel_0002398c: add esp,byte +0x10
pf_at 0x3271
l_kernel_0002398f: test eax,eax
pf_at 0x3273
l_kernel_00023991: jz near 0x23a38
pf_at 0x3279
l_kernel_00023997: sub esp,byte +0xc
pf_at 0x327c
l_kernel_0002399a: lea ecx,[ebp-0x28]
pf_at 0x327f
l_kernel_0002399d: lea edx,[ebp-0xac]
pf_at 0x3285
l_kernel_000239a3: lea eax,[ebp-0x14c]
pf_at 0x328b
l_kernel_000239a9: push eax
pf_at 0x328c
l_kernel_000239aa: call 0x26d92
pf_at 0x3291
l_kernel_000239af: add esp,byte +0x10
pf_at 0x3294
l_kernel_000239b2: test al,al
pf_at 0x3296
l_kernel_000239b4: jz short 0x239ca
pf_at 0x3298
l_kernel_000239b6: cmp dword [ebp-0x14c],byte +0x0
pf_at 0x329f
l_kernel_000239bd: jz short 0x239ca
pf_at 0x32a1
l_kernel_000239bf: lea ecx,[ebp-0x14c]
pf_at 0x32a7
l_kernel_000239c5: call 0x2c727
pf_at 0x32ac
l_kernel_000239ca: lea ecx,[ebp-0x50]
pf_at 0x32af
l_kernel_000239cd: call 0x28ab1
pf_at 0x32b4
l_kernel_000239d2: lea ecx,[ebp-0xac]
pf_at 0x32ba
l_kernel_000239d8: call 0x26419
pf_at 0x32bf
l_kernel_000239dd: lea ecx,[ebp-0x14c]
pf_at 0x32c5
l_kernel_000239e3: call 0x24daf
pf_at 0x32ca
l_kernel_000239e8: jmp near 0x23508
pf_at 0x32cf
l_kernel_000239ed: mov edx,[ebp-0x144]
pf_at 0x32d5
l_kernel_000239f3: sub esp,byte +0xc
pf_at 0x32d8
l_kernel_000239f6: lea ecx,[ebp-0x37d]
pf_at 0x32de
l_kernel_000239fc: push dword [ebp-0x14c]
pf_at 0x32e4
l_kernel_00023a02: call 0x2be36
pf_at 0x32e9
l_kernel_00023a07: add esp,byte +0x10
pf_at 0x32ec
l_kernel_00023a0a: mov ebx,eax
pf_at 0x32ee
l_kernel_00023a0c: sub esp,byte +0xc
pf_at 0x32f1
l_kernel_00023a0f: push dword [ebp-0x144]
pf_at 0x32f7
l_kernel_00023a15: call 0x20aee
pf_at 0x32fc
l_kernel_00023a1a: add esp,byte +0x10
pf_at 0x32ff
l_kernel_00023a1d: lea ecx,[ebp-0x50]
pf_at 0x3302
l_kernel_00023a20: call 0x2c544
pf_at 0x3307
l_kernel_00023a25: test bl,bl
pf_at 0x3309
l_kernel_00023a27: jz near 0x234f9
pf_at 0x330f
l_kernel_00023a2d: lea ecx,[ebp-0x37d]
pf_at 0x3315
l_kernel_00023a33: jmp near 0x2328a
pf_at 0x331a
l_kernel_00023a38: mov dword [ebp-0x10],0x0
pf_at 0x3321
l_kernel_00023a3f: mov dword [ebp-0x14],0x0
pf_at 0x3328
l_kernel_00023a46: xor edi,edi
pf_at 0x332a
l_kernel_00023a48: inc edi
pf_at 0x332b
l_kernel_00023a49: xor esi,esi
pf_at 0x332d
l_kernel_00023a4b: cmp edi,[ebp-0xac]
pf_at 0x3333
l_kernel_00023a51: jnc near 0x23b3f
pf_at 0x3339
l_kernel_00023a57: mov eax,[ebp-0xa4]
pf_at 0x333f
l_kernel_00023a5d: mov ebx,[eax+edi*4]
pf_at 0x3342
l_kernel_00023a60: sub esp,byte +0x8
pf_at 0x3345
l_kernel_00023a63: push dword 0x2ced0
pf_at 0x334a
l_kernel_00023a68: push ebx
pf_at 0x334b
l_kernel_00023a69: call 0x20cea
pf_at 0x3350
l_kernel_00023a6e: add esp,byte +0x10
pf_at 0x3353
l_kernel_00023a71: test eax,eax
pf_at 0x3355
l_kernel_00023a73: jz short 0x23aed
pf_at 0x3357
l_kernel_00023a75: sub esp,byte +0x8
pf_at 0x335a
l_kernel_00023a78: push dword 0x2ced2
pf_at 0x335f
l_kernel_00023a7d: push ebx
pf_at 0x3360
l_kernel_00023a7e: call 0x20cea
pf_at 0x3365
l_kernel_00023a83: add esp,byte +0x10
pf_at 0x3368
l_kernel_00023a86: test eax,eax
pf_at 0x336a
l_kernel_00023a88: jz short 0x23af0
pf_at 0x336c
l_kernel_00023a8a: sub esp,byte +0x8
pf_at 0x336f
l_kernel_00023a8d: push dword 0x2cee1
pf_at 0x3374
l_kernel_00023a92: push ebx
pf_at 0x3375
l_kernel_00023a93: call 0x20cea
pf_at 0x337a
l_kernel_00023a98: add esp,byte +0x10
pf_at 0x337d
l_kernel_00023a9b: test eax,eax
pf_at 0x337f
l_kernel_00023a9d: jz near 0x23b26
pf_at 0x3385
l_kernel_00023aa3: sub esp,byte +0x8
pf_at 0x3388
l_kernel_00023aa6: push dword 0x2cf06
pf_at 0x338d
l_kernel_00023aab: push ebx
pf_at 0x338e
l_kernel_00023aac: call 0x20cea
pf_at 0x3393
l_kernel_00023ab1: add esp,byte +0x10
pf_at 0x3396
l_kernel_00023ab4: test eax,eax
pf_at 0x3398
l_kernel_00023ab6: jz short 0x23b2b
pf_at 0x339a
l_kernel_00023ab8: sub esp,byte +0x8
pf_at 0x339d
l_kernel_00023abb: push dword 0x2cf1e
pf_at 0x33a2
l_kernel_00023ac0: push ebx
pf_at 0x33a3
l_kernel_00023ac1: call 0x20cea
pf_at 0x33a8
l_kernel_00023ac6: add esp,byte +0x10
pf_at 0x33ab
l_kernel_00023ac9: test eax,eax
pf_at 0x33ad
l_kernel_00023acb: jz short 0x23b36
pf_at 0x33af
l_kernel_00023acd: sub esp,byte +0x8
pf_at 0x33b2
l_kernel_00023ad0: push dword 0x2cf43
pf_at 0x33b7
l_kernel_00023ad5: push ebx
pf_at 0x33b8
l_kernel_00023ad6: call 0x20cea
pf_at 0x33bd
l_kernel_00023adb: add esp,byte +0x10
pf_at 0x33c0
l_kernel_00023ade: test eax,eax
pf_at 0x33c2
l_kernel_00023ae0: jnz short 0x23b39
pf_at 0x33c4
l_kernel_00023ae2: sub dword [ebp-0x14],byte +0x1
pf_at 0x33c8
l_kernel_00023ae6: jnc short 0x23b39
pf_at 0x33ca
l_kernel_00023ae8: jmp near 0x23997
pf_at 0x33cf
l_kernel_00023aed: inc esi
pf_at 0x33d0
l_kernel_00023aee: jmp short 0x23b39
pf_at 0x33d2
l_kernel_00023af0: test esi,esi
pf_at 0x33d4
l_kernel_00023af2: jz near 0x23997
pf_at 0x33da
l_kernel_00023af8: dec esi
pf_at 0x33db
l_kernel_00023af9: mov eax,esi
pf_at 0x33dd
l_kernel_00023afb: or eax,[ebp-0x10]
pf_at 0x33e0
l_kernel_00023afe: or eax,[ebp-0x14]
pf_at 0x33e3
l_kernel_00023b01: jnz short 0x23b39
pf_at 0x33e5
l_kernel_00023b03: lea eax,[edi+0x1]
pf_at 0x33e8
l_kernel_00023b06: mov dword [ebp-0x10],0x0
pf_at 0x33ef
l_kernel_00023b0d: mov dword [ebp-0x14],0x0
pf_at 0x33f6
l_kernel_00023b14: mov esi,0x0
pf_at 0x33fb
l_kernel_00023b19: cmp eax,[ebp-0xac]
pf_at 0x3401
l_kernel_00023b1f: jz short 0x23b39
pf_at 0x3403
l_kernel_00023b21: jmp near 0x23997
pf_at 0x3408
l_kernel_00023b26: inc dword [ebp-0x10]
pf_at 0x340b
l_kernel_00023b29: jmp short 0x23b39
pf_at 0x340d
l_kernel_00023b2b: sub dword [ebp-0x10],byte +0x1
pf_at 0x3411
l_kernel_00023b2f: jnc short 0x23b39
pf_at 0x3413
l_kernel_00023b31: jmp near 0x23997
pf_at 0x3418
l_kernel_00023b36: inc dword [ebp-0x14]
pf_at 0x341b
l_kernel_00023b39: inc edi
pf_at 0x341c
l_kernel_00023b3a: jmp near 0x23a4b
pf_at 0x3421
l_kernel_00023b3f: or esi,[ebp-0x10]
pf_at 0x3424
l_kernel_00023b42: or esi,[ebp-0x14]
pf_at 0x3427
l_kernel_00023b45: jnz near 0x23997
pf_at 0x342d
l_kernel_00023b4b: mov eax,[ebp-0xa4]
pf_at 0x3433
l_kernel_00023b51: push dword [eax]
pf_at 0x3435
l_kernel_00023b53: push dword 0x2cb77
pf_at 0x343a
l_kernel_00023b58: push byte +0x40
pf_at 0x343c
l_kernel_00023b5a: lea eax,[ebp-0x37d]
pf_at 0x3442
l_kernel_00023b60: push eax
pf_at 0x3443
l_kernel_00023b61: call 0x216bc
pf_at 0x3448
l_kernel_00023b66: add esp,byte +0x10
pf_at 0x344b
l_kernel_00023b69: mov eax,[ebp-0xac]
pf_at 0x3451
l_kernel_00023b6f: cmp eax,byte +0x4
pf_at 0x3454
l_kernel_00023b72: jc near 0x23ddb
pf_at 0x345a
l_kernel_00023b78: mov dword [ebp-0x10],0x0
pf_at 0x3461
l_kernel_00023b7f: push byte +0x2
pf_at 0x3463
l_kernel_00023b81: pop ebx
pf_at 0x3464
l_kernel_00023b82: mov [ebp-0x2c],ebx
pf_at 0x3467
l_kernel_00023b85: mov dword [ebp-0x14],0x0
pf_at 0x346e
l_kernel_00023b8c: mov dword [ebp-0x1c],0x0
pf_at 0x3475
l_kernel_00023b93: lea ecx,[ebx+0x1]
pf_at 0x3478
l_kernel_00023b96: cmp ecx,eax
pf_at 0x347a
l_kernel_00023b98: jnc near 0x23d42
pf_at 0x3480
l_kernel_00023b9e: mov edi,ebx
pf_at 0x3482
l_kernel_00023ba0: mov ebx,ecx
pf_at 0x3484
l_kernel_00023ba2: mov eax,[ebp-0xa4]
pf_at 0x348a
l_kernel_00023ba8: mov esi,[eax+edi*4]
pf_at 0x348d
l_kernel_00023bab: sub esp,byte +0x8
pf_at 0x3490
l_kernel_00023bae: push dword 0x2ced0
pf_at 0x3495
l_kernel_00023bb3: push esi
pf_at 0x3496
l_kernel_00023bb4: call 0x20cea
pf_at 0x349b
l_kernel_00023bb9: add esp,byte +0x10
pf_at 0x349e
l_kernel_00023bbc: test eax,eax
pf_at 0x34a0
l_kernel_00023bbe: jz near 0x23cfd
pf_at 0x34a6
l_kernel_00023bc4: sub esp,byte +0x8
pf_at 0x34a9
l_kernel_00023bc7: push dword 0x2ced2
pf_at 0x34ae
l_kernel_00023bcc: push esi
pf_at 0x34af
l_kernel_00023bcd: call 0x20cea
pf_at 0x34b4
l_kernel_00023bd2: add esp,byte +0x10
pf_at 0x34b7
l_kernel_00023bd5: test eax,eax
pf_at 0x34b9
l_kernel_00023bd7: jz near 0x23d02
pf_at 0x34bf
l_kernel_00023bdd: sub esp,byte +0x8
pf_at 0x34c2
l_kernel_00023be0: push dword 0x2cee1
pf_at 0x34c7
l_kernel_00023be5: push esi
pf_at 0x34c8
l_kernel_00023be6: call 0x20cea
pf_at 0x34cd
l_kernel_00023beb: add esp,byte +0x10
pf_at 0x34d0
l_kernel_00023bee: test eax,eax
pf_at 0x34d2
l_kernel_00023bf0: jz near 0x23d11
pf_at 0x34d8
l_kernel_00023bf6: sub esp,byte +0x8
pf_at 0x34db
l_kernel_00023bf9: push dword 0x2cf06
pf_at 0x34e0
l_kernel_00023bfe: push esi
pf_at 0x34e1
l_kernel_00023bff: call 0x20cea
pf_at 0x34e6
l_kernel_00023c04: add esp,byte +0x10
pf_at 0x34e9
l_kernel_00023c07: test eax,eax
pf_at 0x34eb
l_kernel_00023c09: jz near 0x23d16
pf_at 0x34f1
l_kernel_00023c0f: sub esp,byte +0x8
pf_at 0x34f4
l_kernel_00023c12: push dword 0x2cf1e
pf_at 0x34f9
l_kernel_00023c17: push esi
pf_at 0x34fa
l_kernel_00023c18: call 0x20cea
pf_at 0x34ff
l_kernel_00023c1d: add esp,byte +0x10
pf_at 0x3502
l_kernel_00023c20: test eax,eax
pf_at 0x3504
l_kernel_00023c22: jz near 0x23d25
pf_at 0x350a
l_kernel_00023c28: sub esp,byte +0x8
pf_at 0x350d
l_kernel_00023c2b: push dword 0x2cf43
pf_at 0x3512
l_kernel_00023c30: push esi
pf_at 0x3513
l_kernel_00023c31: call 0x20cea
pf_at 0x3518
l_kernel_00023c36: add esp,byte +0x10
pf_at 0x351b
l_kernel_00023c39: test eax,eax
pf_at 0x351d
l_kernel_00023c3b: jz near 0x23d2a
pf_at 0x3523
l_kernel_00023c41: sub esp,byte +0x8
pf_at 0x3526
l_kernel_00023c44: push dword 0x2cf08
pf_at 0x352b
l_kernel_00023c49: push esi
pf_at 0x352c
l_kernel_00023c4a: call 0x20cea
pf_at 0x3531
l_kernel_00023c4f: add esp,byte +0x10
pf_at 0x3534
l_kernel_00023c52: mov ecx,[ebp-0x10]
pf_at 0x3537
l_kernel_00023c55: or ecx,[ebp-0x14]
pf_at 0x353a
l_kernel_00023c58: or ecx,eax
pf_at 0x353c
l_kernel_00023c5a: or ecx,[ebp-0x1c]
pf_at 0x353f
l_kernel_00023c5d: jnz near 0x23d37
pf_at 0x3545
l_kernel_00023c63: and dword [ebp-0x28c],byte +0x0
pf_at 0x354c
l_kernel_00023c6a: and dword [ebp-0x288],byte +0x0
pf_at 0x3553
l_kernel_00023c71: and dword [ebp-0x284],byte +0x0
pf_at 0x355a
l_kernel_00023c78: and dword [ebp-0x280],byte +0x0
pf_at 0x3561
l_kernel_00023c7f: and dword [ebp-0x27c],byte +0x0
pf_at 0x3568
l_kernel_00023c86: and dword [ebp-0x278],byte +0x0
pf_at 0x356f
l_kernel_00023c8d: and dword [ebp-0x274],byte +0x0
pf_at 0x3576
l_kernel_00023c94: and dword [ebp-0x270],byte +0x0
pf_at 0x357d
l_kernel_00023c9b: sub esp,byte +0x4
pf_at 0x3580
l_kernel_00023c9e: lea ecx,[ebp-0x28]
pf_at 0x3583
l_kernel_00023ca1: lea edx,[ebp-0xac]
pf_at 0x3589
l_kernel_00023ca7: lea eax,[ebp-0x28c]
pf_at 0x358f
l_kernel_00023cad: push eax
pf_at 0x3590
l_kernel_00023cae: push edi
pf_at 0x3591
l_kernel_00023caf: push dword [ebp-0x2c]
pf_at 0x3594
l_kernel_00023cb2: call 0x2c778
pf_at 0x3599
l_kernel_00023cb7: add esp,byte +0x10
pf_at 0x359c
l_kernel_00023cba: test al,al
pf_at 0x359e
l_kernel_00023cbc: jz near 0x23f5b
pf_at 0x35a4
l_kernel_00023cc2: lea ecx,[ebp-0x50]
pf_at 0x35a7
l_kernel_00023cc5: lea edx,[ebp-0x28c]
pf_at 0x35ad
l_kernel_00023ccb: call 0x28af3
pf_at 0x35b2
l_kernel_00023cd0: test al,al
pf_at 0x35b4
l_kernel_00023cd2: jz near 0x23f5b
pf_at 0x35ba
l_kernel_00023cd8: lea ecx,[ebp-0x28c]
pf_at 0x35c0
l_kernel_00023cde: call 0x24daf
pf_at 0x35c5
l_kernel_00023ce3: mov dword [ebp-0x10],0x0
pf_at 0x35cc
l_kernel_00023cea: mov [ebp-0x2c],ebx
pf_at 0x35cf
l_kernel_00023ced: mov dword [ebp-0x14],0x0
pf_at 0x35d6
l_kernel_00023cf4: mov dword [ebp-0x1c],0x0
pf_at 0x35dd
l_kernel_00023cfb: jmp short 0x23d37
pf_at 0x35df
l_kernel_00023cfd: inc dword [ebp-0x10]
pf_at 0x35e2
l_kernel_00023d00: jmp short 0x23d37
pf_at 0x35e4
l_kernel_00023d02: cmp dword [ebp-0x10],byte +0x0
pf_at 0x35e8
l_kernel_00023d06: jz near 0x23f73
pf_at 0x35ee
l_kernel_00023d0c: dec dword [ebp-0x10]
pf_at 0x35f1
l_kernel_00023d0f: jmp short 0x23d37
pf_at 0x35f3
l_kernel_00023d11: inc dword [ebp-0x14]
pf_at 0x35f6
l_kernel_00023d14: jmp short 0x23d37
pf_at 0x35f8
l_kernel_00023d16: cmp dword [ebp-0x14],byte +0x0
pf_at 0x35fc
l_kernel_00023d1a: jz near 0x23f88
pf_at 0x3602
l_kernel_00023d20: dec dword [ebp-0x14]
pf_at 0x3605
l_kernel_00023d23: jmp short 0x23d37
pf_at 0x3607
l_kernel_00023d25: inc dword [ebp-0x1c]
pf_at 0x360a
l_kernel_00023d28: jmp short 0x23d37
pf_at 0x360c
l_kernel_00023d2a: cmp dword [ebp-0x1c],byte +0x0
pf_at 0x3610
l_kernel_00023d2e: jz near 0x241c4
pf_at 0x3616
l_kernel_00023d34: dec dword [ebp-0x1c]
pf_at 0x3619
l_kernel_00023d37: mov eax,[ebp-0xac]
pf_at 0x361f
l_kernel_00023d3d: jmp near 0x23b93
pf_at 0x3624
l_kernel_00023d42: mov ecx,[ebp-0x10]
pf_at 0x3627
l_kernel_00023d45: or ecx,[ebp-0x14]
pf_at 0x362a
l_kernel_00023d48: or ecx,[ebp-0x1c]
pf_at 0x362d
l_kernel_00023d4b: jnz near 0x23ec2
pf_at 0x3633
l_kernel_00023d51: dec eax
pf_at 0x3634
l_kernel_00023d52: cmp [ebp-0x2c],eax
pf_at 0x3637
l_kernel_00023d55: jnc near 0x23ec2
pf_at 0x363d
l_kernel_00023d5b: and dword [ebp-0x28c],byte +0x0
pf_at 0x3644
l_kernel_00023d62: and dword [ebp-0x288],byte +0x0
pf_at 0x364b
l_kernel_00023d69: and dword [ebp-0x284],byte +0x0
pf_at 0x3652
l_kernel_00023d70: and dword [ebp-0x280],byte +0x0
pf_at 0x3659
l_kernel_00023d77: and dword [ebp-0x27c],byte +0x0
pf_at 0x3660
l_kernel_00023d7e: and dword [ebp-0x278],byte +0x0
pf_at 0x3667
l_kernel_00023d85: and dword [ebp-0x274],byte +0x0
pf_at 0x366e
l_kernel_00023d8c: and dword [ebp-0x270],byte +0x0
pf_at 0x3675
l_kernel_00023d93: sub esp,byte +0x4
pf_at 0x3678
l_kernel_00023d96: lea ecx,[ebp-0x28]
pf_at 0x367b
l_kernel_00023d99: lea edx,[ebp-0xac]
pf_at 0x3681
l_kernel_00023d9f: lea esi,[ebp-0x28c]
pf_at 0x3687
l_kernel_00023da5: push esi
pf_at 0x3688
l_kernel_00023da6: push eax
pf_at 0x3689
l_kernel_00023da7: push dword [ebp-0x2c]
pf_at 0x368c
l_kernel_00023daa: call 0x2c778
pf_at 0x3691
l_kernel_00023daf: add esp,byte +0x10
pf_at 0x3694
l_kernel_00023db2: test al,al
pf_at 0x3696
l_kernel_00023db4: jz near 0x23f5b
pf_at 0x369c
l_kernel_00023dba: lea ecx,[ebp-0x50]
pf_at 0x369f
l_kernel_00023dbd: lea edx,[ebp-0x28c]
pf_at 0x36a5
l_kernel_00023dc3: call 0x28af3
pf_at 0x36aa
l_kernel_00023dc8: test al,al
pf_at 0x36ac
l_kernel_00023dca: jz near 0x23f5b
pf_at 0x36b2
l_kernel_00023dd0: lea ecx,[ebp-0x28c]
pf_at 0x36b8
l_kernel_00023dd6: call 0x24daf
pf_at 0x36bd
l_kernel_00023ddb: sub esp,byte +0x4
pf_at 0x36c0
l_kernel_00023dde: lea ecx,[ebp-0x28]
pf_at 0x36c3
l_kernel_00023de1: lea edx,[ebp-0x37d]
pf_at 0x36c9
l_kernel_00023de7: lea eax,[ebp-0x14c]
pf_at 0x36cf
l_kernel_00023ded: push eax
pf_at 0x36d0
l_kernel_00023dee: push dword [ebp-0x50]
pf_at 0x36d3
l_kernel_00023df1: push dword [ebp-0x48]
pf_at 0x36d6
l_kernel_00023df4: call 0x28be0
pf_at 0x36db
l_kernel_00023df9: add esp,byte +0x10
pf_at 0x36de
l_kernel_00023dfc: test al,al
pf_at 0x36e0
l_kernel_00023dfe: jz near 0x23f66
pf_at 0x36e6
l_kernel_00023e04: mov edi,[ebp-0x50]
pf_at 0x36e9
l_kernel_00023e07: mov esi,[ebp-0x48]
pf_at 0x36ec
l_kernel_00023e0a: lea ecx,[ebp-0x37d]
pf_at 0x36f2
l_kernel_00023e10: mov edx,0x2d0fb
pf_at 0x36f7
l_kernel_00023e15: call 0x26ebe
pf_at 0x36fc
l_kernel_00023e1a: test al,al
pf_at 0x36fe
l_kernel_00023e1c: jz short 0x23e41
pf_at 0x3700
l_kernel_00023e1e: and dword [ebp-0x28c],byte +0x0
pf_at 0x3707
l_kernel_00023e25: mov dword [ebp-0x18],0x1
pf_at 0x370e
l_kernel_00023e2c: test edi,edi
pf_at 0x3710
l_kernel_00023e2e: jz short 0x23e41
pf_at 0x3712
l_kernel_00023e30: mov ecx,esi
pf_at 0x3714
l_kernel_00023e32: lea edx,[ebp-0x28c]
pf_at 0x371a
l_kernel_00023e38: call 0x2bc43
pf_at 0x371f
l_kernel_00023e3d: test al,al
pf_at 0x3721
l_kernel_00023e3f: jnz short 0x23e91
pf_at 0x3723
l_kernel_00023e41: lea ecx,[ebp-0x37d]
pf_at 0x3729
l_kernel_00023e47: mov edx,0x2d13d
pf_at 0x372e
l_kernel_00023e4c: call 0x26ebe
pf_at 0x3733
l_kernel_00023e51: test al,al
pf_at 0x3735
l_kernel_00023e53: jz near 0x23ede
pf_at 0x373b
l_kernel_00023e59: and dword [ebp-0x28c],byte +0x0
pf_at 0x3742
l_kernel_00023e60: mov dword [ebp-0x18],0x1
pf_at 0x3749
l_kernel_00023e67: test edi,edi
pf_at 0x374b
l_kernel_00023e69: jz near 0x239b6
pf_at 0x3751
l_kernel_00023e6f: mov ecx,esi
pf_at 0x3753
l_kernel_00023e71: lea edx,[ebp-0x28c]
pf_at 0x3759
l_kernel_00023e77: call 0x2bc43
pf_at 0x375e
l_kernel_00023e7c: test al,al
pf_at 0x3760
l_kernel_00023e7e: jz near 0x239b6
pf_at 0x3766
l_kernel_00023e84: cmp dword [ebp-0x14c],byte +0x3
pf_at 0x376d
l_kernel_00023e8b: jz near 0x239bf
pf_at 0x3773
l_kernel_00023e91: xor edx,edx
pf_at 0x3775
l_kernel_00023e93: inc edx
pf_at 0x3776
l_kernel_00023e94: cmp edi,byte +0x1
pf_at 0x3779
l_kernel_00023e97: jz short 0x23ea9
pf_at 0x377b
l_kernel_00023e99: add esi,byte +0x20
pf_at 0x377e
l_kernel_00023e9c: mov ecx,esi
pf_at 0x3780
l_kernel_00023e9e: lea edx,[ebp-0x18]
pf_at 0x3783
l_kernel_00023ea1: call 0x2bc43
pf_at 0x3788
l_kernel_00023ea6: mov edx,[ebp-0x18]
pf_at 0x378b
l_kernel_00023ea9: mov ecx,[ebp-0x28c]
pf_at 0x3791
l_kernel_00023eaf: sub esp,byte +0xc
pf_at 0x3794
l_kernel_00023eb2: push dword [ebp-0x148]
pf_at 0x379a
l_kernel_00023eb8: call 0x2c81b
pf_at 0x379f
l_kernel_00023ebd: jmp near 0x241de
pf_at 0x37a4
l_kernel_00023ec2: lea ecx,[ebp-0x50]
pf_at 0x37a7
l_kernel_00023ec5: call 0x28ab1
pf_at 0x37ac
l_kernel_00023eca: sub esp,byte +0x4
pf_at 0x37af
l_kernel_00023ecd: push dword 0x2e3f8
pf_at 0x37b4
l_kernel_00023ed2: lea eax,[ebp-0x37d]
pf_at 0x37ba
l_kernel_00023ed8: push eax
pf_at 0x37bb
l_kernel_00023ed9: jmp near 0x241d5
pf_at 0x37c0
l_kernel_00023ede: lea ecx,[ebp-0x37d]
pf_at 0x37c6
l_kernel_00023ee4: mov edx,0x2d100
pf_at 0x37cb
l_kernel_00023ee9: call 0x26ebe
pf_at 0x37d0
l_kernel_00023eee: test al,al
pf_at 0x37d2
l_kernel_00023ef0: jz short 0x23f19
pf_at 0x37d4
l_kernel_00023ef2: and dword [ebp-0x28c],byte +0x0
pf_at 0x37db
l_kernel_00023ef9: test edi,edi
pf_at 0x37dd
l_kernel_00023efb: jz short 0x23f19
pf_at 0x37df
l_kernel_00023efd: mov ecx,esi
pf_at 0x37e1
l_kernel_00023eff: lea edx,[ebp-0x28c]
pf_at 0x37e7
l_kernel_00023f05: call 0x2bc43
pf_at 0x37ec
l_kernel_00023f0a: test al,al
pf_at 0x37ee
l_kernel_00023f0c: jz short 0x23f19
pf_at 0x37f0
l_kernel_00023f0e: sub esp,byte +0x8
pf_at 0x37f3
l_kernel_00023f11: push dword [ebp-0x28c]
pf_at 0x37f9
l_kernel_00023f17: jmp short 0x23f51
pf_at 0x37fb
l_kernel_00023f19: lea ecx,[ebp-0x37d]
pf_at 0x3801
l_kernel_00023f1f: mov edx,0x2d142
pf_at 0x3806
l_kernel_00023f24: call 0x26ebe
pf_at 0x380b
l_kernel_00023f29: test al,al
pf_at 0x380d
l_kernel_00023f2b: jz near 0x23fc7
pf_at 0x3813
l_kernel_00023f31: and dword [ebp-0x18],byte +0x0
pf_at 0x3817
l_kernel_00023f35: test edi,edi
pf_at 0x3819
l_kernel_00023f37: jz near 0x23fc7
pf_at 0x381f
l_kernel_00023f3d: mov ecx,esi
pf_at 0x3821
l_kernel_00023f3f: lea edx,[ebp-0x18]
pf_at 0x3824
l_kernel_00023f42: call 0x2bc43
pf_at 0x3829
l_kernel_00023f47: test al,al
pf_at 0x382b
l_kernel_00023f49: jz short 0x23f9d
pf_at 0x382d
l_kernel_00023f4b: sub esp,byte +0x8
pf_at 0x3830
l_kernel_00023f4e: push dword [ebp-0x18]
pf_at 0x3833
l_kernel_00023f51: push dword 0x2e42f
pf_at 0x3838
l_kernel_00023f56: jmp near 0x240ae
pf_at 0x383d
l_kernel_00023f5b: lea ecx,[ebp-0x28c]
pf_at 0x3843
l_kernel_00023f61: call 0x24daf
pf_at 0x3848
l_kernel_00023f66: lea ecx,[ebp-0x50]
pf_at 0x384b
l_kernel_00023f69: call 0x28ab1
pf_at 0x3850
l_kernel_00023f6e: jmp near 0x239ca
pf_at 0x3855
l_kernel_00023f73: lea ecx,[ebp-0x50]
pf_at 0x3858
l_kernel_00023f76: call 0x28ab1
pf_at 0x385d
l_kernel_00023f7b: sub esp,byte +0x4
pf_at 0x3860
l_kernel_00023f7e: push dword 0x2e3cb
pf_at 0x3865
l_kernel_00023f83: jmp near 0x241d4
pf_at 0x386a
l_kernel_00023f88: lea ecx,[ebp-0x50]
pf_at 0x386d
l_kernel_00023f8b: call 0x28ab1
pf_at 0x3872
l_kernel_00023f90: sub esp,byte +0x4
pf_at 0x3875
l_kernel_00023f93: push dword 0x2e3da
pf_at 0x387a
l_kernel_00023f98: jmp near 0x241d4
pf_at 0x387f
l_kernel_00023f9d: mov ecx,esi
pf_at 0x3881
l_kernel_00023f9f: lea edx,[ebp-0x28c]
pf_at 0x3887
l_kernel_00023fa5: call 0x2c85a
pf_at 0x388c
l_kernel_00023faa: test al,al
pf_at 0x388e
l_kernel_00023fac: jz short 0x23fc7
pf_at 0x3890
l_kernel_00023fae: lea ecx,[ebp-0x28c]
pf_at 0x3896
l_kernel_00023fb4: call 0x2c63b
pf_at 0x389b
l_kernel_00023fb9: sub esp,byte +0x8
pf_at 0x389e
l_kernel_00023fbc: push eax
pf_at 0x389f
l_kernel_00023fbd: push dword 0x2e349
pf_at 0x38a4
l_kernel_00023fc2: jmp near 0x240ae
pf_at 0x38a9
l_kernel_00023fc7: lea ecx,[ebp-0x37d]
pf_at 0x38af
l_kernel_00023fcd: mov edx,0x2d14f
pf_at 0x38b4
l_kernel_00023fd2: call 0x26ebe
pf_at 0x38b9
l_kernel_00023fd7: test al,al
pf_at 0x38bb
l_kernel_00023fd9: jz short 0x24023
pf_at 0x38bd
l_kernel_00023fdb: and dword [ebp-0x18],byte +0x0
pf_at 0x38c1
l_kernel_00023fdf: cmp edi,byte +0x2
pf_at 0x38c4
l_kernel_00023fe2: jc short 0x24023
pf_at 0x38c6
l_kernel_00023fe4: mov ecx,esi
pf_at 0x38c8
l_kernel_00023fe6: lea edx,[ebp-0x28c]
pf_at 0x38ce
l_kernel_00023fec: call 0x2c85a
pf_at 0x38d3
l_kernel_00023ff1: test al,al
pf_at 0x38d5
l_kernel_00023ff3: jz short 0x24023
pf_at 0x38d7
l_kernel_00023ff5: lea ecx,[esi+0x20]
pf_at 0x38da
l_kernel_00023ff8: lea edx,[ebp-0x18]
pf_at 0x38dd
l_kernel_00023ffb: call 0x2bc43
pf_at 0x38e2
l_kernel_00024000: test al,al
pf_at 0x38e4
l_kernel_00024002: jz short 0x24023
pf_at 0x38e6
l_kernel_00024004: lea ecx,[ebp-0x28c]
pf_at 0x38ec
l_kernel_0002400a: call 0x2c63b
pf_at 0x38f1
l_kernel_0002400f: push dword [ebp-0x148]
pf_at 0x38f7
l_kernel_00024015: push dword [ebp-0x18]
pf_at 0x38fa
l_kernel_00024018: push eax
pf_at 0x38fb
l_kernel_00024019: push dword 0x2e43a
pf_at 0x3900
l_kernel_0002401e: jmp near 0x240ae
pf_at 0x3905
l_kernel_00024023: lea ecx,[ebp-0x37d]
pf_at 0x390b
l_kernel_00024029: mov edx,0x2d155
pf_at 0x3910
l_kernel_0002402e: call 0x26ebe
pf_at 0x3915
l_kernel_00024033: test al,al
pf_at 0x3917
l_kernel_00024035: jz short 0x2408c
pf_at 0x3919
l_kernel_00024037: and dword [ebp-0x18],byte +0x0
pf_at 0x391d
l_kernel_0002403b: and dword [ebp-0x34],byte +0x0
pf_at 0x3921
l_kernel_0002403f: cmp edi,byte +0x3
pf_at 0x3924
l_kernel_00024042: jc short 0x2408c
pf_at 0x3926
l_kernel_00024044: mov ecx,esi
pf_at 0x3928
l_kernel_00024046: lea edx,[ebp-0x28c]
pf_at 0x392e
l_kernel_0002404c: call 0x2c85a
pf_at 0x3933
l_kernel_00024051: test al,al
pf_at 0x3935
l_kernel_00024053: jz short 0x2408c
pf_at 0x3937
l_kernel_00024055: lea ecx,[esi+0x20]
pf_at 0x393a
l_kernel_00024058: lea edx,[ebp-0x18]
pf_at 0x393d
l_kernel_0002405b: call 0x2bc43
pf_at 0x3942
l_kernel_00024060: test al,al
pf_at 0x3944
l_kernel_00024062: jz short 0x2408c
pf_at 0x3946
l_kernel_00024064: lea ecx,[esi+0x40]
pf_at 0x3949
l_kernel_00024067: lea edx,[ebp-0x34]
pf_at 0x394c
l_kernel_0002406a: call 0x2bc43
pf_at 0x3951
l_kernel_0002406f: test al,al
pf_at 0x3953
l_kernel_00024071: jz short 0x2408c
pf_at 0x3955
l_kernel_00024073: lea ecx,[ebp-0x28c]
pf_at 0x395b
l_kernel_00024079: call 0x2c63b
pf_at 0x3960
l_kernel_0002407e: push dword [ebp-0x34]
pf_at 0x3963
l_kernel_00024081: push dword [ebp-0x18]
pf_at 0x3966
l_kernel_00024084: push eax
pf_at 0x3967
l_kernel_00024085: push dword 0x2e456
pf_at 0x396c
l_kernel_0002408a: jmp short 0x240ae
pf_at 0x396e
l_kernel_0002408c: lea ecx,[ebp-0x37d]
pf_at 0x3974
l_kernel_00024092: mov edx,0x2d15b
pf_at 0x3979
l_kernel_00024097: call 0x26ebe
pf_at 0x397e
l_kernel_0002409c: test al,al
pf_at 0x3980
l_kernel_0002409e: jz short 0x240b8
pf_at 0x3982
l_kernel_000240a0: sub esp,byte +0x8
pf_at 0x3985
l_kernel_000240a3: push dword [ebp-0x148]
pf_at 0x398b
l_kernel_000240a9: push dword 0x2e472
pf_at 0x3990
l_kernel_000240ae: call 0x21c41
pf_at 0x3995
l_kernel_000240b3: jmp near 0x241de
pf_at 0x399a
l_kernel_000240b8: lea ecx,[ebp-0x37d]
pf_at 0x39a0
l_kernel_000240be: mov edx,0x2d160
pf_at 0x39a5
l_kernel_000240c3: call 0x26ebe
pf_at 0x39aa
l_kernel_000240c8: test al,al
pf_at 0x39ac
l_kernel_000240ca: jz short 0x24117
pf_at 0x39ae
l_kernel_000240cc: and dword [ebp-0x18],byte +0x0
pf_at 0x39b2
l_kernel_000240d0: cmp edi,byte +0x2
pf_at 0x39b5
l_kernel_000240d3: jc short 0x24117
pf_at 0x39b7
l_kernel_000240d5: mov ecx,esi
pf_at 0x39b9
l_kernel_000240d7: lea edx,[ebp-0x28c]
pf_at 0x39bf
l_kernel_000240dd: call 0x2c85a
pf_at 0x39c4
l_kernel_000240e2: test al,al
pf_at 0x39c6
l_kernel_000240e4: jz short 0x24117
pf_at 0x39c8
l_kernel_000240e6: add esi,byte +0x20
pf_at 0x39cb
l_kernel_000240e9: mov ecx,esi
pf_at 0x39cd
l_kernel_000240eb: lea edx,[ebp-0x18]
pf_at 0x39d0
l_kernel_000240ee: call 0x2bc43
pf_at 0x39d5
l_kernel_000240f3: test al,al
pf_at 0x39d7
l_kernel_000240f5: jz short 0x24117
pf_at 0x39d9
l_kernel_000240f7: lea ecx,[ebp-0x28c]
pf_at 0x39df
l_kernel_000240fd: call 0x2c63b
pf_at 0x39e4
l_kernel_00024102: sub esp,byte +0x4
pf_at 0x39e7
l_kernel_00024105: push dword [ebp-0x18]
pf_at 0x39ea
l_kernel_00024108: push eax
pf_at 0x39eb
l_kernel_00024109: push dword 0x2e47b
pf_at 0x39f0
l_kernel_0002410e: call 0x21c41
pf_at 0x39f5
l_kernel_00024113: pop eax
pf_at 0x39f6
l_kernel_00024114: pop ecx
pf_at 0x39f7
l_kernel_00024115: jmp short 0x240a3
pf_at 0x39f9
l_kernel_00024117: lea ecx,[ebp-0x37d]
pf_at 0x39ff
l_kernel_0002411d: mov edx,0x2d097
pf_at 0x3a04
l_kernel_00024122: call 0x26ebe
pf_at 0x3a09
l_kernel_00024127: test al,al
pf_at 0x3a0b
l_kernel_00024129: jnz near 0x239ca
pf_at 0x3a11
l_kernel_0002412f: lea ecx,[ebp-0x37d]
pf_at 0x3a17
l_kernel_00024135: mov edx,0x2d0c5
pf_at 0x3a1c
l_kernel_0002413a: call 0x26ebe
pf_at 0x3a21
l_kernel_0002413f: test al,al
pf_at 0x3a23
l_kernel_00024141: jnz near 0x239ca
pf_at 0x3a29
l_kernel_00024147: lea ecx,[ebp-0x37d]
pf_at 0x3a2f
l_kernel_0002414d: mov edx,0x2d105
pf_at 0x3a34
l_kernel_00024152: call 0x26ebe
pf_at 0x3a39
l_kernel_00024157: test al,al
pf_at 0x3a3b
l_kernel_00024159: jnz near 0x239ca
pf_at 0x3a41
l_kernel_0002415f: lea ecx,[ebp-0x37d]
pf_at 0x3a47
l_kernel_00024165: mov edx,0x2d10a
pf_at 0x3a4c
l_kernel_0002416a: call 0x26ebe
pf_at 0x3a51
l_kernel_0002416f: test al,al
pf_at 0x3a53
l_kernel_00024171: jnz near 0x239ca
pf_at 0x3a59
l_kernel_00024177: lea ecx,[ebp-0x37d]
pf_at 0x3a5f
l_kernel_0002417d: mov edx,0x2d4e0
pf_at 0x3a64
l_kernel_00024182: call 0x26ebe
pf_at 0x3a69
l_kernel_00024187: test al,al
pf_at 0x3a6b
l_kernel_00024189: jnz near 0x239ca
pf_at 0x3a71
l_kernel_0002418f: lea ecx,[ebp-0x37d]
pf_at 0x3a77
l_kernel_00024195: mov edx,0x2d4a5
pf_at 0x3a7c
l_kernel_0002419a: call 0x26ebe
pf_at 0x3a81
l_kernel_0002419f: test al,al
pf_at 0x3a83
l_kernel_000241a1: jnz near 0x239ca
pf_at 0x3a89
l_kernel_000241a7: lea ecx,[ebp-0x37d]
pf_at 0x3a8f
l_kernel_000241ad: mov edx,0x2d4ab
pf_at 0x3a94
l_kernel_000241b2: call 0x26ebe
pf_at 0x3a99
l_kernel_000241b7: test al,al
pf_at 0x3a9b
l_kernel_000241b9: jz near 0x239b6
pf_at 0x3aa1
l_kernel_000241bf: jmp near 0x239ca
pf_at 0x3aa6
l_kernel_000241c4: lea ecx,[ebp-0x50]
pf_at 0x3aa9
l_kernel_000241c7: call 0x28ab1
pf_at 0x3aae
l_kernel_000241cc: sub esp,byte +0x4
pf_at 0x3ab1
l_kernel_000241cf: push dword 0x2e3e9
pf_at 0x3ab6
l_kernel_000241d4: push esi
pf_at 0x3ab7
l_kernel_000241d5: lea eax,[ebp-0x28]
pf_at 0x3aba
l_kernel_000241d8: push eax
pf_at 0x3abb
l_kernel_000241d9: call 0x2609c
pf_at 0x3ac0
l_kernel_000241de: add esp,byte +0x10
pf_at 0x3ac3
l_kernel_000241e1: jmp near 0x239ca
pf_at 0x3ac8
l_kernel_000241e6: push ebp
pf_at 0x3ac9
l_kernel_000241e7: mov ebp,esp
pf_at 0x3acb
l_kernel_000241e9: push ebx
pf_at 0x3acc
l_kernel_000241ea: push edi
pf_at 0x3acd
l_kernel_000241eb: push esi
pf_at 0x3ace
l_kernel_000241ec: sub esp,byte +0xc
pf_at 0x3ad1
l_kernel_000241ef: mov byte [dword 0x3f0d8],0x0
pf_at 0x3ad8
l_kernel_000241f6: mov eax,[0x46c]
pf_at 0x3add
l_kernel_000241fb: xor edi,edi
pf_at 0x3adf
l_kernel_000241fd: push byte +0x9
pf_at 0x3ae1
l_kernel_000241ff: pop ecx
pf_at 0x3ae2
l_kernel_00024200: xor edx,edx
pf_at 0x3ae4
l_kernel_00024202: div ecx
pf_at 0x3ae6
l_kernel_00024204: mov ebx,eax
pf_at 0x3ae8
l_kernel_00024206: call 0x21cca
pf_at 0x3aed
l_kernel_0002420b: cmp byte [dword 0x4f1cc],0x1
pf_at 0x3af4
l_kernel_00024212: jnz short 0x2421e
pf_at 0x3af6
l_kernel_00024214: mov ecx,0x2ca40
pf_at 0x3afb
l_kernel_00024219: call 0x2449b
pf_at 0x3b00
l_kernel_0002421e: lea esi,[edi+0x1]
pf_at 0x3b03
l_kernel_00024221: cmp byte [dword 0x4f1cc],0x1
pf_at 0x3b0a
l_kernel_00024228: jnz short 0x24258
pf_at 0x3b0c
l_kernel_0002422a: mov dx,0x3fd
pf_at 0x3b10
l_kernel_0002422e: in al,dx
pf_at 0x3b11
l_kernel_0002422f: test al,0x1
pf_at 0x3b13
l_kernel_00024231: jz short 0x24258
pf_at 0x3b15
l_kernel_00024233: mov dx,0x3f8
pf_at 0x3b19
l_kernel_00024237: in al,dx
pf_at 0x3b1a
l_kernel_00024238: cmp byte [dword 0x70428],0x1
pf_at 0x3b21
l_kernel_0002423f: movzx ecx,al
pf_at 0x3b24
l_kernel_00024242: jnz near 0x242d5
pf_at 0x3b2a
l_kernel_00024248: mov byte [dword 0x70428],0x0
pf_at 0x3b31
l_kernel_0002424f: cmp al,0xa
pf_at 0x3b33
l_kernel_00024251: jz short 0x2422a
pf_at 0x3b35
l_kernel_00024253: jmp near 0x242dd
pf_at 0x3b3a
l_kernel_00024258: call 0x20023
pf_at 0x3b3f
l_kernel_0002425d: test ax,ax
pf_at 0x3b42
l_kernel_00024260: jz short 0x242b7
pf_at 0x3b44
l_kernel_00024262: cmp al,0xd
pf_at 0x3b46
l_kernel_00024264: jz near 0x2439e
pf_at 0x3b4c
l_kernel_0002426a: movzx ecx,ax
pf_at 0x3b4f
l_kernel_0002426d: shr ecx,byte 0x8
pf_at 0x3b52
l_kernel_00024270: cmp cx,byte +0x1c
pf_at 0x3b56
l_kernel_00024274: jz near 0x2439e
pf_at 0x3b5c
l_kernel_0002427a: test edi,edi
pf_at 0x3b5e
l_kernel_0002427c: setnz dl
pf_at 0x3b61
l_kernel_0002427f: cmp al,0x8
pf_at 0x3b63
l_kernel_00024281: setz dh
pf_at 0x3b66
l_kernel_00024284: cmp cx,byte +0xe
pf_at 0x3b6a
l_kernel_00024288: setz cl
pf_at 0x3b6d
l_kernel_0002428b: or cl,dh
pf_at 0x3b6f
l_kernel_0002428d: and cl,dl
pf_at 0x3b71
l_kernel_0002428f: cmp cl,0x1
pf_at 0x3b74
l_kernel_00024292: jz near 0x2432f
pf_at 0x3b7a
l_kernel_00024298: mov ecx,eax
pf_at 0x3b7c
l_kernel_0002429a: add cl,0xe0
pf_at 0x3b7f
l_kernel_0002429d: cmp cl,0x5e
pf_at 0x3b82
l_kernel_000242a0: ja near 0x24221
pf_at 0x3b88
l_kernel_000242a6: cmp esi,0xef
pf_at 0x3b8e
l_kernel_000242ac: ja near 0x24221
pf_at 0x3b94
l_kernel_000242b2: jmp near 0x24339
pf_at 0x3b99
l_kernel_000242b7: mov eax,[0x46c]
pf_at 0x3b9e
l_kernel_000242bc: xor edx,edx
pf_at 0x3ba0
l_kernel_000242be: push byte +0x9
pf_at 0x3ba2
l_kernel_000242c0: pop ecx
pf_at 0x3ba3
l_kernel_000242c1: div ecx
pf_at 0x3ba5
l_kernel_000242c3: mov ecx,eax
pf_at 0x3ba7
l_kernel_000242c5: xor cl,bl
pf_at 0x3ba9
l_kernel_000242c7: test cl,0x1
pf_at 0x3bac
l_kernel_000242ca: jz near 0x24221
pf_at 0x3bb2
l_kernel_000242d0: jmp near 0x24376
pf_at 0x3bb7
l_kernel_000242d5: cmp al,0xa
pf_at 0x3bb9
l_kernel_000242d7: jz near 0x24381
pf_at 0x3bbf
l_kernel_000242dd: cmp ecx,byte +0xd
pf_at 0x3bc2
l_kernel_000242e0: jz near 0x2437a
pf_at 0x3bc8
l_kernel_000242e6: test edi,edi
pf_at 0x3bca
l_kernel_000242e8: setnz cl
pf_at 0x3bcd
l_kernel_000242eb: cmp al,0x8
pf_at 0x3bcf
l_kernel_000242ed: setz dl
pf_at 0x3bd2
l_kernel_000242f0: cmp al,0x7f
pf_at 0x3bd4
l_kernel_000242f2: setz ah
pf_at 0x3bd7
l_kernel_000242f5: or ah,dl
pf_at 0x3bd9
l_kernel_000242f7: and ah,cl
pf_at 0x3bdb
l_kernel_000242f9: cmp ah,0x1
pf_at 0x3bde
l_kernel_000242fc: jz short 0x24348
pf_at 0x3be0
l_kernel_000242fe: mov ecx,eax
pf_at 0x3be2
l_kernel_00024300: add cl,0xe0
pf_at 0x3be5
l_kernel_00024303: cmp cl,0x5e
pf_at 0x3be8
l_kernel_00024306: ja near 0x24221
pf_at 0x3bee
l_kernel_0002430c: cmp esi,0xef
pf_at 0x3bf4
l_kernel_00024312: ja near 0x24221
pf_at 0x3bfa
l_kernel_00024318: mov [edi+0x3f0d8],al
pf_at 0x3c00
l_kernel_0002431e: mov byte [edi+0x3f0d9],0x0
pf_at 0x3c07
l_kernel_00024325: movsx ecx,al
pf_at 0x3c0a
l_kernel_00024328: call 0x244bd
pf_at 0x3c0f
l_kernel_0002432d: jmp short 0x2435c
pf_at 0x3c11
l_kernel_0002432f: mov byte [edi+0x3f0d7],0x0
pf_at 0x3c18
l_kernel_00024336: dec edi
pf_at 0x3c19
l_kernel_00024337: jmp short 0x2435a
pf_at 0x3c1b
l_kernel_00024339: mov [edi+0x3f0d8],al
pf_at 0x3c21
l_kernel_0002433f: mov byte [edi+0x3f0d9],0x0
pf_at 0x3c28
l_kernel_00024346: jmp short 0x2435c
pf_at 0x3c2a
l_kernel_00024348: mov byte [edi+0x3f0d7],0x0
pf_at 0x3c31
l_kernel_0002434f: dec edi
pf_at 0x3c32
l_kernel_00024350: mov ecx,0x2e224
pf_at 0x3c37
l_kernel_00024355: call 0x2449b
pf_at 0x3c3c
l_kernel_0002435a: mov esi,edi
pf_at 0x3c3e
l_kernel_0002435c: mov eax,[0x46c]
pf_at 0x3c43
l_kernel_00024361: xor edx,edx
pf_at 0x3c45
l_kernel_00024363: push byte +0x9
pf_at 0x3c47
l_kernel_00024365: pop ecx
pf_at 0x3c48
l_kernel_00024366: div ecx
pf_at 0x3c4a
l_kernel_00024368: mov ebx,eax
pf_at 0x3c4c
l_kernel_0002436a: mov edi,esi
pf_at 0x3c4e
l_kernel_0002436c: call 0x21cca
pf_at 0x3c53
l_kernel_00024371: jmp near 0x2421e
pf_at 0x3c58
l_kernel_00024376: mov ebx,eax
pf_at 0x3c5a
l_kernel_00024378: jmp short 0x2436c
pf_at 0x3c5c
l_kernel_0002437a: mov byte [dword 0x70428],0x1
pf_at 0x3c63
l_kernel_00024381: mov byte [edi+0x3f0d8],0x0
pf_at 0x3c6a
l_kernel_00024388: mov ecx,0x2cb7f
pf_at 0x3c6f
l_kernel_0002438d: call 0x2449b
pf_at 0x3c74
l_kernel_00024392: add esp,byte +0xc
pf_at 0x3c77
l_kernel_00024395: pop esi
pf_at 0x3c78
l_kernel_00024396: pop edi
pf_at 0x3c79
l_kernel_00024397: pop ebx
pf_at 0x3c7a
l_kernel_00024398: pop ebp
pf_at 0x3c7b
l_kernel_00024399: jmp near 0x21cca
pf_at 0x3c80
l_kernel_0002439e: mov byte [edi+0x3f0d8],0x0
pf_at 0x3c87
l_kernel_000243a5: jmp short 0x24392
pf_at 0x3c89
l_kernel_000243a7: test ecx,ecx
pf_at 0x3c8b
l_kernel_000243a9: jz short 0x2440e
pf_at 0x3c8d
l_kernel_000243ab: push ebp
pf_at 0x3c8e
l_kernel_000243ac: mov ebp,esp
pf_at 0x3c90
l_kernel_000243ae: push edi
pf_at 0x3c91
l_kernel_000243af: push esi
pf_at 0x3c92
l_kernel_000243b0: sub esp,byte +0x10
pf_at 0x3c95
l_kernel_000243b3: mov esi,ecx
pf_at 0x3c97
l_kernel_000243b5: call 0x2c5f9
pf_at 0x3c9c
l_kernel_000243ba: cmp eax,esi
pf_at 0x3c9e
l_kernel_000243bc: jz short 0x243d9
pf_at 0x3ca0
l_kernel_000243be: mov edi,eax
pf_at 0x3ca2
l_kernel_000243c0: mov [esp],eax
pf_at 0x3ca5
l_kernel_000243c3: call 0x20ccf
pf_at 0x3caa
l_kernel_000243c8: inc eax
pf_at 0x3cab
l_kernel_000243c9: mov [esp+0x8],eax
pf_at 0x3caf
l_kernel_000243cd: mov [esp+0x4],edi
pf_at 0x3cb3
l_kernel_000243d1: mov [esp],esi
pf_at 0x3cb6
l_kernel_000243d4: call 0x20c3e
pf_at 0x3cbb
l_kernel_000243d9: mov [esp],esi
pf_at 0x3cbe
l_kernel_000243dc: call 0x20ccf
pf_at 0x3cc3
l_kernel_000243e1: mov ecx,0x80001f
pf_at 0x3cc8
l_kernel_000243e6: mov edx,eax
pf_at 0x3cca
l_kernel_000243e8: sub edx,byte +0x1
pf_at 0x3ccd
l_kernel_000243eb: jc short 0x24408
pf_at 0x3ccf
l_kernel_000243ed: movzx edi,byte [esi+eax-0x1]
pf_at 0x3cd4
l_kernel_000243f2: add edi,byte -0x9
pf_at 0x3cd7
l_kernel_000243f5: cmp edi,byte +0x17
pf_at 0x3cda
l_kernel_000243f8: ja short 0x24408
pf_at 0x3cdc
l_kernel_000243fa: bt ecx,edi
pf_at 0x3cdf
l_kernel_000243fd: jnc short 0x24408
pf_at 0x3ce1
l_kernel_000243ff: mov byte [esi+eax-0x1],0x0
pf_at 0x3ce6
l_kernel_00024404: mov eax,edx
pf_at 0x3ce8
l_kernel_00024406: jmp short 0x243e8
pf_at 0x3cea
l_kernel_00024408: add esp,byte +0x10
pf_at 0x3ced
l_kernel_0002440b: pop esi
pf_at 0x3cee
l_kernel_0002440c: pop edi
pf_at 0x3cef
l_kernel_0002440d: pop ebp
pf_at 0x3cf0
l_kernel_0002440e: ret
pf_at 0x3cf1
l_kernel_0002440f: push ebp
pf_at 0x3cf2
l_kernel_00024410: mov ebp,esp
pf_at 0x3cf4
l_kernel_00024412: push esi
pf_at 0x3cf5
l_kernel_00024413: push eax
pf_at 0x3cf6
l_kernel_00024414: test ecx,ecx
pf_at 0x3cf8
l_kernel_00024416: mov esi,0x2ca9c
pf_at 0x3cfd
l_kernel_0002441b: cmovnz esi,ecx
pf_at 0x3d00
l_kernel_0002441e: mov eax,[0x3f1c8]
pf_at 0x3d05
l_kernel_00024423: cmp eax,0x100
pf_at 0x3d0a
l_kernel_00024428: jnz short 0x24453
pf_at 0x3d0c
l_kernel_0002442a: sub esp,byte +0x4
pf_at 0x3d0f
l_kernel_0002442d: push dword 0xff00
pf_at 0x3d14
l_kernel_00024432: push dword 0x3f2cc
pf_at 0x3d19
l_kernel_00024437: push dword 0x3f1cc
pf_at 0x3d1e
l_kernel_0002443c: call 0x20c3e
pf_at 0x3d23
l_kernel_00024441: add esp,byte +0x10
pf_at 0x3d26
l_kernel_00024444: mov dword [dword 0x3f1c8],0xff
pf_at 0x3d30
l_kernel_0002444e: mov eax,0xff
pf_at 0x3d35
l_kernel_00024453: shl eax,byte 0x8
pf_at 0x3d38
l_kernel_00024456: lea eax,[eax+0x3f1cc]
pf_at 0x3d3e
l_kernel_0002445c: push esi
pf_at 0x3d3f
l_kernel_0002445d: push dword 0x2cb77
pf_at 0x3d44
l_kernel_00024462: push dword 0x100
pf_at 0x3d49
l_kernel_00024467: push eax
pf_at 0x3d4a
l_kernel_00024468: call 0x216bc
pf_at 0x3d4f
l_kernel_0002446d: add esp,byte +0x10
pf_at 0x3d52
l_kernel_00024470: inc dword [dword 0x3f1c8]
pf_at 0x3d58
l_kernel_00024476: cmp byte [dword 0x4f1cc],0x1
pf_at 0x3d5f
l_kernel_0002447d: jnz short 0x24495
pf_at 0x3d61
l_kernel_0002447f: mov ecx,esi
pf_at 0x3d63
l_kernel_00024481: call 0x2449b
pf_at 0x3d68
l_kernel_00024486: mov ecx,0x2cb7f
pf_at 0x3d6d
l_kernel_0002448b: add esp,byte +0x4
pf_at 0x3d70
l_kernel_0002448e: pop esi
pf_at 0x3d71
l_kernel_0002448f: pop ebp
pf_at 0x3d72
l_kernel_00024490: jmp near 0x2449b
pf_at 0x3d77
l_kernel_00024495: add esp,byte +0x4
pf_at 0x3d7a
l_kernel_00024498: pop esi
pf_at 0x3d7b
l_kernel_00024499: pop ebp
pf_at 0x3d7c
l_kernel_0002449a: ret
pf_at 0x3d7d
l_kernel_0002449b: push ebp
pf_at 0x3d7e
l_kernel_0002449c: mov ebp,esp
pf_at 0x3d80
l_kernel_0002449e: push esi
pf_at 0x3d81
l_kernel_0002449f: push eax
pf_at 0x3d82
l_kernel_000244a0: mov esi,ecx
pf_at 0x3d84
l_kernel_000244a2: test esi,esi
pf_at 0x3d86
l_kernel_000244a4: jz short 0x244b7
pf_at 0x3d88
l_kernel_000244a6: mov al,[esi]
pf_at 0x3d8a
l_kernel_000244a8: test al,al
pf_at 0x3d8c
l_kernel_000244aa: jz short 0x244b7
pf_at 0x3d8e
l_kernel_000244ac: inc esi
pf_at 0x3d8f
l_kernel_000244ad: movsx ecx,al
pf_at 0x3d92
l_kernel_000244b0: call 0x244bd
pf_at 0x3d97
l_kernel_000244b5: jmp short 0x244a2
pf_at 0x3d99
l_kernel_000244b7: add esp,byte +0x4
pf_at 0x3d9c
l_kernel_000244ba: pop esi
pf_at 0x3d9d
l_kernel_000244bb: pop ebp
pf_at 0x3d9e
l_kernel_000244bc: ret
pf_at 0x3d9f
l_kernel_000244bd: cmp byte [dword 0x4f1cc],0x1
pf_at 0x3da6
l_kernel_000244c4: jnz short 0x244ef
pf_at 0x3da8
l_kernel_000244c6: push ebp
pf_at 0x3da9
l_kernel_000244c7: mov ebp,esp
pf_at 0x3dab
l_kernel_000244c9: push ebx
pf_at 0x3dac
l_kernel_000244ca: push eax
pf_at 0x3dad
l_kernel_000244cb: mov ebx,ecx
pf_at 0x3daf
l_kernel_000244cd: cmp bl,0xa
pf_at 0x3db2
l_kernel_000244d0: jnz short 0x244da
pf_at 0x3db4
l_kernel_000244d2: push byte +0xd
pf_at 0x3db6
l_kernel_000244d4: pop ecx
pf_at 0x3db7
l_kernel_000244d5: call 0x244bd
pf_at 0x3dbc
l_kernel_000244da: mov dx,0x3fd
pf_at 0x3dc0
l_kernel_000244de: in al,dx
pf_at 0x3dc1
l_kernel_000244df: test al,0x20
pf_at 0x3dc3
l_kernel_000244e1: jz short 0x244de
pf_at 0x3dc5
l_kernel_000244e3: mov eax,ebx
pf_at 0x3dc7
l_kernel_000244e5: mov dx,0x3f8
pf_at 0x3dcb
l_kernel_000244e9: out dx,al
pf_at 0x3dcc
l_kernel_000244ea: add esp,byte +0x4
pf_at 0x3dcf
l_kernel_000244ed: pop ebx
pf_at 0x3dd0
l_kernel_000244ee: pop ebp
pf_at 0x3dd1
l_kernel_000244ef: ret
pf_at 0x3dd2
l_kernel_000244f0: push ebp
pf_at 0x3dd3
l_kernel_000244f1: mov ebp,esp
pf_at 0x3dd5
l_kernel_000244f3: push ebx
pf_at 0x3dd6
l_kernel_000244f4: push edi
pf_at 0x3dd7
l_kernel_000244f5: push esi
pf_at 0x3dd8
l_kernel_000244f6: sub esp,byte +0xc
pf_at 0x3ddb
l_kernel_000244f9: movzx esi,byte [dword 0x2f0a4]
pf_at 0x3de2
l_kernel_00024500: movzx edi,byte [dword 0x4f1cd]
pf_at 0x3de9
l_kernel_00024507: movzx ebx,byte [dword 0x2f0a5]
pf_at 0x3df0
l_kernel_0002450e: sub esp,byte +0x8
pf_at 0x3df3
l_kernel_00024511: mov ecx,0x4f1d4
pf_at 0x3df8
l_kernel_00024516: mov edx,esi
pf_at 0x3dfa
l_kernel_00024518: push ebx
pf_at 0x3dfb
l_kernel_00024519: push edi
pf_at 0x3dfc
l_kernel_0002451a: call 0x24537
pf_at 0x3e01
l_kernel_0002451f: pop eax
pf_at 0x3e02
l_kernel_00024520: pop ecx
pf_at 0x3e03
l_kernel_00024521: mov ecx,0x4f1e4
pf_at 0x3e08
l_kernel_00024526: mov edx,esi
pf_at 0x3e0a
l_kernel_00024528: push ebx
pf_at 0x3e0b
l_kernel_00024529: push edi
pf_at 0x3e0c
l_kernel_0002452a: call 0x24537
pf_at 0x3e11
l_kernel_0002452f: add esp,byte +0x1c
pf_at 0x3e14
l_kernel_00024532: pop esi
pf_at 0x3e15
l_kernel_00024533: pop edi
pf_at 0x3e16
l_kernel_00024534: pop ebx
pf_at 0x3e17
l_kernel_00024535: pop ebp
pf_at 0x3e18
l_kernel_00024536: ret
pf_at 0x3e19
l_kernel_00024537: test ecx,ecx
pf_at 0x3e1b
l_kernel_00024539: jz short 0x24579
pf_at 0x3e1d
l_kernel_0002453b: cmp byte [ecx+0xc],0x1
pf_at 0x3e21
l_kernel_0002453f: jnz short 0x24579
pf_at 0x3e23
l_kernel_00024541: cmp dword [ecx+0x8],byte +0x0
pf_at 0x3e27
l_kernel_00024545: jz short 0x24579
pf_at 0x3e29
l_kernel_00024547: push ebp
pf_at 0x3e2a
l_kernel_00024548: mov ebp,esp
pf_at 0x3e2c
l_kernel_0002454a: push ebx
pf_at 0x3e2d
l_kernel_0002454b: push edi
pf_at 0x3e2e
l_kernel_0002454c: push esi
pf_at 0x3e2f
l_kernel_0002454d: mov al,[ebp+0xc]
pf_at 0x3e32
l_kernel_00024550: mov ah,[ebp+0x8]
pf_at 0x3e35
l_kernel_00024553: mov esi,[ecx+0x4]
pf_at 0x3e38
l_kernel_00024556: imul esi,[ecx]
pf_at 0x3e3b
l_kernel_00024559: xor edi,edi
pf_at 0x3e3d
l_kernel_0002455b: cmp esi,edi
pf_at 0x3e3f
l_kernel_0002455d: jz short 0x24575
pf_at 0x3e41
l_kernel_0002455f: mov ebx,[ecx+0x8]
pf_at 0x3e44
l_kernel_00024562: mov [ebx+edi*4],dl
pf_at 0x3e47
l_kernel_00024565: mov [ebx+edi*4+0x1],ah
pf_at 0x3e4b
l_kernel_00024569: mov [ebx+edi*4+0x2],al
pf_at 0x3e4f
l_kernel_0002456d: mov byte [ebx+edi*4+0x3],0xff
pf_at 0x3e54
l_kernel_00024572: inc edi
pf_at 0x3e55
l_kernel_00024573: jmp short 0x2455b
pf_at 0x3e57
l_kernel_00024575: pop esi
pf_at 0x3e58
l_kernel_00024576: pop edi
pf_at 0x3e59
l_kernel_00024577: pop ebx
pf_at 0x3e5a
l_kernel_00024578: pop ebp
pf_at 0x3e5b
l_kernel_00024579: ret
pf_at 0x3e5c
l_kernel_0002457a: push ebp
pf_at 0x3e5d
l_kernel_0002457b: mov ebp,esp
pf_at 0x3e5f
l_kernel_0002457d: push ebx
pf_at 0x3e60
l_kernel_0002457e: push edi
pf_at 0x3e61
l_kernel_0002457f: push esi
pf_at 0x3e62
l_kernel_00024580: sub esp,0x3bc
pf_at 0x3e68
l_kernel_00024586: and dword [dword 0x6f3f8],byte +0x0
pf_at 0x3e6f
l_kernel_0002458d: mov [ebp-0x18],ecx
pf_at 0x3e72
l_kernel_00024590: and dword [dword 0x6f3fc],byte +0x0
pf_at 0x3e79
l_kernel_00024597: and dword [dword 0x6f400],byte +0x0
pf_at 0x3e80
l_kernel_0002459e: mov byte [dword 0x6f404],0x0
pf_at 0x3e87
l_kernel_000245a5: mov cl,[dword 0x3f0d4]
pf_at 0x3e8d
l_kernel_000245ab: mov eax,[0x3f0c8]
pf_at 0x3e92
l_kernel_000245b0: mov [ebp-0x1c],eax
pf_at 0x3e95
l_kernel_000245b3: test eax,eax
pf_at 0x3e97
l_kernel_000245b5: setnz al
pf_at 0x3e9a
l_kernel_000245b8: and al,cl
pf_at 0x3e9c
l_kernel_000245ba: xor edi,edi
pf_at 0x3e9e
l_kernel_000245bc: mov dword [ebp-0x10],0x0
pf_at 0x3ea5
l_kernel_000245c3: cmp al,0x1
pf_at 0x3ea7
l_kernel_000245c5: jnz short 0x245fe
pf_at 0x3ea9
l_kernel_000245c7: mov [ebp-0x14],cl
pf_at 0x3eac
l_kernel_000245ca: mov ecx,[dword 0x3f0bc]
pf_at 0x3eb2
l_kernel_000245d0: mov eax,[ebp-0x1c]
pf_at 0x3eb5
l_kernel_000245d3: lea esi,[eax-0x1]
pf_at 0x3eb8
l_kernel_000245d6: mov dword [ebp-0x10],0x0
pf_at 0x3ebf
l_kernel_000245dd: mov ebx,0x2f1b4
pf_at 0x3ec4
l_kernel_000245e2: sub ecx,byte +0x1
pf_at 0x3ec7
l_kernel_000245e5: jc short 0x245fb
pf_at 0x3ec9
l_kernel_000245e7: mov eax,[ebx]
pf_at 0x3ecb
l_kernel_000245e9: add eax,esi
pf_at 0x3ecd
l_kernel_000245eb: xor edx,edx
pf_at 0x3ecf
l_kernel_000245ed: div dword [ebp-0x1c]
pf_at 0x3ed2
l_kernel_000245f0: add [ebp-0x10],eax
pf_at 0x3ed5
l_kernel_000245f3: add ebx,0x100
pf_at 0x3edb
l_kernel_000245f9: jmp short 0x245e2
pf_at 0x3edd
l_kernel_000245fb: mov cl,[ebp-0x14]
pf_at 0x3ee0
l_kernel_000245fe: xor cl,0x1
pf_at 0x3ee3
l_kernel_00024601: mov eax,[0x3f0c0]
pf_at 0x3ee8
l_kernel_00024606: mov [ebp-0x14],eax
pf_at 0x3eeb
l_kernel_00024609: test eax,eax
pf_at 0x3eed
l_kernel_0002460b: setz al
pf_at 0x3ef0
l_kernel_0002460e: or al,cl
pf_at 0x3ef2
l_kernel_00024610: mov ecx,[dword 0x3f0c4]
pf_at 0x3ef8
l_kernel_00024616: mov [ebp-0x20],ecx
pf_at 0x3efb
l_kernel_00024619: test ecx,ecx
pf_at 0x3efd
l_kernel_0002461b: setz cl
pf_at 0x3f00
l_kernel_0002461e: or cl,al
pf_at 0x3f02
l_kernel_00024620: jnz near 0x246a9
pf_at 0x3f08
l_kernel_00024626: mov eax,[0x3f0d0]
pf_at 0x3f0d
l_kernel_0002462b: xor edx,edx
pf_at 0x3f0f
l_kernel_0002462d: mov ecx,[ebp-0x14]
pf_at 0x3f12
l_kernel_00024630: div ecx
pf_at 0x3f14
l_kernel_00024632: mov esi,eax
pf_at 0x3f16
l_kernel_00024634: mov ebx,[dword 0x3f0bc]
pf_at 0x3f1c
l_kernel_0002463a: shl ebx,byte 0x8
pf_at 0x3f1f
l_kernel_0002463d: mov eax,ebx
pf_at 0x3f21
l_kernel_0002463f: xor edx,edx
pf_at 0x3f23
l_kernel_00024641: div ecx
pf_at 0x3f25
l_kernel_00024643: lea eax,[ebx+ecx]
pf_at 0x3f28
l_kernel_00024646: sub eax,edx
pf_at 0x3f2a
l_kernel_00024648: test edx,edx
pf_at 0x3f2c
l_kernel_0002464a: cmovz eax,ebx
pf_at 0x3f2f
l_kernel_0002464d: xor edx,edx
pf_at 0x3f31
l_kernel_0002464f: div ecx
pf_at 0x3f33
l_kernel_00024651: mov [ebp-0x2c],esi
pf_at 0x3f36
l_kernel_00024654: sub esi,eax
pf_at 0x3f38
l_kernel_00024656: mov [ebp-0x24],esi
pf_at 0x3f3b
l_kernel_00024659: inc eax
pf_at 0x3f3c
l_kernel_0002465a: mov [ebp-0x28],eax
pf_at 0x3f3f
l_kernel_0002465d: push byte +0x21
pf_at 0x3f41
l_kernel_0002465f: pop esi
pf_at 0x3f42
l_kernel_00024660: mov eax,[ebp-0x10]
pf_at 0x3f45
l_kernel_00024663: mov ecx,eax
pf_at 0x3f47
l_kernel_00024665: dec esi
pf_at 0x3f48
l_kernel_00024666: jz short 0x246a7
pf_at 0x3f4a
l_kernel_00024668: lea ebx,[ecx*4+0x8]
pf_at 0x3f51
l_kernel_0002466f: mov eax,ebx
pf_at 0x3f53
l_kernel_00024671: xor edx,edx
pf_at 0x3f55
l_kernel_00024673: mov edi,[ebp-0x14]
pf_at 0x3f58
l_kernel_00024676: div edi
pf_at 0x3f5a
l_kernel_00024678: lea eax,[edi+ecx*4]
pf_at 0x3f5d
l_kernel_0002467b: add eax,byte +0x8
pf_at 0x3f60
l_kernel_0002467e: sub eax,edx
pf_at 0x3f62
l_kernel_00024680: test edx,edx
pf_at 0x3f64
l_kernel_00024682: cmovz eax,ebx
pf_at 0x3f67
l_kernel_00024685: xor edx,edx
pf_at 0x3f69
l_kernel_00024687: div edi
pf_at 0x3f6b
l_kernel_00024689: xor edi,edi
pf_at 0x3f6d
l_kernel_0002468b: mov edx,[ebp-0x28]
pf_at 0x3f70
l_kernel_0002468e: add edx,eax
pf_at 0x3f72
l_kernel_00024690: cmp [ebp-0x2c],edx
pf_at 0x3f75
l_kernel_00024693: jna short 0x246a9
pf_at 0x3f77
l_kernel_00024695: not eax
pf_at 0x3f79
l_kernel_00024697: add eax,[ebp-0x24]
pf_at 0x3f7c
l_kernel_0002469a: xor edx,edx
pf_at 0x3f7e
l_kernel_0002469c: div dword [ebp-0x20]
pf_at 0x3f81
l_kernel_0002469f: mov edi,ecx
pf_at 0x3f83
l_kernel_000246a1: cmp eax,ecx
pf_at 0x3f85
l_kernel_000246a3: ja short 0x24663
pf_at 0x3f87
l_kernel_000246a5: jmp short 0x246a9
pf_at 0x3f89
l_kernel_000246a7: mov edi,ecx
pf_at 0x3f8b
l_kernel_000246a9: mov eax,edi
pf_at 0x3f8d
l_kernel_000246ab: mov edx,[ebp-0x10]
pf_at 0x3f90
l_kernel_000246ae: sub eax,edx
pf_at 0x3f92
l_kernel_000246b0: imul eax,[ebp-0x1c]
pf_at 0x3f96
l_kernel_000246b4: xor ecx,ecx
pf_at 0x3f98
l_kernel_000246b6: cmp edi,edx
pf_at 0x3f9a
l_kernel_000246b8: cmovna eax,ecx
pf_at 0x3f9d
l_kernel_000246bb: lea edi,[ebp-0x6c]
pf_at 0x3fa0
l_kernel_000246be: mov ecx,eax
pf_at 0x3fa2
l_kernel_000246c0: mov edx,edi
pf_at 0x3fa4
l_kernel_000246c2: call 0x24ac5
pf_at 0x3fa9
l_kernel_000246c7: call 0x20788
pf_at 0x3fae
l_kernel_000246cc: lea ebx,[ebp-0x4c]
pf_at 0x3fb1
l_kernel_000246cf: mov ecx,eax
pf_at 0x3fb3
l_kernel_000246d1: mov edx,ebx
pf_at 0x3fb5
l_kernel_000246d3: call 0x24ac5
pf_at 0x3fba
l_kernel_000246d8: lea eax,[ebp-0x24c]
pf_at 0x3fc0
l_kernel_000246de: mov [esp],eax
pf_at 0x3fc3
l_kernel_000246e1: mov dword [esp+0x14],0x2cb9e
pf_at 0x3fcb
l_kernel_000246e9: mov dword [esp+0x10],0x2cb9a
pf_at 0x3fd3
l_kernel_000246f1: mov dword [esp+0xc],0x2cb8d
pf_at 0x3fdb
l_kernel_000246f9: mov dword [esp+0x8],0x2cb81
pf_at 0x3fe3
l_kernel_00024701: mov dword [esp+0x4],0xa0
pf_at 0x3feb
l_kernel_00024709: call 0x216bc
pf_at 0x3ff0
l_kernel_0002470e: mov [esp+0x10],ebx
pf_at 0x3ff4
l_kernel_00024712: mov [esp+0xc],edi
pf_at 0x3ff8
l_kernel_00024716: lea ebx,[ebp-0x2ac]
pf_at 0x3ffe
l_kernel_0002471c: mov [esp],ebx
pf_at 0x4001
l_kernel_0002471f: mov dword [esp+0x8],0x2cbaf
pf_at 0x4009
l_kernel_00024727: mov dword [esp+0x4],0x60
pf_at 0x4011
l_kernel_0002472f: call 0x216bc
pf_at 0x4016
l_kernel_00024734: lea edi,[ebp-0x1ac]
pf_at 0x401c
l_kernel_0002473a: mov [esp],edi
pf_at 0x401f
l_kernel_0002473d: mov dword [esp+0xc],0x2cbd0
pf_at 0x4027
l_kernel_00024745: mov dword [esp+0x8],0x2cbca
pf_at 0x402f
l_kernel_0002474d: mov dword [esp+0x4],0x40
pf_at 0x4037
l_kernel_00024755: call 0x216bc
pf_at 0x403c
l_kernel_0002475a: xor esi,esi
pf_at 0x403e
l_kernel_0002475c: inc esi
pf_at 0x403f
l_kernel_0002475d: mov [esp],esi
pf_at 0x4042
l_kernel_00024760: mov ecx,0x4f1f8
pf_at 0x4047
l_kernel_00024765: mov edx,0x2ca43
pf_at 0x404c
l_kernel_0002476a: call 0x24b4a
pf_at 0x4051
l_kernel_0002476f: and dword [esp],byte +0x0
pf_at 0x4055
l_kernel_00024773: mov ecx,0x4f1f8
pf_at 0x405a
l_kernel_00024778: mov edx,0x2ca9c
pf_at 0x405f
l_kernel_0002477d: call 0x24b4a
pf_at 0x4064
l_kernel_00024782: mov [esp],esi
pf_at 0x4067
l_kernel_00024785: mov ecx,0x4f1f8
pf_at 0x406c
l_kernel_0002478a: lea edx,[ebp-0x24c]
pf_at 0x4072
l_kernel_00024790: call 0x24b4a
pf_at 0x4077
l_kernel_00024795: mov [esp],esi
pf_at 0x407a
l_kernel_00024798: mov ecx,0x4f1f8
pf_at 0x407f
l_kernel_0002479d: mov edx,edi
pf_at 0x4081
l_kernel_0002479f: call 0x24b4a
pf_at 0x4086
l_kernel_000247a4: mov [esp],esi
pf_at 0x4089
l_kernel_000247a7: mov ecx,0x4f1f8
pf_at 0x408e
l_kernel_000247ac: mov edx,ebx
pf_at 0x4090
l_kernel_000247ae: call 0x24b4a
pf_at 0x4095
l_kernel_000247b3: and dword [esp],byte +0x0
pf_at 0x4099
l_kernel_000247b7: mov ecx,0x4f1f8
pf_at 0x409e
l_kernel_000247bc: mov edx,0x2ca9c
pf_at 0x40a3
l_kernel_000247c1: call 0x24b4a
pf_at 0x40a8
l_kernel_000247c6: mov [esp],esi
pf_at 0x40ab
l_kernel_000247c9: mov ecx,0x4f1f8
pf_at 0x40b0
l_kernel_000247ce: mov edx,0x2cbd6
pf_at 0x40b5
l_kernel_000247d3: call 0x24b4a
pf_at 0x40ba
l_kernel_000247d8: and dword [esp],byte +0x0
pf_at 0x40be
l_kernel_000247dc: mov ecx,0x4f1f8
pf_at 0x40c3
l_kernel_000247e1: mov edx,0x2ca9c
pf_at 0x40c8
l_kernel_000247e6: call 0x24b4a
pf_at 0x40cd
l_kernel_000247eb: mov [esp],esi
pf_at 0x40d0
l_kernel_000247ee: mov ecx,0x4f1f8
pf_at 0x40d5
l_kernel_000247f3: mov edx,0x2cbe5
pf_at 0x40da
l_kernel_000247f8: call 0x24b4a
pf_at 0x40df
l_kernel_000247fd: and dword [esp],byte +0x0
pf_at 0x40e3
l_kernel_00024801: mov ecx,0x4f1f8
pf_at 0x40e8
l_kernel_00024806: mov edx,0x2ca9c
pf_at 0x40ed
l_kernel_0002480b: call 0x24b4a
pf_at 0x40f2
l_kernel_00024810: mov eax,[ebp-0x18]
pf_at 0x40f5
l_kernel_00024813: cmp eax,esi
pf_at 0x40f7
l_kernel_00024815: adc eax,byte +0x0
pf_at 0x40fa
l_kernel_00024818: mov [ebp-0x18],eax
pf_at 0x40fd
l_kernel_0002481b: xor eax,eax
pf_at 0x40ff
l_kernel_0002481d: mov dword [ebp-0x14],0x3f1cc
pf_at 0x4106
l_kernel_00024824: cmp eax,[dword 0x3f1c8]
pf_at 0x410c
l_kernel_0002482a: jnc near 0x248df
pf_at 0x4112
l_kernel_00024830: mov [ebp-0x20],eax
pf_at 0x4115
l_kernel_00024833: shl eax,byte 0x8
pf_at 0x4118
l_kernel_00024836: cmp byte [eax+0x3f1cc],0x0
pf_at 0x411f
l_kernel_0002483d: jz short 0x248bc
pf_at 0x4121
l_kernel_0002483f: lea eax,[eax+0x3f1cc]
pf_at 0x4127
l_kernel_00024845: mov [esp],eax
pf_at 0x412a
l_kernel_00024848: call 0x20ccf
pf_at 0x412f
l_kernel_0002484d: xor ecx,ecx
pf_at 0x4131
l_kernel_0002484f: mov ebx,eax
pf_at 0x4133
l_kernel_00024851: mov [ebp-0x1c],eax
pf_at 0x4136
l_kernel_00024854: cmp ecx,[ebp-0x1c]
pf_at 0x4139
l_kernel_00024857: jnc short 0x248cf
pf_at 0x413b
l_kernel_00024859: cmp dword [dword 0x6f3f8],0x1ff
pf_at 0x4145
l_kernel_00024863: ja short 0x248cf
pf_at 0x4147
l_kernel_00024865: mov esi,ebx
pf_at 0x4149
l_kernel_00024867: mov edi,[ebp-0x18]
pf_at 0x414c
l_kernel_0002486a: sub esi,edi
pf_at 0x414e
l_kernel_0002486c: cmovnc ebx,edi
pf_at 0x4151
l_kernel_0002486f: mov eax,0xff
pf_at 0x4156
l_kernel_00024874: cmp ebx,eax
pf_at 0x4158
l_kernel_00024876: cmovnc ebx,eax
pf_at 0x415b
l_kernel_00024879: mov eax,[ebp-0x14]
pf_at 0x415e
l_kernel_0002487c: add eax,ecx
pf_at 0x4160
l_kernel_0002487e: mov [esp+0x4],eax
pf_at 0x4164
l_kernel_00024882: lea eax,[ebp-0x16c]
pf_at 0x416a
l_kernel_00024888: mov [esp],eax
pf_at 0x416d
l_kernel_0002488b: mov [esp+0x8],ebx
pf_at 0x4171
l_kernel_0002488f: mov [ebp-0x10],ecx
pf_at 0x4174
l_kernel_00024892: call 0x20c1d
pf_at 0x4179
l_kernel_00024897: mov byte [ebp+ebx-0x16c],0x0
pf_at 0x4181
l_kernel_0002489f: and dword [esp],byte +0x0
pf_at 0x4185
l_kernel_000248a3: mov ecx,0x4f1f8
pf_at 0x418a
l_kernel_000248a8: lea edx,[ebp-0x16c]
pf_at 0x4190
l_kernel_000248ae: call 0x24b4a
pf_at 0x4195
l_kernel_000248b3: mov ecx,[ebp-0x10]
pf_at 0x4198
l_kernel_000248b6: add ecx,edi
pf_at 0x419a
l_kernel_000248b8: mov ebx,esi
pf_at 0x419c
l_kernel_000248ba: jmp short 0x24854
pf_at 0x419e
l_kernel_000248bc: and dword [esp],byte +0x0
pf_at 0x41a2
l_kernel_000248c0: mov ecx,0x4f1f8
pf_at 0x41a7
l_kernel_000248c5: mov edx,0x2ca9c
pf_at 0x41ac
l_kernel_000248ca: call 0x24b4a
pf_at 0x41b1
l_kernel_000248cf: mov eax,[ebp-0x20]
pf_at 0x41b4
l_kernel_000248d2: inc eax
pf_at 0x41b5
l_kernel_000248d3: add dword [ebp-0x14],0x100
pf_at 0x41bc
l_kernel_000248da: jmp near 0x24824
pf_at 0x41c1
l_kernel_000248df: lea esi,[ebp-0x16c]
pf_at 0x41c7
l_kernel_000248e5: mov [esp],esi
pf_at 0x41ca
l_kernel_000248e8: mov dword [esp+0x10],0x3f0d8
pf_at 0x41d2
l_kernel_000248f0: mov dword [esp+0xc],0x2ca40
pf_at 0x41da
l_kernel_000248f8: mov dword [esp+0x8],0x2cb7a
pf_at 0x41e2
l_kernel_00024900: mov dword [esp+0x4],0x100
pf_at 0x41ea
l_kernel_00024908: call 0x216bc
pf_at 0x41ef
l_kernel_0002490d: mov [esp],esi
pf_at 0x41f2
l_kernel_00024910: xor esi,esi
pf_at 0x41f4
l_kernel_00024912: call 0x20ccf
pf_at 0x41f9
l_kernel_00024917: mov [ebp-0x10],eax
pf_at 0x41fc
l_kernel_0002491a: lea ebx,[ebp-0x3ac]
pf_at 0x4202
l_kernel_00024920: mov edi,[ebp-0x10]
pf_at 0x4205
l_kernel_00024923: mov ecx,[dword 0x6f3f8]
pf_at 0x420b
l_kernel_00024929: sub edi,esi
pf_at 0x420d
l_kernel_0002492b: jna short 0x24970
pf_at 0x420f
l_kernel_0002492d: cmp ecx,0x1ff
pf_at 0x4215
l_kernel_00024933: ja short 0x24993
pf_at 0x4217
l_kernel_00024935: mov eax,[ebp-0x18]
pf_at 0x421a
l_kernel_00024938: cmp edi,eax
pf_at 0x421c
l_kernel_0002493a: cmovnc edi,eax
pf_at 0x421f
l_kernel_0002493d: lea eax,[ebp+esi-0x16c]
pf_at 0x4226
l_kernel_00024944: mov [esp+0x4],eax
pf_at 0x422a
l_kernel_00024948: mov [esp],ebx
pf_at 0x422d
l_kernel_0002494b: mov [esp+0x8],edi
pf_at 0x4231
l_kernel_0002494f: call 0x20c1d
pf_at 0x4236
l_kernel_00024954: mov byte [ebp+edi-0x3ac],0x0
pf_at 0x423e
l_kernel_0002495c: and dword [esp],byte +0x0
pf_at 0x4242
l_kernel_00024960: mov ecx,0x4f1f8
pf_at 0x4247
l_kernel_00024965: mov edx,ebx
pf_at 0x4249
l_kernel_00024967: call 0x24b4a
pf_at 0x424e
l_kernel_0002496c: add esi,edi
pf_at 0x4250
l_kernel_0002496e: jmp short 0x24920
pf_at 0x4252
l_kernel_00024970: test ecx,ecx
pf_at 0x4254
l_kernel_00024972: jnz short 0x2498d
pf_at 0x4256
l_kernel_00024974: and dword [esp],byte +0x0
pf_at 0x425a
l_kernel_00024978: mov ecx,0x4f1f8
pf_at 0x425f
l_kernel_0002497d: mov edx,0x2ca9c
pf_at 0x4264
l_kernel_00024982: call 0x24b4a
pf_at 0x4269
l_kernel_00024987: mov ecx,[dword 0x6f3f8]
pf_at 0x426f
l_kernel_0002498d: cmp dword [ebp-0x10],byte +0x0
pf_at 0x4273
l_kernel_00024991: jz short 0x249c8
pf_at 0x4275
l_kernel_00024993: xor esi,esi
pf_at 0x4277
l_kernel_00024995: mov eax,[ebp-0x10]
pf_at 0x427a
l_kernel_00024998: xor edx,edx
pf_at 0x427c
l_kernel_0002499a: div dword [ebp-0x18]
pf_at 0x427f
l_kernel_0002499d: test edx,edx
pf_at 0x4281
l_kernel_0002499f: jz short 0x249a5
pf_at 0x4283
l_kernel_000249a1: mov esi,edx
pf_at 0x4285
l_kernel_000249a3: jmp short 0x249ca
pf_at 0x4287
l_kernel_000249a5: cmp ecx,0x1ff
pf_at 0x428d
l_kernel_000249ab: ja short 0x249ca
pf_at 0x428f
l_kernel_000249ad: and dword [esp],byte +0x0
pf_at 0x4293
l_kernel_000249b1: mov ecx,0x4f1f8
pf_at 0x4298
l_kernel_000249b6: mov edx,0x2ca9c
pf_at 0x429d
l_kernel_000249bb: call 0x24b4a
pf_at 0x42a2
l_kernel_000249c0: mov ecx,[dword 0x6f3f8]
pf_at 0x42a8
l_kernel_000249c6: jmp short 0x249ca
pf_at 0x42aa
l_kernel_000249c8: xor esi,esi
pf_at 0x42ac
l_kernel_000249ca: dec ecx
pf_at 0x42ad
l_kernel_000249cb: mov [dword 0x6f3fc],ecx
pf_at 0x42b3
l_kernel_000249d1: mov [dword 0x6f400],esi
pf_at 0x42b9
l_kernel_000249d7: mov byte [dword 0x6f404],0x1
pf_at 0x42c0
l_kernel_000249de: add esp,0x3bc
pf_at 0x42c6
l_kernel_000249e4: pop esi
pf_at 0x42c7
l_kernel_000249e5: pop edi
pf_at 0x42c8
l_kernel_000249e6: pop ebx
pf_at 0x42c9
l_kernel_000249e7: pop ebp
pf_at 0x42ca
l_kernel_000249e8: ret
pf_at 0x42cb
l_kernel_000249e9: test ecx,ecx
pf_at 0x42cd
l_kernel_000249eb: jz short 0x24a35
pf_at 0x42cf
l_kernel_000249ed: cmp byte [ecx+0xc],0x1
pf_at 0x42d3
l_kernel_000249f1: jnz short 0x24a35
pf_at 0x42d5
l_kernel_000249f3: push ebp
pf_at 0x42d6
l_kernel_000249f4: mov ebp,esp
pf_at 0x42d8
l_kernel_000249f6: push ebx
pf_at 0x42d9
l_kernel_000249f7: push edi
pf_at 0x42da
l_kernel_000249f8: push esi
pf_at 0x42db
l_kernel_000249f9: sub esp,byte +0xc
pf_at 0x42de
l_kernel_000249fc: mov edi,[ebp+0x10]
pf_at 0x42e1
l_kernel_000249ff: test edi,edi
pf_at 0x42e3
l_kernel_00024a01: jng short 0x24a2e
pf_at 0x42e5
l_kernel_00024a03: mov esi,[ebp+0xc]
pf_at 0x42e8
l_kernel_00024a06: test esi,esi
pf_at 0x42ea
l_kernel_00024a08: jng short 0x24a2e
pf_at 0x42ec
l_kernel_00024a0a: cmp dword [ecx+0x8],byte +0x0
pf_at 0x42f0
l_kernel_00024a0e: jz short 0x24a2e
pf_at 0x42f2
l_kernel_00024a10: xor eax,eax
pf_at 0x42f4
l_kernel_00024a12: test edx,edx
pf_at 0x42f6
l_kernel_00024a14: mov ebx,0x0
pf_at 0x42fb
l_kernel_00024a19: cmovg ebx,edx
pf_at 0x42fe
l_kernel_00024a1c: mov [ebp-0x14],ebx
pf_at 0x4301
l_kernel_00024a1f: mov ebx,edi
pf_at 0x4303
l_kernel_00024a21: mov edi,[ebp+0x8]
pf_at 0x4306
l_kernel_00024a24: add esi,edx
pf_at 0x4308
l_kernel_00024a26: add ebx,edi
pf_at 0x430a
l_kernel_00024a28: mov edx,esi
pf_at 0x430c
l_kernel_00024a2a: or edx,ebx
pf_at 0x430e
l_kernel_00024a2c: jns short 0x24a36
pf_at 0x4310
l_kernel_00024a2e: add esp,byte +0xc
pf_at 0x4313
l_kernel_00024a31: pop esi
pf_at 0x4314
l_kernel_00024a32: pop edi
pf_at 0x4315
l_kernel_00024a33: pop ebx
pf_at 0x4316
l_kernel_00024a34: pop ebp
pf_at 0x4317
l_kernel_00024a35: ret
pf_at 0x4318
l_kernel_00024a36: test edi,edi
pf_at 0x431a
l_kernel_00024a38: cmovg eax,edi
pf_at 0x431d
l_kernel_00024a3b: mov edi,[ecx]
pf_at 0x431f
l_kernel_00024a3d: cmp esi,edi
pf_at 0x4321
l_kernel_00024a3f: cmovc edi,esi
pf_at 0x4324
l_kernel_00024a42: mov edx,[ecx+0x4]
pf_at 0x4327
l_kernel_00024a45: cmp ebx,edx
pf_at 0x4329
l_kernel_00024a47: cmovc edx,ebx
pf_at 0x432c
l_kernel_00024a4a: mov [ebp-0x10],edx
pf_at 0x432f
l_kernel_00024a4d: cmp eax,[ebp-0x10]
pf_at 0x4332
l_kernel_00024a50: jnl short 0x24a2e
pf_at 0x4334
l_kernel_00024a52: mov esi,[ebp-0x14]
pf_at 0x4337
l_kernel_00024a55: mov [ebp-0x18],eax
pf_at 0x433a
l_kernel_00024a58: cmp esi,edi
pf_at 0x433c
l_kernel_00024a5a: jnl short 0x24a98
pf_at 0x433e
l_kernel_00024a5c: cmp byte [ecx+0xc],0x1
pf_at 0x4342
l_kernel_00024a60: jnz short 0x24a95
pf_at 0x4344
l_kernel_00024a62: mov ebx,[ecx+0x8]
pf_at 0x4347
l_kernel_00024a65: test ebx,ebx
pf_at 0x4349
l_kernel_00024a67: jz short 0x24a95
pf_at 0x434b
l_kernel_00024a69: mov edx,[ecx]
pf_at 0x434d
l_kernel_00024a6b: cmp edx,esi
pf_at 0x434f
l_kernel_00024a6d: jna short 0x24a95
pf_at 0x4351
l_kernel_00024a6f: cmp [ecx+0x4],eax
pf_at 0x4354
l_kernel_00024a72: jna short 0x24a95
pf_at 0x4356
l_kernel_00024a74: imul edx,eax
pf_at 0x4359
l_kernel_00024a77: add edx,esi
pf_at 0x435b
l_kernel_00024a79: mov al,[ebp+0x14]
pf_at 0x435e
l_kernel_00024a7c: mov [ebx+edx*4],al
pf_at 0x4361
l_kernel_00024a7f: mov al,[ebp+0x18]
pf_at 0x4364
l_kernel_00024a82: mov [ebx+edx*4+0x1],al
pf_at 0x4368
l_kernel_00024a86: mov al,[ebp+0x1c]
pf_at 0x436b
l_kernel_00024a89: mov [ebx+edx*4+0x2],al
pf_at 0x436f
l_kernel_00024a8d: mov eax,[ebp-0x18]
pf_at 0x4372
l_kernel_00024a90: mov byte [ebx+edx*4+0x3],0xff
pf_at 0x4377
l_kernel_00024a95: inc esi
pf_at 0x4378
l_kernel_00024a96: jmp short 0x24a58
pf_at 0x437a
l_kernel_00024a98: inc eax
pf_at 0x437b
l_kernel_00024a99: jmp short 0x24a4d
pf_at 0x437d
l_kernel_00024a9b: push ebp
pf_at 0x437e
l_kernel_00024a9c: mov ebp,esp
pf_at 0x4380
l_kernel_00024a9e: mov al,0xa
pf_at 0x4382
l_kernel_00024aa0: mov dx,0x3d4
pf_at 0x4386
l_kernel_00024aa4: out dx,al
pf_at 0x4387
l_kernel_00024aa5: test ecx,ecx
pf_at 0x4389
l_kernel_00024aa7: push byte +0xd
pf_at 0x438b
l_kernel_00024aa9: pop ecx
pf_at 0x438c
l_kernel_00024aaa: push byte +0x20
pf_at 0x438e
l_kernel_00024aac: pop eax
pf_at 0x438f
l_kernel_00024aad: cmovnz eax,ecx
pf_at 0x4392
l_kernel_00024ab0: mov dx,0x3d5
pf_at 0x4396
l_kernel_00024ab4: out dx,al
pf_at 0x4397
l_kernel_00024ab5: mov al,0xb
pf_at 0x4399
l_kernel_00024ab7: mov dx,0x3d4
pf_at 0x439d
l_kernel_00024abb: out dx,al
pf_at 0x439e
l_kernel_00024abc: mov al,0xe
pf_at 0x43a0
l_kernel_00024abe: mov dx,0x3d5
pf_at 0x43a4
l_kernel_00024ac2: out dx,al
pf_at 0x43a5
l_kernel_00024ac3: pop ebp
pf_at 0x43a6
l_kernel_00024ac4: ret
pf_at 0x43a7
l_kernel_00024ac5: push ebp
pf_at 0x43a8
l_kernel_00024ac6: mov ebp,esp
pf_at 0x43aa
l_kernel_00024ac8: push edi
pf_at 0x43ab
l_kernel_00024ac9: push esi
pf_at 0x43ac
l_kernel_00024aca: test edx,edx
pf_at 0x43ae
l_kernel_00024acc: jz short 0x24b46
pf_at 0x43b0
l_kernel_00024ace: mov esi,edx
pf_at 0x43b2
l_kernel_00024ad0: cmp ecx,0x40000000
pf_at 0x43b8
l_kernel_00024ad6: jc short 0x24b07
pf_at 0x43ba
l_kernel_00024ad8: mov edi,ecx
pf_at 0x43bc
l_kernel_00024ada: shr edi,byte 0x1e
pf_at 0x43bf
l_kernel_00024add: and ecx,0x3fffffff
pf_at 0x43c5
l_kernel_00024ae3: push byte +0xa
pf_at 0x43c7
l_kernel_00024ae5: pop edx
pf_at 0x43c8
l_kernel_00024ae6: mov eax,ecx
pf_at 0x43ca
l_kernel_00024ae8: mul edx
pf_at 0x43cc
l_kernel_00024aea: shld edx,eax,0x2
pf_at 0x43d0
l_kernel_00024aee: jz short 0x24b2d
pf_at 0x43d2
l_kernel_00024af0: sub esp,byte +0xc
pf_at 0x43d5
l_kernel_00024af3: push edx
pf_at 0x43d6
l_kernel_00024af4: push edi
pf_at 0x43d7
l_kernel_00024af5: push dword 0x2cc06
pf_at 0x43dc
l_kernel_00024afa: push byte +0x20
pf_at 0x43de
l_kernel_00024afc: push esi
pf_at 0x43df
l_kernel_00024afd: call 0x216bc
pf_at 0x43e4
l_kernel_00024b02: add esp,byte +0x20
pf_at 0x43e7
l_kernel_00024b05: jmp short 0x24b46
pf_at 0x43e9
l_kernel_00024b07: cmp ecx,0x100000
pf_at 0x43ef
l_kernel_00024b0d: jc short 0x24b1a
pf_at 0x43f1
l_kernel_00024b0f: shr ecx,byte 0x14
pf_at 0x43f4
l_kernel_00024b12: push ecx
pf_at 0x43f5
l_kernel_00024b13: push dword 0x2cc15
pf_at 0x43fa
l_kernel_00024b18: jmp short 0x24b3b
pf_at 0x43fc
l_kernel_00024b1a: cmp ecx,0x400
pf_at 0x4402
l_kernel_00024b20: jc short 0x24b35
pf_at 0x4404
l_kernel_00024b22: shr ecx,byte 0xa
pf_at 0x4407
l_kernel_00024b25: push ecx
pf_at 0x4408
l_kernel_00024b26: push dword 0x2cc1b
pf_at 0x440d
l_kernel_00024b2b: jmp short 0x24b3b
pf_at 0x440f
l_kernel_00024b2d: push edi
pf_at 0x4410
l_kernel_00024b2e: push dword 0x2cc0f
pf_at 0x4415
l_kernel_00024b33: jmp short 0x24b3b
pf_at 0x4417
l_kernel_00024b35: push ecx
pf_at 0x4418
l_kernel_00024b36: push dword 0x2cc21
pf_at 0x441d
l_kernel_00024b3b: push byte +0x20
pf_at 0x441f
l_kernel_00024b3d: push esi
pf_at 0x4420
l_kernel_00024b3e: call 0x216bc
pf_at 0x4425
l_kernel_00024b43: add esp,byte +0x10
pf_at 0x4428
l_kernel_00024b46: pop esi
pf_at 0x4429
l_kernel_00024b47: pop edi
pf_at 0x442a
l_kernel_00024b48: pop ebp
pf_at 0x442b
l_kernel_00024b49: ret
pf_at 0x442c
l_kernel_00024b4a: mov eax,[ecx+0x20200]
pf_at 0x4432
l_kernel_00024b50: cmp eax,0x1ff
pf_at 0x4437
l_kernel_00024b55: ja short 0x24ba3
pf_at 0x4439
l_kernel_00024b57: push ebp
pf_at 0x443a
l_kernel_00024b58: mov ebp,esp
pf_at 0x443c
l_kernel_00024b5a: push ebx
pf_at 0x443d
l_kernel_00024b5b: push edi
pf_at 0x443e
l_kernel_00024b5c: push esi
pf_at 0x443f
l_kernel_00024b5d: sub esp,byte +0xc
pf_at 0x4442
l_kernel_00024b60: mov esi,ecx
pf_at 0x4444
l_kernel_00024b62: mov bl,[ebp+0x8]
pf_at 0x4447
l_kernel_00024b65: lea ecx,[eax+0x1]
pf_at 0x444a
l_kernel_00024b68: mov [esi+0x20200],ecx
pf_at 0x4450
l_kernel_00024b6e: imul edi,eax,dword 0x101
pf_at 0x4456
l_kernel_00024b74: test edx,edx
pf_at 0x4458
l_kernel_00024b76: mov eax,0x2ca9c
pf_at 0x445d
l_kernel_00024b7b: cmovnz eax,edx
pf_at 0x4460
l_kernel_00024b7e: lea ecx,[esi+edi]
pf_at 0x4463
l_kernel_00024b81: push eax
pf_at 0x4464
l_kernel_00024b82: push dword 0x2cb77
pf_at 0x4469
l_kernel_00024b87: push dword 0x100
pf_at 0x446e
l_kernel_00024b8c: push ecx
pf_at 0x446f
l_kernel_00024b8d: call 0x216bc
pf_at 0x4474
l_kernel_00024b92: add esp,byte +0x10
pf_at 0x4477
l_kernel_00024b95: mov [esi+edi+0x100],bl
pf_at 0x447e
l_kernel_00024b9c: add esp,byte +0xc
pf_at 0x4481
l_kernel_00024b9f: pop esi
pf_at 0x4482
l_kernel_00024ba0: pop edi
pf_at 0x4483
l_kernel_00024ba1: pop ebx
pf_at 0x4484
l_kernel_00024ba2: pop ebp
pf_at 0x4485
l_kernel_00024ba3: ret
pf_at 0x4486
l_kernel_00024ba4: test edx,edx
pf_at 0x4488
l_kernel_00024ba6: jz short 0x24bb8
pf_at 0x448a
l_kernel_00024ba8: movzx eax,cl
pf_at 0x448d
l_kernel_00024bab: cmp edx,byte +0x8
pf_at 0x4490
l_kernel_00024bae: jc short 0x24bbb
pf_at 0x4492
l_kernel_00024bb0: add dl,0xf8
pf_at 0x4495
l_kernel_00024bb3: mov ecx,edx
pf_at 0x4497
l_kernel_00024bb5: shl eax,cl
pf_at 0x4499
l_kernel_00024bb7: ret
pf_at 0x449a
l_kernel_00024bb8: xor eax,eax
pf_at 0x449c
l_kernel_00024bba: ret
pf_at 0x449d
l_kernel_00024bbb: push ebp
pf_at 0x449e
l_kernel_00024bbc: mov ebp,esp
pf_at 0x44a0
l_kernel_00024bbe: push esi
pf_at 0x44a1
l_kernel_00024bbf: mov esi,eax
pf_at 0x44a3
l_kernel_00024bc1: mov ecx,edx
pf_at 0x44a5
l_kernel_00024bc3: shl esi,cl
pf_at 0x44a7
l_kernel_00024bc5: sub esi,eax
pf_at 0x44a9
l_kernel_00024bc7: add esi,byte +0x7f
pf_at 0x44ac
l_kernel_00024bca: mov ecx,0xff
pf_at 0x44b1
l_kernel_00024bcf: mov eax,esi
pf_at 0x44b3
l_kernel_00024bd1: xor edx,edx
pf_at 0x44b5
l_kernel_00024bd3: div ecx
pf_at 0x44b7
l_kernel_00024bd5: pop esi
pf_at 0x44b8
l_kernel_00024bd6: pop ebp
pf_at 0x44b9
l_kernel_00024bd7: ret
pf_at 0x44ba
l_kernel_00024bd8: test ecx,ecx
pf_at 0x44bc
l_kernel_00024bda: jz short 0x24c34
pf_at 0x44be
l_kernel_00024bdc: push ebp
pf_at 0x44bf
l_kernel_00024bdd: mov ebp,esp
pf_at 0x44c1
l_kernel_00024bdf: push edi
pf_at 0x44c2
l_kernel_00024be0: push esi
pf_at 0x44c3
l_kernel_00024be1: sub esp,byte +0x10
pf_at 0x44c6
l_kernel_00024be4: mov esi,ecx
pf_at 0x44c8
l_kernel_00024be6: mov dword [esp],0x12c000
pf_at 0x44cf
l_kernel_00024bed: call 0x20ae5
pf_at 0x44d4
l_kernel_00024bf2: test eax,eax
pf_at 0x44d6
l_kernel_00024bf4: jz short 0x24c37
pf_at 0x44d8
l_kernel_00024bf6: mov edi,eax
pf_at 0x44da
l_kernel_00024bf8: mov eax,[esi+0x8]
pf_at 0x44dd
l_kernel_00024bfb: test eax,eax
pf_at 0x44df
l_kernel_00024bfd: jz short 0x24c07
pf_at 0x44e1
l_kernel_00024bff: mov [esp],eax
pf_at 0x44e4
l_kernel_00024c02: call 0x20aee
pf_at 0x44e9
l_kernel_00024c07: mov dword [esi],0x280
pf_at 0x44ef
l_kernel_00024c0d: mov dword [esi+0x4],0x1e0
pf_at 0x44f6
l_kernel_00024c14: mov [esi+0x8],edi
pf_at 0x44f9
l_kernel_00024c17: mov byte [esi+0xc],0x1
pf_at 0x44fd
l_kernel_00024c1b: mov [esp],edi
pf_at 0x4500
l_kernel_00024c1e: mov dword [esp+0x8],0x12c000
pf_at 0x4508
l_kernel_00024c26: and dword [esp+0x4],byte +0x0
pf_at 0x450d
l_kernel_00024c2b: call 0x20c84
pf_at 0x4512
l_kernel_00024c30: mov al,0x1
pf_at 0x4514
l_kernel_00024c32: jmp short 0x24c39
pf_at 0x4516
l_kernel_00024c34: xor eax,eax
pf_at 0x4518
l_kernel_00024c36: ret
pf_at 0x4519
l_kernel_00024c37: xor eax,eax
pf_at 0x451b
l_kernel_00024c39: add esp,byte +0x10
pf_at 0x451e
l_kernel_00024c3c: pop esi
pf_at 0x451f
l_kernel_00024c3d: pop edi
pf_at 0x4520
l_kernel_00024c3e: pop ebp
pf_at 0x4521
l_kernel_00024c3f: ret
pf_at 0x4522
l_kernel_00024c40: push ebp
pf_at 0x4523
l_kernel_00024c41: mov ebp,esp
pf_at 0x4525
l_kernel_00024c43: mov eax,ecx
pf_at 0x4527
l_kernel_00024c45: and dword [ecx],byte +0x0
pf_at 0x452a
l_kernel_00024c48: and dword [ecx+0x4],byte +0x0
pf_at 0x452e
l_kernel_00024c4c: and dword [ecx+0x8],byte +0x0
pf_at 0x4532
l_kernel_00024c50: and dword [ecx+0xc],byte +0x0
pf_at 0x4536
l_kernel_00024c54: and dword [ecx+0x10],byte +0x0
pf_at 0x453a
l_kernel_00024c58: and dword [ecx+0x14],byte +0x0
pf_at 0x453e
l_kernel_00024c5c: and dword [ecx+0x18],byte +0x0
pf_at 0x4542
l_kernel_00024c60: and dword [ecx+0x1c],byte +0x0
pf_at 0x4546
l_kernel_00024c64: pop ebp
pf_at 0x4547
l_kernel_00024c65: ret
pf_at 0x4548
l_kernel_00024c66: push ebp
pf_at 0x4549
l_kernel_00024c67: mov ebp,esp
pf_at 0x454b
l_kernel_00024c69: push edi
pf_at 0x454c
l_kernel_00024c6a: push esi
pf_at 0x454d
l_kernel_00024c6b: sub esp,byte +0x10
pf_at 0x4550
l_kernel_00024c6e: mov esi,edx
pf_at 0x4552
l_kernel_00024c70: mov edi,ecx
pf_at 0x4554
l_kernel_00024c72: test edx,edx
pf_at 0x4556
l_kernel_00024c74: mov eax,0x2ca9c
pf_at 0x455b
l_kernel_00024c79: cmovz esi,eax
pf_at 0x455e
l_kernel_00024c7c: mov [esp],esi
pf_at 0x4561
l_kernel_00024c7f: call 0x20ccf
pf_at 0x4566
l_kernel_00024c84: mov [esp],eax
pf_at 0x4569
l_kernel_00024c87: mov ecx,edi
pf_at 0x456b
l_kernel_00024c89: mov edx,esi
pf_at 0x456d
l_kernel_00024c8b: call 0x24f5c
pf_at 0x4572
l_kernel_00024c90: add esp,byte +0x10
pf_at 0x4575
l_kernel_00024c93: pop esi
pf_at 0x4576
l_kernel_00024c94: pop edi
pf_at 0x4577
l_kernel_00024c95: pop ebp
pf_at 0x4578
l_kernel_00024c96: ret
pf_at 0x4579
l_kernel_00024c97: push ebp
pf_at 0x457a
l_kernel_00024c98: mov ebp,esp
pf_at 0x457c
l_kernel_00024c9a: push ebx
pf_at 0x457d
l_kernel_00024c9b: push edi
pf_at 0x457e
l_kernel_00024c9c: push esi
pf_at 0x457f
l_kernel_00024c9d: sub esp,byte +0xc
pf_at 0x4582
l_kernel_00024ca0: mov edi,ecx
pf_at 0x4584
l_kernel_00024ca2: test ecx,ecx
pf_at 0x4586
l_kernel_00024ca4: setz al
pf_at 0x4589
l_kernel_00024ca7: test edx,edx
pf_at 0x458b
l_kernel_00024ca9: setz cl
pf_at 0x458e
l_kernel_00024cac: or cl,al
pf_at 0x4590
l_kernel_00024cae: jnz near 0x24da5
pf_at 0x4596
l_kernel_00024cb4: mov esi,edx
pf_at 0x4598
l_kernel_00024cb6: mov ecx,edi
pf_at 0x459a
l_kernel_00024cb8: call 0x24fea
pf_at 0x459f
l_kernel_00024cbd: test eax,eax
pf_at 0x45a1
l_kernel_00024cbf: js short 0x24ccc
pf_at 0x45a3
l_kernel_00024cc1: mov edx,[dword 0x70414]
pf_at 0x45a9
l_kernel_00024cc7: jmp near 0x24d8e
pf_at 0x45ae
l_kernel_00024ccc: mov eax,[0x70410]
pf_at 0x45b3
l_kernel_00024cd1: inc eax
pf_at 0x45b4
l_kernel_00024cd2: mov ecx,[dword 0x70418]
pf_at 0x45ba
l_kernel_00024cd8: cmp ecx,eax
pf_at 0x45bc
l_kernel_00024cda: jnc short 0x24d58
pf_at 0x45be
l_kernel_00024cdc: test ecx,ecx
pf_at 0x45c0
l_kernel_00024cde: push byte +0x10
pf_at 0x45c2
l_kernel_00024ce0: pop ebx
pf_at 0x45c3
l_kernel_00024ce1: cmovnz ebx,ecx
pf_at 0x45c6
l_kernel_00024ce4: cmp ebx,eax
pf_at 0x45c8
l_kernel_00024ce6: jnc short 0x24cf2
pf_at 0x45ca
l_kernel_00024ce8: test ebx,ebx
pf_at 0x45cc
l_kernel_00024cea: js short 0x24cf0
pf_at 0x45ce
l_kernel_00024cec: add ebx,ebx
pf_at 0x45d0
l_kernel_00024cee: jmp short 0x24ce4
pf_at 0x45d2
l_kernel_00024cf0: mov ebx,eax
pf_at 0x45d4
l_kernel_00024cf2: mov eax,[0x70414]
pf_at 0x45d9
l_kernel_00024cf7: imul ecx,ebx,byte +0x28
pf_at 0x45dc
l_kernel_00024cfa: mov [esp+0x4],ecx
pf_at 0x45e0
l_kernel_00024cfe: mov [esp],eax
pf_at 0x45e3
l_kernel_00024d01: call 0x20b68
pf_at 0x45e8
l_kernel_00024d06: test eax,eax
pf_at 0x45ea
l_kernel_00024d08: jz near 0x24da5
pf_at 0x45f0
l_kernel_00024d0e: mov ecx,[dword 0x70418]
pf_at 0x45f6
l_kernel_00024d14: imul edx,ecx,byte +0x28
pf_at 0x45f9
l_kernel_00024d17: add edx,eax
pf_at 0x45fb
l_kernel_00024d19: add edx,byte +0x24
pf_at 0x45fe
l_kernel_00024d1c: cmp ecx,ebx
pf_at 0x4600
l_kernel_00024d1e: jnc short 0x24d4d
pf_at 0x4602
l_kernel_00024d20: and dword [edx-0x24],byte +0x0
pf_at 0x4606
l_kernel_00024d24: and dword [edx-0x20],byte +0x0
pf_at 0x460a
l_kernel_00024d28: and dword [edx-0x1c],byte +0x0
pf_at 0x460e
l_kernel_00024d2c: and dword [edx-0x18],byte +0x0
pf_at 0x4612
l_kernel_00024d30: and dword [edx-0x14],byte +0x0
pf_at 0x4616
l_kernel_00024d34: and dword [edx-0x10],byte +0x0
pf_at 0x461a
l_kernel_00024d38: and dword [edx-0xc],byte +0x0
pf_at 0x461e
l_kernel_00024d3c: and dword [edx-0x8],byte +0x0
pf_at 0x4622
l_kernel_00024d40: and dword [edx-0x4],byte +0x0
pf_at 0x4626
l_kernel_00024d44: mov byte [edx],0x0
pf_at 0x4629
l_kernel_00024d47: inc ecx
pf_at 0x462a
l_kernel_00024d48: add edx,byte +0x28
pf_at 0x462d
l_kernel_00024d4b: jmp short 0x24d1c
pf_at 0x462f
l_kernel_00024d4d: mov [0x70414],eax
pf_at 0x4634
l_kernel_00024d52: mov [dword 0x70418],ebx
pf_at 0x463a
l_kernel_00024d58: mov [esp],edi
pf_at 0x463d
l_kernel_00024d5b: call 0x20ccf
pf_at 0x4642
l_kernel_00024d60: mov ecx,edi
pf_at 0x4644
l_kernel_00024d62: mov edx,eax
pf_at 0x4646
l_kernel_00024d64: call 0x24f9e
pf_at 0x464b
l_kernel_00024d69: test eax,eax
pf_at 0x464d
l_kernel_00024d6b: jz short 0x24da5
pf_at 0x464f
l_kernel_00024d6d: mov ecx,eax
pf_at 0x4651
l_kernel_00024d6f: mov eax,[0x70410]
pf_at 0x4656
l_kernel_00024d74: lea edx,[eax+0x1]
pf_at 0x4659
l_kernel_00024d77: mov [dword 0x70410],edx
pf_at 0x465f
l_kernel_00024d7d: mov edx,[dword 0x70414]
pf_at 0x4665
l_kernel_00024d83: imul edi,eax,byte +0x28
pf_at 0x4668
l_kernel_00024d86: mov [edx+edi],ecx
pf_at 0x466b
l_kernel_00024d89: mov byte [edx+edi+0x24],0x1
pf_at 0x4670
l_kernel_00024d8e: imul eax,eax,byte +0x28
pf_at 0x4673
l_kernel_00024d91: lea ecx,[edx+eax]
pf_at 0x4676
l_kernel_00024d94: add ecx,byte +0x4
pf_at 0x4679
l_kernel_00024d97: mov edx,esi
pf_at 0x467b
l_kernel_00024d99: add esp,byte +0xc
pf_at 0x467e
l_kernel_00024d9c: pop esi
pf_at 0x467f
l_kernel_00024d9d: pop edi
pf_at 0x4680
l_kernel_00024d9e: pop ebx
pf_at 0x4681
l_kernel_00024d9f: pop ebp
pf_at 0x4682
l_kernel_00024da0: jmp near 0x25048
pf_at 0x4687
l_kernel_00024da5: xor eax,eax
pf_at 0x4689
l_kernel_00024da7: add esp,byte +0xc
pf_at 0x468c
l_kernel_00024daa: pop esi
pf_at 0x468d
l_kernel_00024dab: pop edi
pf_at 0x468e
l_kernel_00024dac: pop ebx
pf_at 0x468f
l_kernel_00024dad: pop ebp
pf_at 0x4690
l_kernel_00024dae: ret
pf_at 0x4691
l_kernel_00024daf: test ecx,ecx
pf_at 0x4693
l_kernel_00024db1: jz near 0x24e94
pf_at 0x4699
l_kernel_00024db7: push ebp
pf_at 0x469a
l_kernel_00024db8: mov ebp,esp
pf_at 0x469c
l_kernel_00024dba: push ebx
pf_at 0x469d
l_kernel_00024dbb: push edi
pf_at 0x469e
l_kernel_00024dbc: push esi
pf_at 0x469f
l_kernel_00024dbd: sub esp,byte +0xc
pf_at 0x46a2
l_kernel_00024dc0: mov esi,ecx
pf_at 0x46a4
l_kernel_00024dc2: mov eax,[ecx]
pf_at 0x46a6
l_kernel_00024dc4: add eax,byte -0x3
pf_at 0x46a9
l_kernel_00024dc7: cmp eax,byte +0x5
pf_at 0x46ac
l_kernel_00024dca: ja near 0x24e6e
pf_at 0x46b2
l_kernel_00024dd0: jmp [eax*4+0x2c968]
pf_at 0x46b9
l_kernel_00024dd7: mov eax,[esi+0xc]
pf_at 0x46bc
l_kernel_00024dda: jmp short 0x24e0d
pf_at 0x46be
l_kernel_00024ddc: mov edi,[esi+0x18]
pf_at 0x46c1
l_kernel_00024ddf: test edi,edi
pf_at 0x46c3
l_kernel_00024de1: jz near 0x24e6e
pf_at 0x46c9
l_kernel_00024de7: mov eax,[edi]
pf_at 0x46cb
l_kernel_00024de9: cmp eax,byte +0x1
pf_at 0x46ce
l_kernel_00024dec: ja short 0x24e25
pf_at 0x46d0
l_kernel_00024dee: mov [ebp-0x10],esi
pf_at 0x46d3
l_kernel_00024df1: xor esi,esi
pf_at 0x46d5
l_kernel_00024df3: xor ebx,ebx
pf_at 0x46d7
l_kernel_00024df5: mov ecx,[edi+0xc]
pf_at 0x46da
l_kernel_00024df8: cmp ebx,[edi+0x4]
pf_at 0x46dd
l_kernel_00024dfb: jnc short 0x24e2a
pf_at 0x46df
l_kernel_00024dfd: add ecx,esi
pf_at 0x46e1
l_kernel_00024dff: call 0x24daf
pf_at 0x46e6
l_kernel_00024e04: inc ebx
pf_at 0x46e7
l_kernel_00024e05: add esi,byte +0x20
pf_at 0x46ea
l_kernel_00024e08: jmp short 0x24df5
pf_at 0x46ec
l_kernel_00024e0a: mov eax,[esi+0x10]
pf_at 0x46ef
l_kernel_00024e0d: mov [esp],eax
pf_at 0x46f2
l_kernel_00024e10: call 0x20aee
pf_at 0x46f7
l_kernel_00024e15: jmp short 0x24e6e
pf_at 0x46f9
l_kernel_00024e17: mov edi,[esi+0x1c]
pf_at 0x46fc
l_kernel_00024e1a: test edi,edi
pf_at 0x46fe
l_kernel_00024e1c: jz short 0x24e6e
pf_at 0x4700
l_kernel_00024e1e: mov eax,[edi]
pf_at 0x4702
l_kernel_00024e20: cmp eax,byte +0x1
pf_at 0x4705
l_kernel_00024e23: jna short 0x24e2f
pf_at 0x4707
l_kernel_00024e25: dec eax
pf_at 0x4708
l_kernel_00024e26: mov [edi],eax
pf_at 0x470a
l_kernel_00024e28: jmp short 0x24e6e
pf_at 0x470c
l_kernel_00024e2a: mov [esp],ecx
pf_at 0x470f
l_kernel_00024e2d: jmp short 0x24e5e
pf_at 0x4711
l_kernel_00024e2f: mov [ebp-0x10],esi
pf_at 0x4714
l_kernel_00024e32: xor ebx,ebx
pf_at 0x4716
l_kernel_00024e34: push byte +0x4
pf_at 0x4718
l_kernel_00024e36: pop esi
pf_at 0x4719
l_kernel_00024e37: mov eax,[edi+0xc]
pf_at 0x471c
l_kernel_00024e3a: cmp ebx,[edi+0x4]
pf_at 0x471f
l_kernel_00024e3d: jnc short 0x24e5b
pf_at 0x4721
l_kernel_00024e3f: mov eax,[eax+esi-0x4]
pf_at 0x4725
l_kernel_00024e43: mov [esp],eax
pf_at 0x4728
l_kernel_00024e46: call 0x20aee
pf_at 0x472d
l_kernel_00024e4b: mov ecx,[edi+0xc]
pf_at 0x4730
l_kernel_00024e4e: add ecx,esi
pf_at 0x4732
l_kernel_00024e50: call 0x24daf
pf_at 0x4737
l_kernel_00024e55: inc ebx
pf_at 0x4738
l_kernel_00024e56: add esi,byte +0x24
pf_at 0x473b
l_kernel_00024e59: jmp short 0x24e37
pf_at 0x473d
l_kernel_00024e5b: mov [esp],eax
pf_at 0x4740
l_kernel_00024e5e: call 0x20aee
pf_at 0x4745
l_kernel_00024e63: mov [esp],edi
pf_at 0x4748
l_kernel_00024e66: call 0x20aee
pf_at 0x474d
l_kernel_00024e6b: mov esi,[ebp-0x10]
pf_at 0x4750
l_kernel_00024e6e: and dword [esi],byte +0x0
pf_at 0x4753
l_kernel_00024e71: and dword [esi+0x4],byte +0x0
pf_at 0x4757
l_kernel_00024e75: and dword [esi+0x8],byte +0x0
pf_at 0x475b
l_kernel_00024e79: and dword [esi+0xc],byte +0x0
pf_at 0x475f
l_kernel_00024e7d: and dword [esi+0x10],byte +0x0
pf_at 0x4763
l_kernel_00024e81: and dword [esi+0x14],byte +0x0
pf_at 0x4767
l_kernel_00024e85: and dword [esi+0x18],byte +0x0
pf_at 0x476b
l_kernel_00024e89: and dword [esi+0x1c],byte +0x0
pf_at 0x476f
l_kernel_00024e8d: add esp,byte +0xc
pf_at 0x4772
l_kernel_00024e90: pop esi
pf_at 0x4773
l_kernel_00024e91: pop edi
pf_at 0x4774
l_kernel_00024e92: pop ebx
pf_at 0x4775
l_kernel_00024e93: pop ebp
pf_at 0x4776
l_kernel_00024e94: ret
pf_at 0x4777
l_kernel_00024e95: push ebp
pf_at 0x4778
l_kernel_00024e96: mov ebp,esp
pf_at 0x477a
l_kernel_00024e98: push ebx
pf_at 0x477b
l_kernel_00024e99: push edi
pf_at 0x477c
l_kernel_00024e9a: push esi
pf_at 0x477d
l_kernel_00024e9b: sub esp,0x10c
pf_at 0x4783
l_kernel_00024ea1: mov esi,edx
pf_at 0x4785
l_kernel_00024ea3: and dword [ebp-0x10],byte +0x0
pf_at 0x4789
l_kernel_00024ea7: test ecx,ecx
pf_at 0x478b
l_kernel_00024ea9: setz al
pf_at 0x478e
l_kernel_00024eac: test edx,edx
pf_at 0x4790
l_kernel_00024eae: setz dl
pf_at 0x4793
l_kernel_00024eb1: or dl,al
pf_at 0x4795
l_kernel_00024eb3: jnz short 0x24f02
pf_at 0x4797
l_kernel_00024eb5: lea edi,[ebp-0x110]
pf_at 0x479d
l_kernel_00024ebb: push ecx
pf_at 0x479e
l_kernel_00024ebc: push dword 0x2cb77
pf_at 0x47a3
l_kernel_00024ec1: push dword 0x100
pf_at 0x47a8
l_kernel_00024ec6: push edi
pf_at 0x47a9
l_kernel_00024ec7: call 0x216bc
pf_at 0x47ae
l_kernel_00024ecc: add esp,byte +0x10
pf_at 0x47b1
l_kernel_00024ecf: mov ecx,edi
pf_at 0x47b3
l_kernel_00024ed1: call 0x243a7
pf_at 0x47b8
l_kernel_00024ed6: cmp byte [edi],0x0
pf_at 0x47bb
l_kernel_00024ed9: jz short 0x24f02
pf_at 0x47bd
l_kernel_00024edb: sub esp,byte +0x8
pf_at 0x47c0
l_kernel_00024ede: lea ebx,[ebp-0x10]
pf_at 0x47c3
l_kernel_00024ee1: push ebx
pf_at 0x47c4
l_kernel_00024ee2: push edi
pf_at 0x47c5
l_kernel_00024ee3: call 0x2133e
pf_at 0x47ca
l_kernel_00024ee8: add esp,byte +0x10
pf_at 0x47cd
l_kernel_00024eeb: mov eax,[ebx]
pf_at 0x47cf
l_kernel_00024eed: test eax,eax
pf_at 0x47d1
l_kernel_00024eef: setz cl
pf_at 0x47d4
l_kernel_00024ef2: cmp eax,edi
pf_at 0x47d6
l_kernel_00024ef4: setz dl
pf_at 0x47d9
l_kernel_00024ef7: or dl,cl
pf_at 0x47db
l_kernel_00024ef9: jnz short 0x24f00
pf_at 0x47dd
l_kernel_00024efb: cmp byte [eax],0x0
pf_at 0x47e0
l_kernel_00024efe: jz short 0x24f0f
pf_at 0x47e2
l_kernel_00024f00: fstp st0
pf_at 0x47e4
l_kernel_00024f02: xor eax,eax
pf_at 0x47e6
l_kernel_00024f04: add esp,0x10c
pf_at 0x47ec
l_kernel_00024f0a: pop esi
pf_at 0x47ed
l_kernel_00024f0b: pop edi
pf_at 0x47ee
l_kernel_00024f0c: pop ebx
pf_at 0x47ef
l_kernel_00024f0d: pop ebp
pf_at 0x47f0
l_kernel_00024f0e: ret
pf_at 0x47f1
l_kernel_00024f0f: fstp dword [esi]
pf_at 0x47f3
l_kernel_00024f11: mov al,0x1
pf_at 0x47f5
l_kernel_00024f13: jmp short 0x24f04
pf_at 0x47f7
l_kernel_00024f15: push ebp
pf_at 0x47f8
l_kernel_00024f16: mov ebp,esp
pf_at 0x47fa
l_kernel_00024f18: push esi
pf_at 0x47fb
l_kernel_00024f19: sub esp,byte +0x14
pf_at 0x47fe
l_kernel_00024f1c: mov esi,ecx
pf_at 0x4800
l_kernel_00024f1e: fld dword [ebp+0x8]
pf_at 0x4803
l_kernel_00024f21: fstp dword [ebp-0xc]
pf_at 0x4806
l_kernel_00024f24: call 0x24c40
pf_at 0x480b
l_kernel_00024f29: mov dword [esi],0x2
pf_at 0x4811
l_kernel_00024f2f: fld dword [ebp-0xc]
pf_at 0x4814
l_kernel_00024f32: fst dword [esi+0x8]
pf_at 0x4817
l_kernel_00024f35: fnstcw [ebp-0x6]
pf_at 0x481a
l_kernel_00024f38: movzx eax,word [ebp-0x6]
pf_at 0x481e
l_kernel_00024f3c: or eax,0xc00
pf_at 0x4823
l_kernel_00024f41: mov [ebp-0x8],ax
pf_at 0x4827
l_kernel_00024f45: fldcw [ebp-0x8]
pf_at 0x482a
l_kernel_00024f48: fistp dword [ebp-0x10]
pf_at 0x482d
l_kernel_00024f4b: fldcw [ebp-0x6]
pf_at 0x4830
l_kernel_00024f4e: mov eax,[ebp-0x10]
pf_at 0x4833
l_kernel_00024f51: mov [esi+0x4],eax
pf_at 0x4836
l_kernel_00024f54: mov eax,esi
pf_at 0x4838
l_kernel_00024f56: add esp,byte +0x14
pf_at 0x483b
l_kernel_00024f59: pop esi
pf_at 0x483c
l_kernel_00024f5a: pop ebp
pf_at 0x483d
l_kernel_00024f5b: ret
pf_at 0x483e
l_kernel_00024f5c: test ecx,ecx
pf_at 0x4840
l_kernel_00024f5e: jz short 0x24f95
pf_at 0x4842
l_kernel_00024f60: push ebp
pf_at 0x4843
l_kernel_00024f61: mov ebp,esp
pf_at 0x4845
l_kernel_00024f63: push edi
pf_at 0x4846
l_kernel_00024f64: push esi
pf_at 0x4847
l_kernel_00024f65: mov esi,ecx
pf_at 0x4849
l_kernel_00024f67: mov eax,[ebp+0x8]
pf_at 0x484c
l_kernel_00024f6a: test edx,edx
pf_at 0x484e
l_kernel_00024f6c: mov ecx,0x2ca9c
pf_at 0x4853
l_kernel_00024f71: cmovnz ecx,edx
pf_at 0x4856
l_kernel_00024f74: mov edx,eax
pf_at 0x4858
l_kernel_00024f76: call 0x24f9e
pf_at 0x485d
l_kernel_00024f7b: test eax,eax
pf_at 0x485f
l_kernel_00024f7d: jz short 0x24f98
pf_at 0x4861
l_kernel_00024f7f: mov edi,eax
pf_at 0x4863
l_kernel_00024f81: mov ecx,esi
pf_at 0x4865
l_kernel_00024f83: call 0x24daf
pf_at 0x486a
l_kernel_00024f88: mov dword [esi],0x3
pf_at 0x4870
l_kernel_00024f8e: mov [esi+0xc],edi
pf_at 0x4873
l_kernel_00024f91: mov al,0x1
pf_at 0x4875
l_kernel_00024f93: jmp short 0x24f9a
pf_at 0x4877
l_kernel_00024f95: xor eax,eax
pf_at 0x4879
l_kernel_00024f97: ret
pf_at 0x487a
l_kernel_00024f98: xor eax,eax
pf_at 0x487c
l_kernel_00024f9a: pop esi
pf_at 0x487d
l_kernel_00024f9b: pop edi
pf_at 0x487e
l_kernel_00024f9c: pop ebp
pf_at 0x487f
l_kernel_00024f9d: ret
pf_at 0x4880
l_kernel_00024f9e: push ebp
pf_at 0x4881
l_kernel_00024f9f: mov ebp,esp
pf_at 0x4883
l_kernel_00024fa1: push ebx
pf_at 0x4884
l_kernel_00024fa2: push edi
pf_at 0x4885
l_kernel_00024fa3: push esi
pf_at 0x4886
l_kernel_00024fa4: sub esp,byte +0xc
pf_at 0x4889
l_kernel_00024fa7: mov esi,edx
pf_at 0x488b
l_kernel_00024fa9: mov ebx,ecx
pf_at 0x488d
l_kernel_00024fab: lea eax,[edx+0x1]
pf_at 0x4890
l_kernel_00024fae: sub esp,byte +0xc
pf_at 0x4893
l_kernel_00024fb1: push eax
pf_at 0x4894
l_kernel_00024fb2: call 0x20ae5
pf_at 0x4899
l_kernel_00024fb7: add esp,byte +0x10
pf_at 0x489c
l_kernel_00024fba: mov edi,eax
pf_at 0x489e
l_kernel_00024fbc: test eax,eax
pf_at 0x48a0
l_kernel_00024fbe: jz short 0x24fe0
pf_at 0x48a2
l_kernel_00024fc0: test esi,esi
pf_at 0x48a4
l_kernel_00024fc2: setz al
pf_at 0x48a7
l_kernel_00024fc5: test ebx,ebx
pf_at 0x48a9
l_kernel_00024fc7: setz cl
pf_at 0x48ac
l_kernel_00024fca: or cl,al
pf_at 0x48ae
l_kernel_00024fcc: jnz short 0x24fdc
pf_at 0x48b0
l_kernel_00024fce: sub esp,byte +0x4
pf_at 0x48b3
l_kernel_00024fd1: push esi
pf_at 0x48b4
l_kernel_00024fd2: push ebx
pf_at 0x48b5
l_kernel_00024fd3: push edi
pf_at 0x48b6
l_kernel_00024fd4: call 0x20c1d
pf_at 0x48bb
l_kernel_00024fd9: add esp,byte +0x10
pf_at 0x48be
l_kernel_00024fdc: mov byte [edi+esi],0x0
pf_at 0x48c2
l_kernel_00024fe0: mov eax,edi
pf_at 0x48c4
l_kernel_00024fe2: add esp,byte +0xc
pf_at 0x48c7
l_kernel_00024fe5: pop esi
pf_at 0x48c8
l_kernel_00024fe6: pop edi
pf_at 0x48c9
l_kernel_00024fe7: pop ebx
pf_at 0x48ca
l_kernel_00024fe8: pop ebp
pf_at 0x48cb
l_kernel_00024fe9: ret
pf_at 0x48cc
l_kernel_00024fea: xor eax,eax
pf_at 0x48ce
l_kernel_00024fec: dec eax
pf_at 0x48cf
l_kernel_00024fed: test ecx,ecx
pf_at 0x48d1
l_kernel_00024fef: jz short 0x25047
pf_at 0x48d3
l_kernel_00024ff1: push ebp
pf_at 0x48d4
l_kernel_00024ff2: mov ebp,esp
pf_at 0x48d6
l_kernel_00024ff4: push ebx
pf_at 0x48d7
l_kernel_00024ff5: push edi
pf_at 0x48d8
l_kernel_00024ff6: push esi
pf_at 0x48d9
l_kernel_00024ff7: sub esp,byte +0xc
pf_at 0x48dc
l_kernel_00024ffa: mov edi,ecx
pf_at 0x48de
l_kernel_00024ffc: xor ebx,ebx
pf_at 0x48e0
l_kernel_00024ffe: mov eax,[0x70410]
pf_at 0x48e5
l_kernel_00025003: xor esi,esi
pf_at 0x48e7
l_kernel_00025005: cmp esi,eax
pf_at 0x48e9
l_kernel_00025007: jnc short 0x25039
pf_at 0x48eb
l_kernel_00025009: mov ecx,[dword 0x70414]
pf_at 0x48f1
l_kernel_0002500f: cmp byte [ecx+ebx+0x24],0x1
pf_at 0x48f6
l_kernel_00025014: jnz short 0x25033
pf_at 0x48f8
l_kernel_00025016: mov ecx,[ecx+ebx]
pf_at 0x48fb
l_kernel_00025019: test ecx,ecx
pf_at 0x48fd
l_kernel_0002501b: jz short 0x25033
pf_at 0x48ff
l_kernel_0002501d: sub esp,byte +0x8
pf_at 0x4902
l_kernel_00025020: push edi
pf_at 0x4903
l_kernel_00025021: push ecx
pf_at 0x4904
l_kernel_00025022: call 0x20cea
pf_at 0x4909
l_kernel_00025027: add esp,byte +0x10
pf_at 0x490c
l_kernel_0002502a: test eax,eax
pf_at 0x490e
l_kernel_0002502c: jz short 0x2503e
pf_at 0x4910
l_kernel_0002502e: mov eax,[0x70410]
pf_at 0x4915
l_kernel_00025033: inc esi
pf_at 0x4916
l_kernel_00025034: add ebx,byte +0x28
pf_at 0x4919
l_kernel_00025037: jmp short 0x25005
pf_at 0x491b
l_kernel_00025039: xor eax,eax
pf_at 0x491d
l_kernel_0002503b: dec eax
pf_at 0x491e
l_kernel_0002503c: jmp short 0x25040
pf_at 0x4920
l_kernel_0002503e: mov eax,esi
pf_at 0x4922
l_kernel_00025040: add esp,byte +0xc
pf_at 0x4925
l_kernel_00025043: pop esi
pf_at 0x4926
l_kernel_00025044: pop edi
pf_at 0x4927
l_kernel_00025045: pop ebx
pf_at 0x4928
l_kernel_00025046: pop ebp
pf_at 0x4929
l_kernel_00025047: ret
pf_at 0x492a
l_kernel_00025048: push ebp
pf_at 0x492b
l_kernel_00025049: mov ebp,esp
pf_at 0x492d
l_kernel_0002504b: push edi
pf_at 0x492e
l_kernel_0002504c: push esi
pf_at 0x492f
l_kernel_0002504d: sub esp,byte +0x30
pf_at 0x4932
l_kernel_00025050: mov edi,ecx
pf_at 0x4934
l_kernel_00025052: test ecx,ecx
pf_at 0x4936
l_kernel_00025054: setz al
pf_at 0x4939
l_kernel_00025057: test edx,edx
pf_at 0x493b
l_kernel_00025059: setz cl
pf_at 0x493e
l_kernel_0002505c: or cl,al
pf_at 0x4940
l_kernel_0002505e: jnz short 0x250ca
pf_at 0x4942
l_kernel_00025060: and dword [ebp-0x1c],byte +0x0
pf_at 0x4946
l_kernel_00025064: and dword [ebp-0x18],byte +0x0
pf_at 0x494a
l_kernel_00025068: and dword [ebp-0x14],byte +0x0
pf_at 0x494e
l_kernel_0002506c: and dword [ebp-0x10],byte +0x0
pf_at 0x4952
l_kernel_00025070: and dword [ebp-0xc],byte +0x0
pf_at 0x4956
l_kernel_00025074: mov eax,[edx]
pf_at 0x4958
l_kernel_00025076: mov [ebp-0x28],eax
pf_at 0x495b
l_kernel_00025079: mov ecx,[edx+0x4]
pf_at 0x495e
l_kernel_0002507c: mov [ebp-0x24],ecx
pf_at 0x4961
l_kernel_0002507f: fld dword [edx+0x8]
pf_at 0x4964
l_kernel_00025082: fstp dword [ebp-0x20]
pf_at 0x4967
l_kernel_00025085: add eax,byte -0x3
pf_at 0x496a
l_kernel_00025088: cmp eax,byte +0x5
pf_at 0x496d
l_kernel_0002508b: ja short 0x250da
pf_at 0x496f
l_kernel_0002508d: jmp [eax*4+0x2c980]
pf_at 0x4976
l_kernel_00025094: mov eax,[edx+0xc]
pf_at 0x4979
l_kernel_00025097: test eax,eax
pf_at 0x497b
l_kernel_00025099: mov edx,0x2ca9c
pf_at 0x4980
l_kernel_0002509e: cmovnz edx,eax
pf_at 0x4983
l_kernel_000250a1: lea ecx,[ebp-0x28]
pf_at 0x4986
l_kernel_000250a4: call 0x24c66
pf_at 0x498b
l_kernel_000250a9: jmp short 0x250c6
pf_at 0x498d
l_kernel_000250ab: mov eax,[edx+0x18]
pf_at 0x4990
l_kernel_000250ae: mov [ebp-0x10],eax
pf_at 0x4993
l_kernel_000250b1: jmp short 0x250d4
pf_at 0x4995
l_kernel_000250b3: mov eax,[edx+0x10]
pf_at 0x4998
l_kernel_000250b6: mov ecx,[edx+0x14]
pf_at 0x499b
l_kernel_000250b9: mov [esp],ecx
pf_at 0x499e
l_kernel_000250bc: lea ecx,[ebp-0x28]
pf_at 0x49a1
l_kernel_000250bf: mov edx,eax
pf_at 0x49a3
l_kernel_000250c1: call 0x250f2
pf_at 0x49a8
l_kernel_000250c6: test al,al
pf_at 0x49aa
l_kernel_000250c8: jnz short 0x250da
pf_at 0x49ac
l_kernel_000250ca: xor eax,eax
pf_at 0x49ae
l_kernel_000250cc: jmp short 0x250eb
pf_at 0x49b0
l_kernel_000250ce: mov eax,[edx+0x1c]
pf_at 0x49b3
l_kernel_000250d1: mov [ebp-0xc],eax
pf_at 0x49b6
l_kernel_000250d4: test eax,eax
pf_at 0x49b8
l_kernel_000250d6: jz short 0x250da
pf_at 0x49ba
l_kernel_000250d8: inc dword [eax]
pf_at 0x49bc
l_kernel_000250da: mov ecx,edi
pf_at 0x49be
l_kernel_000250dc: call 0x24daf
pf_at 0x49c3
l_kernel_000250e1: push byte +0x8
pf_at 0x49c5
l_kernel_000250e3: pop ecx
pf_at 0x49c6
l_kernel_000250e4: lea esi,[ebp-0x28]
pf_at 0x49c9
l_kernel_000250e7: rep movsd
pf_at 0x49cb
l_kernel_000250e9: mov al,0x1
pf_at 0x49cd
l_kernel_000250eb: add esp,byte +0x30
pf_at 0x49d0
l_kernel_000250ee: pop esi
pf_at 0x49d1
l_kernel_000250ef: pop edi
pf_at 0x49d2
l_kernel_000250f0: pop ebp
pf_at 0x49d3
l_kernel_000250f1: ret
pf_at 0x49d4
l_kernel_000250f2: push ebp
pf_at 0x49d5
l_kernel_000250f3: mov ebp,esp
pf_at 0x49d7
l_kernel_000250f5: push ebx
pf_at 0x49d8
l_kernel_000250f6: push edi
pf_at 0x49d9
l_kernel_000250f7: push esi
pf_at 0x49da
l_kernel_000250f8: sub esp,byte +0xc
pf_at 0x49dd
l_kernel_000250fb: test ecx,ecx
pf_at 0x49df
l_kernel_000250fd: jz short 0x25159
pf_at 0x49e1
l_kernel_000250ff: mov edi,edx
pf_at 0x49e3
l_kernel_00025101: mov esi,ecx
pf_at 0x49e5
l_kernel_00025103: mov edx,[ebp+0x8]
pf_at 0x49e8
l_kernel_00025106: test edi,edi
pf_at 0x49ea
l_kernel_00025108: setz al
pf_at 0x49ed
l_kernel_0002510b: test edx,edx
pf_at 0x49ef
l_kernel_0002510d: setnz cl
pf_at 0x49f2
l_kernel_00025110: xor ebx,ebx
pf_at 0x49f4
l_kernel_00025112: test al,cl
pf_at 0x49f6
l_kernel_00025114: jnz short 0x2515b
pf_at 0x49f8
l_kernel_00025116: test edx,edx
pf_at 0x49fa
l_kernel_00025118: jz short 0x25140
pf_at 0x49fc
l_kernel_0002511a: sub esp,byte +0xc
pf_at 0x49ff
l_kernel_0002511d: push edx
pf_at 0x4a00
l_kernel_0002511e: call 0x20ae5
pf_at 0x4a05
l_kernel_00025123: add esp,byte +0x10
pf_at 0x4a08
l_kernel_00025126: test eax,eax
pf_at 0x4a0a
l_kernel_00025128: jz short 0x25159
pf_at 0x4a0c
l_kernel_0002512a: mov ebx,eax
pf_at 0x4a0e
l_kernel_0002512c: sub esp,byte +0x4
pf_at 0x4a11
l_kernel_0002512f: mov eax,[ebp+0x8]
pf_at 0x4a14
l_kernel_00025132: push eax
pf_at 0x4a15
l_kernel_00025133: push edi
pf_at 0x4a16
l_kernel_00025134: push ebx
pf_at 0x4a17
l_kernel_00025135: call 0x20c1d
pf_at 0x4a1c
l_kernel_0002513a: mov edx,[ebp+0x8]
pf_at 0x4a1f
l_kernel_0002513d: add esp,byte +0x10
pf_at 0x4a22
l_kernel_00025140: mov ecx,esi
pf_at 0x4a24
l_kernel_00025142: mov edi,edx
pf_at 0x4a26
l_kernel_00025144: call 0x24daf
pf_at 0x4a2b
l_kernel_00025149: mov dword [esi],0x4
pf_at 0x4a31
l_kernel_0002514f: mov [esi+0x10],ebx
pf_at 0x4a34
l_kernel_00025152: mov [esi+0x14],edi
pf_at 0x4a37
l_kernel_00025155: mov bl,0x1
pf_at 0x4a39
l_kernel_00025157: jmp short 0x2515b
pf_at 0x4a3b
l_kernel_00025159: xor ebx,ebx
pf_at 0x4a3d
l_kernel_0002515b: mov eax,ebx
pf_at 0x4a3f
l_kernel_0002515d: add esp,byte +0xc
pf_at 0x4a42
l_kernel_00025160: pop esi
pf_at 0x4a43
l_kernel_00025161: pop edi
pf_at 0x4a44
l_kernel_00025162: pop ebx
pf_at 0x4a45
l_kernel_00025163: pop ebp
pf_at 0x4a46
l_kernel_00025164: ret
pf_at 0x4a47
l_kernel_00025165: push ebp
pf_at 0x4a48
l_kernel_00025166: mov ebp,esp
pf_at 0x4a4a
l_kernel_00025168: push edi
pf_at 0x4a4b
l_kernel_00025169: push esi
pf_at 0x4a4c
l_kernel_0002516a: sub esp,byte +0x10
pf_at 0x4a4f
l_kernel_0002516d: xor esi,esi
pf_at 0x4a51
l_kernel_0002516f: mov edi,0x2f1b0
pf_at 0x4a56
l_kernel_00025174: mov eax,[0x3f0bc]
pf_at 0x4a5b
l_kernel_00025179: cmp esi,eax
pf_at 0x4a5d
l_kernel_0002517b: jnc short 0x2519c
pf_at 0x4a5f
l_kernel_0002517d: mov ecx,[edi]
pf_at 0x4a61
l_kernel_0002517f: test ecx,ecx
pf_at 0x4a63
l_kernel_00025181: jz short 0x25193
pf_at 0x4a65
l_kernel_00025183: mov [esp],ecx
pf_at 0x4a68
l_kernel_00025186: call 0x20aee
pf_at 0x4a6d
l_kernel_0002518b: and dword [edi],byte +0x0
pf_at 0x4a70
l_kernel_0002518e: mov eax,[0x3f0bc]
pf_at 0x4a75
l_kernel_00025193: inc esi
pf_at 0x4a76
l_kernel_00025194: add edi,0x100
pf_at 0x4a7c
l_kernel_0002519a: jmp short 0x25179
pf_at 0x4a7e
l_kernel_0002519c: and dword [dword 0x3f0bc],byte +0x0
pf_at 0x4a85
l_kernel_000251a3: mov byte [dword 0x3f0d4],0x0
pf_at 0x4a8c
l_kernel_000251aa: add esp,byte +0x10
pf_at 0x4a8f
l_kernel_000251ad: pop esi
pf_at 0x4a90
l_kernel_000251ae: pop edi
pf_at 0x4a91
l_kernel_000251af: pop ebp
pf_at 0x4a92
l_kernel_000251b0: ret
pf_at 0x4a93
l_kernel_000251b1: push ebp
pf_at 0x4a94
l_kernel_000251b2: mov ebp,esp
pf_at 0x4a96
l_kernel_000251b4: push ebx
pf_at 0x4a97
l_kernel_000251b5: push edi
pf_at 0x4a98
l_kernel_000251b6: push esi
pf_at 0x4a99
l_kernel_000251b7: sub esp,byte +0xc
pf_at 0x4a9c
l_kernel_000251ba: mov [ebp-0x10],edx
pf_at 0x4a9f
l_kernel_000251bd: mov [ebp-0x14],ecx
pf_at 0x4aa2
l_kernel_000251c0: xor esi,esi
pf_at 0x4aa4
l_kernel_000251c2: mov eax,[ebp-0x10]
pf_at 0x4aa7
l_kernel_000251c5: sub eax,esi
pf_at 0x4aa9
l_kernel_000251c7: jna short 0x25232
pf_at 0x4aab
l_kernel_000251c9: cmp dword [dword 0x2f0b8],byte +0x0
pf_at 0x4ab2
l_kernel_000251d0: jz short 0x25232
pf_at 0x4ab4
l_kernel_000251d2: mov ebx,esi
pf_at 0x4ab6
l_kernel_000251d4: and ebx,0x1ff
pf_at 0x4abc
l_kernel_000251da: mov edi,0x7000
pf_at 0x4ac1
l_kernel_000251df: sub edi,ebx
pf_at 0x4ac3
l_kernel_000251e1: cmp eax,edi
pf_at 0x4ac5
l_kernel_000251e3: cmovc edi,eax
pf_at 0x4ac8
l_kernel_000251e6: mov eax,[0x6068]
pf_at 0x4acd
l_kernel_000251eb: mov ecx,[dword 0x2f000]
pf_at 0x4ad3
l_kernel_000251f1: mov [ecx],eax
pf_at 0x4ad5
l_kernel_000251f3: mov eax,[0x2f00c]
pf_at 0x4ada
l_kernel_000251f8: mov dword [eax],0x41
pf_at 0x4ae0
l_kernel_000251fe: mov eax,[0x2f004]
pf_at 0x4ae5
l_kernel_00025203: mov [eax],esi
pf_at 0x4ae7
l_kernel_00025205: mov eax,[0x2f008]
pf_at 0x4aec
l_kernel_0002520a: mov [eax],edi
pf_at 0x4aee
l_kernel_0002520c: call 0x201aa
pf_at 0x4af3
l_kernel_00025211: test eax,eax
pf_at 0x4af5
l_kernel_00025213: jz short 0x25232
pf_at 0x4af7
l_kernel_00025215: or ebx,0x10000
pf_at 0x4afd
l_kernel_0002521b: mov eax,[ebp-0x14]
pf_at 0x4b00
l_kernel_0002521e: add eax,esi
pf_at 0x4b02
l_kernel_00025220: sub esp,byte +0x4
pf_at 0x4b05
l_kernel_00025223: push edi
pf_at 0x4b06
l_kernel_00025224: push ebx
pf_at 0x4b07
l_kernel_00025225: push eax
pf_at 0x4b08
l_kernel_00025226: call 0x20c1d
pf_at 0x4b0d
l_kernel_0002522b: add esp,byte +0x10
pf_at 0x4b10
l_kernel_0002522e: add esi,edi
pf_at 0x4b12
l_kernel_00025230: jmp short 0x251c2
pf_at 0x4b14
l_kernel_00025232: cmp [ebp-0x10],esi
pf_at 0x4b17
l_kernel_00025235: setna al
pf_at 0x4b1a
l_kernel_00025238: add esp,byte +0xc
pf_at 0x4b1d
l_kernel_0002523b: pop esi
pf_at 0x4b1e
l_kernel_0002523c: pop edi
pf_at 0x4b1f
l_kernel_0002523d: pop ebx
pf_at 0x4b20
l_kernel_0002523e: pop ebp
pf_at 0x4b21
l_kernel_0002523f: ret
pf_at 0x4b22
l_kernel_00025240: test edx,edx
pf_at 0x4b24
l_kernel_00025242: jz near 0x253f7
pf_at 0x4b2a
l_kernel_00025248: mov byte [edx],0x0
pf_at 0x4b2d
l_kernel_0002524b: test ecx,ecx
pf_at 0x4b2f
l_kernel_0002524d: jz near 0x253f7
pf_at 0x4b35
l_kernel_00025253: push ebp
pf_at 0x4b36
l_kernel_00025254: mov ebp,esp
pf_at 0x4b38
l_kernel_00025256: push ebx
pf_at 0x4b39
l_kernel_00025257: push edi
pf_at 0x4b3a
l_kernel_00025258: push esi
pf_at 0x4b3b
l_kernel_00025259: sub esp,0x3e3c
pf_at 0x4b41
l_kernel_0002525f: mov [ebp-0x18],edx
pf_at 0x4b44
l_kernel_00025262: lea esi,[ebp-0x1fe]
pf_at 0x4b4a
l_kernel_00025268: push ecx
pf_at 0x4b4b
l_kernel_00025269: push dword 0x2cb77
pf_at 0x4b50
l_kernel_0002526e: push dword 0xf1
pf_at 0x4b55
l_kernel_00025273: push esi
pf_at 0x4b56
l_kernel_00025274: call 0x216bc
pf_at 0x4b5b
l_kernel_00025279: add esp,byte +0x10
pf_at 0x4b5e
l_kernel_0002527c: movzx eax,byte [esi]
pf_at 0x4b61
l_kernel_0002527f: cmp eax,byte +0x5c
pf_at 0x4b64
l_kernel_00025282: jz short 0x2528a
pf_at 0x4b66
l_kernel_00025284: test eax,eax
pf_at 0x4b68
l_kernel_00025286: jnz short 0x2528d
pf_at 0x4b6a
l_kernel_00025288: jmp short 0x25290
pf_at 0x4b6c
l_kernel_0002528a: mov byte [esi],0x2f
pf_at 0x4b6f
l_kernel_0002528d: inc esi
pf_at 0x4b70
l_kernel_0002528e: jmp short 0x2527c
pf_at 0x4b72
l_kernel_00025290: sub esp,byte +0xc
pf_at 0x4b75
l_kernel_00025293: lea eax,[ebp-0x1fe]
pf_at 0x4b7b
l_kernel_00025299: push eax
pf_at 0x4b7c
l_kernel_0002529a: call 0x20ccf
pf_at 0x4b81
l_kernel_0002529f: add esp,byte +0x10
pf_at 0x4b84
l_kernel_000252a2: mov [ebp-0x1c],eax
pf_at 0x4b87
l_kernel_000252a5: xor edx,edx
pf_at 0x4b89
l_kernel_000252a7: xor ebx,ebx
pf_at 0x4b8b
l_kernel_000252a9: cmp edx,[ebp-0x1c]
pf_at 0x4b8e
l_kernel_000252ac: ja near 0x2537d
pf_at 0x4b94
l_kernel_000252b2: lea eax,[edx+ebp]
pf_at 0x4b97
l_kernel_000252b5: add eax,0xfffffe02
pf_at 0x4b9c
l_kernel_000252ba: xor edi,edi
pf_at 0x4b9e
l_kernel_000252bc: movzx ecx,byte [eax+edi]
pf_at 0x4ba2
l_kernel_000252c0: test ecx,ecx
pf_at 0x4ba4
l_kernel_000252c2: jz short 0x252cc
pf_at 0x4ba6
l_kernel_000252c4: cmp ecx,byte +0x2f
pf_at 0x4ba9
l_kernel_000252c7: jz short 0x252cc
pf_at 0x4bab
l_kernel_000252c9: inc edi
pf_at 0x4bac
l_kernel_000252ca: jmp short 0x252bc
pf_at 0x4bae
l_kernel_000252cc: test edi,edi
pf_at 0x4bb0
l_kernel_000252ce: jz near 0x25375
pf_at 0x4bb6
l_kernel_000252d4: mov [ebp-0x10],edx
pf_at 0x4bb9
l_kernel_000252d7: mov [ebp-0x14],ebx
pf_at 0x4bbc
l_kernel_000252da: mov ecx,0xf0
pf_at 0x4bc1
l_kernel_000252df: cmp edi,ecx
pf_at 0x4bc3
l_kernel_000252e1: mov ebx,0xf0
pf_at 0x4bc8
l_kernel_000252e6: cmovc ebx,edi
pf_at 0x4bcb
l_kernel_000252e9: sub esp,byte +0x4
pf_at 0x4bce
l_kernel_000252ec: push ebx
pf_at 0x4bcf
l_kernel_000252ed: push eax
pf_at 0x4bd0
l_kernel_000252ee: lea esi,[ebp-0x10d]
pf_at 0x4bd6
l_kernel_000252f4: push esi
pf_at 0x4bd7
l_kernel_000252f5: call 0x20c1d
pf_at 0x4bdc
l_kernel_000252fa: add esp,byte +0x10
pf_at 0x4bdf
l_kernel_000252fd: mov byte [ebp+ebx-0x10d],0x0
pf_at 0x4be7
l_kernel_00025305: sub esp,byte +0x8
pf_at 0x4bea
l_kernel_00025308: push dword 0x2ca9a
pf_at 0x4bef
l_kernel_0002530d: push esi
pf_at 0x4bf0
l_kernel_0002530e: call 0x20cea
pf_at 0x4bf5
l_kernel_00025313: add esp,byte +0x10
pf_at 0x4bf8
l_kernel_00025316: test eax,eax
pf_at 0x4bfa
l_kernel_00025318: jz short 0x25362
pf_at 0x4bfc
l_kernel_0002531a: sub esp,byte +0x8
pf_at 0x4bff
l_kernel_0002531d: push dword 0x2cc70
pf_at 0x4c04
l_kernel_00025322: push esi
pf_at 0x4c05
l_kernel_00025323: call 0x20cea
pf_at 0x4c0a
l_kernel_00025328: add esp,byte +0x10
pf_at 0x4c0d
l_kernel_0002532b: test eax,eax
pf_at 0x4c0f
l_kernel_0002532d: mov ebx,[ebp-0x14]
pf_at 0x4c12
l_kernel_00025330: jz short 0x25367
pf_at 0x4c14
l_kernel_00025332: cmp ebx,byte +0x3f
pf_at 0x4c17
l_kernel_00025335: ja short 0x25372
pf_at 0x4c19
l_kernel_00025337: imul eax,ebx,dword 0xf1
pf_at 0x4c1f
l_kernel_0002533d: add eax,ebp
pf_at 0x4c21
l_kernel_0002533f: add eax,0xffffc1c2
pf_at 0x4c26
l_kernel_00025344: lea ecx,[ebp-0x10d]
pf_at 0x4c2c
l_kernel_0002534a: push ecx
pf_at 0x4c2d
l_kernel_0002534b: push dword 0x2cb77
pf_at 0x4c32
l_kernel_00025350: mov ecx,0xf1
pf_at 0x4c37
l_kernel_00025355: push ecx
pf_at 0x4c38
l_kernel_00025356: push eax
pf_at 0x4c39
l_kernel_00025357: call 0x216bc
pf_at 0x4c3e
l_kernel_0002535c: add esp,byte +0x10
pf_at 0x4c41
l_kernel_0002535f: inc ebx
pf_at 0x4c42
l_kernel_00025360: jmp short 0x25372
pf_at 0x4c44
l_kernel_00025362: mov ebx,[ebp-0x14]
pf_at 0x4c47
l_kernel_00025365: jmp short 0x25372
pf_at 0x4c49
l_kernel_00025367: sub ebx,byte +0x1
pf_at 0x4c4c
l_kernel_0002536a: mov eax,0x0
pf_at 0x4c51
l_kernel_0002536f: cmovc ebx,eax
pf_at 0x4c54
l_kernel_00025372: mov edx,[ebp-0x10]
pf_at 0x4c57
l_kernel_00025375: add edx,edi
pf_at 0x4c59
l_kernel_00025377: inc edx
pf_at 0x4c5a
l_kernel_00025378: jmp near 0x252a9
pf_at 0x4c5f
l_kernel_0002537d: mov [ebp-0x14],ebx
pf_at 0x4c62
l_kernel_00025380: xor esi,esi
pf_at 0x4c64
l_kernel_00025382: lea edi,[ebp-0x3e3e]
pf_at 0x4c6a
l_kernel_00025388: xor ebx,ebx
pf_at 0x4c6c
l_kernel_0002538a: cmp [ebp-0x14],ebx
pf_at 0x4c6f
l_kernel_0002538d: jz short 0x253e2
pf_at 0x4c71
l_kernel_0002538f: sub esp,byte +0xc
pf_at 0x4c74
l_kernel_00025392: push edi
pf_at 0x4c75
l_kernel_00025393: call 0x20ccf
pf_at 0x4c7a
l_kernel_00025398: add esp,byte +0x10
pf_at 0x4c7d
l_kernel_0002539b: test ebx,ebx
pf_at 0x4c7f
l_kernel_0002539d: setz cl
pf_at 0x4c82
l_kernel_000253a0: cmp esi,0xf0
pf_at 0x4c88
l_kernel_000253a6: setnc dl
pf_at 0x4c8b
l_kernel_000253a9: or dl,cl
pf_at 0x4c8d
l_kernel_000253ab: jnz short 0x253b9
pf_at 0x4c8f
l_kernel_000253ad: mov edx,[ebp-0x18]
pf_at 0x4c92
l_kernel_000253b0: mov byte [edx+esi],0x2f
pf_at 0x4c96
l_kernel_000253b4: inc esi
pf_at 0x4c97
l_kernel_000253b5: mov ecx,esi
pf_at 0x4c99
l_kernel_000253b7: jmp short 0x253be
pf_at 0x4c9b
l_kernel_000253b9: mov ecx,esi
pf_at 0x4c9d
l_kernel_000253bb: mov edx,[ebp-0x18]
pf_at 0x4ca0
l_kernel_000253be: lea esi,[ecx+eax]
pf_at 0x4ca3
l_kernel_000253c1: cmp esi,0xf0
pf_at 0x4ca9
l_kernel_000253c7: ja short 0x253e7
pf_at 0x4cab
l_kernel_000253c9: add ecx,edx
pf_at 0x4cad
l_kernel_000253cb: sub esp,byte +0x4
pf_at 0x4cb0
l_kernel_000253ce: push eax
pf_at 0x4cb1
l_kernel_000253cf: push edi
pf_at 0x4cb2
l_kernel_000253d0: push ecx
pf_at 0x4cb3
l_kernel_000253d1: call 0x20c1d
pf_at 0x4cb8
l_kernel_000253d6: add esp,byte +0x10
pf_at 0x4cbb
l_kernel_000253d9: inc ebx
pf_at 0x4cbc
l_kernel_000253da: add edi,0xf1
pf_at 0x4cc2
l_kernel_000253e0: jmp short 0x2538a
pf_at 0x4cc4
l_kernel_000253e2: mov edx,[ebp-0x18]
pf_at 0x4cc7
l_kernel_000253e5: jmp short 0x253e9
pf_at 0x4cc9
l_kernel_000253e7: mov esi,ecx
pf_at 0x4ccb
l_kernel_000253e9: mov byte [edx+esi],0x0
pf_at 0x4ccf
l_kernel_000253ed: add esp,0x3e3c
pf_at 0x4cd5
l_kernel_000253f3: pop esi
pf_at 0x4cd6
l_kernel_000253f4: pop edi
pf_at 0x4cd7
l_kernel_000253f5: pop ebx
pf_at 0x4cd8
l_kernel_000253f6: pop ebp
pf_at 0x4cd9
l_kernel_000253f7: ret
pf_at 0x4cda
l_kernel_000253f8: push ebp
pf_at 0x4cdb
l_kernel_000253f9: mov ebp,esp
pf_at 0x4cdd
l_kernel_000253fb: push edi
pf_at 0x4cde
l_kernel_000253fc: push esi
pf_at 0x4cdf
l_kernel_000253fd: mov edi,[ebp+0x8]
pf_at 0x4ce2
l_kernel_00025400: xor eax,eax
pf_at 0x4ce4
l_kernel_00025402: test edi,edi
pf_at 0x4ce6
l_kernel_00025404: jz short 0x2543c
pf_at 0x4ce8
l_kernel_00025406: mov esi,edx
pf_at 0x4cea
l_kernel_00025408: test edx,edx
pf_at 0x4cec
l_kernel_0002540a: jz short 0x2543c
pf_at 0x4cee
l_kernel_0002540c: test ecx,ecx
pf_at 0x4cf0
l_kernel_0002540e: jz short 0x2543c
pf_at 0x4cf2
l_kernel_00025410: cmp byte [dword 0x3f0d4],0x0
pf_at 0x4cf9
l_kernel_00025417: jz short 0x2543c
pf_at 0x4cfb
l_kernel_00025419: call 0x255e4
pf_at 0x4d00
l_kernel_0002541e: cmp eax,byte -0x1
pf_at 0x4d03
l_kernel_00025421: jz short 0x2543a
pf_at 0x4d05
l_kernel_00025423: shl eax,byte 0x8
pf_at 0x4d08
l_kernel_00025426: mov ecx,[eax+0x2f1b0]
pf_at 0x4d0e
l_kernel_0002542c: mov [esi],ecx
pf_at 0x4d10
l_kernel_0002542e: mov eax,[eax+0x2f1b4]
pf_at 0x4d16
l_kernel_00025434: mov [edi],eax
pf_at 0x4d18
l_kernel_00025436: mov al,0x1
pf_at 0x4d1a
l_kernel_00025438: jmp short 0x2543c
pf_at 0x4d1c
l_kernel_0002543a: xor eax,eax
pf_at 0x4d1e
l_kernel_0002543c: pop esi
pf_at 0x4d1f
l_kernel_0002543d: pop edi
pf_at 0x4d20
l_kernel_0002543e: pop ebp
pf_at 0x4d21
l_kernel_0002543f: ret
pf_at 0x4d22
l_kernel_00025440: push ebp
pf_at 0x4d23
l_kernel_00025441: mov ebp,esp
pf_at 0x4d25
l_kernel_00025443: push ebx
pf_at 0x4d26
l_kernel_00025444: push edi
pf_at 0x4d27
l_kernel_00025445: push esi
pf_at 0x4d28
l_kernel_00025446: sub esp,byte +0x1c
pf_at 0x4d2b
l_kernel_00025449: mov esi,edx
pf_at 0x4d2d
l_kernel_0002544b: and dword [ebp-0x10],byte +0x0
pf_at 0x4d31
l_kernel_0002544f: and dword [ebp-0x1c],byte +0x0
pf_at 0x4d35
l_kernel_00025453: mov [ebp-0x18],ecx
pf_at 0x4d38
l_kernel_00025456: test ecx,ecx
pf_at 0x4d3a
l_kernel_00025458: setz al
pf_at 0x4d3d
l_kernel_0002545b: test edx,edx
pf_at 0x4d3f
l_kernel_0002545d: setz dl
pf_at 0x4d42
l_kernel_00025460: xor ecx,ecx
pf_at 0x4d44
l_kernel_00025462: or dl,al
pf_at 0x4d46
l_kernel_00025464: mov edx,0x0
pf_at 0x4d4b
l_kernel_00025469: mov eax,0x0
pf_at 0x4d50
l_kernel_0002546e: jnz near 0x254f8
pf_at 0x4d56
l_kernel_00025474: xor ecx,ecx
pf_at 0x4d58
l_kernel_00025476: xor eax,eax
pf_at 0x4d5a
l_kernel_00025478: xor ebx,ebx
pf_at 0x4d5c
l_kernel_0002547a: mov edx,eax
pf_at 0x4d5e
l_kernel_0002547c: cmp ebx,esi
pf_at 0x4d60
l_kernel_0002547e: jnc short 0x254f5
pf_at 0x4d62
l_kernel_00025480: mov edi,ebx
pf_at 0x4d64
l_kernel_00025482: mov eax,[ebp-0x18]
pf_at 0x4d67
l_kernel_00025485: cmp esi,edi
pf_at 0x4d69
l_kernel_00025487: jz short 0x25492
pf_at 0x4d6b
l_kernel_00025489: cmp byte [eax+edi],0xa
pf_at 0x4d6f
l_kernel_0002548d: jz short 0x25494
pf_at 0x4d71
l_kernel_0002548f: inc edi
pf_at 0x4d72
l_kernel_00025490: jmp short 0x25485
pf_at 0x4d74
l_kernel_00025492: mov edi,esi
pf_at 0x4d76
l_kernel_00025494: xor ecx,ecx
pf_at 0x4d78
l_kernel_00025496: mov eax,edi
pf_at 0x4d7a
l_kernel_00025498: sub eax,ebx
pf_at 0x4d7c
l_kernel_0002549a: mov [ebp-0x14],edx
pf_at 0x4d7f
l_kernel_0002549d: jz short 0x254b3
pf_at 0x4d81
l_kernel_0002549f: xor edx,edx
pf_at 0x4d83
l_kernel_000254a1: mov ecx,[ebp-0x18]
pf_at 0x4d86
l_kernel_000254a4: cmp byte [ecx+edi-0x1],0xd
pf_at 0x4d8b
l_kernel_000254a9: setz dl
pf_at 0x4d8e
l_kernel_000254ac: sub eax,edx
pf_at 0x4d90
l_kernel_000254ae: mov edx,[ebp-0x14]
pf_at 0x4d93
l_kernel_000254b1: mov ecx,eax
pf_at 0x4d95
l_kernel_000254b3: mov [ebp-0x20],ecx
pf_at 0x4d98
l_kernel_000254b6: lea eax,[edx+0x1]
pf_at 0x4d9b
l_kernel_000254b9: mov [ebp-0x24],eax
pf_at 0x4d9e
l_kernel_000254bc: mov [esp],eax
pf_at 0x4da1
l_kernel_000254bf: lea ecx,[ebp-0x10]
pf_at 0x4da4
l_kernel_000254c2: lea edx,[ebp-0x1c]
pf_at 0x4da7
l_kernel_000254c5: call 0x25673
pf_at 0x4dac
l_kernel_000254ca: test al,al
pf_at 0x4dae
l_kernel_000254cc: jz short 0x25504
pf_at 0x4db0
l_kernel_000254ce: add ebx,[ebp-0x18]
pf_at 0x4db3
l_kernel_000254d1: mov ecx,ebx
pf_at 0x4db5
l_kernel_000254d3: mov edx,[ebp-0x20]
pf_at 0x4db8
l_kernel_000254d6: call 0x24f9e
pf_at 0x4dbd
l_kernel_000254db: mov ecx,[ebp-0x10]
pf_at 0x4dc0
l_kernel_000254de: mov edx,[ebp-0x14]
pf_at 0x4dc3
l_kernel_000254e1: mov [ecx+edx*4],eax
pf_at 0x4dc6
l_kernel_000254e4: mov ecx,[ebp-0x10]
pf_at 0x4dc9
l_kernel_000254e7: inc edi
pf_at 0x4dca
l_kernel_000254e8: cmp dword [ecx+edx*4],byte +0x0
pf_at 0x4dce
l_kernel_000254ec: mov ebx,edi
pf_at 0x4dd0
l_kernel_000254ee: mov eax,[ebp-0x24]
pf_at 0x4dd3
l_kernel_000254f1: jnz short 0x2547a
pf_at 0x4dd5
l_kernel_000254f3: jmp short 0x2550a
pf_at 0x4dd7
l_kernel_000254f5: mov eax,[ebp-0x1c]
pf_at 0x4dda
l_kernel_000254f8: mov [esp],eax
pf_at 0x4ddd
l_kernel_000254fb: call 0x25638
pf_at 0x4de2
l_kernel_00025500: mov al,0x1
pf_at 0x4de4
l_kernel_00025502: jmp short 0x25511
pf_at 0x4de6
l_kernel_00025504: mov ecx,[ebp-0x10]
pf_at 0x4de9
l_kernel_00025507: mov edx,[ebp-0x14]
pf_at 0x4dec
l_kernel_0002550a: call 0x256e9
pf_at 0x4df1
l_kernel_0002550f: xor eax,eax
pf_at 0x4df3
l_kernel_00025511: add esp,byte +0x1c
pf_at 0x4df6
l_kernel_00025514: pop esi
pf_at 0x4df7
l_kernel_00025515: pop edi
pf_at 0x4df8
l_kernel_00025516: pop ebx
pf_at 0x4df9
l_kernel_00025517: pop ebp
pf_at 0x4dfa
l_kernel_00025518: ret
pf_at 0x4dfb
l_kernel_00025519: push ebp
pf_at 0x4dfc
l_kernel_0002551a: mov ebp,esp
pf_at 0x4dfe
l_kernel_0002551c: mov ecx,[dword 0x7041c]
pf_at 0x4e04
l_kernel_00025522: mov edx,[dword 0x70420]
pf_at 0x4e0a
l_kernel_00025528: pop ebp
pf_at 0x4e0b
l_kernel_00025529: jmp near 0x2573b
pf_at 0x4e10
l_kernel_0002552e: push ebp
pf_at 0x4e11
l_kernel_0002552f: mov ebp,esp
pf_at 0x4e13
l_kernel_00025531: push ebx
pf_at 0x4e14
l_kernel_00025532: push edi
pf_at 0x4e15
l_kernel_00025533: push esi
pf_at 0x4e16
l_kernel_00025534: sub esp,0xcc
pf_at 0x4e1c
l_kernel_0002553a: and dword [ebp-0x14],byte +0x0
pf_at 0x4e20
l_kernel_0002553e: and dword [ebp-0x10],byte +0x0
pf_at 0x4e24
l_kernel_00025542: and dword [ebp-0x18],byte +0x0
pf_at 0x4e28
l_kernel_00025546: lea edx,[ebp-0x34]
pf_at 0x4e2b
l_kernel_00025549: mov word [edx],0x1
pf_at 0x4e30
l_kernel_0002554e: and dword [edx+0x4],byte +0x0
pf_at 0x4e34
l_kernel_00025552: and dword [edx+0x8],byte +0x0
pf_at 0x4e38
l_kernel_00025556: and dword [edx+0xc],byte +0x0
pf_at 0x4e3c
l_kernel_0002555a: and dword [edx+0x10],byte +0x0
pf_at 0x4e40
l_kernel_0002555e: and dword [edx+0x14],byte +0x0
pf_at 0x4e44
l_kernel_00025562: and dword [edx+0x18],byte +0x0
pf_at 0x4e48
l_kernel_00025566: sub esp,byte +0xc
pf_at 0x4e4b
l_kernel_00025569: lea esi,[ebp-0xd4]
pf_at 0x4e51
l_kernel_0002556f: push esi
pf_at 0x4e52
l_kernel_00025570: call 0x2c208
pf_at 0x4e57
l_kernel_00025575: add esp,byte +0x10
pf_at 0x4e5a
l_kernel_00025578: test al,al
pf_at 0x4e5c
l_kernel_0002557a: jz short 0x255c4
pf_at 0x4e5e
l_kernel_0002557c: sub esp,byte +0x4
pf_at 0x4e61
l_kernel_0002557f: lea eax,[ebp-0x18]
pf_at 0x4e64
l_kernel_00025582: lea edi,[ebp-0x10]
pf_at 0x4e67
l_kernel_00025585: lea ecx,[ebp-0x34]
pf_at 0x4e6a
l_kernel_00025588: lea edx,[ebp-0x14]
pf_at 0x4e6d
l_kernel_0002558b: push esi
pf_at 0x4e6e
l_kernel_0002558c: push eax
pf_at 0x4e6f
l_kernel_0002558d: push edi
pf_at 0x4e70
l_kernel_0002558e: call 0x2c38e
pf_at 0x4e75
l_kernel_00025593: add esp,byte +0x10
pf_at 0x4e78
l_kernel_00025596: test al,al
pf_at 0x4e7a
l_kernel_00025598: jz short 0x255bc
pf_at 0x4e7c
l_kernel_0002559a: mov ecx,[ebp-0x14]
pf_at 0x4e7f
l_kernel_0002559d: mov edx,[ebp-0x10]
pf_at 0x4e82
l_kernel_000255a0: call 0x2573b
pf_at 0x4e87
l_kernel_000255a5: mov ebx,eax
pf_at 0x4e89
l_kernel_000255a7: mov ecx,[ebp-0x14]
pf_at 0x4e8c
l_kernel_000255aa: mov edx,[ebp-0x10]
pf_at 0x4e8f
l_kernel_000255ad: call 0x256e9
pf_at 0x4e94
l_kernel_000255b2: lea ecx,[ebp-0x34]
pf_at 0x4e97
l_kernel_000255b5: call 0x2c544
pf_at 0x4e9c
l_kernel_000255ba: jmp short 0x255d7
pf_at 0x4e9e
l_kernel_000255bc: lea ecx,[ebp-0x34]
pf_at 0x4ea1
l_kernel_000255bf: call 0x2c544
pf_at 0x4ea6
l_kernel_000255c4: sub esp,byte +0x8
pf_at 0x4ea9
l_kernel_000255c7: push esi
pf_at 0x4eaa
l_kernel_000255c8: push dword 0x2dfe4
pf_at 0x4eaf
l_kernel_000255cd: call 0x21c41
pf_at 0x4eb4
l_kernel_000255d2: add esp,byte +0x10
pf_at 0x4eb7
l_kernel_000255d5: xor ebx,ebx
pf_at 0x4eb9
l_kernel_000255d7: mov eax,ebx
pf_at 0x4ebb
l_kernel_000255d9: add esp,0xcc
pf_at 0x4ec1
l_kernel_000255df: pop esi
pf_at 0x4ec2
l_kernel_000255e0: pop edi
pf_at 0x4ec3
l_kernel_000255e1: pop ebx
pf_at 0x4ec4
l_kernel_000255e2: pop ebp
pf_at 0x4ec5
l_kernel_000255e3: ret
pf_at 0x4ec6
l_kernel_000255e4: push ebp
pf_at 0x4ec7
l_kernel_000255e5: mov ebp,esp
pf_at 0x4ec9
l_kernel_000255e7: push ebx
pf_at 0x4eca
l_kernel_000255e8: push edi
pf_at 0x4ecb
l_kernel_000255e9: push esi
pf_at 0x4ecc
l_kernel_000255ea: sub esp,0xfc
pf_at 0x4ed2
l_kernel_000255f0: lea esi,[ebp-0xfd]
pf_at 0x4ed8
l_kernel_000255f6: mov edx,esi
pf_at 0x4eda
l_kernel_000255f8: call 0x25240
pf_at 0x4edf
l_kernel_000255fd: xor ebx,ebx
pf_at 0x4ee1
l_kernel_000255ff: mov edi,0x2f0bc
pf_at 0x4ee6
l_kernel_00025604: cmp ebx,[dword 0x3f0bc]
pf_at 0x4eec
l_kernel_0002560a: jnc short 0x25626
pf_at 0x4eee
l_kernel_0002560c: sub esp,byte +0x8
pf_at 0x4ef1
l_kernel_0002560f: push esi
pf_at 0x4ef2
l_kernel_00025610: push edi
pf_at 0x4ef3
l_kernel_00025611: call 0x20cea
pf_at 0x4ef8
l_kernel_00025616: add esp,byte +0x10
pf_at 0x4efb
l_kernel_00025619: test eax,eax
pf_at 0x4efd
l_kernel_0002561b: jz short 0x2562b
pf_at 0x4eff
l_kernel_0002561d: inc ebx
pf_at 0x4f00
l_kernel_0002561e: add edi,0x100
pf_at 0x4f06
l_kernel_00025624: jmp short 0x25604
pf_at 0x4f08
l_kernel_00025626: xor eax,eax
pf_at 0x4f0a
l_kernel_00025628: dec eax
pf_at 0x4f0b
l_kernel_00025629: jmp short 0x2562d
pf_at 0x4f0d
l_kernel_0002562b: mov eax,ebx
pf_at 0x4f0f
l_kernel_0002562d: add esp,0xfc
pf_at 0x4f15
l_kernel_00025633: pop esi
pf_at 0x4f16
l_kernel_00025634: pop edi
pf_at 0x4f17
l_kernel_00025635: pop ebx
pf_at 0x4f18
l_kernel_00025636: pop ebp
pf_at 0x4f19
l_kernel_00025637: ret
pf_at 0x4f1a
l_kernel_00025638: push ebp
pf_at 0x4f1b
l_kernel_00025639: mov ebp,esp
pf_at 0x4f1d
l_kernel_0002563b: push ebx
pf_at 0x4f1e
l_kernel_0002563c: push edi
pf_at 0x4f1f
l_kernel_0002563d: push esi
pf_at 0x4f20
l_kernel_0002563e: sub esp,byte +0xc
pf_at 0x4f23
l_kernel_00025641: mov esi,edx
pf_at 0x4f25
l_kernel_00025643: mov edi,ecx
pf_at 0x4f27
l_kernel_00025645: mov ebx,[ebp+0x8]
pf_at 0x4f2a
l_kernel_00025648: mov ecx,[dword 0x7041c]
pf_at 0x4f30
l_kernel_0002564e: mov edx,[dword 0x70420]
pf_at 0x4f36
l_kernel_00025654: call 0x256e9
pf_at 0x4f3b
l_kernel_00025659: mov [dword 0x7041c],edi
pf_at 0x4f41
l_kernel_0002565f: mov [dword 0x70420],esi
pf_at 0x4f47
l_kernel_00025665: mov [dword 0x70424],ebx
pf_at 0x4f4d
l_kernel_0002566b: add esp,byte +0xc
pf_at 0x4f50
l_kernel_0002566e: pop esi
pf_at 0x4f51
l_kernel_0002566f: pop edi
pf_at 0x4f52
l_kernel_00025670: pop ebx
pf_at 0x4f53
l_kernel_00025671: pop ebp
pf_at 0x4f54
l_kernel_00025672: ret
pf_at 0x4f55
l_kernel_00025673: push ebp
pf_at 0x4f56
l_kernel_00025674: mov ebp,esp
pf_at 0x4f58
l_kernel_00025676: push ebx
pf_at 0x4f59
l_kernel_00025677: push edi
pf_at 0x4f5a
l_kernel_00025678: push esi
pf_at 0x4f5b
l_kernel_00025679: sub esp,byte +0xc
pf_at 0x4f5e
l_kernel_0002567c: mov edi,ecx
pf_at 0x4f60
l_kernel_0002567e: test ecx,ecx
pf_at 0x4f62
l_kernel_00025680: setz al
pf_at 0x4f65
l_kernel_00025683: test edx,edx
pf_at 0x4f67
l_kernel_00025685: setz cl
pf_at 0x4f6a
l_kernel_00025688: or cl,al
pf_at 0x4f6c
l_kernel_0002568a: jnz short 0x256d7
pf_at 0x4f6e
l_kernel_0002568c: mov esi,edx
pf_at 0x4f70
l_kernel_0002568e: mov eax,[ebp+0x8]
pf_at 0x4f73
l_kernel_00025691: mov ecx,[edx]
pf_at 0x4f75
l_kernel_00025693: mov dl,0x1
pf_at 0x4f77
l_kernel_00025695: cmp ecx,eax
pf_at 0x4f79
l_kernel_00025697: jnc short 0x256df
pf_at 0x4f7b
l_kernel_00025699: test ecx,ecx
pf_at 0x4f7d
l_kernel_0002569b: push byte +0x10
pf_at 0x4f7f
l_kernel_0002569d: pop ebx
pf_at 0x4f80
l_kernel_0002569e: cmovnz ebx,ecx
pf_at 0x4f83
l_kernel_000256a1: cmp ebx,eax
pf_at 0x4f85
l_kernel_000256a3: jnc short 0x256af
pf_at 0x4f87
l_kernel_000256a5: test ebx,ebx
pf_at 0x4f89
l_kernel_000256a7: js short 0x256ad
pf_at 0x4f8b
l_kernel_000256a9: add ebx,ebx
pf_at 0x4f8d
l_kernel_000256ab: jmp short 0x256a1
pf_at 0x4f8f
l_kernel_000256ad: mov ebx,eax
pf_at 0x4f91
l_kernel_000256af: lea eax,[ebx*4+0x0]
pf_at 0x4f98
l_kernel_000256b6: sub esp,byte +0x8
pf_at 0x4f9b
l_kernel_000256b9: push eax
pf_at 0x4f9c
l_kernel_000256ba: push dword [edi]
pf_at 0x4f9e
l_kernel_000256bc: call 0x20b68
pf_at 0x4fa3
l_kernel_000256c1: add esp,byte +0x10
pf_at 0x4fa6
l_kernel_000256c4: test eax,eax
pf_at 0x4fa8
l_kernel_000256c6: jz short 0x256d7
pf_at 0x4faa
l_kernel_000256c8: mov ecx,[esi]
pf_at 0x4fac
l_kernel_000256ca: mov dl,0x1
pf_at 0x4fae
l_kernel_000256cc: cmp ecx,ebx
pf_at 0x4fb0
l_kernel_000256ce: jnc short 0x256db
pf_at 0x4fb2
l_kernel_000256d0: and dword [eax+ecx*4],byte +0x0
pf_at 0x4fb6
l_kernel_000256d4: inc ecx
pf_at 0x4fb7
l_kernel_000256d5: jmp short 0x256cc
pf_at 0x4fb9
l_kernel_000256d7: xor edx,edx
pf_at 0x4fbb
l_kernel_000256d9: jmp short 0x256df
pf_at 0x4fbd
l_kernel_000256db: mov [edi],eax
pf_at 0x4fbf
l_kernel_000256dd: mov [esi],ebx
pf_at 0x4fc1
l_kernel_000256df: mov eax,edx
pf_at 0x4fc3
l_kernel_000256e1: add esp,byte +0xc
pf_at 0x4fc6
l_kernel_000256e4: pop esi
pf_at 0x4fc7
l_kernel_000256e5: pop edi
pf_at 0x4fc8
l_kernel_000256e6: pop ebx
pf_at 0x4fc9
l_kernel_000256e7: pop ebp
pf_at 0x4fca
l_kernel_000256e8: ret
pf_at 0x4fcb
l_kernel_000256e9: test ecx,ecx
pf_at 0x4fcd
l_kernel_000256eb: jz short 0x2571c
pf_at 0x4fcf
l_kernel_000256ed: push ebp
pf_at 0x4fd0
l_kernel_000256ee: mov ebp,esp
pf_at 0x4fd2
l_kernel_000256f0: push ebx
pf_at 0x4fd3
l_kernel_000256f1: push edi
pf_at 0x4fd4
l_kernel_000256f2: push esi
pf_at 0x4fd5
l_kernel_000256f3: sub esp,byte +0xc
pf_at 0x4fd8
l_kernel_000256f6: mov edi,edx
pf_at 0x4fda
l_kernel_000256f8: mov esi,ecx
pf_at 0x4fdc
l_kernel_000256fa: mov ebx,ecx
pf_at 0x4fde
l_kernel_000256fc: sub edi,byte +0x1
pf_at 0x4fe1
l_kernel_000256ff: jc short 0x2570d
pf_at 0x4fe3
l_kernel_00025701: mov ecx,ebx
pf_at 0x4fe5
l_kernel_00025703: call 0x2571d
pf_at 0x4fea
l_kernel_00025708: add ebx,byte +0x4
pf_at 0x4fed
l_kernel_0002570b: jmp short 0x256fc
pf_at 0x4fef
l_kernel_0002570d: mov [esp],esi
pf_at 0x4ff2
l_kernel_00025710: call 0x20aee
pf_at 0x4ff7
l_kernel_00025715: add esp,byte +0xc
pf_at 0x4ffa
l_kernel_00025718: pop esi
pf_at 0x4ffb
l_kernel_00025719: pop edi
pf_at 0x4ffc
l_kernel_0002571a: pop ebx
pf_at 0x4ffd
l_kernel_0002571b: pop ebp
pf_at 0x4ffe
l_kernel_0002571c: ret
pf_at 0x4fff
l_kernel_0002571d: test ecx,ecx
pf_at 0x5001
l_kernel_0002571f: jz short 0x2573a
pf_at 0x5003
l_kernel_00025721: push ebp
pf_at 0x5004
l_kernel_00025722: mov ebp,esp
pf_at 0x5006
l_kernel_00025724: push esi
pf_at 0x5007
l_kernel_00025725: push eax
pf_at 0x5008
l_kernel_00025726: mov esi,ecx
pf_at 0x500a
l_kernel_00025728: mov eax,[ecx]
pf_at 0x500c
l_kernel_0002572a: mov [esp],eax
pf_at 0x500f
l_kernel_0002572d: call 0x20aee
pf_at 0x5014
l_kernel_00025732: and dword [esi],byte +0x0
pf_at 0x5017
l_kernel_00025735: add esp,byte +0x4
pf_at 0x501a
l_kernel_00025738: pop esi
pf_at 0x501b
l_kernel_00025739: pop ebp
pf_at 0x501c
l_kernel_0002573a: ret
pf_at 0x501d
l_kernel_0002573b: push ebp
pf_at 0x501e
l_kernel_0002573c: mov ebp,esp
pf_at 0x5020
l_kernel_0002573e: push edi
pf_at 0x5021
l_kernel_0002573f: push esi
pf_at 0x5022
l_kernel_00025740: sub esp,byte +0x10
pf_at 0x5025
l_kernel_00025743: and dword [ebp-0xc],byte +0x0
pf_at 0x5029
l_kernel_00025747: test edx,edx
pf_at 0x502b
l_kernel_00025749: jz short 0x257ab
pf_at 0x502d
l_kernel_0002574b: mov edi,edx
pf_at 0x502f
l_kernel_0002574d: mov esi,ecx
pf_at 0x5031
l_kernel_0002574f: sub esp,byte +0xc
pf_at 0x5034
l_kernel_00025752: lea eax,[ebp-0xc]
pf_at 0x5037
l_kernel_00025755: push eax
pf_at 0x5038
l_kernel_00025756: call 0x257e3
pf_at 0x503d
l_kernel_0002575b: add esp,byte +0x10
pf_at 0x5040
l_kernel_0002575e: test al,al
pf_at 0x5042
l_kernel_00025760: jz short 0x257da
pf_at 0x5044
l_kernel_00025762: mov eax,[ebp-0xc]
pf_at 0x5047
l_kernel_00025765: cmp eax,edi
pf_at 0x5049
l_kernel_00025767: jnc short 0x257b5
pf_at 0x504b
l_kernel_00025769: mov ecx,[esi+eax*4]
pf_at 0x504e
l_kernel_0002576c: mov edx,0x2ccc0
pf_at 0x5053
l_kernel_00025771: call 0x2605b
pf_at 0x5058
l_kernel_00025776: test al,al
pf_at 0x505a
l_kernel_00025778: jnz short 0x257b9
pf_at 0x505c
l_kernel_0002577a: mov eax,[ebp-0xc]
pf_at 0x505f
l_kernel_0002577d: mov ecx,[esi+eax*4]
pf_at 0x5062
l_kernel_00025780: mov edx,0x2ccc4
pf_at 0x5067
l_kernel_00025785: call 0x2605b
pf_at 0x506c
l_kernel_0002578a: test al,al
pf_at 0x506e
l_kernel_0002578c: jnz short 0x257b9
pf_at 0x5070
l_kernel_0002578e: mov eax,[ebp-0xc]
pf_at 0x5073
l_kernel_00025791: mov ecx,[esi+eax*4]
pf_at 0x5076
l_kernel_00025794: mov edx,0x2ccc9
pf_at 0x507b
l_kernel_00025799: call 0x2605b
pf_at 0x5080
l_kernel_0002579e: test al,al
pf_at 0x5082
l_kernel_000257a0: jnz short 0x257b9
pf_at 0x5084
l_kernel_000257a2: mov eax,[ebp-0xc]
pf_at 0x5087
l_kernel_000257a5: inc eax
pf_at 0x5088
l_kernel_000257a6: mov [ebp-0xc],eax
pf_at 0x508b
l_kernel_000257a9: jmp short 0x25765
pf_at 0x508d
l_kernel_000257ab: mov ecx,0x2ccb8
pf_at 0x5092
l_kernel_000257b0: call 0x2176e
pf_at 0x5097
l_kernel_000257b5: mov al,0x1
pf_at 0x5099
l_kernel_000257b7: jmp short 0x257dc
pf_at 0x509b
l_kernel_000257b9: mov eax,[ebp-0xc]
pf_at 0x509e
l_kernel_000257bc: lea ecx,[ebp-0x14]
pf_at 0x50a1
l_kernel_000257bf: mov [ecx],eax
pf_at 0x50a3
l_kernel_000257c1: mov eax,[esi+eax*4]
pf_at 0x50a6
l_kernel_000257c4: mov [ecx+0x4],eax
pf_at 0x50a9
l_kernel_000257c7: sub esp,byte +0x4
pf_at 0x50ac
l_kernel_000257ca: push dword 0x2cccf
pf_at 0x50b1
l_kernel_000257cf: push byte +0x0
pf_at 0x50b3
l_kernel_000257d1: push ecx
pf_at 0x50b4
l_kernel_000257d2: call 0x2609c
pf_at 0x50b9
l_kernel_000257d7: add esp,byte +0x10
pf_at 0x50bc
l_kernel_000257da: xor eax,eax
pf_at 0x50be
l_kernel_000257dc: add esp,byte +0x10
pf_at 0x50c1
l_kernel_000257df: pop esi
pf_at 0x50c2
l_kernel_000257e0: pop edi
pf_at 0x50c3
l_kernel_000257e1: pop ebp
pf_at 0x50c4
l_kernel_000257e2: ret
pf_at 0x50c5
l_kernel_000257e3: push ebp
pf_at 0x50c6
l_kernel_000257e4: mov ebp,esp
pf_at 0x50c8
l_kernel_000257e6: push ebx
pf_at 0x50c9
l_kernel_000257e7: push edi
pf_at 0x50ca
l_kernel_000257e8: push esi
pf_at 0x50cb
l_kernel_000257e9: sub esp,byte +0x7c
pf_at 0x50ce
l_kernel_000257ec: mov ebx,edx
pf_at 0x50d0
l_kernel_000257ee: mov [ebp-0x14],ecx
pf_at 0x50d3
l_kernel_000257f1: mov edi,[ebp+0x8]
pf_at 0x50d6
l_kernel_000257f4: lea esi,[ebp-0x30]
pf_at 0x50d9
l_kernel_000257f7: mov [ebp-0x10],edx
pf_at 0x50dc
l_kernel_000257fa: mov eax,[edi]
pf_at 0x50de
l_kernel_000257fc: cmp eax,ebx
pf_at 0x50e0
l_kernel_000257fe: setnc cl
pf_at 0x50e3
l_kernel_00025801: mov [ebp-0x1c],ecx
pf_at 0x50e6
l_kernel_00025804: jnc near 0x25ff0
pf_at 0x50ec
l_kernel_0002580a: mov [ebp-0x30],eax
pf_at 0x50ef
l_kernel_0002580d: mov ecx,[ebp-0x14]
pf_at 0x50f2
l_kernel_00025810: mov ecx,[ecx+eax*4]
pf_at 0x50f5
l_kernel_00025813: mov [ebp-0x2c],ecx
pf_at 0x50f8
l_kernel_00025816: lea edx,[ebp-0x28]
pf_at 0x50fb
l_kernel_00025819: call 0x26135
pf_at 0x5100
l_kernel_0002581e: test al,al
pf_at 0x5102
l_kernel_00025820: jz near 0x25fd6
pf_at 0x5108
l_kernel_00025826: cmp dword [ebp-0x28],byte +0x0
pf_at 0x510c
l_kernel_0002582a: jz near 0x25975
pf_at 0x5112
l_kernel_00025830: mov eax,[ebp-0x20]
pf_at 0x5115
l_kernel_00025833: mov ebx,[eax]
pf_at 0x5117
l_kernel_00025835: mov ecx,ebx
pf_at 0x5119
l_kernel_00025837: mov edx,0x2ccc0
pf_at 0x511e
l_kernel_0002583c: call 0x26458
pf_at 0x5123
l_kernel_00025841: test al,al
pf_at 0x5125
l_kernel_00025843: jnz near 0x25fc7
pf_at 0x512b
l_kernel_00025849: mov ecx,ebx
pf_at 0x512d
l_kernel_0002584b: mov edx,0x2ccc4
pf_at 0x5132
l_kernel_00025850: call 0x26458
pf_at 0x5137
l_kernel_00025855: test al,al
pf_at 0x5139
l_kernel_00025857: jnz near 0x25fc7
pf_at 0x513f
l_kernel_0002585d: mov ecx,ebx
pf_at 0x5141
l_kernel_0002585f: mov edx,0x2ccc9
pf_at 0x5146
l_kernel_00025864: call 0x26458
pf_at 0x514b
l_kernel_00025869: test al,al
pf_at 0x514d
l_kernel_0002586b: jnz near 0x25fc7
pf_at 0x5153
l_kernel_00025871: mov ecx,ebx
pf_at 0x5155
l_kernel_00025873: mov edx,0x2cd03
pf_at 0x515a
l_kernel_00025878: call 0x26458
pf_at 0x515f
l_kernel_0002587d: test al,al
pf_at 0x5161
l_kernel_0002587f: jz near 0x25987
pf_at 0x5167
l_kernel_00025885: and dword [ebp-0x74],byte +0x0
pf_at 0x516b
l_kernel_00025889: and dword [ebp-0x70],byte +0x0
pf_at 0x516f
l_kernel_0002588d: and dword [ebp-0x6c],byte +0x0
pf_at 0x5173
l_kernel_00025891: and dword [ebp-0x68],byte +0x0
pf_at 0x5177
l_kernel_00025895: and dword [ebp-0x64],byte +0x0
pf_at 0x517b
l_kernel_00025899: mov [ebp-0x4c],esi
pf_at 0x517e
l_kernel_0002589c: and dword [ebp-0x60],byte +0x0
pf_at 0x5182
l_kernel_000258a0: lea ebx,[ebp-0x28]
pf_at 0x5185
l_kernel_000258a3: mov [ebp-0x48],ebx
pf_at 0x5188
l_kernel_000258a6: and dword [ebp-0x5c],byte +0x0
pf_at 0x518c
l_kernel_000258aa: mov dword [ebp-0x44],0x1
pf_at 0x5193
l_kernel_000258b1: and dword [ebp-0x58],byte +0x0
pf_at 0x5197
l_kernel_000258b5: lea ecx,[ebp-0x4c]
pf_at 0x519a
l_kernel_000258b8: lea edx,[ebp-0x74]
pf_at 0x519d
l_kernel_000258bb: call 0x26473
pf_at 0x51a2
l_kernel_000258c0: test al,al
pf_at 0x51a4
l_kernel_000258c2: jz near 0x25ad4
pf_at 0x51aa
l_kernel_000258c8: mov eax,[ebp-0x44]
pf_at 0x51ad
l_kernel_000258cb: cmp eax,[ebp-0x28]
pf_at 0x51b0
l_kernel_000258ce: jnz near 0x25bbc
pf_at 0x51b6
l_kernel_000258d4: lea esi,[ebp-0x74]
pf_at 0x51b9
l_kernel_000258d7: mov ecx,esi
pf_at 0x51bb
l_kernel_000258d9: call 0x26564
pf_at 0x51c0
l_kernel_000258de: mov ebx,eax
pf_at 0x51c2
l_kernel_000258e0: mov ecx,esi
pf_at 0x51c4
l_kernel_000258e2: call 0x24daf
pf_at 0x51c9
l_kernel_000258e7: lea ecx,[ebp-0x28]
pf_at 0x51cc
l_kernel_000258ea: call 0x26419
pf_at 0x51d1
l_kernel_000258ef: mov eax,edi
pf_at 0x51d3
l_kernel_000258f1: mov edi,[edi]
pf_at 0x51d5
l_kernel_000258f3: inc edi
pf_at 0x51d6
l_kernel_000258f4: mov [eax],edi
pf_at 0x51d8
l_kernel_000258f6: test bl,bl
pf_at 0x51da
l_kernel_000258f8: jz near 0x25c6c
pf_at 0x51e0
l_kernel_000258fe: sub esp,byte +0xc
pf_at 0x51e3
l_kernel_00025901: mov ecx,[ebp-0x14]
pf_at 0x51e6
l_kernel_00025904: mov ebx,[ebp-0x10]
pf_at 0x51e9
l_kernel_00025907: mov edx,ebx
pf_at 0x51eb
l_kernel_00025909: push eax
pf_at 0x51ec
l_kernel_0002590a: mov edi,eax
pf_at 0x51ee
l_kernel_0002590c: call 0x257e3
pf_at 0x51f3
l_kernel_00025911: add esp,byte +0x10
pf_at 0x51f6
l_kernel_00025914: xor ecx,ecx
pf_at 0x51f8
l_kernel_00025916: inc ecx
pf_at 0x51f9
l_kernel_00025917: test al,al
pf_at 0x51fb
l_kernel_00025919: lea esi,[ebp-0x30]
pf_at 0x51fe
l_kernel_0002591c: jz near 0x25d82
pf_at 0x5204
l_kernel_00025922: mov eax,[edi]
pf_at 0x5206
l_kernel_00025924: cmp eax,ebx
pf_at 0x5208
l_kernel_00025926: jnc near 0x25e0f
pf_at 0x520e
l_kernel_0002592c: mov edi,[ebp-0x14]
pf_at 0x5211
l_kernel_0002592f: mov ecx,[edi+eax*4]
pf_at 0x5214
l_kernel_00025932: mov edx,0x2ccc4
pf_at 0x5219
l_kernel_00025937: call 0x2605b
pf_at 0x521e
l_kernel_0002593c: test al,al
pf_at 0x5220
l_kernel_0002593e: jz near 0x25e2a
pf_at 0x5226
l_kernel_00025944: and dword [ebp-0x3c],byte +0x0
pf_at 0x522a
l_kernel_00025948: mov eax,[ebp+0x8]
pf_at 0x522d
l_kernel_0002594b: mov eax,[eax]
pf_at 0x522f
l_kernel_0002594d: inc eax
pf_at 0x5230
l_kernel_0002594e: sub esp,byte +0x8
pf_at 0x5233
l_kernel_00025951: mov ecx,edi
pf_at 0x5235
l_kernel_00025953: mov edx,ebx
pf_at 0x5237
l_kernel_00025955: lea edi,[ebp-0x3c]
pf_at 0x523a
l_kernel_00025958: push edi
pf_at 0x523b
l_kernel_00025959: push eax
pf_at 0x523c
l_kernel_0002595a: call 0x265be
pf_at 0x5241
l_kernel_0002595f: add esp,byte +0x10
pf_at 0x5244
l_kernel_00025962: test al,al
pf_at 0x5246
l_kernel_00025964: jz near 0x25e48
pf_at 0x524c
l_kernel_0002596a: mov eax,[ebp-0x3c]
pf_at 0x524f
l_kernel_0002596d: inc eax
pf_at 0x5250
l_kernel_0002596e: mov edi,[ebp+0x8]
pf_at 0x5253
l_kernel_00025971: mov [edi],eax
pf_at 0x5255
l_kernel_00025973: jmp short 0x2597f
pf_at 0x5257
l_kernel_00025975: lea ecx,[ebp-0x28]
pf_at 0x525a
l_kernel_00025978: call 0x26419
pf_at 0x525f
l_kernel_0002597d: inc dword [edi]
pf_at 0x5261
l_kernel_0002597f: push byte +0x2
pf_at 0x5263
l_kernel_00025981: pop ecx
pf_at 0x5264
l_kernel_00025982: jmp near 0x25d82
pf_at 0x5269
l_kernel_00025987: mov ecx,ebx
pf_at 0x526b
l_kernel_00025989: mov edx,0x2cd87
pf_at 0x5270
l_kernel_0002598e: call 0x26458
pf_at 0x5275
l_kernel_00025993: test al,al
pf_at 0x5277
l_kernel_00025995: jz near 0x25ae0
pf_at 0x527d
l_kernel_0002599b: mov eax,[edi]
pf_at 0x527f
l_kernel_0002599d: mov [ebp-0x18],eax
pf_at 0x5282
l_kernel_000259a0: lea esi,[eax+0x1]
pf_at 0x5285
l_kernel_000259a3: and dword [ebp-0x40],byte +0x0
pf_at 0x5289
l_kernel_000259a7: sub esp,byte +0x8
pf_at 0x528c
l_kernel_000259aa: mov ecx,[ebp-0x14]
pf_at 0x528f
l_kernel_000259ad: mov ebx,[ebp-0x10]
pf_at 0x5292
l_kernel_000259b0: mov edx,ebx
pf_at 0x5294
l_kernel_000259b2: lea eax,[ebp-0x40]
pf_at 0x5297
l_kernel_000259b5: push eax
pf_at 0x5298
l_kernel_000259b6: mov [ebp-0x78],esi
pf_at 0x529b
l_kernel_000259b9: push esi
pf_at 0x529c
l_kernel_000259ba: call 0x265be
pf_at 0x52a1
l_kernel_000259bf: add esp,byte +0x10
pf_at 0x52a4
l_kernel_000259c2: test al,al
pf_at 0x52a6
l_kernel_000259c4: mov edi,0x1
pf_at 0x52ab
l_kernel_000259c9: jz near 0x25bf0
pf_at 0x52b1
l_kernel_000259cf: mov ecx,[ebp-0x18]
pf_at 0x52b4
l_kernel_000259d2: mov [ebp-0x54],ecx
pf_at 0x52b7
l_kernel_000259d5: mov eax,[ebp-0x14]
pf_at 0x52ba
l_kernel_000259d8: mov ecx,[eax+ecx*4]
pf_at 0x52bd
l_kernel_000259db: mov [ebp-0x50],ecx
pf_at 0x52c0
l_kernel_000259de: lea esi,[ebp-0x3c]
pf_at 0x52c3
l_kernel_000259e1: mov edx,esi
pf_at 0x52c5
l_kernel_000259e3: call 0x26135
pf_at 0x52ca
l_kernel_000259e8: test al,al
pf_at 0x52cc
l_kernel_000259ea: jz near 0x25d64
pf_at 0x52d2
l_kernel_000259f0: and dword [ebp-0x74],byte +0x0
pf_at 0x52d6
l_kernel_000259f4: and dword [ebp-0x70],byte +0x0
pf_at 0x52da
l_kernel_000259f8: and dword [ebp-0x6c],byte +0x0
pf_at 0x52de
l_kernel_000259fc: and dword [ebp-0x68],byte +0x0
pf_at 0x52e2
l_kernel_00025a00: and dword [ebp-0x64],byte +0x0
pf_at 0x52e6
l_kernel_00025a04: lea eax,[ebp-0x54]
pf_at 0x52e9
l_kernel_00025a07: mov [ebp-0x4c],eax
pf_at 0x52ec
l_kernel_00025a0a: and dword [ebp-0x60],byte +0x0
pf_at 0x52f0
l_kernel_00025a0e: mov [ebp-0x48],esi
pf_at 0x52f3
l_kernel_00025a11: and dword [ebp-0x5c],byte +0x0
pf_at 0x52f7
l_kernel_00025a15: mov dword [ebp-0x44],0x1
pf_at 0x52fe
l_kernel_00025a1c: and dword [ebp-0x58],byte +0x0
pf_at 0x5302
l_kernel_00025a20: lea ecx,[ebp-0x4c]
pf_at 0x5305
l_kernel_00025a23: lea edx,[ebp-0x74]
pf_at 0x5308
l_kernel_00025a26: call 0x26473
pf_at 0x530d
l_kernel_00025a2b: test al,al
pf_at 0x530f
l_kernel_00025a2d: jz near 0x25d90
pf_at 0x5315
l_kernel_00025a33: mov eax,[ebp-0x44]
pf_at 0x5318
l_kernel_00025a36: cmp eax,[ebp-0x3c]
pf_at 0x531b
l_kernel_00025a39: jnz near 0x25da1
pf_at 0x5321
l_kernel_00025a3f: lea edi,[ebp-0x74]
pf_at 0x5324
l_kernel_00025a42: mov ecx,edi
pf_at 0x5326
l_kernel_00025a44: call 0x26564
pf_at 0x532b
l_kernel_00025a49: mov ebx,eax
pf_at 0x532d
l_kernel_00025a4b: mov ecx,edi
pf_at 0x532f
l_kernel_00025a4d: call 0x24daf
pf_at 0x5334
l_kernel_00025a52: lea ecx,[ebp-0x3c]
pf_at 0x5337
l_kernel_00025a55: call 0x26419
pf_at 0x533c
l_kernel_00025a5a: test bl,bl
pf_at 0x533e
l_kernel_00025a5c: jz near 0x25de0
pf_at 0x5344
l_kernel_00025a62: mov eax,[ebp-0x78]
pf_at 0x5347
l_kernel_00025a65: mov [ebp-0x7c],eax
pf_at 0x534a
l_kernel_00025a68: sub esp,byte +0xc
pf_at 0x534d
l_kernel_00025a6b: mov ecx,[ebp-0x14]
pf_at 0x5350
l_kernel_00025a6e: mov ebx,[ebp-0x10]
pf_at 0x5353
l_kernel_00025a71: mov edx,ebx
pf_at 0x5355
l_kernel_00025a73: lea eax,[ebp-0x7c]
pf_at 0x5358
l_kernel_00025a76: push eax
pf_at 0x5359
l_kernel_00025a77: call 0x257e3
pf_at 0x535e
l_kernel_00025a7c: add esp,byte +0x10
pf_at 0x5361
l_kernel_00025a7f: test al,al
pf_at 0x5363
l_kernel_00025a81: jz near 0x25dfc
pf_at 0x5369
l_kernel_00025a87: mov eax,[ebp-0x7c]
pf_at 0x536c
l_kernel_00025a8a: cmp eax,ebx
pf_at 0x536e
l_kernel_00025a8c: mov edi,0x1
pf_at 0x5373
l_kernel_00025a91: jnc short 0x25aab
pf_at 0x5375
l_kernel_00025a93: mov ecx,[ebp-0x14]
pf_at 0x5378
l_kernel_00025a96: mov ecx,[ecx+eax*4]
pf_at 0x537b
l_kernel_00025a99: mov edx,0x2ccc0
pf_at 0x5380
l_kernel_00025a9e: call 0x2605b
pf_at 0x5385
l_kernel_00025aa3: test al,al
pf_at 0x5387
l_kernel_00025aa5: jnz near 0x259cf
pf_at 0x538d
l_kernel_00025aab: lea ecx,[ebp-0x28]
pf_at 0x5390
l_kernel_00025aae: call 0x26419
pf_at 0x5395
l_kernel_00025ab3: sub esp,byte +0x4
pf_at 0x5398
l_kernel_00025ab6: push dword 0x2cd8d
pf_at 0x539d
l_kernel_00025abb: push dword 0x2ccc0
pf_at 0x53a2
l_kernel_00025ac0: lea eax,[ebp-0x54]
pf_at 0x53a5
l_kernel_00025ac3: push eax
pf_at 0x53a6
l_kernel_00025ac4: call 0x2609c
pf_at 0x53ab
l_kernel_00025ac9: add esp,byte +0x10
pf_at 0x53ae
l_kernel_00025acc: lea esi,[ebp-0x30]
pf_at 0x53b1
l_kernel_00025acf: jmp near 0x25c09
pf_at 0x53b6
l_kernel_00025ad4: mov ecx,ebx
pf_at 0x53b8
l_kernel_00025ad6: call 0x26419
pf_at 0x53bd
l_kernel_00025adb: jmp near 0x25be5
pf_at 0x53c2
l_kernel_00025ae0: mov ecx,ebx
pf_at 0x53c4
l_kernel_00025ae2: mov edx,0x2cddb
pf_at 0x53c9
l_kernel_00025ae7: call 0x26458
pf_at 0x53ce
l_kernel_00025aec: test al,al
pf_at 0x53d0
l_kernel_00025aee: jz near 0x25c10
pf_at 0x53d6
l_kernel_00025af4: mov edi,[edi]
pf_at 0x53d8
l_kernel_00025af6: inc edi
pf_at 0x53d9
l_kernel_00025af7: mov dword [ebp-0x18],0x0
pf_at 0x53e0
l_kernel_00025afe: mov [ebp-0x78],edi
pf_at 0x53e3
l_kernel_00025b01: mov esi,[ebp-0x10]
pf_at 0x53e6
l_kernel_00025b04: mov ebx,[ebp-0x14]
pf_at 0x53e9
l_kernel_00025b07: cmp edi,esi
pf_at 0x53eb
l_kernel_00025b09: jnc near 0x25fb4
pf_at 0x53f1
l_kernel_00025b0f: mov ecx,[ebx+edi*4]
pf_at 0x53f4
l_kernel_00025b12: lea edx,[ebp-0x74]
pf_at 0x53f7
l_kernel_00025b15: call 0x26135
pf_at 0x53fc
l_kernel_00025b1a: test al,al
pf_at 0x53fe
l_kernel_00025b1c: jz short 0x25b8e
pf_at 0x5400
l_kernel_00025b1e: cmp dword [ebp-0x74],byte +0x0
pf_at 0x5404
l_kernel_00025b22: jz short 0x25b8e
pf_at 0x5406
l_kernel_00025b24: mov eax,[ebp-0x6c]
pf_at 0x5409
l_kernel_00025b27: mov ebx,[eax]
pf_at 0x540b
l_kernel_00025b29: mov ecx,ebx
pf_at 0x540d
l_kernel_00025b2b: mov edx,0x2cd03
pf_at 0x5412
l_kernel_00025b30: call 0x26458
pf_at 0x5417
l_kernel_00025b35: xor ecx,ecx
pf_at 0x5419
l_kernel_00025b37: inc ecx
pf_at 0x541a
l_kernel_00025b38: mov esi,ecx
pf_at 0x541c
l_kernel_00025b3a: test al,al
pf_at 0x541e
l_kernel_00025b3c: jnz short 0x25b7d
pf_at 0x5420
l_kernel_00025b3e: mov esi,ecx
pf_at 0x5422
l_kernel_00025b40: mov ecx,ebx
pf_at 0x5424
l_kernel_00025b42: mov edx,0x2cd87
pf_at 0x5429
l_kernel_00025b47: call 0x26458
pf_at 0x542e
l_kernel_00025b4c: test al,al
pf_at 0x5430
l_kernel_00025b4e: jnz short 0x25b7d
pf_at 0x5432
l_kernel_00025b50: mov ecx,ebx
pf_at 0x5434
l_kernel_00025b52: mov edx,0x2cddb
pf_at 0x5439
l_kernel_00025b57: call 0x26458
pf_at 0x543e
l_kernel_00025b5c: test al,al
pf_at 0x5440
l_kernel_00025b5e: jnz short 0x25b7d
pf_at 0x5442
l_kernel_00025b60: mov ecx,ebx
pf_at 0x5444
l_kernel_00025b62: mov edx,0x2ccc9
pf_at 0x5449
l_kernel_00025b67: call 0x26458
pf_at 0x544e
l_kernel_00025b6c: test al,al
pf_at 0x5450
l_kernel_00025b6e: jz short 0x25b94
pf_at 0x5452
l_kernel_00025b70: xor esi,esi
pf_at 0x5454
l_kernel_00025b72: dec esi
pf_at 0x5455
l_kernel_00025b73: cmp dword [ebp-0x18],byte +0x0
pf_at 0x5459
l_kernel_00025b77: jz near 0x25e69
pf_at 0x545f
l_kernel_00025b7d: lea ecx,[ebp-0x74]
pf_at 0x5462
l_kernel_00025b80: call 0x26419
pf_at 0x5467
l_kernel_00025b85: add [ebp-0x18],esi
pf_at 0x546a
l_kernel_00025b88: mov esi,[ebp-0x10]
pf_at 0x546d
l_kernel_00025b8b: mov ebx,[ebp-0x14]
pf_at 0x5470
l_kernel_00025b8e: inc edi
pf_at 0x5471
l_kernel_00025b8f: jmp near 0x25b07
pf_at 0x5476
l_kernel_00025b94: mov ecx,ebx
pf_at 0x5478
l_kernel_00025b96: mov edx,0x2ccc0
pf_at 0x547d
l_kernel_00025b9b: call 0x26458
pf_at 0x5482
l_kernel_00025ba0: mov esi,[ebp-0x18]
pf_at 0x5485
l_kernel_00025ba3: test esi,esi
pf_at 0x5487
l_kernel_00025ba5: setnz bl
pf_at 0x548a
l_kernel_00025ba8: and bl,al
pf_at 0x548c
l_kernel_00025baa: lea ecx,[ebp-0x74]
pf_at 0x548f
l_kernel_00025bad: call 0x26419
pf_at 0x5494
l_kernel_00025bb2: movzx eax,bl
pf_at 0x5497
l_kernel_00025bb5: sub esi,eax
pf_at 0x5499
l_kernel_00025bb7: mov [ebp-0x18],esi
pf_at 0x549c
l_kernel_00025bba: jmp short 0x25b88
pf_at 0x549e
l_kernel_00025bbc: lea ecx,[ebp-0x74]
pf_at 0x54a1
l_kernel_00025bbf: call 0x24daf
pf_at 0x54a6
l_kernel_00025bc4: mov ecx,ebx
pf_at 0x54a8
l_kernel_00025bc6: call 0x26419
pf_at 0x54ad
l_kernel_00025bcb: mov eax,[ebp-0x20]
pf_at 0x54b0
l_kernel_00025bce: mov ecx,[ebp-0x44]
pf_at 0x54b3
l_kernel_00025bd1: sub esp,byte +0x4
pf_at 0x54b6
l_kernel_00025bd4: push dword 0x2cd06
pf_at 0x54bb
l_kernel_00025bd9: push dword [eax+ecx*4]
pf_at 0x54be
l_kernel_00025bdc: push esi
pf_at 0x54bf
l_kernel_00025bdd: call 0x2609c
pf_at 0x54c4
l_kernel_00025be2: add esp,byte +0x10
pf_at 0x54c7
l_kernel_00025be5: xor ecx,ecx
pf_at 0x54c9
l_kernel_00025be7: inc ecx
pf_at 0x54ca
l_kernel_00025be8: mov ebx,[ebp-0x10]
pf_at 0x54cd
l_kernel_00025beb: jmp near 0x25d82
pf_at 0x54d2
l_kernel_00025bf0: sub esp,byte +0x4
pf_at 0x54d5
l_kernel_00025bf3: push dword 0x2cd8d
pf_at 0x54da
l_kernel_00025bf8: push dword 0x2ccc0
pf_at 0x54df
l_kernel_00025bfd: lea esi,[ebp-0x30]
pf_at 0x54e2
l_kernel_00025c00: push esi
pf_at 0x54e3
l_kernel_00025c01: call 0x2609c
pf_at 0x54e8
l_kernel_00025c06: add esp,byte +0x10
pf_at 0x54eb
l_kernel_00025c09: mov ecx,edi
pf_at 0x54ed
l_kernel_00025c0b: jmp near 0x25d7f
pf_at 0x54f2
l_kernel_00025c10: mov byte [ebp-0x74],0x0
pf_at 0x54f6
l_kernel_00025c14: sub esp,byte +0xc
pf_at 0x54f9
l_kernel_00025c17: mov ecx,esi
pf_at 0x54fb
l_kernel_00025c19: lea edx,[ebp-0x28]
pf_at 0x54fe
l_kernel_00025c1c: lea eax,[ebp-0x74]
pf_at 0x5501
l_kernel_00025c1f: push eax
pf_at 0x5502
l_kernel_00025c20: call 0x266b0
pf_at 0x5507
l_kernel_00025c25: add esp,byte +0x10
pf_at 0x550a
l_kernel_00025c28: test al,al
pf_at 0x550c
l_kernel_00025c2a: mov ebx,[ebp-0x10]
pf_at 0x550f
l_kernel_00025c2d: jz short 0x25c5c
pf_at 0x5511
l_kernel_00025c2f: cmp byte [ebp-0x74],0x0
pf_at 0x5515
l_kernel_00025c33: jnz short 0x25c4b
pf_at 0x5517
l_kernel_00025c35: sub esp,byte +0xc
pf_at 0x551a
l_kernel_00025c38: mov ecx,esi
pf_at 0x551c
l_kernel_00025c3a: lea edx,[ebp-0x28]
pf_at 0x551f
l_kernel_00025c3d: push byte +0x0
pf_at 0x5521
l_kernel_00025c3f: call 0x26d92
pf_at 0x5526
l_kernel_00025c44: add esp,byte +0x10
pf_at 0x5529
l_kernel_00025c47: test al,al
pf_at 0x552b
l_kernel_00025c49: jz short 0x25c5c
pf_at 0x552d
l_kernel_00025c4b: lea ecx,[ebp-0x28]
pf_at 0x5530
l_kernel_00025c4e: call 0x26419
pf_at 0x5535
l_kernel_00025c53: inc dword [edi]
pf_at 0x5537
l_kernel_00025c55: xor ecx,ecx
pf_at 0x5539
l_kernel_00025c57: jmp near 0x25d82
pf_at 0x553e
l_kernel_00025c5c: lea ecx,[ebp-0x28]
pf_at 0x5541
l_kernel_00025c5f: call 0x26419
pf_at 0x5546
l_kernel_00025c64: xor ecx,ecx
pf_at 0x5548
l_kernel_00025c66: inc ecx
pf_at 0x5549
l_kernel_00025c67: jmp near 0x25d82
pf_at 0x554e
l_kernel_00025c6c: xor esi,esi
pf_at 0x5550
l_kernel_00025c6e: mov ebx,[ebp-0x10]
pf_at 0x5553
l_kernel_00025c71: cmp edi,ebx
pf_at 0x5555
l_kernel_00025c73: jnc near 0x25d46
pf_at 0x555b
l_kernel_00025c79: mov eax,[ebp-0x14]
pf_at 0x555e
l_kernel_00025c7c: mov ecx,[eax+edi*4]
pf_at 0x5561
l_kernel_00025c7f: lea edx,[ebp-0x3c]
pf_at 0x5564
l_kernel_00025c82: call 0x26135
pf_at 0x5569
l_kernel_00025c87: test al,al
pf_at 0x556b
l_kernel_00025c89: jz short 0x25cd2
pf_at 0x556d
l_kernel_00025c8b: cmp dword [ebp-0x3c],byte +0x0
pf_at 0x5571
l_kernel_00025c8f: jz short 0x25cd2
pf_at 0x5573
l_kernel_00025c91: mov eax,[ebp-0x34]
pf_at 0x5576
l_kernel_00025c94: mov ebx,[eax]
pf_at 0x5578
l_kernel_00025c96: mov ecx,ebx
pf_at 0x557a
l_kernel_00025c98: mov edx,0x2cd03
pf_at 0x557f
l_kernel_00025c9d: call 0x26458
pf_at 0x5584
l_kernel_00025ca2: test al,al
pf_at 0x5586
l_kernel_00025ca4: jnz short 0x25cc6
pf_at 0x5588
l_kernel_00025ca6: mov ecx,ebx
pf_at 0x558a
l_kernel_00025ca8: mov edx,0x2cd87
pf_at 0x558f
l_kernel_00025cad: call 0x26458
pf_at 0x5594
l_kernel_00025cb2: test al,al
pf_at 0x5596
l_kernel_00025cb4: jnz short 0x25cc6
pf_at 0x5598
l_kernel_00025cb6: mov ecx,ebx
pf_at 0x559a
l_kernel_00025cb8: mov edx,0x2cddb
pf_at 0x559f
l_kernel_00025cbd: call 0x26458
pf_at 0x55a4
l_kernel_00025cc2: test al,al
pf_at 0x55a6
l_kernel_00025cc4: jz short 0x25cd5
pf_at 0x55a8
l_kernel_00025cc6: lea ecx,[ebp-0x3c]
pf_at 0x55ab
l_kernel_00025cc9: call 0x26419
pf_at 0x55b0
l_kernel_00025cce: inc esi
pf_at 0x55b1
l_kernel_00025ccf: mov ebx,[ebp-0x10]
pf_at 0x55b4
l_kernel_00025cd2: inc edi
pf_at 0x55b5
l_kernel_00025cd3: jmp short 0x25c71
pf_at 0x55b7
l_kernel_00025cd5: mov ecx,ebx
pf_at 0x55b9
l_kernel_00025cd7: mov edx,0x2ccc0
pf_at 0x55be
l_kernel_00025cdc: call 0x26458
pf_at 0x55c3
l_kernel_00025ce1: test al,al
pf_at 0x55c5
l_kernel_00025ce3: jz short 0x25cf8
pf_at 0x55c7
l_kernel_00025ce5: test esi,esi
pf_at 0x55c9
l_kernel_00025ce7: jz near 0x25f41
pf_at 0x55cf
l_kernel_00025ced: lea ecx,[ebp-0x3c]
pf_at 0x55d2
l_kernel_00025cf0: call 0x26419
pf_at 0x55d7
l_kernel_00025cf5: dec esi
pf_at 0x55d8
l_kernel_00025cf6: jmp short 0x25ccf
pf_at 0x55da
l_kernel_00025cf8: mov [ebp-0x18],al
pf_at 0x55dd
l_kernel_00025cfb: mov ecx,ebx
pf_at 0x55df
l_kernel_00025cfd: mov edx,0x2ccc9
pf_at 0x55e4
l_kernel_00025d02: call 0x26458
pf_at 0x55e9
l_kernel_00025d07: test al,al
pf_at 0x55eb
l_kernel_00025d09: jz short 0x25d20
pf_at 0x55ed
l_kernel_00025d0b: lea ecx,[ebp-0x3c]
pf_at 0x55f0
l_kernel_00025d0e: call 0x26419
pf_at 0x55f5
l_kernel_00025d13: sub esi,byte +0x1
pf_at 0x55f8
l_kernel_00025d16: mov eax,0x0
pf_at 0x55fd
l_kernel_00025d1b: cmovc esi,eax
pf_at 0x5600
l_kernel_00025d1e: jmp short 0x25ccf
pf_at 0x5602
l_kernel_00025d20: mov ecx,ebx
pf_at 0x5604
l_kernel_00025d22: mov edx,0x2ccc4
pf_at 0x5609
l_kernel_00025d27: call 0x26458
pf_at 0x560e
l_kernel_00025d2c: test esi,esi
pf_at 0x5610
l_kernel_00025d2e: setz cl
pf_at 0x5613
l_kernel_00025d31: test al,cl
pf_at 0x5615
l_kernel_00025d33: mov al,[ebp-0x18]
pf_at 0x5618
l_kernel_00025d36: jnz near 0x25f41
pf_at 0x561e
l_kernel_00025d3c: lea ecx,[ebp-0x3c]
pf_at 0x5621
l_kernel_00025d3f: call 0x26419
pf_at 0x5626
l_kernel_00025d44: jmp short 0x25ccf
pf_at 0x5628
l_kernel_00025d46: sub esp,byte +0x4
pf_at 0x562b
l_kernel_00025d49: push dword 0x2cd33
pf_at 0x5630
l_kernel_00025d4e: push dword 0x2ccc0
pf_at 0x5635
l_kernel_00025d53: lea esi,[ebp-0x30]
pf_at 0x5638
l_kernel_00025d56: push esi
pf_at 0x5639
l_kernel_00025d57: call 0x2609c
pf_at 0x563e
l_kernel_00025d5c: add esp,byte +0x10
pf_at 0x5641
l_kernel_00025d5f: xor ecx,ecx
pf_at 0x5643
l_kernel_00025d61: inc ecx
pf_at 0x5644
l_kernel_00025d62: jmp short 0x25d7f
pf_at 0x5646
l_kernel_00025d64: sub esp,byte +0x4
pf_at 0x5649
l_kernel_00025d67: push dword 0x2cceb
pf_at 0x564e
l_kernel_00025d6c: push byte +0x0
pf_at 0x5650
l_kernel_00025d6e: lea eax,[ebp-0x54]
pf_at 0x5653
l_kernel_00025d71: push eax
pf_at 0x5654
l_kernel_00025d72: call 0x2609c
pf_at 0x5659
l_kernel_00025d77: add esp,byte +0x10
pf_at 0x565c
l_kernel_00025d7a: mov ecx,edi
pf_at 0x565e
l_kernel_00025d7c: lea esi,[ebp-0x30]
pf_at 0x5661
l_kernel_00025d7f: mov edi,[ebp+0x8]
pf_at 0x5664
l_kernel_00025d82: cmp ecx,byte +0x1
pf_at 0x5667
l_kernel_00025d85: jnz near 0x257fa
pf_at 0x566d
l_kernel_00025d8b: jmp near 0x25ff0
pf_at 0x5672
l_kernel_00025d90: mov ecx,esi
pf_at 0x5674
l_kernel_00025d92: call 0x26419
pf_at 0x5679
l_kernel_00025d97: lea ecx,[ebp-0x28]
pf_at 0x567c
l_kernel_00025d9a: call 0x26419
pf_at 0x5681
l_kernel_00025d9f: jmp short 0x25dd5
pf_at 0x5683
l_kernel_00025da1: lea ecx,[ebp-0x74]
pf_at 0x5686
l_kernel_00025da4: call 0x24daf
pf_at 0x568b
l_kernel_00025da9: mov ecx,esi
pf_at 0x568d
l_kernel_00025dab: call 0x26419
pf_at 0x5692
l_kernel_00025db0: lea ecx,[ebp-0x28]
pf_at 0x5695
l_kernel_00025db3: call 0x26419
pf_at 0x569a
l_kernel_00025db8: mov eax,[ebp-0x34]
pf_at 0x569d
l_kernel_00025dbb: mov ecx,[ebp-0x44]
pf_at 0x56a0
l_kernel_00025dbe: sub esp,byte +0x4
pf_at 0x56a3
l_kernel_00025dc1: push dword 0x2cdab
pf_at 0x56a8
l_kernel_00025dc6: push dword [eax+ecx*4]
pf_at 0x56ab
l_kernel_00025dc9: lea eax,[ebp-0x54]
pf_at 0x56ae
l_kernel_00025dcc: push eax
pf_at 0x56af
l_kernel_00025dcd: call 0x2609c
pf_at 0x56b4
l_kernel_00025dd2: add esp,byte +0x10
pf_at 0x56b7
l_kernel_00025dd5: mov edi,[ebp+0x8]
pf_at 0x56ba
l_kernel_00025dd8: xor ecx,ecx
pf_at 0x56bc
l_kernel_00025dda: inc ecx
pf_at 0x56bd
l_kernel_00025ddb: lea esi,[ebp-0x30]
pf_at 0x56c0
l_kernel_00025dde: jmp short 0x25d82
pf_at 0x56c2
l_kernel_00025de0: lea ecx,[ebp-0x28]
pf_at 0x56c5
l_kernel_00025de3: call 0x26419
pf_at 0x56ca
l_kernel_00025de8: mov eax,[ebp-0x40]
pf_at 0x56cd
l_kernel_00025deb: inc eax
pf_at 0x56ce
l_kernel_00025dec: mov edi,[ebp+0x8]
pf_at 0x56d1
l_kernel_00025def: mov [edi],eax
pf_at 0x56d3
l_kernel_00025df1: push byte +0x2
pf_at 0x56d5
l_kernel_00025df3: pop ecx
pf_at 0x56d6
l_kernel_00025df4: lea esi,[ebp-0x30]
pf_at 0x56d9
l_kernel_00025df7: jmp near 0x25be8
pf_at 0x56de
l_kernel_00025dfc: lea ecx,[ebp-0x28]
pf_at 0x56e1
l_kernel_00025dff: call 0x26419
pf_at 0x56e6
l_kernel_00025e04: lea esi,[ebp-0x30]
pf_at 0x56e9
l_kernel_00025e07: xor edi,edi
pf_at 0x56eb
l_kernel_00025e09: inc edi
pf_at 0x56ec
l_kernel_00025e0a: jmp near 0x25c09
pf_at 0x56f1
l_kernel_00025e0f: sub esp,byte +0x4
pf_at 0x56f4
l_kernel_00025e12: push dword 0x2cd33
pf_at 0x56f9
l_kernel_00025e17: push dword 0x2ccc0
pf_at 0x56fe
l_kernel_00025e1c: push esi
pf_at 0x56ff
l_kernel_00025e1d: call 0x2609c
pf_at 0x5704
l_kernel_00025e22: add esp,byte +0x10
pf_at 0x5707
l_kernel_00025e25: jmp near 0x25c64
pf_at 0x570c
l_kernel_00025e2a: mov eax,[ebp+0x8]
pf_at 0x570f
l_kernel_00025e2d: mov eax,[eax]
pf_at 0x5711
l_kernel_00025e2f: mov ecx,[edi+eax*4]
pf_at 0x5714
l_kernel_00025e32: mov edx,0x2ccc0
pf_at 0x5719
l_kernel_00025e37: call 0x2605b
pf_at 0x571e
l_kernel_00025e3c: test al,al
pf_at 0x5720
l_kernel_00025e3e: jz short 0x25e5a
pf_at 0x5722
l_kernel_00025e40: mov edi,[ebp+0x8]
pf_at 0x5725
l_kernel_00025e43: jmp near 0x2597d
pf_at 0x572a
l_kernel_00025e48: sub esp,byte +0x4
pf_at 0x572d
l_kernel_00025e4b: push dword 0x2cd33
pf_at 0x5732
l_kernel_00025e50: push dword 0x2ccc0
pf_at 0x5737
l_kernel_00025e55: jmp near 0x25d56
pf_at 0x573c
l_kernel_00025e5a: sub esp,byte +0x4
pf_at 0x573f
l_kernel_00025e5d: push dword 0x2cd4e
pf_at 0x5744
l_kernel_00025e62: push byte +0x0
pf_at 0x5746
l_kernel_00025e64: jmp near 0x25d56
pf_at 0x574b
l_kernel_00025e69: lea ecx,[ebp-0x74]
pf_at 0x574e
l_kernel_00025e6c: call 0x26419
pf_at 0x5753
l_kernel_00025e71: mov edx,[ebp-0x10]
pf_at 0x5756
l_kernel_00025e74: mov eax,[ebp-0x78]
pf_at 0x5759
l_kernel_00025e77: mov [ebp-0x40],eax
pf_at 0x575c
l_kernel_00025e7a: sub esp,byte +0xc
pf_at 0x575f
l_kernel_00025e7d: mov esi,[ebp-0x14]
pf_at 0x5762
l_kernel_00025e80: mov ecx,esi
pf_at 0x5764
l_kernel_00025e82: lea eax,[ebp-0x40]
pf_at 0x5767
l_kernel_00025e85: push eax
pf_at 0x5768
l_kernel_00025e86: call 0x257e3
pf_at 0x576d
l_kernel_00025e8b: add esp,byte +0x10
pf_at 0x5770
l_kernel_00025e8e: test al,al
pf_at 0x5772
l_kernel_00025e90: jz near 0x26021
pf_at 0x5778
l_kernel_00025e96: cmp [ebp-0x40],edi
pf_at 0x577b
l_kernel_00025e99: jnz near 0x25ffb
pf_at 0x5781
l_kernel_00025e9f: mov [ebp-0x54],edi
pf_at 0x5784
l_kernel_00025ea2: mov ecx,[esi+edi*4]
pf_at 0x5787
l_kernel_00025ea5: mov [ebp-0x50],ecx
pf_at 0x578a
l_kernel_00025ea8: lea esi,[ebp-0x3c]
pf_at 0x578d
l_kernel_00025eab: mov edx,esi
pf_at 0x578f
l_kernel_00025ead: call 0x26135
pf_at 0x5794
l_kernel_00025eb2: test al,al
pf_at 0x5796
l_kernel_00025eb4: jz near 0x2600d
pf_at 0x579c
l_kernel_00025eba: and dword [ebp-0x74],byte +0x0
pf_at 0x57a0
l_kernel_00025ebe: and dword [ebp-0x70],byte +0x0
pf_at 0x57a4
l_kernel_00025ec2: and dword [ebp-0x6c],byte +0x0
pf_at 0x57a8
l_kernel_00025ec6: and dword [ebp-0x68],byte +0x0
pf_at 0x57ac
l_kernel_00025eca: and dword [ebp-0x64],byte +0x0
pf_at 0x57b0
l_kernel_00025ece: lea eax,[ebp-0x54]
pf_at 0x57b3
l_kernel_00025ed1: mov [ebp-0x4c],eax
pf_at 0x57b6
l_kernel_00025ed4: and dword [ebp-0x60],byte +0x0
pf_at 0x57ba
l_kernel_00025ed8: mov [ebp-0x48],esi
pf_at 0x57bd
l_kernel_00025edb: and dword [ebp-0x5c],byte +0x0
pf_at 0x57c1
l_kernel_00025edf: mov dword [ebp-0x44],0x1
pf_at 0x57c8
l_kernel_00025ee6: and dword [ebp-0x58],byte +0x0
pf_at 0x57cc
l_kernel_00025eea: lea ecx,[ebp-0x4c]
pf_at 0x57cf
l_kernel_00025eed: lea edx,[ebp-0x74]
pf_at 0x57d2
l_kernel_00025ef0: call 0x26473
pf_at 0x57d7
l_kernel_00025ef5: test al,al
pf_at 0x57d9
l_kernel_00025ef7: jz near 0x26019
pf_at 0x57df
l_kernel_00025efd: mov eax,[ebp-0x44]
pf_at 0x57e2
l_kernel_00025f00: cmp eax,[ebp-0x3c]
pf_at 0x57e5
l_kernel_00025f03: jnz near 0x2602b
pf_at 0x57eb
l_kernel_00025f09: lea esi,[ebp-0x74]
pf_at 0x57ee
l_kernel_00025f0c: mov ecx,esi
pf_at 0x57f0
l_kernel_00025f0e: call 0x26564
pf_at 0x57f5
l_kernel_00025f13: mov ebx,eax
pf_at 0x57f7
l_kernel_00025f15: mov ecx,esi
pf_at 0x57f9
l_kernel_00025f17: call 0x24daf
pf_at 0x57fe
l_kernel_00025f1c: lea ecx,[ebp-0x3c]
pf_at 0x5801
l_kernel_00025f1f: call 0x26419
pf_at 0x5806
l_kernel_00025f24: test bl,bl
pf_at 0x5808
l_kernel_00025f26: jz near 0x25e71
pf_at 0x580e
l_kernel_00025f2c: inc edi
pf_at 0x580f
l_kernel_00025f2d: mov eax,[ebp+0x8]
pf_at 0x5812
l_kernel_00025f30: mov [eax],edi
pf_at 0x5814
l_kernel_00025f32: mov edi,eax
pf_at 0x5816
l_kernel_00025f34: lea ecx,[ebp-0x28]
pf_at 0x5819
l_kernel_00025f37: call 0x26419
pf_at 0x581e
l_kernel_00025f3c: jmp near 0x25df1
pf_at 0x5823
l_kernel_00025f41: lea ecx,[ebp-0x3c]
pf_at 0x5826
l_kernel_00025f44: mov ebx,eax
pf_at 0x5828
l_kernel_00025f46: call 0x26419
pf_at 0x582d
l_kernel_00025f4b: test bl,bl
pf_at 0x582f
l_kernel_00025f4d: mov ebx,[ebp-0x10]
pf_at 0x5832
l_kernel_00025f50: jz short 0x25f62
pf_at 0x5834
l_kernel_00025f52: inc edi
pf_at 0x5835
l_kernel_00025f53: mov eax,[ebp+0x8]
pf_at 0x5838
l_kernel_00025f56: mov [eax],edi
pf_at 0x583a
l_kernel_00025f58: mov edi,eax
pf_at 0x583c
l_kernel_00025f5a: push byte +0x2
pf_at 0x583e
l_kernel_00025f5c: pop ecx
pf_at 0x583f
l_kernel_00025f5d: jmp near 0x25ddb
pf_at 0x5844
l_kernel_00025f62: inc edi
pf_at 0x5845
l_kernel_00025f63: mov eax,[ebp+0x8]
pf_at 0x5848
l_kernel_00025f66: mov [eax],edi
pf_at 0x584a
l_kernel_00025f68: mov edi,eax
pf_at 0x584c
l_kernel_00025f6a: sub esp,byte +0xc
pf_at 0x584f
l_kernel_00025f6d: mov ecx,[ebp-0x14]
pf_at 0x5852
l_kernel_00025f70: mov edx,ebx
pf_at 0x5854
l_kernel_00025f72: push eax
pf_at 0x5855
l_kernel_00025f73: call 0x257e3
pf_at 0x585a
l_kernel_00025f78: add esp,byte +0x10
pf_at 0x585d
l_kernel_00025f7b: xor ecx,ecx
pf_at 0x585f
l_kernel_00025f7d: inc ecx
pf_at 0x5860
l_kernel_00025f7e: test al,al
pf_at 0x5862
l_kernel_00025f80: lea esi,[ebp-0x30]
pf_at 0x5865
l_kernel_00025f83: jz near 0x25d82
pf_at 0x586b
l_kernel_00025f89: mov eax,[edi]
pf_at 0x586d
l_kernel_00025f8b: cmp eax,ebx
pf_at 0x586f
l_kernel_00025f8d: jnc short 0x25fa7
pf_at 0x5871
l_kernel_00025f8f: mov ecx,[ebp-0x14]
pf_at 0x5874
l_kernel_00025f92: mov ecx,[ecx+eax*4]
pf_at 0x5877
l_kernel_00025f95: mov edx,0x2ccc0
pf_at 0x587c
l_kernel_00025f9a: call 0x2605b
pf_at 0x5881
l_kernel_00025f9f: test al,al
pf_at 0x5883
l_kernel_00025fa1: jz short 0x25fa7
pf_at 0x5885
l_kernel_00025fa3: mov edi,[edi]
pf_at 0x5887
l_kernel_00025fa5: jmp short 0x25f52
pf_at 0x5889
l_kernel_00025fa7: sub esp,byte +0x4
pf_at 0x588c
l_kernel_00025faa: push dword 0x2cd67
pf_at 0x5891
l_kernel_00025faf: jmp near 0x25e17
pf_at 0x5896
l_kernel_00025fb4: sub esp,byte +0x4
pf_at 0x5899
l_kernel_00025fb7: push dword 0x2cde2
pf_at 0x589e
l_kernel_00025fbc: push dword 0x2ccc9
pf_at 0x58a3
l_kernel_00025fc1: lea eax,[ebp-0x30]
pf_at 0x58a6
l_kernel_00025fc4: push eax
pf_at 0x58a7
l_kernel_00025fc5: jmp short 0x25fe1
pf_at 0x58a9
l_kernel_00025fc7: lea ecx,[ebp-0x28]
pf_at 0x58ac
l_kernel_00025fca: call 0x26419
pf_at 0x58b1
l_kernel_00025fcf: mov al,0x1
pf_at 0x58b3
l_kernel_00025fd1: mov [ebp-0x1c],eax
pf_at 0x58b6
l_kernel_00025fd4: jmp short 0x25ff0
pf_at 0x58b8
l_kernel_00025fd6: sub esp,byte +0x4
pf_at 0x58bb
l_kernel_00025fd9: push dword 0x2cceb
pf_at 0x58c0
l_kernel_00025fde: push byte +0x0
pf_at 0x58c2
l_kernel_00025fe0: push esi
pf_at 0x58c3
l_kernel_00025fe1: call 0x2609c
pf_at 0x58c8
l_kernel_00025fe6: add esp,byte +0x10
pf_at 0x58cb
l_kernel_00025fe9: mov dword [ebp-0x1c],0x0
pf_at 0x58d2
l_kernel_00025ff0: mov eax,[ebp-0x1c]
pf_at 0x58d5
l_kernel_00025ff3: add esp,byte +0x7c
pf_at 0x58d8
l_kernel_00025ff6: pop esi
pf_at 0x58d9
l_kernel_00025ff7: pop edi
pf_at 0x58da
l_kernel_00025ff8: pop ebx
pf_at 0x58db
l_kernel_00025ff9: pop ebp
pf_at 0x58dc
l_kernel_00025ffa: ret
pf_at 0x58dd
l_kernel_00025ffb: lea ecx,[ebp-0x28]
pf_at 0x58e0
l_kernel_00025ffe: call 0x26419
pf_at 0x58e5
l_kernel_00026003: sub esp,byte +0x4
pf_at 0x58e8
l_kernel_00026006: push dword 0x2ce03
pf_at 0x58ed
l_kernel_0002600b: jmp short 0x25fbc
pf_at 0x58ef
l_kernel_0002600d: sub esp,byte +0x4
pf_at 0x58f2
l_kernel_00026010: push dword 0x2cceb
pf_at 0x58f7
l_kernel_00026015: push byte +0x0
pf_at 0x58f9
l_kernel_00026017: jmp short 0x26053
pf_at 0x58fb
l_kernel_00026019: lea ecx,[ebp-0x3c]
pf_at 0x58fe
l_kernel_0002601c: call 0x26419
pf_at 0x5903
l_kernel_00026021: lea ecx,[ebp-0x28]
pf_at 0x5906
l_kernel_00026024: call 0x26419
pf_at 0x590b
l_kernel_00026029: jmp short 0x25fe9
pf_at 0x590d
l_kernel_0002602b: lea ecx,[ebp-0x74]
pf_at 0x5910
l_kernel_0002602e: call 0x24daf
pf_at 0x5915
l_kernel_00026033: mov ecx,esi
pf_at 0x5917
l_kernel_00026035: call 0x26419
pf_at 0x591c
l_kernel_0002603a: lea ecx,[ebp-0x28]
pf_at 0x591f
l_kernel_0002603d: call 0x26419
pf_at 0x5924
l_kernel_00026042: mov eax,[esi+0x8]
pf_at 0x5927
l_kernel_00026045: mov ecx,[ebp-0x44]
pf_at 0x592a
l_kernel_00026048: sub esp,byte +0x4
pf_at 0x592d
l_kernel_0002604b: push dword 0x2ce2d
pf_at 0x5932
l_kernel_00026050: push dword [eax+ecx*4]
pf_at 0x5935
l_kernel_00026053: lea eax,[ebp-0x54]
pf_at 0x5938
l_kernel_00026056: jmp near 0x25fc4
pf_at 0x593d
l_kernel_0002605b: push ebp
pf_at 0x593e
l_kernel_0002605c: mov ebp,esp
pf_at 0x5940
l_kernel_0002605e: push ebx
pf_at 0x5941
l_kernel_0002605f: push edi
pf_at 0x5942
l_kernel_00026060: push esi
pf_at 0x5943
l_kernel_00026061: sub esp,byte +0xc
pf_at 0x5946
l_kernel_00026064: mov esi,edx
pf_at 0x5948
l_kernel_00026066: lea edx,[ebp-0x18]
pf_at 0x594b
l_kernel_00026069: call 0x26135
pf_at 0x5950
l_kernel_0002606e: xor ebx,ebx
pf_at 0x5952
l_kernel_00026070: test al,al
pf_at 0x5954
l_kernel_00026072: jz short 0x26092
pf_at 0x5956
l_kernel_00026074: cmp dword [ebp-0x18],byte +0x0
pf_at 0x595a
l_kernel_00026078: jz short 0x26092
pf_at 0x595c
l_kernel_0002607a: lea edi,[ebp-0x18]
pf_at 0x595f
l_kernel_0002607d: mov eax,[edi+0x8]
pf_at 0x5962
l_kernel_00026080: mov ecx,[eax]
pf_at 0x5964
l_kernel_00026082: mov edx,esi
pf_at 0x5966
l_kernel_00026084: call 0x26458
pf_at 0x596b
l_kernel_00026089: mov ebx,eax
pf_at 0x596d
l_kernel_0002608b: mov ecx,edi
pf_at 0x596f
l_kernel_0002608d: call 0x26419
pf_at 0x5974
l_kernel_00026092: mov eax,ebx
pf_at 0x5976
l_kernel_00026094: add esp,byte +0xc
pf_at 0x5979
l_kernel_00026097: pop esi
pf_at 0x597a
l_kernel_00026098: pop edi
pf_at 0x597b
l_kernel_00026099: pop ebx
pf_at 0x597c
l_kernel_0002609a: pop ebp
pf_at 0x597d
l_kernel_0002609b: ret
pf_at 0x597e
l_kernel_0002609c: push ebp
pf_at 0x597f
l_kernel_0002609d: mov ebp,esp
pf_at 0x5981
l_kernel_0002609f: push edi
pf_at 0x5982
l_kernel_000260a0: push esi
pf_at 0x5983
l_kernel_000260a1: sub esp,0x110
pf_at 0x5989
l_kernel_000260a7: mov esi,[ebp+0x8]
pf_at 0x598c
l_kernel_000260aa: mov eax,[ebp+0x10]
pf_at 0x598f
l_kernel_000260ad: lea ecx,[ebp+0x14]
pf_at 0x5992
l_kernel_000260b0: mov [ebp-0xc],ecx
pf_at 0x5995
l_kernel_000260b3: lea edi,[ebp-0x10c]
pf_at 0x599b
l_kernel_000260b9: push ecx
pf_at 0x599c
l_kernel_000260ba: push eax
pf_at 0x599d
l_kernel_000260bb: push dword 0x100
pf_at 0x59a2
l_kernel_000260c0: push edi
pf_at 0x59a3
l_kernel_000260c1: call 0x21360
pf_at 0x59a8
l_kernel_000260c6: pop ecx
pf_at 0x59a9
l_kernel_000260c7: pop edx
pf_at 0x59aa
l_kernel_000260c8: push edi
pf_at 0x59ab
l_kernel_000260c9: push dword 0x2dfa4
pf_at 0x59b0
l_kernel_000260ce: call 0x21c41
pf_at 0x59b5
l_kernel_000260d3: add esp,byte +0x10
pf_at 0x59b8
l_kernel_000260d6: test esi,esi
pf_at 0x59ba
l_kernel_000260d8: jz short 0x26126
pf_at 0x59bc
l_kernel_000260da: mov eax,[ebp+0xc]
pf_at 0x59bf
l_kernel_000260dd: test eax,eax
pf_at 0x59c1
l_kernel_000260df: jz short 0x260f5
pf_at 0x59c3
l_kernel_000260e1: cmp byte [eax],0x0
pf_at 0x59c6
l_kernel_000260e4: jz short 0x260f5
pf_at 0x59c8
l_kernel_000260e6: mov ecx,[esi]
pf_at 0x59ca
l_kernel_000260e8: inc ecx
pf_at 0x59cb
l_kernel_000260e9: sub esp,byte +0x4
pf_at 0x59ce
l_kernel_000260ec: push eax
pf_at 0x59cf
l_kernel_000260ed: push ecx
pf_at 0x59d0
l_kernel_000260ee: push dword 0x2dfbb
pf_at 0x59d5
l_kernel_000260f3: jmp short 0x26101
pf_at 0x59d7
l_kernel_000260f5: mov eax,[esi]
pf_at 0x59d9
l_kernel_000260f7: inc eax
pf_at 0x59da
l_kernel_000260f8: sub esp,byte +0x8
pf_at 0x59dd
l_kernel_000260fb: push eax
pf_at 0x59de
l_kernel_000260fc: push dword 0x2dfd2
pf_at 0x59e3
l_kernel_00026101: call 0x21c41
pf_at 0x59e8
l_kernel_00026106: add esp,byte +0x10
pf_at 0x59eb
l_kernel_00026109: mov eax,[esi+0x4]
pf_at 0x59ee
l_kernel_0002610c: test eax,eax
pf_at 0x59f0
l_kernel_0002610e: jz short 0x26126
pf_at 0x59f2
l_kernel_00026110: cmp byte [eax],0x0
pf_at 0x59f5
l_kernel_00026113: jz short 0x26126
pf_at 0x59f7
l_kernel_00026115: sub esp,byte +0x8
pf_at 0x59fa
l_kernel_00026118: push eax
pf_at 0x59fb
l_kernel_00026119: push dword 0x2dfdf
pf_at 0x5a00
l_kernel_0002611e: call 0x21c41
pf_at 0x5a05
l_kernel_00026123: add esp,byte +0x10
pf_at 0x5a08
l_kernel_00026126: call 0x21cca
pf_at 0x5a0d
l_kernel_0002612b: add esp,0x110
pf_at 0x5a13
l_kernel_00026131: pop esi
pf_at 0x5a14
l_kernel_00026132: pop edi
pf_at 0x5a15
l_kernel_00026133: pop ebp
pf_at 0x5a16
l_kernel_00026134: ret
pf_at 0x5a17
l_kernel_00026135: push ebp
pf_at 0x5a18
l_kernel_00026136: mov ebp,esp
pf_at 0x5a1a
l_kernel_00026138: push ebx
pf_at 0x5a1b
l_kernel_00026139: push edi
pf_at 0x5a1c
l_kernel_0002613a: push esi
pf_at 0x5a1d
l_kernel_0002613b: sub esp,byte +0x2c
pf_at 0x5a20
l_kernel_0002613e: test edx,edx
pf_at 0x5a22
l_kernel_00026140: jz near 0x26407
pf_at 0x5a28
l_kernel_00026146: mov edi,ecx
pf_at 0x5a2a
l_kernel_00026148: and dword [edx],byte +0x0
pf_at 0x5a2d
l_kernel_0002614b: and dword [edx+0x4],byte +0x0
pf_at 0x5a31
l_kernel_0002614f: and dword [edx+0x8],byte +0x0
pf_at 0x5a35
l_kernel_00026153: mov al,0x1
pf_at 0x5a37
l_kernel_00026155: mov [ebp-0x2c],eax
pf_at 0x5a3a
l_kernel_00026158: test ecx,ecx
pf_at 0x5a3c
l_kernel_0002615a: jz near 0x2640e
pf_at 0x5a42
l_kernel_00026160: mov [ebp-0x14],edx
pf_at 0x5a45
l_kernel_00026163: mov [esp],edi
pf_at 0x5a48
l_kernel_00026166: mov dword [ebp-0x18],0x0
pf_at 0x5a4f
l_kernel_0002616d: call 0x20ccf
pf_at 0x5a54
l_kernel_00026172: mov esi,eax
pf_at 0x5a56
l_kernel_00026174: mov dword [ebp-0x28],0x0
pf_at 0x5a5d
l_kernel_0002617b: xor ecx,ecx
pf_at 0x5a5f
l_kernel_0002617d: xor ebx,ebx
pf_at 0x5a61
l_kernel_0002617f: xor edx,edx
pf_at 0x5a63
l_kernel_00026181: cmp ebx,esi
pf_at 0x5a65
l_kernel_00026183: jnc near 0x263e3
pf_at 0x5a6b
l_kernel_00026189: mov al,[edi+ebx]
pf_at 0x5a6e
l_kernel_0002618c: mov [ebp-0xd],al
pf_at 0x5a71
l_kernel_0002618f: test cl,0x1
pf_at 0x5a74
l_kernel_00026192: jnz short 0x261ab
pf_at 0x5a76
l_kernel_00026194: cmp byte [ebp-0xd],0x40
pf_at 0x5a7a
l_kernel_00026198: jnz short 0x261ab
pf_at 0x5a7c
l_kernel_0002619a: lea eax,[ebx+0x1]
pf_at 0x5a7f
l_kernel_0002619d: cmp eax,esi
pf_at 0x5a81
l_kernel_0002619f: jnc short 0x261ab
pf_at 0x5a83
l_kernel_000261a1: cmp byte [edi+eax],0x40
pf_at 0x5a87
l_kernel_000261a5: jz near 0x263e8
pf_at 0x5a8d
l_kernel_000261ab: test cl,0x1
pf_at 0x5a90
l_kernel_000261ae: jz short 0x261c5
pf_at 0x5a92
l_kernel_000261b0: test byte [ebp-0x18],0x1
pf_at 0x5a96
l_kernel_000261b4: mov al,[ebp-0xd]
pf_at 0x5a99
l_kernel_000261b7: jz short 0x2621f
pf_at 0x5a9b
l_kernel_000261b9: mov dword [ebp-0x18],0x0
pf_at 0x5aa2
l_kernel_000261c0: jmp near 0x263c4
pf_at 0x5aa7
l_kernel_000261c5: mov [ebp-0x1c],ecx
pf_at 0x5aaa
l_kernel_000261c8: movzx eax,byte [ebp-0xd]
pf_at 0x5aae
l_kernel_000261cc: lea ecx,[eax-0x9]
pf_at 0x5ab1
l_kernel_000261cf: cmp ecx,byte +0x1e
pf_at 0x5ab4
l_kernel_000261d2: mov [ebp-0x30],edx
pf_at 0x5ab7
l_kernel_000261d5: ja near 0x262ae
pf_at 0x5abd
l_kernel_000261db: mov edx,edi
pf_at 0x5abf
l_kernel_000261dd: mov edi,esi
pf_at 0x5ac1
l_kernel_000261df: mov esi,0x80001f
pf_at 0x5ac6
l_kernel_000261e4: bt esi,ecx
pf_at 0x5ac9
l_kernel_000261e7: jnc short 0x2622d
pf_at 0x5acb
l_kernel_000261e9: mov ecx,ebx
pf_at 0x5acd
l_kernel_000261eb: mov eax,ebx
pf_at 0x5acf
l_kernel_000261ed: mov ebx,[ebp-0x30]
pf_at 0x5ad2
l_kernel_000261f0: sub eax,ebx
pf_at 0x5ad4
l_kernel_000261f2: mov esi,edi
pf_at 0x5ad6
l_kernel_000261f4: mov edi,edx
pf_at 0x5ad8
l_kernel_000261f6: mov edx,ebx
pf_at 0x5ada
l_kernel_000261f8: mov ebx,ecx
pf_at 0x5adc
l_kernel_000261fa: mov ecx,[ebp-0x1c]
pf_at 0x5adf
l_kernel_000261fd: jna short 0x26217
pf_at 0x5ae1
l_kernel_000261ff: add edx,edi
pf_at 0x5ae3
l_kernel_00026201: mov [esp],eax
pf_at 0x5ae6
l_kernel_00026204: mov ecx,[ebp-0x14]
pf_at 0x5ae9
l_kernel_00026207: call 0x26e2b
pf_at 0x5aee
l_kernel_0002620c: mov ecx,[ebp-0x1c]
pf_at 0x5af1
l_kernel_0002620f: test al,al
pf_at 0x5af3
l_kernel_00026211: jz near 0x263ff
pf_at 0x5af9
l_kernel_00026217: lea edx,[ebx+0x1]
pf_at 0x5afc
l_kernel_0002621a: jmp near 0x263c4
pf_at 0x5b01
l_kernel_0002621f: cmp al,0x5c
pf_at 0x5b03
l_kernel_00026221: jnz short 0x26271
pf_at 0x5b05
l_kernel_00026223: mov al,0x1
pf_at 0x5b07
l_kernel_00026225: mov [ebp-0x18],eax
pf_at 0x5b0a
l_kernel_00026228: jmp near 0x263c4
pf_at 0x5b0f
l_kernel_0002622d: mov esi,0x42000000
pf_at 0x5b14
l_kernel_00026232: bt esi,ecx
pf_at 0x5b17
l_kernel_00026235: mov esi,edi
pf_at 0x5b19
l_kernel_00026237: mov edi,edx
pf_at 0x5b1b
l_kernel_00026239: mov edx,[ebp-0x30]
pf_at 0x5b1e
l_kernel_0002623c: jnc short 0x262ae
pf_at 0x5b20
l_kernel_0002623e: mov cl,0x1
pf_at 0x5b22
l_kernel_00026240: mov eax,ebx
pf_at 0x5b24
l_kernel_00026242: sub eax,edx
pf_at 0x5b26
l_kernel_00026244: jna short 0x2625d
pf_at 0x5b28
l_kernel_00026246: add edx,edi
pf_at 0x5b2a
l_kernel_00026248: mov [esp],eax
pf_at 0x5b2d
l_kernel_0002624b: mov ecx,[ebp-0x14]
pf_at 0x5b30
l_kernel_0002624e: call 0x26e2b
pf_at 0x5b35
l_kernel_00026253: mov cl,0x1
pf_at 0x5b37
l_kernel_00026255: test al,al
pf_at 0x5b39
l_kernel_00026257: jz near 0x263ff
pf_at 0x5b3f
l_kernel_0002625d: mov dword [ebp-0x18],0x0
pf_at 0x5b46
l_kernel_00026264: mov edx,ebx
pf_at 0x5b48
l_kernel_00026266: mov al,[ebp-0xd]
pf_at 0x5b4b
l_kernel_00026269: mov [ebp-0x28],eax
pf_at 0x5b4e
l_kernel_0002626c: jmp near 0x263c4
pf_at 0x5b53
l_kernel_00026271: cmp al,[ebp-0x28]
pf_at 0x5b56
l_kernel_00026274: jnz near 0x261b9
pf_at 0x5b5c
l_kernel_0002627a: mov [ebp-0x24],ebx
pf_at 0x5b5f
l_kernel_0002627d: mov eax,[ebp-0x24]
pf_at 0x5b62
l_kernel_00026280: lea ebx,[eax+0x1]
pf_at 0x5b65
l_kernel_00026283: mov eax,ebx
pf_at 0x5b67
l_kernel_00026285: sub eax,edx
pf_at 0x5b69
l_kernel_00026287: add edx,edi
pf_at 0x5b6b
l_kernel_00026289: mov [esp],eax
pf_at 0x5b6e
l_kernel_0002628c: mov ecx,[ebp-0x14]
pf_at 0x5b71
l_kernel_0002628f: call 0x26e2b
pf_at 0x5b76
l_kernel_00026294: xor ecx,ecx
pf_at 0x5b78
l_kernel_00026296: mov edx,ebx
pf_at 0x5b7a
l_kernel_00026298: mov ebx,[ebp-0x24]
pf_at 0x5b7d
l_kernel_0002629b: mov dword [ebp-0x28],0x0
pf_at 0x5b84
l_kernel_000262a2: mov dword [ebp-0x18],0x0
pf_at 0x5b8b
l_kernel_000262a9: jmp near 0x263c0
pf_at 0x5b90
l_kernel_000262ae: lea ecx,[edi+ebx]
pf_at 0x5b93
l_kernel_000262b1: mov [ebp-0x34],ecx
pf_at 0x5b96
l_kernel_000262b4: lea ecx,[ebx+0x1]
pf_at 0x5b99
l_kernel_000262b7: mov [ebp-0x20],ecx
pf_at 0x5b9c
l_kernel_000262ba: cmp [ebp-0x20],esi
pf_at 0x5b9f
l_kernel_000262bd: jnc near 0x26378
pf_at 0x5ba5
l_kernel_000262c3: mov ecx,[ebp-0x20]
pf_at 0x5ba8
l_kernel_000262c6: mov cl,[edi+ecx]
pf_at 0x5bab
l_kernel_000262c9: mov [ebp-0xe],cl
pf_at 0x5bae
l_kernel_000262cc: mov ch,[ebp-0xd]
pf_at 0x5bb1
l_kernel_000262cf: cmp ch,0x3d
pf_at 0x5bb4
l_kernel_000262d2: setz cl
pf_at 0x5bb7
l_kernel_000262d5: cmp ch,0x21
pf_at 0x5bba
l_kernel_000262d8: mov [ebp-0x24],ebx
pf_at 0x5bbd
l_kernel_000262db: setz bh
pf_at 0x5bc0
l_kernel_000262de: or bh,cl
pf_at 0x5bc2
l_kernel_000262e0: cmp ch,0x7e
pf_at 0x5bc5
l_kernel_000262e3: setz bl
pf_at 0x5bc8
l_kernel_000262e6: or bl,bh
pf_at 0x5bca
l_kernel_000262e8: mov bh,ch
pf_at 0x5bcc
l_kernel_000262ea: and bh,0xfd
pf_at 0x5bcf
l_kernel_000262ed: cmp bh,0x3c
pf_at 0x5bd2
l_kernel_000262f0: setz cl
pf_at 0x5bd5
l_kernel_000262f3: or cl,bl
pf_at 0x5bd7
l_kernel_000262f5: and ch,0xfe
pf_at 0x5bda
l_kernel_000262f8: cmp ch,0x2a
pf_at 0x5bdd
l_kernel_000262fb: setz ch
pf_at 0x5be0
l_kernel_000262fe: cmp bh,0x2d
pf_at 0x5be3
l_kernel_00026301: setz bh
pf_at 0x5be6
l_kernel_00026304: or bh,ch
pf_at 0x5be8
l_kernel_00026306: or bh,cl
pf_at 0x5bea
l_kernel_00026308: cmp bh,0x1
pf_at 0x5bed
l_kernel_0002630b: mov ebx,[ebp-0x24]
pf_at 0x5bf0
l_kernel_0002630e: jnz short 0x26316
pf_at 0x5bf2
l_kernel_00026310: cmp byte [ebp-0xe],0x3d
pf_at 0x5bf6
l_kernel_00026314: jz short 0x26336
pf_at 0x5bf8
l_kernel_00026316: mov cl,[ebp-0xd]
pf_at 0x5bfb
l_kernel_00026319: xor cl,0x26
pf_at 0x5bfe
l_kernel_0002631c: mov ch,[ebp-0xe]
pf_at 0x5c01
l_kernel_0002631f: xor ch,0x26
pf_at 0x5c04
l_kernel_00026322: or ch,cl
pf_at 0x5c06
l_kernel_00026324: jz short 0x26336
pf_at 0x5c08
l_kernel_00026326: mov cl,[ebp-0xd]
pf_at 0x5c0b
l_kernel_00026329: xor cl,0x7c
pf_at 0x5c0e
l_kernel_0002632c: mov ch,[ebp-0xe]
pf_at 0x5c11
l_kernel_0002632f: xor ch,0x7c
pf_at 0x5c14
l_kernel_00026332: or ch,cl
pf_at 0x5c16
l_kernel_00026334: jnz short 0x26378
pf_at 0x5c18
l_kernel_00026336: mov eax,ebx
pf_at 0x5c1a
l_kernel_00026338: sub eax,edx
pf_at 0x5c1c
l_kernel_0002633a: jna short 0x26351
pf_at 0x5c1e
l_kernel_0002633c: add edx,edi
pf_at 0x5c20
l_kernel_0002633e: mov [esp],eax
pf_at 0x5c23
l_kernel_00026341: mov ecx,[ebp-0x14]
pf_at 0x5c26
l_kernel_00026344: call 0x26e2b
pf_at 0x5c2b
l_kernel_00026349: test al,al
pf_at 0x5c2d
l_kernel_0002634b: jz near 0x263ff
pf_at 0x5c33
l_kernel_00026351: mov dword [esp],0x2
pf_at 0x5c3a
l_kernel_00026358: mov ecx,[ebp-0x14]
pf_at 0x5c3d
l_kernel_0002635b: mov edx,[ebp-0x34]
pf_at 0x5c40
l_kernel_0002635e: call 0x26e2b
pf_at 0x5c45
l_kernel_00026363: mov ecx,[ebp-0x1c]
pf_at 0x5c48
l_kernel_00026366: test al,al
pf_at 0x5c4a
l_kernel_00026368: jz near 0x263ff
pf_at 0x5c50
l_kernel_0002636e: add ebx,byte +0x2
pf_at 0x5c53
l_kernel_00026371: mov edx,ebx
pf_at 0x5c55
l_kernel_00026373: mov ebx,[ebp-0x20]
pf_at 0x5c58
l_kernel_00026376: jmp short 0x263c4
pf_at 0x5c5a
l_kernel_00026378: lea ecx,[eax-0x21]
pf_at 0x5c5d
l_kernel_0002637b: cmp ecx,byte +0x1d
pf_at 0x5c60
l_kernel_0002637e: ja short 0x263ca
pf_at 0x5c62
l_kernel_00026380: mov edx,ebx
pf_at 0x5c64
l_kernel_00026382: mov ebx,0x3e005f91
pf_at 0x5c69
l_kernel_00026387: bt ebx,ecx
pf_at 0x5c6c
l_kernel_0002638a: mov ebx,edx
pf_at 0x5c6e
l_kernel_0002638c: mov edx,[ebp-0x30]
pf_at 0x5c71
l_kernel_0002638f: jnc short 0x263ca
pf_at 0x5c73
l_kernel_00026391: mov eax,ebx
pf_at 0x5c75
l_kernel_00026393: sub eax,edx
pf_at 0x5c77
l_kernel_00026395: jna short 0x263a8
pf_at 0x5c79
l_kernel_00026397: add edx,edi
pf_at 0x5c7b
l_kernel_00026399: mov [esp],eax
pf_at 0x5c7e
l_kernel_0002639c: mov ecx,[ebp-0x14]
pf_at 0x5c81
l_kernel_0002639f: call 0x26e2b
pf_at 0x5c86
l_kernel_000263a4: test al,al
pf_at 0x5c88
l_kernel_000263a6: jz short 0x263ff
pf_at 0x5c8a
l_kernel_000263a8: mov dword [esp],0x1
pf_at 0x5c91
l_kernel_000263af: mov ecx,[ebp-0x14]
pf_at 0x5c94
l_kernel_000263b2: mov edx,[ebp-0x34]
pf_at 0x5c97
l_kernel_000263b5: call 0x26e2b
pf_at 0x5c9c
l_kernel_000263ba: mov ecx,[ebp-0x1c]
pf_at 0x5c9f
l_kernel_000263bd: mov edx,[ebp-0x20]
pf_at 0x5ca2
l_kernel_000263c0: test al,al
pf_at 0x5ca4
l_kernel_000263c2: jz short 0x263ff
pf_at 0x5ca6
l_kernel_000263c4: inc ebx
pf_at 0x5ca7
l_kernel_000263c5: jmp near 0x26181
pf_at 0x5cac
l_kernel_000263ca: cmp eax,byte +0x5b
pf_at 0x5caf
l_kernel_000263cd: jz short 0x26391
pf_at 0x5cb1
l_kernel_000263cf: cmp eax,byte +0x5d
pf_at 0x5cb4
l_kernel_000263d2: jz short 0x26391
pf_at 0x5cb6
l_kernel_000263d4: cmp eax,byte +0x7d
pf_at 0x5cb9
l_kernel_000263d7: jz short 0x26391
pf_at 0x5cbb
l_kernel_000263d9: cmp eax,byte +0x7b
pf_at 0x5cbe
l_kernel_000263dc: jz short 0x26391
pf_at 0x5cc0
l_kernel_000263de: mov ecx,[ebp-0x1c]
pf_at 0x5cc3
l_kernel_000263e1: jmp short 0x263c4
pf_at 0x5cc5
l_kernel_000263e3: test cl,0x1
pf_at 0x5cc8
l_kernel_000263e6: jnz short 0x263ff
pf_at 0x5cca
l_kernel_000263e8: sub esi,edx
pf_at 0x5ccc
l_kernel_000263ea: jna short 0x2640e
pf_at 0x5cce
l_kernel_000263ec: add edi,edx
pf_at 0x5cd0
l_kernel_000263ee: mov [esp],esi
pf_at 0x5cd3
l_kernel_000263f1: mov ecx,[ebp-0x14]
pf_at 0x5cd6
l_kernel_000263f4: mov edx,edi
pf_at 0x5cd8
l_kernel_000263f6: call 0x26e2b
pf_at 0x5cdd
l_kernel_000263fb: test al,al
pf_at 0x5cdf
l_kernel_000263fd: jnz short 0x2640e
pf_at 0x5ce1
l_kernel_000263ff: mov ecx,[ebp-0x14]
pf_at 0x5ce4
l_kernel_00026402: call 0x26419
pf_at 0x5ce9
l_kernel_00026407: mov dword [ebp-0x2c],0x0
pf_at 0x5cf0
l_kernel_0002640e: mov eax,[ebp-0x2c]
pf_at 0x5cf3
l_kernel_00026411: add esp,byte +0x2c
pf_at 0x5cf6
l_kernel_00026414: pop esi
pf_at 0x5cf7
l_kernel_00026415: pop edi
pf_at 0x5cf8
l_kernel_00026416: pop ebx
pf_at 0x5cf9
l_kernel_00026417: pop ebp
pf_at 0x5cfa
l_kernel_00026418: ret
pf_at 0x5cfb
l_kernel_00026419: test ecx,ecx
pf_at 0x5cfd
l_kernel_0002641b: jz short 0x26457
pf_at 0x5cff
l_kernel_0002641d: push ebp
pf_at 0x5d00
l_kernel_0002641e: mov ebp,esp
pf_at 0x5d02
l_kernel_00026420: push edi
pf_at 0x5d03
l_kernel_00026421: push esi
pf_at 0x5d04
l_kernel_00026422: sub esp,byte +0x10
pf_at 0x5d07
l_kernel_00026425: mov esi,ecx
pf_at 0x5d09
l_kernel_00026427: xor edi,edi
pf_at 0x5d0b
l_kernel_00026429: mov eax,[esi+0x8]
pf_at 0x5d0e
l_kernel_0002642c: cmp edi,[esi]
pf_at 0x5d10
l_kernel_0002642e: jnc short 0x2643e
pf_at 0x5d12
l_kernel_00026430: mov eax,[eax+edi*4]
pf_at 0x5d15
l_kernel_00026433: mov [esp],eax
pf_at 0x5d18
l_kernel_00026436: call 0x20aee
pf_at 0x5d1d
l_kernel_0002643b: inc edi
pf_at 0x5d1e
l_kernel_0002643c: jmp short 0x26429
pf_at 0x5d20
l_kernel_0002643e: mov [esp],eax
pf_at 0x5d23
l_kernel_00026441: call 0x20aee
pf_at 0x5d28
l_kernel_00026446: and dword [esi],byte +0x0
pf_at 0x5d2b
l_kernel_00026449: and dword [esi+0x4],byte +0x0
pf_at 0x5d2f
l_kernel_0002644d: and dword [esi+0x8],byte +0x0
pf_at 0x5d33
l_kernel_00026451: add esp,byte +0x10
pf_at 0x5d36
l_kernel_00026454: pop esi
pf_at 0x5d37
l_kernel_00026455: pop edi
pf_at 0x5d38
l_kernel_00026456: pop ebp
pf_at 0x5d39
l_kernel_00026457: ret
pf_at 0x5d3a
l_kernel_00026458: push ebp
pf_at 0x5d3b
l_kernel_00026459: mov ebp,esp
pf_at 0x5d3d
l_kernel_0002645b: test ecx,ecx
pf_at 0x5d3f
l_kernel_0002645d: setz al
pf_at 0x5d42
l_kernel_00026460: test edx,edx
pf_at 0x5d44
l_kernel_00026462: setz ah
pf_at 0x5d47
l_kernel_00026465: or ah,al
pf_at 0x5d49
l_kernel_00026467: jnz short 0x2646f
pf_at 0x5d4b
l_kernel_00026469: pop ebp
pf_at 0x5d4c
l_kernel_0002646a: jmp near 0x26ebe
pf_at 0x5d51
l_kernel_0002646f: xor eax,eax
pf_at 0x5d53
l_kernel_00026471: pop ebp
pf_at 0x5d54
l_kernel_00026472: ret
pf_at 0x5d55
l_kernel_00026473: push ebp
pf_at 0x5d56
l_kernel_00026474: mov ebp,esp
pf_at 0x5d58
l_kernel_00026476: push ebx
pf_at 0x5d59
l_kernel_00026477: push edi
pf_at 0x5d5a
l_kernel_00026478: push esi
pf_at 0x5d5b
l_kernel_00026479: sub esp,byte +0x4c
pf_at 0x5d5e
l_kernel_0002647c: mov esi,edx
pf_at 0x5d60
l_kernel_0002647e: mov [ebp-0x10],ecx
pf_at 0x5d63
l_kernel_00026481: call 0x26f21
pf_at 0x5d68
l_kernel_00026486: test al,al
pf_at 0x5d6a
l_kernel_00026488: jz near 0x26558
pf_at 0x5d70
l_kernel_0002648e: mov [ebp-0x14],esi
pf_at 0x5d73
l_kernel_00026491: mov ecx,[ebp-0x10]
pf_at 0x5d76
l_kernel_00026494: mov eax,[ecx+0x4]
pf_at 0x5d79
l_kernel_00026497: mov edi,[ecx+0x8]
pf_at 0x5d7c
l_kernel_0002649a: mov bl,0x1
pf_at 0x5d7e
l_kernel_0002649c: cmp edi,[eax]
pf_at 0x5d80
l_kernel_0002649e: jnc near 0x2655a
pf_at 0x5d86
l_kernel_000264a4: mov eax,[eax+0x8]
pf_at 0x5d89
l_kernel_000264a7: mov esi,[eax+edi*4]
pf_at 0x5d8c
l_kernel_000264aa: mov ecx,esi
pf_at 0x5d8e
l_kernel_000264ac: mov edx,0x2ce5d
pf_at 0x5d93
l_kernel_000264b1: call 0x26458
pf_at 0x5d98
l_kernel_000264b6: test al,al
pf_at 0x5d9a
l_kernel_000264b8: jnz short 0x264d9
pf_at 0x5d9c
l_kernel_000264ba: sub esp,byte +0x8
pf_at 0x5d9f
l_kernel_000264bd: push dword 0x2ce60
pf_at 0x5da4
l_kernel_000264c2: push esi
pf_at 0x5da5
l_kernel_000264c3: call 0x20cea
pf_at 0x5daa
l_kernel_000264c8: add esp,byte +0x10
pf_at 0x5dad
l_kernel_000264cb: test eax,eax
pf_at 0x5daf
l_kernel_000264cd: jnz near 0x2655a
pf_at 0x5db5
l_kernel_000264d3: mov eax,[ebp-0x10]
pf_at 0x5db8
l_kernel_000264d6: mov edi,[eax+0x8]
pf_at 0x5dbb
l_kernel_000264d9: inc edi
pf_at 0x5dbc
l_kernel_000264da: mov ecx,[ebp-0x10]
pf_at 0x5dbf
l_kernel_000264dd: mov [ecx+0x8],edi
pf_at 0x5dc2
l_kernel_000264e0: and dword [ebp-0x34],byte +0x0
pf_at 0x5dc6
l_kernel_000264e4: and dword [ebp-0x30],byte +0x0
pf_at 0x5dca
l_kernel_000264e8: and dword [ebp-0x2c],byte +0x0
pf_at 0x5dce
l_kernel_000264ec: and dword [ebp-0x28],byte +0x0
pf_at 0x5dd2
l_kernel_000264f0: and dword [ebp-0x24],byte +0x0
pf_at 0x5dd6
l_kernel_000264f4: and dword [ebp-0x20],byte +0x0
pf_at 0x5dda
l_kernel_000264f8: and dword [ebp-0x1c],byte +0x0
pf_at 0x5dde
l_kernel_000264fc: and dword [ebp-0x18],byte +0x0
pf_at 0x5de2
l_kernel_00026500: lea edi,[ebp-0x34]
pf_at 0x5de5
l_kernel_00026503: mov edx,edi
pf_at 0x5de7
l_kernel_00026505: call 0x26f21
pf_at 0x5dec
l_kernel_0002650a: test al,al
pf_at 0x5dee
l_kernel_0002650c: jz short 0x26550
pf_at 0x5df0
l_kernel_0002650e: mov esi,[ebp-0x14]
pf_at 0x5df3
l_kernel_00026511: mov ecx,esi
pf_at 0x5df5
l_kernel_00026513: call 0x26564
pf_at 0x5dfa
l_kernel_00026518: mov bl,0x1
pf_at 0x5dfc
l_kernel_0002651a: test al,al
pf_at 0x5dfe
l_kernel_0002651c: jnz short 0x26527
pf_at 0x5e00
l_kernel_0002651e: mov ecx,edi
pf_at 0x5e02
l_kernel_00026520: call 0x26564
pf_at 0x5e07
l_kernel_00026525: mov ebx,eax
pf_at 0x5e09
l_kernel_00026527: mov ecx,esi
pf_at 0x5e0b
l_kernel_00026529: call 0x24daf
pf_at 0x5e10
l_kernel_0002652e: mov ecx,edi
pf_at 0x5e12
l_kernel_00026530: call 0x24daf
pf_at 0x5e17
l_kernel_00026535: movzx edx,bl
pf_at 0x5e1a
l_kernel_00026538: lea ebx,[ebp-0x54]
pf_at 0x5e1d
l_kernel_0002653b: mov ecx,ebx
pf_at 0x5e1f
l_kernel_0002653d: call 0x27014
pf_at 0x5e24
l_kernel_00026542: push byte +0x8
pf_at 0x5e26
l_kernel_00026544: pop ecx
pf_at 0x5e27
l_kernel_00026545: mov edi,esi
pf_at 0x5e29
l_kernel_00026547: mov esi,ebx
pf_at 0x5e2b
l_kernel_00026549: rep movsd
pf_at 0x5e2d
l_kernel_0002654b: jmp near 0x26491
pf_at 0x5e32
l_kernel_00026550: mov ecx,[ebp-0x14]
pf_at 0x5e35
l_kernel_00026553: call 0x24daf
pf_at 0x5e3a
l_kernel_00026558: xor ebx,ebx
pf_at 0x5e3c
l_kernel_0002655a: mov eax,ebx
pf_at 0x5e3e
l_kernel_0002655c: add esp,byte +0x4c
pf_at 0x5e41
l_kernel_0002655f: pop esi
pf_at 0x5e42
l_kernel_00026560: pop edi
pf_at 0x5e43
l_kernel_00026561: pop ebx
pf_at 0x5e44
l_kernel_00026562: pop ebp
pf_at 0x5e45
l_kernel_00026563: ret
pf_at 0x5e46
l_kernel_00026564: push ebp
pf_at 0x5e47
l_kernel_00026565: mov ebp,esp
pf_at 0x5e49
l_kernel_00026567: test ecx,ecx
pf_at 0x5e4b
l_kernel_00026569: jz short 0x265ba
pf_at 0x5e4d
l_kernel_0002656b: mov eax,[ecx]
pf_at 0x5e4f
l_kernel_0002656d: dec eax
pf_at 0x5e50
l_kernel_0002656e: cmp eax,byte +0x7
pf_at 0x5e53
l_kernel_00026571: ja short 0x265ba
pf_at 0x5e55
l_kernel_00026573: jmp [eax*4+0x2c998]
pf_at 0x5e5c
l_kernel_0002657a: cmp dword [ecx+0x4],byte +0x0
pf_at 0x5e60
l_kernel_0002657e: jmp short 0x265b5
pf_at 0x5e62
l_kernel_00026580: mov eax,[ecx+0xc]
pf_at 0x5e65
l_kernel_00026583: test eax,eax
pf_at 0x5e67
l_kernel_00026585: jz short 0x265ba
pf_at 0x5e69
l_kernel_00026587: cmp byte [eax],0x0
pf_at 0x5e6c
l_kernel_0002658a: jmp short 0x265b5
pf_at 0x5e6e
l_kernel_0002658c: fld dword [ecx+0x8]
pf_at 0x5e71
l_kernel_0002658f: fldz
pf_at 0x5e73
l_kernel_00026591: fucomip st1
pf_at 0x5e75
l_kernel_00026593: fstp st0
pf_at 0x5e77
l_kernel_00026595: setpe cl
pf_at 0x5e7a
l_kernel_00026598: setnz al
pf_at 0x5e7d
l_kernel_0002659b: or al,cl
pf_at 0x5e7f
l_kernel_0002659d: jmp short 0x265bc
pf_at 0x5e81
l_kernel_0002659f: mov eax,[ecx+0x1c]
pf_at 0x5e84
l_kernel_000265a2: jmp short 0x265ad
pf_at 0x5e86
l_kernel_000265a4: cmp dword [ecx+0x14],byte +0x0
pf_at 0x5e8a
l_kernel_000265a8: jmp short 0x265b5
pf_at 0x5e8c
l_kernel_000265aa: mov eax,[ecx+0x18]
pf_at 0x5e8f
l_kernel_000265ad: test eax,eax
pf_at 0x5e91
l_kernel_000265af: jz short 0x265ba
pf_at 0x5e93
l_kernel_000265b1: cmp dword [eax+0x4],byte +0x0
pf_at 0x5e97
l_kernel_000265b5: setnz al
pf_at 0x5e9a
l_kernel_000265b8: jmp short 0x265bc
pf_at 0x5e9c
l_kernel_000265ba: xor eax,eax
pf_at 0x5e9e
l_kernel_000265bc: pop ebp
pf_at 0x5e9f
l_kernel_000265bd: ret
pf_at 0x5ea0
l_kernel_000265be: push ebp
pf_at 0x5ea1
l_kernel_000265bf: mov ebp,esp
pf_at 0x5ea3
l_kernel_000265c1: push ebx
pf_at 0x5ea4
l_kernel_000265c2: push edi
pf_at 0x5ea5
l_kernel_000265c3: push esi
pf_at 0x5ea6
l_kernel_000265c4: sub esp,byte +0x1c
pf_at 0x5ea9
l_kernel_000265c7: mov edi,edx
pf_at 0x5eab
l_kernel_000265c9: mov ebx,ecx
pf_at 0x5ead
l_kernel_000265cb: mov esi,[ebp+0x8]
pf_at 0x5eb0
l_kernel_000265ce: mov dword [ebp-0x10],0x0
pf_at 0x5eb7
l_kernel_000265d5: mov [ebp-0x18],edx
pf_at 0x5eba
l_kernel_000265d8: mov [ebp-0x1c],ecx
pf_at 0x5ebd
l_kernel_000265db: cmp esi,edi
pf_at 0x5ebf
l_kernel_000265dd: jnc near 0x266a3
pf_at 0x5ec5
l_kernel_000265e3: mov ecx,[ebx+esi*4]
pf_at 0x5ec8
l_kernel_000265e6: lea edx,[ebp-0x28]
pf_at 0x5ecb
l_kernel_000265e9: call 0x26135
pf_at 0x5ed0
l_kernel_000265ee: test al,al
pf_at 0x5ed2
l_kernel_000265f0: jz short 0x26664
pf_at 0x5ed4
l_kernel_000265f2: cmp dword [ebp-0x28],byte +0x0
pf_at 0x5ed8
l_kernel_000265f6: jz short 0x26664
pf_at 0x5eda
l_kernel_000265f8: mov eax,[ebp-0x20]
pf_at 0x5edd
l_kernel_000265fb: mov ecx,[eax]
pf_at 0x5edf
l_kernel_000265fd: mov [ebp-0x14],ecx
pf_at 0x5ee2
l_kernel_00026600: mov edx,0x2cd03
pf_at 0x5ee7
l_kernel_00026605: call 0x26458
pf_at 0x5eec
l_kernel_0002660a: xor ebx,ebx
pf_at 0x5eee
l_kernel_0002660c: inc ebx
pf_at 0x5eef
l_kernel_0002660d: mov edi,ebx
pf_at 0x5ef1
l_kernel_0002660f: test al,al
pf_at 0x5ef3
l_kernel_00026611: jnz short 0x26653
pf_at 0x5ef5
l_kernel_00026613: mov ecx,[ebp-0x14]
pf_at 0x5ef8
l_kernel_00026616: mov edx,0x2cd87
pf_at 0x5efd
l_kernel_0002661b: call 0x26458
pf_at 0x5f02
l_kernel_00026620: mov edi,ebx
pf_at 0x5f04
l_kernel_00026622: test al,al
pf_at 0x5f06
l_kernel_00026624: jnz short 0x26653
pf_at 0x5f08
l_kernel_00026626: mov ecx,[ebp-0x14]
pf_at 0x5f0b
l_kernel_00026629: mov edx,0x2cddb
pf_at 0x5f10
l_kernel_0002662e: call 0x26458
pf_at 0x5f15
l_kernel_00026633: mov edi,ebx
pf_at 0x5f17
l_kernel_00026635: test al,al
pf_at 0x5f19
l_kernel_00026637: jnz short 0x26653
pf_at 0x5f1b
l_kernel_00026639: mov ecx,[ebp-0x14]
pf_at 0x5f1e
l_kernel_0002663c: mov edx,0x2ccc0
pf_at 0x5f23
l_kernel_00026641: call 0x26458
pf_at 0x5f28
l_kernel_00026646: test al,al
pf_at 0x5f2a
l_kernel_00026648: jz short 0x2666a
pf_at 0x5f2c
l_kernel_0002664a: xor edi,edi
pf_at 0x5f2e
l_kernel_0002664c: dec edi
pf_at 0x5f2f
l_kernel_0002664d: cmp dword [ebp-0x10],byte +0x0
pf_at 0x5f33
l_kernel_00026651: jz short 0x26693
pf_at 0x5f35
l_kernel_00026653: lea ecx,[ebp-0x28]
pf_at 0x5f38
l_kernel_00026656: call 0x26419
pf_at 0x5f3d
l_kernel_0002665b: add [ebp-0x10],edi
pf_at 0x5f40
l_kernel_0002665e: mov edi,[ebp-0x18]
pf_at 0x5f43
l_kernel_00026661: mov ebx,[ebp-0x1c]
pf_at 0x5f46
l_kernel_00026664: inc esi
pf_at 0x5f47
l_kernel_00026665: jmp near 0x265db
pf_at 0x5f4c
l_kernel_0002666a: mov ecx,[ebp-0x14]
pf_at 0x5f4f
l_kernel_0002666d: mov edx,0x2ccc9
pf_at 0x5f54
l_kernel_00026672: call 0x26458
pf_at 0x5f59
l_kernel_00026677: mov edi,[ebp-0x10]
pf_at 0x5f5c
l_kernel_0002667a: test edi,edi
pf_at 0x5f5e
l_kernel_0002667c: setnz bl
pf_at 0x5f61
l_kernel_0002667f: and bl,al
pf_at 0x5f63
l_kernel_00026681: lea ecx,[ebp-0x28]
pf_at 0x5f66
l_kernel_00026684: call 0x26419
pf_at 0x5f6b
l_kernel_00026689: movzx eax,bl
pf_at 0x5f6e
l_kernel_0002668c: sub edi,eax
pf_at 0x5f70
l_kernel_0002668e: mov [ebp-0x10],edi
pf_at 0x5f73
l_kernel_00026691: jmp short 0x2665e
pf_at 0x5f75
l_kernel_00026693: lea ecx,[ebp-0x28]
pf_at 0x5f78
l_kernel_00026696: call 0x26419
pf_at 0x5f7d
l_kernel_0002669b: mov eax,[ebp+0xc]
pf_at 0x5f80
l_kernel_0002669e: mov [eax],esi
pf_at 0x5f82
l_kernel_000266a0: mov edi,[ebp-0x18]
pf_at 0x5f85
l_kernel_000266a3: cmp esi,edi
pf_at 0x5f87
l_kernel_000266a5: setc al
pf_at 0x5f8a
l_kernel_000266a8: add esp,byte +0x1c
pf_at 0x5f8d
l_kernel_000266ab: pop esi
pf_at 0x5f8e
l_kernel_000266ac: pop edi
pf_at 0x5f8f
l_kernel_000266ad: pop ebx
pf_at 0x5f90
l_kernel_000266ae: pop ebp
pf_at 0x5f91
l_kernel_000266af: ret
pf_at 0x5f92
l_kernel_000266b0: push ebp
pf_at 0x5f93
l_kernel_000266b1: mov ebp,esp
pf_at 0x5f95
l_kernel_000266b3: push ebx
pf_at 0x5f96
l_kernel_000266b4: push edi
pf_at 0x5f97
l_kernel_000266b5: push esi
pf_at 0x5f98
l_kernel_000266b6: sub esp,0xbc
pf_at 0x5f9e
l_kernel_000266bc: mov edi,ecx
pf_at 0x5fa0
l_kernel_000266be: mov eax,[ebp+0x8]
pf_at 0x5fa3
l_kernel_000266c1: test eax,eax
pf_at 0x5fa5
l_kernel_000266c3: jz short 0x266c8
pf_at 0x5fa7
l_kernel_000266c5: mov byte [eax],0x0
pf_at 0x5faa
l_kernel_000266c8: test edi,edi
pf_at 0x5fac
l_kernel_000266ca: setz al
pf_at 0x5faf
l_kernel_000266cd: test edx,edx
pf_at 0x5fb1
l_kernel_000266cf: setz cl
pf_at 0x5fb4
l_kernel_000266d2: or cl,al
pf_at 0x5fb6
l_kernel_000266d4: jnz short 0x266dd
pf_at 0x5fb8
l_kernel_000266d6: mov ebx,[edx]
pf_at 0x5fba
l_kernel_000266d8: cmp ebx,byte +0x3
pf_at 0x5fbd
l_kernel_000266db: jnc short 0x266ea
pf_at 0x5fbf
l_kernel_000266dd: mov al,0x1
pf_at 0x5fc1
l_kernel_000266df: add esp,0xbc
pf_at 0x5fc7
l_kernel_000266e5: pop esi
pf_at 0x5fc8
l_kernel_000266e6: pop edi
pf_at 0x5fc9
l_kernel_000266e7: pop ebx
pf_at 0x5fca
l_kernel_000266e8: pop ebp
pf_at 0x5fcb
l_kernel_000266e9: ret
pf_at 0x5fcc
l_kernel_000266ea: mov eax,[edx+0x8]
pf_at 0x5fcf
l_kernel_000266ed: mov ecx,[eax]
pf_at 0x5fd1
l_kernel_000266ef: mov esi,edx
pf_at 0x5fd3
l_kernel_000266f1: call 0x28877
pf_at 0x5fd8
l_kernel_000266f6: test al,al
pf_at 0x5fda
l_kernel_000266f8: mov al,0x1
pf_at 0x5fdc
l_kernel_000266fa: jz short 0x266df
pf_at 0x5fde
l_kernel_000266fc: and dword [ebp-0x68],byte +0x0
pf_at 0x5fe2
l_kernel_00026700: and dword [ebp-0x64],byte +0x0
pf_at 0x5fe6
l_kernel_00026704: and dword [ebp-0x60],byte +0x0
pf_at 0x5fea
l_kernel_00026708: and dword [ebp-0x5c],byte +0x0
pf_at 0x5fee
l_kernel_0002670c: and dword [ebp-0x58],byte +0x0
pf_at 0x5ff2
l_kernel_00026710: and dword [ebp-0x54],byte +0x0
pf_at 0x5ff6
l_kernel_00026714: and dword [ebp-0x50],byte +0x0
pf_at 0x5ffa
l_kernel_00026718: and dword [ebp-0x4c],byte +0x0
pf_at 0x5ffe
l_kernel_0002671c: lea eax,[ebp-0x20]
pf_at 0x6001
l_kernel_0002671f: and dword [eax],byte +0x0
pf_at 0x6004
l_kernel_00026722: and dword [eax+0x4],byte +0x0
pf_at 0x6008
l_kernel_00026726: and dword [eax+0x8],byte +0x0
pf_at 0x600c
l_kernel_0002672a: mov eax,edi
pf_at 0x600e
l_kernel_0002672c: lea edi,[ebp-0x74]
pf_at 0x6011
l_kernel_0002672f: mov [ebp-0x24],eax
pf_at 0x6014
l_kernel_00026732: mov [edi],eax
pf_at 0x6016
l_kernel_00026734: mov [edi+0x4],esi
pf_at 0x6019
l_kernel_00026737: mov dword [edi+0x8],0x1
pf_at 0x6020
l_kernel_0002673e: xor ecx,ecx
pf_at 0x6022
l_kernel_00026740: inc ecx
pf_at 0x6023
l_kernel_00026741: lea eax,[ebp-0x48]
pf_at 0x6026
l_kernel_00026744: mov [ebp-0x14],eax
pf_at 0x6029
l_kernel_00026747: mov eax,esi
pf_at 0x602b
l_kernel_00026749: mov [ebp-0x10],esi
pf_at 0x602e
l_kernel_0002674c: cmp ecx,ebx
pf_at 0x6030
l_kernel_0002674e: jnc near 0x267ef
pf_at 0x6036
l_kernel_00026754: mov eax,[eax+0x8]
pf_at 0x6039
l_kernel_00026757: sub esp,byte +0x8
pf_at 0x603c
l_kernel_0002675a: push dword 0x2cee1
pf_at 0x6041
l_kernel_0002675f: push dword [eax+ecx*4]
pf_at 0x6044
l_kernel_00026762: call 0x20cea
pf_at 0x6049
l_kernel_00026767: add esp,byte +0x10
pf_at 0x604c
l_kernel_0002676a: mov ecx,[ebp-0x6c]
pf_at 0x604f
l_kernel_0002676d: test eax,eax
pf_at 0x6051
l_kernel_0002676f: jnz short 0x267ea
pf_at 0x6053
l_kernel_00026771: and dword [ebp-0x48],byte +0x0
pf_at 0x6057
l_kernel_00026775: and dword [ebp-0x44],byte +0x0
pf_at 0x605b
l_kernel_00026779: and dword [ebp-0x40],byte +0x0
pf_at 0x605f
l_kernel_0002677d: and dword [ebp-0x3c],byte +0x0
pf_at 0x6063
l_kernel_00026781: and dword [ebp-0x38],byte +0x0
pf_at 0x6067
l_kernel_00026785: and dword [ebp-0x34],byte +0x0
pf_at 0x606b
l_kernel_00026789: and dword [ebp-0x30],byte +0x0
pf_at 0x606f
l_kernel_0002678d: and dword [ebp-0x2c],byte +0x0
pf_at 0x6073
l_kernel_00026791: inc ecx
pf_at 0x6074
l_kernel_00026792: mov [ebp-0x6c],ecx
pf_at 0x6077
l_kernel_00026795: mov ecx,edi
pf_at 0x6079
l_kernel_00026797: lea edx,[ebp-0x48]
pf_at 0x607c
l_kernel_0002679a: call 0x26473
pf_at 0x6081
l_kernel_0002679f: test al,al
pf_at 0x6083
l_kernel_000267a1: jz near 0x26876
pf_at 0x6089
l_kernel_000267a7: mov ecx,edi
pf_at 0x608b
l_kernel_000267a9: mov edx,0x2cf06
pf_at 0x6090
l_kernel_000267ae: call 0x284c4
pf_at 0x6095
l_kernel_000267b3: test al,al
pf_at 0x6097
l_kernel_000267b5: jz near 0x26883
pf_at 0x609d
l_kernel_000267bb: mov esi,edi
pf_at 0x609f
l_kernel_000267bd: lea ecx,[ebp-0x20]
pf_at 0x60a2
l_kernel_000267c0: lea edi,[ebp-0x48]
pf_at 0x60a5
l_kernel_000267c3: mov edx,edi
pf_at 0x60a7
l_kernel_000267c5: call 0x28af3
pf_at 0x60ac
l_kernel_000267ca: mov ebx,eax
pf_at 0x60ae
l_kernel_000267cc: mov ecx,edi
pf_at 0x60b0
l_kernel_000267ce: call 0x24daf
pf_at 0x60b5
l_kernel_000267d3: test bl,bl
pf_at 0x60b7
l_kernel_000267d5: jz near 0x269d5
pf_at 0x60bd
l_kernel_000267db: mov ecx,[ebp-0x6c]
pf_at 0x60c0
l_kernel_000267de: mov eax,[ebp-0x10]
pf_at 0x60c3
l_kernel_000267e1: mov ebx,[eax]
pf_at 0x60c5
l_kernel_000267e3: mov edi,esi
pf_at 0x60c7
l_kernel_000267e5: jmp near 0x2674c
pf_at 0x60cc
l_kernel_000267ea: mov eax,[ebp-0x10]
pf_at 0x60cf
l_kernel_000267ed: mov ebx,[eax]
pf_at 0x60d1
l_kernel_000267ef: cmp ecx,ebx
pf_at 0x60d3
l_kernel_000267f1: mov edi,[ebp-0x24]
pf_at 0x60d6
l_kernel_000267f4: jnc short 0x26869
pf_at 0x60d8
l_kernel_000267f6: mov eax,[eax+0x8]
pf_at 0x60db
l_kernel_000267f9: mov ebx,[eax+ecx*4]
pf_at 0x60de
l_kernel_000267fc: sub esp,byte +0x8
pf_at 0x60e1
l_kernel_000267ff: push dword 0x2cf97
pf_at 0x60e6
l_kernel_00026804: push ebx
pf_at 0x60e7
l_kernel_00026805: call 0x20cea
pf_at 0x60ec
l_kernel_0002680a: add esp,byte +0x10
pf_at 0x60ef
l_kernel_0002680d: test eax,eax
pf_at 0x60f1
l_kernel_0002680f: jz near 0x268a6
pf_at 0x60f7
l_kernel_00026815: sub esp,byte +0x8
pf_at 0x60fa
l_kernel_00026818: push dword 0x2df40
pf_at 0x60ff
l_kernel_0002681d: push ebx
pf_at 0x6100
l_kernel_0002681e: call 0x20cea
pf_at 0x6105
l_kernel_00026823: add esp,byte +0x10
pf_at 0x6108
l_kernel_00026826: test eax,eax
pf_at 0x610a
l_kernel_00026828: jz short 0x268a6
pf_at 0x610c
l_kernel_0002682a: sub esp,byte +0x8
pf_at 0x610f
l_kernel_0002682d: push dword 0x2df43
pf_at 0x6114
l_kernel_00026832: push ebx
pf_at 0x6115
l_kernel_00026833: call 0x20cea
pf_at 0x611a
l_kernel_00026838: add esp,byte +0x10
pf_at 0x611d
l_kernel_0002683b: test eax,eax
pf_at 0x611f
l_kernel_0002683d: jz short 0x268a6
pf_at 0x6121
l_kernel_0002683f: sub esp,byte +0x8
pf_at 0x6124
l_kernel_00026842: push dword 0x2df46
pf_at 0x6129
l_kernel_00026847: push ebx
pf_at 0x612a
l_kernel_00026848: call 0x20cea
pf_at 0x612f
l_kernel_0002684d: add esp,byte +0x10
pf_at 0x6132
l_kernel_00026850: test eax,eax
pf_at 0x6134
l_kernel_00026852: jz short 0x268a6
pf_at 0x6136
l_kernel_00026854: sub esp,byte +0x8
pf_at 0x6139
l_kernel_00026857: push dword 0x2df49
pf_at 0x613e
l_kernel_0002685c: push ebx
pf_at 0x613f
l_kernel_0002685d: call 0x20cea
pf_at 0x6144
l_kernel_00026862: add esp,byte +0x10
pf_at 0x6147
l_kernel_00026865: test eax,eax
pf_at 0x6149
l_kernel_00026867: jz short 0x268a6
pf_at 0x614b
l_kernel_00026869: lea ecx,[ebp-0x20]
pf_at 0x614e
l_kernel_0002686c: call 0x28ab1
pf_at 0x6153
l_kernel_00026871: jmp near 0x266dd
pf_at 0x6158
l_kernel_00026876: lea ecx,[ebp-0x48]
pf_at 0x615b
l_kernel_00026879: call 0x24daf
pf_at 0x6160
l_kernel_0002687e: jmp near 0x269cb
pf_at 0x6165
l_kernel_00026883: lea ecx,[ebp-0x48]
pf_at 0x6168
l_kernel_00026886: call 0x24daf
pf_at 0x616d
l_kernel_0002688b: lea ecx,[ebp-0x20]
pf_at 0x6170
l_kernel_0002688e: call 0x28ab1
pf_at 0x6175
l_kernel_00026893: mov eax,[ebp-0x10]
pf_at 0x6178
l_kernel_00026896: mov eax,[eax+0x8]
pf_at 0x617b
l_kernel_00026899: sub esp,byte +0x4
pf_at 0x617e
l_kernel_0002689c: push dword 0x2d02f
pf_at 0x6183
l_kernel_000268a1: jmp near 0x269eb
pf_at 0x6188
l_kernel_000268a6: mov eax,[ebp+0x8]
pf_at 0x618b
l_kernel_000268a9: test eax,eax
pf_at 0x618d
l_kernel_000268ab: jz short 0x268b0
pf_at 0x618f
l_kernel_000268ad: mov byte [eax],0x1
pf_at 0x6192
l_kernel_000268b0: lea ecx,[ebp-0x74]
pf_at 0x6195
l_kernel_000268b3: inc dword [ecx+0x8]
pf_at 0x6198
l_kernel_000268b6: lea esi,[ebp-0x68]
pf_at 0x619b
l_kernel_000268b9: mov edx,esi
pf_at 0x619d
l_kernel_000268bb: call 0x26473
pf_at 0x61a2
l_kernel_000268c0: test al,al
pf_at 0x61a4
l_kernel_000268c2: jz near 0x269cb
pf_at 0x61aa
l_kernel_000268c8: mov eax,[ebp-0x6c]
pf_at 0x61ad
l_kernel_000268cb: mov edx,[ebp-0x10]
pf_at 0x61b0
l_kernel_000268ce: cmp eax,[edx]
pf_at 0x61b2
l_kernel_000268d0: jnz near 0x269ff
pf_at 0x61b8
l_kernel_000268d6: cmp dword [ebp-0x20],byte +0x0
pf_at 0x61bc
l_kernel_000268da: jz near 0x26a25
pf_at 0x61c2
l_kernel_000268e0: and dword [ebp-0x48],byte +0x0
pf_at 0x61c6
l_kernel_000268e4: and dword [ebp-0x44],byte +0x0
pf_at 0x61ca
l_kernel_000268e8: and dword [ebp-0x40],byte +0x0
pf_at 0x61ce
l_kernel_000268ec: and dword [ebp-0x3c],byte +0x0
pf_at 0x61d2
l_kernel_000268f0: and dword [ebp-0x38],byte +0x0
pf_at 0x61d6
l_kernel_000268f4: and dword [ebp-0x34],byte +0x0
pf_at 0x61da
l_kernel_000268f8: and dword [ebp-0x30],byte +0x0
pf_at 0x61de
l_kernel_000268fc: and dword [ebp-0x2c],byte +0x0
pf_at 0x61e2
l_kernel_00026900: mov al,[ebx]
pf_at 0x61e4
l_kernel_00026902: mov [ebp-0x26],al
pf_at 0x61e7
l_kernel_00026905: mov byte [ebp-0x25],0x0
pf_at 0x61eb
l_kernel_00026909: mov eax,[edx+0x8]
pf_at 0x61ee
l_kernel_0002690c: mov edx,[eax]
pf_at 0x61f0
l_kernel_0002690e: sub esp,byte +0xc
pf_at 0x61f3
l_kernel_00026911: mov ecx,edi
pf_at 0x61f5
l_kernel_00026913: lea eax,[ebp-0x48]
pf_at 0x61f8
l_kernel_00026916: push eax
pf_at 0x61f9
l_kernel_00026917: call 0x2af4b
pf_at 0x61fe
l_kernel_0002691c: add esp,byte +0x10
pf_at 0x6201
l_kernel_0002691f: test al,al
pf_at 0x6203
l_kernel_00026921: jz near 0x26b16
pf_at 0x6209
l_kernel_00026927: xor esi,esi
pf_at 0x620b
l_kernel_00026929: xor eax,eax
pf_at 0x620d
l_kernel_0002692b: inc eax
pf_at 0x620e
l_kernel_0002692c: cmp eax,[ebp-0x20]
pf_at 0x6211
l_kernel_0002692f: jnc near 0x26b37
pf_at 0x6217
l_kernel_00026935: mov [ebp-0x78],eax
pf_at 0x621a
l_kernel_00026938: mov edi,[ebp-0x18]
pf_at 0x621d
l_kernel_0002693b: mov [ebp-0x7c],esi
pf_at 0x6220
l_kernel_0002693e: add edi,esi
pf_at 0x6222
l_kernel_00026940: sub esp,byte +0x8
pf_at 0x6225
l_kernel_00026943: push dword 0x2cf97
pf_at 0x622a
l_kernel_00026948: push ebx
pf_at 0x622b
l_kernel_00026949: call 0x20cea
pf_at 0x6230
l_kernel_0002694e: add esp,byte +0x10
pf_at 0x6233
l_kernel_00026951: mov esi,ebx
pf_at 0x6235
l_kernel_00026953: xor ebx,ebx
pf_at 0x6237
l_kernel_00026955: test eax,eax
pf_at 0x6239
l_kernel_00026957: setz bl
pf_at 0x623c
l_kernel_0002695a: sub esp,byte +0xc
pf_at 0x623f
l_kernel_0002695d: mov ecx,[ebp-0x14]
pf_at 0x6242
l_kernel_00026960: mov edx,edi
pf_at 0x6244
l_kernel_00026962: push ebx
pf_at 0x6245
l_kernel_00026963: call 0x2c11f
pf_at 0x624a
l_kernel_00026968: add esp,byte +0x10
pf_at 0x624d
l_kernel_0002696b: mov [ebp-0x14],eax
pf_at 0x6250
l_kernel_0002696e: test eax,eax
pf_at 0x6252
l_kernel_00026970: jz near 0x26d0e
pf_at 0x6258
l_kernel_00026976: sub esp,byte +0x8
pf_at 0x625b
l_kernel_00026979: push dword 0x2cf97
pf_at 0x6260
l_kernel_0002697e: push esi
pf_at 0x6261
l_kernel_0002697f: call 0x20cea
pf_at 0x6266
l_kernel_00026984: add esp,byte +0x10
pf_at 0x6269
l_kernel_00026987: test eax,eax
pf_at 0x626b
l_kernel_00026989: mov edi,[ebp-0x24]
pf_at 0x626e
l_kernel_0002698c: mov ebx,esi
pf_at 0x6270
l_kernel_0002698e: mov esi,[ebp-0x7c]
pf_at 0x6273
l_kernel_00026991: jnz short 0x269bf
pf_at 0x6275
l_kernel_00026993: mov eax,[ebp-0x14]
pf_at 0x6278
l_kernel_00026996: cmp dword [eax],byte +0x0
pf_at 0x627b
l_kernel_00026999: jnz short 0x269bf
pf_at 0x627d
l_kernel_0002699b: mov eax,[ebp-0x18]
pf_at 0x6280
l_kernel_0002699e: cmp dword [eax+esi+0x20],byte +0x1
pf_at 0x6285
l_kernel_000269a3: jnz short 0x269af
pf_at 0x6287
l_kernel_000269a5: mov ecx,[ebp-0x14]
pf_at 0x628a
l_kernel_000269a8: call 0x28534
pf_at 0x628f
l_kernel_000269ad: jmp short 0x269b7
pf_at 0x6291
l_kernel_000269af: mov ecx,[ebp-0x14]
pf_at 0x6294
l_kernel_000269b2: call 0x285ca
pf_at 0x6299
l_kernel_000269b7: test al,al
pf_at 0x629b
l_kernel_000269b9: jz near 0x26d66
pf_at 0x62a1
l_kernel_000269bf: add esi,byte +0x20
pf_at 0x62a4
l_kernel_000269c2: mov eax,[ebp-0x78]
pf_at 0x62a7
l_kernel_000269c5: inc eax
pf_at 0x62a8
l_kernel_000269c6: jmp near 0x2692c
pf_at 0x62ad
l_kernel_000269cb: lea ecx,[ebp-0x20]
pf_at 0x62b0
l_kernel_000269ce: call 0x28ab1
pf_at 0x62b5
l_kernel_000269d3: jmp short 0x269f8
pf_at 0x62b7
l_kernel_000269d5: lea ecx,[ebp-0x20]
pf_at 0x62ba
l_kernel_000269d8: call 0x28ab1
pf_at 0x62bf
l_kernel_000269dd: mov eax,[ebp-0x10]
pf_at 0x62c2
l_kernel_000269e0: mov eax,[eax+0x8]
pf_at 0x62c5
l_kernel_000269e3: sub esp,byte +0x4
pf_at 0x62c8
l_kernel_000269e6: push dword 0x2df19
pf_at 0x62cd
l_kernel_000269eb: push dword [eax]
pf_at 0x62cf
l_kernel_000269ed: push dword [ebp-0x24]
pf_at 0x62d2
l_kernel_000269f0: call 0x2609c
pf_at 0x62d7
l_kernel_000269f5: add esp,byte +0x10
pf_at 0x62da
l_kernel_000269f8: xor eax,eax
pf_at 0x62dc
l_kernel_000269fa: jmp near 0x266df
pf_at 0x62e1
l_kernel_000269ff: lea ecx,[ebp-0x68]
pf_at 0x62e4
l_kernel_00026a02: mov esi,edx
pf_at 0x62e6
l_kernel_00026a04: call 0x24daf
pf_at 0x62eb
l_kernel_00026a09: lea ecx,[ebp-0x20]
pf_at 0x62ee
l_kernel_00026a0c: call 0x28ab1
pf_at 0x62f3
l_kernel_00026a11: mov eax,[esi+0x8]
pf_at 0x62f6
l_kernel_00026a14: mov ecx,[ebp-0x6c]
pf_at 0x62f9
l_kernel_00026a17: sub esp,byte +0x4
pf_at 0x62fc
l_kernel_00026a1a: push dword 0x2df4c
pf_at 0x6301
l_kernel_00026a1f: push dword [eax+ecx*4]
pf_at 0x6304
l_kernel_00026a22: push edi
pf_at 0x6305
l_kernel_00026a23: jmp short 0x269f0
pf_at 0x6307
l_kernel_00026a25: sub esp,byte +0x8
pf_at 0x630a
l_kernel_00026a28: push dword 0x2cf97
pf_at 0x630f
l_kernel_00026a2d: push ebx
pf_at 0x6310
l_kernel_00026a2e: call 0x20cea
pf_at 0x6315
l_kernel_00026a33: add esp,byte +0x10
pf_at 0x6318
l_kernel_00026a36: test eax,eax
pf_at 0x631a
l_kernel_00026a38: jz near 0x26c34
pf_at 0x6320
l_kernel_00026a3e: mov eax,ebx
pf_at 0x6322
l_kernel_00026a40: mov ebx,esi
pf_at 0x6324
l_kernel_00026a42: lea esi,[ebp-0x48]
pf_at 0x6327
l_kernel_00026a45: and dword [esi],byte +0x0
pf_at 0x632a
l_kernel_00026a48: and dword [esi+0x4],byte +0x0
pf_at 0x632e
l_kernel_00026a4c: and dword [esi+0x8],byte +0x0
pf_at 0x6332
l_kernel_00026a50: and dword [esi+0xc],byte +0x0
pf_at 0x6336
l_kernel_00026a54: and dword [esi+0x10],byte +0x0
pf_at 0x633a
l_kernel_00026a58: and dword [esi+0x14],byte +0x0
pf_at 0x633e
l_kernel_00026a5c: and dword [esi+0x18],byte +0x0
pf_at 0x6342
l_kernel_00026a60: and dword [esi+0x1c],byte +0x0
pf_at 0x6346
l_kernel_00026a64: and dword [ebp-0xbc],byte +0x0
pf_at 0x634d
l_kernel_00026a6b: and dword [ebp-0xb8],byte +0x0
pf_at 0x6354
l_kernel_00026a72: and dword [ebp-0xb4],byte +0x0
pf_at 0x635b
l_kernel_00026a79: and dword [ebp-0xb0],byte +0x0
pf_at 0x6362
l_kernel_00026a80: and dword [ebp-0xac],byte +0x0
pf_at 0x6369
l_kernel_00026a87: and dword [ebp-0xa8],byte +0x0
pf_at 0x6370
l_kernel_00026a8e: and dword [ebp-0xa4],byte +0x0
pf_at 0x6377
l_kernel_00026a95: and dword [ebp-0xa0],byte +0x0
pf_at 0x637e
l_kernel_00026a9c: mov al,[eax]
pf_at 0x6380
l_kernel_00026a9e: mov [ebp-0x9c],al
pf_at 0x6386
l_kernel_00026aa4: mov byte [ebp-0x9b],0x0
pf_at 0x638d
l_kernel_00026aab: mov eax,[ebp-0x10]
pf_at 0x6390
l_kernel_00026aae: mov eax,[eax+0x8]
pf_at 0x6393
l_kernel_00026ab1: mov edx,[eax]
pf_at 0x6395
l_kernel_00026ab3: sub esp,byte +0xc
pf_at 0x6398
l_kernel_00026ab6: mov ecx,edi
pf_at 0x639a
l_kernel_00026ab8: push esi
pf_at 0x639b
l_kernel_00026ab9: call 0x2af4b
pf_at 0x63a0
l_kernel_00026abe: add esp,byte +0x10
pf_at 0x63a3
l_kernel_00026ac1: test al,al
pf_at 0x63a5
l_kernel_00026ac3: jz short 0x26b2f
pf_at 0x63a7
l_kernel_00026ac5: sub esp,byte +0x4
pf_at 0x63aa
l_kernel_00026ac8: lea eax,[ebp-0xbc]
pf_at 0x63b0
l_kernel_00026ace: lea edx,[ebp-0x9c]
pf_at 0x63b6
l_kernel_00026ad4: mov ecx,edi
pf_at 0x63b8
l_kernel_00026ad6: push eax
pf_at 0x63b9
l_kernel_00026ad7: push ebx
pf_at 0x63ba
l_kernel_00026ad8: push esi
pf_at 0x63bb
l_kernel_00026ad9: call 0x2729c
pf_at 0x63c0
l_kernel_00026ade: add esp,byte +0x10
pf_at 0x63c3
l_kernel_00026ae1: test al,al
pf_at 0x63c5
l_kernel_00026ae3: jz near 0x26d39
pf_at 0x63cb
l_kernel_00026ae9: mov esi,[ebp-0x10]
pf_at 0x63ce
l_kernel_00026aec: mov eax,[esi+0x8]
pf_at 0x63d1
l_kernel_00026aef: mov ecx,[eax]
pf_at 0x63d3
l_kernel_00026af1: lea ebx,[ebp-0xbc]
pf_at 0x63d9
l_kernel_00026af7: mov edx,ebx
pf_at 0x63db
l_kernel_00026af9: call 0x24c97
pf_at 0x63e0
l_kernel_00026afe: mov [ebp-0x14],al
pf_at 0x63e3
l_kernel_00026b01: lea ecx,[ebp-0x48]
pf_at 0x63e6
l_kernel_00026b04: call 0x24daf
pf_at 0x63eb
l_kernel_00026b09: lea ecx,[ebp-0x68]
pf_at 0x63ee
l_kernel_00026b0c: call 0x24daf
pf_at 0x63f3
l_kernel_00026b11: jmp near 0x26c49
pf_at 0x63f8
l_kernel_00026b16: sub esp,byte +0x8
pf_at 0x63fb
l_kernel_00026b19: push dword 0x2cf97
pf_at 0x6400
l_kernel_00026b1e: push ebx
pf_at 0x6401
l_kernel_00026b1f: call 0x20cea
pf_at 0x6406
l_kernel_00026b24: add esp,byte +0x10
pf_at 0x6409
l_kernel_00026b27: test eax,eax
pf_at 0x640b
l_kernel_00026b29: jz near 0x26c6c
pf_at 0x6411
l_kernel_00026b2f: lea ecx,[ebp-0x68]
pf_at 0x6414
l_kernel_00026b32: jmp near 0x26879
pf_at 0x6419
l_kernel_00026b37: sub esp,byte +0x8
pf_at 0x641c
l_kernel_00026b3a: push dword 0x2cf97
pf_at 0x6421
l_kernel_00026b3f: push ebx
pf_at 0x6422
l_kernel_00026b40: call 0x20cea
pf_at 0x6427
l_kernel_00026b45: add esp,byte +0x10
pf_at 0x642a
l_kernel_00026b48: test eax,eax
pf_at 0x642c
l_kernel_00026b4a: jz near 0x26c9d
pf_at 0x6432
l_kernel_00026b50: lea esi,[ebp-0xbc]
pf_at 0x6438
l_kernel_00026b56: and dword [esi],byte +0x0
pf_at 0x643b
l_kernel_00026b59: and dword [esi+0x4],byte +0x0
pf_at 0x643f
l_kernel_00026b5d: and dword [esi+0x8],byte +0x0
pf_at 0x6443
l_kernel_00026b61: and dword [esi+0xc],byte +0x0
pf_at 0x6447
l_kernel_00026b65: and dword [esi+0x10],byte +0x0
pf_at 0x644b
l_kernel_00026b69: and dword [esi+0x14],byte +0x0
pf_at 0x644f
l_kernel_00026b6d: and dword [esi+0x18],byte +0x0
pf_at 0x6453
l_kernel_00026b71: and dword [esi+0x1c],byte +0x0
pf_at 0x6457
l_kernel_00026b75: and dword [ebp-0x9c],byte +0x0
pf_at 0x645e
l_kernel_00026b7c: and dword [ebp-0x98],byte +0x0
pf_at 0x6465
l_kernel_00026b83: and dword [ebp-0x94],byte +0x0
pf_at 0x646c
l_kernel_00026b8a: and dword [ebp-0x90],byte +0x0
pf_at 0x6473
l_kernel_00026b91: and dword [ebp-0x8c],byte +0x0
pf_at 0x647a
l_kernel_00026b98: and dword [ebp-0x88],byte +0x0
pf_at 0x6481
l_kernel_00026b9f: and dword [ebp-0x84],byte +0x0
pf_at 0x6488
l_kernel_00026ba6: and dword [ebp-0x80],byte +0x0
pf_at 0x648c
l_kernel_00026baa: mov eax,[ebp-0x20]
pf_at 0x648f
l_kernel_00026bad: mov ecx,[ebp-0x18]
pf_at 0x6492
l_kernel_00026bb0: shl eax,byte 0x5
pf_at 0x6495
l_kernel_00026bb3: lea edx,[ecx+eax]
pf_at 0x6498
l_kernel_00026bb6: add edx,byte -0x20
pf_at 0x649b
l_kernel_00026bb9: sub esp,byte +0xc
pf_at 0x649e
l_kernel_00026bbc: mov ecx,[ebp-0x14]
pf_at 0x64a1
l_kernel_00026bbf: push esi
pf_at 0x64a2
l_kernel_00026bc0: call 0x2af9d
pf_at 0x64a7
l_kernel_00026bc5: add esp,byte +0x10
pf_at 0x64aa
l_kernel_00026bc8: test al,al
pf_at 0x64ac
l_kernel_00026bca: jz near 0x26c85
pf_at 0x64b2
l_kernel_00026bd0: lea edi,[ebp-0x9c]
pf_at 0x64b8
l_kernel_00026bd6: sub esp,byte +0x4
pf_at 0x64bb
l_kernel_00026bd9: lea edx,[ebp-0x26]
pf_at 0x64be
l_kernel_00026bdc: mov ecx,[ebp-0x24]
pf_at 0x64c1
l_kernel_00026bdf: push edi
pf_at 0x64c2
l_kernel_00026be0: lea eax,[ebp-0x68]
pf_at 0x64c5
l_kernel_00026be3: push eax
pf_at 0x64c6
l_kernel_00026be4: push esi
pf_at 0x64c7
l_kernel_00026be5: call 0x2729c
pf_at 0x64cc
l_kernel_00026bea: add esp,byte +0x10
pf_at 0x64cf
l_kernel_00026bed: test al,al
pf_at 0x64d1
l_kernel_00026bef: jz near 0x26c85
pf_at 0x64d7
l_kernel_00026bf5: mov eax,[ebp-0x20]
pf_at 0x64da
l_kernel_00026bf8: mov ecx,[ebp-0x18]
pf_at 0x64dd
l_kernel_00026bfb: shl eax,byte 0x5
pf_at 0x64e0
l_kernel_00026bfe: lea edx,[ecx+eax]
pf_at 0x64e3
l_kernel_00026c01: add edx,byte -0x20
pf_at 0x64e6
l_kernel_00026c04: sub esp,byte +0x8
pf_at 0x64e9
l_kernel_00026c07: mov ecx,[ebp-0x14]
pf_at 0x64ec
l_kernel_00026c0a: push byte +0x0
pf_at 0x64ee
l_kernel_00026c0c: push edi
pf_at 0x64ef
l_kernel_00026c0d: call 0x2ba0b
pf_at 0x64f4
l_kernel_00026c12: add esp,byte +0x10
pf_at 0x64f7
l_kernel_00026c15: test al,al
pf_at 0x64f9
l_kernel_00026c17: jz short 0x26c85
pf_at 0x64fb
l_kernel_00026c19: lea ecx,[ebp-0xbc]
pf_at 0x6501
l_kernel_00026c1f: call 0x24daf
pf_at 0x6506
l_kernel_00026c24: lea ecx,[ebp-0x9c]
pf_at 0x650c
l_kernel_00026c2a: call 0x24daf
pf_at 0x6511
l_kernel_00026c2f: jmp near 0x26cc4
pf_at 0x6516
l_kernel_00026c34: mov esi,[ebp-0x10]
pf_at 0x6519
l_kernel_00026c37: mov eax,[esi+0x8]
pf_at 0x651c
l_kernel_00026c3a: mov ecx,[eax]
pf_at 0x651e
l_kernel_00026c3c: lea ebx,[ebp-0x68]
pf_at 0x6521
l_kernel_00026c3f: mov edx,ebx
pf_at 0x6523
l_kernel_00026c41: call 0x24c97
pf_at 0x6528
l_kernel_00026c46: mov [ebp-0x14],al
pf_at 0x652b
l_kernel_00026c49: mov ecx,ebx
pf_at 0x652d
l_kernel_00026c4b: call 0x24daf
pf_at 0x6532
l_kernel_00026c50: lea ecx,[ebp-0x20]
pf_at 0x6535
l_kernel_00026c53: call 0x28ab1
pf_at 0x653a
l_kernel_00026c58: mov al,0x1
pf_at 0x653c
l_kernel_00026c5a: cmp byte [ebp-0x14],0x0
pf_at 0x6540
l_kernel_00026c5e: jnz near 0x266df
pf_at 0x6546
l_kernel_00026c64: mov eax,[esi+0x8]
pf_at 0x6549
l_kernel_00026c67: jmp near 0x26d84
pf_at 0x654e
l_kernel_00026c6c: mov eax,[ebp-0x18]
pf_at 0x6551
l_kernel_00026c6f: cmp dword [eax],byte +0x1
pf_at 0x6554
l_kernel_00026c72: jnz near 0x26d54
pf_at 0x655a
l_kernel_00026c78: lea ecx,[ebp-0x48]
pf_at 0x655d
l_kernel_00026c7b: call 0x28534
pf_at 0x6562
l_kernel_00026c80: jmp near 0x26d5c
pf_at 0x6567
l_kernel_00026c85: lea ecx,[ebp-0xbc]
pf_at 0x656d
l_kernel_00026c8b: call 0x24daf
pf_at 0x6572
l_kernel_00026c90: lea ecx,[ebp-0x9c]
pf_at 0x6578
l_kernel_00026c96: call 0x24daf
pf_at 0x657d
l_kernel_00026c9b: jmp short 0x26d0e
pf_at 0x657f
l_kernel_00026c9d: mov eax,[ebp-0x20]
pf_at 0x6582
l_kernel_00026ca0: mov ecx,[ebp-0x18]
pf_at 0x6585
l_kernel_00026ca3: shl eax,byte 0x5
pf_at 0x6588
l_kernel_00026ca6: lea edx,[ecx+eax]
pf_at 0x658b
l_kernel_00026ca9: add edx,byte -0x20
pf_at 0x658e
l_kernel_00026cac: sub esp,byte +0x8
pf_at 0x6591
l_kernel_00026caf: mov ecx,[ebp-0x14]
pf_at 0x6594
l_kernel_00026cb2: push byte +0x1
pf_at 0x6596
l_kernel_00026cb4: lea eax,[ebp-0x68]
pf_at 0x6599
l_kernel_00026cb7: push eax
pf_at 0x659a
l_kernel_00026cb8: call 0x2ba0b
pf_at 0x659f
l_kernel_00026cbd: add esp,byte +0x10
pf_at 0x65a2
l_kernel_00026cc0: test al,al
pf_at 0x65a4
l_kernel_00026cc2: jz short 0x26d0e
pf_at 0x65a6
l_kernel_00026cc4: mov edi,[ebp-0x10]
pf_at 0x65a9
l_kernel_00026cc7: mov eax,[edi+0x8]
pf_at 0x65ac
l_kernel_00026cca: mov ecx,[eax]
pf_at 0x65ae
l_kernel_00026ccc: lea esi,[ebp-0x48]
pf_at 0x65b1
l_kernel_00026ccf: mov edx,esi
pf_at 0x65b3
l_kernel_00026cd1: call 0x24c97
pf_at 0x65b8
l_kernel_00026cd6: mov ebx,eax
pf_at 0x65ba
l_kernel_00026cd8: mov ecx,esi
pf_at 0x65bc
l_kernel_00026cda: call 0x24daf
pf_at 0x65c1
l_kernel_00026cdf: lea ecx,[ebp-0x68]
pf_at 0x65c4
l_kernel_00026ce2: call 0x24daf
pf_at 0x65c9
l_kernel_00026ce7: lea ecx,[ebp-0x20]
pf_at 0x65cc
l_kernel_00026cea: call 0x28ab1
pf_at 0x65d1
l_kernel_00026cef: mov al,0x1
pf_at 0x65d3
l_kernel_00026cf1: test bl,bl
pf_at 0x65d5
l_kernel_00026cf3: mov ecx,[ebp-0x24]
pf_at 0x65d8
l_kernel_00026cf6: jnz near 0x266df
pf_at 0x65de
l_kernel_00026cfc: mov eax,[edi+0x8]
pf_at 0x65e1
l_kernel_00026cff: mov eax,[eax]
pf_at 0x65e3
l_kernel_00026d01: push eax
pf_at 0x65e4
l_kernel_00026d02: push dword 0x2df66
pf_at 0x65e9
l_kernel_00026d07: push eax
pf_at 0x65ea
l_kernel_00026d08: push ecx
pf_at 0x65eb
l_kernel_00026d09: jmp near 0x269f0
pf_at 0x65f0
l_kernel_00026d0e: lea ecx,[ebp-0x48]
pf_at 0x65f3
l_kernel_00026d11: call 0x24daf
pf_at 0x65f8
l_kernel_00026d16: lea ecx,[ebp-0x68]
pf_at 0x65fb
l_kernel_00026d19: call 0x24daf
pf_at 0x6600
l_kernel_00026d1e: lea ecx,[ebp-0x20]
pf_at 0x6603
l_kernel_00026d21: call 0x28ab1
pf_at 0x6608
l_kernel_00026d26: mov eax,[ebp-0x10]
pf_at 0x660b
l_kernel_00026d29: mov eax,[eax+0x8]
pf_at 0x660e
l_kernel_00026d2c: sub esp,byte +0x4
pf_at 0x6611
l_kernel_00026d2f: push dword 0x2df89
pf_at 0x6616
l_kernel_00026d34: jmp near 0x269eb
pf_at 0x661b
l_kernel_00026d39: lea ecx,[ebp-0x48]
pf_at 0x661e
l_kernel_00026d3c: call 0x24daf
pf_at 0x6623
l_kernel_00026d41: lea ecx,[ebp-0x68]
pf_at 0x6626
l_kernel_00026d44: call 0x24daf
pf_at 0x662b
l_kernel_00026d49: lea ecx,[ebp-0xbc]
pf_at 0x6631
l_kernel_00026d4f: jmp near 0x26879
pf_at 0x6636
l_kernel_00026d54: lea ecx,[ebp-0x48]
pf_at 0x6639
l_kernel_00026d57: call 0x285ca
pf_at 0x663e
l_kernel_00026d5c: test al,al
pf_at 0x6640
l_kernel_00026d5e: jnz near 0x26927
pf_at 0x6646
l_kernel_00026d64: jmp short 0x26d6e
pf_at 0x6648
l_kernel_00026d66: lea ecx,[ebp-0x48]
pf_at 0x664b
l_kernel_00026d69: call 0x24daf
pf_at 0x6650
l_kernel_00026d6e: lea ecx,[ebp-0x68]
pf_at 0x6653
l_kernel_00026d71: call 0x24daf
pf_at 0x6658
l_kernel_00026d76: lea ecx,[ebp-0x20]
pf_at 0x665b
l_kernel_00026d79: call 0x28ab1
pf_at 0x6660
l_kernel_00026d7e: mov eax,[ebp-0x10]
pf_at 0x6663
l_kernel_00026d81: mov eax,[eax+0x8]
pf_at 0x6666
l_kernel_00026d84: mov eax,[eax]
pf_at 0x6668
l_kernel_00026d86: push eax
pf_at 0x6669
l_kernel_00026d87: push dword 0x2df66
pf_at 0x666e
l_kernel_00026d8c: push eax
pf_at 0x666f
l_kernel_00026d8d: jmp near 0x26a22
pf_at 0x6674
l_kernel_00026d92: push ebp
pf_at 0x6675
l_kernel_00026d93: mov ebp,esp
pf_at 0x6677
l_kernel_00026d95: push edi
pf_at 0x6678
l_kernel_00026d96: push esi
pf_at 0x6679
l_kernel_00026d97: sub esp,byte +0x30
pf_at 0x667c
l_kernel_00026d9a: mov edi,edx
pf_at 0x667e
l_kernel_00026d9c: mov esi,ecx
pf_at 0x6680
l_kernel_00026d9e: lea ecx,[ebp-0x14]
pf_at 0x6683
l_kernel_00026da1: mov [ecx],esi
pf_at 0x6685
l_kernel_00026da3: mov [ecx+0x4],edx
pf_at 0x6688
l_kernel_00026da6: and dword [ecx+0x8],byte +0x0
pf_at 0x668c
l_kernel_00026daa: lea edx,[ebp-0x34]
pf_at 0x668f
l_kernel_00026dad: and dword [edx],byte +0x0
pf_at 0x6692
l_kernel_00026db0: and dword [edx+0x4],byte +0x0
pf_at 0x6696
l_kernel_00026db4: and dword [edx+0x8],byte +0x0
pf_at 0x669a
l_kernel_00026db8: and dword [edx+0xc],byte +0x0
pf_at 0x669e
l_kernel_00026dbc: and dword [edx+0x10],byte +0x0
pf_at 0x66a2
l_kernel_00026dc0: and dword [edx+0x14],byte +0x0
pf_at 0x66a6
l_kernel_00026dc4: and dword [edx+0x18],byte +0x0
pf_at 0x66aa
l_kernel_00026dc8: and dword [edx+0x1c],byte +0x0
pf_at 0x66ae
l_kernel_00026dcc: call 0x26473
pf_at 0x66b3
l_kernel_00026dd1: test al,al
pf_at 0x66b5
l_kernel_00026dd3: jz short 0x26e16
pf_at 0x66b7
l_kernel_00026dd5: mov eax,[ebp-0xc]
pf_at 0x66ba
l_kernel_00026dd8: cmp eax,[edi]
pf_at 0x66bc
l_kernel_00026dda: jnz short 0x26df4
pf_at 0x66be
l_kernel_00026ddc: mov edi,[ebp+0x8]
pf_at 0x66c1
l_kernel_00026ddf: test edi,edi
pf_at 0x66c3
l_kernel_00026de1: jz short 0x26e1a
pf_at 0x66c5
l_kernel_00026de3: mov ecx,edi
pf_at 0x66c7
l_kernel_00026de5: call 0x24daf
pf_at 0x66cc
l_kernel_00026dea: push byte +0x8
pf_at 0x66ce
l_kernel_00026dec: pop ecx
pf_at 0x66cf
l_kernel_00026ded: lea esi,[ebp-0x34]
pf_at 0x66d2
l_kernel_00026df0: rep movsd
pf_at 0x66d4
l_kernel_00026df2: jmp short 0x26e22
pf_at 0x66d6
l_kernel_00026df4: lea ecx,[ebp-0x34]
pf_at 0x66d9
l_kernel_00026df7: call 0x24daf
pf_at 0x66de
l_kernel_00026dfc: mov eax,[edi+0x8]
pf_at 0x66e1
l_kernel_00026dff: mov ecx,[ebp-0xc]
pf_at 0x66e4
l_kernel_00026e02: sub esp,byte +0x4
pf_at 0x66e7
l_kernel_00026e05: push dword 0x2df4c
pf_at 0x66ec
l_kernel_00026e0a: push dword [eax+ecx*4]
pf_at 0x66ef
l_kernel_00026e0d: push esi
pf_at 0x66f0
l_kernel_00026e0e: call 0x2609c
pf_at 0x66f5
l_kernel_00026e13: add esp,byte +0x10
pf_at 0x66f8
l_kernel_00026e16: xor eax,eax
pf_at 0x66fa
l_kernel_00026e18: jmp short 0x26e24
pf_at 0x66fc
l_kernel_00026e1a: lea ecx,[ebp-0x34]
pf_at 0x66ff
l_kernel_00026e1d: call 0x24daf
pf_at 0x6704
l_kernel_00026e22: mov al,0x1
pf_at 0x6706
l_kernel_00026e24: add esp,byte +0x30
pf_at 0x6709
l_kernel_00026e27: pop esi
pf_at 0x670a
l_kernel_00026e28: pop edi
pf_at 0x670b
l_kernel_00026e29: pop ebp
pf_at 0x670c
l_kernel_00026e2a: ret
pf_at 0x670d
l_kernel_00026e2b: test ecx,ecx
pf_at 0x670f
l_kernel_00026e2d: jz short 0x26e5a
pf_at 0x6711
l_kernel_00026e2f: push ebp
pf_at 0x6712
l_kernel_00026e30: mov ebp,esp
pf_at 0x6714
l_kernel_00026e32: push ebx
pf_at 0x6715
l_kernel_00026e33: push edi
pf_at 0x6716
l_kernel_00026e34: push esi
pf_at 0x6717
l_kernel_00026e35: sub esp,byte +0xc
pf_at 0x671a
l_kernel_00026e38: mov edi,edx
pf_at 0x671c
l_kernel_00026e3a: mov esi,ecx
pf_at 0x671e
l_kernel_00026e3c: mov eax,[ecx]
pf_at 0x6720
l_kernel_00026e3e: mov ecx,[ecx+0x4]
pf_at 0x6723
l_kernel_00026e41: inc eax
pf_at 0x6724
l_kernel_00026e42: cmp ecx,eax
pf_at 0x6726
l_kernel_00026e44: jnc short 0x26e8d
pf_at 0x6728
l_kernel_00026e46: test ecx,ecx
pf_at 0x672a
l_kernel_00026e48: push byte +0x8
pf_at 0x672c
l_kernel_00026e4a: pop ebx
pf_at 0x672d
l_kernel_00026e4b: cmovnz ebx,ecx
pf_at 0x6730
l_kernel_00026e4e: cmp ebx,eax
pf_at 0x6732
l_kernel_00026e50: jnc short 0x26e5f
pf_at 0x6734
l_kernel_00026e52: test ebx,ebx
pf_at 0x6736
l_kernel_00026e54: js short 0x26e5d
pf_at 0x6738
l_kernel_00026e56: add ebx,ebx
pf_at 0x673a
l_kernel_00026e58: jmp short 0x26e4e
pf_at 0x673c
l_kernel_00026e5a: xor eax,eax
pf_at 0x673e
l_kernel_00026e5c: ret
pf_at 0x673f
l_kernel_00026e5d: mov ebx,eax
pf_at 0x6741
l_kernel_00026e5f: lea eax,[ebx*4+0x0]
pf_at 0x6748
l_kernel_00026e66: sub esp,byte +0x8
pf_at 0x674b
l_kernel_00026e69: push eax
pf_at 0x674c
l_kernel_00026e6a: push dword [esi+0x8]
pf_at 0x674f
l_kernel_00026e6d: call 0x20b68
pf_at 0x6754
l_kernel_00026e72: add esp,byte +0x10
pf_at 0x6757
l_kernel_00026e75: test eax,eax
pf_at 0x6759
l_kernel_00026e77: jz short 0x26eb4
pf_at 0x675b
l_kernel_00026e79: mov ecx,[esi+0x4]
pf_at 0x675e
l_kernel_00026e7c: cmp ecx,ebx
pf_at 0x6760
l_kernel_00026e7e: jnc short 0x26e87
pf_at 0x6762
l_kernel_00026e80: and dword [eax+ecx*4],byte +0x0
pf_at 0x6766
l_kernel_00026e84: inc ecx
pf_at 0x6767
l_kernel_00026e85: jmp short 0x26e7c
pf_at 0x6769
l_kernel_00026e87: mov [esi+0x8],eax
pf_at 0x676c
l_kernel_00026e8a: mov [esi+0x4],ebx
pf_at 0x676f
l_kernel_00026e8d: mov edx,[ebp+0x8]
pf_at 0x6772
l_kernel_00026e90: test edi,edi
pf_at 0x6774
l_kernel_00026e92: mov ecx,0x2ca9c
pf_at 0x6779
l_kernel_00026e97: cmovnz ecx,edi
pf_at 0x677c
l_kernel_00026e9a: call 0x24f9e
pf_at 0x6781
l_kernel_00026e9f: test eax,eax
pf_at 0x6783
l_kernel_00026ea1: jz short 0x26eb4
pf_at 0x6785
l_kernel_00026ea3: mov ecx,[esi]
pf_at 0x6787
l_kernel_00026ea5: mov edx,[esi+0x8]
pf_at 0x678a
l_kernel_00026ea8: lea edi,[ecx+0x1]
pf_at 0x678d
l_kernel_00026eab: mov [esi],edi
pf_at 0x678f
l_kernel_00026ead: mov [edx+ecx*4],eax
pf_at 0x6792
l_kernel_00026eb0: mov al,0x1
pf_at 0x6794
l_kernel_00026eb2: jmp short 0x26eb6
pf_at 0x6796
l_kernel_00026eb4: xor eax,eax
pf_at 0x6798
l_kernel_00026eb6: add esp,byte +0xc
pf_at 0x679b
l_kernel_00026eb9: pop esi
pf_at 0x679c
l_kernel_00026eba: pop edi
pf_at 0x679d
l_kernel_00026ebb: pop ebx
pf_at 0x679e
l_kernel_00026ebc: pop ebp
pf_at 0x679f
l_kernel_00026ebd: ret
pf_at 0x67a0
l_kernel_00026ebe: push ebp
pf_at 0x67a1
l_kernel_00026ebf: mov ebp,esp
pf_at 0x67a3
l_kernel_00026ec1: push ebx
pf_at 0x67a4
l_kernel_00026ec2: push edi
pf_at 0x67a5
l_kernel_00026ec3: push esi
pf_at 0x67a6
l_kernel_00026ec4: mov esi,edx
pf_at 0x67a8
l_kernel_00026ec6: test ecx,ecx
pf_at 0x67aa
l_kernel_00026ec8: setz dl
pf_at 0x67ad
l_kernel_00026ecb: test esi,esi
pf_at 0x67af
l_kernel_00026ecd: setz dh
pf_at 0x67b2
l_kernel_00026ed0: xor eax,eax
pf_at 0x67b4
l_kernel_00026ed2: or dh,dl
pf_at 0x67b6
l_kernel_00026ed4: jnz short 0x26f1c
pf_at 0x67b8
l_kernel_00026ed6: mov bh,[ecx+eax]
pf_at 0x67bb
l_kernel_00026ed9: mov bl,[esi+eax]
pf_at 0x67be
l_kernel_00026edc: test bh,bh
pf_at 0x67c0
l_kernel_00026ede: jz short 0x26f13
pf_at 0x67c2
l_kernel_00026ee0: test bl,bl
pf_at 0x67c4
l_kernel_00026ee2: jz short 0x26f13
pf_at 0x67c6
l_kernel_00026ee4: mov dl,bh
pf_at 0x67c8
l_kernel_00026ee6: add dl,0x9f
pf_at 0x67cb
l_kernel_00026ee9: movzx edi,bh
pf_at 0x67ce
l_kernel_00026eec: add bh,0xe0
pf_at 0x67d1
l_kernel_00026eef: cmp dl,0x1a
pf_at 0x67d4
l_kernel_00026ef2: movzx edx,bh
pf_at 0x67d7
l_kernel_00026ef5: cmovnc edx,edi
pf_at 0x67da
l_kernel_00026ef8: mov bh,bl
pf_at 0x67dc
l_kernel_00026efa: add bh,0x9f
pf_at 0x67df
l_kernel_00026efd: movzx edi,bl
pf_at 0x67e2
l_kernel_00026f00: add bl,0xe0
pf_at 0x67e5
l_kernel_00026f03: cmp bh,0x1a
pf_at 0x67e8
l_kernel_00026f06: movzx ebx,bl
pf_at 0x67eb
l_kernel_00026f09: cmovnc ebx,edi
pf_at 0x67ee
l_kernel_00026f0c: cmp dl,bl
pf_at 0x67f0
l_kernel_00026f0e: jnz short 0x26f1a
pf_at 0x67f2
l_kernel_00026f10: inc eax
pf_at 0x67f3
l_kernel_00026f11: jmp short 0x26ed6
pf_at 0x67f5
l_kernel_00026f13: or bh,bl
pf_at 0x67f7
l_kernel_00026f15: setz al
pf_at 0x67fa
l_kernel_00026f18: jmp short 0x26f1c
pf_at 0x67fc
l_kernel_00026f1a: xor eax,eax
pf_at 0x67fe
l_kernel_00026f1c: pop esi
pf_at 0x67ff
l_kernel_00026f1d: pop edi
pf_at 0x6800
l_kernel_00026f1e: pop ebx
pf_at 0x6801
l_kernel_00026f1f: pop ebp
pf_at 0x6802
l_kernel_00026f20: ret
pf_at 0x6803
l_kernel_00026f21: push ebp
pf_at 0x6804
l_kernel_00026f22: mov ebp,esp
pf_at 0x6806
l_kernel_00026f24: push ebx
pf_at 0x6807
l_kernel_00026f25: push edi
pf_at 0x6808
l_kernel_00026f26: push esi
pf_at 0x6809
l_kernel_00026f27: sub esp,byte +0x4c
pf_at 0x680c
l_kernel_00026f2a: mov esi,edx
pf_at 0x680e
l_kernel_00026f2c: mov [ebp-0x10],ecx
pf_at 0x6811
l_kernel_00026f2f: call 0x2703e
pf_at 0x6816
l_kernel_00026f34: test al,al
pf_at 0x6818
l_kernel_00026f36: jz near 0x27008
pf_at 0x681e
l_kernel_00026f3c: mov [ebp-0x14],esi
pf_at 0x6821
l_kernel_00026f3f: mov ecx,[ebp-0x10]
pf_at 0x6824
l_kernel_00026f42: mov eax,[ecx+0x4]
pf_at 0x6827
l_kernel_00026f45: mov edi,[ecx+0x8]
pf_at 0x682a
l_kernel_00026f48: mov bl,0x1
pf_at 0x682c
l_kernel_00026f4a: cmp edi,[eax]
pf_at 0x682e
l_kernel_00026f4c: jnc near 0x2700a
pf_at 0x6834
l_kernel_00026f52: mov eax,[eax+0x8]
pf_at 0x6837
l_kernel_00026f55: mov esi,[eax+edi*4]
pf_at 0x683a
l_kernel_00026f58: mov ecx,esi
pf_at 0x683c
l_kernel_00026f5a: mov edx,0x2ce63
pf_at 0x6841
l_kernel_00026f5f: call 0x26458
pf_at 0x6846
l_kernel_00026f64: test al,al
pf_at 0x6848
l_kernel_00026f66: jnz short 0x26f87
pf_at 0x684a
l_kernel_00026f68: sub esp,byte +0x8
pf_at 0x684d
l_kernel_00026f6b: push dword 0x2ce67
pf_at 0x6852
l_kernel_00026f70: push esi
pf_at 0x6853
l_kernel_00026f71: call 0x20cea
pf_at 0x6858
l_kernel_00026f76: add esp,byte +0x10
pf_at 0x685b
l_kernel_00026f79: test eax,eax
pf_at 0x685d
l_kernel_00026f7b: jnz near 0x2700a
pf_at 0x6863
l_kernel_00026f81: mov eax,[ebp-0x10]
pf_at 0x6866
l_kernel_00026f84: mov edi,[eax+0x8]
pf_at 0x6869
l_kernel_00026f87: inc edi
pf_at 0x686a
l_kernel_00026f88: mov ecx,[ebp-0x10]
pf_at 0x686d
l_kernel_00026f8b: mov [ecx+0x8],edi
pf_at 0x6870
l_kernel_00026f8e: and dword [ebp-0x34],byte +0x0
pf_at 0x6874
l_kernel_00026f92: and dword [ebp-0x30],byte +0x0
pf_at 0x6878
l_kernel_00026f96: and dword [ebp-0x2c],byte +0x0
pf_at 0x687c
l_kernel_00026f9a: and dword [ebp-0x28],byte +0x0
pf_at 0x6880
l_kernel_00026f9e: and dword [ebp-0x24],byte +0x0
pf_at 0x6884
l_kernel_00026fa2: and dword [ebp-0x20],byte +0x0
pf_at 0x6888
l_kernel_00026fa6: and dword [ebp-0x1c],byte +0x0
pf_at 0x688c
l_kernel_00026faa: and dword [ebp-0x18],byte +0x0
pf_at 0x6890
l_kernel_00026fae: lea edi,[ebp-0x34]
pf_at 0x6893
l_kernel_00026fb1: mov edx,edi
pf_at 0x6895
l_kernel_00026fb3: call 0x2703e
pf_at 0x689a
l_kernel_00026fb8: test al,al
pf_at 0x689c
l_kernel_00026fba: jz short 0x27000
pf_at 0x689e
l_kernel_00026fbc: mov esi,[ebp-0x14]
pf_at 0x68a1
l_kernel_00026fbf: mov ecx,esi
pf_at 0x68a3
l_kernel_00026fc1: call 0x26564
pf_at 0x68a8
l_kernel_00026fc6: test al,al
pf_at 0x68aa
l_kernel_00026fc8: jz short 0x26fd5
pf_at 0x68ac
l_kernel_00026fca: mov ecx,edi
pf_at 0x68ae
l_kernel_00026fcc: call 0x26564
pf_at 0x68b3
l_kernel_00026fd1: mov ebx,eax
pf_at 0x68b5
l_kernel_00026fd3: jmp short 0x26fd7
pf_at 0x68b7
l_kernel_00026fd5: xor ebx,ebx
pf_at 0x68b9
l_kernel_00026fd7: mov ecx,esi
pf_at 0x68bb
l_kernel_00026fd9: call 0x24daf
pf_at 0x68c0
l_kernel_00026fde: mov ecx,edi
pf_at 0x68c2
l_kernel_00026fe0: call 0x24daf
pf_at 0x68c7
l_kernel_00026fe5: movzx edx,bl
pf_at 0x68ca
l_kernel_00026fe8: lea ebx,[ebp-0x54]
pf_at 0x68cd
l_kernel_00026feb: mov ecx,ebx
pf_at 0x68cf
l_kernel_00026fed: call 0x27014
pf_at 0x68d4
l_kernel_00026ff2: push byte +0x8
pf_at 0x68d6
l_kernel_00026ff4: pop ecx
pf_at 0x68d7
l_kernel_00026ff5: mov edi,esi
pf_at 0x68d9
l_kernel_00026ff7: mov esi,ebx
pf_at 0x68db
l_kernel_00026ff9: rep movsd
pf_at 0x68dd
l_kernel_00026ffb: jmp near 0x26f3f
pf_at 0x68e2
l_kernel_00027000: mov ecx,[ebp-0x14]
pf_at 0x68e5
l_kernel_00027003: call 0x24daf
pf_at 0x68ea
l_kernel_00027008: xor ebx,ebx
pf_at 0x68ec
l_kernel_0002700a: mov eax,ebx
pf_at 0x68ee
l_kernel_0002700c: add esp,byte +0x4c
pf_at 0x68f1
l_kernel_0002700f: pop esi
pf_at 0x68f2
l_kernel_00027010: pop edi
pf_at 0x68f3
l_kernel_00027011: pop ebx
pf_at 0x68f4
l_kernel_00027012: pop ebp
pf_at 0x68f5
l_kernel_00027013: ret
pf_at 0x68f6
l_kernel_00027014: push ebp
pf_at 0x68f7
l_kernel_00027015: mov ebp,esp
pf_at 0x68f9
l_kernel_00027017: push edi
pf_at 0x68fa
l_kernel_00027018: push esi
pf_at 0x68fb
l_kernel_00027019: mov edi,edx
pf_at 0x68fd
l_kernel_0002701b: mov esi,ecx
pf_at 0x68ff
l_kernel_0002701d: call 0x24c40
pf_at 0x6904
l_kernel_00027022: test edi,edi
pf_at 0x6906
l_kernel_00027024: fld1
pf_at 0x6908
l_kernel_00027026: fldz
pf_at 0x690a
l_kernel_00027028: fcmovne st1
pf_at 0x690c
l_kernel_0002702a: fstp st1
pf_at 0x690e
l_kernel_0002702c: mov dword [esi],0x5
pf_at 0x6914
l_kernel_00027032: mov [esi+0x4],edi
pf_at 0x6917
l_kernel_00027035: fstp dword [esi+0x8]
pf_at 0x691a
l_kernel_00027038: mov eax,esi
pf_at 0x691c
l_kernel_0002703a: pop esi
pf_at 0x691d
l_kernel_0002703b: pop edi
pf_at 0x691e
l_kernel_0002703c: pop ebp
pf_at 0x691f
l_kernel_0002703d: ret
pf_at 0x6920
l_kernel_0002703e: push ebp
pf_at 0x6921
l_kernel_0002703f: mov ebp,esp
pf_at 0x6923
l_kernel_00027041: push ebx
pf_at 0x6924
l_kernel_00027042: push edi
pf_at 0x6925
l_kernel_00027043: push esi
pf_at 0x6926
l_kernel_00027044: sub esp,byte +0x4c
pf_at 0x6929
l_kernel_00027047: mov esi,edx
pf_at 0x692b
l_kernel_00027049: mov edi,ecx
pf_at 0x692d
l_kernel_0002704b: call 0x2715f
pf_at 0x6932
l_kernel_00027050: test al,al
pf_at 0x6934
l_kernel_00027052: jz near 0x27153
pf_at 0x693a
l_kernel_00027058: mov [ebp-0x14],esi
pf_at 0x693d
l_kernel_0002705b: mov ecx,[edi+0x4]
pf_at 0x6940
l_kernel_0002705e: mov eax,[edi+0x8]
pf_at 0x6943
l_kernel_00027061: mov bl,0x1
pf_at 0x6945
l_kernel_00027063: cmp eax,[ecx]
pf_at 0x6947
l_kernel_00027065: jnc near 0x27155
pf_at 0x694d
l_kernel_0002706b: mov ecx,[ecx+0x8]
pf_at 0x6950
l_kernel_0002706e: mov esi,[ecx+eax*4]
pf_at 0x6953
l_kernel_00027071: sub esp,byte +0x8
pf_at 0x6956
l_kernel_00027074: push dword 0x2ce6a
pf_at 0x695b
l_kernel_00027079: push esi
pf_at 0x695c
l_kernel_0002707a: call 0x20cea
pf_at 0x6961
l_kernel_0002707f: add esp,byte +0x10
pf_at 0x6964
l_kernel_00027082: test eax,eax
pf_at 0x6966
l_kernel_00027084: jz short 0x270b4
pf_at 0x6968
l_kernel_00027086: sub esp,byte +0x8
pf_at 0x696b
l_kernel_00027089: push dword 0x2ce6d
pf_at 0x6970
l_kernel_0002708e: push esi
pf_at 0x6971
l_kernel_0002708f: call 0x20cea
pf_at 0x6976
l_kernel_00027094: add esp,byte +0x10
pf_at 0x6979
l_kernel_00027097: test eax,eax
pf_at 0x697b
l_kernel_00027099: jz short 0x270b4
pf_at 0x697d
l_kernel_0002709b: sub esp,byte +0x8
pf_at 0x6980
l_kernel_0002709e: push dword 0x2ce70
pf_at 0x6985
l_kernel_000270a3: push esi
pf_at 0x6986
l_kernel_000270a4: call 0x20cea
pf_at 0x698b
l_kernel_000270a9: add esp,byte +0x10
pf_at 0x698e
l_kernel_000270ac: test eax,eax
pf_at 0x6990
l_kernel_000270ae: jnz near 0x27155
pf_at 0x6996
l_kernel_000270b4: inc dword [edi+0x8]
pf_at 0x6999
l_kernel_000270b7: and dword [ebp-0x34],byte +0x0
pf_at 0x699d
l_kernel_000270bb: and dword [ebp-0x30],byte +0x0
pf_at 0x69a1
l_kernel_000270bf: and dword [ebp-0x2c],byte +0x0
pf_at 0x69a5
l_kernel_000270c3: and dword [ebp-0x28],byte +0x0
pf_at 0x69a9
l_kernel_000270c7: and dword [ebp-0x24],byte +0x0
pf_at 0x69ad
l_kernel_000270cb: and dword [ebp-0x20],byte +0x0
pf_at 0x69b1
l_kernel_000270cf: and dword [ebp-0x1c],byte +0x0
pf_at 0x69b5
l_kernel_000270d3: and dword [ebp-0x18],byte +0x0
pf_at 0x69b9
l_kernel_000270d7: and dword [ebp-0x54],byte +0x0
pf_at 0x69bd
l_kernel_000270db: and dword [ebp-0x50],byte +0x0
pf_at 0x69c1
l_kernel_000270df: and dword [ebp-0x4c],byte +0x0
pf_at 0x69c5
l_kernel_000270e3: and dword [ebp-0x48],byte +0x0
pf_at 0x69c9
l_kernel_000270e7: and dword [ebp-0x44],byte +0x0
pf_at 0x69cd
l_kernel_000270eb: and dword [ebp-0x40],byte +0x0
pf_at 0x69d1
l_kernel_000270ef: and dword [ebp-0x3c],byte +0x0
pf_at 0x69d5
l_kernel_000270f3: and dword [ebp-0x38],byte +0x0
pf_at 0x69d9
l_kernel_000270f7: mov ecx,edi
pf_at 0x69db
l_kernel_000270f9: lea ebx,[ebp-0x34]
pf_at 0x69de
l_kernel_000270fc: mov edx,ebx
pf_at 0x69e0
l_kernel_000270fe: call 0x2715f
pf_at 0x69e5
l_kernel_00027103: test al,al
pf_at 0x69e7
l_kernel_00027105: jz short 0x2714b
pf_at 0x69e9
l_kernel_00027107: mov eax,ebx
pf_at 0x69eb
l_kernel_00027109: mov ebx,edi
pf_at 0x69ed
l_kernel_0002710b: mov ecx,[edi]
pf_at 0x69ef
l_kernel_0002710d: sub esp,byte +0x4
pf_at 0x69f2
l_kernel_00027110: mov edx,esi
pf_at 0x69f4
l_kernel_00027112: lea edi,[ebp-0x54]
pf_at 0x69f7
l_kernel_00027115: push edi
pf_at 0x69f8
l_kernel_00027116: push eax
pf_at 0x69f9
l_kernel_00027117: mov esi,[ebp-0x14]
pf_at 0x69fc
l_kernel_0002711a: push esi
pf_at 0x69fd
l_kernel_0002711b: call 0x2729c
pf_at 0x6a02
l_kernel_00027120: add esp,byte +0x10
pf_at 0x6a05
l_kernel_00027123: mov [ebp-0xd],al
pf_at 0x6a08
l_kernel_00027126: mov ecx,esi
pf_at 0x6a0a
l_kernel_00027128: call 0x24daf
pf_at 0x6a0f
l_kernel_0002712d: lea ecx,[ebp-0x34]
pf_at 0x6a12
l_kernel_00027130: call 0x24daf
pf_at 0x6a17
l_kernel_00027135: cmp byte [ebp-0xd],0x0
pf_at 0x6a1b
l_kernel_00027139: jz short 0x27153
pf_at 0x6a1d
l_kernel_0002713b: mov ecx,esi
pf_at 0x6a1f
l_kernel_0002713d: mov edx,edi
pf_at 0x6a21
l_kernel_0002713f: call 0x278d3
pf_at 0x6a26
l_kernel_00027144: mov edi,ebx
pf_at 0x6a28
l_kernel_00027146: jmp near 0x2705b
pf_at 0x6a2d
l_kernel_0002714b: mov ecx,[ebp-0x14]
pf_at 0x6a30
l_kernel_0002714e: call 0x24daf
pf_at 0x6a35
l_kernel_00027153: xor ebx,ebx
pf_at 0x6a37
l_kernel_00027155: mov eax,ebx
pf_at 0x6a39
l_kernel_00027157: add esp,byte +0x4c
pf_at 0x6a3c
l_kernel_0002715a: pop esi
pf_at 0x6a3d
l_kernel_0002715b: pop edi
pf_at 0x6a3e
l_kernel_0002715c: pop ebx
pf_at 0x6a3f
l_kernel_0002715d: pop ebp
pf_at 0x6a40
l_kernel_0002715e: ret
pf_at 0x6a41
l_kernel_0002715f: push ebp
pf_at 0x6a42
l_kernel_00027160: mov ebp,esp
pf_at 0x6a44
l_kernel_00027162: push ebx
pf_at 0x6a45
l_kernel_00027163: push edi
pf_at 0x6a46
l_kernel_00027164: push esi
pf_at 0x6a47
l_kernel_00027165: sub esp,byte +0x4c
pf_at 0x6a4a
l_kernel_00027168: mov esi,edx
pf_at 0x6a4c
l_kernel_0002716a: mov edi,ecx
pf_at 0x6a4e
l_kernel_0002716c: call 0x27923
pf_at 0x6a53
l_kernel_00027171: test al,al
pf_at 0x6a55
l_kernel_00027173: jz near 0x2728a
pf_at 0x6a5b
l_kernel_00027179: mov [ebp-0x14],esi
pf_at 0x6a5e
l_kernel_0002717c: mov ecx,[edi+0x4]
pf_at 0x6a61
l_kernel_0002717f: mov eax,[edi+0x8]
pf_at 0x6a64
l_kernel_00027182: mov dl,0x1
pf_at 0x6a66
l_kernel_00027184: mov [ebp-0x10],edx
pf_at 0x6a69
l_kernel_00027187: cmp eax,[ecx]
pf_at 0x6a6b
l_kernel_00027189: jnc near 0x27291
pf_at 0x6a71
l_kernel_0002718f: mov ecx,[ecx+0x8]
pf_at 0x6a74
l_kernel_00027192: mov ebx,[ecx+eax*4]
pf_at 0x6a77
l_kernel_00027195: sub esp,byte +0x8
pf_at 0x6a7a
l_kernel_00027198: push dword 0x2ce73
pf_at 0x6a7f
l_kernel_0002719d: push ebx
pf_at 0x6a80
l_kernel_0002719e: call 0x20cea
pf_at 0x6a85
l_kernel_000271a3: add esp,byte +0x10
pf_at 0x6a88
l_kernel_000271a6: test eax,eax
pf_at 0x6a8a
l_kernel_000271a8: jz short 0x271ed
pf_at 0x6a8c
l_kernel_000271aa: sub esp,byte +0x8
pf_at 0x6a8f
l_kernel_000271ad: push dword 0x2ce75
pf_at 0x6a94
l_kernel_000271b2: push ebx
pf_at 0x6a95
l_kernel_000271b3: call 0x20cea
pf_at 0x6a9a
l_kernel_000271b8: add esp,byte +0x10
pf_at 0x6a9d
l_kernel_000271bb: test eax,eax
pf_at 0x6a9f
l_kernel_000271bd: jz short 0x271ed
pf_at 0x6aa1
l_kernel_000271bf: sub esp,byte +0x8
pf_at 0x6aa4
l_kernel_000271c2: push dword 0x2ce77
pf_at 0x6aa9
l_kernel_000271c7: push ebx
pf_at 0x6aaa
l_kernel_000271c8: call 0x20cea
pf_at 0x6aaf
l_kernel_000271cd: add esp,byte +0x10
pf_at 0x6ab2
l_kernel_000271d0: test eax,eax
pf_at 0x6ab4
l_kernel_000271d2: jz short 0x271ed
pf_at 0x6ab6
l_kernel_000271d4: sub esp,byte +0x8
pf_at 0x6ab9
l_kernel_000271d7: push dword 0x2ce7a
pf_at 0x6abe
l_kernel_000271dc: push ebx
pf_at 0x6abf
l_kernel_000271dd: call 0x20cea
pf_at 0x6ac4
l_kernel_000271e2: add esp,byte +0x10
pf_at 0x6ac7
l_kernel_000271e5: test eax,eax
pf_at 0x6ac9
l_kernel_000271e7: jnz near 0x27291
pf_at 0x6acf
l_kernel_000271ed: inc dword [edi+0x8]
pf_at 0x6ad2
l_kernel_000271f0: and dword [ebp-0x54],byte +0x0
pf_at 0x6ad6
l_kernel_000271f4: and dword [ebp-0x50],byte +0x0
pf_at 0x6ada
l_kernel_000271f8: and dword [ebp-0x4c],byte +0x0
pf_at 0x6ade
l_kernel_000271fc: and dword [ebp-0x48],byte +0x0
pf_at 0x6ae2
l_kernel_00027200: and dword [ebp-0x44],byte +0x0
pf_at 0x6ae6
l_kernel_00027204: and dword [ebp-0x40],byte +0x0
pf_at 0x6aea
l_kernel_00027208: and dword [ebp-0x3c],byte +0x0
pf_at 0x6aee
l_kernel_0002720c: and dword [ebp-0x38],byte +0x0
pf_at 0x6af2
l_kernel_00027210: and dword [ebp-0x34],byte +0x0
pf_at 0x6af6
l_kernel_00027214: and dword [ebp-0x30],byte +0x0
pf_at 0x6afa
l_kernel_00027218: and dword [ebp-0x2c],byte +0x0
pf_at 0x6afe
l_kernel_0002721c: and dword [ebp-0x28],byte +0x0
pf_at 0x6b02
l_kernel_00027220: and dword [ebp-0x24],byte +0x0
pf_at 0x6b06
l_kernel_00027224: and dword [ebp-0x20],byte +0x0
pf_at 0x6b0a
l_kernel_00027228: and dword [ebp-0x1c],byte +0x0
pf_at 0x6b0e
l_kernel_0002722c: and dword [ebp-0x18],byte +0x0
pf_at 0x6b12
l_kernel_00027230: mov ecx,edi
pf_at 0x6b14
l_kernel_00027232: lea esi,[ebp-0x54]
pf_at 0x6b17
l_kernel_00027235: mov edx,esi
pf_at 0x6b19
l_kernel_00027237: call 0x27923
pf_at 0x6b1e
l_kernel_0002723c: test al,al
pf_at 0x6b20
l_kernel_0002723e: jz short 0x27282
pf_at 0x6b22
l_kernel_00027240: mov edx,ebx
pf_at 0x6b24
l_kernel_00027242: mov ebx,edi
pf_at 0x6b26
l_kernel_00027244: mov ecx,[edi]
pf_at 0x6b28
l_kernel_00027246: sub esp,byte +0x4
pf_at 0x6b2b
l_kernel_00027249: lea eax,[ebp-0x34]
pf_at 0x6b2e
l_kernel_0002724c: push eax
pf_at 0x6b2f
l_kernel_0002724d: push esi
pf_at 0x6b30
l_kernel_0002724e: mov edi,[ebp-0x14]
pf_at 0x6b33
l_kernel_00027251: push edi
pf_at 0x6b34
l_kernel_00027252: call 0x2729c
pf_at 0x6b39
l_kernel_00027257: add esp,byte +0x10
pf_at 0x6b3c
l_kernel_0002725a: mov [ebp-0x10],al
pf_at 0x6b3f
l_kernel_0002725d: mov ecx,edi
pf_at 0x6b41
l_kernel_0002725f: call 0x24daf
pf_at 0x6b46
l_kernel_00027264: mov ecx,esi
pf_at 0x6b48
l_kernel_00027266: call 0x24daf
pf_at 0x6b4d
l_kernel_0002726b: cmp byte [ebp-0x10],0x0
pf_at 0x6b51
l_kernel_0002726f: jz short 0x2728a
pf_at 0x6b53
l_kernel_00027271: mov ecx,edi
pf_at 0x6b55
l_kernel_00027273: lea edx,[ebp-0x34]
pf_at 0x6b58
l_kernel_00027276: call 0x278d3
pf_at 0x6b5d
l_kernel_0002727b: mov edi,ebx
pf_at 0x6b5f
l_kernel_0002727d: jmp near 0x2717c
pf_at 0x6b64
l_kernel_00027282: mov ecx,[ebp-0x14]
pf_at 0x6b67
l_kernel_00027285: call 0x24daf
pf_at 0x6b6c
l_kernel_0002728a: mov dword [ebp-0x10],0x0
pf_at 0x6b73
l_kernel_00027291: mov eax,[ebp-0x10]
pf_at 0x6b76
l_kernel_00027294: add esp,byte +0x4c
pf_at 0x6b79
l_kernel_00027297: pop esi
pf_at 0x6b7a
l_kernel_00027298: pop edi
pf_at 0x6b7b
l_kernel_00027299: pop ebx
pf_at 0x6b7c
l_kernel_0002729a: pop ebp
pf_at 0x6b7d
l_kernel_0002729b: ret
pf_at 0x6b7e
l_kernel_0002729c: push ebp
pf_at 0x6b7f
l_kernel_0002729d: mov ebp,esp
pf_at 0x6b81
l_kernel_0002729f: push ebx
pf_at 0x6b82
l_kernel_000272a0: push edi
pf_at 0x6b83
l_kernel_000272a1: push esi
pf_at 0x6b84
l_kernel_000272a2: sub esp,byte +0x3c
pf_at 0x6b87
l_kernel_000272a5: mov ebx,ecx
pf_at 0x6b89
l_kernel_000272a7: mov edi,[ebp+0x8]
pf_at 0x6b8c
l_kernel_000272aa: test edi,edi
pf_at 0x6b8e
l_kernel_000272ac: setz al
pf_at 0x6b91
l_kernel_000272af: cmp dword [ebp+0xc],byte +0x0
pf_at 0x6b95
l_kernel_000272b3: setz cl
pf_at 0x6b98
l_kernel_000272b6: or cl,al
pf_at 0x6b9a
l_kernel_000272b8: cmp dword [ebp+0x10],byte +0x0
pf_at 0x6b9e
l_kernel_000272bc: setz al
pf_at 0x6ba1
l_kernel_000272bf: or al,cl
pf_at 0x6ba3
l_kernel_000272c1: jnz near 0x276c9
pf_at 0x6ba9
l_kernel_000272c7: mov esi,edx
pf_at 0x6bab
l_kernel_000272c9: mov [esp],edx
pf_at 0x6bae
l_kernel_000272cc: mov dword [esp+0x4],0x2ce7d
pf_at 0x6bb6
l_kernel_000272d4: call 0x20cea
pf_at 0x6bbb
l_kernel_000272d9: test eax,eax
pf_at 0x6bbd
l_kernel_000272db: jz near 0x274fa
pf_at 0x6bc3
l_kernel_000272e1: mov [esp],esi
pf_at 0x6bc6
l_kernel_000272e4: mov dword [esp+0x4],0x2ce7f
pf_at 0x6bce
l_kernel_000272ec: call 0x20cea
pf_at 0x6bd3
l_kernel_000272f1: test eax,eax
pf_at 0x6bd5
l_kernel_000272f3: jz near 0x27401
pf_at 0x6bdb
l_kernel_000272f9: mov [esp],esi
pf_at 0x6bde
l_kernel_000272fc: mov dword [esp+0x4],0x2ce81
pf_at 0x6be6
l_kernel_00027304: call 0x20cea
pf_at 0x6beb
l_kernel_00027309: test eax,eax
pf_at 0x6bed
l_kernel_0002730b: jz near 0x27401
pf_at 0x6bf3
l_kernel_00027311: mov [esp],esi
pf_at 0x6bf6
l_kernel_00027314: mov dword [esp+0x4],0x2ce83
pf_at 0x6bfe
l_kernel_0002731c: call 0x20cea
pf_at 0x6c03
l_kernel_00027321: test eax,eax
pf_at 0x6c05
l_kernel_00027323: jz near 0x27401
pf_at 0x6c0b
l_kernel_00027329: mov [esp],esi
pf_at 0x6c0e
l_kernel_0002732c: mov dword [esp+0x4],0x2ce85
pf_at 0x6c16
l_kernel_00027334: call 0x20cea
pf_at 0x6c1b
l_kernel_00027339: test eax,eax
pf_at 0x6c1d
l_kernel_0002733b: jz near 0x27401
pf_at 0x6c23
l_kernel_00027341: mov [esp],esi
pf_at 0x6c26
l_kernel_00027344: mov dword [esp+0x4],0x2ce6a
pf_at 0x6c2e
l_kernel_0002734c: call 0x20cea
pf_at 0x6c33
l_kernel_00027351: test eax,eax
pf_at 0x6c35
l_kernel_00027353: jz near 0x27680
pf_at 0x6c3b
l_kernel_00027359: mov [esp],esi
pf_at 0x6c3e
l_kernel_0002735c: mov dword [esp+0x4],0x2ce6d
pf_at 0x6c46
l_kernel_00027364: call 0x20cea
pf_at 0x6c4b
l_kernel_00027369: test eax,eax
pf_at 0x6c4d
l_kernel_0002736b: jz near 0x27680
pf_at 0x6c53
l_kernel_00027371: mov [esp],esi
pf_at 0x6c56
l_kernel_00027374: mov dword [esp+0x4],0x2ce70
pf_at 0x6c5e
l_kernel_0002737c: call 0x20cea
pf_at 0x6c63
l_kernel_00027381: test eax,eax
pf_at 0x6c65
l_kernel_00027383: jz near 0x27680
pf_at 0x6c6b
l_kernel_00027389: mov [esp],esi
pf_at 0x6c6e
l_kernel_0002738c: mov dword [esp+0x4],0x2ce73
pf_at 0x6c76
l_kernel_00027394: call 0x20cea
pf_at 0x6c7b
l_kernel_00027399: test eax,eax
pf_at 0x6c7d
l_kernel_0002739b: jz near 0x27757
pf_at 0x6c83
l_kernel_000273a1: mov [esp],esi
pf_at 0x6c86
l_kernel_000273a4: mov dword [esp+0x4],0x2ce75
pf_at 0x6c8e
l_kernel_000273ac: call 0x20cea
pf_at 0x6c93
l_kernel_000273b1: test eax,eax
pf_at 0x6c95
l_kernel_000273b3: jz near 0x27757
pf_at 0x6c9b
l_kernel_000273b9: mov [esp],esi
pf_at 0x6c9e
l_kernel_000273bc: mov dword [esp+0x4],0x2ce77
pf_at 0x6ca6
l_kernel_000273c4: call 0x20cea
pf_at 0x6cab
l_kernel_000273c9: test eax,eax
pf_at 0x6cad
l_kernel_000273cb: jz near 0x27757
pf_at 0x6cb3
l_kernel_000273d1: mov [esp],esi
pf_at 0x6cb6
l_kernel_000273d4: mov dword [esp+0x4],0x2ce7a
pf_at 0x6cbe
l_kernel_000273dc: call 0x20cea
pf_at 0x6cc3
l_kernel_000273e1: test eax,eax
pf_at 0x6cc5
l_kernel_000273e3: jz near 0x27757
pf_at 0x6ccb
l_kernel_000273e9: mov [esp+0xc],esi
pf_at 0x6ccf
l_kernel_000273ed: mov [esp+0x4],esi
pf_at 0x6cd3
l_kernel_000273f1: mov [esp],ebx
pf_at 0x6cd6
l_kernel_000273f4: mov dword [esp+0x8],0x2deff
pf_at 0x6cde
l_kernel_000273fc: jmp near 0x276c4
pf_at 0x6ce3
l_kernel_00027401: mov ecx,[edi]
pf_at 0x6ce5
l_kernel_00027403: cmp ecx,byte +0x5
pf_at 0x6ce8
l_kernel_00027406: ja near 0x275ce
pf_at 0x6cee
l_kernel_0002740c: push byte +0x26
pf_at 0x6cf0
l_kernel_0002740e: pop eax
pf_at 0x6cf1
l_kernel_0002740f: bt eax,ecx
pf_at 0x6cf4
l_kernel_00027412: jnc near 0x275ce
pf_at 0x6cfa
l_kernel_00027418: mov ecx,[ebp+0xc]
pf_at 0x6cfd
l_kernel_0002741b: mov ecx,[ecx]
pf_at 0x6cff
l_kernel_0002741d: cmp ecx,byte +0x5
pf_at 0x6d02
l_kernel_00027420: ja near 0x275ce
pf_at 0x6d08
l_kernel_00027426: bt eax,ecx
pf_at 0x6d0b
l_kernel_00027429: jnc near 0x275ce
pf_at 0x6d11
l_kernel_0002742f: mov ecx,edi
pf_at 0x6d13
l_kernel_00027431: call 0x2c1d8
pf_at 0x6d18
l_kernel_00027436: fstp dword [ebp-0x18]
pf_at 0x6d1b
l_kernel_00027439: mov ecx,[ebp+0xc]
pf_at 0x6d1e
l_kernel_0002743c: call 0x2c1d8
pf_at 0x6d23
l_kernel_00027441: fstp dword [ebp-0x10]
pf_at 0x6d26
l_kernel_00027444: mov [esp],esi
pf_at 0x6d29
l_kernel_00027447: mov dword [esp+0x4],0x2ce83
pf_at 0x6d31
l_kernel_0002744f: call 0x20cea
pf_at 0x6d36
l_kernel_00027454: test eax,eax
pf_at 0x6d38
l_kernel_00027456: jz near 0x27610
pf_at 0x6d3e
l_kernel_0002745c: mov [esp],esi
pf_at 0x6d41
l_kernel_0002745f: mov dword [esp+0x4],0x2ce85
pf_at 0x6d49
l_kernel_00027467: call 0x20cea
pf_at 0x6d4e
l_kernel_0002746c: test eax,eax
pf_at 0x6d50
l_kernel_0002746e: setz al
pf_at 0x6d53
l_kernel_00027471: fldz
pf_at 0x6d55
l_kernel_00027473: fld dword [ebp-0x10]
pf_at 0x6d58
l_kernel_00027476: fucomip st1
pf_at 0x6d5a
l_kernel_00027478: fstp st0
pf_at 0x6d5c
l_kernel_0002747a: setpo cl
pf_at 0x6d5f
l_kernel_0002747d: setz dl
pf_at 0x6d62
l_kernel_00027480: and dl,cl
pf_at 0x6d64
l_kernel_00027482: test al,dl
pf_at 0x6d66
l_kernel_00027484: jnz near 0x27625
pf_at 0x6d6c
l_kernel_0002748a: cmp dword [edi],byte +0x2
pf_at 0x6d6f
l_kernel_0002748d: jz short 0x2749b
pf_at 0x6d71
l_kernel_0002748f: mov eax,[ebp+0xc]
pf_at 0x6d74
l_kernel_00027492: cmp dword [eax],byte +0x2
pf_at 0x6d77
l_kernel_00027495: jnz near 0x276e0
pf_at 0x6d7d
l_kernel_0002749b: mov [esp],esi
pf_at 0x6d80
l_kernel_0002749e: mov dword [esp+0x4],0x2ce7f
pf_at 0x6d88
l_kernel_000274a6: call 0x20cea
pf_at 0x6d8d
l_kernel_000274ab: test eax,eax
pf_at 0x6d8f
l_kernel_000274ad: jz near 0x276d3
pf_at 0x6d95
l_kernel_000274b3: mov [esp],esi
pf_at 0x6d98
l_kernel_000274b6: mov dword [esp+0x4],0x2ce81
pf_at 0x6da0
l_kernel_000274be: call 0x20cea
pf_at 0x6da5
l_kernel_000274c3: test eax,eax
pf_at 0x6da7
l_kernel_000274c5: jz near 0x2774d
pf_at 0x6dad
l_kernel_000274cb: mov [esp],esi
pf_at 0x6db0
l_kernel_000274ce: mov dword [esp+0x4],0x2ce83
pf_at 0x6db8
l_kernel_000274d6: call 0x20cea
pf_at 0x6dbd
l_kernel_000274db: test eax,eax
pf_at 0x6dbf
l_kernel_000274dd: jz near 0x277b4
pf_at 0x6dc5
l_kernel_000274e3: fld dword [ebp-0x10]
pf_at 0x6dc8
l_kernel_000274e6: fstp dword [esp+0x4]
pf_at 0x6dcc
l_kernel_000274ea: fld dword [ebp-0x18]
pf_at 0x6dcf
l_kernel_000274ed: fstp dword [esp]
pf_at 0x6dd2
l_kernel_000274f0: call 0x2109b
pf_at 0x6dd7
l_kernel_000274f5: jmp near 0x277bc
pf_at 0x6ddc
l_kernel_000274fa: mov eax,[edi]
pf_at 0x6dde
l_kernel_000274fc: cmp eax,byte +0x3
pf_at 0x6de1
l_kernel_000274ff: jz short 0x2750f
pf_at 0x6de3
l_kernel_00027501: mov ecx,[ebp+0xc]
pf_at 0x6de6
l_kernel_00027504: mov ecx,[ecx]
pf_at 0x6de8
l_kernel_00027506: cmp ecx,byte +0x3
pf_at 0x6deb
l_kernel_00027509: jnz near 0x27639
pf_at 0x6df1
l_kernel_0002750f: lea edx,[ebp-0x38]
pf_at 0x6df4
l_kernel_00027512: and dword [edx],byte +0x0
pf_at 0x6df7
l_kernel_00027515: and dword [ebp-0x14],byte +0x0
pf_at 0x6dfb
l_kernel_00027519: mov ecx,edi
pf_at 0x6dfd
l_kernel_0002751b: call 0x2b32b
pf_at 0x6e02
l_kernel_00027520: test al,al
pf_at 0x6e04
l_kernel_00027522: jz near 0x275e6
pf_at 0x6e0a
l_kernel_00027528: lea edx,[ebp-0x14]
pf_at 0x6e0d
l_kernel_0002752b: mov ecx,[ebp+0xc]
pf_at 0x6e10
l_kernel_0002752e: call 0x2b32b
pf_at 0x6e15
l_kernel_00027533: test al,al
pf_at 0x6e17
l_kernel_00027535: jz near 0x275e6
pf_at 0x6e1d
l_kernel_0002753b: mov eax,[ebp-0x38]
pf_at 0x6e20
l_kernel_0002753e: mov [esp],eax
pf_at 0x6e23
l_kernel_00027541: call 0x20ccf
pf_at 0x6e28
l_kernel_00027546: mov edi,eax
pf_at 0x6e2a
l_kernel_00027548: mov eax,[ebp-0x14]
pf_at 0x6e2d
l_kernel_0002754b: mov [esp],eax
pf_at 0x6e30
l_kernel_0002754e: call 0x20ccf
pf_at 0x6e35
l_kernel_00027553: mov [ebp-0x10],edi
pf_at 0x6e38
l_kernel_00027556: lea ecx,[eax+edi]
pf_at 0x6e3b
l_kernel_00027559: inc ecx
pf_at 0x6e3c
l_kernel_0002755a: mov edi,eax
pf_at 0x6e3e
l_kernel_0002755c: mov [esp],ecx
pf_at 0x6e41
l_kernel_0002755f: call 0x20ae5
pf_at 0x6e46
l_kernel_00027564: mov ecx,[ebp-0x38]
pf_at 0x6e49
l_kernel_00027567: test eax,eax
pf_at 0x6e4b
l_kernel_00027569: jz near 0x27745
pf_at 0x6e51
l_kernel_0002756f: inc edi
pf_at 0x6e52
l_kernel_00027570: mov esi,[ebp-0x10]
pf_at 0x6e55
l_kernel_00027573: mov [esp+0x8],esi
pf_at 0x6e59
l_kernel_00027577: mov [esp+0x4],ecx
pf_at 0x6e5d
l_kernel_0002757b: mov [esp],eax
pf_at 0x6e60
l_kernel_0002757e: mov ebx,eax
pf_at 0x6e62
l_kernel_00027580: call 0x20c1d
pf_at 0x6e67
l_kernel_00027585: mov eax,ebx
pf_at 0x6e69
l_kernel_00027587: add eax,esi
pf_at 0x6e6b
l_kernel_00027589: mov ecx,[ebp-0x14]
pf_at 0x6e6e
l_kernel_0002758c: mov [esp+0x8],edi
pf_at 0x6e72
l_kernel_00027590: mov [esp+0x4],ecx
pf_at 0x6e76
l_kernel_00027594: mov [esp],eax
pf_at 0x6e79
l_kernel_00027597: call 0x20c1d
pf_at 0x6e7e
l_kernel_0002759c: mov esi,[ebp+0x10]
pf_at 0x6e81
l_kernel_0002759f: mov ecx,esi
pf_at 0x6e83
l_kernel_000275a1: call 0x24daf
pf_at 0x6e88
l_kernel_000275a6: mov dword [esi],0x3
pf_at 0x6e8e
l_kernel_000275ac: and dword [esi+0x4],byte +0x0
pf_at 0x6e92
l_kernel_000275b0: mov [esi+0xc],ebx
pf_at 0x6e95
l_kernel_000275b3: mov eax,[ebp-0x38]
pf_at 0x6e98
l_kernel_000275b6: mov [esp],eax
pf_at 0x6e9b
l_kernel_000275b9: call 0x20aee
pf_at 0x6ea0
l_kernel_000275be: mov eax,[ebp-0x14]
pf_at 0x6ea3
l_kernel_000275c1: mov [esp],eax
pf_at 0x6ea6
l_kernel_000275c4: call 0x20aee
pf_at 0x6eab
l_kernel_000275c9: jmp near 0x277f2
pf_at 0x6eb0
l_kernel_000275ce: mov [esp+0xc],esi
pf_at 0x6eb4
l_kernel_000275d2: mov [esp+0x4],esi
pf_at 0x6eb8
l_kernel_000275d6: mov [esp],ebx
pf_at 0x6ebb
l_kernel_000275d9: mov dword [esp+0x8],0x2dea1
pf_at 0x6ec3
l_kernel_000275e1: jmp near 0x276c4
pf_at 0x6ec8
l_kernel_000275e6: mov eax,[ebp-0x38]
pf_at 0x6ecb
l_kernel_000275e9: mov [esp],eax
pf_at 0x6ece
l_kernel_000275ec: call 0x20aee
pf_at 0x6ed3
l_kernel_000275f1: mov eax,[ebp-0x14]
pf_at 0x6ed6
l_kernel_000275f4: mov [esp],eax
pf_at 0x6ed9
l_kernel_000275f7: call 0x20aee
pf_at 0x6ede
l_kernel_000275fc: mov [esp+0x4],esi
pf_at 0x6ee2
l_kernel_00027600: mov [esp],ebx
pf_at 0x6ee5
l_kernel_00027603: mov dword [esp+0x8],0x2de4f
pf_at 0x6eed
l_kernel_0002760b: jmp near 0x276c4
pf_at 0x6ef2
l_kernel_00027610: fldz
pf_at 0x6ef4
l_kernel_00027612: fld dword [ebp-0x10]
pf_at 0x6ef7
l_kernel_00027615: fucomip st1
pf_at 0x6ef9
l_kernel_00027617: fstp st0
pf_at 0x6efb
l_kernel_00027619: jnz near 0x2748a
pf_at 0x6f01
l_kernel_0002761f: jpe near 0x2748a
pf_at 0x6f07
l_kernel_00027625: mov [esp+0x4],esi
pf_at 0x6f0b
l_kernel_00027629: mov [esp],ebx
pf_at 0x6f0e
l_kernel_0002762c: mov dword [esp+0x8],0x2dec6
pf_at 0x6f16
l_kernel_00027634: jmp near 0x276c4
pf_at 0x6f1b
l_kernel_00027639: cmp eax,byte +0x5
pf_at 0x6f1e
l_kernel_0002763c: ja short 0x276b5
pf_at 0x6f20
l_kernel_0002763e: push byte +0x26
pf_at 0x6f22
l_kernel_00027640: pop edx
pf_at 0x6f23
l_kernel_00027641: bt edx,eax
pf_at 0x6f26
l_kernel_00027644: jnc short 0x276b5
pf_at 0x6f28
l_kernel_00027646: cmp ecx,byte +0x5
pf_at 0x6f2b
l_kernel_00027649: ja short 0x276b5
pf_at 0x6f2d
l_kernel_0002764b: bt edx,ecx
pf_at 0x6f30
l_kernel_0002764e: jnc short 0x276b5
pf_at 0x6f32
l_kernel_00027650: cmp eax,byte +0x2
pf_at 0x6f35
l_kernel_00027653: setnz al
pf_at 0x6f38
l_kernel_00027656: cmp ecx,byte +0x2
pf_at 0x6f3b
l_kernel_00027659: setnz cl
pf_at 0x6f3e
l_kernel_0002765c: test al,cl
pf_at 0x6f40
l_kernel_0002765e: jnz near 0x27737
pf_at 0x6f46
l_kernel_00027664: mov ecx,edi
pf_at 0x6f48
l_kernel_00027666: call 0x2c1d8
pf_at 0x6f4d
l_kernel_0002766b: fstp dword [ebp-0x10]
pf_at 0x6f50
l_kernel_0002766e: mov ecx,[ebp+0xc]
pf_at 0x6f53
l_kernel_00027671: call 0x2c1d8
pf_at 0x6f58
l_kernel_00027676: fld dword [ebp-0x10]
pf_at 0x6f5b
l_kernel_00027679: faddp st1
pf_at 0x6f5d
l_kernel_0002767b: jmp near 0x277bc
pf_at 0x6f62
l_kernel_00027680: mov ecx,edi
pf_at 0x6f64
l_kernel_00027682: mov edx,[ebp+0xc]
pf_at 0x6f67
l_kernel_00027685: call 0x2bab4
pf_at 0x6f6c
l_kernel_0002768a: mov ebx,eax
pf_at 0x6f6e
l_kernel_0002768c: mov [esp],esi
pf_at 0x6f71
l_kernel_0002768f: mov dword [esp+0x4],0x2ce6a
pf_at 0x6f79
l_kernel_00027697: call 0x20cea
pf_at 0x6f7e
l_kernel_0002769c: test eax,eax
pf_at 0x6f80
l_kernel_0002769e: setnz al
pf_at 0x6f83
l_kernel_000276a1: xor al,bl
pf_at 0x6f85
l_kernel_000276a3: movzx edx,al
pf_at 0x6f88
l_kernel_000276a6: lea esi,[ebp-0x38]
pf_at 0x6f8b
l_kernel_000276a9: mov ecx,esi
pf_at 0x6f8d
l_kernel_000276ab: call 0x27014
pf_at 0x6f92
l_kernel_000276b0: jmp near 0x277ea
pf_at 0x6f97
l_kernel_000276b5: mov [esp+0x4],esi
pf_at 0x6f9b
l_kernel_000276b9: mov [esp],ebx
pf_at 0x6f9e
l_kernel_000276bc: mov dword [esp+0x8],0x2de79
pf_at 0x6fa6
l_kernel_000276c4: call 0x2609c
pf_at 0x6fab
l_kernel_000276c9: xor eax,eax
pf_at 0x6fad
l_kernel_000276cb: add esp,byte +0x3c
pf_at 0x6fb0
l_kernel_000276ce: pop esi
pf_at 0x6fb1
l_kernel_000276cf: pop edi
pf_at 0x6fb2
l_kernel_000276d0: pop ebx
pf_at 0x6fb3
l_kernel_000276d1: pop ebp
pf_at 0x6fb4
l_kernel_000276d2: ret
pf_at 0x6fb5
l_kernel_000276d3: fld dword [ebp-0x18]
pf_at 0x6fb8
l_kernel_000276d6: fld dword [ebp-0x10]
pf_at 0x6fbb
l_kernel_000276d9: fsubp st1
pf_at 0x6fbd
l_kernel_000276db: jmp near 0x277bc
pf_at 0x6fc2
l_kernel_000276e0: mov [esp],esi
pf_at 0x6fc5
l_kernel_000276e3: mov dword [esp+0x4],0x2ce7f
pf_at 0x6fcd
l_kernel_000276eb: call 0x20cea
pf_at 0x6fd2
l_kernel_000276f0: test eax,eax
pf_at 0x6fd4
l_kernel_000276f2: jz near 0x277cb
pf_at 0x6fda
l_kernel_000276f8: mov [esp],esi
pf_at 0x6fdd
l_kernel_000276fb: mov dword [esp+0x4],0x2ce81
pf_at 0x6fe5
l_kernel_00027703: call 0x20cea
pf_at 0x6fea
l_kernel_00027708: test eax,eax
pf_at 0x6fec
l_kernel_0002770a: jz near 0x277d6
pf_at 0x6ff2
l_kernel_00027710: mov [esp],esi
pf_at 0x6ff5
l_kernel_00027713: mov dword [esp+0x4],0x2ce83
pf_at 0x6ffd
l_kernel_0002771b: call 0x20cea
pf_at 0x7002
l_kernel_00027720: test eax,eax
pf_at 0x7004
l_kernel_00027722: jz near 0x277f9
pf_at 0x700a
l_kernel_00027728: mov eax,[edi+0x4]
pf_at 0x700d
l_kernel_0002772b: cdq
pf_at 0x700e
l_kernel_0002772c: mov ecx,[ebp+0xc]
pf_at 0x7011
l_kernel_0002772f: idiv dword [ecx+0x4]
pf_at 0x7014
l_kernel_00027732: jmp near 0x277e0
pf_at 0x7019
l_kernel_00027737: mov eax,[ebp+0xc]
pf_at 0x701c
l_kernel_0002773a: mov edx,[eax+0x4]
pf_at 0x701f
l_kernel_0002773d: add edx,[edi+0x4]
pf_at 0x7022
l_kernel_00027740: jmp near 0x277e0
pf_at 0x7027
l_kernel_00027745: mov [esp],ecx
pf_at 0x702a
l_kernel_00027748: jmp near 0x275ec
pf_at 0x702f
l_kernel_0002774d: fld dword [ebp-0x18]
pf_at 0x7032
l_kernel_00027750: fld dword [ebp-0x10]
pf_at 0x7035
l_kernel_00027753: fmulp st1
pf_at 0x7037
l_kernel_00027755: jmp short 0x277bc
pf_at 0x7039
l_kernel_00027757: mov eax,[edi]
pf_at 0x703b
l_kernel_00027759: lea ecx,[eax-0x1]
pf_at 0x703e
l_kernel_0002775c: cmp ecx,byte +0x2
pf_at 0x7041
l_kernel_0002775f: mov edx,[ebp+0xc]
pf_at 0x7044
l_kernel_00027762: jc short 0x27776
pf_at 0x7046
l_kernel_00027764: cmp eax,byte +0x3
pf_at 0x7049
l_kernel_00027767: jz near 0x27819
pf_at 0x704f
l_kernel_0002776d: cmp eax,byte +0x5
pf_at 0x7052
l_kernel_00027770: jnz near 0x278a3
pf_at 0x7058
l_kernel_00027776: mov ecx,[edx]
pf_at 0x705a
l_kernel_00027778: cmp ecx,byte +0x5
pf_at 0x705d
l_kernel_0002777b: ja near 0x2781d
pf_at 0x7063
l_kernel_00027781: push byte +0x26
pf_at 0x7065
l_kernel_00027783: pop edx
pf_at 0x7066
l_kernel_00027784: bt edx,ecx
pf_at 0x7069
l_kernel_00027787: jnc near 0x2781d
pf_at 0x706f
l_kernel_0002778d: mov ecx,edi
pf_at 0x7071
l_kernel_0002778f: call 0x2c1d8
pf_at 0x7076
l_kernel_00027794: fstp dword [ebp-0x10]
pf_at 0x7079
l_kernel_00027797: mov ecx,[ebp+0xc]
pf_at 0x707c
l_kernel_0002779a: call 0x2c1d8
pf_at 0x7081
l_kernel_0002779f: fld dword [ebp-0x10]
pf_at 0x7084
l_kernel_000277a2: fxch st1
pf_at 0x7086
l_kernel_000277a4: fucomi st1
pf_at 0x7088
l_kernel_000277a6: jna short 0x2780c
pf_at 0x708a
l_kernel_000277a8: fstp st0
pf_at 0x708c
l_kernel_000277aa: fstp st0
pf_at 0x708e
l_kernel_000277ac: xor ebx,ebx
pf_at 0x7090
l_kernel_000277ae: dec ebx
pf_at 0x7091
l_kernel_000277af: jmp near 0x27858
pf_at 0x7096
l_kernel_000277b4: fld dword [ebp-0x18]
pf_at 0x7099
l_kernel_000277b7: fld dword [ebp-0x10]
pf_at 0x709c
l_kernel_000277ba: fdivp st1
pf_at 0x709e
l_kernel_000277bc: fstp dword [esp]
pf_at 0x70a1
l_kernel_000277bf: lea esi,[ebp-0x38]
pf_at 0x70a4
l_kernel_000277c2: mov ecx,esi
pf_at 0x70a6
l_kernel_000277c4: call 0x24f15
pf_at 0x70ab
l_kernel_000277c9: jmp short 0x277ea
pf_at 0x70ad
l_kernel_000277cb: mov edx,[edi+0x4]
pf_at 0x70b0
l_kernel_000277ce: mov eax,[ebp+0xc]
pf_at 0x70b3
l_kernel_000277d1: sub edx,[eax+0x4]
pf_at 0x70b6
l_kernel_000277d4: jmp short 0x277e0
pf_at 0x70b8
l_kernel_000277d6: mov eax,[ebp+0xc]
pf_at 0x70bb
l_kernel_000277d9: mov edx,[eax+0x4]
pf_at 0x70be
l_kernel_000277dc: imul edx,[edi+0x4]
pf_at 0x70c2
l_kernel_000277e0: lea esi,[ebp-0x38]
pf_at 0x70c5
l_kernel_000277e3: mov ecx,esi
pf_at 0x70c7
l_kernel_000277e5: call 0x28508
pf_at 0x70cc
l_kernel_000277ea: push byte +0x8
pf_at 0x70ce
l_kernel_000277ec: pop ecx
pf_at 0x70cf
l_kernel_000277ed: mov edi,[ebp+0x10]
pf_at 0x70d2
l_kernel_000277f0: rep movsd
pf_at 0x70d4
l_kernel_000277f2: mov al,0x1
pf_at 0x70d6
l_kernel_000277f4: jmp near 0x276cb
pf_at 0x70db
l_kernel_000277f9: mov eax,[edi+0x4]
pf_at 0x70de
l_kernel_000277fc: cdq
pf_at 0x70df
l_kernel_000277fd: mov ecx,[ebp+0xc]
pf_at 0x70e2
l_kernel_00027800: idiv dword [ecx+0x4]
pf_at 0x70e5
l_kernel_00027803: lea esi,[ebp-0x38]
pf_at 0x70e8
l_kernel_00027806: mov ecx,esi
pf_at 0x70ea
l_kernel_00027808: mov edx,eax
pf_at 0x70ec
l_kernel_0002780a: jmp short 0x277e5
pf_at 0x70ee
l_kernel_0002780c: xor ebx,ebx
pf_at 0x70f0
l_kernel_0002780e: fxch st1
pf_at 0x70f2
l_kernel_00027810: fucomip st1
pf_at 0x70f4
l_kernel_00027812: fstp st0
pf_at 0x70f6
l_kernel_00027814: seta bl
pf_at 0x70f9
l_kernel_00027817: jmp short 0x27858
pf_at 0x70fb
l_kernel_00027819: mov ecx,[edx]
pf_at 0x70fd
l_kernel_0002781b: jmp short 0x27825
pf_at 0x70ff
l_kernel_0002781d: cmp eax,byte +0x3
pf_at 0x7102
l_kernel_00027820: mov edx,[ebp+0xc]
pf_at 0x7105
l_kernel_00027823: jnz short 0x278a3
pf_at 0x7107
l_kernel_00027825: cmp ecx,byte +0x3
pf_at 0x710a
l_kernel_00027828: jnz short 0x278a3
pf_at 0x710c
l_kernel_0002782a: mov eax,[edi+0xc]
pf_at 0x710f
l_kernel_0002782d: test eax,eax
pf_at 0x7111
l_kernel_0002782f: mov ecx,0x2ca9c
pf_at 0x7116
l_kernel_00027834: cmovz eax,ecx
pf_at 0x7119
l_kernel_00027837: mov edx,[edx+0xc]
pf_at 0x711c
l_kernel_0002783a: test edx,edx
pf_at 0x711e
l_kernel_0002783c: cmovz edx,ecx
pf_at 0x7121
l_kernel_0002783f: mov [esp+0x4],edx
pf_at 0x7125
l_kernel_00027843: mov [esp],eax
pf_at 0x7128
l_kernel_00027846: call 0x20cea
pf_at 0x712d
l_kernel_0002784b: xor ecx,ecx
pf_at 0x712f
l_kernel_0002784d: dec ecx
pf_at 0x7130
l_kernel_0002784e: xor ebx,ebx
pf_at 0x7132
l_kernel_00027850: test eax,eax
pf_at 0x7134
l_kernel_00027852: setnz bl
pf_at 0x7137
l_kernel_00027855: cmovs ebx,ecx
pf_at 0x713a
l_kernel_00027858: mov [esp],esi
pf_at 0x713d
l_kernel_0002785b: mov dword [esp+0x4],0x2ce73
pf_at 0x7145
l_kernel_00027863: call 0x20cea
pf_at 0x714a
l_kernel_00027868: test eax,eax
pf_at 0x714c
l_kernel_0002786a: jz short 0x27896
pf_at 0x714e
l_kernel_0002786c: mov [esp],esi
pf_at 0x7151
l_kernel_0002786f: mov dword [esp+0x4],0x2ce75
pf_at 0x7159
l_kernel_00027877: call 0x20cea
pf_at 0x715e
l_kernel_0002787c: test eax,eax
pf_at 0x7160
l_kernel_0002787e: jz short 0x278bb
pf_at 0x7162
l_kernel_00027880: mov [esp],esi
pf_at 0x7165
l_kernel_00027883: mov dword [esp+0x4],0x2ce77
pf_at 0x716d
l_kernel_0002788b: call 0x20cea
pf_at 0x7172
l_kernel_00027890: test eax,eax
pf_at 0x7174
l_kernel_00027892: jz short 0x278c7
pf_at 0x7176
l_kernel_00027894: not ebx
pf_at 0x7178
l_kernel_00027896: shr ebx,byte 0x1f
pf_at 0x717b
l_kernel_00027899: lea esi,[ebp-0x38]
pf_at 0x717e
l_kernel_0002789c: mov edx,ebx
pf_at 0x7180
l_kernel_0002789e: jmp near 0x276a9
pf_at 0x7185
l_kernel_000278a3: mov [esp+0xc],esi
pf_at 0x7189
l_kernel_000278a7: mov [esp+0x4],esi
pf_at 0x718d
l_kernel_000278ab: mov [esp],ebx
pf_at 0x7190
l_kernel_000278ae: mov dword [esp+0x8],0x2ded7
pf_at 0x7198
l_kernel_000278b6: jmp near 0x276c4
pf_at 0x719d
l_kernel_000278bb: xor edx,edx
pf_at 0x719f
l_kernel_000278bd: test ebx,ebx
pf_at 0x71a1
l_kernel_000278bf: setg dl
pf_at 0x71a4
l_kernel_000278c2: jmp near 0x276a6
pf_at 0x71a9
l_kernel_000278c7: xor edx,edx
pf_at 0x71ab
l_kernel_000278c9: test ebx,ebx
pf_at 0x71ad
l_kernel_000278cb: setng dl
pf_at 0x71b0
l_kernel_000278ce: jmp near 0x276a6
pf_at 0x71b5
l_kernel_000278d3: push ebp
pf_at 0x71b6
l_kernel_000278d4: mov ebp,esp
pf_at 0x71b8
l_kernel_000278d6: push ebx
pf_at 0x71b9
l_kernel_000278d7: push edi
pf_at 0x71ba
l_kernel_000278d8: push esi
pf_at 0x71bb
l_kernel_000278d9: sub esp,byte +0xc
pf_at 0x71be
l_kernel_000278dc: mov edi,ecx
pf_at 0x71c0
l_kernel_000278de: test ecx,ecx
pf_at 0x71c2
l_kernel_000278e0: setz al
pf_at 0x71c5
l_kernel_000278e3: test edx,edx
pf_at 0x71c7
l_kernel_000278e5: setz cl
pf_at 0x71ca
l_kernel_000278e8: or cl,al
pf_at 0x71cc
l_kernel_000278ea: jnz short 0x2791b
pf_at 0x71ce
l_kernel_000278ec: mov ebx,edx
pf_at 0x71d0
l_kernel_000278ee: mov ecx,edi
pf_at 0x71d2
l_kernel_000278f0: call 0x24daf
pf_at 0x71d7
l_kernel_000278f5: push byte +0x8
pf_at 0x71d9
l_kernel_000278f7: pop ecx
pf_at 0x71da
l_kernel_000278f8: mov esi,ebx
pf_at 0x71dc
l_kernel_000278fa: rep movsd
pf_at 0x71de
l_kernel_000278fc: and dword [ebx],byte +0x0
pf_at 0x71e1
l_kernel_000278ff: and dword [ebx+0x4],byte +0x0
pf_at 0x71e5
l_kernel_00027903: and dword [ebx+0x8],byte +0x0
pf_at 0x71e9
l_kernel_00027907: and dword [ebx+0xc],byte +0x0
pf_at 0x71ed
l_kernel_0002790b: and dword [ebx+0x10],byte +0x0
pf_at 0x71f1
l_kernel_0002790f: and dword [ebx+0x14],byte +0x0
pf_at 0x71f5
l_kernel_00027913: and dword [ebx+0x18],byte +0x0
pf_at 0x71f9
l_kernel_00027917: and dword [ebx+0x1c],byte +0x0
pf_at 0x71fd
l_kernel_0002791b: add esp,byte +0xc
pf_at 0x7200
l_kernel_0002791e: pop esi
pf_at 0x7201
l_kernel_0002791f: pop edi
pf_at 0x7202
l_kernel_00027920: pop ebx
pf_at 0x7203
l_kernel_00027921: pop ebp
pf_at 0x7204
l_kernel_00027922: ret
pf_at 0x7205
l_kernel_00027923: push ebp
pf_at 0x7206
l_kernel_00027924: mov ebp,esp
pf_at 0x7208
l_kernel_00027926: push ebx
pf_at 0x7209
l_kernel_00027927: push edi
pf_at 0x720a
l_kernel_00027928: push esi
pf_at 0x720b
l_kernel_00027929: sub esp,byte +0x4c
pf_at 0x720e
l_kernel_0002792c: mov esi,edx
pf_at 0x7210
l_kernel_0002792e: mov edi,ecx
pf_at 0x7212
l_kernel_00027930: call 0x27a2f
pf_at 0x7217
l_kernel_00027935: test al,al
pf_at 0x7219
l_kernel_00027937: jz near 0x27a23
pf_at 0x721f
l_kernel_0002793d: mov [ebp-0x14],esi
pf_at 0x7222
l_kernel_00027940: mov ecx,[edi+0x4]
pf_at 0x7225
l_kernel_00027943: mov eax,[edi+0x8]
pf_at 0x7228
l_kernel_00027946: mov bl,0x1
pf_at 0x722a
l_kernel_00027948: cmp eax,[ecx]
pf_at 0x722c
l_kernel_0002794a: jnc near 0x27a25
pf_at 0x7232
l_kernel_00027950: mov ecx,[ecx+0x8]
pf_at 0x7235
l_kernel_00027953: mov esi,[ecx+eax*4]
pf_at 0x7238
l_kernel_00027956: sub esp,byte +0x8
pf_at 0x723b
l_kernel_00027959: push dword 0x2ce7d
pf_at 0x7240
l_kernel_0002795e: push esi
pf_at 0x7241
l_kernel_0002795f: call 0x20cea
pf_at 0x7246
l_kernel_00027964: add esp,byte +0x10
pf_at 0x7249
l_kernel_00027967: test eax,eax
pf_at 0x724b
l_kernel_00027969: jz short 0x27984
pf_at 0x724d
l_kernel_0002796b: sub esp,byte +0x8
pf_at 0x7250
l_kernel_0002796e: push dword 0x2ce7f
pf_at 0x7255
l_kernel_00027973: push esi
pf_at 0x7256
l_kernel_00027974: call 0x20cea
pf_at 0x725b
l_kernel_00027979: add esp,byte +0x10
pf_at 0x725e
l_kernel_0002797c: test eax,eax
pf_at 0x7260
l_kernel_0002797e: jnz near 0x27a25
pf_at 0x7266
l_kernel_00027984: inc dword [edi+0x8]
pf_at 0x7269
l_kernel_00027987: and dword [ebp-0x34],byte +0x0
pf_at 0x726d
l_kernel_0002798b: and dword [ebp-0x30],byte +0x0
pf_at 0x7271
l_kernel_0002798f: and dword [ebp-0x2c],byte +0x0
pf_at 0x7275
l_kernel_00027993: and dword [ebp-0x28],byte +0x0
pf_at 0x7279
l_kernel_00027997: and dword [ebp-0x24],byte +0x0
pf_at 0x727d
l_kernel_0002799b: and dword [ebp-0x20],byte +0x0
pf_at 0x7281
l_kernel_0002799f: and dword [ebp-0x1c],byte +0x0
pf_at 0x7285
l_kernel_000279a3: and dword [ebp-0x18],byte +0x0
pf_at 0x7289
l_kernel_000279a7: and dword [ebp-0x54],byte +0x0
pf_at 0x728d
l_kernel_000279ab: and dword [ebp-0x50],byte +0x0
pf_at 0x7291
l_kernel_000279af: and dword [ebp-0x4c],byte +0x0
pf_at 0x7295
l_kernel_000279b3: and dword [ebp-0x48],byte +0x0
pf_at 0x7299
l_kernel_000279b7: and dword [ebp-0x44],byte +0x0
pf_at 0x729d
l_kernel_000279bb: and dword [ebp-0x40],byte +0x0
pf_at 0x72a1
l_kernel_000279bf: and dword [ebp-0x3c],byte +0x0
pf_at 0x72a5
l_kernel_000279c3: and dword [ebp-0x38],byte +0x0
pf_at 0x72a9
l_kernel_000279c7: mov ecx,edi
pf_at 0x72ab
l_kernel_000279c9: lea ebx,[ebp-0x34]
pf_at 0x72ae
l_kernel_000279cc: mov edx,ebx
pf_at 0x72b0
l_kernel_000279ce: call 0x27a2f
pf_at 0x72b5
l_kernel_000279d3: test al,al
pf_at 0x72b7
l_kernel_000279d5: jz short 0x27a1b
pf_at 0x72b9
l_kernel_000279d7: mov eax,ebx
pf_at 0x72bb
l_kernel_000279d9: mov ebx,edi
pf_at 0x72bd
l_kernel_000279db: mov ecx,[edi]
pf_at 0x72bf
l_kernel_000279dd: sub esp,byte +0x4
pf_at 0x72c2
l_kernel_000279e0: mov edx,esi
pf_at 0x72c4
l_kernel_000279e2: lea edi,[ebp-0x54]
pf_at 0x72c7
l_kernel_000279e5: push edi
pf_at 0x72c8
l_kernel_000279e6: push eax
pf_at 0x72c9
l_kernel_000279e7: mov esi,[ebp-0x14]
pf_at 0x72cc
l_kernel_000279ea: push esi
pf_at 0x72cd
l_kernel_000279eb: call 0x2729c
pf_at 0x72d2
l_kernel_000279f0: add esp,byte +0x10
pf_at 0x72d5
l_kernel_000279f3: mov [ebp-0xd],al
pf_at 0x72d8
l_kernel_000279f6: mov ecx,esi
pf_at 0x72da
l_kernel_000279f8: call 0x24daf
pf_at 0x72df
l_kernel_000279fd: lea ecx,[ebp-0x34]
pf_at 0x72e2
l_kernel_00027a00: call 0x24daf
pf_at 0x72e7
l_kernel_00027a05: cmp byte [ebp-0xd],0x0
pf_at 0x72eb
l_kernel_00027a09: jz short 0x27a23
pf_at 0x72ed
l_kernel_00027a0b: mov ecx,esi
pf_at 0x72ef
l_kernel_00027a0d: mov edx,edi
pf_at 0x72f1
l_kernel_00027a0f: call 0x278d3
pf_at 0x72f6
l_kernel_00027a14: mov edi,ebx
pf_at 0x72f8
l_kernel_00027a16: jmp near 0x27940
pf_at 0x72fd
l_kernel_00027a1b: mov ecx,[ebp-0x14]
pf_at 0x7300
l_kernel_00027a1e: call 0x24daf
pf_at 0x7305
l_kernel_00027a23: xor ebx,ebx
pf_at 0x7307
l_kernel_00027a25: mov eax,ebx
pf_at 0x7309
l_kernel_00027a27: add esp,byte +0x4c
pf_at 0x730c
l_kernel_00027a2a: pop esi
pf_at 0x730d
l_kernel_00027a2b: pop edi
pf_at 0x730e
l_kernel_00027a2c: pop ebx
pf_at 0x730f
l_kernel_00027a2d: pop ebp
pf_at 0x7310
l_kernel_00027a2e: ret
pf_at 0x7311
l_kernel_00027a2f: push ebp
pf_at 0x7312
l_kernel_00027a30: mov ebp,esp
pf_at 0x7314
l_kernel_00027a32: push ebx
pf_at 0x7315
l_kernel_00027a33: push edi
pf_at 0x7316
l_kernel_00027a34: push esi
pf_at 0x7317
l_kernel_00027a35: sub esp,byte +0x4c
pf_at 0x731a
l_kernel_00027a38: mov esi,edx
pf_at 0x731c
l_kernel_00027a3a: mov edi,ecx
pf_at 0x731e
l_kernel_00027a3c: call 0x27b50
pf_at 0x7323
l_kernel_00027a41: test al,al
pf_at 0x7325
l_kernel_00027a43: jz near 0x27b44
pf_at 0x732b
l_kernel_00027a49: mov [ebp-0x14],esi
pf_at 0x732e
l_kernel_00027a4c: mov ecx,[edi+0x4]
pf_at 0x7331
l_kernel_00027a4f: mov eax,[edi+0x8]
pf_at 0x7334
l_kernel_00027a52: mov bl,0x1
pf_at 0x7336
l_kernel_00027a54: cmp eax,[ecx]
pf_at 0x7338
l_kernel_00027a56: jnc near 0x27b46
pf_at 0x733e
l_kernel_00027a5c: mov ecx,[ecx+0x8]
pf_at 0x7341
l_kernel_00027a5f: mov esi,[ecx+eax*4]
pf_at 0x7344
l_kernel_00027a62: sub esp,byte +0x8
pf_at 0x7347
l_kernel_00027a65: push dword 0x2ce81
pf_at 0x734c
l_kernel_00027a6a: push esi
pf_at 0x734d
l_kernel_00027a6b: call 0x20cea
pf_at 0x7352
l_kernel_00027a70: add esp,byte +0x10
pf_at 0x7355
l_kernel_00027a73: test eax,eax
pf_at 0x7357
l_kernel_00027a75: jz short 0x27aa5
pf_at 0x7359
l_kernel_00027a77: sub esp,byte +0x8
pf_at 0x735c
l_kernel_00027a7a: push dword 0x2ce83
pf_at 0x7361
l_kernel_00027a7f: push esi
pf_at 0x7362
l_kernel_00027a80: call 0x20cea
pf_at 0x7367
l_kernel_00027a85: add esp,byte +0x10
pf_at 0x736a
l_kernel_00027a88: test eax,eax
pf_at 0x736c
l_kernel_00027a8a: jz short 0x27aa5
pf_at 0x736e
l_kernel_00027a8c: sub esp,byte +0x8
pf_at 0x7371
l_kernel_00027a8f: push dword 0x2ce85
pf_at 0x7376
l_kernel_00027a94: push esi
pf_at 0x7377
l_kernel_00027a95: call 0x20cea
pf_at 0x737c
l_kernel_00027a9a: add esp,byte +0x10
pf_at 0x737f
l_kernel_00027a9d: test eax,eax
pf_at 0x7381
l_kernel_00027a9f: jnz near 0x27b46
pf_at 0x7387
l_kernel_00027aa5: inc dword [edi+0x8]
pf_at 0x738a
l_kernel_00027aa8: and dword [ebp-0x34],byte +0x0
pf_at 0x738e
l_kernel_00027aac: and dword [ebp-0x30],byte +0x0
pf_at 0x7392
l_kernel_00027ab0: and dword [ebp-0x2c],byte +0x0
pf_at 0x7396
l_kernel_00027ab4: and dword [ebp-0x28],byte +0x0
pf_at 0x739a
l_kernel_00027ab8: and dword [ebp-0x24],byte +0x0
pf_at 0x739e
l_kernel_00027abc: and dword [ebp-0x20],byte +0x0
pf_at 0x73a2
l_kernel_00027ac0: and dword [ebp-0x1c],byte +0x0
pf_at 0x73a6
l_kernel_00027ac4: and dword [ebp-0x18],byte +0x0
pf_at 0x73aa
l_kernel_00027ac8: and dword [ebp-0x54],byte +0x0
pf_at 0x73ae
l_kernel_00027acc: and dword [ebp-0x50],byte +0x0
pf_at 0x73b2
l_kernel_00027ad0: and dword [ebp-0x4c],byte +0x0
pf_at 0x73b6
l_kernel_00027ad4: and dword [ebp-0x48],byte +0x0
pf_at 0x73ba
l_kernel_00027ad8: and dword [ebp-0x44],byte +0x0
pf_at 0x73be
l_kernel_00027adc: and dword [ebp-0x40],byte +0x0
pf_at 0x73c2
l_kernel_00027ae0: and dword [ebp-0x3c],byte +0x0
pf_at 0x73c6
l_kernel_00027ae4: and dword [ebp-0x38],byte +0x0
pf_at 0x73ca
l_kernel_00027ae8: mov ecx,edi
pf_at 0x73cc
l_kernel_00027aea: lea ebx,[ebp-0x34]
pf_at 0x73cf
l_kernel_00027aed: mov edx,ebx
pf_at 0x73d1
l_kernel_00027aef: call 0x27b50
pf_at 0x73d6
l_kernel_00027af4: test al,al
pf_at 0x73d8
l_kernel_00027af6: jz short 0x27b3c
pf_at 0x73da
l_kernel_00027af8: mov eax,ebx
pf_at 0x73dc
l_kernel_00027afa: mov ebx,edi
pf_at 0x73de
l_kernel_00027afc: mov ecx,[edi]
pf_at 0x73e0
l_kernel_00027afe: sub esp,byte +0x4
pf_at 0x73e3
l_kernel_00027b01: mov edx,esi
pf_at 0x73e5
l_kernel_00027b03: lea edi,[ebp-0x54]
pf_at 0x73e8
l_kernel_00027b06: push edi
pf_at 0x73e9
l_kernel_00027b07: push eax
pf_at 0x73ea
l_kernel_00027b08: mov esi,[ebp-0x14]
pf_at 0x73ed
l_kernel_00027b0b: push esi
pf_at 0x73ee
l_kernel_00027b0c: call 0x2729c
pf_at 0x73f3
l_kernel_00027b11: add esp,byte +0x10
pf_at 0x73f6
l_kernel_00027b14: mov [ebp-0xd],al
pf_at 0x73f9
l_kernel_00027b17: mov ecx,esi
pf_at 0x73fb
l_kernel_00027b19: call 0x24daf
pf_at 0x7400
l_kernel_00027b1e: lea ecx,[ebp-0x34]
pf_at 0x7403
l_kernel_00027b21: call 0x24daf
pf_at 0x7408
l_kernel_00027b26: cmp byte [ebp-0xd],0x0
pf_at 0x740c
l_kernel_00027b2a: jz short 0x27b44
pf_at 0x740e
l_kernel_00027b2c: mov ecx,esi
pf_at 0x7410
l_kernel_00027b2e: mov edx,edi
pf_at 0x7412
l_kernel_00027b30: call 0x278d3
pf_at 0x7417
l_kernel_00027b35: mov edi,ebx
pf_at 0x7419
l_kernel_00027b37: jmp near 0x27a4c
pf_at 0x741e
l_kernel_00027b3c: mov ecx,[ebp-0x14]
pf_at 0x7421
l_kernel_00027b3f: call 0x24daf
pf_at 0x7426
l_kernel_00027b44: xor ebx,ebx
pf_at 0x7428
l_kernel_00027b46: mov eax,ebx
pf_at 0x742a
l_kernel_00027b48: add esp,byte +0x4c
pf_at 0x742d
l_kernel_00027b4b: pop esi
pf_at 0x742e
l_kernel_00027b4c: pop edi
pf_at 0x742f
l_kernel_00027b4d: pop ebx
pf_at 0x7430
l_kernel_00027b4e: pop ebp
pf_at 0x7431
l_kernel_00027b4f: ret
pf_at 0x7432
l_kernel_00027b50: push ebp
pf_at 0x7433
l_kernel_00027b51: mov ebp,esp
pf_at 0x7435
l_kernel_00027b53: push ebx
pf_at 0x7436
l_kernel_00027b54: push edi
pf_at 0x7437
l_kernel_00027b55: push esi
pf_at 0x7438
l_kernel_00027b56: sub esp,0x8c
pf_at 0x743e
l_kernel_00027b5c: mov edi,edx
pf_at 0x7440
l_kernel_00027b5e: mov ebx,ecx
pf_at 0x7442
l_kernel_00027b60: mov edx,0x2ce7f
pf_at 0x7447
l_kernel_00027b65: call 0x284c4
pf_at 0x744c
l_kernel_00027b6a: test al,al
pf_at 0x744e
l_kernel_00027b6c: jz short 0x27bcd
pf_at 0x7450
l_kernel_00027b6e: lea edx,[ebp-0x38]
pf_at 0x7453
l_kernel_00027b71: and dword [edx],byte +0x0
pf_at 0x7456
l_kernel_00027b74: and dword [edx+0x4],byte +0x0
pf_at 0x745a
l_kernel_00027b78: and dword [edx+0x8],byte +0x0
pf_at 0x745e
l_kernel_00027b7c: and dword [edx+0xc],byte +0x0
pf_at 0x7462
l_kernel_00027b80: and dword [edx+0x10],byte +0x0
pf_at 0x7466
l_kernel_00027b84: and dword [edx+0x14],byte +0x0
pf_at 0x746a
l_kernel_00027b88: and dword [edx+0x18],byte +0x0
pf_at 0x746e
l_kernel_00027b8c: and dword [edx+0x1c],byte +0x0
pf_at 0x7472
l_kernel_00027b90: mov ecx,ebx
pf_at 0x7474
l_kernel_00027b92: call 0x27b50
pf_at 0x7479
l_kernel_00027b97: test al,al
pf_at 0x747b
l_kernel_00027b99: jz near 0x27cc9
pf_at 0x7481
l_kernel_00027b9f: mov eax,[ebp-0x38]
pf_at 0x7484
l_kernel_00027ba2: cmp eax,byte +0x1
pf_at 0x7487
l_kernel_00027ba5: jz short 0x27bb9
pf_at 0x7489
l_kernel_00027ba7: cmp eax,byte +0x2
pf_at 0x748c
l_kernel_00027baa: jz near 0x27c81
pf_at 0x7492
l_kernel_00027bb0: cmp eax,byte +0x5
pf_at 0x7495
l_kernel_00027bb3: jnz near 0x27caa
pf_at 0x749b
l_kernel_00027bb9: xor edx,edx
pf_at 0x749d
l_kernel_00027bbb: sub edx,[ebp-0x34]
pf_at 0x74a0
l_kernel_00027bbe: lea esi,[ebp-0x58]
pf_at 0x74a3
l_kernel_00027bc1: mov ecx,esi
pf_at 0x74a5
l_kernel_00027bc3: call 0x28508
pf_at 0x74aa
l_kernel_00027bc8: jmp near 0x27c99
pf_at 0x74af
l_kernel_00027bcd: mov ecx,ebx
pf_at 0x74b1
l_kernel_00027bcf: mov edx,0x2cea9
pf_at 0x74b6
l_kernel_00027bd4: call 0x284c4
pf_at 0x74bb
l_kernel_00027bd9: test al,al
pf_at 0x74bd
l_kernel_00027bdb: jz short 0x27c39
pf_at 0x74bf
l_kernel_00027bdd: lea edx,[ebp-0x38]
pf_at 0x74c2
l_kernel_00027be0: and dword [edx],byte +0x0
pf_at 0x74c5
l_kernel_00027be3: and dword [edx+0x4],byte +0x0
pf_at 0x74c9
l_kernel_00027be7: and dword [edx+0x8],byte +0x0
pf_at 0x74cd
l_kernel_00027beb: and dword [edx+0xc],byte +0x0
pf_at 0x74d1
l_kernel_00027bef: and dword [edx+0x10],byte +0x0
pf_at 0x74d5
l_kernel_00027bf3: and dword [edx+0x14],byte +0x0
pf_at 0x74d9
l_kernel_00027bf7: and dword [edx+0x18],byte +0x0
pf_at 0x74dd
l_kernel_00027bfb: and dword [edx+0x1c],byte +0x0
pf_at 0x74e1
l_kernel_00027bff: mov ecx,ebx
pf_at 0x74e3
l_kernel_00027c01: call 0x27b50
pf_at 0x74e8
l_kernel_00027c06: mov ebx,eax
pf_at 0x74ea
l_kernel_00027c08: test al,al
pf_at 0x74ec
l_kernel_00027c0a: jz near 0x27ccb
pf_at 0x74f2
l_kernel_00027c10: lea ecx,[ebp-0x38]
pf_at 0x74f5
l_kernel_00027c13: call 0x26564
pf_at 0x74fa
l_kernel_00027c18: xor al,0x1
pf_at 0x74fc
l_kernel_00027c1a: movzx edx,al
pf_at 0x74ff
l_kernel_00027c1d: lea esi,[ebp-0x58]
pf_at 0x7502
l_kernel_00027c20: mov ecx,esi
pf_at 0x7504
l_kernel_00027c22: call 0x27014
pf_at 0x7509
l_kernel_00027c27: push byte +0x8
pf_at 0x750b
l_kernel_00027c29: pop ecx
pf_at 0x750c
l_kernel_00027c2a: rep movsd
pf_at 0x750e
l_kernel_00027c2c: lea ecx,[ebp-0x38]
pf_at 0x7511
l_kernel_00027c2f: call 0x24daf
pf_at 0x7516
l_kernel_00027c34: jmp near 0x27ccb
pf_at 0x751b
l_kernel_00027c39: test ebx,ebx
pf_at 0x751d
l_kernel_00027c3b: jz near 0x27cc9
pf_at 0x7523
l_kernel_00027c41: mov eax,[ebx+0x4]
pf_at 0x7526
l_kernel_00027c44: mov esi,[ebx+0x8]
pf_at 0x7529
l_kernel_00027c47: cmp esi,[eax]
pf_at 0x752b
l_kernel_00027c49: jnc short 0x27c6e
pf_at 0x752d
l_kernel_00027c4b: mov [ebp-0x18],edi
pf_at 0x7530
l_kernel_00027c4e: mov edi,[eax+0x8]
pf_at 0x7533
l_kernel_00027c51: mov ecx,[edi+esi*4]
pf_at 0x7536
l_kernel_00027c54: mov edx,0x2ceab
pf_at 0x753b
l_kernel_00027c59: call 0x26458
pf_at 0x7540
l_kernel_00027c5e: test al,al
pf_at 0x7542
l_kernel_00027c60: jz short 0x27cd8
pf_at 0x7544
l_kernel_00027c62: inc esi
pf_at 0x7545
l_kernel_00027c63: mov [ebx+0x8],esi
pf_at 0x7548
l_kernel_00027c66: mov edi,[ebp-0x18]
pf_at 0x754b
l_kernel_00027c69: jmp near 0x27bdd
pf_at 0x7550
l_kernel_00027c6e: test edi,edi
pf_at 0x7552
l_kernel_00027c70: jz short 0x27cc9
pf_at 0x7554
l_kernel_00027c72: sub esp,byte +0x4
pf_at 0x7557
l_kernel_00027c75: push dword 0x2ceb3
pf_at 0x755c
l_kernel_00027c7a: push dword 0x2ceaf
pf_at 0x7561
l_kernel_00027c7f: jmp short 0x27cbf
pf_at 0x7563
l_kernel_00027c81: fld dword [ebp-0x30]
pf_at 0x7566
l_kernel_00027c84: fchs
pf_at 0x7568
l_kernel_00027c86: sub esp,byte +0x10
pf_at 0x756b
l_kernel_00027c89: fstp dword [esp]
pf_at 0x756e
l_kernel_00027c8c: lea esi,[ebp-0x58]
pf_at 0x7571
l_kernel_00027c8f: mov ecx,esi
pf_at 0x7573
l_kernel_00027c91: call 0x24f15
pf_at 0x7578
l_kernel_00027c96: add esp,byte +0x10
pf_at 0x757b
l_kernel_00027c99: push byte +0x8
pf_at 0x757d
l_kernel_00027c9b: pop ecx
pf_at 0x757e
l_kernel_00027c9c: rep movsd
pf_at 0x7580
l_kernel_00027c9e: lea ecx,[ebp-0x38]
pf_at 0x7583
l_kernel_00027ca1: call 0x24daf
pf_at 0x7588
l_kernel_00027ca6: mov bl,0x1
pf_at 0x758a
l_kernel_00027ca8: jmp short 0x27ccb
pf_at 0x758c
l_kernel_00027caa: lea ecx,[ebp-0x38]
pf_at 0x758f
l_kernel_00027cad: call 0x24daf
pf_at 0x7594
l_kernel_00027cb2: sub esp,byte +0x4
pf_at 0x7597
l_kernel_00027cb5: push dword 0x2ce87
pf_at 0x759c
l_kernel_00027cba: push dword 0x2ce7f
pf_at 0x75a1
l_kernel_00027cbf: push dword [ebx]
pf_at 0x75a3
l_kernel_00027cc1: call 0x2609c
pf_at 0x75a8
l_kernel_00027cc6: add esp,byte +0x10
pf_at 0x75ab
l_kernel_00027cc9: xor ebx,ebx
pf_at 0x75ad
l_kernel_00027ccb: mov eax,ebx
pf_at 0x75af
l_kernel_00027ccd: add esp,0x8c
pf_at 0x75b5
l_kernel_00027cd3: pop esi
pf_at 0x75b6
l_kernel_00027cd4: pop edi
pf_at 0x75b7
l_kernel_00027cd5: pop ebx
pf_at 0x75b8
l_kernel_00027cd6: pop ebp
pf_at 0x75b9
l_kernel_00027cd7: ret
pf_at 0x75ba
l_kernel_00027cd8: cmp dword [ebp-0x18],byte +0x0
pf_at 0x75be
l_kernel_00027cdc: jz short 0x27cc9
pf_at 0x75c0
l_kernel_00027cde: lea eax,[esi+0x1]
pf_at 0x75c3
l_kernel_00027ce1: mov [ebx+0x8],eax
pf_at 0x75c6
l_kernel_00027ce4: mov esi,[edi+esi*4]
pf_at 0x75c9
l_kernel_00027ce7: and dword [ebp-0x38],byte +0x0
pf_at 0x75cd
l_kernel_00027ceb: and dword [ebp-0x34],byte +0x0
pf_at 0x75d1
l_kernel_00027cef: and dword [ebp-0x30],byte +0x0
pf_at 0x75d5
l_kernel_00027cf3: and dword [ebp-0x2c],byte +0x0
pf_at 0x75d9
l_kernel_00027cf7: and dword [ebp-0x28],byte +0x0
pf_at 0x75dd
l_kernel_00027cfb: and dword [ebp-0x24],byte +0x0
pf_at 0x75e1
l_kernel_00027cff: and dword [ebp-0x20],byte +0x0
pf_at 0x75e5
l_kernel_00027d03: and dword [ebp-0x1c],byte +0x0
pf_at 0x75e9
l_kernel_00027d07: sub esp,byte +0x8
pf_at 0x75ec
l_kernel_00027d0a: push dword 0x2ced0
pf_at 0x75f1
l_kernel_00027d0f: push esi
pf_at 0x75f2
l_kernel_00027d10: call 0x20cea
pf_at 0x75f7
l_kernel_00027d15: add esp,byte +0x10
pf_at 0x75fa
l_kernel_00027d18: test eax,eax
pf_at 0x75fc
l_kernel_00027d1a: jz short 0x27d7f
pf_at 0x75fe
l_kernel_00027d1c: sub esp,byte +0x8
pf_at 0x7601
l_kernel_00027d1f: push dword 0x2cee1
pf_at 0x7606
l_kernel_00027d24: push esi
pf_at 0x7607
l_kernel_00027d25: call 0x20cea
pf_at 0x760c
l_kernel_00027d2a: add esp,byte +0x10
pf_at 0x760f
l_kernel_00027d2d: test eax,eax
pf_at 0x7611
l_kernel_00027d2f: mov edi,[ebp-0x18]
pf_at 0x7614
l_kernel_00027d32: jz near 0x27dc2
pf_at 0x761a
l_kernel_00027d38: sub esp,byte +0x8
pf_at 0x761d
l_kernel_00027d3b: push dword 0x2cf1e
pf_at 0x7622
l_kernel_00027d40: push esi
pf_at 0x7623
l_kernel_00027d41: call 0x20cea
pf_at 0x7628
l_kernel_00027d46: add esp,byte +0x10
pf_at 0x762b
l_kernel_00027d49: test eax,eax
pf_at 0x762d
l_kernel_00027d4b: jz near 0x27e74
pf_at 0x7633
l_kernel_00027d51: mov ecx,esi
pf_at 0x7635
l_kernel_00027d53: call 0x2861c
pf_at 0x763a
l_kernel_00027d58: test al,al
pf_at 0x763c
l_kernel_00027d5a: jz near 0x2808b
pf_at 0x7642
l_kernel_00027d60: lea edx,[ebp-0x38]
pf_at 0x7645
l_kernel_00027d63: mov ecx,esi
pf_at 0x7647
l_kernel_00027d65: call 0x28655
pf_at 0x764c
l_kernel_00027d6a: test al,al
pf_at 0x764e
l_kernel_00027d6c: jnz near 0x280ce
pf_at 0x7654
l_kernel_00027d72: sub esp,byte +0x4
pf_at 0x7657
l_kernel_00027d75: push dword 0x2cfca
pf_at 0x765c
l_kernel_00027d7a: jmp near 0x284be
pf_at 0x7661
l_kernel_00027d7f: lea edx,[ebp-0x38]
pf_at 0x7664
l_kernel_00027d82: mov ecx,ebx
pf_at 0x7666
l_kernel_00027d84: call 0x26473
pf_at 0x766b
l_kernel_00027d89: test al,al
pf_at 0x766d
l_kernel_00027d8b: mov edi,[ebp-0x18]
pf_at 0x7670
l_kernel_00027d8e: jz near 0x27cc9
pf_at 0x7676
l_kernel_00027d94: mov ecx,ebx
pf_at 0x7678
l_kernel_00027d96: mov edx,0x2ced2
pf_at 0x767d
l_kernel_00027d9b: call 0x284c4
pf_at 0x7682
l_kernel_00027da0: test al,al
pf_at 0x7684
l_kernel_00027da2: jnz near 0x280ce
pf_at 0x768a
l_kernel_00027da8: lea ecx,[ebp-0x38]
pf_at 0x768d
l_kernel_00027dab: call 0x24daf
pf_at 0x7692
l_kernel_00027db0: sub esp,byte +0x4
pf_at 0x7695
l_kernel_00027db3: push dword 0x2ced4
pf_at 0x769a
l_kernel_00027db8: push dword 0x2ced2
pf_at 0x769f
l_kernel_00027dbd: jmp near 0x27cbf
pf_at 0x76a4
l_kernel_00027dc2: lea ecx,[ebp-0x38]
pf_at 0x76a7
l_kernel_00027dc5: call 0x28534
pf_at 0x76ac
l_kernel_00027dca: test al,al
pf_at 0x76ae
l_kernel_00027dcc: jz near 0x280a3
pf_at 0x76b4
l_kernel_00027dd2: mov ecx,ebx
pf_at 0x76b6
l_kernel_00027dd4: mov edx,0x2cf06
pf_at 0x76bb
l_kernel_00027dd9: call 0x284c4
pf_at 0x76c0
l_kernel_00027dde: test al,al
pf_at 0x76c2
l_kernel_00027de0: jnz near 0x280ce
pf_at 0x76c8
l_kernel_00027de6: mov [ebp-0x10],esi
pf_at 0x76cb
l_kernel_00027de9: lea esi,[ebp-0x58]
pf_at 0x76ce
l_kernel_00027dec: and dword [ebp-0x58],byte +0x0
pf_at 0x76d2
l_kernel_00027df0: and dword [ebp-0x54],byte +0x0
pf_at 0x76d6
l_kernel_00027df4: and dword [ebp-0x50],byte +0x0
pf_at 0x76da
l_kernel_00027df8: and dword [ebp-0x4c],byte +0x0
pf_at 0x76de
l_kernel_00027dfc: and dword [ebp-0x48],byte +0x0
pf_at 0x76e2
l_kernel_00027e00: and dword [ebp-0x44],byte +0x0
pf_at 0x76e6
l_kernel_00027e04: and dword [ebp-0x40],byte +0x0
pf_at 0x76ea
l_kernel_00027e08: and dword [ebp-0x3c],byte +0x0
pf_at 0x76ee
l_kernel_00027e0c: mov ecx,ebx
pf_at 0x76f0
l_kernel_00027e0e: mov edx,esi
pf_at 0x76f2
l_kernel_00027e10: call 0x26473
pf_at 0x76f7
l_kernel_00027e15: test al,al
pf_at 0x76f9
l_kernel_00027e17: jz near 0x2834d
pf_at 0x76ff
l_kernel_00027e1d: mov ecx,[ebp-0x20]
pf_at 0x7702
l_kernel_00027e20: mov edx,esi
pf_at 0x7704
l_kernel_00027e22: call 0x28586
pf_at 0x7709
l_kernel_00027e27: mov [ebp-0x14],al
pf_at 0x770c
l_kernel_00027e2a: mov ecx,esi
pf_at 0x770e
l_kernel_00027e2c: call 0x24daf
pf_at 0x7713
l_kernel_00027e31: cmp byte [ebp-0x14],0x0
pf_at 0x7717
l_kernel_00027e35: jz near 0x28264
pf_at 0x771d
l_kernel_00027e3b: mov ecx,ebx
pf_at 0x771f
l_kernel_00027e3d: mov edx,0x2cf06
pf_at 0x7724
l_kernel_00027e42: call 0x284c4
pf_at 0x7729
l_kernel_00027e47: test al,al
pf_at 0x772b
l_kernel_00027e49: jnz near 0x282f6
pf_at 0x7731
l_kernel_00027e4f: mov ecx,ebx
pf_at 0x7733
l_kernel_00027e51: mov edx,0x2cf08
pf_at 0x7738
l_kernel_00027e56: call 0x284c4
pf_at 0x773d
l_kernel_00027e5b: test al,al
pf_at 0x773f
l_kernel_00027e5d: jnz short 0x27dec
pf_at 0x7741
l_kernel_00027e5f: lea ecx,[ebp-0x38]
pf_at 0x7744
l_kernel_00027e62: call 0x24daf
pf_at 0x7749
l_kernel_00027e67: sub esp,byte +0x4
pf_at 0x774c
l_kernel_00027e6a: push dword 0x2cf0a
pf_at 0x7751
l_kernel_00027e6f: jmp near 0x281e3
pf_at 0x7756
l_kernel_00027e74: lea ecx,[ebp-0x38]
pf_at 0x7759
l_kernel_00027e77: call 0x285ca
pf_at 0x775e
l_kernel_00027e7c: test al,al
pf_at 0x7760
l_kernel_00027e7e: jz near 0x284b6
pf_at 0x7766
l_kernel_00027e84: mov ecx,ebx
pf_at 0x7768
l_kernel_00027e86: mov edx,0x2cf43
pf_at 0x776d
l_kernel_00027e8b: call 0x284c4
pf_at 0x7772
l_kernel_00027e90: test al,al
pf_at 0x7774
l_kernel_00027e92: jnz near 0x280ce
pf_at 0x777a
l_kernel_00027e98: lea edi,[ebp-0x58]
pf_at 0x777d
l_kernel_00027e9b: mov [ebp-0x10],esi
pf_at 0x7780
l_kernel_00027e9e: and dword [ebp-0x58],byte +0x0
pf_at 0x7784
l_kernel_00027ea2: and dword [ebp-0x54],byte +0x0
pf_at 0x7788
l_kernel_00027ea6: and dword [ebp-0x50],byte +0x0
pf_at 0x778c
l_kernel_00027eaa: and dword [ebp-0x4c],byte +0x0
pf_at 0x7790
l_kernel_00027eae: and dword [ebp-0x48],byte +0x0
pf_at 0x7794
l_kernel_00027eb2: and dword [ebp-0x44],byte +0x0
pf_at 0x7798
l_kernel_00027eb6: and dword [ebp-0x40],byte +0x0
pf_at 0x779c
l_kernel_00027eba: and dword [ebp-0x3c],byte +0x0
pf_at 0x77a0
l_kernel_00027ebe: and dword [ebp-0x84],byte +0x0
pf_at 0x77a7
l_kernel_00027ec5: and dword [ebp-0x80],byte +0x0
pf_at 0x77ab
l_kernel_00027ec9: and dword [ebp-0x7c],byte +0x0
pf_at 0x77af
l_kernel_00027ecd: and dword [ebp-0x78],byte +0x0
pf_at 0x77b3
l_kernel_00027ed1: and dword [ebp-0x74],byte +0x0
pf_at 0x77b7
l_kernel_00027ed5: and dword [ebp-0x70],byte +0x0
pf_at 0x77bb
l_kernel_00027ed9: and dword [ebp-0x6c],byte +0x0
pf_at 0x77bf
l_kernel_00027edd: and dword [ebp-0x68],byte +0x0
pf_at 0x77c3
l_kernel_00027ee1: and dword [ebp-0x60],byte +0x0
pf_at 0x77c7
l_kernel_00027ee5: mov ecx,[ebx+0x4]
pf_at 0x77ca
l_kernel_00027ee8: mov eax,[ebx+0x8]
pf_at 0x77cd
l_kernel_00027eeb: cmp eax,[ecx]
pf_at 0x77cf
l_kernel_00027eed: jnc near 0x28330
pf_at 0x77d5
l_kernel_00027ef3: mov ecx,[ecx+0x8]
pf_at 0x77d8
l_kernel_00027ef6: lea edx,[eax+0x1]
pf_at 0x77db
l_kernel_00027ef9: mov [ebx+0x8],edx
pf_at 0x77de
l_kernel_00027efc: mov esi,[ecx+eax*4]
pf_at 0x77e1
l_kernel_00027eff: mov ecx,esi
pf_at 0x77e3
l_kernel_00027f01: call 0x2861c
pf_at 0x77e8
l_kernel_00027f06: mov ecx,esi
pf_at 0x77ea
l_kernel_00027f08: test al,al
pf_at 0x77ec
l_kernel_00027f0a: jz short 0x27f20
pf_at 0x77ee
l_kernel_00027f0c: mov edx,edi
pf_at 0x77f0
l_kernel_00027f0e: call 0x28655
pf_at 0x77f5
l_kernel_00027f13: test al,al
pf_at 0x77f7
l_kernel_00027f15: jnz near 0x27fa9
pf_at 0x77fd
l_kernel_00027f1b: jmp near 0x283a5
pf_at 0x7802
l_kernel_00027f20: lea edx,[ebp-0x54]
pf_at 0x7805
l_kernel_00027f23: call 0x286b0
pf_at 0x780a
l_kernel_00027f28: test al,al
pf_at 0x780c
l_kernel_00027f2a: jz short 0x27f35
pf_at 0x780e
l_kernel_00027f2c: mov dword [ebp-0x58],0x1
pf_at 0x7815
l_kernel_00027f33: jmp short 0x27fa9
pf_at 0x7817
l_kernel_00027f35: mov ecx,esi
pf_at 0x7819
l_kernel_00027f37: call 0x28826
pf_at 0x781e
l_kernel_00027f3c: test al,al
pf_at 0x7820
l_kernel_00027f3e: jz short 0x27f57
pf_at 0x7822
l_kernel_00027f40: mov ecx,esi
pf_at 0x7824
l_kernel_00027f42: lea edx,[ebp-0x50]
pf_at 0x7827
l_kernel_00027f45: call 0x24e95
pf_at 0x782c
l_kernel_00027f4a: test al,al
pf_at 0x782e
l_kernel_00027f4c: jz short 0x27f57
pf_at 0x7830
l_kernel_00027f4e: mov dword [ebp-0x58],0x2
pf_at 0x7837
l_kernel_00027f55: jmp short 0x27fa9
pf_at 0x7839
l_kernel_00027f57: mov ecx,esi
pf_at 0x783b
l_kernel_00027f59: mov edx,0x2cf78
pf_at 0x7840
l_kernel_00027f5e: call 0x26458
pf_at 0x7845
l_kernel_00027f63: test al,al
pf_at 0x7847
l_kernel_00027f65: jz short 0x27f6e
pf_at 0x7849
l_kernel_00027f67: mov ecx,edi
pf_at 0x784b
l_kernel_00027f69: xor edx,edx
pf_at 0x784d
l_kernel_00027f6b: inc edx
pf_at 0x784e
l_kernel_00027f6c: jmp short 0x27f82
pf_at 0x7850
l_kernel_00027f6e: mov ecx,esi
pf_at 0x7852
l_kernel_00027f70: mov edx,0x2cf7d
pf_at 0x7857
l_kernel_00027f75: call 0x26458
pf_at 0x785c
l_kernel_00027f7a: test al,al
pf_at 0x785e
l_kernel_00027f7c: jz short 0x27f89
pf_at 0x7860
l_kernel_00027f7e: mov ecx,edi
pf_at 0x7862
l_kernel_00027f80: xor edx,edx
pf_at 0x7864
l_kernel_00027f82: call 0x27014
pf_at 0x7869
l_kernel_00027f87: jmp short 0x27fa9
pf_at 0x786b
l_kernel_00027f89: mov ecx,esi
pf_at 0x786d
l_kernel_00027f8b: call 0x28877
pf_at 0x7872
l_kernel_00027f90: test al,al
pf_at 0x7874
l_kernel_00027f92: jz near 0x2849c
pf_at 0x787a
l_kernel_00027f98: mov ecx,edi
pf_at 0x787c
l_kernel_00027f9a: mov edx,esi
pf_at 0x787e
l_kernel_00027f9c: call 0x24c66
pf_at 0x7883
l_kernel_00027fa1: test al,al
pf_at 0x7885
l_kernel_00027fa3: jz near 0x284ae
pf_at 0x788b
l_kernel_00027fa9: mov ecx,ebx
pf_at 0x788d
l_kernel_00027fab: mov edx,0x2cf95
pf_at 0x7892
l_kernel_00027fb0: call 0x284c4
pf_at 0x7897
l_kernel_00027fb5: test al,al
pf_at 0x7899
l_kernel_00027fb7: jnz short 0x27fcd
pf_at 0x789b
l_kernel_00027fb9: mov ecx,ebx
pf_at 0x789d
l_kernel_00027fbb: mov edx,0x2cf97
pf_at 0x78a2
l_kernel_00027fc0: call 0x284c4
pf_at 0x78a7
l_kernel_00027fc5: test al,al
pf_at 0x78a9
l_kernel_00027fc7: jz near 0x283ba
pf_at 0x78af
l_kernel_00027fcd: mov [ebp-0x14],esi
pf_at 0x78b2
l_kernel_00027fd0: mov ecx,ebx
pf_at 0x78b4
l_kernel_00027fd2: lea edx,[ebp-0x84]
pf_at 0x78ba
l_kernel_00027fd8: call 0x26473
pf_at 0x78bf
l_kernel_00027fdd: test al,al
pf_at 0x78c1
l_kernel_00027fdf: jz near 0x28345
pf_at 0x78c7
l_kernel_00027fe5: mov ecx,edi
pf_at 0x78c9
l_kernel_00027fe7: lea edx,[ebp-0x60]
pf_at 0x78cc
l_kernel_00027fea: call 0x288cc
pf_at 0x78d1
l_kernel_00027fef: test al,al
pf_at 0x78d3
l_kernel_00027ff1: jz near 0x2835a
pf_at 0x78d9
l_kernel_00027ff7: mov ecx,[ebp-0x1c]
pf_at 0x78dc
l_kernel_00027ffa: mov edx,[ebp-0x60]
pf_at 0x78df
l_kernel_00027ffd: sub esp,byte +0xc
pf_at 0x78e2
l_kernel_00028000: push byte +0x1
pf_at 0x78e4
l_kernel_00028002: call 0x28989
pf_at 0x78e9
l_kernel_00028007: add esp,byte +0x10
pf_at 0x78ec
l_kernel_0002800a: mov edi,eax
pf_at 0x78ee
l_kernel_0002800c: sub esp,byte +0xc
pf_at 0x78f1
l_kernel_0002800f: push dword [ebp-0x60]
pf_at 0x78f4
l_kernel_00028012: call 0x20aee
pf_at 0x78f9
l_kernel_00028017: add esp,byte +0x10
pf_at 0x78fc
l_kernel_0002801a: and dword [ebp-0x60],byte +0x0
pf_at 0x7900
l_kernel_0002801e: test edi,edi
pf_at 0x7902
l_kernel_00028020: lea esi,[ebp-0x84]
pf_at 0x7908
l_kernel_00028026: jz near 0x282fe
pf_at 0x790e
l_kernel_0002802c: mov ecx,edi
pf_at 0x7910
l_kernel_0002802e: mov edx,esi
pf_at 0x7912
l_kernel_00028030: call 0x25048
pf_at 0x7917
l_kernel_00028035: test al,al
pf_at 0x7919
l_kernel_00028037: jz near 0x282fe
pf_at 0x791f
l_kernel_0002803d: mov ecx,esi
pf_at 0x7921
l_kernel_0002803f: call 0x24daf
pf_at 0x7926
l_kernel_00028044: lea edi,[ebp-0x58]
pf_at 0x7929
l_kernel_00028047: mov ecx,edi
pf_at 0x792b
l_kernel_00028049: call 0x24daf
pf_at 0x7930
l_kernel_0002804e: mov ecx,ebx
pf_at 0x7932
l_kernel_00028050: mov edx,0x2cf43
pf_at 0x7937
l_kernel_00028055: call 0x284c4
pf_at 0x793c
l_kernel_0002805a: test al,al
pf_at 0x793e
l_kernel_0002805c: jnz near 0x282f3
pf_at 0x7944
l_kernel_00028062: mov ecx,ebx
pf_at 0x7946
l_kernel_00028064: mov edx,0x2cf08
pf_at 0x794b
l_kernel_00028069: call 0x284c4
pf_at 0x7950
l_kernel_0002806e: test al,al
pf_at 0x7952
l_kernel_00028070: jnz near 0x27e9e
pf_at 0x7958
l_kernel_00028076: lea ecx,[ebp-0x38]
pf_at 0x795b
l_kernel_00028079: call 0x24daf
pf_at 0x7960
l_kernel_0002807e: sub esp,byte +0x4
pf_at 0x7963
l_kernel_00028081: push dword 0x2cfb6
pf_at 0x7968
l_kernel_00028086: jmp near 0x2837d
pf_at 0x796d
l_kernel_0002808b: mov ecx,esi
pf_at 0x796f
l_kernel_0002808d: mov edx,0x2cf78
pf_at 0x7974
l_kernel_00028092: call 0x26458
pf_at 0x7979
l_kernel_00028097: test al,al
pf_at 0x797b
l_kernel_00028099: jz short 0x280b0
pf_at 0x797d
l_kernel_0002809b: lea ecx,[ebp-0x38]
pf_at 0x7980
l_kernel_0002809e: xor edx,edx
pf_at 0x7982
l_kernel_000280a0: inc edx
pf_at 0x7983
l_kernel_000280a1: jmp short 0x280c9
pf_at 0x7985
l_kernel_000280a3: sub esp,byte +0x4
pf_at 0x7988
l_kernel_000280a6: push dword 0x2cee3
pf_at 0x798d
l_kernel_000280ab: jmp near 0x284be
pf_at 0x7992
l_kernel_000280b0: mov ecx,esi
pf_at 0x7994
l_kernel_000280b2: mov edx,0x2cf7d
pf_at 0x7999
l_kernel_000280b7: call 0x26458
pf_at 0x799e
l_kernel_000280bc: test al,al
pf_at 0x79a0
l_kernel_000280be: jz near 0x281eb
pf_at 0x79a6
l_kernel_000280c4: lea ecx,[ebp-0x38]
pf_at 0x79a9
l_kernel_000280c7: xor edx,edx
pf_at 0x79ab
l_kernel_000280c9: call 0x27014
pf_at 0x79b0
l_kernel_000280ce: mov [ebp-0x10],esi
pf_at 0x79b3
l_kernel_000280d1: mov ecx,[ebx+0x4]
pf_at 0x79b6
l_kernel_000280d4: mov eax,[ebx+0x8]
pf_at 0x79b9
l_kernel_000280d7: cmp eax,[ecx]
pf_at 0x79bb
l_kernel_000280d9: jnc near 0x281ad
pf_at 0x79c1
l_kernel_000280df: mov ecx,[ecx+0x8]
pf_at 0x79c4
l_kernel_000280e2: sub esp,byte +0x8
pf_at 0x79c7
l_kernel_000280e5: push dword 0x2cee1
pf_at 0x79cc
l_kernel_000280ea: push dword [ecx+eax*4]
pf_at 0x79cf
l_kernel_000280ed: call 0x20cea
pf_at 0x79d4
l_kernel_000280f2: add esp,byte +0x10
pf_at 0x79d7
l_kernel_000280f5: test eax,eax
pf_at 0x79d9
l_kernel_000280f7: jnz near 0x281ad
pf_at 0x79df
l_kernel_000280fd: and dword [ebp-0x58],byte +0x0
pf_at 0x79e3
l_kernel_00028101: and dword [ebp-0x54],byte +0x0
pf_at 0x79e7
l_kernel_00028105: and dword [ebp-0x50],byte +0x0
pf_at 0x79eb
l_kernel_00028109: and dword [ebp-0x4c],byte +0x0
pf_at 0x79ef
l_kernel_0002810d: and dword [ebp-0x48],byte +0x0
pf_at 0x79f3
l_kernel_00028111: and dword [ebp-0x44],byte +0x0
pf_at 0x79f7
l_kernel_00028115: and dword [ebp-0x40],byte +0x0
pf_at 0x79fb
l_kernel_00028119: and dword [ebp-0x3c],byte +0x0
pf_at 0x79ff
l_kernel_0002811d: and dword [ebp-0x84],byte +0x0
pf_at 0x7a06
l_kernel_00028124: and dword [ebp-0x80],byte +0x0
pf_at 0x7a0a
l_kernel_00028128: and dword [ebp-0x7c],byte +0x0
pf_at 0x7a0e
l_kernel_0002812c: and dword [ebp-0x78],byte +0x0
pf_at 0x7a12
l_kernel_00028130: and dword [ebp-0x74],byte +0x0
pf_at 0x7a16
l_kernel_00028134: and dword [ebp-0x70],byte +0x0
pf_at 0x7a1a
l_kernel_00028138: and dword [ebp-0x6c],byte +0x0
pf_at 0x7a1e
l_kernel_0002813c: and dword [ebp-0x68],byte +0x0
pf_at 0x7a22
l_kernel_00028140: inc dword [ebx+0x8]
pf_at 0x7a25
l_kernel_00028143: mov ecx,ebx
pf_at 0x7a27
l_kernel_00028145: lea edx,[ebp-0x58]
pf_at 0x7a2a
l_kernel_00028148: call 0x26473
pf_at 0x7a2f
l_kernel_0002814d: test al,al
pf_at 0x7a31
l_kernel_0002814f: jz near 0x2834d
pf_at 0x7a37
l_kernel_00028155: mov ecx,ebx
pf_at 0x7a39
l_kernel_00028157: mov edx,0x2cf06
pf_at 0x7a3e
l_kernel_0002815c: call 0x284c4
pf_at 0x7a43
l_kernel_00028161: test al,al
pf_at 0x7a45
l_kernel_00028163: jz short 0x281c1
pf_at 0x7a47
l_kernel_00028165: sub esp,byte +0xc
pf_at 0x7a4a
l_kernel_00028168: lea ecx,[ebp-0x38]
pf_at 0x7a4d
l_kernel_0002816b: lea edi,[ebp-0x58]
pf_at 0x7a50
l_kernel_0002816e: mov edx,edi
pf_at 0x7a52
l_kernel_00028170: lea esi,[ebp-0x84]
pf_at 0x7a58
l_kernel_00028176: push esi
pf_at 0x7a59
l_kernel_00028177: call 0x2af9d
pf_at 0x7a5e
l_kernel_0002817c: add esp,byte +0x10
pf_at 0x7a61
l_kernel_0002817f: mov [ebp-0x14],al
pf_at 0x7a64
l_kernel_00028182: mov ecx,edi
pf_at 0x7a66
l_kernel_00028184: lea edi,[ebp-0x38]
pf_at 0x7a69
l_kernel_00028187: call 0x24daf
pf_at 0x7a6e
l_kernel_0002818c: mov ecx,edi
pf_at 0x7a70
l_kernel_0002818e: call 0x24daf
pf_at 0x7a75
l_kernel_00028193: cmp byte [ebp-0x14],0x0
pf_at 0x7a79
l_kernel_00028197: jz short 0x281db
pf_at 0x7a7b
l_kernel_00028199: mov ecx,edi
pf_at 0x7a7d
l_kernel_0002819b: call 0x24daf
pf_at 0x7a82
l_kernel_000281a0: push byte +0x8
pf_at 0x7a84
l_kernel_000281a2: pop ecx
pf_at 0x7a85
l_kernel_000281a3: rep movsd
pf_at 0x7a87
l_kernel_000281a5: mov edi,[ebp-0x18]
pf_at 0x7a8a
l_kernel_000281a8: jmp near 0x280d1
pf_at 0x7a8f
l_kernel_000281ad: mov ecx,edi
pf_at 0x7a91
l_kernel_000281af: call 0x24daf
pf_at 0x7a96
l_kernel_000281b4: push byte +0x8
pf_at 0x7a98
l_kernel_000281b6: pop ecx
pf_at 0x7a99
l_kernel_000281b7: lea esi,[ebp-0x38]
pf_at 0x7a9c
l_kernel_000281ba: rep movsd
pf_at 0x7a9e
l_kernel_000281bc: jmp near 0x27ca6
pf_at 0x7aa3
l_kernel_000281c1: lea ecx,[ebp-0x58]
pf_at 0x7aa6
l_kernel_000281c4: call 0x24daf
pf_at 0x7aab
l_kernel_000281c9: lea ecx,[ebp-0x38]
pf_at 0x7aae
l_kernel_000281cc: call 0x24daf
pf_at 0x7ab3
l_kernel_000281d1: sub esp,byte +0x4
pf_at 0x7ab6
l_kernel_000281d4: push dword 0x2d02f
pf_at 0x7abb
l_kernel_000281d9: jmp short 0x281e3
pf_at 0x7abd
l_kernel_000281db: sub esp,byte +0x4
pf_at 0x7ac0
l_kernel_000281de: push dword 0x2d03c
pf_at 0x7ac5
l_kernel_000281e3: push dword [ebp-0x10]
pf_at 0x7ac8
l_kernel_000281e6: jmp near 0x27cbf
pf_at 0x7acd
l_kernel_000281eb: lea edx,[ebp-0x34]
pf_at 0x7ad0
l_kernel_000281ee: mov ecx,esi
pf_at 0x7ad2
l_kernel_000281f0: call 0x286b0
pf_at 0x7ad7
l_kernel_000281f5: test al,al
pf_at 0x7ad9
l_kernel_000281f7: jz short 0x28217
pf_at 0x7adb
l_kernel_000281f9: mov dword [ebp-0x38],0x1
pf_at 0x7ae2
l_kernel_00028200: mov eax,[ebp-0x34]
pf_at 0x7ae5
l_kernel_00028203: mov [ebp-0x88],eax
pf_at 0x7aeb
l_kernel_00028209: fild dword [ebp-0x88]
pf_at 0x7af1
l_kernel_0002820f: fstp dword [ebp-0x30]
pf_at 0x7af4
l_kernel_00028212: jmp near 0x280ce
pf_at 0x7af9
l_kernel_00028217: mov ecx,esi
pf_at 0x7afb
l_kernel_00028219: call 0x28826
pf_at 0x7b00
l_kernel_0002821e: test al,al
pf_at 0x7b02
l_kernel_00028220: jz short 0x28279
pf_at 0x7b04
l_kernel_00028222: lea edx,[ebp-0x30]
pf_at 0x7b07
l_kernel_00028225: mov ecx,esi
pf_at 0x7b09
l_kernel_00028227: call 0x24e95
pf_at 0x7b0e
l_kernel_0002822c: test al,al
pf_at 0x7b10
l_kernel_0002822e: jz short 0x28279
pf_at 0x7b12
l_kernel_00028230: mov dword [ebp-0x38],0x2
pf_at 0x7b19
l_kernel_00028237: fld dword [ebp-0x30]
pf_at 0x7b1c
l_kernel_0002823a: fnstcw [ebp-0x5a]
pf_at 0x7b1f
l_kernel_0002823d: movzx eax,word [ebp-0x5a]
pf_at 0x7b23
l_kernel_00028241: or eax,0xc00
pf_at 0x7b28
l_kernel_00028246: mov [ebp-0x62],ax
pf_at 0x7b2c
l_kernel_0002824a: fldcw [ebp-0x62]
pf_at 0x7b2f
l_kernel_0002824d: fistp dword [ebp-0x8c]
pf_at 0x7b35
l_kernel_00028253: fldcw [ebp-0x5a]
pf_at 0x7b38
l_kernel_00028256: mov eax,[ebp-0x8c]
pf_at 0x7b3e
l_kernel_0002825c: mov [ebp-0x34],eax
pf_at 0x7b41
l_kernel_0002825f: jmp near 0x280ce
pf_at 0x7b46
l_kernel_00028264: lea ecx,[ebp-0x38]
pf_at 0x7b49
l_kernel_00028267: call 0x24daf
pf_at 0x7b4e
l_kernel_0002826c: sub esp,byte +0x4
pf_at 0x7b51
l_kernel_0002826f: push dword 0x2cee3
pf_at 0x7b56
l_kernel_00028274: jmp near 0x281e3
pf_at 0x7b5b
l_kernel_00028279: mov ecx,esi
pf_at 0x7b5d
l_kernel_0002827b: call 0x28877
pf_at 0x7b62
l_kernel_00028280: test al,al
pf_at 0x7b64
l_kernel_00028282: jz near 0x28323
pf_at 0x7b6a
l_kernel_00028288: mov ecx,ebx
pf_at 0x7b6c
l_kernel_0002828a: mov edx,0x2ced0
pf_at 0x7b71
l_kernel_0002828f: call 0x284c4
pf_at 0x7b76
l_kernel_00028294: test al,al
pf_at 0x7b78
l_kernel_00028296: jz near 0x28385
pf_at 0x7b7e
l_kernel_0002829c: mov [ebp-0x10],esi
pf_at 0x7b81
l_kernel_0002829f: and dword [ebp-0x84],byte +0x0
pf_at 0x7b88
l_kernel_000282a6: and dword [ebp-0x80],byte +0x0
pf_at 0x7b8c
l_kernel_000282aa: and dword [ebp-0x7c],byte +0x0
pf_at 0x7b90
l_kernel_000282ae: mov ecx,ebx
pf_at 0x7b92
l_kernel_000282b0: mov edx,0x2ced2
pf_at 0x7b97
l_kernel_000282b5: call 0x284c4
pf_at 0x7b9c
l_kernel_000282ba: xor esi,esi
pf_at 0x7b9e
l_kernel_000282bc: mov edi,0x0
pf_at 0x7ba3
l_kernel_000282c1: test al,al
pf_at 0x7ba5
l_kernel_000282c3: jz near 0x283d7
pf_at 0x7bab
l_kernel_000282c9: mov ecx,[ebx]
pf_at 0x7bad
l_kernel_000282cb: sub esp,byte +0x4
pf_at 0x7bb0
l_kernel_000282ce: lea eax,[ebp-0x38]
pf_at 0x7bb3
l_kernel_000282d1: mov edx,[ebp-0x10]
pf_at 0x7bb6
l_kernel_000282d4: push eax
pf_at 0x7bb7
l_kernel_000282d5: push esi
pf_at 0x7bb8
l_kernel_000282d6: push edi
pf_at 0x7bb9
l_kernel_000282d7: call 0x28be0
pf_at 0x7bbe
l_kernel_000282dc: add esp,byte +0x10
pf_at 0x7bc1
l_kernel_000282df: mov [ebp-0x14],al
pf_at 0x7bc4
l_kernel_000282e2: lea ecx,[ebp-0x84]
pf_at 0x7bca
l_kernel_000282e8: call 0x28ab1
pf_at 0x7bcf
l_kernel_000282ed: cmp byte [ebp-0x14],0x0
pf_at 0x7bd3
l_kernel_000282f1: jz short 0x2834d
pf_at 0x7bd5
l_kernel_000282f3: mov edi,[ebp-0x18]
pf_at 0x7bd8
l_kernel_000282f6: mov esi,[ebp-0x10]
pf_at 0x7bdb
l_kernel_000282f9: jmp near 0x280ce
pf_at 0x7be0
l_kernel_000282fe: lea ecx,[ebp-0x84]
pf_at 0x7be6
l_kernel_00028304: call 0x24daf
pf_at 0x7beb
l_kernel_00028309: lea ecx,[ebp-0x58]
pf_at 0x7bee
l_kernel_0002830c: call 0x24daf
pf_at 0x7bf3
l_kernel_00028311: lea ecx,[ebp-0x38]
pf_at 0x7bf6
l_kernel_00028314: call 0x24daf
pf_at 0x7bfb
l_kernel_00028319: sub esp,byte +0x4
pf_at 0x7bfe
l_kernel_0002831c: push dword 0x2cf20
pf_at 0x7c03
l_kernel_00028321: jmp short 0x2837d
pf_at 0x7c05
l_kernel_00028323: sub esp,byte +0x4
pf_at 0x7c08
l_kernel_00028326: push dword 0x2d01e
pf_at 0x7c0d
l_kernel_0002832b: jmp near 0x284be
pf_at 0x7c12
l_kernel_00028330: lea ecx,[ebp-0x38]
pf_at 0x7c15
l_kernel_00028333: call 0x24daf
pf_at 0x7c1a
l_kernel_00028338: sub esp,byte +0x4
pf_at 0x7c1d
l_kernel_0002833b: push dword 0x2cf45
pf_at 0x7c22
l_kernel_00028340: jmp near 0x27c7a
pf_at 0x7c27
l_kernel_00028345: lea ecx,[ebp-0x58]
pf_at 0x7c2a
l_kernel_00028348: call 0x24daf
pf_at 0x7c2f
l_kernel_0002834d: lea ecx,[ebp-0x38]
pf_at 0x7c32
l_kernel_00028350: call 0x24daf
pf_at 0x7c37
l_kernel_00028355: jmp near 0x27cc9
pf_at 0x7c3c
l_kernel_0002835a: lea ecx,[ebp-0x84]
pf_at 0x7c42
l_kernel_00028360: call 0x24daf
pf_at 0x7c47
l_kernel_00028365: lea ecx,[ebp-0x58]
pf_at 0x7c4a
l_kernel_00028368: call 0x24daf
pf_at 0x7c4f
l_kernel_0002836d: lea ecx,[ebp-0x38]
pf_at 0x7c52
l_kernel_00028370: call 0x24daf
pf_at 0x7c57
l_kernel_00028375: sub esp,byte +0x4
pf_at 0x7c5a
l_kernel_00028378: push dword 0x2cf83
pf_at 0x7c5f
l_kernel_0002837d: push dword [ebp-0x14]
pf_at 0x7c62
l_kernel_00028380: jmp near 0x27cbf
pf_at 0x7c67
l_kernel_00028385: mov ecx,[ebx]
pf_at 0x7c69
l_kernel_00028387: sub esp,byte +0xc
pf_at 0x7c6c
l_kernel_0002838a: lea eax,[ebp-0x38]
pf_at 0x7c6f
l_kernel_0002838d: mov edx,esi
pf_at 0x7c71
l_kernel_0002838f: push eax
pf_at 0x7c72
l_kernel_00028390: call 0x2af4b
pf_at 0x7c77
l_kernel_00028395: add esp,byte +0x10
pf_at 0x7c7a
l_kernel_00028398: test al,al
pf_at 0x7c7c
l_kernel_0002839a: jz near 0x27cc9
pf_at 0x7c82
l_kernel_000283a0: jmp near 0x280ce
pf_at 0x7c87
l_kernel_000283a5: lea ecx,[ebp-0x38]
pf_at 0x7c8a
l_kernel_000283a8: call 0x24daf
pf_at 0x7c8f
l_kernel_000283ad: sub esp,byte +0x4
pf_at 0x7c92
l_kernel_000283b0: push dword 0x2cf65
pf_at 0x7c97
l_kernel_000283b5: jmp near 0x284be
pf_at 0x7c9c
l_kernel_000283ba: lea ecx,[ebp-0x58]
pf_at 0x7c9f
l_kernel_000283bd: call 0x24daf
pf_at 0x7ca4
l_kernel_000283c2: lea ecx,[ebp-0x38]
pf_at 0x7ca7
l_kernel_000283c5: call 0x24daf
pf_at 0x7cac
l_kernel_000283ca: sub esp,byte +0x4
pf_at 0x7caf
l_kernel_000283cd: push dword 0x2cf99
pf_at 0x7cb4
l_kernel_000283d2: jmp near 0x284be
pf_at 0x7cb9
l_kernel_000283d7: lea esi,[ebp-0x58]
pf_at 0x7cbc
l_kernel_000283da: lea edi,[ebp-0x84]
pf_at 0x7cc2
l_kernel_000283e0: and dword [ebp-0x58],byte +0x0
pf_at 0x7cc6
l_kernel_000283e4: and dword [ebp-0x54],byte +0x0
pf_at 0x7cca
l_kernel_000283e8: and dword [ebp-0x50],byte +0x0
pf_at 0x7cce
l_kernel_000283ec: and dword [ebp-0x4c],byte +0x0
pf_at 0x7cd2
l_kernel_000283f0: and dword [ebp-0x48],byte +0x0
pf_at 0x7cd6
l_kernel_000283f4: and dword [ebp-0x44],byte +0x0
pf_at 0x7cda
l_kernel_000283f8: and dword [ebp-0x40],byte +0x0
pf_at 0x7cde
l_kernel_000283fc: and dword [ebp-0x3c],byte +0x0
pf_at 0x7ce2
l_kernel_00028400: mov ecx,ebx
pf_at 0x7ce4
l_kernel_00028402: mov edx,esi
pf_at 0x7ce6
l_kernel_00028404: call 0x26473
pf_at 0x7ceb
l_kernel_00028409: test al,al
pf_at 0x7ced
l_kernel_0002840b: jz short 0x2845e
pf_at 0x7cef
l_kernel_0002840d: mov ecx,edi
pf_at 0x7cf1
l_kernel_0002840f: mov edx,esi
pf_at 0x7cf3
l_kernel_00028411: call 0x28af3
pf_at 0x7cf8
l_kernel_00028416: mov [ebp-0x14],al
pf_at 0x7cfb
l_kernel_00028419: mov ecx,esi
pf_at 0x7cfd
l_kernel_0002841b: call 0x24daf
pf_at 0x7d02
l_kernel_00028420: cmp byte [ebp-0x14],0x0
pf_at 0x7d06
l_kernel_00028424: jz short 0x28476
pf_at 0x7d08
l_kernel_00028426: mov ecx,ebx
pf_at 0x7d0a
l_kernel_00028428: mov edx,0x2ced2
pf_at 0x7d0f
l_kernel_0002842d: call 0x284c4
pf_at 0x7d14
l_kernel_00028432: test al,al
pf_at 0x7d16
l_kernel_00028434: jnz short 0x2848e
pf_at 0x7d18
l_kernel_00028436: mov ecx,ebx
pf_at 0x7d1a
l_kernel_00028438: mov edx,0x2cf08
pf_at 0x7d1f
l_kernel_0002843d: call 0x284c4
pf_at 0x7d24
l_kernel_00028442: test al,al
pf_at 0x7d26
l_kernel_00028444: jnz short 0x283e0
pf_at 0x7d28
l_kernel_00028446: lea ecx,[ebp-0x84]
pf_at 0x7d2e
l_kernel_0002844c: call 0x28ab1
pf_at 0x7d33
l_kernel_00028451: sub esp,byte +0x4
pf_at 0x7d36
l_kernel_00028454: push dword 0x2d00a
pf_at 0x7d3b
l_kernel_00028459: jmp near 0x281e3
pf_at 0x7d40
l_kernel_0002845e: lea ecx,[ebp-0x58]
pf_at 0x7d43
l_kernel_00028461: call 0x24daf
pf_at 0x7d48
l_kernel_00028466: lea ecx,[ebp-0x84]
pf_at 0x7d4e
l_kernel_0002846c: call 0x28ab1
pf_at 0x7d53
l_kernel_00028471: jmp near 0x27cc9
pf_at 0x7d58
l_kernel_00028476: lea ecx,[ebp-0x84]
pf_at 0x7d5e
l_kernel_0002847c: call 0x28ab1
pf_at 0x7d63
l_kernel_00028481: sub esp,byte +0x4
pf_at 0x7d66
l_kernel_00028484: push dword 0x2cfe1
pf_at 0x7d6b
l_kernel_00028489: jmp near 0x281e3
pf_at 0x7d70
l_kernel_0002848e: mov esi,[ebp-0x84]
pf_at 0x7d76
l_kernel_00028494: mov edi,[ebp-0x7c]
pf_at 0x7d79
l_kernel_00028497: jmp near 0x282c9
pf_at 0x7d7e
l_kernel_0002849c: lea ecx,[ebp-0x38]
pf_at 0x7d81
l_kernel_0002849f: call 0x24daf
pf_at 0x7d86
l_kernel_000284a4: sub esp,byte +0x4
pf_at 0x7d89
l_kernel_000284a7: push dword 0x2cf83
pf_at 0x7d8e
l_kernel_000284ac: jmp short 0x284be
pf_at 0x7d90
l_kernel_000284ae: lea ecx,[ebp-0x38]
pf_at 0x7d93
l_kernel_000284b1: call 0x24daf
pf_at 0x7d98
l_kernel_000284b6: sub esp,byte +0x4
pf_at 0x7d9b
l_kernel_000284b9: push dword 0x2cf20
pf_at 0x7da0
l_kernel_000284be: push esi
pf_at 0x7da1
l_kernel_000284bf: jmp near 0x27cbf
pf_at 0x7da6
l_kernel_000284c4: push ebp
pf_at 0x7da7
l_kernel_000284c5: mov ebp,esp
pf_at 0x7da9
l_kernel_000284c7: push esi
pf_at 0x7daa
l_kernel_000284c8: push eax
pf_at 0x7dab
l_kernel_000284c9: mov esi,ecx
pf_at 0x7dad
l_kernel_000284cb: test ecx,ecx
pf_at 0x7daf
l_kernel_000284cd: setz al
pf_at 0x7db2
l_kernel_000284d0: test edx,edx
pf_at 0x7db4
l_kernel_000284d2: setz cl
pf_at 0x7db7
l_kernel_000284d5: or cl,al
pf_at 0x7db9
l_kernel_000284d7: jnz short 0x284f9
pf_at 0x7dbb
l_kernel_000284d9: mov ecx,[esi+0x4]
pf_at 0x7dbe
l_kernel_000284dc: mov eax,[esi+0x8]
pf_at 0x7dc1
l_kernel_000284df: cmp eax,[ecx]
pf_at 0x7dc3
l_kernel_000284e1: jnc short 0x284f9
pf_at 0x7dc5
l_kernel_000284e3: mov ecx,[ecx+0x8]
pf_at 0x7dc8
l_kernel_000284e6: sub esp,byte +0x8
pf_at 0x7dcb
l_kernel_000284e9: push edx
pf_at 0x7dcc
l_kernel_000284ea: push dword [ecx+eax*4]
pf_at 0x7dcf
l_kernel_000284ed: call 0x20cea
pf_at 0x7dd4
l_kernel_000284f2: add esp,byte +0x10
pf_at 0x7dd7
l_kernel_000284f5: test eax,eax
pf_at 0x7dd9
l_kernel_000284f7: jz short 0x28501
pf_at 0x7ddb
l_kernel_000284f9: xor eax,eax
pf_at 0x7ddd
l_kernel_000284fb: add esp,byte +0x4
pf_at 0x7de0
l_kernel_000284fe: pop esi
pf_at 0x7de1
l_kernel_000284ff: pop ebp
pf_at 0x7de2
l_kernel_00028500: ret
pf_at 0x7de3
l_kernel_00028501: inc dword [esi+0x8]
pf_at 0x7de6
l_kernel_00028504: mov al,0x1
pf_at 0x7de8
l_kernel_00028506: jmp short 0x284fb
pf_at 0x7dea
l_kernel_00028508: push ebp
pf_at 0x7deb
l_kernel_00028509: mov ebp,esp
pf_at 0x7ded
l_kernel_0002850b: push edi
pf_at 0x7dee
l_kernel_0002850c: push esi
pf_at 0x7def
l_kernel_0002850d: sub esp,byte +0x10
pf_at 0x7df2
l_kernel_00028510: mov esi,edx
pf_at 0x7df4
l_kernel_00028512: mov edi,ecx
pf_at 0x7df6
l_kernel_00028514: call 0x24c40
pf_at 0x7dfb
l_kernel_00028519: mov dword [edi],0x1
pf_at 0x7e01
l_kernel_0002851f: mov [edi+0x4],esi
pf_at 0x7e04
l_kernel_00028522: mov [ebp-0xc],esi
pf_at 0x7e07
l_kernel_00028525: fild dword [ebp-0xc]
pf_at 0x7e0a
l_kernel_00028528: fstp dword [edi+0x8]
pf_at 0x7e0d
l_kernel_0002852b: mov eax,edi
pf_at 0x7e0f
l_kernel_0002852d: add esp,byte +0x10
pf_at 0x7e12
l_kernel_00028530: pop esi
pf_at 0x7e13
l_kernel_00028531: pop edi
pf_at 0x7e14
l_kernel_00028532: pop ebp
pf_at 0x7e15
l_kernel_00028533: ret
pf_at 0x7e16
l_kernel_00028534: test ecx,ecx
pf_at 0x7e18
l_kernel_00028536: jz short 0x2857a
pf_at 0x7e1a
l_kernel_00028538: push ebp
pf_at 0x7e1b
l_kernel_00028539: mov ebp,esp
pf_at 0x7e1d
l_kernel_0002853b: push edi
pf_at 0x7e1e
l_kernel_0002853c: push esi
pf_at 0x7e1f
l_kernel_0002853d: sub esp,byte +0x10
pf_at 0x7e22
l_kernel_00028540: mov esi,ecx
pf_at 0x7e24
l_kernel_00028542: mov dword [esp],0x10
pf_at 0x7e2b
l_kernel_00028549: call 0x20ae5
pf_at 0x7e30
l_kernel_0002854e: test eax,eax
pf_at 0x7e32
l_kernel_00028550: jz short 0x2857d
pf_at 0x7e34
l_kernel_00028552: mov edi,eax
pf_at 0x7e36
l_kernel_00028554: mov dword [eax],0x1
pf_at 0x7e3c
l_kernel_0002855a: and dword [eax+0x4],byte +0x0
pf_at 0x7e40
l_kernel_0002855e: and dword [eax+0x8],byte +0x0
pf_at 0x7e44
l_kernel_00028562: and dword [eax+0xc],byte +0x0
pf_at 0x7e48
l_kernel_00028566: mov ecx,esi
pf_at 0x7e4a
l_kernel_00028568: call 0x24daf
pf_at 0x7e4f
l_kernel_0002856d: mov dword [esi],0x7
pf_at 0x7e55
l_kernel_00028573: mov [esi+0x18],edi
pf_at 0x7e58
l_kernel_00028576: mov al,0x1
pf_at 0x7e5a
l_kernel_00028578: jmp short 0x2857f
pf_at 0x7e5c
l_kernel_0002857a: xor eax,eax
pf_at 0x7e5e
l_kernel_0002857c: ret
pf_at 0x7e5f
l_kernel_0002857d: xor eax,eax
pf_at 0x7e61
l_kernel_0002857f: add esp,byte +0x10
pf_at 0x7e64
l_kernel_00028582: pop esi
pf_at 0x7e65
l_kernel_00028583: pop edi
pf_at 0x7e66
l_kernel_00028584: pop ebp
pf_at 0x7e67
l_kernel_00028585: ret
pf_at 0x7e68
l_kernel_00028586: push ebp
pf_at 0x7e69
l_kernel_00028587: mov ebp,esp
pf_at 0x7e6b
l_kernel_00028589: push edi
pf_at 0x7e6c
l_kernel_0002858a: push esi
pf_at 0x7e6d
l_kernel_0002858b: mov edi,ecx
pf_at 0x7e6f
l_kernel_0002858d: test ecx,ecx
pf_at 0x7e71
l_kernel_0002858f: setz al
pf_at 0x7e74
l_kernel_00028592: test edx,edx
pf_at 0x7e76
l_kernel_00028594: setz cl
pf_at 0x7e79
l_kernel_00028597: or cl,al
pf_at 0x7e7b
l_kernel_00028599: jnz short 0x285c4
pf_at 0x7e7d
l_kernel_0002859b: mov esi,edx
pf_at 0x7e7f
l_kernel_0002859d: mov edx,[edi+0x4]
pf_at 0x7e82
l_kernel_000285a0: inc edx
pf_at 0x7e83
l_kernel_000285a1: mov ecx,edi
pf_at 0x7e85
l_kernel_000285a3: call 0x2b0c3
pf_at 0x7e8a
l_kernel_000285a8: test al,al
pf_at 0x7e8c
l_kernel_000285aa: jz short 0x285c4
pf_at 0x7e8e
l_kernel_000285ac: mov eax,[edi+0x4]
pf_at 0x7e91
l_kernel_000285af: mov ecx,[edi+0xc]
pf_at 0x7e94
l_kernel_000285b2: shl eax,byte 0x5
pf_at 0x7e97
l_kernel_000285b5: add ecx,eax
pf_at 0x7e99
l_kernel_000285b7: add ecx,byte -0x20
pf_at 0x7e9c
l_kernel_000285ba: mov edx,esi
pf_at 0x7e9e
l_kernel_000285bc: pop esi
pf_at 0x7e9f
l_kernel_000285bd: pop edi
pf_at 0x7ea0
l_kernel_000285be: pop ebp
pf_at 0x7ea1
l_kernel_000285bf: jmp near 0x25048
pf_at 0x7ea6
l_kernel_000285c4: xor eax,eax
pf_at 0x7ea8
l_kernel_000285c6: pop esi
pf_at 0x7ea9
l_kernel_000285c7: pop edi
pf_at 0x7eaa
l_kernel_000285c8: pop ebp
pf_at 0x7eab
l_kernel_000285c9: ret
pf_at 0x7eac
l_kernel_000285ca: test ecx,ecx
pf_at 0x7eae
l_kernel_000285cc: jz short 0x28610
pf_at 0x7eb0
l_kernel_000285ce: push ebp
pf_at 0x7eb1
l_kernel_000285cf: mov ebp,esp
pf_at 0x7eb3
l_kernel_000285d1: push edi
pf_at 0x7eb4
l_kernel_000285d2: push esi
pf_at 0x7eb5
l_kernel_000285d3: sub esp,byte +0x10
pf_at 0x7eb8
l_kernel_000285d6: mov esi,ecx
pf_at 0x7eba
l_kernel_000285d8: mov dword [esp],0x10
pf_at 0x7ec1
l_kernel_000285df: call 0x20ae5
pf_at 0x7ec6
l_kernel_000285e4: test eax,eax
pf_at 0x7ec8
l_kernel_000285e6: jz short 0x28613
pf_at 0x7eca
l_kernel_000285e8: mov edi,eax
pf_at 0x7ecc
l_kernel_000285ea: mov dword [eax],0x1
pf_at 0x7ed2
l_kernel_000285f0: and dword [eax+0x4],byte +0x0
pf_at 0x7ed6
l_kernel_000285f4: and dword [eax+0x8],byte +0x0
pf_at 0x7eda
l_kernel_000285f8: and dword [eax+0xc],byte +0x0
pf_at 0x7ede
l_kernel_000285fc: mov ecx,esi
pf_at 0x7ee0
l_kernel_000285fe: call 0x24daf
pf_at 0x7ee5
l_kernel_00028603: mov dword [esi],0x8
pf_at 0x7eeb
l_kernel_00028609: mov [esi+0x1c],edi
pf_at 0x7eee
l_kernel_0002860c: mov al,0x1
pf_at 0x7ef0
l_kernel_0002860e: jmp short 0x28615
pf_at 0x7ef2
l_kernel_00028610: xor eax,eax
pf_at 0x7ef4
l_kernel_00028612: ret
pf_at 0x7ef5
l_kernel_00028613: xor eax,eax
pf_at 0x7ef7
l_kernel_00028615: add esp,byte +0x10
pf_at 0x7efa
l_kernel_00028618: pop esi
pf_at 0x7efb
l_kernel_00028619: pop edi
pf_at 0x7efc
l_kernel_0002861a: pop ebp
pf_at 0x7efd
l_kernel_0002861b: ret
pf_at 0x7efe
l_kernel_0002861c: test ecx,ecx
pf_at 0x7f00
l_kernel_0002861e: jz short 0x28652
pf_at 0x7f02
l_kernel_00028620: push ebp
pf_at 0x7f03
l_kernel_00028621: mov ebp,esp
pf_at 0x7f05
l_kernel_00028623: push esi
pf_at 0x7f06
l_kernel_00028624: push eax
pf_at 0x7f07
l_kernel_00028625: mov esi,ecx
pf_at 0x7f09
l_kernel_00028627: mov [esp],ecx
pf_at 0x7f0c
l_kernel_0002862a: call 0x20ccf
pf_at 0x7f11
l_kernel_0002862f: cmp eax,byte +0x2
pf_at 0x7f14
l_kernel_00028632: jc short 0x2864a
pf_at 0x7f16
l_kernel_00028634: movzx ecx,byte [esi]
pf_at 0x7f19
l_kernel_00028637: cmp ecx,byte +0x27
pf_at 0x7f1c
l_kernel_0002863a: jz short 0x28641
pf_at 0x7f1e
l_kernel_0002863c: cmp ecx,byte +0x22
pf_at 0x7f21
l_kernel_0002863f: jnz short 0x2864a
pf_at 0x7f23
l_kernel_00028641: cmp [esi+eax-0x1],cl
pf_at 0x7f27
l_kernel_00028645: setz al
pf_at 0x7f2a
l_kernel_00028648: jmp short 0x2864c
pf_at 0x7f2c
l_kernel_0002864a: xor eax,eax
pf_at 0x7f2e
l_kernel_0002864c: add esp,byte +0x4
pf_at 0x7f31
l_kernel_0002864f: pop esi
pf_at 0x7f32
l_kernel_00028650: pop ebp
pf_at 0x7f33
l_kernel_00028651: ret
pf_at 0x7f34
l_kernel_00028652: xor eax,eax
pf_at 0x7f36
l_kernel_00028654: ret
pf_at 0x7f37
l_kernel_00028655: push ebp
pf_at 0x7f38
l_kernel_00028656: mov ebp,esp
pf_at 0x7f3a
l_kernel_00028658: push edi
pf_at 0x7f3b
l_kernel_00028659: push esi
pf_at 0x7f3c
l_kernel_0002865a: sub esp,0x110
pf_at 0x7f42
l_kernel_00028660: mov edi,ecx
pf_at 0x7f44
l_kernel_00028662: test ecx,ecx
pf_at 0x7f46
l_kernel_00028664: setz al
pf_at 0x7f49
l_kernel_00028667: test edx,edx
pf_at 0x7f4b
l_kernel_00028669: setz cl
pf_at 0x7f4e
l_kernel_0002866c: or cl,al
pf_at 0x7f50
l_kernel_0002866e: jnz short 0x286a4
pf_at 0x7f52
l_kernel_00028670: mov esi,edx
pf_at 0x7f54
l_kernel_00028672: mov ecx,edi
pf_at 0x7f56
l_kernel_00028674: call 0x2861c
pf_at 0x7f5b
l_kernel_00028679: test al,al
pf_at 0x7f5d
l_kernel_0002867b: jz short 0x286a4
pf_at 0x7f5f
l_kernel_0002867d: mov dword [esp],0x100
pf_at 0x7f66
l_kernel_00028684: lea edx,[ebp-0x108]
pf_at 0x7f6c
l_kernel_0002868a: mov ecx,edi
pf_at 0x7f6e
l_kernel_0002868c: call 0x2b1d0
pf_at 0x7f73
l_kernel_00028691: test al,al
pf_at 0x7f75
l_kernel_00028693: jz short 0x286a4
pf_at 0x7f77
l_kernel_00028695: lea edx,[ebp-0x108]
pf_at 0x7f7d
l_kernel_0002869b: mov ecx,esi
pf_at 0x7f7f
l_kernel_0002869d: call 0x24c66
pf_at 0x7f84
l_kernel_000286a2: jmp short 0x286a6
pf_at 0x7f86
l_kernel_000286a4: xor eax,eax
pf_at 0x7f88
l_kernel_000286a6: add esp,0x110
pf_at 0x7f8e
l_kernel_000286ac: pop esi
pf_at 0x7f8f
l_kernel_000286ad: pop edi
pf_at 0x7f90
l_kernel_000286ae: pop ebp
pf_at 0x7f91
l_kernel_000286af: ret
pf_at 0x7f92
l_kernel_000286b0: push ebp
pf_at 0x7f93
l_kernel_000286b1: mov ebp,esp
pf_at 0x7f95
l_kernel_000286b3: push ebx
pf_at 0x7f96
l_kernel_000286b4: push edi
pf_at 0x7f97
l_kernel_000286b5: push esi
pf_at 0x7f98
l_kernel_000286b6: sub esp,0x11c
pf_at 0x7f9e
l_kernel_000286bc: mov edi,edx
pf_at 0x7fa0
l_kernel_000286be: test ecx,ecx
pf_at 0x7fa2
l_kernel_000286c0: setz al
pf_at 0x7fa5
l_kernel_000286c3: test edx,edx
pf_at 0x7fa7
l_kernel_000286c5: setz dl
pf_at 0x7faa
l_kernel_000286c8: xor ebx,ebx
pf_at 0x7fac
l_kernel_000286ca: or dl,al
pf_at 0x7fae
l_kernel_000286cc: jnz near 0x28810
pf_at 0x7fb4
l_kernel_000286d2: lea esi,[ebp-0x120]
pf_at 0x7fba
l_kernel_000286d8: push ecx
pf_at 0x7fbb
l_kernel_000286d9: push dword 0x2cb77
pf_at 0x7fc0
l_kernel_000286de: push dword 0x100
pf_at 0x7fc5
l_kernel_000286e3: push esi
pf_at 0x7fc6
l_kernel_000286e4: call 0x216bc
pf_at 0x7fcb
l_kernel_000286e9: add esp,byte +0x10
pf_at 0x7fce
l_kernel_000286ec: mov ecx,esi
pf_at 0x7fd0
l_kernel_000286ee: call 0x243a7
pf_at 0x7fd5
l_kernel_000286f3: movzx ecx,byte [ebp-0x120]
pf_at 0x7fdc
l_kernel_000286fa: test ecx,ecx
pf_at 0x7fde
l_kernel_000286fc: jz near 0x28810
pf_at 0x7fe4
l_kernel_00028702: xor eax,eax
pf_at 0x7fe6
l_kernel_00028704: inc eax
pf_at 0x7fe7
l_kernel_00028705: mov edx,eax
pf_at 0x7fe9
l_kernel_00028707: cmp ecx,byte +0x2b
pf_at 0x7fec
l_kernel_0002870a: jz short 0x28714
pf_at 0x7fee
l_kernel_0002870c: cmp ecx,byte +0x2d
pf_at 0x7ff1
l_kernel_0002870f: jnz short 0x28721
pf_at 0x7ff3
l_kernel_00028711: xor edx,edx
pf_at 0x7ff5
l_kernel_00028713: dec edx
pf_at 0x7ff6
l_kernel_00028714: mov ebx,esi
pf_at 0x7ff8
l_kernel_00028716: mov [ebp-0x18],edx
pf_at 0x7ffb
l_kernel_00028719: mov cl,[ebp-0x11f]
pf_at 0x8001
l_kernel_0002871f: jmp short 0x28728
pf_at 0x8003
l_kernel_00028721: mov ebx,esi
pf_at 0x8005
l_kernel_00028723: mov [ebp-0x18],eax
pf_at 0x8008
l_kernel_00028726: xor eax,eax
pf_at 0x800a
l_kernel_00028728: push byte +0xa
pf_at 0x800c
l_kernel_0002872a: pop esi
pf_at 0x800d
l_kernel_0002872b: cmp cl,0x30
pf_at 0x8010
l_kernel_0002872e: jz short 0x2873b
pf_at 0x8012
l_kernel_00028730: movzx ecx,cl
pf_at 0x8015
l_kernel_00028733: cmp ecx,byte +0x24
pf_at 0x8018
l_kernel_00028736: jnz short 0x28755
pf_at 0x801a
l_kernel_00028738: inc eax
pf_at 0x801b
l_kernel_00028739: jmp short 0x2874b
pf_at 0x801d
l_kernel_0002873b: movzx ecx,byte [eax+ebx+0x1]
pf_at 0x8022
l_kernel_00028740: or ecx,byte +0x20
pf_at 0x8025
l_kernel_00028743: cmp ecx,byte +0x78
pf_at 0x8028
l_kernel_00028746: jnz short 0x28755
pf_at 0x802a
l_kernel_00028748: or eax,byte +0x2
pf_at 0x802d
l_kernel_0002874b: push byte +0x10
pf_at 0x802f
l_kernel_0002874d: pop esi
pf_at 0x8030
l_kernel_0002874e: mov cl,0x1
pf_at 0x8032
l_kernel_00028750: mov [ebp-0x10],ecx
pf_at 0x8035
l_kernel_00028753: jmp short 0x2875c
pf_at 0x8037
l_kernel_00028755: mov dword [ebp-0x10],0x0
pf_at 0x803e
l_kernel_0002875c: xor ecx,ecx
pf_at 0x8040
l_kernel_0002875e: cmp byte [ebp+eax-0x120],0x0
pf_at 0x8048
l_kernel_00028766: jz near 0x2880e
pf_at 0x804e
l_kernel_0002876c: mov [ebp-0x20],edi
pf_at 0x8051
l_kernel_0002876f: lea edi,[eax+ebp]
pf_at 0x8054
l_kernel_00028772: add edi,0xfffffee0
pf_at 0x805a
l_kernel_00028778: xor eax,eax
pf_at 0x805c
l_kernel_0002877a: mov [ebp-0x14],esi
pf_at 0x805f
l_kernel_0002877d: movsx ebx,byte [edi]
pf_at 0x8062
l_kernel_00028780: test ebx,ebx
pf_at 0x8064
l_kernel_00028782: jz short 0x287ef
pf_at 0x8066
l_kernel_00028784: cmp byte [ebp-0x10],0x0
pf_at 0x806a
l_kernel_00028788: jz short 0x287a9
pf_at 0x806c
l_kernel_0002878a: mov esi,eax
pf_at 0x806e
l_kernel_0002878c: mov [ebp-0x1c],ecx
pf_at 0x8071
l_kernel_0002878f: mov ecx,ebx
pf_at 0x8073
l_kernel_00028791: call 0x2b303
pf_at 0x8078
l_kernel_00028796: test al,al
pf_at 0x807a
l_kernel_00028798: jz short 0x2880e
pf_at 0x807c
l_kernel_0002879a: mov eax,ebx
pf_at 0x807e
l_kernel_0002879c: add al,0xd0
pf_at 0x8080
l_kernel_0002879e: cmp al,0x9
pf_at 0x8082
l_kernel_000287a0: mov eax,esi
pf_at 0x8084
l_kernel_000287a2: ja short 0x287b8
pf_at 0x8086
l_kernel_000287a4: add ebx,byte -0x30
pf_at 0x8089
l_kernel_000287a7: jmp short 0x287d1
pf_at 0x808b
l_kernel_000287a9: mov edx,ebx
pf_at 0x808d
l_kernel_000287ab: add dl,0xd0
pf_at 0x8090
l_kernel_000287ae: cmp dl,0x9
pf_at 0x8093
l_kernel_000287b1: ja short 0x2880e
pf_at 0x8095
l_kernel_000287b3: add ebx,byte -0x30
pf_at 0x8098
l_kernel_000287b6: jmp short 0x287d4
pf_at 0x809a
l_kernel_000287b8: mov edx,ebx
pf_at 0x809c
l_kernel_000287ba: add dl,0x9f
pf_at 0x809f
l_kernel_000287bd: mov ecx,ebx
pf_at 0x80a1
l_kernel_000287bf: add cl,0xe0
pf_at 0x80a4
l_kernel_000287c2: cmp dl,0x1a
pf_at 0x80a7
l_kernel_000287c5: movzx ecx,cl
pf_at 0x80aa
l_kernel_000287c8: cmovnc ecx,ebx
pf_at 0x80ad
l_kernel_000287cb: movsx ebx,cl
pf_at 0x80b0
l_kernel_000287ce: add ebx,byte -0x37
pf_at 0x80b3
l_kernel_000287d1: mov ecx,[ebp-0x1c]
pf_at 0x80b6
l_kernel_000287d4: mov esi,[ebp-0x14]
pf_at 0x80b9
l_kernel_000287d7: mul esi
pf_at 0x80bb
l_kernel_000287d9: imul ecx,esi
pf_at 0x80be
l_kernel_000287dc: add eax,ebx
pf_at 0x80c0
l_kernel_000287de: adc ecx,edx
pf_at 0x80c2
l_kernel_000287e0: inc edi
pf_at 0x80c3
l_kernel_000287e1: cmp eax,0x80000001
pf_at 0x80c8
l_kernel_000287e6: mov edx,ecx
pf_at 0x80ca
l_kernel_000287e8: sbb edx,byte +0x0
pf_at 0x80cd
l_kernel_000287eb: jl short 0x2877d
pf_at 0x80cf
l_kernel_000287ed: jmp short 0x2880e
pf_at 0x80d1
l_kernel_000287ef: mov esi,[ebp-0x18]
pf_at 0x80d4
l_kernel_000287f2: mov edi,ecx
pf_at 0x80d6
l_kernel_000287f4: mov ecx,esi
pf_at 0x80d8
l_kernel_000287f6: sar ecx,byte 0x1f
pf_at 0x80db
l_kernel_000287f9: imul ecx,eax
pf_at 0x80de
l_kernel_000287fc: mul esi
pf_at 0x80e0
l_kernel_000287fe: imul edi,esi
pf_at 0x80e3
l_kernel_00028801: add edi,edx
pf_at 0x80e5
l_kernel_00028803: add edi,ecx
pf_at 0x80e7
l_kernel_00028805: mov ecx,eax
pf_at 0x80e9
l_kernel_00028807: sar ecx,byte 0x1f
pf_at 0x80ec
l_kernel_0002880a: xor ecx,edi
pf_at 0x80ee
l_kernel_0002880c: jz short 0x2881d
pf_at 0x80f0
l_kernel_0002880e: xor ebx,ebx
pf_at 0x80f2
l_kernel_00028810: mov eax,ebx
pf_at 0x80f4
l_kernel_00028812: add esp,0x11c
pf_at 0x80fa
l_kernel_00028818: pop esi
pf_at 0x80fb
l_kernel_00028819: pop edi
pf_at 0x80fc
l_kernel_0002881a: pop ebx
pf_at 0x80fd
l_kernel_0002881b: pop ebp
pf_at 0x80fe
l_kernel_0002881c: ret
pf_at 0x80ff
l_kernel_0002881d: mov ecx,[ebp-0x20]
pf_at 0x8102
l_kernel_00028820: mov [ecx],eax
pf_at 0x8104
l_kernel_00028822: mov bl,0x1
pf_at 0x8106
l_kernel_00028824: jmp short 0x28810
pf_at 0x8108
l_kernel_00028826: xor eax,eax
pf_at 0x810a
l_kernel_00028828: test ecx,ecx
pf_at 0x810c
l_kernel_0002882a: jz short 0x28874
pf_at 0x810e
l_kernel_0002882c: movzx edx,byte [ecx]
pf_at 0x8111
l_kernel_0002882f: test edx,edx
pf_at 0x8113
l_kernel_00028831: jz short 0x28874
pf_at 0x8115
l_kernel_00028833: cmp edx,byte +0x2d
pf_at 0x8118
l_kernel_00028836: jz short 0x2883d
pf_at 0x811a
l_kernel_00028838: cmp edx,byte +0x2b
pf_at 0x811d
l_kernel_0002883b: jnz short 0x28840
pf_at 0x811f
l_kernel_0002883d: xor eax,eax
pf_at 0x8121
l_kernel_0002883f: inc eax
pf_at 0x8122
l_kernel_00028840: push ebp
pf_at 0x8123
l_kernel_00028841: mov ebp,esp
pf_at 0x8125
l_kernel_00028843: push ebx
pf_at 0x8126
l_kernel_00028844: add ecx,eax
pf_at 0x8128
l_kernel_00028846: xor eax,eax
pf_at 0x812a
l_kernel_00028848: xor edx,edx
pf_at 0x812c
l_kernel_0002884a: mov bl,[ecx]
pf_at 0x812e
l_kernel_0002884c: test bl,bl
pf_at 0x8130
l_kernel_0002884e: jz short 0x28872
pf_at 0x8132
l_kernel_00028850: mov bh,bl
pf_at 0x8134
l_kernel_00028852: add bh,0xd0
pf_at 0x8137
l_kernel_00028855: cmp bh,0xa
pf_at 0x813a
l_kernel_00028858: jnc short 0x2885e
pf_at 0x813c
l_kernel_0002885a: mov al,0x1
pf_at 0x813e
l_kernel_0002885c: jmp short 0x2886d
pf_at 0x8140
l_kernel_0002885e: cmp bl,0x2e
pf_at 0x8143
l_kernel_00028861: setnz bl
pf_at 0x8146
l_kernel_00028864: or bl,dl
pf_at 0x8148
l_kernel_00028866: mov dl,0x1
pf_at 0x814a
l_kernel_00028868: test bl,0x1
pf_at 0x814d
l_kernel_0002886b: jnz short 0x28870
pf_at 0x814f
l_kernel_0002886d: inc ecx
pf_at 0x8150
l_kernel_0002886e: jmp short 0x2884a
pf_at 0x8152
l_kernel_00028870: xor eax,eax
pf_at 0x8154
l_kernel_00028872: pop ebx
pf_at 0x8155
l_kernel_00028873: pop ebp
pf_at 0x8156
l_kernel_00028874: and al,0x1
pf_at 0x8158
l_kernel_00028876: ret
pf_at 0x8159
l_kernel_00028877: test ecx,ecx
pf_at 0x815b
l_kernel_00028879: jz short 0x288c9
pf_at 0x815d
l_kernel_0002887b: mov al,[ecx]
pf_at 0x815f
l_kernel_0002887d: test al,al
pf_at 0x8161
l_kernel_0002887f: jz short 0x288c9
pf_at 0x8163
l_kernel_00028881: mov edx,eax
pf_at 0x8165
l_kernel_00028883: and dl,0xdf
pf_at 0x8168
l_kernel_00028886: add dl,0xbf
pf_at 0x816b
l_kernel_00028889: cmp dl,0x1a
pf_at 0x816e
l_kernel_0002888c: jc short 0x2889a
pf_at 0x8170
l_kernel_0002888e: cmp al,0x5f
pf_at 0x8172
l_kernel_00028890: jz short 0x2889a
pf_at 0x8174
l_kernel_00028892: movzx eax,al
pf_at 0x8177
l_kernel_00028895: cmp eax,byte +0x24
pf_at 0x817a
l_kernel_00028898: jnz short 0x288c9
pf_at 0x817c
l_kernel_0002889a: push ebp
pf_at 0x817d
l_kernel_0002889b: mov ebp,esp
pf_at 0x817f
l_kernel_0002889d: inc ecx
pf_at 0x8180
l_kernel_0002889e: mov dl,[ecx]
pf_at 0x8182
l_kernel_000288a0: test dl,dl
pf_at 0x8184
l_kernel_000288a2: setz al
pf_at 0x8187
l_kernel_000288a5: jz short 0x288c7
pf_at 0x8189
l_kernel_000288a7: inc ecx
pf_at 0x818a
l_kernel_000288a8: cmp dl,0x24
pf_at 0x818d
l_kernel_000288ab: jz short 0x2889e
pf_at 0x818f
l_kernel_000288ad: cmp dl,0x5f
pf_at 0x8192
l_kernel_000288b0: jz short 0x2889e
pf_at 0x8194
l_kernel_000288b2: mov dh,dl
pf_at 0x8196
l_kernel_000288b4: add dh,0xd0
pf_at 0x8199
l_kernel_000288b7: cmp dh,0xa
pf_at 0x819c
l_kernel_000288ba: jc short 0x2889e
pf_at 0x819e
l_kernel_000288bc: and dl,0xdf
pf_at 0x81a1
l_kernel_000288bf: add dl,0xbf
pf_at 0x81a4
l_kernel_000288c2: cmp dl,0x1a
pf_at 0x81a7
l_kernel_000288c5: jc short 0x2889e
pf_at 0x81a9
l_kernel_000288c7: pop ebp
pf_at 0x81aa
l_kernel_000288c8: ret
pf_at 0x81ab
l_kernel_000288c9: xor eax,eax
pf_at 0x81ad
l_kernel_000288cb: ret
pf_at 0x81ae
l_kernel_000288cc: push ebp
pf_at 0x81af
l_kernel_000288cd: mov ebp,esp
pf_at 0x81b1
l_kernel_000288cf: push edi
pf_at 0x81b2
l_kernel_000288d0: push esi
pf_at 0x81b3
l_kernel_000288d1: sub esp,0x80
pf_at 0x81b9
l_kernel_000288d7: mov esi,edx
pf_at 0x81bb
l_kernel_000288d9: test ecx,ecx
pf_at 0x81bd
l_kernel_000288db: setz al
pf_at 0x81c0
l_kernel_000288de: test edx,edx
pf_at 0x81c2
l_kernel_000288e0: setz dl
pf_at 0x81c5
l_kernel_000288e3: or dl,al
pf_at 0x81c7
l_kernel_000288e5: jnz short 0x28916
pf_at 0x81c9
l_kernel_000288e7: and dword [esi],byte +0x0
pf_at 0x81cc
l_kernel_000288ea: mov edx,[ecx]
pf_at 0x81ce
l_kernel_000288ec: xor eax,eax
pf_at 0x81d0
l_kernel_000288ee: dec edx
pf_at 0x81d1
l_kernel_000288ef: cmp edx,byte +0x4
pf_at 0x81d4
l_kernel_000288f2: ja near 0x2897f
pf_at 0x81da
l_kernel_000288f8: jmp [edx*4+0x2c9b8]
pf_at 0x81e1
l_kernel_000288ff: mov eax,[ecx+0x4]
pf_at 0x81e4
l_kernel_00028902: mov [esp+0xc],eax
pf_at 0x81e8
l_kernel_00028906: lea edi,[ebp-0x68]
pf_at 0x81eb
l_kernel_00028909: mov [esp],edi
pf_at 0x81ee
l_kernel_0002890c: mov dword [esp+0x8],0x2d051
pf_at 0x81f6
l_kernel_00028914: jmp short 0x2893f
pf_at 0x81f8
l_kernel_00028916: xor eax,eax
pf_at 0x81fa
l_kernel_00028918: jmp short 0x2897f
pf_at 0x81fc
l_kernel_0002891a: mov edx,esi
pf_at 0x81fe
l_kernel_0002891c: add esp,0x80
pf_at 0x8204
l_kernel_00028922: pop esi
pf_at 0x8205
l_kernel_00028923: pop edi
pf_at 0x8206
l_kernel_00028924: pop ebp
pf_at 0x8207
l_kernel_00028925: jmp near 0x2b32b
pf_at 0x820c
l_kernel_0002892a: fld dword [ecx+0x8]
pf_at 0x820f
l_kernel_0002892d: fstp qword [esp+0xc]
pf_at 0x8213
l_kernel_00028931: lea edi,[ebp-0x68]
pf_at 0x8216
l_kernel_00028934: mov [esp],edi
pf_at 0x8219
l_kernel_00028937: mov dword [esp+0x8],0x2d054
pf_at 0x8221
l_kernel_0002893f: mov dword [esp+0x4],0x60
pf_at 0x8229
l_kernel_00028947: call 0x216bc
pf_at 0x822e
l_kernel_0002894c: mov [esp],edi
pf_at 0x8231
l_kernel_0002894f: call 0x20ccf
pf_at 0x8236
l_kernel_00028954: mov ecx,edi
pf_at 0x8238
l_kernel_00028956: mov edx,eax
pf_at 0x823a
l_kernel_00028958: jmp short 0x28973
pf_at 0x823c
l_kernel_0002895a: xor edx,edx
pf_at 0x823e
l_kernel_0002895c: cmp dword [ecx+0x4],byte +0x0
pf_at 0x8242
l_kernel_00028960: setz dl
pf_at 0x8245
l_kernel_00028963: mov eax,0x2cf7d
pf_at 0x824a
l_kernel_00028968: mov ecx,0x2cf78
pf_at 0x824f
l_kernel_0002896d: cmovz ecx,eax
pf_at 0x8252
l_kernel_00028970: or edx,byte +0x4
pf_at 0x8255
l_kernel_00028973: call 0x24f9e
pf_at 0x825a
l_kernel_00028978: mov [esi],eax
pf_at 0x825c
l_kernel_0002897a: test eax,eax
pf_at 0x825e
l_kernel_0002897c: setnz al
pf_at 0x8261
l_kernel_0002897f: add esp,0x80
pf_at 0x8267
l_kernel_00028985: pop esi
pf_at 0x8268
l_kernel_00028986: pop edi
pf_at 0x8269
l_kernel_00028987: pop ebp
pf_at 0x826a
l_kernel_00028988: ret
pf_at 0x826b
l_kernel_00028989: push ebp
pf_at 0x826c
l_kernel_0002898a: mov ebp,esp
pf_at 0x826e
l_kernel_0002898c: push ebx
pf_at 0x826f
l_kernel_0002898d: push edi
pf_at 0x8270
l_kernel_0002898e: push esi
pf_at 0x8271
l_kernel_0002898f: sub esp,byte +0xc
pf_at 0x8274
l_kernel_00028992: mov esi,ecx
pf_at 0x8276
l_kernel_00028994: test ecx,ecx
pf_at 0x8278
l_kernel_00028996: setz al
pf_at 0x827b
l_kernel_00028999: test edx,edx
pf_at 0x827d
l_kernel_0002899b: setz cl
pf_at 0x8280
l_kernel_0002899e: xor edi,edi
pf_at 0x8282
l_kernel_000289a0: or cl,al
pf_at 0x8284
l_kernel_000289a2: jnz near 0x28aa7
pf_at 0x828a
l_kernel_000289a8: mov ebx,edx
pf_at 0x828c
l_kernel_000289aa: mov ecx,esi
pf_at 0x828e
l_kernel_000289ac: call 0x2b750
pf_at 0x8293
l_kernel_000289b1: test eax,eax
pf_at 0x8295
l_kernel_000289b3: js short 0x289c8
pf_at 0x8297
l_kernel_000289b5: add esi,byte +0xc
pf_at 0x829a
l_kernel_000289b8: mov ecx,[esi]
pf_at 0x829c
l_kernel_000289ba: imul eax,eax,byte +0x24
pf_at 0x829f
l_kernel_000289bd: lea edi,[ecx+eax]
pf_at 0x82a2
l_kernel_000289c0: add edi,byte +0x4
pf_at 0x82a5
l_kernel_000289c3: jmp near 0x28aa7
pf_at 0x82aa
l_kernel_000289c8: cmp byte [ebp+0x8],0x0
pf_at 0x82ae
l_kernel_000289cc: jz near 0x28aa7
pf_at 0x82b4
l_kernel_000289d2: mov eax,[esi+0x4]
pf_at 0x82b7
l_kernel_000289d5: mov ecx,[esi+0x8]
pf_at 0x82ba
l_kernel_000289d8: inc eax
pf_at 0x82bb
l_kernel_000289d9: cmp ecx,eax
pf_at 0x82bd
l_kernel_000289db: jnc short 0x28a4d
pf_at 0x82bf
l_kernel_000289dd: test ecx,ecx
pf_at 0x82c1
l_kernel_000289df: push byte +0x4
pf_at 0x82c3
l_kernel_000289e1: pop edi
pf_at 0x82c4
l_kernel_000289e2: cmovnz edi,ecx
pf_at 0x82c7
l_kernel_000289e5: cmp edi,eax
pf_at 0x82c9
l_kernel_000289e7: jnc short 0x289f3
pf_at 0x82cb
l_kernel_000289e9: test edi,edi
pf_at 0x82cd
l_kernel_000289eb: js short 0x289f1
pf_at 0x82cf
l_kernel_000289ed: add edi,edi
pf_at 0x82d1
l_kernel_000289ef: jmp short 0x289e5
pf_at 0x82d3
l_kernel_000289f1: mov edi,eax
pf_at 0x82d5
l_kernel_000289f3: mov eax,[esi+0xc]
pf_at 0x82d8
l_kernel_000289f6: imul ecx,edi,byte +0x24
pf_at 0x82db
l_kernel_000289f9: mov [esp+0x4],ecx
pf_at 0x82df
l_kernel_000289fd: mov [esp],eax
pf_at 0x82e2
l_kernel_00028a00: call 0x20b68
pf_at 0x82e7
l_kernel_00028a05: test eax,eax
pf_at 0x82e9
l_kernel_00028a07: jz near 0x28aa5
pf_at 0x82ef
l_kernel_00028a0d: mov ecx,[esi+0x8]
pf_at 0x82f2
l_kernel_00028a10: imul edx,ecx,byte +0x24
pf_at 0x82f5
l_kernel_00028a13: add edx,eax
pf_at 0x82f7
l_kernel_00028a15: add edx,byte +0x20
pf_at 0x82fa
l_kernel_00028a18: cmp ecx,edi
pf_at 0x82fc
l_kernel_00028a1a: jnc short 0x28a45
pf_at 0x82fe
l_kernel_00028a1c: and dword [edx-0x20],byte +0x0
pf_at 0x8302
l_kernel_00028a20: and dword [edx-0x1c],byte +0x0
pf_at 0x8306
l_kernel_00028a24: and dword [edx-0x18],byte +0x0
pf_at 0x830a
l_kernel_00028a28: and dword [edx-0x14],byte +0x0
pf_at 0x830e
l_kernel_00028a2c: and dword [edx-0x10],byte +0x0
pf_at 0x8312
l_kernel_00028a30: and dword [edx-0xc],byte +0x0
pf_at 0x8316
l_kernel_00028a34: and dword [edx-0x8],byte +0x0
pf_at 0x831a
l_kernel_00028a38: and dword [edx-0x4],byte +0x0
pf_at 0x831e
l_kernel_00028a3c: and dword [edx],byte +0x0
pf_at 0x8321
l_kernel_00028a3f: inc ecx
pf_at 0x8322
l_kernel_00028a40: add edx,byte +0x24
pf_at 0x8325
l_kernel_00028a43: jmp short 0x28a18
pf_at 0x8327
l_kernel_00028a45: mov [esi+0xc],eax
pf_at 0x832a
l_kernel_00028a48: mov [esi+0x8],edi
pf_at 0x832d
l_kernel_00028a4b: xor edi,edi
pf_at 0x832f
l_kernel_00028a4d: mov [esp],ebx
pf_at 0x8332
l_kernel_00028a50: call 0x20ccf
pf_at 0x8337
l_kernel_00028a55: mov ecx,ebx
pf_at 0x8339
l_kernel_00028a57: mov edx,eax
pf_at 0x833b
l_kernel_00028a59: call 0x24f9e
pf_at 0x8340
l_kernel_00028a5e: mov ecx,[esi+0xc]
pf_at 0x8343
l_kernel_00028a61: imul edx,[esi+0x4],byte +0x24
pf_at 0x8347
l_kernel_00028a65: mov [ecx+edx],eax
pf_at 0x834a
l_kernel_00028a68: test eax,eax
pf_at 0x834c
l_kernel_00028a6a: jz short 0x28aa7
pf_at 0x834e
l_kernel_00028a6c: and dword [ecx+edx+0x4],byte +0x0
pf_at 0x8353
l_kernel_00028a71: and dword [ecx+edx+0x8],byte +0x0
pf_at 0x8358
l_kernel_00028a76: and dword [ecx+edx+0xc],byte +0x0
pf_at 0x835d
l_kernel_00028a7b: and dword [ecx+edx+0x10],byte +0x0
pf_at 0x8362
l_kernel_00028a80: and dword [ecx+edx+0x14],byte +0x0
pf_at 0x8367
l_kernel_00028a85: and dword [ecx+edx+0x18],byte +0x0
pf_at 0x836c
l_kernel_00028a8a: and dword [ecx+edx+0x1c],byte +0x0
pf_at 0x8371
l_kernel_00028a8f: and dword [ecx+edx+0x20],byte +0x0
pf_at 0x8376
l_kernel_00028a94: mov eax,[esi+0x4]
pf_at 0x8379
l_kernel_00028a97: lea ecx,[eax+0x1]
pf_at 0x837c
l_kernel_00028a9a: mov [esi+0x4],ecx
pf_at 0x837f
l_kernel_00028a9d: add esi,byte +0xc
pf_at 0x8382
l_kernel_00028aa0: jmp near 0x289b8
pf_at 0x8387
l_kernel_00028aa5: xor edi,edi
pf_at 0x8389
l_kernel_00028aa7: mov eax,edi
pf_at 0x838b
l_kernel_00028aa9: add esp,byte +0xc
pf_at 0x838e
l_kernel_00028aac: pop esi
pf_at 0x838f
l_kernel_00028aad: pop edi
pf_at 0x8390
l_kernel_00028aae: pop ebx
pf_at 0x8391
l_kernel_00028aaf: pop ebp
pf_at 0x8392
l_kernel_00028ab0: ret
pf_at 0x8393
l_kernel_00028ab1: test ecx,ecx
pf_at 0x8395
l_kernel_00028ab3: jz short 0x28af2
pf_at 0x8397
l_kernel_00028ab5: push ebp
pf_at 0x8398
l_kernel_00028ab6: mov ebp,esp
pf_at 0x839a
l_kernel_00028ab8: push ebx
pf_at 0x839b
l_kernel_00028ab9: push edi
pf_at 0x839c
l_kernel_00028aba: push esi
pf_at 0x839d
l_kernel_00028abb: sub esp,byte +0xc
pf_at 0x83a0
l_kernel_00028abe: mov esi,ecx
pf_at 0x83a2
l_kernel_00028ac0: xor edi,edi
pf_at 0x83a4
l_kernel_00028ac2: xor ebx,ebx
pf_at 0x83a6
l_kernel_00028ac4: mov ecx,[esi+0x8]
pf_at 0x83a9
l_kernel_00028ac7: cmp ebx,[esi]
pf_at 0x83ab
l_kernel_00028ac9: jnc short 0x28ad8
pf_at 0x83ad
l_kernel_00028acb: add ecx,edi
pf_at 0x83af
l_kernel_00028acd: call 0x24daf
pf_at 0x83b4
l_kernel_00028ad2: inc ebx
pf_at 0x83b5
l_kernel_00028ad3: add edi,byte +0x20
pf_at 0x83b8
l_kernel_00028ad6: jmp short 0x28ac4
pf_at 0x83ba
l_kernel_00028ad8: mov [esp],ecx
pf_at 0x83bd
l_kernel_00028adb: call 0x20aee
pf_at 0x83c2
l_kernel_00028ae0: and dword [esi],byte +0x0
pf_at 0x83c5
l_kernel_00028ae3: and dword [esi+0x4],byte +0x0
pf_at 0x83c9
l_kernel_00028ae7: and dword [esi+0x8],byte +0x0
pf_at 0x83cd
l_kernel_00028aeb: add esp,byte +0xc
pf_at 0x83d0
l_kernel_00028aee: pop esi
pf_at 0x83d1
l_kernel_00028aef: pop edi
pf_at 0x83d2
l_kernel_00028af0: pop ebx
pf_at 0x83d3
l_kernel_00028af1: pop ebp
pf_at 0x83d4
l_kernel_00028af2: ret
pf_at 0x83d5
l_kernel_00028af3: push ebp
pf_at 0x83d6
l_kernel_00028af4: mov ebp,esp
pf_at 0x83d8
l_kernel_00028af6: push ebx
pf_at 0x83d9
l_kernel_00028af7: push edi
pf_at 0x83da
l_kernel_00028af8: push esi
pf_at 0x83db
l_kernel_00028af9: sub esp,byte +0xc
pf_at 0x83de
l_kernel_00028afc: mov esi,ecx
pf_at 0x83e0
l_kernel_00028afe: test ecx,ecx
pf_at 0x83e2
l_kernel_00028b00: setz al
pf_at 0x83e5
l_kernel_00028b03: test edx,edx
pf_at 0x83e7
l_kernel_00028b05: setz cl
pf_at 0x83ea
l_kernel_00028b08: or cl,al
pf_at 0x83ec
l_kernel_00028b0a: jnz near 0x28bd6
pf_at 0x83f2
l_kernel_00028b10: mov edi,edx
pf_at 0x83f4
l_kernel_00028b12: mov ecx,[esi]
pf_at 0x83f6
l_kernel_00028b14: mov edx,[esi+0x4]
pf_at 0x83f9
l_kernel_00028b17: lea eax,[ecx+0x1]
pf_at 0x83fc
l_kernel_00028b1a: cmp edx,eax
pf_at 0x83fe
l_kernel_00028b1c: jnc short 0x28b32
pf_at 0x8400
l_kernel_00028b1e: test edx,edx
pf_at 0x8402
l_kernel_00028b20: push byte +0x4
pf_at 0x8404
l_kernel_00028b22: pop ebx
pf_at 0x8405
l_kernel_00028b23: cmovnz ebx,edx
pf_at 0x8408
l_kernel_00028b26: cmp ebx,eax
pf_at 0x840a
l_kernel_00028b28: jnc short 0x28b39
pf_at 0x840c
l_kernel_00028b2a: test ebx,ebx
pf_at 0x840e
l_kernel_00028b2c: js short 0x28b37
pf_at 0x8410
l_kernel_00028b2e: add ebx,ebx
pf_at 0x8412
l_kernel_00028b30: jmp short 0x28b26
pf_at 0x8414
l_kernel_00028b32: mov eax,[esi+0x8]
pf_at 0x8417
l_kernel_00028b35: jmp short 0x28b93
pf_at 0x8419
l_kernel_00028b37: mov ebx,eax
pf_at 0x841b
l_kernel_00028b39: mov eax,ebx
pf_at 0x841d
l_kernel_00028b3b: shl eax,byte 0x5
pf_at 0x8420
l_kernel_00028b3e: sub esp,byte +0x8
pf_at 0x8423
l_kernel_00028b41: push eax
pf_at 0x8424
l_kernel_00028b42: push dword [esi+0x8]
pf_at 0x8427
l_kernel_00028b45: call 0x20b68
pf_at 0x842c
l_kernel_00028b4a: add esp,byte +0x10
pf_at 0x842f
l_kernel_00028b4d: test eax,eax
pf_at 0x8431
l_kernel_00028b4f: jz near 0x28bd6
pf_at 0x8437
l_kernel_00028b55: mov ecx,[esi+0x4]
pf_at 0x843a
l_kernel_00028b58: mov edx,ecx
pf_at 0x843c
l_kernel_00028b5a: shl edx,byte 0x5
pf_at 0x843f
l_kernel_00028b5d: add edx,eax
pf_at 0x8441
l_kernel_00028b5f: add edx,byte +0x1c
pf_at 0x8444
l_kernel_00028b62: cmp ecx,ebx
pf_at 0x8446
l_kernel_00028b64: jnc short 0x28b8b
pf_at 0x8448
l_kernel_00028b66: and dword [edx-0x1c],byte +0x0
pf_at 0x844c
l_kernel_00028b6a: and dword [edx-0x18],byte +0x0
pf_at 0x8450
l_kernel_00028b6e: and dword [edx-0x14],byte +0x0
pf_at 0x8454
l_kernel_00028b72: and dword [edx-0x10],byte +0x0
pf_at 0x8458
l_kernel_00028b76: and dword [edx-0xc],byte +0x0
pf_at 0x845c
l_kernel_00028b7a: and dword [edx-0x8],byte +0x0
pf_at 0x8460
l_kernel_00028b7e: and dword [edx-0x4],byte +0x0
pf_at 0x8464
l_kernel_00028b82: and dword [edx],byte +0x0
pf_at 0x8467
l_kernel_00028b85: inc ecx
pf_at 0x8468
l_kernel_00028b86: add edx,byte +0x20
pf_at 0x846b
l_kernel_00028b89: jmp short 0x28b62
pf_at 0x846d
l_kernel_00028b8b: mov [esi+0x8],eax
pf_at 0x8470
l_kernel_00028b8e: mov [esi+0x4],ebx
pf_at 0x8473
l_kernel_00028b91: mov ecx,[esi]
pf_at 0x8475
l_kernel_00028b93: shl ecx,byte 0x5
pf_at 0x8478
l_kernel_00028b96: and dword [eax+ecx],byte +0x0
pf_at 0x847c
l_kernel_00028b9a: and dword [eax+ecx+0x4],byte +0x0
pf_at 0x8481
l_kernel_00028b9f: and dword [eax+ecx+0x8],byte +0x0
pf_at 0x8486
l_kernel_00028ba4: and dword [eax+ecx+0xc],byte +0x0
pf_at 0x848b
l_kernel_00028ba9: and dword [eax+ecx+0x10],byte +0x0
pf_at 0x8490
l_kernel_00028bae: and dword [eax+ecx+0x14],byte +0x0
pf_at 0x8495
l_kernel_00028bb3: and dword [eax+ecx+0x18],byte +0x0
pf_at 0x849a
l_kernel_00028bb8: and dword [eax+ecx+0x1c],byte +0x0
pf_at 0x849f
l_kernel_00028bbd: mov ecx,[esi]
pf_at 0x84a1
l_kernel_00028bbf: shl ecx,byte 0x5
pf_at 0x84a4
l_kernel_00028bc2: add ecx,[esi+0x8]
pf_at 0x84a7
l_kernel_00028bc5: mov edx,edi
pf_at 0x84a9
l_kernel_00028bc7: call 0x25048
pf_at 0x84ae
l_kernel_00028bcc: test al,al
pf_at 0x84b0
l_kernel_00028bce: jz short 0x28bd6
pf_at 0x84b2
l_kernel_00028bd0: inc dword [esi]
pf_at 0x84b4
l_kernel_00028bd2: mov al,0x1
pf_at 0x84b6
l_kernel_00028bd4: jmp short 0x28bd8
pf_at 0x84b8
l_kernel_00028bd6: xor eax,eax
pf_at 0x84ba
l_kernel_00028bd8: add esp,byte +0xc
pf_at 0x84bd
l_kernel_00028bdb: pop esi
pf_at 0x84be
l_kernel_00028bdc: pop edi
pf_at 0x84bf
l_kernel_00028bdd: pop ebx
pf_at 0x84c0
l_kernel_00028bde: pop ebp
pf_at 0x84c1
l_kernel_00028bdf: ret
pf_at 0x84c2
l_kernel_00028be0: push ebp
pf_at 0x84c3
l_kernel_00028be1: mov ebp,esp
pf_at 0x84c5
l_kernel_00028be3: push ebx
pf_at 0x84c6
l_kernel_00028be4: push edi
pf_at 0x84c7
l_kernel_00028be5: push esi
pf_at 0x84c8
l_kernel_00028be6: sub esp,0x33c
pf_at 0x84ce
l_kernel_00028bec: mov esi,[ebp+0x10]
pf_at 0x84d1
l_kernel_00028bef: test edx,edx
pf_at 0x84d3
l_kernel_00028bf1: setz al
pf_at 0x84d6
l_kernel_00028bf4: test esi,esi
pf_at 0x84d8
l_kernel_00028bf6: setz ah
pf_at 0x84db
l_kernel_00028bf9: or ah,al
pf_at 0x84dd
l_kernel_00028bfb: jnz near 0x292e6
pf_at 0x84e3
l_kernel_00028c01: mov [ebp-0x20],ecx
pf_at 0x84e6
l_kernel_00028c04: mov edi,[ebp+0xc]
pf_at 0x84e9
l_kernel_00028c07: mov eax,esi
pf_at 0x84eb
l_kernel_00028c09: mov esi,edx
pf_at 0x84ed
l_kernel_00028c0b: mov ebx,[ebp+0x8]
pf_at 0x84f0
l_kernel_00028c0e: and dword [eax],byte +0x0
pf_at 0x84f3
l_kernel_00028c11: and dword [eax+0x4],byte +0x0
pf_at 0x84f7
l_kernel_00028c15: and dword [eax+0x8],byte +0x0
pf_at 0x84fb
l_kernel_00028c19: and dword [eax+0xc],byte +0x0
pf_at 0x84ff
l_kernel_00028c1d: and dword [eax+0x10],byte +0x0
pf_at 0x8503
l_kernel_00028c21: and dword [eax+0x14],byte +0x0
pf_at 0x8507
l_kernel_00028c25: and dword [eax+0x18],byte +0x0
pf_at 0x850b
l_kernel_00028c29: mov [ebp-0x1c],eax
pf_at 0x850e
l_kernel_00028c2c: and dword [eax+0x1c],byte +0x0
pf_at 0x8512
l_kernel_00028c30: mov ecx,edx
pf_at 0x8514
l_kernel_00028c32: mov edx,0x2d097
pf_at 0x8519
l_kernel_00028c37: call 0x26458
pf_at 0x851e
l_kernel_00028c3c: test al,al
pf_at 0x8520
l_kernel_00028c3e: jz short 0x28c6e
pf_at 0x8522
l_kernel_00028c40: sub esp,byte +0xc
pf_at 0x8525
l_kernel_00028c43: lea eax,[ebp-0x33c]
pf_at 0x852b
l_kernel_00028c49: mov ecx,ebx
pf_at 0x852d
l_kernel_00028c4b: mov edx,edi
pf_at 0x852f
l_kernel_00028c4d: push eax
pf_at 0x8530
l_kernel_00028c4e: call 0x2b7a8
pf_at 0x8535
l_kernel_00028c53: add esp,byte +0x10
pf_at 0x8538
l_kernel_00028c56: mov ebx,eax
pf_at 0x853a
l_kernel_00028c58: test al,al
pf_at 0x853c
l_kernel_00028c5a: jz short 0x28cd4
pf_at 0x853e
l_kernel_00028c5c: lea ecx,[ebp-0x33c]
pf_at 0x8544
l_kernel_00028c62: call 0x2176e
pf_at 0x8549
l_kernel_00028c67: call 0x21cca
pf_at 0x854e
l_kernel_00028c6c: jmp short 0x28cbb
pf_at 0x8550
l_kernel_00028c6e: mov [ebp-0x18],edi
pf_at 0x8553
l_kernel_00028c71: mov [ebp-0x10],ebx
pf_at 0x8556
l_kernel_00028c74: mov ecx,esi
pf_at 0x8558
l_kernel_00028c76: mov edx,0x2d0c5
pf_at 0x855d
l_kernel_00028c7b: call 0x26458
pf_at 0x8562
l_kernel_00028c80: test al,al
pf_at 0x8564
l_kernel_00028c82: jz short 0x28cde
pf_at 0x8566
l_kernel_00028c84: sub esp,byte +0xc
pf_at 0x8569
l_kernel_00028c87: lea eax,[ebp-0x33c]
pf_at 0x856f
l_kernel_00028c8d: mov ecx,[ebp-0x10]
pf_at 0x8572
l_kernel_00028c90: mov edx,[ebp-0x18]
pf_at 0x8575
l_kernel_00028c93: push eax
pf_at 0x8576
l_kernel_00028c94: call 0x2b7a8
pf_at 0x857b
l_kernel_00028c99: add esp,byte +0x10
pf_at 0x857e
l_kernel_00028c9c: mov ebx,eax
pf_at 0x8580
l_kernel_00028c9e: test al,al
pf_at 0x8582
l_kernel_00028ca0: jz near 0x28d34
pf_at 0x8588
l_kernel_00028ca6: lea ecx,[ebp-0x33c]
pf_at 0x858e
l_kernel_00028cac: call 0x2449b
pf_at 0x8593
l_kernel_00028cb1: mov ecx,0x2cb7f
pf_at 0x8598
l_kernel_00028cb6: call 0x2449b
pf_at 0x859d
l_kernel_00028cbb: lea esi,[ebp-0x13c]
pf_at 0x85a3
l_kernel_00028cc1: mov ecx,esi
pf_at 0x85a5
l_kernel_00028cc3: xor edx,edx
pf_at 0x85a7
l_kernel_00028cc5: call 0x28508
pf_at 0x85ac
l_kernel_00028cca: push byte +0x8
pf_at 0x85ae
l_kernel_00028ccc: pop ecx
pf_at 0x85af
l_kernel_00028ccd: mov edi,[ebp-0x1c]
pf_at 0x85b2
l_kernel_00028cd0: rep movsd
pf_at 0x85b4
l_kernel_00028cd2: jmp short 0x28d48
pf_at 0x85b6
l_kernel_00028cd4: sub esp,byte +0x4
pf_at 0x85b9
l_kernel_00028cd7: push dword 0x2d09d
pf_at 0x85be
l_kernel_00028cdc: jmp short 0x28d3c
pf_at 0x85c0
l_kernel_00028cde: mov ecx,esi
pf_at 0x85c2
l_kernel_00028ce0: mov edx,0x2d0f5
pf_at 0x85c7
l_kernel_00028ce5: call 0x26458
pf_at 0x85cc
l_kernel_00028cea: test al,al
pf_at 0x85ce
l_kernel_00028cec: mov ebx,[ebp-0x18]
pf_at 0x85d1
l_kernel_00028cef: jz short 0x28d4f
pf_at 0x85d3
l_kernel_00028cf1: sub esp,byte +0x8
pf_at 0x85d6
l_kernel_00028cf4: mov ecx,[ebp-0x20]
pf_at 0x85d9
l_kernel_00028cf7: mov edx,esi
pf_at 0x85db
l_kernel_00028cf9: push byte +0x0
pf_at 0x85dd
l_kernel_00028cfb: push ebx
pf_at 0x85de
l_kernel_00028cfc: call 0x2b86a
pf_at 0x85e3
l_kernel_00028d01: add esp,byte +0x10
pf_at 0x85e6
l_kernel_00028d04: test al,al
pf_at 0x85e8
l_kernel_00028d06: jz near 0x292e6
pf_at 0x85ee
l_kernel_00028d0c: mov byte [dword 0x3f0d8],0x0
pf_at 0x85f5
l_kernel_00028d13: call 0x21cca
pf_at 0x85fa
l_kernel_00028d18: call 0x241e6
pf_at 0x85ff
l_kernel_00028d1d: mov ecx,[ebp-0x1c]
pf_at 0x8602
l_kernel_00028d20: mov edx,0x3f0d8
pf_at 0x8607
l_kernel_00028d25: add esp,0x33c
pf_at 0x860d
l_kernel_00028d2b: pop esi
pf_at 0x860e
l_kernel_00028d2c: pop edi
pf_at 0x860f
l_kernel_00028d2d: pop ebx
pf_at 0x8610
l_kernel_00028d2e: pop ebp
pf_at 0x8611
l_kernel_00028d2f: jmp near 0x24c66
pf_at 0x8616
l_kernel_00028d34: sub esp,byte +0x4
pf_at 0x8619
l_kernel_00028d37: push dword 0x2d0cc
pf_at 0x861e
l_kernel_00028d3c: push esi
pf_at 0x861f
l_kernel_00028d3d: push dword [ebp-0x20]
pf_at 0x8622
l_kernel_00028d40: call 0x2609c
pf_at 0x8627
l_kernel_00028d45: add esp,byte +0x10
pf_at 0x862a
l_kernel_00028d48: mov ecx,ebx
pf_at 0x862c
l_kernel_00028d4a: jmp near 0x292e8
pf_at 0x8631
l_kernel_00028d4f: mov ecx,esi
pf_at 0x8633
l_kernel_00028d51: mov edx,0x2d0fb
pf_at 0x8638
l_kernel_00028d56: call 0x26458
pf_at 0x863d
l_kernel_00028d5b: test al,al
pf_at 0x863f
l_kernel_00028d5d: jz short 0x28d87
pf_at 0x8641
l_kernel_00028d5f: and dword [ebp-0x33c],byte +0x0
pf_at 0x8648
l_kernel_00028d66: mov dword [ebp-0x13c],0x1
pf_at 0x8652
l_kernel_00028d70: lea eax,[ebx-0x3]
pf_at 0x8655
l_kernel_00028d73: cmp eax,byte -0x2
pf_at 0x8658
l_kernel_00028d76: jnc near 0x28e33
pf_at 0x865e
l_kernel_00028d7c: push esi
pf_at 0x865f
l_kernel_00028d7d: push dword 0x2d5ce
pf_at 0x8664
l_kernel_00028d82: jmp near 0x292da
pf_at 0x8669
l_kernel_00028d87: mov ecx,esi
pf_at 0x866b
l_kernel_00028d89: mov edx,0x2d100
pf_at 0x8670
l_kernel_00028d8e: call 0x26458
pf_at 0x8675
l_kernel_00028d93: test al,al
pf_at 0x8677
l_kernel_00028d95: jz near 0x28e8e
pf_at 0x867d
l_kernel_00028d9b: and dword [ebp-0x33c],byte +0x0
pf_at 0x8684
l_kernel_00028da2: and dword [ebp-0x13c],byte +0x0
pf_at 0x868b
l_kernel_00028da9: mov dword [ebp-0x24],0x1
pf_at 0x8692
l_kernel_00028db0: lea eax,[ebx-0x4]
pf_at 0x8695
l_kernel_00028db3: cmp eax,byte -0x2
pf_at 0x8698
l_kernel_00028db6: jc near 0x28faf
pf_at 0x869e
l_kernel_00028dbc: lea eax,[ebp-0x33c]
pf_at 0x86a4
l_kernel_00028dc2: mov ecx,[ebp-0x20]
pf_at 0x86a7
l_kernel_00028dc5: mov edx,esi
pf_at 0x86a9
l_kernel_00028dc7: push eax
pf_at 0x86aa
l_kernel_00028dc8: push byte +0x0
pf_at 0x86ac
l_kernel_00028dca: push ebx
pf_at 0x86ad
l_kernel_00028dcb: push dword [ebp-0x10]
pf_at 0x86b0
l_kernel_00028dce: call 0x2bb86
pf_at 0x86b5
l_kernel_00028dd3: add esp,byte +0x10
pf_at 0x86b8
l_kernel_00028dd6: test al,al
pf_at 0x86ba
l_kernel_00028dd8: jz near 0x28faf
pf_at 0x86c0
l_kernel_00028dde: lea eax,[ebp-0x13c]
pf_at 0x86c6
l_kernel_00028de4: mov ecx,[ebp-0x20]
pf_at 0x86c9
l_kernel_00028de7: mov edx,esi
pf_at 0x86cb
l_kernel_00028de9: push eax
pf_at 0x86cc
l_kernel_00028dea: push byte +0x1
pf_at 0x86ce
l_kernel_00028dec: push ebx
pf_at 0x86cf
l_kernel_00028ded: push dword [ebp-0x10]
pf_at 0x86d2
l_kernel_00028df0: call 0x2bb86
pf_at 0x86d7
l_kernel_00028df5: add esp,byte +0x10
pf_at 0x86da
l_kernel_00028df8: test al,al
pf_at 0x86dc
l_kernel_00028dfa: jz near 0x28faf
pf_at 0x86e2
l_kernel_00028e00: cmp ebx,byte +0x3
pf_at 0x86e5
l_kernel_00028e03: jnz near 0x29154
pf_at 0x86eb
l_kernel_00028e09: lea eax,[ebp-0x24]
pf_at 0x86ee
l_kernel_00028e0c: mov edi,[ebp-0x20]
pf_at 0x86f1
l_kernel_00028e0f: mov ecx,edi
pf_at 0x86f3
l_kernel_00028e11: mov edx,esi
pf_at 0x86f5
l_kernel_00028e13: push eax
pf_at 0x86f6
l_kernel_00028e14: push byte +0x2
pf_at 0x86f8
l_kernel_00028e16: push byte +0x3
pf_at 0x86fa
l_kernel_00028e18: push dword [ebp-0x10]
pf_at 0x86fd
l_kernel_00028e1b: call 0x2bb86
pf_at 0x8702
l_kernel_00028e20: add esp,byte +0x10
pf_at 0x8705
l_kernel_00028e23: test al,al
pf_at 0x8707
l_kernel_00028e25: jz near 0x292e6
pf_at 0x870d
l_kernel_00028e2b: mov eax,[ebp-0x24]
pf_at 0x8710
l_kernel_00028e2e: jmp near 0x2915a
pf_at 0x8715
l_kernel_00028e33: lea eax,[ebp-0x33c]
pf_at 0x871b
l_kernel_00028e39: mov ecx,[ebp-0x20]
pf_at 0x871e
l_kernel_00028e3c: mov edx,esi
pf_at 0x8720
l_kernel_00028e3e: push eax
pf_at 0x8721
l_kernel_00028e3f: push byte +0x0
pf_at 0x8723
l_kernel_00028e41: push ebx
pf_at 0x8724
l_kernel_00028e42: push dword [ebp-0x10]
pf_at 0x8727
l_kernel_00028e45: call 0x2bb86
pf_at 0x872c
l_kernel_00028e4a: add esp,byte +0x10
pf_at 0x872f
l_kernel_00028e4d: test al,al
pf_at 0x8731
l_kernel_00028e4f: jz near 0x292e6
pf_at 0x8737
l_kernel_00028e55: cmp ebx,byte +0x2
pf_at 0x873a
l_kernel_00028e58: jnz near 0x28ff3
pf_at 0x8740
l_kernel_00028e5e: lea eax,[ebp-0x13c]
pf_at 0x8746
l_kernel_00028e64: mov edi,[ebp-0x20]
pf_at 0x8749
l_kernel_00028e67: mov ecx,edi
pf_at 0x874b
l_kernel_00028e69: mov edx,esi
pf_at 0x874d
l_kernel_00028e6b: push eax
pf_at 0x874e
l_kernel_00028e6c: push byte +0x1
pf_at 0x8750
l_kernel_00028e6e: push byte +0x2
pf_at 0x8752
l_kernel_00028e70: push dword [ebp-0x10]
pf_at 0x8755
l_kernel_00028e73: call 0x2bb86
pf_at 0x875a
l_kernel_00028e78: add esp,byte +0x10
pf_at 0x875d
l_kernel_00028e7b: test al,al
pf_at 0x875f
l_kernel_00028e7d: jz near 0x292e6
pf_at 0x8765
l_kernel_00028e83: mov eax,[ebp-0x13c]
pf_at 0x876b
l_kernel_00028e89: jmp near 0x28ff9
pf_at 0x8770
l_kernel_00028e8e: mov ecx,esi
pf_at 0x8772
l_kernel_00028e90: mov edx,0x2d105
pf_at 0x8777
l_kernel_00028e95: call 0x26458
pf_at 0x877c
l_kernel_00028e9a: test al,al
pf_at 0x877e
l_kernel_00028e9c: jz near 0x28fc6
pf_at 0x8784
l_kernel_00028ea2: and dword [ebp-0x13c],byte +0x0
pf_at 0x878b
l_kernel_00028ea9: and dword [ebp-0x24],byte +0x0
pf_at 0x878f
l_kernel_00028ead: sub esp,byte +0x8
pf_at 0x8792
l_kernel_00028eb0: mov edi,[ebp-0x20]
pf_at 0x8795
l_kernel_00028eb3: mov ecx,edi
pf_at 0x8797
l_kernel_00028eb5: mov edx,esi
pf_at 0x8799
l_kernel_00028eb7: push byte +0x2
pf_at 0x879b
l_kernel_00028eb9: push ebx
pf_at 0x879c
l_kernel_00028eba: call 0x2b86a
pf_at 0x87a1
l_kernel_00028ebf: add esp,byte +0x10
pf_at 0x87a4
l_kernel_00028ec2: test al,al
pf_at 0x87a6
l_kernel_00028ec4: jz near 0x292e6
pf_at 0x87ac
l_kernel_00028eca: lea eax,[ebp-0x13c]
pf_at 0x87b2
l_kernel_00028ed0: mov ecx,edi
pf_at 0x87b4
l_kernel_00028ed2: mov edx,esi
pf_at 0x87b6
l_kernel_00028ed4: push eax
pf_at 0x87b7
l_kernel_00028ed5: push byte +0x0
pf_at 0x87b9
l_kernel_00028ed7: push ebx
pf_at 0x87ba
l_kernel_00028ed8: mov ebx,esi
pf_at 0x87bc
l_kernel_00028eda: mov esi,[ebp-0x10]
pf_at 0x87bf
l_kernel_00028edd: push esi
pf_at 0x87c0
l_kernel_00028ede: call 0x2bb86
pf_at 0x87c5
l_kernel_00028ee3: add esp,byte +0x10
pf_at 0x87c8
l_kernel_00028ee6: test al,al
pf_at 0x87ca
l_kernel_00028ee8: jz near 0x292e6
pf_at 0x87d0
l_kernel_00028eee: lea eax,[ebp-0x24]
pf_at 0x87d3
l_kernel_00028ef1: mov ecx,edi
pf_at 0x87d5
l_kernel_00028ef3: mov edx,ebx
pf_at 0x87d7
l_kernel_00028ef5: push eax
pf_at 0x87d8
l_kernel_00028ef6: push byte +0x1
pf_at 0x87da
l_kernel_00028ef8: push dword [ebp-0x18]
pf_at 0x87dd
l_kernel_00028efb: push esi
pf_at 0x87de
l_kernel_00028efc: call 0x2bb86
pf_at 0x87e3
l_kernel_00028f01: add esp,byte +0x10
pf_at 0x87e6
l_kernel_00028f04: xor ecx,ecx
pf_at 0x87e8
l_kernel_00028f06: test al,al
pf_at 0x87ea
l_kernel_00028f08: jz near 0x292e8
pf_at 0x87f0
l_kernel_00028f0e: mov edx,[ebp-0x13c]
pf_at 0x87f6
l_kernel_00028f14: mov eax,[ebp-0x24]
pf_at 0x87f9
l_kernel_00028f17: mov [ebp-0x10],eax
pf_at 0x87fc
l_kernel_00028f1a: lea esi,[ebp-0x33c]
pf_at 0x8802
l_kernel_00028f20: mov [ebp-0x14],edx
pf_at 0x8805
l_kernel_00028f23: mov [ebp-0x20],edx
pf_at 0x8808
l_kernel_00028f26: mov ebx,[ebp-0x10]
pf_at 0x880b
l_kernel_00028f29: sub ebx,ecx
pf_at 0x880d
l_kernel_00028f2b: jna near 0x2a7a7
pf_at 0x8813
l_kernel_00028f31: mov [ebp-0x18],ecx
pf_at 0x8816
l_kernel_00028f34: mov eax,[ebp-0x14]
pf_at 0x8819
l_kernel_00028f37: add eax,ecx
pf_at 0x881b
l_kernel_00028f39: push eax
pf_at 0x881c
l_kernel_00028f3a: push dword 0x2d6ae
pf_at 0x8821
l_kernel_00028f3f: push dword 0x100
pf_at 0x8826
l_kernel_00028f44: push esi
pf_at 0x8827
l_kernel_00028f45: call 0x216bc
pf_at 0x882c
l_kernel_00028f4a: add esp,byte +0x10
pf_at 0x882f
l_kernel_00028f4d: mov esi,eax
pf_at 0x8831
l_kernel_00028f4f: cmp ebx,byte +0x10
pf_at 0x8834
l_kernel_00028f52: push byte +0x10
pf_at 0x8836
l_kernel_00028f54: pop eax
pf_at 0x8837
l_kernel_00028f55: cmovnc ebx,eax
pf_at 0x883a
l_kernel_00028f58: xor edi,edi
pf_at 0x883c
l_kernel_00028f5a: cmp edi,ebx
pf_at 0x883e
l_kernel_00028f5c: jnc short 0x28f93
pf_at 0x8840
l_kernel_00028f5e: lea eax,[esi+0x4]
pf_at 0x8843
l_kernel_00028f61: cmp eax,0x100
pf_at 0x8848
l_kernel_00028f66: jnc short 0x28f93
pf_at 0x884a
l_kernel_00028f68: lea eax,[esi+ebp]
pf_at 0x884d
l_kernel_00028f6b: add eax,0xfffffcc4
pf_at 0x8852
l_kernel_00028f70: mov ecx,0x100
pf_at 0x8857
l_kernel_00028f75: sub ecx,esi
pf_at 0x8859
l_kernel_00028f77: mov edx,[ebp-0x20]
pf_at 0x885c
l_kernel_00028f7a: movzx edx,byte [edx+edi]
pf_at 0x8860
l_kernel_00028f7e: push edx
pf_at 0x8861
l_kernel_00028f7f: push dword 0x2d6b4
pf_at 0x8866
l_kernel_00028f84: push ecx
pf_at 0x8867
l_kernel_00028f85: push eax
pf_at 0x8868
l_kernel_00028f86: call 0x216bc
pf_at 0x886d
l_kernel_00028f8b: add esp,byte +0x10
pf_at 0x8870
l_kernel_00028f8e: add esi,eax
pf_at 0x8872
l_kernel_00028f90: inc edi
pf_at 0x8873
l_kernel_00028f91: jmp short 0x28f5a
pf_at 0x8875
l_kernel_00028f93: lea esi,[ebp-0x33c]
pf_at 0x887b
l_kernel_00028f99: mov ecx,esi
pf_at 0x887d
l_kernel_00028f9b: call 0x2176e
pf_at 0x8882
l_kernel_00028fa0: mov ecx,[ebp-0x18]
pf_at 0x8885
l_kernel_00028fa3: add ecx,byte +0x10
pf_at 0x8888
l_kernel_00028fa6: add dword [ebp-0x20],byte +0x10
pf_at 0x888c
l_kernel_00028faa: jmp near 0x28f26
pf_at 0x8891
l_kernel_00028faf: and ebx,byte -0x2
pf_at 0x8894
l_kernel_00028fb2: cmp ebx,byte +0x2
pf_at 0x8897
l_kernel_00028fb5: jz near 0x292e6
pf_at 0x889d
l_kernel_00028fbb: push esi
pf_at 0x889e
l_kernel_00028fbc: push dword 0x2d661
pf_at 0x88a3
l_kernel_00028fc1: jmp near 0x292da
pf_at 0x88a8
l_kernel_00028fc6: mov ecx,esi
pf_at 0x88aa
l_kernel_00028fc8: mov edx,0x2d10a
pf_at 0x88af
l_kernel_00028fcd: call 0x26458
pf_at 0x88b4
l_kernel_00028fd2: test al,al
pf_at 0x88b6
l_kernel_00028fd4: jz short 0x29014
pf_at 0x88b8
l_kernel_00028fd6: mov byte [ebp-0x33c],0x0
pf_at 0x88bf
l_kernel_00028fdd: cmp ebx,byte +0x2
pf_at 0x88c2
l_kernel_00028fe0: jc near 0x2906b
pf_at 0x88c8
l_kernel_00028fe6: sub esp,byte +0x4
pf_at 0x88cb
l_kernel_00028fe9: push dword 0x2d10e
pf_at 0x88d0
l_kernel_00028fee: jmp near 0x292da
pf_at 0x88d5
l_kernel_00028ff3: xor eax,eax
pf_at 0x88d7
l_kernel_00028ff5: inc eax
pf_at 0x88d8
l_kernel_00028ff6: mov edi,[ebp-0x20]
pf_at 0x88db
l_kernel_00028ff9: sub esp,byte +0x4
pf_at 0x88de
l_kernel_00028ffc: mov ecx,edi
pf_at 0x88e0
l_kernel_00028ffe: mov edx,esi
pf_at 0x88e2
l_kernel_00029000: push dword [ebp-0x1c]
pf_at 0x88e5
l_kernel_00029003: push eax
pf_at 0x88e6
l_kernel_00029004: push dword [ebp-0x33c]
pf_at 0x88ec
l_kernel_0002900a: call 0x2bbeb
pf_at 0x88f1
l_kernel_0002900f: jmp near 0x29173
pf_at 0x88f6
l_kernel_00029014: mov ecx,esi
pf_at 0x88f8
l_kernel_00029016: mov edx,0x2d13d
pf_at 0x88fd
l_kernel_0002901b: call 0x26458
pf_at 0x8902
l_kernel_00029020: test al,al
pf_at 0x8904
l_kernel_00029022: jz near 0x2910b
pf_at 0x890a
l_kernel_00029028: and dword [ebp-0x33c],byte +0x0
pf_at 0x8911
l_kernel_0002902f: test ebx,ebx
pf_at 0x8913
l_kernel_00029031: jz near 0x292d4
pf_at 0x8919
l_kernel_00029037: lea edx,[ebp-0x33c]
pf_at 0x891f
l_kernel_0002903d: mov ecx,[ebp-0x10]
pf_at 0x8922
l_kernel_00029040: call 0x2bc43
pf_at 0x8927
l_kernel_00029045: test al,al
pf_at 0x8929
l_kernel_00029047: jz near 0x292f5
pf_at 0x892f
l_kernel_0002904d: mov dword [ebp-0x13c],0x1
pf_at 0x8939
l_kernel_00029057: cmp ebx,byte +0x3
pf_at 0x893c
l_kernel_0002905a: jc near 0x294b8
pf_at 0x8942
l_kernel_00029060: push esi
pf_at 0x8943
l_kernel_00029061: push dword 0x2d6f7
pf_at 0x8948
l_kernel_00029066: jmp near 0x292da
pf_at 0x894d
l_kernel_0002906b: cmp ebx,byte +0x1
pf_at 0x8950
l_kernel_0002906e: jnz short 0x290bf
pf_at 0x8952
l_kernel_00029070: lea eax,[ebp-0x13c]
pf_at 0x8958
l_kernel_00029076: and dword [eax],byte +0x0
pf_at 0x895b
l_kernel_00029079: sub esp,byte +0x4
pf_at 0x895e
l_kernel_0002907c: mov ecx,[ebp-0x20]
pf_at 0x8961
l_kernel_0002907f: mov edx,esi
pf_at 0x8963
l_kernel_00029081: push eax
pf_at 0x8964
l_kernel_00029082: push byte +0x1
pf_at 0x8966
l_kernel_00029084: push dword [ebp-0x10]
pf_at 0x8969
l_kernel_00029087: call 0x2b8af
pf_at 0x896e
l_kernel_0002908c: add esp,byte +0x10
pf_at 0x8971
l_kernel_0002908f: test al,al
pf_at 0x8973
l_kernel_00029091: jz near 0x292e6
pf_at 0x8979
l_kernel_00029097: lea esi,[ebp-0x33c]
pf_at 0x897f
l_kernel_0002909d: push dword [ebp-0x13c]
pf_at 0x8985
l_kernel_000290a3: push dword 0x2cb77
pf_at 0x898a
l_kernel_000290a8: push dword 0xf1
pf_at 0x898f
l_kernel_000290ad: push esi
pf_at 0x8990
l_kernel_000290ae: call 0x216bc
pf_at 0x8995
l_kernel_000290b3: add esp,byte +0x10
pf_at 0x8998
l_kernel_000290b6: mov ecx,esi
pf_at 0x899a
l_kernel_000290b8: mov edx,esi
pf_at 0x899c
l_kernel_000290ba: call 0x25240
pf_at 0x89a1
l_kernel_000290bf: xor esi,esi
pf_at 0x89a3
l_kernel_000290c1: mov ebx,0x2f0bc
pf_at 0x89a8
l_kernel_000290c6: xor edi,edi
pf_at 0x89aa
l_kernel_000290c8: cmp edi,[dword 0x3f0bc]
pf_at 0x89b0
l_kernel_000290ce: jnc short 0x29133
pf_at 0x89b2
l_kernel_000290d0: cmp byte [ebp-0x33c],0x0
pf_at 0x89b9
l_kernel_000290d7: jz short 0x290ea
pf_at 0x89bb
l_kernel_000290d9: mov ecx,ebx
pf_at 0x89bd
l_kernel_000290db: lea edx,[ebp-0x33c]
pf_at 0x89c3
l_kernel_000290e1: call 0x2b908
pf_at 0x89c8
l_kernel_000290e6: test al,al
pf_at 0x89ca
l_kernel_000290e8: jz short 0x29102
pf_at 0x89cc
l_kernel_000290ea: sub esp,byte +0x4
pf_at 0x89cf
l_kernel_000290ed: push dword [ebx+0xf8]
pf_at 0x89d5
l_kernel_000290f3: push ebx
pf_at 0x89d6
l_kernel_000290f4: push dword 0x2d12f
pf_at 0x89db
l_kernel_000290f9: call 0x21c41
pf_at 0x89e0
l_kernel_000290fe: add esp,byte +0x10
pf_at 0x89e3
l_kernel_00029101: inc esi
pf_at 0x89e4
l_kernel_00029102: inc edi
pf_at 0x89e5
l_kernel_00029103: add ebx,0x100
pf_at 0x89eb
l_kernel_00029109: jmp short 0x290c8
pf_at 0x89ed
l_kernel_0002910b: mov ecx,esi
pf_at 0x89ef
l_kernel_0002910d: mov edx,0x2d142
pf_at 0x89f4
l_kernel_00029112: call 0x26458
pf_at 0x89f9
l_kernel_00029117: test al,al
pf_at 0x89fb
l_kernel_00029119: jz short 0x2917d
pf_at 0x89fd
l_kernel_0002911b: and dword [ebp-0x24],byte +0x0
pf_at 0x8a01
l_kernel_0002911f: cmp ebx,byte +0x1
pf_at 0x8a04
l_kernel_00029122: ja near 0x29390
pf_at 0x8a0a
l_kernel_00029128: push esi
pf_at 0x8a0b
l_kernel_00029129: push dword 0x2d754
pf_at 0x8a10
l_kernel_0002912e: jmp near 0x292da
pf_at 0x8a15
l_kernel_00029133: call 0x21cca
pf_at 0x8a1a
l_kernel_00029138: lea ebx,[ebp-0x13c]
pf_at 0x8a20
l_kernel_0002913e: mov ecx,ebx
pf_at 0x8a22
l_kernel_00029140: mov edx,esi
pf_at 0x8a24
l_kernel_00029142: call 0x28508
pf_at 0x8a29
l_kernel_00029147: push byte +0x8
pf_at 0x8a2b
l_kernel_00029149: pop ecx
pf_at 0x8a2c
l_kernel_0002914a: mov edi,[ebp-0x1c]
pf_at 0x8a2f
l_kernel_0002914d: mov esi,ebx
pf_at 0x8a31
l_kernel_0002914f: jmp near 0x2a7c1
pf_at 0x8a36
l_kernel_00029154: xor eax,eax
pf_at 0x8a38
l_kernel_00029156: inc eax
pf_at 0x8a39
l_kernel_00029157: mov edi,[ebp-0x20]
pf_at 0x8a3c
l_kernel_0002915a: mov ecx,edi
pf_at 0x8a3e
l_kernel_0002915c: mov edx,esi
pf_at 0x8a40
l_kernel_0002915e: push dword [ebp-0x1c]
pf_at 0x8a43
l_kernel_00029161: push eax
pf_at 0x8a44
l_kernel_00029162: push dword [ebp-0x13c]
pf_at 0x8a4a
l_kernel_00029168: push dword [ebp-0x33c]
pf_at 0x8a50
l_kernel_0002916e: call 0x2bdd2
pf_at 0x8a55
l_kernel_00029173: add esp,byte +0x10
pf_at 0x8a58
l_kernel_00029176: mov ecx,eax
pf_at 0x8a5a
l_kernel_00029178: jmp near 0x292e8
pf_at 0x8a5f
l_kernel_0002917d: mov ecx,esi
pf_at 0x8a61
l_kernel_0002917f: mov edx,0x2d148
pf_at 0x8a66
l_kernel_00029184: call 0x26458
pf_at 0x8a6b
l_kernel_00029189: test al,al
pf_at 0x8a6d
l_kernel_0002918b: jz near 0x293ea
pf_at 0x8a73
l_kernel_00029191: and dword [ebp-0x24],byte +0x0
pf_at 0x8a77
l_kernel_00029195: sub esp,byte +0x8
pf_at 0x8a7a
l_kernel_00029198: mov edi,[ebp-0x20]
pf_at 0x8a7d
l_kernel_0002919b: mov ecx,edi
pf_at 0x8a7f
l_kernel_0002919d: mov edx,esi
pf_at 0x8a81
l_kernel_0002919f: push byte +0x1
pf_at 0x8a83
l_kernel_000291a1: push ebx
pf_at 0x8a84
l_kernel_000291a2: call 0x2b86a
pf_at 0x8a89
l_kernel_000291a7: add esp,byte +0x10
pf_at 0x8a8c
l_kernel_000291aa: test al,al
pf_at 0x8a8e
l_kernel_000291ac: jz near 0x292e6
pf_at 0x8a94
l_kernel_000291b2: sub esp,byte +0x4
pf_at 0x8a97
l_kernel_000291b5: lea eax,[ebp-0x24]
pf_at 0x8a9a
l_kernel_000291b8: mov ecx,edi
pf_at 0x8a9c
l_kernel_000291ba: mov edx,esi
pf_at 0x8a9e
l_kernel_000291bc: push eax
pf_at 0x8a9f
l_kernel_000291bd: push ebx
pf_at 0x8aa0
l_kernel_000291be: push dword [ebp-0x10]
pf_at 0x8aa3
l_kernel_000291c1: call 0x2b8af
pf_at 0x8aa8
l_kernel_000291c6: add esp,byte +0x10
pf_at 0x8aab
l_kernel_000291c9: test al,al
pf_at 0x8aad
l_kernel_000291cb: jz near 0x292e6
pf_at 0x8ab3
l_kernel_000291d1: mov edi,[ebp-0x1c]
pf_at 0x8ab6
l_kernel_000291d4: mov ecx,[ebp-0x24]
pf_at 0x8ab9
l_kernel_000291d7: test ecx,ecx
pf_at 0x8abb
l_kernel_000291d9: jz near 0x29a0d
pf_at 0x8ac1
l_kernel_000291df: cmp byte [dword 0x3f0d4],0x0
pf_at 0x8ac8
l_kernel_000291e6: jz near 0x29a0d
pf_at 0x8ace
l_kernel_000291ec: mov [ebp-0x14],esi
pf_at 0x8ad1
l_kernel_000291ef: lea ebx,[ebp-0x13c]
pf_at 0x8ad7
l_kernel_000291f5: mov edx,ebx
pf_at 0x8ad9
l_kernel_000291f7: call 0x25240
pf_at 0x8ade
l_kernel_000291fc: cmp byte [ebx],0x0
pf_at 0x8ae1
l_kernel_000291ff: jz near 0x29a0a
pf_at 0x8ae7
l_kernel_00029205: lea ecx,[ebp-0x13c]
pf_at 0x8aed
l_kernel_0002920b: call 0x255e4
pf_at 0x8af2
l_kernel_00029210: cmp eax,byte -0x1
pf_at 0x8af5
l_kernel_00029213: jz near 0x29a0a
pf_at 0x8afb
l_kernel_00029219: mov esi,eax
pf_at 0x8afd
l_kernel_0002921b: shl eax,byte 0x8
pf_at 0x8b00
l_kernel_0002921e: mov [ebp-0x34],eax
pf_at 0x8b03
l_kernel_00029221: lea ebx,[eax+0x2f0bc]
pf_at 0x8b09
l_kernel_00029227: sub esp,byte +0x4
pf_at 0x8b0c
l_kernel_0002922a: lea eax,[ebp-0x33c]
pf_at 0x8b12
l_kernel_00029230: push dword 0xf4
pf_at 0x8b17
l_kernel_00029235: push ebx
pf_at 0x8b18
l_kernel_00029236: push eax
pf_at 0x8b19
l_kernel_00029237: call 0x20c1d
pf_at 0x8b1e
l_kernel_0002923c: add esp,byte +0x10
pf_at 0x8b21
l_kernel_0002923f: mov eax,[ebx+0xf4]
pf_at 0x8b27
l_kernel_00029245: mov [ebp-0x10],eax
pf_at 0x8b2a
l_kernel_00029248: mov eax,[ebx+0xfc]
pf_at 0x8b30
l_kernel_0002924e: mov [ebp-0x3c],eax
pf_at 0x8b33
l_kernel_00029251: mov [ebp-0x18],ebx
pf_at 0x8b36
l_kernel_00029254: mov ebx,[ebx+0xf8]
pf_at 0x8b3c
l_kernel_0002925a: mov eax,[0x3f0bc]
pf_at 0x8b41
l_kernel_0002925f: not esi
pf_at 0x8b43
l_kernel_00029261: add esi,eax
pf_at 0x8b45
l_kernel_00029263: jz short 0x29288
pf_at 0x8b47
l_kernel_00029265: mov eax,[ebp-0x34]
pf_at 0x8b4a
l_kernel_00029268: lea eax,[eax+0x2f1bc]
pf_at 0x8b50
l_kernel_0002926e: mov ecx,esi
pf_at 0x8b52
l_kernel_00029270: shl ecx,byte 0x8
pf_at 0x8b55
l_kernel_00029273: sub esp,byte +0x4
pf_at 0x8b58
l_kernel_00029276: push ecx
pf_at 0x8b59
l_kernel_00029277: push eax
pf_at 0x8b5a
l_kernel_00029278: push dword [ebp-0x18]
pf_at 0x8b5d
l_kernel_0002927b: call 0x20c3e
pf_at 0x8b62
l_kernel_00029280: add esp,byte +0x10
pf_at 0x8b65
l_kernel_00029283: mov eax,[0x3f0bc]
pf_at 0x8b6a
l_kernel_00029288: dec eax
pf_at 0x8b6b
l_kernel_00029289: mov [0x3f0bc],eax
pf_at 0x8b70
l_kernel_0002928e: shl eax,byte 0x8
pf_at 0x8b73
l_kernel_00029291: lea eax,[eax+0x2f0bc]
pf_at 0x8b79
l_kernel_00029297: sub esp,byte +0x4
pf_at 0x8b7c
l_kernel_0002929a: push dword 0x100
pf_at 0x8b81
l_kernel_0002929f: push byte +0x0
pf_at 0x8b83
l_kernel_000292a1: push eax
pf_at 0x8b84
l_kernel_000292a2: call 0x20c84
pf_at 0x8b89
l_kernel_000292a7: add esp,byte +0x10
pf_at 0x8b8c
l_kernel_000292aa: call 0x217ea
pf_at 0x8b91
l_kernel_000292af: test al,al
pf_at 0x8b93
l_kernel_000292b1: jz near 0x299b1
pf_at 0x8b99
l_kernel_000292b7: cmp dword [ebp-0x10],byte +0x0
pf_at 0x8b9d
l_kernel_000292bb: jz near 0x297e9
pf_at 0x8ba3
l_kernel_000292c1: sub esp,byte +0xc
pf_at 0x8ba6
l_kernel_000292c4: push dword [ebp-0x10]
pf_at 0x8ba9
l_kernel_000292c7: call 0x20aee
pf_at 0x8bae
l_kernel_000292cc: add esp,byte +0x10
pf_at 0x8bb1
l_kernel_000292cf: jmp near 0x297e9
pf_at 0x8bb6
l_kernel_000292d4: push esi
pf_at 0x8bb7
l_kernel_000292d5: push dword 0x2d6da
pf_at 0x8bbc
l_kernel_000292da: push esi
pf_at 0x8bbd
l_kernel_000292db: push dword [ebp-0x20]
pf_at 0x8bc0
l_kernel_000292de: call 0x2609c
pf_at 0x8bc5
l_kernel_000292e3: add esp,byte +0x10
pf_at 0x8bc8
l_kernel_000292e6: xor ecx,ecx
pf_at 0x8bca
l_kernel_000292e8: mov eax,ecx
pf_at 0x8bcc
l_kernel_000292ea: add esp,0x33c
pf_at 0x8bd2
l_kernel_000292f0: pop esi
pf_at 0x8bd3
l_kernel_000292f1: pop edi
pf_at 0x8bd4
l_kernel_000292f2: pop ebx
pf_at 0x8bd5
l_kernel_000292f3: pop ebp
pf_at 0x8bd6
l_kernel_000292f4: ret
pf_at 0x8bd7
l_kernel_000292f5: and dword [ebp-0x13c],byte +0x0
pf_at 0x8bde
l_kernel_000292fc: and dword [ebp-0x24],byte +0x0
pf_at 0x8be2
l_kernel_00029300: and dword [ebp-0x28],byte +0x0
pf_at 0x8be6
l_kernel_00029304: sub esp,byte +0x8
pf_at 0x8be9
l_kernel_00029307: mov edi,[ebp-0x20]
pf_at 0x8bec
l_kernel_0002930a: mov ecx,edi
pf_at 0x8bee
l_kernel_0002930c: mov edx,esi
pf_at 0x8bf0
l_kernel_0002930e: push byte +0x1
pf_at 0x8bf2
l_kernel_00029310: push ebx
pf_at 0x8bf3
l_kernel_00029311: call 0x2b86a
pf_at 0x8bf8
l_kernel_00029316: add esp,byte +0x10
pf_at 0x8bfb
l_kernel_00029319: test al,al
pf_at 0x8bfd
l_kernel_0002931b: jz short 0x292e6
pf_at 0x8bff
l_kernel_0002931d: sub esp,byte +0x4
pf_at 0x8c02
l_kernel_00029320: lea eax,[ebp-0x13c]
pf_at 0x8c08
l_kernel_00029326: mov ecx,edi
pf_at 0x8c0a
l_kernel_00029328: mov edx,esi
pf_at 0x8c0c
l_kernel_0002932a: push eax
pf_at 0x8c0d
l_kernel_0002932b: push ebx
pf_at 0x8c0e
l_kernel_0002932c: push dword [ebp-0x10]
pf_at 0x8c11
l_kernel_0002932f: call 0x2b8af
pf_at 0x8c16
l_kernel_00029334: add esp,byte +0x10
pf_at 0x8c19
l_kernel_00029337: test al,al
pf_at 0x8c1b
l_kernel_00029339: jz short 0x292e6
pf_at 0x8c1d
l_kernel_0002933b: mov ecx,[ebp-0x13c]
pf_at 0x8c23
l_kernel_00029341: sub esp,byte +0xc
pf_at 0x8c26
l_kernel_00029344: lea eax,[ebp-0x28]
pf_at 0x8c29
l_kernel_00029347: lea edx,[ebp-0x24]
pf_at 0x8c2c
l_kernel_0002934a: push eax
pf_at 0x8c2d
l_kernel_0002934b: call 0x253f8
pf_at 0x8c32
l_kernel_00029350: add esp,byte +0x10
pf_at 0x8c35
l_kernel_00029353: test al,al
pf_at 0x8c37
l_kernel_00029355: jz near 0x29801
pf_at 0x8c3d
l_kernel_0002935b: mov edi,[ebp-0x1c]
pf_at 0x8c40
l_kernel_0002935e: mov edx,[ebp-0x24]
pf_at 0x8c43
l_kernel_00029361: xor ecx,ecx
pf_at 0x8c45
l_kernel_00029363: mov eax,[ebp-0x28]
pf_at 0x8c48
l_kernel_00029366: mov esi,0x2600
pf_at 0x8c4d
l_kernel_0002936b: cmp eax,ecx
pf_at 0x8c4f
l_kernel_0002936d: jz near 0x29af9
pf_at 0x8c55
l_kernel_00029373: movzx ebx,byte [edx+ecx]
pf_at 0x8c59
l_kernel_00029377: cmp ebx,byte +0xd
pf_at 0x8c5c
l_kernel_0002937a: ja short 0x29381
pf_at 0x8c5e
l_kernel_0002937c: bt esi,ebx
pf_at 0x8c61
l_kernel_0002937f: jc short 0x2938d
pf_at 0x8c63
l_kernel_00029381: add bl,0x81
pf_at 0x8c66
l_kernel_00029384: cmp bl,0xa1
pf_at 0x8c69
l_kernel_00029387: jc near 0x299a1
pf_at 0x8c6f
l_kernel_0002938d: inc ecx
pf_at 0x8c70
l_kernel_0002938e: jmp short 0x2936b
pf_at 0x8c72
l_kernel_00029390: lea edx,[ebp-0x24]
pf_at 0x8c75
l_kernel_00029393: mov edi,[ebp-0x10]
pf_at 0x8c78
l_kernel_00029396: mov ecx,edi
pf_at 0x8c7a
l_kernel_00029398: call 0x2bc43
pf_at 0x8c7f
l_kernel_0002939d: test al,al
pf_at 0x8c81
l_kernel_0002939f: jz near 0x2951b
pf_at 0x8c87
l_kernel_000293a5: lea edx,[ebp-0x28]
pf_at 0x8c8a
l_kernel_000293a8: and dword [edx],byte +0x0
pf_at 0x8c8d
l_kernel_000293ab: mov dword [ebp-0x30],0x1
pf_at 0x8c94
l_kernel_000293b2: lea ecx,[edi+0x20]
pf_at 0x8c97
l_kernel_000293b5: mov edi,ecx
pf_at 0x8c99
l_kernel_000293b7: call 0x2bc43
pf_at 0x8c9e
l_kernel_000293bc: mov ecx,ebx
pf_at 0x8ca0
l_kernel_000293be: mov ebx,eax
pf_at 0x8ca2
l_kernel_000293c0: cmp ecx,byte +0x3
pf_at 0x8ca5
l_kernel_000293c3: jnz near 0x29677
pf_at 0x8cab
l_kernel_000293c9: mov ecx,[ebp-0x10]
pf_at 0x8cae
l_kernel_000293cc: add ecx,byte +0x40
pf_at 0x8cb1
l_kernel_000293cf: lea edx,[ebp-0x30]
pf_at 0x8cb4
l_kernel_000293d2: call 0x2bc43
pf_at 0x8cb9
l_kernel_000293d7: and bl,al
pf_at 0x8cbb
l_kernel_000293d9: cmp bl,0x1
pf_at 0x8cbe
l_kernel_000293dc: jnz near 0x29710
pf_at 0x8cc4
l_kernel_000293e2: mov eax,[ebp-0x30]
pf_at 0x8cc7
l_kernel_000293e5: jmp near 0x29688
pf_at 0x8ccc
l_kernel_000293ea: mov ecx,esi
pf_at 0x8cce
l_kernel_000293ec: mov edx,0x2d14f
pf_at 0x8cd3
l_kernel_000293f1: call 0x26458
pf_at 0x8cd8
l_kernel_000293f6: test al,al
pf_at 0x8cda
l_kernel_000293f8: jz near 0x2958d
pf_at 0x8ce0
l_kernel_000293fe: and dword [ebp-0x13c],byte +0x0
pf_at 0x8ce7
l_kernel_00029405: and dword [ebp-0x24],byte +0x0
pf_at 0x8ceb
l_kernel_00029409: and dword [ebp-0x28],byte +0x0
pf_at 0x8cef
l_kernel_0002940d: and dword [ebp-0x30],byte +0x0
pf_at 0x8cf3
l_kernel_00029411: sub esp,byte +0x8
pf_at 0x8cf6
l_kernel_00029414: mov edi,[ebp-0x20]
pf_at 0x8cf9
l_kernel_00029417: mov ecx,edi
pf_at 0x8cfb
l_kernel_00029419: mov edx,esi
pf_at 0x8cfd
l_kernel_0002941b: push byte +0x2
pf_at 0x8cff
l_kernel_0002941d: push ebx
pf_at 0x8d00
l_kernel_0002941e: call 0x2b86a
pf_at 0x8d05
l_kernel_00029423: add esp,byte +0x10
pf_at 0x8d08
l_kernel_00029426: test al,al
pf_at 0x8d0a
l_kernel_00029428: jz near 0x292e6
pf_at 0x8d10
l_kernel_0002942e: sub esp,byte +0x4
pf_at 0x8d13
l_kernel_00029431: lea eax,[ebp-0x13c]
pf_at 0x8d19
l_kernel_00029437: mov ecx,edi
pf_at 0x8d1b
l_kernel_00029439: mov edx,esi
pf_at 0x8d1d
l_kernel_0002943b: push eax
pf_at 0x8d1e
l_kernel_0002943c: push ebx
pf_at 0x8d1f
l_kernel_0002943d: mov ebx,esi
pf_at 0x8d21
l_kernel_0002943f: mov esi,[ebp-0x10]
pf_at 0x8d24
l_kernel_00029442: push esi
pf_at 0x8d25
l_kernel_00029443: call 0x2b8af
pf_at 0x8d2a
l_kernel_00029448: add esp,byte +0x10
pf_at 0x8d2d
l_kernel_0002944b: test al,al
pf_at 0x8d2f
l_kernel_0002944d: jz near 0x292e6
pf_at 0x8d35
l_kernel_00029453: lea eax,[ebp-0x30]
pf_at 0x8d38
l_kernel_00029456: mov ecx,edi
pf_at 0x8d3a
l_kernel_00029458: mov [ebp-0x14],ebx
pf_at 0x8d3d
l_kernel_0002945b: mov edx,ebx
pf_at 0x8d3f
l_kernel_0002945d: push eax
pf_at 0x8d40
l_kernel_0002945e: push byte +0x1
pf_at 0x8d42
l_kernel_00029460: push dword [ebp-0x18]
pf_at 0x8d45
l_kernel_00029463: push esi
pf_at 0x8d46
l_kernel_00029464: call 0x2bb86
pf_at 0x8d4b
l_kernel_00029469: add esp,byte +0x10
pf_at 0x8d4e
l_kernel_0002946c: test al,al
pf_at 0x8d50
l_kernel_0002946e: jz near 0x292e6
pf_at 0x8d56
l_kernel_00029474: mov ecx,[ebp-0x13c]
pf_at 0x8d5c
l_kernel_0002947a: sub esp,byte +0xc
pf_at 0x8d5f
l_kernel_0002947d: lea eax,[ebp-0x28]
pf_at 0x8d62
l_kernel_00029480: lea edx,[ebp-0x24]
pf_at 0x8d65
l_kernel_00029483: push eax
pf_at 0x8d66
l_kernel_00029484: call 0x253f8
pf_at 0x8d6b
l_kernel_00029489: add esp,byte +0x10
pf_at 0x8d6e
l_kernel_0002948c: sub esp,byte +0x4
pf_at 0x8d71
l_kernel_0002948f: test al,al
pf_at 0x8d73
l_kernel_00029491: jz near 0x29950
pf_at 0x8d79
l_kernel_00029497: push dword [ebp-0x28]
pf_at 0x8d7c
l_kernel_0002949a: push dword [ebp-0x24]
pf_at 0x8d7f
l_kernel_0002949d: push dword [ebp-0x30]
pf_at 0x8d82
l_kernel_000294a0: call 0x20c1d
pf_at 0x8d87
l_kernel_000294a5: add esp,byte +0x10
pf_at 0x8d8a
l_kernel_000294a8: mov edx,[ebp-0x28]
pf_at 0x8d8d
l_kernel_000294ab: lea esi,[ebp-0x33c]
pf_at 0x8d93
l_kernel_000294b1: mov ecx,esi
pf_at 0x8d95
l_kernel_000294b3: jmp near 0x2a7b6
pf_at 0x8d9a
l_kernel_000294b8: cmp ebx,byte +0x2
pf_at 0x8d9d
l_kernel_000294bb: jnz near 0x29667
pf_at 0x8da3
l_kernel_000294c1: lea eax,[ebp-0x13c]
pf_at 0x8da9
l_kernel_000294c7: mov ebx,[ebp-0x20]
pf_at 0x8dac
l_kernel_000294ca: mov ecx,ebx
pf_at 0x8dae
l_kernel_000294cc: mov edx,esi
pf_at 0x8db0
l_kernel_000294ce: push eax
pf_at 0x8db1
l_kernel_000294cf: push byte +0x1
pf_at 0x8db3
l_kernel_000294d1: push byte +0x2
pf_at 0x8db5
l_kernel_000294d3: push dword [ebp-0x10]
pf_at 0x8db8
l_kernel_000294d6: call 0x2bb86
pf_at 0x8dbd
l_kernel_000294db: add esp,byte +0x10
pf_at 0x8dc0
l_kernel_000294de: test al,al
pf_at 0x8dc2
l_kernel_000294e0: jz near 0x292e6
pf_at 0x8dc8
l_kernel_000294e6: mov eax,[ebp-0x13c]
pf_at 0x8dce
l_kernel_000294ec: cmp eax,byte +0x4
pf_at 0x8dd1
l_kernel_000294ef: ja short 0x294fd
pf_at 0x8dd3
l_kernel_000294f1: push byte +0x16
pf_at 0x8dd5
l_kernel_000294f3: pop ecx
pf_at 0x8dd6
l_kernel_000294f4: bt ecx,eax
pf_at 0x8dd9
l_kernel_000294f7: jc near 0x2966d
pf_at 0x8ddf
l_kernel_000294fd: mov edi,[ebp-0x1c]
pf_at 0x8de2
l_kernel_00029500: test eax,eax
pf_at 0x8de4
l_kernel_00029502: jz near 0x29a73
pf_at 0x8dea
l_kernel_00029508: cmp eax,0x10000
pf_at 0x8def
l_kernel_0002950d: jc near 0x29a81
pf_at 0x8df5
l_kernel_00029513: push esi
pf_at 0x8df6
l_kernel_00029514: push dword 0x2d72c
pf_at 0x8dfb
l_kernel_00029519: jmp short 0x29586
pf_at 0x8dfd
l_kernel_0002951b: lea eax,[ebp-0x13c]
pf_at 0x8e03
l_kernel_00029521: and dword [eax],byte +0x0
pf_at 0x8e06
l_kernel_00029524: and dword [ebp-0x28],byte +0x0
pf_at 0x8e0a
l_kernel_00029528: sub esp,byte +0x4
pf_at 0x8e0d
l_kernel_0002952b: mov ecx,[ebp-0x20]
pf_at 0x8e10
l_kernel_0002952e: mov edx,esi
pf_at 0x8e12
l_kernel_00029530: push eax
pf_at 0x8e13
l_kernel_00029531: push ebx
pf_at 0x8e14
l_kernel_00029532: push edi
pf_at 0x8e15
l_kernel_00029533: call 0x2b8af
pf_at 0x8e1a
l_kernel_00029538: add esp,byte +0x10
pf_at 0x8e1d
l_kernel_0002953b: test al,al
pf_at 0x8e1f
l_kernel_0002953d: jz near 0x292e6
pf_at 0x8e25
l_kernel_00029543: cmp ebx,byte +0x2
pf_at 0x8e28
l_kernel_00029546: mov eax,[ebp-0x10]
pf_at 0x8e2b
l_kernel_00029549: jnz near 0x2978b
pf_at 0x8e31
l_kernel_0002954f: cmp dword [eax+0x20],byte +0x4
pf_at 0x8e35
l_kernel_00029553: jnz near 0x2978b
pf_at 0x8e3b
l_kernel_00029559: mov ebx,[ebp-0x20]
pf_at 0x8e3e
l_kernel_0002955c: mov edi,[ebp-0x1c]
pf_at 0x8e41
l_kernel_0002955f: mov ecx,[ebp-0x13c]
pf_at 0x8e47
l_kernel_00029565: mov edx,[eax+0x30]
pf_at 0x8e4a
l_kernel_00029568: sub esp,byte +0xc
pf_at 0x8e4d
l_kernel_0002956b: push dword [eax+0x34]
pf_at 0x8e50
l_kernel_0002956e: call 0x2be36
pf_at 0x8e55
l_kernel_00029573: add esp,byte +0x10
pf_at 0x8e58
l_kernel_00029576: test al,al
pf_at 0x8e5a
l_kernel_00029578: jnz near 0x297e9
pf_at 0x8e60
l_kernel_0002957e: sub esp,byte +0x4
pf_at 0x8e63
l_kernel_00029581: push dword 0x2d77a
pf_at 0x8e68
l_kernel_00029586: push esi
pf_at 0x8e69
l_kernel_00029587: push ebx
pf_at 0x8e6a
l_kernel_00029588: jmp near 0x292de
pf_at 0x8e6f
l_kernel_0002958d: mov ecx,esi
pf_at 0x8e71
l_kernel_0002958f: mov edx,0x2d155
pf_at 0x8e76
l_kernel_00029594: call 0x26458
pf_at 0x8e7b
l_kernel_00029599: test al,al
pf_at 0x8e7d
l_kernel_0002959b: jz near 0x2969c
pf_at 0x8e83
l_kernel_000295a1: and dword [ebp-0x13c],byte +0x0
pf_at 0x8e8a
l_kernel_000295a8: and dword [ebp-0x24],byte +0x0
pf_at 0x8e8e
l_kernel_000295ac: and dword [ebp-0x28],byte +0x0
pf_at 0x8e92
l_kernel_000295b0: sub esp,byte +0x8
pf_at 0x8e95
l_kernel_000295b3: mov edi,[ebp-0x20]
pf_at 0x8e98
l_kernel_000295b6: mov ecx,edi
pf_at 0x8e9a
l_kernel_000295b8: mov edx,esi
pf_at 0x8e9c
l_kernel_000295ba: push byte +0x3
pf_at 0x8e9e
l_kernel_000295bc: push ebx
pf_at 0x8e9f
l_kernel_000295bd: call 0x2b86a
pf_at 0x8ea4
l_kernel_000295c2: add esp,byte +0x10
pf_at 0x8ea7
l_kernel_000295c5: test al,al
pf_at 0x8ea9
l_kernel_000295c7: jz near 0x292e6
pf_at 0x8eaf
l_kernel_000295cd: sub esp,byte +0x4
pf_at 0x8eb2
l_kernel_000295d0: lea eax,[ebp-0x13c]
pf_at 0x8eb8
l_kernel_000295d6: mov ecx,edi
pf_at 0x8eba
l_kernel_000295d8: mov edi,esi
pf_at 0x8ebc
l_kernel_000295da: mov edx,esi
pf_at 0x8ebe
l_kernel_000295dc: push eax
pf_at 0x8ebf
l_kernel_000295dd: push ebx
pf_at 0x8ec0
l_kernel_000295de: push dword [ebp-0x10]
pf_at 0x8ec3
l_kernel_000295e1: call 0x2b8af
pf_at 0x8ec8
l_kernel_000295e6: add esp,byte +0x10
pf_at 0x8ecb
l_kernel_000295e9: test al,al
pf_at 0x8ecd
l_kernel_000295eb: jz near 0x292e6
pf_at 0x8ed3
l_kernel_000295f1: lea eax,[ebp-0x24]
pf_at 0x8ed6
l_kernel_000295f4: mov ecx,[ebp-0x20]
pf_at 0x8ed9
l_kernel_000295f7: mov edx,edi
pf_at 0x8edb
l_kernel_000295f9: push eax
pf_at 0x8edc
l_kernel_000295fa: push byte +0x1
pf_at 0x8ede
l_kernel_000295fc: push dword [ebp-0x18]
pf_at 0x8ee1
l_kernel_000295ff: push dword [ebp-0x10]
pf_at 0x8ee4
l_kernel_00029602: call 0x2bb86
pf_at 0x8ee9
l_kernel_00029607: add esp,byte +0x10
pf_at 0x8eec
l_kernel_0002960a: test al,al
pf_at 0x8eee
l_kernel_0002960c: jz near 0x292e6
pf_at 0x8ef4
l_kernel_00029612: lea eax,[ebp-0x28]
pf_at 0x8ef7
l_kernel_00029615: mov ecx,[ebp-0x20]
pf_at 0x8efa
l_kernel_00029618: mov edx,edi
pf_at 0x8efc
l_kernel_0002961a: push eax
pf_at 0x8efd
l_kernel_0002961b: push byte +0x2
pf_at 0x8eff
l_kernel_0002961d: push dword [ebp-0x18]
pf_at 0x8f02
l_kernel_00029620: push dword [ebp-0x10]
pf_at 0x8f05
l_kernel_00029623: call 0x2bb86
pf_at 0x8f0a
l_kernel_00029628: add esp,byte +0x10
pf_at 0x8f0d
l_kernel_0002962b: test al,al
pf_at 0x8f0f
l_kernel_0002962d: jz near 0x292e6
pf_at 0x8f15
l_kernel_00029633: mov ecx,[ebp-0x13c]
pf_at 0x8f1b
l_kernel_00029639: mov edx,[ebp-0x24]
pf_at 0x8f1e
l_kernel_0002963c: sub esp,byte +0xc
pf_at 0x8f21
l_kernel_0002963f: push dword [ebp-0x28]
pf_at 0x8f24
l_kernel_00029642: call 0x2be36
pf_at 0x8f29
l_kernel_00029647: add esp,byte +0x10
pf_at 0x8f2c
l_kernel_0002964a: test al,al
pf_at 0x8f2e
l_kernel_0002964c: jz near 0x29a96
pf_at 0x8f34
l_kernel_00029652: lea esi,[ebp-0x33c]
pf_at 0x8f3a
l_kernel_00029658: xor edx,edx
pf_at 0x8f3c
l_kernel_0002965a: inc edx
pf_at 0x8f3d
l_kernel_0002965b: mov ecx,esi
pf_at 0x8f3f
l_kernel_0002965d: call 0x27014
pf_at 0x8f44
l_kernel_00029662: jmp near 0x2a7bb
pf_at 0x8f49
l_kernel_00029667: xor eax,eax
pf_at 0x8f4b
l_kernel_00029669: inc eax
pf_at 0x8f4c
l_kernel_0002966a: mov ebx,[ebp-0x20]
pf_at 0x8f4f
l_kernel_0002966d: sub esp,byte +0x4
pf_at 0x8f52
l_kernel_00029670: mov ecx,ebx
pf_at 0x8f54
l_kernel_00029672: jmp near 0x28ffe
pf_at 0x8f59
l_kernel_00029677: cmp ecx,byte +0x2
pf_at 0x8f5c
l_kernel_0002967a: setz al
pf_at 0x8f5f
l_kernel_0002967d: test al,bl
pf_at 0x8f61
l_kernel_0002967f: jz near 0x29710
pf_at 0x8f67
l_kernel_00029685: xor eax,eax
pf_at 0x8f69
l_kernel_00029687: inc eax
pf_at 0x8f6a
l_kernel_00029688: mov ecx,[ebp-0x20]
pf_at 0x8f6d
l_kernel_0002968b: mov edx,esi
pf_at 0x8f6f
l_kernel_0002968d: push dword [ebp-0x1c]
pf_at 0x8f72
l_kernel_00029690: push eax
pf_at 0x8f73
l_kernel_00029691: push dword [ebp-0x28]
pf_at 0x8f76
l_kernel_00029694: push dword [ebp-0x24]
pf_at 0x8f79
l_kernel_00029697: jmp near 0x2916e
pf_at 0x8f7e
l_kernel_0002969c: mov ecx,esi
pf_at 0x8f80
l_kernel_0002969e: mov edx,0x2d15b
pf_at 0x8f85
l_kernel_000296a3: call 0x26458
pf_at 0x8f8a
l_kernel_000296a8: test al,al
pf_at 0x8f8c
l_kernel_000296aa: jz near 0x2980e
pf_at 0x8f92
l_kernel_000296b0: and dword [ebp-0x13c],byte +0x0
pf_at 0x8f99
l_kernel_000296b7: sub esp,byte +0x8
pf_at 0x8f9c
l_kernel_000296ba: mov ecx,[ebp-0x20]
pf_at 0x8f9f
l_kernel_000296bd: mov edi,ecx
pf_at 0x8fa1
l_kernel_000296bf: mov ebx,esi
pf_at 0x8fa3
l_kernel_000296c1: mov edx,esi
pf_at 0x8fa5
l_kernel_000296c3: push byte +0x1
pf_at 0x8fa7
l_kernel_000296c5: push dword [ebp-0x18]
pf_at 0x8faa
l_kernel_000296c8: call 0x2b86a
pf_at 0x8faf
l_kernel_000296cd: add esp,byte +0x10
pf_at 0x8fb2
l_kernel_000296d0: test al,al
pf_at 0x8fb4
l_kernel_000296d2: jz near 0x292e6
pf_at 0x8fba
l_kernel_000296d8: lea eax,[ebp-0x13c]
pf_at 0x8fc0
l_kernel_000296de: mov ecx,edi
pf_at 0x8fc2
l_kernel_000296e0: mov edx,ebx
pf_at 0x8fc4
l_kernel_000296e2: push eax
pf_at 0x8fc5
l_kernel_000296e3: push byte +0x0
pf_at 0x8fc7
l_kernel_000296e5: push dword [ebp-0x18]
pf_at 0x8fca
l_kernel_000296e8: push dword [ebp-0x10]
pf_at 0x8fcd
l_kernel_000296eb: call 0x2bb86
pf_at 0x8fd2
l_kernel_000296f0: add esp,byte +0x10
pf_at 0x8fd5
l_kernel_000296f3: test al,al
pf_at 0x8fd7
l_kernel_000296f5: jz near 0x292e6
pf_at 0x8fdd
l_kernel_000296fb: call [ebp-0x13c]
pf_at 0x8fe3
l_kernel_00029701: lea esi,[ebp-0x33c]
pf_at 0x8fe9
l_kernel_00029707: mov ecx,esi
pf_at 0x8feb
l_kernel_00029709: mov edx,eax
pf_at 0x8fed
l_kernel_0002970b: jmp near 0x2a7b6
pf_at 0x8ff2
l_kernel_00029710: mov eax,[ebp-0x24]
pf_at 0x8ff5
l_kernel_00029713: mov [ebp-0x10],eax
pf_at 0x8ff8
l_kernel_00029716: mov edx,[ebp-0x18]
pf_at 0x8ffb
l_kernel_00029719: dec edx
pf_at 0x8ffc
l_kernel_0002971a: lea ebx,[ebp-0x13c]
pf_at 0x9002
l_kernel_00029720: and dword [ebx],byte +0x0
pf_at 0x9005
l_kernel_00029723: sub esp,byte +0xc
pf_at 0x9008
l_kernel_00029726: mov ecx,edi
pf_at 0x900a
l_kernel_00029728: push ebx
pf_at 0x900b
l_kernel_00029729: call 0x2bffa
pf_at 0x9010
l_kernel_0002972e: add esp,byte +0x10
pf_at 0x9013
l_kernel_00029731: mov ecx,[ebx]
pf_at 0x9015
l_kernel_00029733: mov ebx,eax
pf_at 0x9017
l_kernel_00029735: sub esp,byte +0xc
pf_at 0x901a
l_kernel_00029738: test al,al
pf_at 0x901c
l_kernel_0002973a: jz near 0x298d6
pf_at 0x9022
l_kernel_00029740: push ecx
pf_at 0x9023
l_kernel_00029741: call 0x20ccf
pf_at 0x9028
l_kernel_00029746: add esp,byte +0x10
pf_at 0x902b
l_kernel_00029749: mov esi,eax
pf_at 0x902d
l_kernel_0002974b: inc eax
pf_at 0x902e
l_kernel_0002974c: sub esp,byte +0x4
pf_at 0x9031
l_kernel_0002974f: push eax
pf_at 0x9032
l_kernel_00029750: push dword [ebp-0x13c]
pf_at 0x9038
l_kernel_00029756: push dword [ebp-0x10]
pf_at 0x903b
l_kernel_00029759: call 0x20c1d
pf_at 0x9040
l_kernel_0002975e: pop ecx
pf_at 0x9041
l_kernel_0002975f: push dword [ebp-0x13c]
pf_at 0x9047
l_kernel_00029765: call 0x20aee
pf_at 0x904c
l_kernel_0002976a: add esp,byte +0x10
pf_at 0x904f
l_kernel_0002976d: lea ecx,[ebp-0x33c]
pf_at 0x9055
l_kernel_00029773: mov edx,esi
pf_at 0x9057
l_kernel_00029775: call 0x28508
pf_at 0x905c
l_kernel_0002977a: push byte +0x8
pf_at 0x905e
l_kernel_0002977c: pop ecx
pf_at 0x905f
l_kernel_0002977d: mov edi,[ebp-0x1c]
pf_at 0x9062
l_kernel_00029780: lea esi,[ebp-0x33c]
pf_at 0x9068
l_kernel_00029786: jmp near 0x28cd0
pf_at 0x906d
l_kernel_0002978b: mov edi,[ebp-0x1c]
pf_at 0x9070
l_kernel_0002978e: add eax,byte +0x20
pf_at 0x9073
l_kernel_00029791: dec ebx
pf_at 0x9074
l_kernel_00029792: sub esp,byte +0xc
pf_at 0x9077
l_kernel_00029795: mov ecx,eax
pf_at 0x9079
l_kernel_00029797: lea eax,[ebp-0x28]
pf_at 0x907c
l_kernel_0002979a: mov edx,ebx
pf_at 0x907e
l_kernel_0002979c: push eax
pf_at 0x907f
l_kernel_0002979d: call 0x2bffa
pf_at 0x9084
l_kernel_000297a2: add esp,byte +0x10
pf_at 0x9087
l_kernel_000297a5: test al,al
pf_at 0x9089
l_kernel_000297a7: jz near 0x298e9
pf_at 0x908f
l_kernel_000297ad: mov eax,[ebp-0x13c]
pf_at 0x9095
l_kernel_000297b3: mov [ebp-0x18],eax
pf_at 0x9098
l_kernel_000297b6: mov ebx,[ebp-0x28]
pf_at 0x909b
l_kernel_000297b9: sub esp,byte +0xc
pf_at 0x909e
l_kernel_000297bc: push ebx
pf_at 0x909f
l_kernel_000297bd: call 0x20ccf
pf_at 0x90a4
l_kernel_000297c2: pop ecx
pf_at 0x90a5
l_kernel_000297c3: mov ecx,[ebp-0x18]
pf_at 0x90a8
l_kernel_000297c6: mov edx,ebx
pf_at 0x90aa
l_kernel_000297c8: push eax
pf_at 0x90ab
l_kernel_000297c9: call 0x2be36
pf_at 0x90b0
l_kernel_000297ce: add esp,byte +0x10
pf_at 0x90b3
l_kernel_000297d1: mov ebx,eax
pf_at 0x90b5
l_kernel_000297d3: sub esp,byte +0xc
pf_at 0x90b8
l_kernel_000297d6: push dword [ebp-0x28]
pf_at 0x90bb
l_kernel_000297d9: call 0x20aee
pf_at 0x90c0
l_kernel_000297de: add esp,byte +0x10
pf_at 0x90c3
l_kernel_000297e1: test bl,bl
pf_at 0x90c5
l_kernel_000297e3: jz near 0x29943
pf_at 0x90cb
l_kernel_000297e9: lea esi,[ebp-0x33c]
pf_at 0x90d1
l_kernel_000297ef: xor edx,edx
pf_at 0x90d3
l_kernel_000297f1: inc edx
pf_at 0x90d4
l_kernel_000297f2: mov ecx,esi
pf_at 0x90d6
l_kernel_000297f4: call 0x27014
pf_at 0x90db
l_kernel_000297f9: push byte +0x8
pf_at 0x90dd
l_kernel_000297fb: pop ecx
pf_at 0x90de
l_kernel_000297fc: jmp near 0x2a7c1
pf_at 0x90e3
l_kernel_00029801: sub esp,byte +0x4
pf_at 0x90e6
l_kernel_00029804: push dword 0x2d71d
pf_at 0x90eb
l_kernel_00029809: jmp near 0x292da
pf_at 0x90f0
l_kernel_0002980e: mov ebx,[ebp-0x20]
pf_at 0x90f3
l_kernel_00029811: mov ecx,esi
pf_at 0x90f5
l_kernel_00029813: mov edx,0x2d160
pf_at 0x90fa
l_kernel_00029818: call 0x26458
pf_at 0x90ff
l_kernel_0002981d: test al,al
pf_at 0x9101
l_kernel_0002981f: jz near 0x29901
pf_at 0x9107
l_kernel_00029825: and dword [ebp-0x13c],byte +0x0
pf_at 0x910e
l_kernel_0002982c: and dword [ebp-0x24],byte +0x0
pf_at 0x9112
l_kernel_00029830: and dword [ebp-0x28],byte +0x0
pf_at 0x9116
l_kernel_00029834: and dword [ebp-0x30],byte +0x0
pf_at 0x911a
l_kernel_00029838: sub esp,byte +0x8
pf_at 0x911d
l_kernel_0002983b: mov ecx,ebx
pf_at 0x911f
l_kernel_0002983d: mov edi,esi
pf_at 0x9121
l_kernel_0002983f: mov edx,esi
pf_at 0x9123
l_kernel_00029841: push byte +0x2
pf_at 0x9125
l_kernel_00029843: push dword [ebp-0x18]
pf_at 0x9128
l_kernel_00029846: call 0x2b86a
pf_at 0x912d
l_kernel_0002984b: add esp,byte +0x10
pf_at 0x9130
l_kernel_0002984e: test al,al
pf_at 0x9132
l_kernel_00029850: jz near 0x292e6
pf_at 0x9138
l_kernel_00029856: sub esp,byte +0x4
pf_at 0x913b
l_kernel_00029859: lea eax,[ebp-0x13c]
pf_at 0x9141
l_kernel_0002985f: mov ecx,ebx
pf_at 0x9143
l_kernel_00029861: mov edx,edi
pf_at 0x9145
l_kernel_00029863: push eax
pf_at 0x9146
l_kernel_00029864: push dword [ebp-0x18]
pf_at 0x9149
l_kernel_00029867: push dword [ebp-0x10]
pf_at 0x914c
l_kernel_0002986a: call 0x2b8af
pf_at 0x9151
l_kernel_0002986f: add esp,byte +0x10
pf_at 0x9154
l_kernel_00029872: test al,al
pf_at 0x9156
l_kernel_00029874: jz near 0x292e6
pf_at 0x915c
l_kernel_0002987a: lea eax,[ebp-0x30]
pf_at 0x915f
l_kernel_0002987d: mov ecx,ebx
pf_at 0x9161
l_kernel_0002987f: mov edx,edi
pf_at 0x9163
l_kernel_00029881: push eax
pf_at 0x9164
l_kernel_00029882: push byte +0x1
pf_at 0x9166
l_kernel_00029884: push dword [ebp-0x18]
pf_at 0x9169
l_kernel_00029887: push dword [ebp-0x10]
pf_at 0x916c
l_kernel_0002988a: call 0x2bb86
pf_at 0x9171
l_kernel_0002988f: add esp,byte +0x10
pf_at 0x9174
l_kernel_00029892: test al,al
pf_at 0x9176
l_kernel_00029894: jz near 0x292e6
pf_at 0x917c
l_kernel_0002989a: mov ecx,[ebp-0x13c]
pf_at 0x9182
l_kernel_000298a0: sub esp,byte +0xc
pf_at 0x9185
l_kernel_000298a3: lea eax,[ebp-0x28]
pf_at 0x9188
l_kernel_000298a6: lea edx,[ebp-0x24]
pf_at 0x918b
l_kernel_000298a9: push eax
pf_at 0x918c
l_kernel_000298aa: call 0x253f8
pf_at 0x9191
l_kernel_000298af: add esp,byte +0x10
pf_at 0x9194
l_kernel_000298b2: sub esp,byte +0x4
pf_at 0x9197
l_kernel_000298b5: test al,al
pf_at 0x9199
l_kernel_000298b7: jz near 0x29b09
pf_at 0x919f
l_kernel_000298bd: push dword [ebp-0x28]
pf_at 0x91a2
l_kernel_000298c0: push dword [ebp-0x24]
pf_at 0x91a5
l_kernel_000298c3: push dword [ebp-0x30]
pf_at 0x91a8
l_kernel_000298c6: call 0x20c1d
pf_at 0x91ad
l_kernel_000298cb: add esp,byte +0x10
pf_at 0x91b0
l_kernel_000298ce: call [ebp-0x30]
pf_at 0x91b3
l_kernel_000298d1: jmp near 0x29701
pf_at 0x91b8
l_kernel_000298d6: push ecx
pf_at 0x91b9
l_kernel_000298d7: call 0x20aee
pf_at 0x91be
l_kernel_000298dc: add esp,byte +0xc
pf_at 0x91c1
l_kernel_000298df: push dword 0x2d787
pf_at 0x91c6
l_kernel_000298e4: jmp near 0x28d3c
pf_at 0x91cb
l_kernel_000298e9: sub esp,byte +0xc
pf_at 0x91ce
l_kernel_000298ec: push dword [ebp-0x28]
pf_at 0x91d1
l_kernel_000298ef: call 0x20aee
pf_at 0x91d6
l_kernel_000298f4: add esp,byte +0xc
pf_at 0x91d9
l_kernel_000298f7: push dword 0x2d787
pf_at 0x91de
l_kernel_000298fc: jmp near 0x292da
pf_at 0x91e3
l_kernel_00029901: mov [ebp-0x14],esi
pf_at 0x91e6
l_kernel_00029904: mov ecx,esi
pf_at 0x91e8
l_kernel_00029906: mov edx,0x2d168
pf_at 0x91ed
l_kernel_0002990b: call 0x26458
pf_at 0x91f2
l_kernel_00029910: test al,al
pf_at 0x91f4
l_kernel_00029912: jz short 0x2995d
pf_at 0x91f6
l_kernel_00029914: sub esp,byte +0x8
pf_at 0x91f9
l_kernel_00029917: mov ecx,ebx
pf_at 0x91fb
l_kernel_00029919: mov edx,[ebp-0x14]
pf_at 0x91fe
l_kernel_0002991c: push byte +0x0
pf_at 0x9200
l_kernel_0002991e: push dword [ebp-0x18]
pf_at 0x9203
l_kernel_00029921: call 0x2b86a
pf_at 0x9208
l_kernel_00029926: add esp,byte +0x10
pf_at 0x920b
l_kernel_00029929: test al,al
pf_at 0x920d
l_kernel_0002992b: jz near 0x292e6
pf_at 0x9213
l_kernel_00029931: mov ecx,[ebp-0x1c]
pf_at 0x9216
l_kernel_00029934: add esp,0x33c
pf_at 0x921c
l_kernel_0002993a: pop esi
pf_at 0x921d
l_kernel_0002993b: pop edi
pf_at 0x921e
l_kernel_0002993c: pop ebx
pf_at 0x921f
l_kernel_0002993d: pop ebp
pf_at 0x9220
l_kernel_0002993e: jmp near 0x28534
pf_at 0x9225
l_kernel_00029943: sub esp,byte +0x4
pf_at 0x9228
l_kernel_00029946: push dword 0x2d77a
pf_at 0x922d
l_kernel_0002994b: jmp near 0x292da
pf_at 0x9232
l_kernel_00029950: push dword 0x2d71d
pf_at 0x9237
l_kernel_00029955: push dword [ebp-0x14]
pf_at 0x923a
l_kernel_00029958: jmp near 0x292db
pf_at 0x923f
l_kernel_0002995d: mov ecx,[ebp-0x14]
pf_at 0x9242
l_kernel_00029960: mov edx,0x2d16e
pf_at 0x9247
l_kernel_00029965: call 0x26458
pf_at 0x924c
l_kernel_0002996a: test al,al
pf_at 0x924e
l_kernel_0002996c: jz near 0x29a1a
pf_at 0x9254
l_kernel_00029972: sub esp,byte +0x8
pf_at 0x9257
l_kernel_00029975: mov ecx,ebx
pf_at 0x9259
l_kernel_00029977: mov edx,[ebp-0x14]
pf_at 0x925c
l_kernel_0002997a: push byte +0x0
pf_at 0x925e
l_kernel_0002997c: push dword [ebp-0x18]
pf_at 0x9261
l_kernel_0002997f: call 0x2b86a
pf_at 0x9266
l_kernel_00029984: add esp,byte +0x10
pf_at 0x9269
l_kernel_00029987: test al,al
pf_at 0x926b
l_kernel_00029989: jz near 0x292e6
pf_at 0x9271
l_kernel_0002998f: mov ecx,[ebp-0x1c]
pf_at 0x9274
l_kernel_00029992: add esp,0x33c
pf_at 0x927a
l_kernel_00029998: pop esi
pf_at 0x927b
l_kernel_00029999: pop edi
pf_at 0x927c
l_kernel_0002999a: pop ebx
pf_at 0x927d
l_kernel_0002999b: pop ebp
pf_at 0x927e
l_kernel_0002999c: jmp near 0x285ca
pf_at 0x9283
l_kernel_000299a1: sub esp,byte +0xc
pf_at 0x9286
l_kernel_000299a4: mov ecx,edi
pf_at 0x9288
l_kernel_000299a6: push eax
pf_at 0x9289
l_kernel_000299a7: call 0x250f2
pf_at 0x928e
l_kernel_000299ac: jmp near 0x29173
pf_at 0x9293
l_kernel_000299b1: test esi,esi
pf_at 0x9295
l_kernel_000299b3: jz short 0x299d1
pf_at 0x9297
l_kernel_000299b5: mov eax,[ebp-0x34]
pf_at 0x929a
l_kernel_000299b8: lea eax,[eax+0x2f1bc]
pf_at 0x92a0
l_kernel_000299be: shl esi,byte 0x8
pf_at 0x92a3
l_kernel_000299c1: sub esp,byte +0x4
pf_at 0x92a6
l_kernel_000299c4: push esi
pf_at 0x92a7
l_kernel_000299c5: push dword [ebp-0x18]
pf_at 0x92aa
l_kernel_000299c8: push eax
pf_at 0x92ab
l_kernel_000299c9: call 0x20c3e
pf_at 0x92b0
l_kernel_000299ce: add esp,byte +0x10
pf_at 0x92b3
l_kernel_000299d1: sub esp,byte +0x4
pf_at 0x92b6
l_kernel_000299d4: push dword 0xf4
pf_at 0x92bb
l_kernel_000299d9: lea eax,[ebp-0x33c]
pf_at 0x92c1
l_kernel_000299df: push eax
pf_at 0x92c2
l_kernel_000299e0: mov esi,[ebp-0x18]
pf_at 0x92c5
l_kernel_000299e3: push esi
pf_at 0x92c6
l_kernel_000299e4: call 0x20c1d
pf_at 0x92cb
l_kernel_000299e9: add esp,byte +0x10
pf_at 0x92ce
l_kernel_000299ec: mov eax,[ebp-0x10]
pf_at 0x92d1
l_kernel_000299ef: mov [esi+0xf4],eax
pf_at 0x92d7
l_kernel_000299f5: mov eax,[ebp-0x3c]
pf_at 0x92da
l_kernel_000299f8: mov [esi+0xfc],eax
pf_at 0x92e0
l_kernel_000299fe: mov [esi+0xf8],ebx
pf_at 0x92e6
l_kernel_00029a04: inc dword [dword 0x3f0bc]
pf_at 0x92ec
l_kernel_00029a0a: mov esi,[ebp-0x14]
pf_at 0x92ef
l_kernel_00029a0d: sub esp,byte +0x4
pf_at 0x92f2
l_kernel_00029a10: push dword 0x2d7a9
pf_at 0x92f7
l_kernel_00029a15: jmp near 0x292da
pf_at 0x92fc
l_kernel_00029a1a: mov ecx,[ebp-0x14]
pf_at 0x92ff
l_kernel_00029a1d: mov edx,0x2d174
pf_at 0x9304
l_kernel_00029a22: call 0x26458
pf_at 0x9309
l_kernel_00029a27: test al,al
pf_at 0x930b
l_kernel_00029a29: jz short 0x29aa4
pf_at 0x930d
l_kernel_00029a2b: sub esp,byte +0x8
pf_at 0x9310
l_kernel_00029a2e: mov ecx,ebx
pf_at 0x9312
l_kernel_00029a30: mov edx,[ebp-0x14]
pf_at 0x9315
l_kernel_00029a33: push byte +0x1
pf_at 0x9317
l_kernel_00029a35: push dword [ebp-0x18]
pf_at 0x931a
l_kernel_00029a38: call 0x2b86a
pf_at 0x931f
l_kernel_00029a3d: add esp,byte +0x10
pf_at 0x9322
l_kernel_00029a40: test al,al
pf_at 0x9324
l_kernel_00029a42: jz near 0x292e6
pf_at 0x932a
l_kernel_00029a48: mov eax,[ebp-0x10]
pf_at 0x932d
l_kernel_00029a4b: mov eax,[eax]
pf_at 0x932f
l_kernel_00029a4d: cmp eax,byte +0x3
pf_at 0x9332
l_kernel_00029a50: jz near 0x29be2
pf_at 0x9338
l_kernel_00029a56: cmp eax,byte +0x8
pf_at 0x933b
l_kernel_00029a59: jz near 0x29bd0
pf_at 0x9341
l_kernel_00029a5f: cmp eax,byte +0x7
pf_at 0x9344
l_kernel_00029a62: jnz near 0x29bfd
pf_at 0x934a
l_kernel_00029a68: mov eax,[ebp-0x10]
pf_at 0x934d
l_kernel_00029a6b: mov eax,[eax+0x18]
pf_at 0x9350
l_kernel_00029a6e: jmp near 0x29bd6
pf_at 0x9355
l_kernel_00029a73: sub esp,byte +0xc
pf_at 0x9358
l_kernel_00029a76: mov ecx,edi
pf_at 0x935a
l_kernel_00029a78: mov edx,0x2ca9c
pf_at 0x935f
l_kernel_00029a7d: push byte +0x0
pf_at 0x9361
l_kernel_00029a7f: jmp short 0x29aff
pf_at 0x9363
l_kernel_00029a81: mov edx,[ebp-0x33c]
pf_at 0x9369
l_kernel_00029a87: xor ecx,ecx
pf_at 0x936b
l_kernel_00029a89: cmp eax,ecx
pf_at 0x936d
l_kernel_00029a8b: jz short 0x29af9
pf_at 0x936f
l_kernel_00029a8d: cmp byte [edx+ecx],0x0
pf_at 0x9373
l_kernel_00029a91: jz short 0x29af7
pf_at 0x9375
l_kernel_00029a93: inc ecx
pf_at 0x9376
l_kernel_00029a94: jmp short 0x29a89
pf_at 0x9378
l_kernel_00029a96: sub esp,byte +0x4
pf_at 0x937b
l_kernel_00029a99: push dword 0x2d7b7
pf_at 0x9380
l_kernel_00029a9e: push edi
pf_at 0x9381
l_kernel_00029a9f: jmp near 0x292db
pf_at 0x9386
l_kernel_00029aa4: mov ecx,[ebp-0x14]
pf_at 0x9389
l_kernel_00029aa7: mov edx,0x2d19f
pf_at 0x938e
l_kernel_00029aac: call 0x26458
pf_at 0x9393
l_kernel_00029ab1: test al,al
pf_at 0x9395
l_kernel_00029ab3: jz short 0x29b14
pf_at 0x9397
l_kernel_00029ab5: cmp dword [ebp-0x18],byte +0x2
pf_at 0x939b
l_kernel_00029ab9: jnz near 0x29b92
pf_at 0x93a1
l_kernel_00029abf: mov eax,[ebp-0x10]
pf_at 0x93a4
l_kernel_00029ac2: cmp dword [eax],byte +0x7
pf_at 0x93a7
l_kernel_00029ac5: jnz near 0x29b92
pf_at 0x93ad
l_kernel_00029acb: mov eax,[ebp-0x10]
pf_at 0x93b0
l_kernel_00029ace: mov ecx,[eax+0x18]
pf_at 0x93b3
l_kernel_00029ad1: test ecx,ecx
pf_at 0x93b5
l_kernel_00029ad3: jz near 0x29b92
pf_at 0x93bb
l_kernel_00029ad9: mov eax,[ebp-0x10]
pf_at 0x93be
l_kernel_00029adc: lea edx,[eax+0x20]
pf_at 0x93c1
l_kernel_00029adf: call 0x28586
pf_at 0x93c6
l_kernel_00029ae4: test al,al
pf_at 0x93c8
l_kernel_00029ae6: jz near 0x29d63
pf_at 0x93ce
l_kernel_00029aec: mov eax,[ebp-0x10]
pf_at 0x93d1
l_kernel_00029aef: mov eax,[eax+0x18]
pf_at 0x93d4
l_kernel_00029af2: jmp near 0x29bda
pf_at 0x93d9
l_kernel_00029af7: mov eax,ecx
pf_at 0x93db
l_kernel_00029af9: sub esp,byte +0xc
pf_at 0x93de
l_kernel_00029afc: mov ecx,edi
pf_at 0x93e0
l_kernel_00029afe: push eax
pf_at 0x93e1
l_kernel_00029aff: call 0x24f5c
pf_at 0x93e6
l_kernel_00029b04: jmp near 0x29173
pf_at 0x93eb
l_kernel_00029b09: push dword 0x2d71d
pf_at 0x93f0
l_kernel_00029b0e: push edi
pf_at 0x93f1
l_kernel_00029b0f: jmp near 0x29587
pf_at 0x93f6
l_kernel_00029b14: mov ecx,[ebp-0x14]
pf_at 0x93f9
l_kernel_00029b17: mov edx,0x2d1da
pf_at 0x93fe
l_kernel_00029b1c: call 0x26458
pf_at 0x9403
l_kernel_00029b21: test al,al
pf_at 0x9405
l_kernel_00029b23: jz short 0x29b9c
pf_at 0x9407
l_kernel_00029b25: and dword [ebp-0x13c],byte +0x0
pf_at 0x940e
l_kernel_00029b2c: cmp dword [ebp-0x18],byte +0x2
pf_at 0x9412
l_kernel_00029b30: jnz near 0x29bc6
pf_at 0x9418
l_kernel_00029b36: mov eax,[ebp-0x10]
pf_at 0x941b
l_kernel_00029b39: cmp dword [eax],byte +0x7
pf_at 0x941e
l_kernel_00029b3c: jnz near 0x29bc6
pf_at 0x9424
l_kernel_00029b42: mov eax,[ebp-0x10]
pf_at 0x9427
l_kernel_00029b45: cmp dword [eax+0x18],byte +0x0
pf_at 0x942b
l_kernel_00029b49: jz short 0x29bc6
pf_at 0x942d
l_kernel_00029b4b: lea edi,[ebp-0x13c]
pf_at 0x9433
l_kernel_00029b51: mov ecx,ebx
pf_at 0x9435
l_kernel_00029b53: mov edx,[ebp-0x14]
pf_at 0x9438
l_kernel_00029b56: push edi
pf_at 0x9439
l_kernel_00029b57: push byte +0x1
pf_at 0x943b
l_kernel_00029b59: push byte +0x2
pf_at 0x943d
l_kernel_00029b5b: push dword [ebp-0x10]
pf_at 0x9440
l_kernel_00029b5e: call 0x2b95a
pf_at 0x9445
l_kernel_00029b63: add esp,byte +0x10
pf_at 0x9448
l_kernel_00029b66: mov edx,[edi]
pf_at 0x944a
l_kernel_00029b68: test edx,edx
pf_at 0x944c
l_kernel_00029b6a: setns cl
pf_at 0x944f
l_kernel_00029b6d: test al,cl
pf_at 0x9451
l_kernel_00029b6f: jz short 0x29bc6
pf_at 0x9453
l_kernel_00029b71: mov eax,[ebp-0x10]
pf_at 0x9456
l_kernel_00029b74: mov ecx,[eax+0x18]
pf_at 0x9459
l_kernel_00029b77: call 0x2b140
pf_at 0x945e
l_kernel_00029b7c: test al,al
pf_at 0x9460
l_kernel_00029b7e: jz near 0x29e9e
pf_at 0x9466
l_kernel_00029b84: mov eax,[ebp-0x10]
pf_at 0x9469
l_kernel_00029b87: mov eax,[eax+0x18]
pf_at 0x946c
l_kernel_00029b8a: mov edx,[eax+0x8]
pf_at 0x946f
l_kernel_00029b8d: jmp near 0x294ab
pf_at 0x9474
l_kernel_00029b92: sub esp,byte +0x4
pf_at 0x9477
l_kernel_00029b95: push dword 0x2d1a4
pf_at 0x947c
l_kernel_00029b9a: jmp short 0x29c05
pf_at 0x947e
l_kernel_00029b9c: mov ecx,[ebp-0x14]
pf_at 0x9481
l_kernel_00029b9f: mov edx,0x2d226
pf_at 0x9486
l_kernel_00029ba4: call 0x26458
pf_at 0x948b
l_kernel_00029ba9: test al,al
pf_at 0x948d
l_kernel_00029bab: jz short 0x29c0d
pf_at 0x948f
l_kernel_00029bad: mov eax,[ebp-0x18]
pf_at 0x9492
l_kernel_00029bb0: add eax,byte -0x4
pf_at 0x9495
l_kernel_00029bb3: cmp eax,byte -0x3
pf_at 0x9498
l_kernel_00029bb6: ja near 0x29cc1
pf_at 0x949e
l_kernel_00029bbc: sub esp,byte +0x4
pf_at 0x94a1
l_kernel_00029bbf: push dword 0x2d22a
pf_at 0x94a6
l_kernel_00029bc4: jmp short 0x29c05
pf_at 0x94a8
l_kernel_00029bc6: sub esp,byte +0x4
pf_at 0x94ab
l_kernel_00029bc9: push dword 0x2d1e2
pf_at 0x94b0
l_kernel_00029bce: jmp short 0x29c05
pf_at 0x94b2
l_kernel_00029bd0: mov eax,[ebp-0x10]
pf_at 0x94b5
l_kernel_00029bd3: mov eax,[eax+0x1c]
pf_at 0x94b8
l_kernel_00029bd6: test eax,eax
pf_at 0x94ba
l_kernel_00029bd8: jz short 0x29bfd
pf_at 0x94bc
l_kernel_00029bda: mov edx,[eax+0x4]
pf_at 0x94bf
l_kernel_00029bdd: jmp near 0x294ab
pf_at 0x94c4
l_kernel_00029be2: mov eax,[ebp-0x10]
pf_at 0x94c7
l_kernel_00029be5: mov eax,[eax+0xc]
pf_at 0x94ca
l_kernel_00029be8: test eax,eax
pf_at 0x94cc
l_kernel_00029bea: jz short 0x29bfd
pf_at 0x94ce
l_kernel_00029bec: sub esp,byte +0xc
pf_at 0x94d1
l_kernel_00029bef: push eax
pf_at 0x94d2
l_kernel_00029bf0: call 0x20ccf
pf_at 0x94d7
l_kernel_00029bf5: add esp,byte +0x10
pf_at 0x94da
l_kernel_00029bf8: jmp near 0x29701
pf_at 0x94df
l_kernel_00029bfd: sub esp,byte +0x4
pf_at 0x94e2
l_kernel_00029c00: push dword 0x2d178
pf_at 0x94e7
l_kernel_00029c05: push dword [ebp-0x14]
pf_at 0x94ea
l_kernel_00029c08: jmp near 0x29587
pf_at 0x94ef
l_kernel_00029c0d: mov ecx,[ebp-0x14]
pf_at 0x94f2
l_kernel_00029c10: mov edx,0x2d262
pf_at 0x94f7
l_kernel_00029c15: call 0x26458
pf_at 0x94fc
l_kernel_00029c1a: test al,al
pf_at 0x94fe
l_kernel_00029c1c: jz near 0x29d01
pf_at 0x9504
l_kernel_00029c22: and dword [ebp-0x33c],byte +0x0
pf_at 0x950b
l_kernel_00029c29: and dword [ebp-0x338],byte +0x0
pf_at 0x9512
l_kernel_00029c30: and dword [ebp-0x334],byte +0x0
pf_at 0x9519
l_kernel_00029c37: and dword [ebp-0x330],byte +0x0
pf_at 0x9520
l_kernel_00029c3e: and dword [ebp-0x32c],byte +0x0
pf_at 0x9527
l_kernel_00029c45: and dword [ebp-0x328],byte +0x0
pf_at 0x952e
l_kernel_00029c4c: and dword [ebp-0x324],byte +0x0
pf_at 0x9535
l_kernel_00029c53: and dword [ebp-0x320],byte +0x0
pf_at 0x953c
l_kernel_00029c5a: cmp dword [ebp-0x18],byte +0x3
pf_at 0x9540
l_kernel_00029c5e: jnz near 0x29d70
pf_at 0x9546
l_kernel_00029c64: lea ecx,[ebp-0x33c]
pf_at 0x954c
l_kernel_00029c6a: mov edx,[ebp-0x10]
pf_at 0x954f
l_kernel_00029c6d: call 0x25048
pf_at 0x9554
l_kernel_00029c72: test al,al
pf_at 0x9556
l_kernel_00029c74: jz near 0x29e15
pf_at 0x955c
l_kernel_00029c7a: mov eax,[ebp-0x10]
pf_at 0x955f
l_kernel_00029c7d: lea edx,[eax+0x20]
pf_at 0x9562
l_kernel_00029c80: add eax,byte +0x40
pf_at 0x9565
l_kernel_00029c83: sub esp,byte +0x8
pf_at 0x9568
l_kernel_00029c86: lea ecx,[ebp-0x33c]
pf_at 0x956e
l_kernel_00029c8c: push byte +0x1
pf_at 0x9570
l_kernel_00029c8e: mov esi,eax
pf_at 0x9572
l_kernel_00029c90: push eax
pf_at 0x9573
l_kernel_00029c91: call 0x2ba0b
pf_at 0x9578
l_kernel_00029c96: add esp,byte +0x10
pf_at 0x957b
l_kernel_00029c99: test al,al
pf_at 0x957d
l_kernel_00029c9b: jz near 0x29eab
pf_at 0x9583
l_kernel_00029ca1: cmp dword [ebp-0x33c],byte +0x3
pf_at 0x958a
l_kernel_00029ca8: jnz near 0x29f46
pf_at 0x9590
l_kernel_00029cae: lea edx,[ebp-0x33c]
pf_at 0x9596
l_kernel_00029cb4: mov ecx,[ebp-0x1c]
pf_at 0x9599
l_kernel_00029cb7: call 0x278d3
pf_at 0x959e
l_kernel_00029cbc: jmp near 0x2a7c3
pf_at 0x95a3
l_kernel_00029cc1: mov ecx,[ebp-0x10]
pf_at 0x95a6
l_kernel_00029cc4: lea edx,[ecx+0x20]
pf_at 0x95a9
l_kernel_00029cc7: sub esp,byte +0xc
pf_at 0x95ac
l_kernel_00029cca: push dword [ebp-0x1c]
pf_at 0x95af
l_kernel_00029ccd: call 0x2af9d
pf_at 0x95b4
l_kernel_00029cd2: add esp,byte +0x10
pf_at 0x95b7
l_kernel_00029cd5: mov cl,0x1
pf_at 0x95b9
l_kernel_00029cd7: test al,al
pf_at 0x95bb
l_kernel_00029cd9: jnz near 0x292e8
pf_at 0x95c1
l_kernel_00029cdf: cmp dword [ebp-0x18],byte +0x3
pf_at 0x95c5
l_kernel_00029ce3: jnz near 0x29e22
pf_at 0x95cb
l_kernel_00029ce9: mov edx,[ebp-0x10]
pf_at 0x95ce
l_kernel_00029cec: add edx,byte +0x40
pf_at 0x95d1
l_kernel_00029cef: mov ecx,[ebp-0x1c]
pf_at 0x95d4
l_kernel_00029cf2: add esp,0x33c
pf_at 0x95da
l_kernel_00029cf8: pop esi
pf_at 0x95db
l_kernel_00029cf9: pop edi
pf_at 0x95dc
l_kernel_00029cfa: pop ebx
pf_at 0x95dd
l_kernel_00029cfb: pop ebp
pf_at 0x95de
l_kernel_00029cfc: jmp near 0x25048
pf_at 0x95e3
l_kernel_00029d01: mov ecx,[ebp-0x14]
pf_at 0x95e6
l_kernel_00029d04: mov edx,0x2d2b5
pf_at 0x95eb
l_kernel_00029d09: call 0x26458
pf_at 0x95f0
l_kernel_00029d0e: test al,al
pf_at 0x95f2
l_kernel_00029d10: jz short 0x29d7d
pf_at 0x95f4
l_kernel_00029d12: cmp dword [ebp-0x18],byte +0x1
pf_at 0x95f8
l_kernel_00029d16: jnz near 0x29e08
pf_at 0x95fe
l_kernel_00029d1c: mov eax,[ebp-0x10]
pf_at 0x9601
l_kernel_00029d1f: cmp dword [eax],byte +0x7
pf_at 0x9604
l_kernel_00029d22: jnz near 0x29e08
pf_at 0x960a
l_kernel_00029d28: mov eax,[ebp-0x10]
pf_at 0x960d
l_kernel_00029d2b: mov eax,[eax+0x18]
pf_at 0x9610
l_kernel_00029d2e: test eax,eax
pf_at 0x9612
l_kernel_00029d30: jz near 0x29e08
pf_at 0x9618
l_kernel_00029d36: mov ecx,[eax+0x4]
pf_at 0x961b
l_kernel_00029d39: test ecx,ecx
pf_at 0x961d
l_kernel_00029d3b: jz near 0x29e08
pf_at 0x9623
l_kernel_00029d41: mov eax,[eax+0xc]
pf_at 0x9626
l_kernel_00029d44: shl ecx,byte 0x5
pf_at 0x9629
l_kernel_00029d47: lea edx,[eax+ecx]
pf_at 0x962c
l_kernel_00029d4a: add edx,byte -0x20
pf_at 0x962f
l_kernel_00029d4d: mov ecx,[ebp-0x1c]
pf_at 0x9632
l_kernel_00029d50: call 0x278d3
pf_at 0x9637
l_kernel_00029d55: mov eax,[ebp-0x10]
pf_at 0x963a
l_kernel_00029d58: mov eax,[eax+0x18]
pf_at 0x963d
l_kernel_00029d5b: dec dword [eax+0x4]
pf_at 0x9640
l_kernel_00029d5e: jmp near 0x2a7c3
pf_at 0x9645
l_kernel_00029d63: sub esp,byte +0x4
pf_at 0x9648
l_kernel_00029d66: push dword 0x2d1be
pf_at 0x964d
l_kernel_00029d6b: jmp near 0x29c05
pf_at 0x9652
l_kernel_00029d70: sub esp,byte +0x4
pf_at 0x9655
l_kernel_00029d73: push dword 0x2d266
pf_at 0x965a
l_kernel_00029d78: jmp near 0x29c05
pf_at 0x965f
l_kernel_00029d7d: mov ecx,[ebp-0x14]
pf_at 0x9662
l_kernel_00029d80: mov edx,0x2d2d7
pf_at 0x9667
l_kernel_00029d85: call 0x26458
pf_at 0x966c
l_kernel_00029d8a: test al,al
pf_at 0x966e
l_kernel_00029d8c: jz near 0x29e2f
pf_at 0x9674
l_kernel_00029d92: cmp dword [ebp-0x18],byte +0x1
pf_at 0x9678
l_kernel_00029d96: jnz near 0x29ec3
pf_at 0x967e
l_kernel_00029d9c: mov eax,[ebp-0x10]
pf_at 0x9681
l_kernel_00029d9f: mov eax,[eax]
pf_at 0x9683
l_kernel_00029da1: cmp eax,byte +0x8
pf_at 0x9686
l_kernel_00029da4: jz near 0x2a003
pf_at 0x968c
l_kernel_00029daa: cmp eax,byte +0x7
pf_at 0x968f
l_kernel_00029dad: jnz near 0x2a03e
pf_at 0x9695
l_kernel_00029db3: mov eax,[ebp-0x10]
pf_at 0x9698
l_kernel_00029db6: mov edi,[eax+0x18]
pf_at 0x969b
l_kernel_00029db9: test edi,edi
pf_at 0x969d
l_kernel_00029dbb: jz near 0x2a03e
pf_at 0x96a3
l_kernel_00029dc1: xor esi,esi
pf_at 0x96a5
l_kernel_00029dc3: xor ebx,ebx
pf_at 0x96a7
l_kernel_00029dc5: cmp ebx,[edi+0x4]
pf_at 0x96aa
l_kernel_00029dc8: jnc near 0x2a04b
pf_at 0x96b0
l_kernel_00029dce: mov ecx,[edi+0xc]
pf_at 0x96b3
l_kernel_00029dd1: add ecx,esi
pf_at 0x96b5
l_kernel_00029dd3: call 0x24daf
pf_at 0x96ba
l_kernel_00029dd8: mov eax,[edi+0xc]
pf_at 0x96bd
l_kernel_00029ddb: and dword [eax+esi],byte +0x0
pf_at 0x96c1
l_kernel_00029ddf: and dword [eax+esi+0x4],byte +0x0
pf_at 0x96c6
l_kernel_00029de4: and dword [eax+esi+0x8],byte +0x0
pf_at 0x96cb
l_kernel_00029de9: and dword [eax+esi+0xc],byte +0x0
pf_at 0x96d0
l_kernel_00029dee: and dword [eax+esi+0x10],byte +0x0
pf_at 0x96d5
l_kernel_00029df3: and dword [eax+esi+0x14],byte +0x0
pf_at 0x96da
l_kernel_00029df8: and dword [eax+esi+0x18],byte +0x0
pf_at 0x96df
l_kernel_00029dfd: and dword [eax+esi+0x1c],byte +0x0
pf_at 0x96e4
l_kernel_00029e02: inc ebx
pf_at 0x96e5
l_kernel_00029e03: add esi,byte +0x20
pf_at 0x96e8
l_kernel_00029e06: jmp short 0x29dc5
pf_at 0x96ea
l_kernel_00029e08: sub esp,byte +0x4
pf_at 0x96ed
l_kernel_00029e0b: push dword 0x2d2b9
pf_at 0x96f2
l_kernel_00029e10: jmp near 0x29c05
pf_at 0x96f7
l_kernel_00029e15: sub esp,byte +0x4
pf_at 0x96fa
l_kernel_00029e18: push dword 0x2d288
pf_at 0x96ff
l_kernel_00029e1d: jmp near 0x29c05
pf_at 0x9704
l_kernel_00029e22: sub esp,byte +0x4
pf_at 0x9707
l_kernel_00029e25: push dword 0x2d250
pf_at 0x970c
l_kernel_00029e2a: jmp near 0x29c05
pf_at 0x9711
l_kernel_00029e2f: mov ecx,[ebp-0x14]
pf_at 0x9714
l_kernel_00029e32: mov edx,0x2d316
pf_at 0x9719
l_kernel_00029e37: call 0x26458
pf_at 0x971e
l_kernel_00029e3c: test al,al
pf_at 0x9720
l_kernel_00029e3e: jz near 0x29ed0
pf_at 0x9726
l_kernel_00029e44: cmp dword [ebp-0x18],byte +0x2
pf_at 0x972a
l_kernel_00029e48: jnz near 0x29f60
pf_at 0x9730
l_kernel_00029e4e: mov eax,[ebp-0x10]
pf_at 0x9733
l_kernel_00029e51: mov eax,[eax]
pf_at 0x9735
l_kernel_00029e53: cmp eax,byte +0x8
pf_at 0x9738
l_kernel_00029e56: jz near 0x2a0af
pf_at 0x973e
l_kernel_00029e5c: cmp eax,byte +0x7
pf_at 0x9741
l_kernel_00029e5f: jnz near 0x2a195
pf_at 0x9747
l_kernel_00029e65: mov eax,[ebp-0x10]
pf_at 0x974a
l_kernel_00029e68: mov eax,[eax+0x18]
pf_at 0x974d
l_kernel_00029e6b: test eax,eax
pf_at 0x974f
l_kernel_00029e6d: jz near 0x2a195
pf_at 0x9755
l_kernel_00029e73: mov ecx,[ebp-0x10]
pf_at 0x9758
l_kernel_00029e76: cmp dword [ecx+0x20],byte +0x1
pf_at 0x975c
l_kernel_00029e7a: jnz short 0x29e8f
pf_at 0x975e
l_kernel_00029e7c: mov ecx,[ebp-0x10]
pf_at 0x9761
l_kernel_00029e7f: mov esi,[ecx+0x24]
pf_at 0x9764
l_kernel_00029e82: test esi,esi
pf_at 0x9766
l_kernel_00029e84: jng short 0x29e8f
pf_at 0x9768
l_kernel_00029e86: cmp esi,[eax+0x4]
pf_at 0x976b
l_kernel_00029e89: jna near 0x2a44f
pf_at 0x9771
l_kernel_00029e8f: lea esi,[ebp-0x33c]
pf_at 0x9777
l_kernel_00029e95: mov ecx,esi
pf_at 0x9779
l_kernel_00029e97: xor edx,edx
pf_at 0x977b
l_kernel_00029e99: jmp near 0x2965d
pf_at 0x9780
l_kernel_00029e9e: sub esp,byte +0x4
pf_at 0x9783
l_kernel_00029ea1: push dword 0x2d202
pf_at 0x9788
l_kernel_00029ea6: jmp near 0x29c05
pf_at 0x978d
l_kernel_00029eab: lea ecx,[ebp-0x33c]
pf_at 0x9793
l_kernel_00029eb1: call 0x24daf
pf_at 0x9798
l_kernel_00029eb6: sub esp,byte +0x4
pf_at 0x979b
l_kernel_00029eb9: push dword 0x2d2aa
pf_at 0x97a0
l_kernel_00029ebe: jmp near 0x29c05
pf_at 0x97a5
l_kernel_00029ec3: sub esp,byte +0x4
pf_at 0x97a8
l_kernel_00029ec6: push dword 0x2d2dd
pf_at 0x97ad
l_kernel_00029ecb: jmp near 0x29c05
pf_at 0x97b2
l_kernel_00029ed0: mov ecx,[ebp-0x14]
pf_at 0x97b5
l_kernel_00029ed3: mov edx,0x2d383
pf_at 0x97ba
l_kernel_00029ed8: call 0x26458
pf_at 0x97bf
l_kernel_00029edd: test al,al
pf_at 0x97c1
l_kernel_00029edf: jz near 0x29f6d
pf_at 0x97c7
l_kernel_00029ee5: cmp dword [ebp-0x18],byte +0x2
pf_at 0x97cb
l_kernel_00029ee9: jnz near 0x2a054
pf_at 0x97d1
l_kernel_00029eef: mov eax,[ebp-0x10]
pf_at 0x97d4
l_kernel_00029ef2: mov eax,[eax]
pf_at 0x97d6
l_kernel_00029ef4: cmp eax,byte +0x8
pf_at 0x97d9
l_kernel_00029ef7: jz near 0x2a249
pf_at 0x97df
l_kernel_00029efd: cmp eax,byte +0x7
pf_at 0x97e2
l_kernel_00029f00: jnz near 0x2a2b6
pf_at 0x97e8
l_kernel_00029f06: mov eax,[ebp-0x10]
pf_at 0x97eb
l_kernel_00029f09: cmp dword [eax+0x18],byte +0x0
pf_at 0x97ef
l_kernel_00029f0d: jz near 0x2a2b6
pf_at 0x97f5
l_kernel_00029f13: mov eax,[ebp-0x10]
pf_at 0x97f8
l_kernel_00029f16: lea esi,[eax+0x20]
pf_at 0x97fb
l_kernel_00029f19: xor ecx,ecx
pf_at 0x97fd
l_kernel_00029f1b: xor edi,edi
pf_at 0x97ff
l_kernel_00029f1d: dec edi
pf_at 0x9800
l_kernel_00029f1e: mov eax,[ebp-0x10]
pf_at 0x9803
l_kernel_00029f21: mov eax,[eax+0x18]
pf_at 0x9806
l_kernel_00029f24: inc edi
pf_at 0x9807
l_kernel_00029f25: cmp edi,[eax+0x4]
pf_at 0x980a
l_kernel_00029f28: jnc near 0x29e8f
pf_at 0x9810
l_kernel_00029f2e: lea ebx,[ecx+0x20]
pf_at 0x9813
l_kernel_00029f31: add ecx,[eax+0xc]
pf_at 0x9816
l_kernel_00029f34: mov edx,esi
pf_at 0x9818
l_kernel_00029f36: call 0x2bab4
pf_at 0x981d
l_kernel_00029f3b: mov ecx,ebx
pf_at 0x981f
l_kernel_00029f3d: test al,al
pf_at 0x9821
l_kernel_00029f3f: jz short 0x29f1e
pf_at 0x9823
l_kernel_00029f41: jmp near 0x29652
pf_at 0x9828
l_kernel_00029f46: lea ecx,[ebp-0x33c]
pf_at 0x982e
l_kernel_00029f4c: call 0x24daf
pf_at 0x9833
l_kernel_00029f51: mov ecx,[ebp-0x1c]
pf_at 0x9836
l_kernel_00029f54: mov edx,esi
pf_at 0x9838
l_kernel_00029f56: call 0x25048
pf_at 0x983d
l_kernel_00029f5b: jmp near 0x29176
pf_at 0x9842
l_kernel_00029f60: sub esp,byte +0x4
pf_at 0x9845
l_kernel_00029f63: push dword 0x2d31c
pf_at 0x984a
l_kernel_00029f68: jmp near 0x29c05
pf_at 0x984f
l_kernel_00029f6d: mov ecx,[ebp-0x14]
pf_at 0x9852
l_kernel_00029f70: mov edx,0x2d3fe
pf_at 0x9857
l_kernel_00029f75: call 0x26458
pf_at 0x985c
l_kernel_00029f7a: test al,al
pf_at 0x985e
l_kernel_00029f7c: jz near 0x2a061
pf_at 0x9864
l_kernel_00029f82: cmp dword [ebp-0x18],byte +0x1
pf_at 0x9868
l_kernel_00029f86: jnz near 0x2a0a2
pf_at 0x986e
l_kernel_00029f8c: mov eax,[ebp-0x10]
pf_at 0x9871
l_kernel_00029f8f: cmp dword [eax],byte +0x8
pf_at 0x9874
l_kernel_00029f92: jnz near 0x2a0a2
pf_at 0x987a
l_kernel_00029f98: mov eax,[ebp-0x10]
pf_at 0x987d
l_kernel_00029f9b: cmp dword [eax+0x1c],byte +0x0
pf_at 0x9881
l_kernel_00029f9f: jz near 0x2a0a2
pf_at 0x9887
l_kernel_00029fa5: mov ecx,[ebp-0x1c]
pf_at 0x988a
l_kernel_00029fa8: call 0x28534
pf_at 0x988f
l_kernel_00029fad: test al,al
pf_at 0x9891
l_kernel_00029faf: jz near 0x2a639
pf_at 0x9897
l_kernel_00029fb5: mov eax,[ebp-0x10]
pf_at 0x989a
l_kernel_00029fb8: mov eax,[eax+0x1c]
pf_at 0x989d
l_kernel_00029fbb: mov eax,[eax+0x4]
pf_at 0x98a0
l_kernel_00029fbe: test eax,eax
pf_at 0x98a2
l_kernel_00029fc0: jz near 0x2a7c3
pf_at 0x98a8
l_kernel_00029fc6: shl eax,byte 0x2
pf_at 0x98ab
l_kernel_00029fc9: sub esp,byte +0xc
pf_at 0x98ae
l_kernel_00029fcc: push eax
pf_at 0x98af
l_kernel_00029fcd: call 0x20ae5
pf_at 0x98b4
l_kernel_00029fd2: add esp,byte +0x10
pf_at 0x98b7
l_kernel_00029fd5: test eax,eax
pf_at 0x98b9
l_kernel_00029fd7: jz near 0x2a631
pf_at 0x98bf
l_kernel_00029fdd: mov esi,eax
pf_at 0x98c1
l_kernel_00029fdf: xor ecx,ecx
pf_at 0x98c3
l_kernel_00029fe1: xor edx,edx
pf_at 0x98c5
l_kernel_00029fe3: mov eax,[ebp-0x10]
pf_at 0x98c8
l_kernel_00029fe6: mov edi,[eax+0x1c]
pf_at 0x98cb
l_kernel_00029fe9: mov eax,[edi+0x4]
pf_at 0x98ce
l_kernel_00029fec: cmp edx,eax
pf_at 0x98d0
l_kernel_00029fee: jnc near 0x2a535
pf_at 0x98d6
l_kernel_00029ff4: mov eax,[edi+0xc]
pf_at 0x98d9
l_kernel_00029ff7: mov eax,[eax+ecx]
pf_at 0x98dc
l_kernel_00029ffa: mov [esi+edx*4],eax
pf_at 0x98df
l_kernel_00029ffd: inc edx
pf_at 0x98e0
l_kernel_00029ffe: add ecx,byte +0x24
pf_at 0x98e3
l_kernel_0002a001: jmp short 0x29fe3
pf_at 0x98e5
l_kernel_0002a003: mov eax,[ebp-0x10]
pf_at 0x98e8
l_kernel_0002a006: mov edi,[eax+0x1c]
pf_at 0x98eb
l_kernel_0002a009: test edi,edi
pf_at 0x98ed
l_kernel_0002a00b: jz short 0x2a03e
pf_at 0x98ef
l_kernel_0002a00d: xor esi,esi
pf_at 0x98f1
l_kernel_0002a00f: push byte +0x4
pf_at 0x98f3
l_kernel_0002a011: pop ebx
pf_at 0x98f4
l_kernel_0002a012: cmp esi,[edi+0x4]
pf_at 0x98f7
l_kernel_0002a015: jnc short 0x2a04b
pf_at 0x98f9
l_kernel_0002a017: mov eax,[edi+0xc]
pf_at 0x98fc
l_kernel_0002a01a: sub esp,byte +0xc
pf_at 0x98ff
l_kernel_0002a01d: push dword [eax+ebx-0x4]
pf_at 0x9903
l_kernel_0002a021: call 0x20aee
pf_at 0x9908
l_kernel_0002a026: add esp,byte +0x10
pf_at 0x990b
l_kernel_0002a029: mov ecx,[edi+0xc]
pf_at 0x990e
l_kernel_0002a02c: and dword [ecx+ebx-0x4],byte +0x0
pf_at 0x9913
l_kernel_0002a031: add ecx,ebx
pf_at 0x9915
l_kernel_0002a033: call 0x24daf
pf_at 0x991a
l_kernel_0002a038: inc esi
pf_at 0x991b
l_kernel_0002a039: add ebx,byte +0x24
pf_at 0x991e
l_kernel_0002a03c: jmp short 0x2a012
pf_at 0x9920
l_kernel_0002a03e: sub esp,byte +0x4
pf_at 0x9923
l_kernel_0002a041: push dword 0x2d2f6
pf_at 0x9928
l_kernel_0002a046: jmp near 0x29c05
pf_at 0x992d
l_kernel_0002a04b: and dword [edi+0x4],byte +0x0
pf_at 0x9931
l_kernel_0002a04f: jmp near 0x2a7ac
pf_at 0x9936
l_kernel_0002a054: sub esp,byte +0x4
pf_at 0x9939
l_kernel_0002a057: push dword 0x2d38c
pf_at 0x993e
l_kernel_0002a05c: jmp near 0x29c05
pf_at 0x9943
l_kernel_0002a061: mov ecx,[ebp-0x14]
pf_at 0x9946
l_kernel_0002a064: mov edx,0x2d43a
pf_at 0x994b
l_kernel_0002a069: call 0x26458
pf_at 0x9950
l_kernel_0002a06e: test al,al
pf_at 0x9952
l_kernel_0002a070: jz near 0x2a1a2
pf_at 0x9958
l_kernel_0002a076: cmp dword [ebp-0x18],byte +0x1
pf_at 0x995c
l_kernel_0002a07a: jnz near 0x2a2c3
pf_at 0x9962
l_kernel_0002a080: mov eax,[ebp-0x10]
pf_at 0x9965
l_kernel_0002a083: mov eax,[eax]
pf_at 0x9967
l_kernel_0002a085: cmp eax,byte +0x8
pf_at 0x996a
l_kernel_0002a088: jz near 0x2a3eb
pf_at 0x9970
l_kernel_0002a08e: cmp eax,byte +0x7
pf_at 0x9973
l_kernel_0002a091: jnz near 0x2a442
pf_at 0x9979
l_kernel_0002a097: mov ecx,[ebp-0x1c]
pf_at 0x997c
l_kernel_0002a09a: mov edx,[ebp-0x10]
pf_at 0x997f
l_kernel_0002a09d: jmp near 0x29cf2
pf_at 0x9984
l_kernel_0002a0a2: sub esp,byte +0x4
pf_at 0x9987
l_kernel_0002a0a5: push dword 0x2d403
pf_at 0x998c
l_kernel_0002a0aa: jmp near 0x29c05
pf_at 0x9991
l_kernel_0002a0af: mov eax,[ebp-0x10]
pf_at 0x9994
l_kernel_0002a0b2: cmp dword [eax+0x1c],byte +0x0
pf_at 0x9998
l_kernel_0002a0b6: jz near 0x2a195
pf_at 0x999e
l_kernel_0002a0bc: lea edx,[ebp-0x13c]
pf_at 0x99a4
l_kernel_0002a0c2: and dword [edx],byte +0x0
pf_at 0x99a7
l_kernel_0002a0c5: mov eax,[ebp-0x10]
pf_at 0x99aa
l_kernel_0002a0c8: lea ecx,[eax+0x20]
pf_at 0x99ad
l_kernel_0002a0cb: call 0x288cc
pf_at 0x99b2
l_kernel_0002a0d0: mov [ebp-0x18],eax
pf_at 0x99b5
l_kernel_0002a0d3: test al,al
pf_at 0x99b7
l_kernel_0002a0d5: jz near 0x2a37e
pf_at 0x99bd
l_kernel_0002a0db: mov eax,[ebp-0x10]
pf_at 0x99c0
l_kernel_0002a0de: mov esi,[eax+0x1c]
pf_at 0x99c3
l_kernel_0002a0e1: mov edx,[ebp-0x13c]
pf_at 0x99c9
l_kernel_0002a0e7: test esi,esi
pf_at 0x99cb
l_kernel_0002a0e9: setz al
pf_at 0x99ce
l_kernel_0002a0ec: test edx,edx
pf_at 0x99d0
l_kernel_0002a0ee: setz cl
pf_at 0x99d3
l_kernel_0002a0f1: or cl,al
pf_at 0x99d5
l_kernel_0002a0f3: jnz near 0x2a388
pf_at 0x99db
l_kernel_0002a0f9: mov ecx,esi
pf_at 0x99dd
l_kernel_0002a0fb: call 0x2b750
pf_at 0x99e2
l_kernel_0002a100: test eax,eax
pf_at 0x99e4
l_kernel_0002a102: js near 0x2a388
pf_at 0x99ea
l_kernel_0002a108: mov ebx,eax
pf_at 0x99ec
l_kernel_0002a10a: mov eax,[esi+0xc]
pf_at 0x99ef
l_kernel_0002a10d: imul edi,ebx,byte +0x24
pf_at 0x99f2
l_kernel_0002a110: sub esp,byte +0xc
pf_at 0x99f5
l_kernel_0002a113: push dword [eax+edi]
pf_at 0x99f8
l_kernel_0002a116: call 0x20aee
pf_at 0x99fd
l_kernel_0002a11b: add esp,byte +0x10
pf_at 0x9a00
l_kernel_0002a11e: mov eax,[esi+0xc]
pf_at 0x9a03
l_kernel_0002a121: lea ecx,[eax+edi]
pf_at 0x9a06
l_kernel_0002a124: add ecx,byte +0x4
pf_at 0x9a09
l_kernel_0002a127: call 0x24daf
pf_at 0x9a0e
l_kernel_0002a12c: lea ecx,[ebx+0x1]
pf_at 0x9a11
l_kernel_0002a12f: mov eax,[esi+0x4]
pf_at 0x9a14
l_kernel_0002a132: cmp ecx,eax
pf_at 0x9a16
l_kernel_0002a134: jnc short 0x2a158
pf_at 0x9a18
l_kernel_0002a136: mov edx,[esi+0xc]
pf_at 0x9a1b
l_kernel_0002a139: add edi,edx
pf_at 0x9a1d
l_kernel_0002a13b: imul ecx,ecx,byte +0x24
pf_at 0x9a20
l_kernel_0002a13e: add ecx,edx
pf_at 0x9a22
l_kernel_0002a140: not ebx
pf_at 0x9a24
l_kernel_0002a142: add eax,ebx
pf_at 0x9a26
l_kernel_0002a144: imul eax,eax,byte +0x24
pf_at 0x9a29
l_kernel_0002a147: sub esp,byte +0x4
pf_at 0x9a2c
l_kernel_0002a14a: push eax
pf_at 0x9a2d
l_kernel_0002a14b: push ecx
pf_at 0x9a2e
l_kernel_0002a14c: push edi
pf_at 0x9a2f
l_kernel_0002a14d: call 0x20c3e
pf_at 0x9a34
l_kernel_0002a152: add esp,byte +0x10
pf_at 0x9a37
l_kernel_0002a155: mov eax,[esi+0x4]
pf_at 0x9a3a
l_kernel_0002a158: dec eax
pf_at 0x9a3b
l_kernel_0002a159: mov [esi+0x4],eax
pf_at 0x9a3e
l_kernel_0002a15c: mov ecx,[esi+0xc]
pf_at 0x9a41
l_kernel_0002a15f: imul eax,eax,byte +0x24
pf_at 0x9a44
l_kernel_0002a162: and dword [ecx+eax],byte +0x0
pf_at 0x9a48
l_kernel_0002a166: and dword [ecx+eax+0x4],byte +0x0
pf_at 0x9a4d
l_kernel_0002a16b: and dword [ecx+eax+0x8],byte +0x0
pf_at 0x9a52
l_kernel_0002a170: and dword [ecx+eax+0xc],byte +0x0
pf_at 0x9a57
l_kernel_0002a175: and dword [ecx+eax+0x10],byte +0x0
pf_at 0x9a5c
l_kernel_0002a17a: and dword [ecx+eax+0x14],byte +0x0
pf_at 0x9a61
l_kernel_0002a17f: and dword [ecx+eax+0x18],byte +0x0
pf_at 0x9a66
l_kernel_0002a184: and dword [ecx+eax+0x1c],byte +0x0
pf_at 0x9a6b
l_kernel_0002a189: and dword [ecx+eax+0x20],byte +0x0
pf_at 0x9a70
l_kernel_0002a18e: mov bl,0x1
pf_at 0x9a72
l_kernel_0002a190: jmp near 0x2a38a
pf_at 0x9a77
l_kernel_0002a195: sub esp,byte +0x4
pf_at 0x9a7a
l_kernel_0002a198: push dword 0x2d363
pf_at 0x9a7f
l_kernel_0002a19d: jmp near 0x29c05
pf_at 0x9a84
l_kernel_0002a1a2: mov ecx,[ebp-0x14]
pf_at 0x9a87
l_kernel_0002a1a5: mov edx,0x2d4a0
pf_at 0x9a8c
l_kernel_0002a1aa: call 0x26458
pf_at 0x9a91
l_kernel_0002a1af: test al,al
pf_at 0x9a93
l_kernel_0002a1b1: jz near 0x2a2d0
pf_at 0x9a99
l_kernel_0002a1b7: cmp dword [ebp-0x18],byte +0x3
pf_at 0x9a9d
l_kernel_0002a1bb: jnz near 0x2a3b5
pf_at 0x9aa3
l_kernel_0002a1c1: mov eax,[ebp-0x10]
pf_at 0x9aa6
l_kernel_0002a1c4: cmp dword [eax],byte +0x3
pf_at 0x9aa9
l_kernel_0002a1c7: jnz near 0x2a3de
pf_at 0x9aaf
l_kernel_0002a1cd: mov eax,[ebp-0x10]
pf_at 0x9ab2
l_kernel_0002a1d0: cmp dword [eax+0x20],byte +0x3
pf_at 0x9ab6
l_kernel_0002a1d4: jnz near 0x2a3de
pf_at 0x9abc
l_kernel_0002a1da: mov eax,[ebp-0x10]
pf_at 0x9abf
l_kernel_0002a1dd: mov eax,[eax+0x40]
pf_at 0x9ac2
l_kernel_0002a1e0: cmp eax,byte +0x3
pf_at 0x9ac5
l_kernel_0002a1e3: jz short 0x2a1ee
pf_at 0x9ac7
l_kernel_0002a1e5: cmp eax,byte +0x8
pf_at 0x9aca
l_kernel_0002a1e8: jnz near 0x2a7d8
pf_at 0x9ad0
l_kernel_0002a1ee: mov eax,[ebp-0x10]
pf_at 0x9ad3
l_kernel_0002a1f1: mov ecx,[eax+0xc]
pf_at 0x9ad6
l_kernel_0002a1f4: mov edx,[eax+0x2c]
pf_at 0x9ad9
l_kernel_0002a1f7: test ecx,ecx
pf_at 0x9adb
l_kernel_0002a1f9: mov eax,0x2ca9c
pf_at 0x9ae0
l_kernel_0002a1fe: cmovz ecx,eax
pf_at 0x9ae3
l_kernel_0002a201: mov [ebp-0x38],ecx
pf_at 0x9ae6
l_kernel_0002a204: test edx,edx
pf_at 0x9ae8
l_kernel_0002a206: cmovz edx,eax
pf_at 0x9aeb
l_kernel_0002a209: mov [ebp-0x18],edx
pf_at 0x9aee
l_kernel_0002a20c: cmp byte [edx],0x2f
pf_at 0x9af1
l_kernel_0002a20f: jnz short 0x2a227
pf_at 0x9af3
l_kernel_0002a211: mov eax,[ebp-0x18]
pf_at 0x9af6
l_kernel_0002a214: inc eax
pf_at 0x9af7
l_kernel_0002a215: sub esp,byte +0x8
pf_at 0x9afa
l_kernel_0002a218: push byte +0x2f
pf_at 0x9afc
l_kernel_0002a21a: push eax
pf_at 0x9afd
l_kernel_0002a21b: call 0x20d35
pf_at 0x9b02
l_kernel_0002a220: add esp,byte +0x10
pf_at 0x9b05
l_kernel_0002a223: test eax,eax
pf_at 0x9b07
l_kernel_0002a225: jnz short 0x2a23c
pf_at 0x9b09
l_kernel_0002a227: mov ecx,[ebp-0x18]
pf_at 0x9b0c
l_kernel_0002a22a: mov edx,0x2d851
pf_at 0x9b11
l_kernel_0002a22f: call 0x2b908
pf_at 0x9b16
l_kernel_0002a234: test al,al
pf_at 0x9b18
l_kernel_0002a236: jz near 0x2a82a
pf_at 0x9b1e
l_kernel_0002a23c: sub esp,byte +0x4
pf_at 0x9b21
l_kernel_0002a23f: push dword 0x2d855
pf_at 0x9b26
l_kernel_0002a244: jmp near 0x29c05
pf_at 0x9b2b
l_kernel_0002a249: mov eax,[ebp-0x10]
pf_at 0x9b2e
l_kernel_0002a24c: cmp dword [eax+0x1c],byte +0x0
pf_at 0x9b32
l_kernel_0002a250: jz short 0x2a2b6
pf_at 0x9b34
l_kernel_0002a252: lea edx,[ebp-0x13c]
pf_at 0x9b3a
l_kernel_0002a258: and dword [edx],byte +0x0
pf_at 0x9b3d
l_kernel_0002a25b: mov eax,[ebp-0x10]
pf_at 0x9b40
l_kernel_0002a25e: lea ecx,[eax+0x20]
pf_at 0x9b43
l_kernel_0002a261: call 0x288cc
pf_at 0x9b48
l_kernel_0002a266: mov [ebp-0x18],eax
pf_at 0x9b4b
l_kernel_0002a269: test al,al
pf_at 0x9b4d
l_kernel_0002a26b: jz near 0x2a3c2
pf_at 0x9b53
l_kernel_0002a271: mov eax,[ebp-0x10]
pf_at 0x9b56
l_kernel_0002a274: mov ecx,[eax+0x1c]
pf_at 0x9b59
l_kernel_0002a277: mov edx,[ebp-0x13c]
pf_at 0x9b5f
l_kernel_0002a27d: call 0x2b750
pf_at 0x9b64
l_kernel_0002a282: mov esi,eax
pf_at 0x9b66
l_kernel_0002a284: sub esp,byte +0xc
pf_at 0x9b69
l_kernel_0002a287: push dword [ebp-0x13c]
pf_at 0x9b6f
l_kernel_0002a28d: call 0x20aee
pf_at 0x9b74
l_kernel_0002a292: add esp,byte +0x10
pf_at 0x9b77
l_kernel_0002a295: not esi
pf_at 0x9b79
l_kernel_0002a297: shr esi,byte 0x1f
pf_at 0x9b7c
l_kernel_0002a29a: lea ebx,[ebp-0x33c]
pf_at 0x9b82
l_kernel_0002a2a0: mov ecx,ebx
pf_at 0x9b84
l_kernel_0002a2a2: mov edx,esi
pf_at 0x9b86
l_kernel_0002a2a4: call 0x27014
pf_at 0x9b8b
l_kernel_0002a2a9: push byte +0x8
pf_at 0x9b8d
l_kernel_0002a2ab: pop ecx
pf_at 0x9b8e
l_kernel_0002a2ac: mov edi,[ebp-0x1c]
pf_at 0x9b91
l_kernel_0002a2af: mov esi,ebx
pf_at 0x9b93
l_kernel_0002a2b1: jmp near 0x2a3b1
pf_at 0x9b98
l_kernel_0002a2b6: sub esp,byte +0x4
pf_at 0x9b9b
l_kernel_0002a2b9: push dword 0x2d3db
pf_at 0x9ba0
l_kernel_0002a2be: jmp near 0x29c05
pf_at 0x9ba5
l_kernel_0002a2c3: sub esp,byte +0x4
pf_at 0x9ba8
l_kernel_0002a2c6: push dword 0x2d441
pf_at 0x9bad
l_kernel_0002a2cb: jmp near 0x29c05
pf_at 0x9bb2
l_kernel_0002a2d0: mov ecx,[ebp-0x14]
pf_at 0x9bb5
l_kernel_0002a2d3: mov edx,0x2d4a5
pf_at 0x9bba
l_kernel_0002a2d8: call 0x26458
pf_at 0x9bbf
l_kernel_0002a2dd: test al,al
pf_at 0x9bc1
l_kernel_0002a2df: jnz short 0x2a2f6
pf_at 0x9bc3
l_kernel_0002a2e1: mov ecx,[ebp-0x14]
pf_at 0x9bc6
l_kernel_0002a2e4: mov edx,0x2d4ab
pf_at 0x9bcb
l_kernel_0002a2e9: call 0x26458
pf_at 0x9bd0
l_kernel_0002a2ee: test al,al
pf_at 0x9bd2
l_kernel_0002a2f0: jz near 0x2a4c8
pf_at 0x9bd8
l_kernel_0002a2f6: and dword [ebp-0x13c],byte +0x0
pf_at 0x9bdf
l_kernel_0002a2fd: sub esp,byte +0x8
pf_at 0x9be2
l_kernel_0002a300: mov ecx,ebx
pf_at 0x9be4
l_kernel_0002a302: mov edx,[ebp-0x14]
pf_at 0x9be7
l_kernel_0002a305: push byte +0x1
pf_at 0x9be9
l_kernel_0002a307: push dword [ebp-0x18]
pf_at 0x9bec
l_kernel_0002a30a: call 0x2b86a
pf_at 0x9bf1
l_kernel_0002a30f: add esp,byte +0x10
pf_at 0x9bf4
l_kernel_0002a312: test al,al
pf_at 0x9bf6
l_kernel_0002a314: jz near 0x292e6
pf_at 0x9bfc
l_kernel_0002a31a: lea eax,[ebp-0x13c]
pf_at 0x9c02
l_kernel_0002a320: mov ecx,ebx
pf_at 0x9c04
l_kernel_0002a322: mov edx,[ebp-0x14]
pf_at 0x9c07
l_kernel_0002a325: push eax
pf_at 0x9c08
l_kernel_0002a326: push byte +0x0
pf_at 0x9c0a
l_kernel_0002a328: push dword [ebp-0x18]
pf_at 0x9c0d
l_kernel_0002a32b: push dword [ebp-0x10]
pf_at 0x9c10
l_kernel_0002a32e: call 0x2b95a
pf_at 0x9c15
l_kernel_0002a333: add esp,byte +0x10
pf_at 0x9c18
l_kernel_0002a336: test al,al
pf_at 0x9c1a
l_kernel_0002a338: jz near 0x292e6
pf_at 0x9c20
l_kernel_0002a33e: mov eax,[ebp-0x13c]
pf_at 0x9c26
l_kernel_0002a344: test eax,eax
pf_at 0x9c28
l_kernel_0002a346: js near 0x2a646
pf_at 0x9c2e
l_kernel_0002a34c: xor ecx,ecx
pf_at 0x9c30
l_kernel_0002a34e: cmp ecx,eax
pf_at 0x9c32
l_kernel_0002a350: jz near 0x2a7ac
pf_at 0x9c38
l_kernel_0002a356: mov dword [ebp-0x33c],0x0
pf_at 0x9c42
l_kernel_0002a360: xor edx,edx
pf_at 0x9c44
l_kernel_0002a362: mov esi,[ebp-0x33c]
pf_at 0x9c4a
l_kernel_0002a368: cmp edx,0x1770
pf_at 0x9c50
l_kernel_0002a36e: jz short 0x2a37b
pf_at 0x9c52
l_kernel_0002a370: xor esi,edx
pf_at 0x9c54
l_kernel_0002a372: mov [ebp-0x33c],esi
pf_at 0x9c5a
l_kernel_0002a378: inc edx
pf_at 0x9c5b
l_kernel_0002a379: jmp short 0x2a362
pf_at 0x9c5d
l_kernel_0002a37b: inc ecx
pf_at 0x9c5e
l_kernel_0002a37c: jmp short 0x2a34e
pf_at 0x9c60
l_kernel_0002a37e: sub esp,byte +0x4
pf_at 0x9c63
l_kernel_0002a381: push dword 0x2d339
pf_at 0x9c68
l_kernel_0002a386: jmp short 0x2a3ca
pf_at 0x9c6a
l_kernel_0002a388: xor ebx,ebx
pf_at 0x9c6c
l_kernel_0002a38a: sub esp,byte +0xc
pf_at 0x9c6f
l_kernel_0002a38d: push dword [ebp-0x13c]
pf_at 0x9c75
l_kernel_0002a393: call 0x20aee
pf_at 0x9c7a
l_kernel_0002a398: add esp,byte +0x10
pf_at 0x9c7d
l_kernel_0002a39b: movzx edx,bl
pf_at 0x9c80
l_kernel_0002a39e: lea esi,[ebp-0x33c]
pf_at 0x9c86
l_kernel_0002a3a4: mov ecx,esi
pf_at 0x9c88
l_kernel_0002a3a6: call 0x27014
pf_at 0x9c8d
l_kernel_0002a3ab: push byte +0x8
pf_at 0x9c8f
l_kernel_0002a3ad: pop ecx
pf_at 0x9c90
l_kernel_0002a3ae: mov edi,[ebp-0x1c]
pf_at 0x9c93
l_kernel_0002a3b1: rep movsd
pf_at 0x9c95
l_kernel_0002a3b3: jmp short 0x2a3d6
pf_at 0x9c97
l_kernel_0002a3b5: sub esp,byte +0x4
pf_at 0x9c9a
l_kernel_0002a3b8: push dword 0x2d7e3
pf_at 0x9c9f
l_kernel_0002a3bd: jmp near 0x29c05
pf_at 0x9ca4
l_kernel_0002a3c2: sub esp,byte +0x4
pf_at 0x9ca7
l_kernel_0002a3c5: push dword 0x2d3ae
pf_at 0x9cac
l_kernel_0002a3ca: push dword [ebp-0x14]
pf_at 0x9caf
l_kernel_0002a3cd: push ebx
pf_at 0x9cb0
l_kernel_0002a3ce: call 0x2609c
pf_at 0x9cb5
l_kernel_0002a3d3: add esp,byte +0x10
pf_at 0x9cb8
l_kernel_0002a3d6: mov ecx,[ebp-0x18]
pf_at 0x9cbb
l_kernel_0002a3d9: jmp near 0x292e8
pf_at 0x9cc0
l_kernel_0002a3de: sub esp,byte +0x4
pf_at 0x9cc3
l_kernel_0002a3e1: push dword 0x2d7fc
pf_at 0x9cc8
l_kernel_0002a3e6: jmp near 0x29c05
pf_at 0x9ccd
l_kernel_0002a3eb: mov eax,[ebp-0x10]
pf_at 0x9cd0
l_kernel_0002a3ee: cmp dword [eax+0x1c],byte +0x0
pf_at 0x9cd4
l_kernel_0002a3f2: jz short 0x2a442
pf_at 0x9cd6
l_kernel_0002a3f4: mov ecx,[ebp-0x1c]
pf_at 0x9cd9
l_kernel_0002a3f7: call 0x28534
pf_at 0x9cde
l_kernel_0002a3fc: test al,al
pf_at 0x9ce0
l_kernel_0002a3fe: jz short 0x2a435
pf_at 0x9ce2
l_kernel_0002a400: push byte +0x4
pf_at 0x9ce4
l_kernel_0002a402: pop edx
pf_at 0x9ce5
l_kernel_0002a403: xor edi,edi
pf_at 0x9ce7
l_kernel_0002a405: dec edi
pf_at 0x9ce8
l_kernel_0002a406: mov eax,[ebp-0x10]
pf_at 0x9ceb
l_kernel_0002a409: mov eax,[eax+0x1c]
pf_at 0x9cee
l_kernel_0002a40c: inc edi
pf_at 0x9cef
l_kernel_0002a40d: cmp edi,[eax+0x4]
pf_at 0x9cf2
l_kernel_0002a410: jnc near 0x2a7c3
pf_at 0x9cf8
l_kernel_0002a416: lea esi,[edx+0x24]
pf_at 0x9cfb
l_kernel_0002a419: mov ecx,[ebp-0x1c]
pf_at 0x9cfe
l_kernel_0002a41c: mov ecx,[ecx+0x18]
pf_at 0x9d01
l_kernel_0002a41f: add edx,[eax+0xc]
pf_at 0x9d04
l_kernel_0002a422: call 0x28586
pf_at 0x9d09
l_kernel_0002a427: mov edx,esi
pf_at 0x9d0b
l_kernel_0002a429: test al,al
pf_at 0x9d0d
l_kernel_0002a42b: jnz short 0x2a406
pf_at 0x9d0f
l_kernel_0002a42d: mov ecx,[ebp-0x1c]
pf_at 0x9d12
l_kernel_0002a430: call 0x24daf
pf_at 0x9d17
l_kernel_0002a435: sub esp,byte +0x4
pf_at 0x9d1a
l_kernel_0002a438: push dword 0x2d47c
pf_at 0x9d1f
l_kernel_0002a43d: jmp near 0x29c05
pf_at 0x9d24
l_kernel_0002a442: sub esp,byte +0x4
pf_at 0x9d27
l_kernel_0002a445: push dword 0x2d45b
pf_at 0x9d2c
l_kernel_0002a44a: jmp near 0x29c05
pf_at 0x9d31
l_kernel_0002a44f: lea edi,[esi-0x1]
pf_at 0x9d34
l_kernel_0002a452: shl edi,byte 0x5
pf_at 0x9d37
l_kernel_0002a455: mov ecx,[eax+0xc]
pf_at 0x9d3a
l_kernel_0002a458: add ecx,edi
pf_at 0x9d3c
l_kernel_0002a45a: call 0x24daf
pf_at 0x9d41
l_kernel_0002a45f: mov eax,[ebp-0x10]
pf_at 0x9d44
l_kernel_0002a462: mov ecx,[eax+0x18]
pf_at 0x9d47
l_kernel_0002a465: mov eax,[ecx+0x4]
pf_at 0x9d4a
l_kernel_0002a468: mov edx,eax
pf_at 0x9d4c
l_kernel_0002a46a: sub edx,esi
pf_at 0x9d4e
l_kernel_0002a46c: jna short 0x2a492
pf_at 0x9d50
l_kernel_0002a46e: mov eax,[ecx+0xc]
pf_at 0x9d53
l_kernel_0002a471: add edi,eax
pf_at 0x9d55
l_kernel_0002a473: shl esi,byte 0x5
pf_at 0x9d58
l_kernel_0002a476: add esi,eax
pf_at 0x9d5a
l_kernel_0002a478: shl edx,byte 0x5
pf_at 0x9d5d
l_kernel_0002a47b: sub esp,byte +0x4
pf_at 0x9d60
l_kernel_0002a47e: push edx
pf_at 0x9d61
l_kernel_0002a47f: push esi
pf_at 0x9d62
l_kernel_0002a480: push edi
pf_at 0x9d63
l_kernel_0002a481: call 0x20c3e
pf_at 0x9d68
l_kernel_0002a486: add esp,byte +0x10
pf_at 0x9d6b
l_kernel_0002a489: mov eax,[ebp-0x10]
pf_at 0x9d6e
l_kernel_0002a48c: mov ecx,[eax+0x18]
pf_at 0x9d71
l_kernel_0002a48f: mov eax,[ecx+0x4]
pf_at 0x9d74
l_kernel_0002a492: dec eax
pf_at 0x9d75
l_kernel_0002a493: mov [ecx+0x4],eax
pf_at 0x9d78
l_kernel_0002a496: mov ecx,[ecx+0xc]
pf_at 0x9d7b
l_kernel_0002a499: shl eax,byte 0x5
pf_at 0x9d7e
l_kernel_0002a49c: and dword [ecx+eax],byte +0x0
pf_at 0x9d82
l_kernel_0002a4a0: and dword [ecx+eax+0x4],byte +0x0
pf_at 0x9d87
l_kernel_0002a4a5: and dword [ecx+eax+0x8],byte +0x0
pf_at 0x9d8c
l_kernel_0002a4aa: and dword [ecx+eax+0xc],byte +0x0
pf_at 0x9d91
l_kernel_0002a4af: and dword [ecx+eax+0x10],byte +0x0
pf_at 0x9d96
l_kernel_0002a4b4: and dword [ecx+eax+0x14],byte +0x0
pf_at 0x9d9b
l_kernel_0002a4b9: and dword [ecx+eax+0x18],byte +0x0
pf_at 0x9da0
l_kernel_0002a4be: and dword [ecx+eax+0x1c],byte +0x0
pf_at 0x9da5
l_kernel_0002a4c3: jmp near 0x29652
pf_at 0x9daa
l_kernel_0002a4c8: mov ecx,[ebp-0x14]
pf_at 0x9dad
l_kernel_0002a4cb: mov edx,0x2d4d7
pf_at 0x9db2
l_kernel_0002a4d0: call 0x26458
pf_at 0x9db7
l_kernel_0002a4d5: test al,al
pf_at 0x9db9
l_kernel_0002a4d7: jz short 0x2a4e6
pf_at 0x9dbb
l_kernel_0002a4d9: mov ecx,[ebp-0x1c]
pf_at 0x9dbe
l_kernel_0002a4dc: mov edx,0x2cbd6
pf_at 0x9dc3
l_kernel_0002a4e1: jmp near 0x28d25
pf_at 0x9dc8
l_kernel_0002a4e6: mov ecx,[ebp-0x14]
pf_at 0x9dcb
l_kernel_0002a4e9: mov edx,0x2d4dc
pf_at 0x9dd0
l_kernel_0002a4ee: call 0x26458
pf_at 0x9dd5
l_kernel_0002a4f3: test al,al
pf_at 0x9dd7
l_kernel_0002a4f5: jz near 0x2a653
pf_at 0x9ddd
l_kernel_0002a4fb: sub esp,byte +0x8
pf_at 0x9de0
l_kernel_0002a4fe: lea esi,[ebp-0x33c]
pf_at 0x9de6
l_kernel_0002a504: push dword 0x2cb9e
pf_at 0x9deb
l_kernel_0002a509: push dword 0x2cb9a
pf_at 0x9df0
l_kernel_0002a50e: push dword 0x2cb8d
pf_at 0x9df5
l_kernel_0002a513: push dword 0x2cb81
pf_at 0x9dfa
l_kernel_0002a518: push dword 0x80
pf_at 0x9dff
l_kernel_0002a51d: push esi
pf_at 0x9e00
l_kernel_0002a51e: call 0x216bc
pf_at 0x9e05
l_kernel_0002a523: add esp,byte +0x20
pf_at 0x9e08
l_kernel_0002a526: mov ecx,[ebp-0x1c]
pf_at 0x9e0b
l_kernel_0002a529: mov edx,esi
pf_at 0x9e0d
l_kernel_0002a52b: call 0x24c66
pf_at 0x9e12
l_kernel_0002a530: jmp near 0x29176
pf_at 0x9e17
l_kernel_0002a535: mov dword [ebp-0x18],0x0
pf_at 0x9e1e
l_kernel_0002a53c: cmp [ebp-0x18],eax
pf_at 0x9e21
l_kernel_0002a53f: jnc short 0x2a59a
pf_at 0x9e23
l_kernel_0002a541: mov ecx,[ebp-0x18]
pf_at 0x9e26
l_kernel_0002a544: lea edi,[ecx+0x1]
pf_at 0x9e29
l_kernel_0002a547: mov [ebp-0x34],edi
pf_at 0x9e2c
l_kernel_0002a54a: cmp edi,eax
pf_at 0x9e2e
l_kernel_0002a54c: jnc short 0x2a592
pf_at 0x9e30
l_kernel_0002a54e: mov eax,[ebp-0x18]
pf_at 0x9e33
l_kernel_0002a551: mov eax,[esi+eax*4]
pf_at 0x9e36
l_kernel_0002a554: test eax,eax
pf_at 0x9e38
l_kernel_0002a556: mov edx,0x2ca9c
pf_at 0x9e3d
l_kernel_0002a55b: cmovz eax,edx
pf_at 0x9e40
l_kernel_0002a55e: mov ecx,[esi+edi*4]
pf_at 0x9e43
l_kernel_0002a561: test ecx,ecx
pf_at 0x9e45
l_kernel_0002a563: cmovz ecx,edx
pf_at 0x9e48
l_kernel_0002a566: sub esp,byte +0x8
pf_at 0x9e4b
l_kernel_0002a569: push ecx
pf_at 0x9e4c
l_kernel_0002a56a: push eax
pf_at 0x9e4d
l_kernel_0002a56b: call 0x20cea
pf_at 0x9e52
l_kernel_0002a570: add esp,byte +0x10
pf_at 0x9e55
l_kernel_0002a573: test eax,eax
pf_at 0x9e57
l_kernel_0002a575: jng short 0x2a586
pf_at 0x9e59
l_kernel_0002a577: mov edx,[ebp-0x18]
pf_at 0x9e5c
l_kernel_0002a57a: mov eax,[esi+edx*4]
pf_at 0x9e5f
l_kernel_0002a57d: mov ecx,[esi+edi*4]
pf_at 0x9e62
l_kernel_0002a580: mov [esi+edx*4],ecx
pf_at 0x9e65
l_kernel_0002a583: mov [esi+edi*4],eax
pf_at 0x9e68
l_kernel_0002a586: inc edi
pf_at 0x9e69
l_kernel_0002a587: mov eax,[ebp-0x10]
pf_at 0x9e6c
l_kernel_0002a58a: mov eax,[eax+0x1c]
pf_at 0x9e6f
l_kernel_0002a58d: mov eax,[eax+0x4]
pf_at 0x9e72
l_kernel_0002a590: jmp short 0x2a54a
pf_at 0x9e74
l_kernel_0002a592: mov ecx,[ebp-0x34]
pf_at 0x9e77
l_kernel_0002a595: mov [ebp-0x18],ecx
pf_at 0x9e7a
l_kernel_0002a598: jmp short 0x2a53c
pf_at 0x9e7c
l_kernel_0002a59a: xor edi,edi
pf_at 0x9e7e
l_kernel_0002a59c: cmp edi,eax
pf_at 0x9e80
l_kernel_0002a59e: jnc near 0x2a7ca
pf_at 0x9e86
l_kernel_0002a5a4: and dword [ebp-0x33c],byte +0x0
pf_at 0x9e8d
l_kernel_0002a5ab: and dword [ebp-0x338],byte +0x0
pf_at 0x9e94
l_kernel_0002a5b2: and dword [ebp-0x334],byte +0x0
pf_at 0x9e9b
l_kernel_0002a5b9: and dword [ebp-0x330],byte +0x0
pf_at 0x9ea2
l_kernel_0002a5c0: and dword [ebp-0x32c],byte +0x0
pf_at 0x9ea9
l_kernel_0002a5c7: and dword [ebp-0x328],byte +0x0
pf_at 0x9eb0
l_kernel_0002a5ce: and dword [ebp-0x324],byte +0x0
pf_at 0x9eb7
l_kernel_0002a5d5: and dword [ebp-0x320],byte +0x0
pf_at 0x9ebe
l_kernel_0002a5dc: mov edx,[esi+edi*4]
pf_at 0x9ec1
l_kernel_0002a5df: lea ecx,[ebp-0x33c]
pf_at 0x9ec7
l_kernel_0002a5e5: call 0x24c66
pf_at 0x9ecc
l_kernel_0002a5ea: test al,al
pf_at 0x9ece
l_kernel_0002a5ec: jz short 0x2a61a
pf_at 0x9ed0
l_kernel_0002a5ee: mov eax,[ebp-0x1c]
pf_at 0x9ed3
l_kernel_0002a5f1: mov ecx,[eax+0x18]
pf_at 0x9ed6
l_kernel_0002a5f4: lea edx,[ebp-0x33c]
pf_at 0x9edc
l_kernel_0002a5fa: call 0x28586
pf_at 0x9ee1
l_kernel_0002a5ff: test al,al
pf_at 0x9ee3
l_kernel_0002a601: jz short 0x2a61a
pf_at 0x9ee5
l_kernel_0002a603: lea ecx,[ebp-0x33c]
pf_at 0x9eeb
l_kernel_0002a609: call 0x24daf
pf_at 0x9ef0
l_kernel_0002a60e: inc edi
pf_at 0x9ef1
l_kernel_0002a60f: mov eax,[ebp-0x10]
pf_at 0x9ef4
l_kernel_0002a612: mov eax,[eax+0x1c]
pf_at 0x9ef7
l_kernel_0002a615: mov eax,[eax+0x4]
pf_at 0x9efa
l_kernel_0002a618: jmp short 0x2a59c
pf_at 0x9efc
l_kernel_0002a61a: lea ecx,[ebp-0x33c]
pf_at 0x9f02
l_kernel_0002a620: call 0x24daf
pf_at 0x9f07
l_kernel_0002a625: sub esp,byte +0xc
pf_at 0x9f0a
l_kernel_0002a628: push esi
pf_at 0x9f0b
l_kernel_0002a629: call 0x20aee
pf_at 0x9f10
l_kernel_0002a62e: add esp,byte +0x10
pf_at 0x9f13
l_kernel_0002a631: mov ecx,[ebp-0x1c]
pf_at 0x9f16
l_kernel_0002a634: call 0x24daf
pf_at 0x9f1b
l_kernel_0002a639: sub esp,byte +0x4
pf_at 0x9f1e
l_kernel_0002a63c: push dword 0x2d418
pf_at 0x9f23
l_kernel_0002a641: jmp near 0x29c05
pf_at 0x9f28
l_kernel_0002a646: sub esp,byte +0x4
pf_at 0x9f2b
l_kernel_0002a649: push dword 0x2d4b1
pf_at 0x9f30
l_kernel_0002a64e: jmp near 0x29c05
pf_at 0x9f35
l_kernel_0002a653: mov ecx,[ebp-0x14]
pf_at 0x9f38
l_kernel_0002a656: mov edx,0x2d4e0
pf_at 0x9f3d
l_kernel_0002a65b: call 0x26458
pf_at 0x9f42
l_kernel_0002a660: test al,al
pf_at 0x9f44
l_kernel_0002a662: jz near 0x2a7e5
pf_at 0x9f4a
l_kernel_0002a668: sub esp,byte +0x8
pf_at 0x9f4d
l_kernel_0002a66b: mov ecx,ebx
pf_at 0x9f4f
l_kernel_0002a66d: mov edx,[ebp-0x14]
pf_at 0x9f52
l_kernel_0002a670: push byte +0x0
pf_at 0x9f54
l_kernel_0002a672: push dword [ebp-0x18]
pf_at 0x9f57
l_kernel_0002a675: call 0x2b86a
pf_at 0x9f5c
l_kernel_0002a67a: add esp,byte +0x10
pf_at 0x9f5f
l_kernel_0002a67d: test al,al
pf_at 0x9f61
l_kernel_0002a67f: jz near 0x292e6
pf_at 0x9f67
l_kernel_0002a685: mov ecx,0x2d92a
pf_at 0x9f6c
l_kernel_0002a68a: call 0x2176e
pf_at 0x9f71
l_kernel_0002a68f: mov ecx,0x2d955
pf_at 0x9f76
l_kernel_0002a694: call 0x2176e
pf_at 0x9f7b
l_kernel_0002a699: mov ecx,0x2d97c
pf_at 0x9f80
l_kernel_0002a69e: call 0x2176e
pf_at 0x9f85
l_kernel_0002a6a3: mov ecx,0x2d9a8
pf_at 0x9f8a
l_kernel_0002a6a8: call 0x2176e
pf_at 0x9f8f
l_kernel_0002a6ad: mov ecx,0x2d9da
pf_at 0x9f94
l_kernel_0002a6b2: call 0x2176e
pf_at 0x9f99
l_kernel_0002a6b7: mov ecx,0x2da0a
pf_at 0x9f9e
l_kernel_0002a6bc: call 0x2176e
pf_at 0x9fa3
l_kernel_0002a6c1: mov ecx,0x2da35
pf_at 0x9fa8
l_kernel_0002a6c6: call 0x2176e
pf_at 0x9fad
l_kernel_0002a6cb: mov ecx,0x2da61
pf_at 0x9fb2
l_kernel_0002a6d0: call 0x2176e
pf_at 0x9fb7
l_kernel_0002a6d5: mov ecx,0x2da91
pf_at 0x9fbc
l_kernel_0002a6da: call 0x2176e
pf_at 0x9fc1
l_kernel_0002a6df: mov ecx,0x2dac1
pf_at 0x9fc6
l_kernel_0002a6e4: call 0x2176e
pf_at 0x9fcb
l_kernel_0002a6e9: mov ecx,0x2daf2
pf_at 0x9fd0
l_kernel_0002a6ee: call 0x2176e
pf_at 0x9fd5
l_kernel_0002a6f3: mov ecx,0x2db14
pf_at 0x9fda
l_kernel_0002a6f8: call 0x2176e
pf_at 0x9fdf
l_kernel_0002a6fd: mov ecx,0x2db41
pf_at 0x9fe4
l_kernel_0002a702: call 0x2176e
pf_at 0x9fe9
l_kernel_0002a707: mov ecx,0x2db69
pf_at 0x9fee
l_kernel_0002a70c: call 0x2176e
pf_at 0x9ff3
l_kernel_0002a711: mov ecx,0x2db91
pf_at 0x9ff8
l_kernel_0002a716: call 0x2176e
pf_at 0x9ffd
l_kernel_0002a71b: mov ecx,0x2dbbb
pf_at 0xa002
l_kernel_0002a720: call 0x2176e
pf_at 0xa007
l_kernel_0002a725: mov ecx,0x2dbdd
pf_at 0xa00c
l_kernel_0002a72a: call 0x2176e
pf_at 0xa011
l_kernel_0002a72f: mov ecx,0x2dc0f
pf_at 0xa016
l_kernel_0002a734: call 0x2176e
pf_at 0xa01b
l_kernel_0002a739: mov ecx,0x2dc42
pf_at 0xa020
l_kernel_0002a73e: call 0x2176e
pf_at 0xa025
l_kernel_0002a743: mov ecx,0x2dc65
pf_at 0xa02a
l_kernel_0002a748: call 0x2176e
pf_at 0xa02f
l_kernel_0002a74d: mov ecx,0x2dc94
pf_at 0xa034
l_kernel_0002a752: call 0x2176e
pf_at 0xa039
l_kernel_0002a757: mov ecx,0x2dcc7
pf_at 0xa03e
l_kernel_0002a75c: call 0x2176e
pf_at 0xa043
l_kernel_0002a761: mov ecx,0x2dcf2
pf_at 0xa048
l_kernel_0002a766: call 0x2176e
pf_at 0xa04d
l_kernel_0002a76b: mov ecx,0x2dd17
pf_at 0xa052
l_kernel_0002a770: call 0x2176e
pf_at 0xa057
l_kernel_0002a775: mov ecx,0x2dd3f
pf_at 0xa05c
l_kernel_0002a77a: call 0x2176e
pf_at 0xa061
l_kernel_0002a77f: mov ecx,0x2dd6a
pf_at 0xa066
l_kernel_0002a784: call 0x2176e
pf_at 0xa06b
l_kernel_0002a789: mov ecx,0x2dd99
pf_at 0xa070
l_kernel_0002a78e: call 0x2176e
pf_at 0xa075
l_kernel_0002a793: mov ecx,0x2ddc3
pf_at 0xa07a
l_kernel_0002a798: call 0x2176e
pf_at 0xa07f
l_kernel_0002a79d: mov ecx,0x2dded
pf_at 0xa084
l_kernel_0002a7a2: call 0x2176e
pf_at 0xa089
l_kernel_0002a7a7: call 0x21cca
pf_at 0xa08e
l_kernel_0002a7ac: lea esi,[ebp-0x33c]
pf_at 0xa094
l_kernel_0002a7b2: mov ecx,esi
pf_at 0xa096
l_kernel_0002a7b4: xor edx,edx
pf_at 0xa098
l_kernel_0002a7b6: call 0x28508
pf_at 0xa09d
l_kernel_0002a7bb: push byte +0x8
pf_at 0xa09f
l_kernel_0002a7bd: pop ecx
pf_at 0xa0a0
l_kernel_0002a7be: mov edi,[ebp-0x1c]
pf_at 0xa0a3
l_kernel_0002a7c1: rep movsd
pf_at 0xa0a5
l_kernel_0002a7c3: mov cl,0x1
pf_at 0xa0a7
l_kernel_0002a7c5: jmp near 0x292e8
pf_at 0xa0ac
l_kernel_0002a7ca: sub esp,byte +0xc
pf_at 0xa0af
l_kernel_0002a7cd: push esi
pf_at 0xa0b0
l_kernel_0002a7ce: call 0x20aee
pf_at 0xa0b5
l_kernel_0002a7d3: add esp,byte +0x10
pf_at 0xa0b8
l_kernel_0002a7d6: jmp short 0x2a7c3
pf_at 0xa0ba
l_kernel_0002a7d8: sub esp,byte +0x4
pf_at 0xa0bd
l_kernel_0002a7db: push dword 0x2d826
pf_at 0xa0c2
l_kernel_0002a7e0: jmp near 0x29c05
pf_at 0xa0c7
l_kernel_0002a7e5: mov ecx,[ebp-0x14]
pf_at 0xa0ca
l_kernel_0002a7e8: mov edx,0x2d4e5
pf_at 0xa0cf
l_kernel_0002a7ed: call 0x26458
pf_at 0xa0d4
l_kernel_0002a7f2: test al,al
pf_at 0xa0d6
l_kernel_0002a7f4: jz near 0x2a980
pf_at 0xa0dc
l_kernel_0002a7fa: sub esp,byte +0x8
pf_at 0xa0df
l_kernel_0002a7fd: mov ecx,ebx
pf_at 0xa0e1
l_kernel_0002a7ff: mov edx,[ebp-0x14]
pf_at 0xa0e4
l_kernel_0002a802: push byte +0x0
pf_at 0xa0e6
l_kernel_0002a804: push dword [ebp-0x18]
pf_at 0xa0e9
l_kernel_0002a807: call 0x2b86a
pf_at 0xa0ee
l_kernel_0002a80c: add esp,byte +0x10
pf_at 0xa0f1
l_kernel_0002a80f: test al,al
pf_at 0xa0f3
l_kernel_0002a811: jz near 0x292e6
pf_at 0xa0f9
l_kernel_0002a817: mov eax,[0x46c]
pf_at 0xa0fe
l_kernel_0002a81c: sub eax,[dword 0x7040c]
pf_at 0xa104
l_kernel_0002a822: imul edx,eax,byte +0x37
pf_at 0xa107
l_kernel_0002a825: jmp near 0x294ab
pf_at 0xa10c
l_kernel_0002a82a: mov dword [ebp-0x2c],0x0
pf_at 0xa113
l_kernel_0002a831: mov eax,[ebp-0x10]
pf_at 0xa116
l_kernel_0002a834: cmp dword [eax+0x40],byte +0x3
pf_at 0xa11a
l_kernel_0002a838: jnz short 0x2a86a
pf_at 0xa11c
l_kernel_0002a83a: mov eax,[ebp-0x10]
pf_at 0xa11f
l_kernel_0002a83d: mov eax,[eax+0x4c]
pf_at 0xa122
l_kernel_0002a840: test eax,eax
pf_at 0xa124
l_kernel_0002a842: mov edi,0x2ca9c
pf_at 0xa129
l_kernel_0002a847: cmovnz edi,eax
pf_at 0xa12c
l_kernel_0002a84a: sub esp,byte +0xc
pf_at 0xa12f
l_kernel_0002a84d: push edi
pf_at 0xa130
l_kernel_0002a84e: call 0x20ccf
pf_at 0xa135
l_kernel_0002a853: add esp,byte +0x10
pf_at 0xa138
l_kernel_0002a856: mov ecx,edi
pf_at 0xa13a
l_kernel_0002a858: mov edx,eax
pf_at 0xa13c
l_kernel_0002a85a: call 0x24f9e
pf_at 0xa141
l_kernel_0002a85f: mov [ebp-0x2c],eax
pf_at 0xa144
l_kernel_0002a862: test eax,eax
pf_at 0xa146
l_kernel_0002a864: jz near 0x2ab07
pf_at 0xa14c
l_kernel_0002a86a: and dword [ebp-0x33c],byte +0x0
pf_at 0xa153
l_kernel_0002a871: and dword [ebp-0x338],byte +0x0
pf_at 0xa15a
l_kernel_0002a878: and dword [ebp-0x334],byte +0x0
pf_at 0xa161
l_kernel_0002a87f: sub esp,byte +0xc
pf_at 0xa164
l_kernel_0002a882: push dword [ebp-0x38]
pf_at 0xa167
l_kernel_0002a885: call 0x20ccf
pf_at 0xa16c
l_kernel_0002a88a: add esp,byte +0x10
pf_at 0xa16f
l_kernel_0002a88d: mov [ebp-0x34],eax
pf_at 0xa172
l_kernel_0002a890: sub esp,byte +0xc
pf_at 0xa175
l_kernel_0002a893: push dword [ebp-0x18]
pf_at 0xa178
l_kernel_0002a896: call 0x20ccf
pf_at 0xa17d
l_kernel_0002a89b: add esp,byte +0x10
pf_at 0xa180
l_kernel_0002a89e: mov [ebp-0x40],eax
pf_at 0xa183
l_kernel_0002a8a1: test eax,eax
pf_at 0xa185
l_kernel_0002a8a3: jz near 0x2a9f2
pf_at 0xa18b
l_kernel_0002a8a9: mov eax,[ebp-0x40]
pf_at 0xa18e
l_kernel_0002a8ac: sub eax,[ebp-0x38]
pf_at 0xa191
l_kernel_0002a8af: mov [ebp-0x40],eax
pf_at 0xa194
l_kernel_0002a8b2: xor esi,esi
pf_at 0xa196
l_kernel_0002a8b4: mov edi,[ebp-0x34]
pf_at 0xa199
l_kernel_0002a8b7: sub edi,esi
pf_at 0xa19b
l_kernel_0002a8b9: jna near 0x2ab9d
pf_at 0xa1a1
l_kernel_0002a8bf: mov eax,esi
pf_at 0xa1a3
l_kernel_0002a8c1: add eax,[ebp-0x38]
pf_at 0xa1a6
l_kernel_0002a8c4: sub esp,byte +0x8
pf_at 0xa1a9
l_kernel_0002a8c7: push dword [ebp-0x18]
pf_at 0xa1ac
l_kernel_0002a8ca: mov esi,eax
pf_at 0xa1ae
l_kernel_0002a8cc: push eax
pf_at 0xa1af
l_kernel_0002a8cd: call 0x20dbf
pf_at 0xa1b4
l_kernel_0002a8d2: add esp,byte +0x10
pf_at 0xa1b7
l_kernel_0002a8d5: and dword [ebp-0x13c],byte +0x0
pf_at 0xa1be
l_kernel_0002a8dc: mov [ebp-0x3c],eax
pf_at 0xa1c1
l_kernel_0002a8df: test eax,eax
pf_at 0xa1c3
l_kernel_0002a8e1: jz near 0x2ab85
pf_at 0xa1c9
l_kernel_0002a8e7: mov eax,[ebp-0x3c]
pf_at 0xa1cc
l_kernel_0002a8ea: sub eax,esi
pf_at 0xa1ce
l_kernel_0002a8ec: sub esp,byte +0xc
pf_at 0xa1d1
l_kernel_0002a8ef: lea ecx,[ebp-0x33c]
pf_at 0xa1d7
l_kernel_0002a8f5: mov edx,esi
pf_at 0xa1d9
l_kernel_0002a8f7: push eax
pf_at 0xa1da
l_kernel_0002a8f8: call 0x2b6be
pf_at 0xa1df
l_kernel_0002a8fd: add esp,byte +0x10
pf_at 0xa1e2
l_kernel_0002a900: test al,al
pf_at 0xa1e4
l_kernel_0002a902: jz near 0x2abfe
pf_at 0xa1ea
l_kernel_0002a908: mov eax,[ebp-0x2c]
pf_at 0xa1ed
l_kernel_0002a90b: mov edx,eax
pf_at 0xa1ef
l_kernel_0002a90d: test eax,eax
pf_at 0xa1f1
l_kernel_0002a90f: jnz short 0x2a951
pf_at 0xa1f3
l_kernel_0002a911: mov eax,[ebp-0x10]
pf_at 0xa1f6
l_kernel_0002a914: mov ecx,[eax+0x5c]
pf_at 0xa1f9
l_kernel_0002a917: mov edx,[ebp-0x18]
pf_at 0xa1fc
l_kernel_0002a91a: call 0x2b750
pf_at 0xa201
l_kernel_0002a91f: test eax,eax
pf_at 0xa203
l_kernel_0002a921: js near 0x2acbc
pf_at 0xa209
l_kernel_0002a927: mov ecx,[ebp-0x10]
pf_at 0xa20c
l_kernel_0002a92a: mov ecx,[ecx+0x5c]
pf_at 0xa20f
l_kernel_0002a92d: mov ecx,[ecx+0xc]
pf_at 0xa212
l_kernel_0002a930: imul eax,eax,byte +0x24
pf_at 0xa215
l_kernel_0002a933: add ecx,eax
pf_at 0xa217
l_kernel_0002a935: add ecx,byte +0x4
pf_at 0xa21a
l_kernel_0002a938: lea edx,[ebp-0x13c]
pf_at 0xa220
l_kernel_0002a93e: call 0x2b32b
pf_at 0xa225
l_kernel_0002a943: test al,al
pf_at 0xa227
l_kernel_0002a945: jz near 0x2acbc
pf_at 0xa22d
l_kernel_0002a94b: mov edx,[ebp-0x13c]
pf_at 0xa233
l_kernel_0002a951: lea ecx,[ebp-0x33c]
pf_at 0xa239
l_kernel_0002a957: call 0x2b68d
pf_at 0xa23e
l_kernel_0002a95c: sub esp,byte +0xc
pf_at 0xa241
l_kernel_0002a95f: test al,al
pf_at 0xa243
l_kernel_0002a961: jz near 0x2ac3a
pf_at 0xa249
l_kernel_0002a967: push dword [ebp-0x13c]
pf_at 0xa24f
l_kernel_0002a96d: call 0x20aee
pf_at 0xa254
l_kernel_0002a972: add esp,byte +0x10
pf_at 0xa257
l_kernel_0002a975: mov esi,[ebp-0x3c]
pf_at 0xa25a
l_kernel_0002a978: add esi,[ebp-0x40]
pf_at 0xa25d
l_kernel_0002a97b: jmp near 0x2a8b4
pf_at 0xa262
l_kernel_0002a980: mov ecx,[ebp-0x14]
pf_at 0xa265
l_kernel_0002a983: mov edx,0x2d4ef
pf_at 0xa26a
l_kernel_0002a988: call 0x26458
pf_at 0xa26f
l_kernel_0002a98d: test al,al
pf_at 0xa271
l_kernel_0002a98f: jz near 0x2aaa1
pf_at 0xa277
l_kernel_0002a995: cmp dword [ebp-0x18],byte +0x2
pf_at 0xa27b
l_kernel_0002a999: jz near 0x2ad4e
pf_at 0xa281
l_kernel_0002a99f: cmp dword [ebp-0x18],byte +0x1
pf_at 0xa285
l_kernel_0002a9a3: jz near 0x2adc8
pf_at 0xa28b
l_kernel_0002a9a9: cmp dword [ebp-0x18],byte +0x0
pf_at 0xa28f
l_kernel_0002a9ad: jnz near 0x2ae19
pf_at 0xa295
l_kernel_0002a9b3: imul eax,[dword 0x2f0a8],dword 0x19660d
pf_at 0xa29f
l_kernel_0002a9bd: add eax,0x3c6ef35f
pf_at 0xa2a4
l_kernel_0002a9c2: mov [0x2f0a8],eax
pf_at 0xa2a9
l_kernel_0002a9c7: and dword [ebp-0x44],byte +0x0
pf_at 0xa2ad
l_kernel_0002a9cb: mov [ebp-0x48],eax
pf_at 0xa2b0
l_kernel_0002a9ce: fild qword [ebp-0x48]
pf_at 0xa2b3
l_kernel_0002a9d1: fmul dword [dword 0x2ca88]
pf_at 0xa2b9
l_kernel_0002a9d7: sub esp,byte +0x10
pf_at 0xa2bc
l_kernel_0002a9da: fstp dword [esp]
pf_at 0xa2bf
l_kernel_0002a9dd: lea esi,[ebp-0x33c]
pf_at 0xa2c5
l_kernel_0002a9e3: mov ecx,esi
pf_at 0xa2c7
l_kernel_0002a9e5: call 0x24f15
pf_at 0xa2cc
l_kernel_0002a9ea: add esp,byte +0x10
pf_at 0xa2cf
l_kernel_0002a9ed: jmp near 0x2a7bb
pf_at 0xa2d4
l_kernel_0002a9f2: xor edi,edi
pf_at 0xa2d6
l_kernel_0002a9f4: lea esi,[ebp-0x13c]
pf_at 0xa2dc
l_kernel_0002a9fa: cmp edi,[ebp-0x34]
pf_at 0xa2df
l_kernel_0002a9fd: ja near 0x2ab9d
pf_at 0xa2e5
l_kernel_0002aa03: and dword [ebp-0x13c],byte +0x0
pf_at 0xa2ec
l_kernel_0002aa0a: mov eax,[ebp-0x2c]
pf_at 0xa2ef
l_kernel_0002aa0d: mov edx,eax
pf_at 0xa2f1
l_kernel_0002aa0f: test eax,eax
pf_at 0xa2f3
l_kernel_0002aa11: jnz short 0x2aa51
pf_at 0xa2f5
l_kernel_0002aa13: mov eax,[ebp-0x10]
pf_at 0xa2f8
l_kernel_0002aa16: mov ecx,[eax+0x5c]
pf_at 0xa2fb
l_kernel_0002aa19: mov edx,0x2ca9c
pf_at 0xa300
l_kernel_0002aa1e: call 0x2b750
pf_at 0xa305
l_kernel_0002aa23: test eax,eax
pf_at 0xa307
l_kernel_0002aa25: js near 0x2ad08
pf_at 0xa30d
l_kernel_0002aa2b: mov ecx,[ebp-0x10]
pf_at 0xa310
l_kernel_0002aa2e: mov ecx,[ecx+0x5c]
pf_at 0xa313
l_kernel_0002aa31: mov ecx,[ecx+0xc]
pf_at 0xa316
l_kernel_0002aa34: imul eax,eax,byte +0x24
pf_at 0xa319
l_kernel_0002aa37: add ecx,eax
pf_at 0xa31b
l_kernel_0002aa39: add ecx,byte +0x4
pf_at 0xa31e
l_kernel_0002aa3c: mov edx,esi
pf_at 0xa320
l_kernel_0002aa3e: call 0x2b32b
pf_at 0xa325
l_kernel_0002aa43: test al,al
pf_at 0xa327
l_kernel_0002aa45: jz near 0x2ad08
pf_at 0xa32d
l_kernel_0002aa4b: mov edx,[ebp-0x13c]
pf_at 0xa333
l_kernel_0002aa51: lea ecx,[ebp-0x33c]
pf_at 0xa339
l_kernel_0002aa57: call 0x2b68d
pf_at 0xa33e
l_kernel_0002aa5c: sub esp,byte +0xc
pf_at 0xa341
l_kernel_0002aa5f: test al,al
pf_at 0xa343
l_kernel_0002aa61: jz near 0x2ac81
pf_at 0xa349
l_kernel_0002aa67: push dword [ebp-0x13c]
pf_at 0xa34f
l_kernel_0002aa6d: call 0x20aee
pf_at 0xa354
l_kernel_0002aa72: add esp,byte +0x10
pf_at 0xa357
l_kernel_0002aa75: cmp edi,[ebp-0x34]
pf_at 0xa35a
l_kernel_0002aa78: jnc short 0x2aa9b
pf_at 0xa35c
l_kernel_0002aa7a: mov eax,[ebp-0x38]
pf_at 0xa35f
l_kernel_0002aa7d: lea edx,[eax+edi]
pf_at 0xa362
l_kernel_0002aa80: sub esp,byte +0xc
pf_at 0xa365
l_kernel_0002aa83: lea ecx,[ebp-0x33c]
pf_at 0xa36b
l_kernel_0002aa89: push byte +0x1
pf_at 0xa36d
l_kernel_0002aa8b: call 0x2b6be
pf_at 0xa372
l_kernel_0002aa90: add esp,byte +0x10
pf_at 0xa375
l_kernel_0002aa93: test al,al
pf_at 0xa377
l_kernel_0002aa95: jz near 0x2ae75
pf_at 0xa37d
l_kernel_0002aa9b: inc edi
pf_at 0xa37e
l_kernel_0002aa9c: jmp near 0x2a9fa
pf_at 0xa383
l_kernel_0002aaa1: mov ecx,[ebp-0x14]
pf_at 0xa386
l_kernel_0002aaa4: mov edx,0x2d558
pf_at 0xa38b
l_kernel_0002aaa9: call 0x26458
pf_at 0xa390
l_kernel_0002aaae: test al,al
pf_at 0xa392
l_kernel_0002aab0: jz short 0x2ab14
pf_at 0xa394
l_kernel_0002aab2: and dword [ebp-0x33c],byte +0x0
pf_at 0xa39b
l_kernel_0002aab9: sub esp,byte +0x8
pf_at 0xa39e
l_kernel_0002aabc: mov ecx,ebx
pf_at 0xa3a0
l_kernel_0002aabe: mov edx,[ebp-0x14]
pf_at 0xa3a3
l_kernel_0002aac1: push byte +0x1
pf_at 0xa3a5
l_kernel_0002aac3: push dword [ebp-0x18]
pf_at 0xa3a8
l_kernel_0002aac6: call 0x2b86a
pf_at 0xa3ad
l_kernel_0002aacb: add esp,byte +0x10
pf_at 0xa3b0
l_kernel_0002aace: xor ecx,ecx
pf_at 0xa3b2
l_kernel_0002aad0: test al,al
pf_at 0xa3b4
l_kernel_0002aad2: jz near 0x2ac2c
pf_at 0xa3ba
l_kernel_0002aad8: lea esi,[ebp-0x33c]
pf_at 0xa3c0
l_kernel_0002aade: mov ecx,[ebp-0x10]
pf_at 0xa3c3
l_kernel_0002aae1: mov edx,esi
pf_at 0xa3c5
l_kernel_0002aae3: call 0x2b32b
pf_at 0xa3ca
l_kernel_0002aae8: mov ecx,[esi]
pf_at 0xa3cc
l_kernel_0002aaea: test al,al
pf_at 0xa3ce
l_kernel_0002aaec: jz near 0x2ac2c
pf_at 0xa3d4
l_kernel_0002aaf2: mov eax,[ebp-0x1c]
pf_at 0xa3d7
l_kernel_0002aaf5: mov dword [eax],0x3
pf_at 0xa3dd
l_kernel_0002aafb: and dword [eax+0x4],byte +0x0
pf_at 0xa3e1
l_kernel_0002aaff: mov [eax+0xc],ecx
pf_at 0xa3e4
l_kernel_0002ab02: jmp near 0x2a7c3
pf_at 0xa3e9
l_kernel_0002ab07: sub esp,byte +0x4
pf_at 0xa3ec
l_kernel_0002ab0a: push dword 0x2d892
pf_at 0xa3f1
l_kernel_0002ab0f: jmp near 0x29c05
pf_at 0xa3f6
l_kernel_0002ab14: mov ecx,[ebp-0x14]
pf_at 0xa3f9
l_kernel_0002ab17: mov edx,0x2d561
pf_at 0xa3fe
l_kernel_0002ab1c: call 0x26458
pf_at 0xa403
l_kernel_0002ab21: test al,al
pf_at 0xa405
l_kernel_0002ab23: jz near 0x2ae26
pf_at 0xa40b
l_kernel_0002ab29: and dword [ebp-0x13c],byte +0x0
pf_at 0xa412
l_kernel_0002ab30: and dword [ebp-0x24],byte +0x0
pf_at 0xa416
l_kernel_0002ab34: sub esp,byte +0x8
pf_at 0xa419
l_kernel_0002ab37: mov ecx,ebx
pf_at 0xa41b
l_kernel_0002ab39: mov edx,[ebp-0x14]
pf_at 0xa41e
l_kernel_0002ab3c: push byte +0x1
pf_at 0xa420
l_kernel_0002ab3e: push dword [ebp-0x18]
pf_at 0xa423
l_kernel_0002ab41: call 0x2b86a
pf_at 0xa428
l_kernel_0002ab46: add esp,byte +0x10
pf_at 0xa42b
l_kernel_0002ab49: test al,al
pf_at 0xa42d
l_kernel_0002ab4b: jz near 0x292e6
pf_at 0xa433
l_kernel_0002ab51: mov eax,[ebp-0x10]
pf_at 0xa436
l_kernel_0002ab54: mov eax,[eax]
pf_at 0xa438
l_kernel_0002ab56: lea ecx,[eax-0x1]
pf_at 0xa43b
l_kernel_0002ab59: cmp ecx,byte +0x2
pf_at 0xa43e
l_kernel_0002ab5c: jc near 0x2aec3
pf_at 0xa444
l_kernel_0002ab62: cmp eax,byte +0x3
pf_at 0xa447
l_kernel_0002ab65: jz near 0x2aee8
pf_at 0xa44d
l_kernel_0002ab6b: cmp eax,byte +0x5
pf_at 0xa450
l_kernel_0002ab6e: jnz near 0x2af3e
pf_at 0xa456
l_kernel_0002ab74: xor edx,edx
pf_at 0xa458
l_kernel_0002ab76: mov eax,[ebp-0x10]
pf_at 0xa45b
l_kernel_0002ab79: cmp dword [eax+0x4],byte +0x0
pf_at 0xa45f
l_kernel_0002ab7d: setnz dl
pf_at 0xa462
l_kernel_0002ab80: jmp near 0x294ab
pf_at 0xa467
l_kernel_0002ab85: sub esp,byte +0xc
pf_at 0xa46a
l_kernel_0002ab88: lea ecx,[ebp-0x33c]
pf_at 0xa470
l_kernel_0002ab8e: mov edx,esi
pf_at 0xa472
l_kernel_0002ab90: push edi
pf_at 0xa473
l_kernel_0002ab91: call 0x2b6be
pf_at 0xa478
l_kernel_0002ab96: add esp,byte +0x10
pf_at 0xa47b
l_kernel_0002ab99: test al,al
pf_at 0xa47d
l_kernel_0002ab9b: jz short 0x2abfe
pf_at 0xa47f
l_kernel_0002ab9d: sub esp,byte +0xc
pf_at 0xa482
l_kernel_0002aba0: push dword [ebp-0x2c]
pf_at 0xa485
l_kernel_0002aba3: call 0x20aee
pf_at 0xa48a
l_kernel_0002aba8: add esp,byte +0x10
pf_at 0xa48d
l_kernel_0002abab: mov edi,[ebp-0x1c]
pf_at 0xa490
l_kernel_0002abae: mov ecx,edi
pf_at 0xa492
l_kernel_0002abb0: call 0x24daf
pf_at 0xa497
l_kernel_0002abb5: mov dword [edi],0x3
pf_at 0xa49d
l_kernel_0002abbb: lea ecx,[ebp-0x33c]
pf_at 0xa4a3
l_kernel_0002abc1: call 0x2b651
pf_at 0xa4a8
l_kernel_0002abc6: mov [edi+0xc],eax
pf_at 0xa4ab
l_kernel_0002abc9: mov cl,0x1
pf_at 0xa4ad
l_kernel_0002abcb: test eax,eax
pf_at 0xa4af
l_kernel_0002abcd: jnz near 0x292e8
pf_at 0xa4b5
l_kernel_0002abd3: sub esp,byte +0xc
pf_at 0xa4b8
l_kernel_0002abd6: push dword [ebp-0x334]
pf_at 0xa4be
l_kernel_0002abdc: call 0x20aee
pf_at 0xa4c3
l_kernel_0002abe1: add esp,byte +0x10
pf_at 0xa4c6
l_kernel_0002abe4: and dword [ebp-0x33c],byte +0x0
pf_at 0xa4cd
l_kernel_0002abeb: and dword [ebp-0x338],byte +0x0
pf_at 0xa4d4
l_kernel_0002abf2: and dword [ebp-0x334],byte +0x0
pf_at 0xa4db
l_kernel_0002abf9: sub esp,byte +0x4
pf_at 0xa4de
l_kernel_0002abfc: jmp short 0x2ac77
pf_at 0xa4e0
l_kernel_0002abfe: sub esp,byte +0xc
pf_at 0xa4e3
l_kernel_0002ac01: push dword [ebp-0x334]
pf_at 0xa4e9
l_kernel_0002ac07: call 0x20aee
pf_at 0xa4ee
l_kernel_0002ac0c: add esp,byte +0x10
pf_at 0xa4f1
l_kernel_0002ac0f: and dword [ebp-0x33c],byte +0x0
pf_at 0xa4f8
l_kernel_0002ac16: and dword [ebp-0x338],byte +0x0
pf_at 0xa4ff
l_kernel_0002ac1d: and dword [ebp-0x334],byte +0x0
pf_at 0xa506
l_kernel_0002ac24: sub esp,byte +0xc
pf_at 0xa509
l_kernel_0002ac27: push dword [ebp-0x2c]
pf_at 0xa50c
l_kernel_0002ac2a: jmp short 0x2ac6f
pf_at 0xa50e
l_kernel_0002ac2c: sub esp,byte +0xc
pf_at 0xa511
l_kernel_0002ac2f: push ecx
pf_at 0xa512
l_kernel_0002ac30: call 0x20aee
pf_at 0xa517
l_kernel_0002ac35: jmp near 0x292e3
pf_at 0xa51c
l_kernel_0002ac3a: push dword [ebp-0x334]
pf_at 0xa522
l_kernel_0002ac40: call 0x20aee
pf_at 0xa527
l_kernel_0002ac45: add esp,byte +0x10
pf_at 0xa52a
l_kernel_0002ac48: and dword [ebp-0x33c],byte +0x0
pf_at 0xa531
l_kernel_0002ac4f: and dword [ebp-0x338],byte +0x0
pf_at 0xa538
l_kernel_0002ac56: and dword [ebp-0x334],byte +0x0
pf_at 0xa53f
l_kernel_0002ac5d: sub esp,byte +0xc
pf_at 0xa542
l_kernel_0002ac60: push dword [ebp-0x2c]
pf_at 0xa545
l_kernel_0002ac63: call 0x20aee
pf_at 0xa54a
l_kernel_0002ac68: pop eax
pf_at 0xa54b
l_kernel_0002ac69: push dword [ebp-0x13c]
pf_at 0xa551
l_kernel_0002ac6f: call 0x20aee
pf_at 0xa556
l_kernel_0002ac74: add esp,byte +0xc
pf_at 0xa559
l_kernel_0002ac77: push dword 0x2d8e1
pf_at 0xa55e
l_kernel_0002ac7c: jmp near 0x29c05
pf_at 0xa563
l_kernel_0002ac81: push dword [ebp-0x334]
pf_at 0xa569
l_kernel_0002ac87: call 0x20aee
pf_at 0xa56e
l_kernel_0002ac8c: add esp,byte +0x10
pf_at 0xa571
l_kernel_0002ac8f: and dword [ebp-0x33c],byte +0x0
pf_at 0xa578
l_kernel_0002ac96: and dword [ebp-0x338],byte +0x0
pf_at 0xa57f
l_kernel_0002ac9d: and dword [ebp-0x334],byte +0x0
pf_at 0xa586
l_kernel_0002aca4: sub esp,byte +0xc
pf_at 0xa589
l_kernel_0002aca7: push dword [ebp-0x2c]
pf_at 0xa58c
l_kernel_0002acaa: call 0x20aee
pf_at 0xa591
l_kernel_0002acaf: add esp,byte +0x10
pf_at 0xa594
l_kernel_0002acb2: mov edi,0x2d8e1
pf_at 0xa599
l_kernel_0002acb7: jmp near 0x2ad40
pf_at 0xa59e
l_kernel_0002acbc: sub esp,byte +0xc
pf_at 0xa5a1
l_kernel_0002acbf: push dword [ebp-0x334]
pf_at 0xa5a7
l_kernel_0002acc5: call 0x20aee
pf_at 0xa5ac
l_kernel_0002acca: add esp,byte +0x10
pf_at 0xa5af
l_kernel_0002accd: and dword [ebp-0x33c],byte +0x0
pf_at 0xa5b6
l_kernel_0002acd4: and dword [ebp-0x338],byte +0x0
pf_at 0xa5bd
l_kernel_0002acdb: and dword [ebp-0x334],byte +0x0
pf_at 0xa5c4
l_kernel_0002ace2: sub esp,byte +0xc
pf_at 0xa5c7
l_kernel_0002ace5: push byte +0x0
pf_at 0xa5c9
l_kernel_0002ace7: call 0x20aee
pf_at 0xa5ce
l_kernel_0002acec: pop eax
pf_at 0xa5cf
l_kernel_0002aced: push dword [ebp-0x13c]
pf_at 0xa5d5
l_kernel_0002acf3: call 0x20aee
pf_at 0xa5da
l_kernel_0002acf8: add esp,byte +0x10
pf_at 0xa5dd
l_kernel_0002acfb: push dword [ebp-0x18]
pf_at 0xa5e0
l_kernel_0002acfe: push dword 0x2d902
pf_at 0xa5e5
l_kernel_0002ad03: jmp near 0x29c05
pf_at 0xa5ea
l_kernel_0002ad08: sub esp,byte +0xc
pf_at 0xa5ed
l_kernel_0002ad0b: push dword [ebp-0x334]
pf_at 0xa5f3
l_kernel_0002ad11: call 0x20aee
pf_at 0xa5f8
l_kernel_0002ad16: add esp,byte +0x10
pf_at 0xa5fb
l_kernel_0002ad19: and dword [ebp-0x33c],byte +0x0
pf_at 0xa602
l_kernel_0002ad20: and dword [ebp-0x338],byte +0x0
pf_at 0xa609
l_kernel_0002ad27: and dword [ebp-0x334],byte +0x0
pf_at 0xa610
l_kernel_0002ad2e: sub esp,byte +0xc
pf_at 0xa613
l_kernel_0002ad31: push byte +0x0
pf_at 0xa615
l_kernel_0002ad33: call 0x20aee
pf_at 0xa61a
l_kernel_0002ad38: add esp,byte +0x10
pf_at 0xa61d
l_kernel_0002ad3b: mov edi,0x2d8bb
pf_at 0xa622
l_kernel_0002ad40: mov eax,[ebp-0x13c]
pf_at 0xa628
l_kernel_0002ad46: mov [ebp-0x2c],eax
pf_at 0xa62b
l_kernel_0002ad49: jmp near 0x2aea0
pf_at 0xa630
l_kernel_0002ad4e: lea eax,[ebp-0x13c]
pf_at 0xa636
l_kernel_0002ad54: and dword [eax],byte +0x0
pf_at 0xa639
l_kernel_0002ad57: and dword [ebp-0x24],byte +0x0
pf_at 0xa63d
l_kernel_0002ad5b: mov ecx,ebx
pf_at 0xa63f
l_kernel_0002ad5d: mov edx,[ebp-0x14]
pf_at 0xa642
l_kernel_0002ad60: push eax
pf_at 0xa643
l_kernel_0002ad61: push byte +0x0
pf_at 0xa645
l_kernel_0002ad63: push byte +0x2
pf_at 0xa647
l_kernel_0002ad65: push dword [ebp-0x10]
pf_at 0xa64a
l_kernel_0002ad68: call 0x2b95a
pf_at 0xa64f
l_kernel_0002ad6d: add esp,byte +0x10
pf_at 0xa652
l_kernel_0002ad70: test al,al
pf_at 0xa654
l_kernel_0002ad72: jz near 0x292e6
pf_at 0xa65a
l_kernel_0002ad78: lea eax,[ebp-0x24]
pf_at 0xa65d
l_kernel_0002ad7b: mov ecx,ebx
pf_at 0xa65f
l_kernel_0002ad7d: mov edx,[ebp-0x14]
pf_at 0xa662
l_kernel_0002ad80: push eax
pf_at 0xa663
l_kernel_0002ad81: push byte +0x1
pf_at 0xa665
l_kernel_0002ad83: push byte +0x2
pf_at 0xa667
l_kernel_0002ad85: push dword [ebp-0x10]
pf_at 0xa66a
l_kernel_0002ad88: call 0x2b95a
pf_at 0xa66f
l_kernel_0002ad8d: add esp,byte +0x10
pf_at 0xa672
l_kernel_0002ad90: test al,al
pf_at 0xa674
l_kernel_0002ad92: jz near 0x292e6
pf_at 0xa67a
l_kernel_0002ad98: mov ecx,[ebp-0x13c]
pf_at 0xa680
l_kernel_0002ad9e: mov edi,[ebp-0x24]
pf_at 0xa683
l_kernel_0002ada1: sub edi,ecx
pf_at 0xa685
l_kernel_0002ada3: jng near 0x2aedb
pf_at 0xa68b
l_kernel_0002ada9: imul eax,[dword 0x2f0a8],dword 0x19660d
pf_at 0xa695
l_kernel_0002adb3: add eax,0x3c6ef35f
pf_at 0xa69a
l_kernel_0002adb8: mov [0x2f0a8],eax
pf_at 0xa69f
l_kernel_0002adbd: xor edx,edx
pf_at 0xa6a1
l_kernel_0002adbf: div edi
pf_at 0xa6a3
l_kernel_0002adc1: add edx,ecx
pf_at 0xa6a5
l_kernel_0002adc3: jmp near 0x294ab
pf_at 0xa6aa
l_kernel_0002adc8: lea eax,[ebp-0x13c]
pf_at 0xa6b0
l_kernel_0002adce: and dword [eax],byte +0x0
pf_at 0xa6b3
l_kernel_0002add1: mov ecx,ebx
pf_at 0xa6b5
l_kernel_0002add3: mov edx,[ebp-0x14]
pf_at 0xa6b8
l_kernel_0002add6: push eax
pf_at 0xa6b9
l_kernel_0002add7: push byte +0x0
pf_at 0xa6bb
l_kernel_0002add9: push byte +0x1
pf_at 0xa6bd
l_kernel_0002addb: push dword [ebp-0x10]
pf_at 0xa6c0
l_kernel_0002adde: call 0x2b95a
pf_at 0xa6c5
l_kernel_0002ade3: add esp,byte +0x10
pf_at 0xa6c8
l_kernel_0002ade6: test al,al
pf_at 0xa6ca
l_kernel_0002ade8: jz near 0x292e6
pf_at 0xa6d0
l_kernel_0002adee: mov ecx,[ebp-0x13c]
pf_at 0xa6d6
l_kernel_0002adf4: test ecx,ecx
pf_at 0xa6d8
l_kernel_0002adf6: jng near 0x2aece
pf_at 0xa6de
l_kernel_0002adfc: imul eax,[dword 0x2f0a8],dword 0x19660d
pf_at 0xa6e8
l_kernel_0002ae06: add eax,0x3c6ef35f
pf_at 0xa6ed
l_kernel_0002ae0b: mov [0x2f0a8],eax
pf_at 0xa6f2
l_kernel_0002ae10: xor edx,edx
pf_at 0xa6f4
l_kernel_0002ae12: div ecx
pf_at 0xa6f6
l_kernel_0002ae14: jmp near 0x294ab
pf_at 0xa6fb
l_kernel_0002ae19: sub esp,byte +0x4
pf_at 0xa6fe
l_kernel_0002ae1c: push dword 0x2d534
pf_at 0xa703
l_kernel_0002ae21: jmp near 0x29c05
pf_at 0xa708
l_kernel_0002ae26: mov ecx,[ebp-0x14]
pf_at 0xa70b
l_kernel_0002ae29: mov edx,0x2d596
pf_at 0xa710
l_kernel_0002ae2e: call 0x26458
pf_at 0xa715
l_kernel_0002ae33: test al,al
pf_at 0xa717
l_kernel_0002ae35: jz short 0x2aeb4
pf_at 0xa719
l_kernel_0002ae37: sub esp,byte +0x8
pf_at 0xa71c
l_kernel_0002ae3a: mov ecx,ebx
pf_at 0xa71e
l_kernel_0002ae3c: mov edx,[ebp-0x14]
pf_at 0xa721
l_kernel_0002ae3f: push byte +0x1
pf_at 0xa723
l_kernel_0002ae41: push dword [ebp-0x18]
pf_at 0xa726
l_kernel_0002ae44: call 0x2b86a
pf_at 0xa72b
l_kernel_0002ae49: add esp,byte +0x10
pf_at 0xa72e
l_kernel_0002ae4c: test al,al
pf_at 0xa730
l_kernel_0002ae4e: jz near 0x292e6
pf_at 0xa736
l_kernel_0002ae54: mov eax,[ebp-0x10]
pf_at 0xa739
l_kernel_0002ae57: mov eax,[eax]
pf_at 0xa73b
l_kernel_0002ae59: lea ecx,[eax-0x1]
pf_at 0xa73e
l_kernel_0002ae5c: mov edx,0x2d057
pf_at 0xa743
l_kernel_0002ae61: cmp ecx,byte +0x7
pf_at 0xa746
l_kernel_0002ae64: ja short 0x2ae6d
pf_at 0xa748
l_kernel_0002ae66: mov edx,[eax*4+0x2f050]
pf_at 0xa74f
l_kernel_0002ae6d: mov ecx,[ebp-0x1c]
pf_at 0xa752
l_kernel_0002ae70: jmp near 0x28d25
pf_at 0xa757
l_kernel_0002ae75: sub esp,byte +0xc
pf_at 0xa75a
l_kernel_0002ae78: push dword [ebp-0x334]
pf_at 0xa760
l_kernel_0002ae7e: call 0x20aee
pf_at 0xa765
l_kernel_0002ae83: add esp,byte +0x10
pf_at 0xa768
l_kernel_0002ae86: and dword [ebp-0x33c],byte +0x0
pf_at 0xa76f
l_kernel_0002ae8d: and dword [ebp-0x338],byte +0x0
pf_at 0xa776
l_kernel_0002ae94: and dword [ebp-0x334],byte +0x0
pf_at 0xa77d
l_kernel_0002ae9b: mov edi,0x2d8e1
pf_at 0xa782
l_kernel_0002aea0: sub esp,byte +0xc
pf_at 0xa785
l_kernel_0002aea3: push dword [ebp-0x2c]
pf_at 0xa788
l_kernel_0002aea6: call 0x20aee
pf_at 0xa78d
l_kernel_0002aeab: add esp,byte +0xc
pf_at 0xa790
l_kernel_0002aeae: push edi
pf_at 0xa791
l_kernel_0002aeaf: jmp near 0x29c05
pf_at 0xa796
l_kernel_0002aeb4: mov eax,[ebp-0x14]
pf_at 0xa799
l_kernel_0002aeb7: push eax
pf_at 0xa79a
l_kernel_0002aeb8: push dword 0x2d59d
pf_at 0xa79f
l_kernel_0002aebd: push eax
pf_at 0xa7a0
l_kernel_0002aebe: jmp near 0x29587
pf_at 0xa7a5
l_kernel_0002aec3: mov ecx,[ebp-0x1c]
pf_at 0xa7a8
l_kernel_0002aec6: mov edx,[ebp-0x10]
pf_at 0xa7ab
l_kernel_0002aec9: jmp near 0x29f56
pf_at 0xa7b0
l_kernel_0002aece: sub esp,byte +0x4
pf_at 0xa7b3
l_kernel_0002aed1: push dword 0x2d4f6
pf_at 0xa7b8
l_kernel_0002aed6: jmp near 0x29c05
pf_at 0xa7bd
l_kernel_0002aedb: sub esp,byte +0x4
pf_at 0xa7c0
l_kernel_0002aede: push dword 0x2d512
pf_at 0xa7c5
l_kernel_0002aee3: jmp near 0x29c05
pf_at 0xa7ca
l_kernel_0002aee8: mov eax,[ebp-0x10]
pf_at 0xa7cd
l_kernel_0002aeeb: mov eax,[eax+0xc]
pf_at 0xa7d0
l_kernel_0002aeee: test eax,eax
pf_at 0xa7d2
l_kernel_0002aef0: jz short 0x2af3e
pf_at 0xa7d4
l_kernel_0002aef2: sub esp,byte +0x8
pf_at 0xa7d7
l_kernel_0002aef5: push byte +0x2e
pf_at 0xa7d9
l_kernel_0002aef7: push eax
pf_at 0xa7da
l_kernel_0002aef8: call 0x20d35
pf_at 0xa7df
l_kernel_0002aefd: add esp,byte +0x10
pf_at 0xa7e2
l_kernel_0002af00: test eax,eax
pf_at 0xa7e4
l_kernel_0002af02: jnz short 0x2af1e
pf_at 0xa7e6
l_kernel_0002af04: mov eax,[ebp-0x10]
pf_at 0xa7e9
l_kernel_0002af07: mov ecx,[eax+0xc]
pf_at 0xa7ec
l_kernel_0002af0a: lea edx,[ebp-0x24]
pf_at 0xa7ef
l_kernel_0002af0d: call 0x286b0
pf_at 0xa7f4
l_kernel_0002af12: test al,al
pf_at 0xa7f6
l_kernel_0002af14: jz short 0x2af1e
pf_at 0xa7f8
l_kernel_0002af16: mov edx,[ebp-0x24]
pf_at 0xa7fb
l_kernel_0002af19: jmp near 0x294ab
pf_at 0xa800
l_kernel_0002af1e: mov eax,[ebp-0x10]
pf_at 0xa803
l_kernel_0002af21: mov ecx,[eax+0xc]
pf_at 0xa806
l_kernel_0002af24: lea edx,[ebp-0x13c]
pf_at 0xa80c
l_kernel_0002af2a: call 0x24e95
pf_at 0xa811
l_kernel_0002af2f: test al,al
pf_at 0xa813
l_kernel_0002af31: jz short 0x2af3e
pf_at 0xa815
l_kernel_0002af33: fld dword [ebp-0x13c]
pf_at 0xa81b
l_kernel_0002af39: jmp near 0x2a9d7
pf_at 0xa820
l_kernel_0002af3e: sub esp,byte +0x4
pf_at 0xa823
l_kernel_0002af41: push dword 0x2d56a
pf_at 0xa828
l_kernel_0002af46: jmp near 0x29c05
pf_at 0xa82d
l_kernel_0002af4b: push ebp
pf_at 0xa82e
l_kernel_0002af4c: mov ebp,esp
pf_at 0xa830
l_kernel_0002af4e: push ebx
pf_at 0xa831
l_kernel_0002af4f: push edi
pf_at 0xa832
l_kernel_0002af50: push esi
pf_at 0xa833
l_kernel_0002af51: sub esp,byte +0xc
pf_at 0xa836
l_kernel_0002af54: mov edi,edx
pf_at 0xa838
l_kernel_0002af56: mov esi,ecx
pf_at 0xa83a
l_kernel_0002af58: mov ebx,[ebp+0x8]
pf_at 0xa83d
l_kernel_0002af5b: mov ecx,edx
pf_at 0xa83f
l_kernel_0002af5d: call 0x24fea
pf_at 0xa844
l_kernel_0002af62: test eax,eax
pf_at 0xa846
l_kernel_0002af64: js short 0x2af83
pf_at 0xa848
l_kernel_0002af66: mov ecx,[dword 0x70414]
pf_at 0xa84e
l_kernel_0002af6c: imul eax,eax,byte +0x28
pf_at 0xa851
l_kernel_0002af6f: lea edx,[ecx+eax]
pf_at 0xa854
l_kernel_0002af72: add edx,byte +0x4
pf_at 0xa857
l_kernel_0002af75: mov ecx,ebx
pf_at 0xa859
l_kernel_0002af77: add esp,byte +0xc
pf_at 0xa85c
l_kernel_0002af7a: pop esi
pf_at 0xa85d
l_kernel_0002af7b: pop edi
pf_at 0xa85e
l_kernel_0002af7c: pop ebx
pf_at 0xa85f
l_kernel_0002af7d: pop ebp
pf_at 0xa860
l_kernel_0002af7e: jmp near 0x25048
pf_at 0xa865
l_kernel_0002af83: push edi
pf_at 0xa866
l_kernel_0002af84: push dword 0x2de39
pf_at 0xa86b
l_kernel_0002af89: push edi
pf_at 0xa86c
l_kernel_0002af8a: push esi
pf_at 0xa86d
l_kernel_0002af8b: call 0x2609c
pf_at 0xa872
l_kernel_0002af90: add esp,byte +0x10
pf_at 0xa875
l_kernel_0002af93: xor eax,eax
pf_at 0xa877
l_kernel_0002af95: add esp,byte +0xc
pf_at 0xa87a
l_kernel_0002af98: pop esi
pf_at 0xa87b
l_kernel_0002af99: pop edi
pf_at 0xa87c
l_kernel_0002af9a: pop ebx
pf_at 0xa87d
l_kernel_0002af9b: pop ebp
pf_at 0xa87e
l_kernel_0002af9c: ret
pf_at 0xa87f
l_kernel_0002af9d: push ebp
pf_at 0xa880
l_kernel_0002af9e: mov ebp,esp
pf_at 0xa882
l_kernel_0002afa0: push ebx
pf_at 0xa883
l_kernel_0002afa1: push edi
pf_at 0xa884
l_kernel_0002afa2: push esi
pf_at 0xa885
l_kernel_0002afa3: sub esp,byte +0xc
pf_at 0xa888
l_kernel_0002afa6: mov edi,ecx
pf_at 0xa88a
l_kernel_0002afa8: mov esi,[ebp+0x8]
pf_at 0xa88d
l_kernel_0002afab: and dword [ebp-0x10],byte +0x0
pf_at 0xa891
l_kernel_0002afaf: test ecx,ecx
pf_at 0xa893
l_kernel_0002afb1: setz al
pf_at 0xa896
l_kernel_0002afb4: test edx,edx
pf_at 0xa898
l_kernel_0002afb6: setz cl
pf_at 0xa89b
l_kernel_0002afb9: or cl,al
pf_at 0xa89d
l_kernel_0002afbb: test esi,esi
pf_at 0xa89f
l_kernel_0002afbd: setz al
pf_at 0xa8a2
l_kernel_0002afc0: or al,cl
pf_at 0xa8a4
l_kernel_0002afc2: jnz near 0x2b0b9
pf_at 0xa8aa
l_kernel_0002afc8: mov ebx,edx
pf_at 0xa8ac
l_kernel_0002afca: mov eax,[edi]
pf_at 0xa8ae
l_kernel_0002afcc: cmp eax,byte +0x3
pf_at 0xa8b1
l_kernel_0002afcf: jz near 0x2b072
pf_at 0xa8b7
l_kernel_0002afd5: cmp eax,byte +0x8
pf_at 0xa8ba
l_kernel_0002afd8: jz short 0x2b025
pf_at 0xa8bc
l_kernel_0002afda: cmp eax,byte +0x7
pf_at 0xa8bf
l_kernel_0002afdd: jnz near 0x2b0b9
pf_at 0xa8c5
l_kernel_0002afe3: cmp dword [ebx],byte +0x1
pf_at 0xa8c8
l_kernel_0002afe6: jnz near 0x2b0b9
pf_at 0xa8ce
l_kernel_0002afec: mov eax,[edi+0x18]
pf_at 0xa8d1
l_kernel_0002afef: test eax,eax
pf_at 0xa8d3
l_kernel_0002aff1: jz near 0x2b0b9
pf_at 0xa8d9
l_kernel_0002aff7: mov ecx,[ebx+0x4]
pf_at 0xa8dc
l_kernel_0002affa: test ecx,ecx
pf_at 0xa8de
l_kernel_0002affc: jng near 0x2b0b9
pf_at 0xa8e4
l_kernel_0002b002: cmp ecx,[eax+0x4]
pf_at 0xa8e7
l_kernel_0002b005: ja near 0x2b0b9
pf_at 0xa8ed
l_kernel_0002b00b: mov eax,[eax+0xc]
pf_at 0xa8f0
l_kernel_0002b00e: shl ecx,byte 0x5
pf_at 0xa8f3
l_kernel_0002b011: lea edx,[eax+ecx]
pf_at 0xa8f6
l_kernel_0002b014: add edx,byte -0x20
pf_at 0xa8f9
l_kernel_0002b017: mov ecx,esi
pf_at 0xa8fb
l_kernel_0002b019: add esp,byte +0xc
pf_at 0xa8fe
l_kernel_0002b01c: pop esi
pf_at 0xa8ff
l_kernel_0002b01d: pop edi
pf_at 0xa900
l_kernel_0002b01e: pop ebx
pf_at 0xa901
l_kernel_0002b01f: pop ebp
pf_at 0xa902
l_kernel_0002b020: jmp near 0x25048
pf_at 0xa907
l_kernel_0002b025: cmp dword [edi+0x1c],byte +0x0
pf_at 0xa90b
l_kernel_0002b029: jz near 0x2b0af
pf_at 0xa911
l_kernel_0002b02f: lea edx,[ebp-0x10]
pf_at 0xa914
l_kernel_0002b032: mov ecx,ebx
pf_at 0xa916
l_kernel_0002b034: mov ebx,edx
pf_at 0xa918
l_kernel_0002b036: call 0x288cc
pf_at 0xa91d
l_kernel_0002b03b: mov edx,[ebx]
pf_at 0xa91f
l_kernel_0002b03d: test al,al
pf_at 0xa921
l_kernel_0002b03f: jz short 0x2b0b1
pf_at 0xa923
l_kernel_0002b041: mov ecx,[edi+0x1c]
pf_at 0xa926
l_kernel_0002b044: call 0x2b750
pf_at 0xa92b
l_kernel_0002b049: mov ebx,eax
pf_at 0xa92d
l_kernel_0002b04b: mov eax,[ebp-0x10]
pf_at 0xa930
l_kernel_0002b04e: mov [esp],eax
pf_at 0xa933
l_kernel_0002b051: call 0x20aee
pf_at 0xa938
l_kernel_0002b056: test ebx,ebx
pf_at 0xa93a
l_kernel_0002b058: js short 0x2b0b9
pf_at 0xa93c
l_kernel_0002b05a: mov eax,[edi+0x1c]
pf_at 0xa93f
l_kernel_0002b05d: mov eax,[eax+0xc]
pf_at 0xa942
l_kernel_0002b060: imul ecx,ebx,byte +0x24
pf_at 0xa945
l_kernel_0002b063: lea edx,[eax+ecx]
pf_at 0xa948
l_kernel_0002b066: add edx,byte +0x4
pf_at 0xa94b
l_kernel_0002b069: mov ecx,esi
pf_at 0xa94d
l_kernel_0002b06b: call 0x25048
pf_at 0xa952
l_kernel_0002b070: jmp short 0x2b0bb
pf_at 0xa954
l_kernel_0002b072: cmp dword [ebx],byte +0x1
pf_at 0xa957
l_kernel_0002b075: jnz short 0x2b0b9
pf_at 0xa959
l_kernel_0002b077: mov eax,[edi+0xc]
pf_at 0xa95c
l_kernel_0002b07a: test eax,eax
pf_at 0xa95e
l_kernel_0002b07c: jz short 0x2b0b9
pf_at 0xa960
l_kernel_0002b07e: mov ecx,[ebx+0x4]
pf_at 0xa963
l_kernel_0002b081: test ecx,ecx
pf_at 0xa965
l_kernel_0002b083: jng short 0x2b0b9
pf_at 0xa967
l_kernel_0002b085: mov [esp],eax
pf_at 0xa96a
l_kernel_0002b088: mov [ebp-0x14],ecx
pf_at 0xa96d
l_kernel_0002b08b: call 0x20ccf
pf_at 0xa972
l_kernel_0002b090: cmp [ebp-0x14],eax
pf_at 0xa975
l_kernel_0002b093: ja short 0x2b0b9
pf_at 0xa977
l_kernel_0002b095: mov eax,[edi+0xc]
pf_at 0xa97a
l_kernel_0002b098: mov ecx,[ebx+0x4]
pf_at 0xa97d
l_kernel_0002b09b: lea edx,[eax+ecx]
pf_at 0xa980
l_kernel_0002b09e: dec edx
pf_at 0xa981
l_kernel_0002b09f: mov dword [esp],0x1
pf_at 0xa988
l_kernel_0002b0a6: mov ecx,esi
pf_at 0xa98a
l_kernel_0002b0a8: call 0x24f5c
pf_at 0xa98f
l_kernel_0002b0ad: jmp short 0x2b0bb
pf_at 0xa991
l_kernel_0002b0af: xor edx,edx
pf_at 0xa993
l_kernel_0002b0b1: mov [esp],edx
pf_at 0xa996
l_kernel_0002b0b4: call 0x20aee
pf_at 0xa99b
l_kernel_0002b0b9: xor eax,eax
pf_at 0xa99d
l_kernel_0002b0bb: add esp,byte +0xc
pf_at 0xa9a0
l_kernel_0002b0be: pop esi
pf_at 0xa9a1
l_kernel_0002b0bf: pop edi
pf_at 0xa9a2
l_kernel_0002b0c0: pop ebx
pf_at 0xa9a3
l_kernel_0002b0c1: pop ebp
pf_at 0xa9a4
l_kernel_0002b0c2: ret
pf_at 0xa9a5
l_kernel_0002b0c3: push ebp
pf_at 0xa9a6
l_kernel_0002b0c4: mov ebp,esp
pf_at 0xa9a8
l_kernel_0002b0c6: push ebx
pf_at 0xa9a9
l_kernel_0002b0c7: push edi
pf_at 0xa9aa
l_kernel_0002b0c8: push esi
pf_at 0xa9ab
l_kernel_0002b0c9: sub esp,byte +0xc
pf_at 0xa9ae
l_kernel_0002b0cc: mov esi,edx
pf_at 0xa9b0
l_kernel_0002b0ce: mov edi,ecx
pf_at 0xa9b2
l_kernel_0002b0d0: call 0x2b140
pf_at 0xa9b7
l_kernel_0002b0d5: test al,al
pf_at 0xa9b9
l_kernel_0002b0d7: jz short 0x2b138
pf_at 0xa9bb
l_kernel_0002b0d9: mov [ebp-0xd],al
pf_at 0xa9be
l_kernel_0002b0dc: mov eax,[edi+0x4]
pf_at 0xa9c1
l_kernel_0002b0df: mov [ebp-0x14],esi
pf_at 0xa9c4
l_kernel_0002b0e2: cmp eax,esi
pf_at 0xa9c6
l_kernel_0002b0e4: jna short 0x2b12f
pf_at 0xa9c8
l_kernel_0002b0e6: mov ebx,[ebp-0x14]
pf_at 0xa9cb
l_kernel_0002b0e9: mov esi,ebx
pf_at 0xa9cd
l_kernel_0002b0eb: shl esi,byte 0x5
pf_at 0xa9d0
l_kernel_0002b0ee: cmp ebx,eax
pf_at 0xa9d2
l_kernel_0002b0f0: jnc short 0x2b12f
pf_at 0xa9d4
l_kernel_0002b0f2: mov ecx,[edi+0xc]
pf_at 0xa9d7
l_kernel_0002b0f5: add ecx,esi
pf_at 0xa9d9
l_kernel_0002b0f7: call 0x24daf
pf_at 0xa9de
l_kernel_0002b0fc: mov eax,[edi+0xc]
pf_at 0xa9e1
l_kernel_0002b0ff: and dword [eax+esi],byte +0x0
pf_at 0xa9e5
l_kernel_0002b103: and dword [eax+esi+0x4],byte +0x0
pf_at 0xa9ea
l_kernel_0002b108: and dword [eax+esi+0x8],byte +0x0
pf_at 0xa9ef
l_kernel_0002b10d: and dword [eax+esi+0xc],byte +0x0
pf_at 0xa9f4
l_kernel_0002b112: and dword [eax+esi+0x10],byte +0x0
pf_at 0xa9f9
l_kernel_0002b117: and dword [eax+esi+0x14],byte +0x0
pf_at 0xa9fe
l_kernel_0002b11c: and dword [eax+esi+0x18],byte +0x0
pf_at 0xaa03
l_kernel_0002b121: and dword [eax+esi+0x1c],byte +0x0
pf_at 0xaa08
l_kernel_0002b126: inc ebx
pf_at 0xaa09
l_kernel_0002b127: mov eax,[edi+0x4]
pf_at 0xaa0c
l_kernel_0002b12a: add esi,byte +0x20
pf_at 0xaa0f
l_kernel_0002b12d: jmp short 0x2b0ee
pf_at 0xaa11
l_kernel_0002b12f: mov eax,[ebp-0x14]
pf_at 0xaa14
l_kernel_0002b132: mov [edi+0x4],eax
pf_at 0xaa17
l_kernel_0002b135: mov al,[ebp-0xd]
pf_at 0xaa1a
l_kernel_0002b138: add esp,byte +0xc
pf_at 0xaa1d
l_kernel_0002b13b: pop esi
pf_at 0xaa1e
l_kernel_0002b13c: pop edi
pf_at 0xaa1f
l_kernel_0002b13d: pop ebx
pf_at 0xaa20
l_kernel_0002b13e: pop ebp
pf_at 0xaa21
l_kernel_0002b13f: ret
pf_at 0xaa22
l_kernel_0002b140: push ebp
pf_at 0xaa23
l_kernel_0002b141: mov ebp,esp
pf_at 0xaa25
l_kernel_0002b143: push ebx
pf_at 0xaa26
l_kernel_0002b144: push edi
pf_at 0xaa27
l_kernel_0002b145: push esi
pf_at 0xaa28
l_kernel_0002b146: sub esp,byte +0xc
pf_at 0xaa2b
l_kernel_0002b149: test ecx,ecx
pf_at 0xaa2d
l_kernel_0002b14b: jz short 0x2b1bc
pf_at 0xaa2f
l_kernel_0002b14d: mov esi,ecx
pf_at 0xaa31
l_kernel_0002b14f: mov eax,[ecx+0x8]
pf_at 0xaa34
l_kernel_0002b152: mov bl,0x1
pf_at 0xaa36
l_kernel_0002b154: cmp eax,edx
pf_at 0xaa38
l_kernel_0002b156: jnc short 0x2b1c6
pf_at 0xaa3a
l_kernel_0002b158: test eax,eax
pf_at 0xaa3c
l_kernel_0002b15a: push byte +0x4
pf_at 0xaa3e
l_kernel_0002b15c: pop edi
pf_at 0xaa3f
l_kernel_0002b15d: cmovnz edi,eax
pf_at 0xaa42
l_kernel_0002b160: cmp edi,edx
pf_at 0xaa44
l_kernel_0002b162: jnc short 0x2b16e
pf_at 0xaa46
l_kernel_0002b164: test edi,edi
pf_at 0xaa48
l_kernel_0002b166: js short 0x2b16c
pf_at 0xaa4a
l_kernel_0002b168: add edi,edi
pf_at 0xaa4c
l_kernel_0002b16a: jmp short 0x2b160
pf_at 0xaa4e
l_kernel_0002b16c: mov edi,edx
pf_at 0xaa50
l_kernel_0002b16e: mov eax,edi
pf_at 0xaa52
l_kernel_0002b170: shl eax,byte 0x5
pf_at 0xaa55
l_kernel_0002b173: sub esp,byte +0x8
pf_at 0xaa58
l_kernel_0002b176: push eax
pf_at 0xaa59
l_kernel_0002b177: push dword [esi+0xc]
pf_at 0xaa5c
l_kernel_0002b17a: call 0x20b68
pf_at 0xaa61
l_kernel_0002b17f: add esp,byte +0x10
pf_at 0xaa64
l_kernel_0002b182: test eax,eax
pf_at 0xaa66
l_kernel_0002b184: jz short 0x2b1bc
pf_at 0xaa68
l_kernel_0002b186: mov ecx,[esi+0x8]
pf_at 0xaa6b
l_kernel_0002b189: mov edx,ecx
pf_at 0xaa6d
l_kernel_0002b18b: shl edx,byte 0x5
pf_at 0xaa70
l_kernel_0002b18e: add edx,eax
pf_at 0xaa72
l_kernel_0002b190: add edx,byte +0x1c
pf_at 0xaa75
l_kernel_0002b193: cmp ecx,edi
pf_at 0xaa77
l_kernel_0002b195: jnc short 0x2b1c0
pf_at 0xaa79
l_kernel_0002b197: and dword [edx-0x1c],byte +0x0
pf_at 0xaa7d
l_kernel_0002b19b: and dword [edx-0x18],byte +0x0
pf_at 0xaa81
l_kernel_0002b19f: and dword [edx-0x14],byte +0x0
pf_at 0xaa85
l_kernel_0002b1a3: and dword [edx-0x10],byte +0x0
pf_at 0xaa89
l_kernel_0002b1a7: and dword [edx-0xc],byte +0x0
pf_at 0xaa8d
l_kernel_0002b1ab: and dword [edx-0x8],byte +0x0
pf_at 0xaa91
l_kernel_0002b1af: and dword [edx-0x4],byte +0x0
pf_at 0xaa95
l_kernel_0002b1b3: and dword [edx],byte +0x0
pf_at 0xaa98
l_kernel_0002b1b6: inc ecx
pf_at 0xaa99
l_kernel_0002b1b7: add edx,byte +0x20
pf_at 0xaa9c
l_kernel_0002b1ba: jmp short 0x2b193
pf_at 0xaa9e
l_kernel_0002b1bc: xor ebx,ebx
pf_at 0xaaa0
l_kernel_0002b1be: jmp short 0x2b1c6
pf_at 0xaaa2
l_kernel_0002b1c0: mov [esi+0xc],eax
pf_at 0xaaa5
l_kernel_0002b1c3: mov [esi+0x8],edi
pf_at 0xaaa8
l_kernel_0002b1c6: mov eax,ebx
pf_at 0xaaaa
l_kernel_0002b1c8: add esp,byte +0xc
pf_at 0xaaad
l_kernel_0002b1cb: pop esi
pf_at 0xaaae
l_kernel_0002b1cc: pop edi
pf_at 0xaaaf
l_kernel_0002b1cd: pop ebx
pf_at 0xaab0
l_kernel_0002b1ce: pop ebp
pf_at 0xaab1
l_kernel_0002b1cf: ret
pf_at 0xaab2
l_kernel_0002b1d0: push ebp
pf_at 0xaab3
l_kernel_0002b1d1: mov ebp,esp
pf_at 0xaab5
l_kernel_0002b1d3: push ebx
pf_at 0xaab6
l_kernel_0002b1d4: push edi
pf_at 0xaab7
l_kernel_0002b1d5: push esi
pf_at 0xaab8
l_kernel_0002b1d6: sub esp,0x11c
pf_at 0xaabe
l_kernel_0002b1dc: test ecx,ecx
pf_at 0xaac0
l_kernel_0002b1de: setnz ah
pf_at 0xaac3
l_kernel_0002b1e1: mov [ebp-0x18],edx
pf_at 0xaac6
l_kernel_0002b1e4: test edx,edx
pf_at 0xaac8
l_kernel_0002b1e6: setnz al
pf_at 0xaacb
l_kernel_0002b1e9: and al,ah
pf_at 0xaacd
l_kernel_0002b1eb: cmp al,0x1
pf_at 0xaacf
l_kernel_0002b1ed: jnz near 0x2b2f8
pf_at 0xaad5
l_kernel_0002b1f3: mov [ebp-0xd],al
pf_at 0xaad8
l_kernel_0002b1f6: lea edi,[ebp-0x11c]
pf_at 0xaade
l_kernel_0002b1fc: push ecx
pf_at 0xaadf
l_kernel_0002b1fd: push dword 0x2cb77
pf_at 0xaae4
l_kernel_0002b202: push dword 0x100
pf_at 0xaae9
l_kernel_0002b207: push edi
pf_at 0xaaea
l_kernel_0002b208: call 0x216bc
pf_at 0xaaef
l_kernel_0002b20d: add esp,byte +0x10
pf_at 0xaaf2
l_kernel_0002b210: mov ecx,edi
pf_at 0xaaf4
l_kernel_0002b212: call 0x243a7
pf_at 0xaaf9
l_kernel_0002b217: sub esp,byte +0xc
pf_at 0xaafc
l_kernel_0002b21a: push edi
pf_at 0xaafd
l_kernel_0002b21b: call 0x20ccf
pf_at 0xab02
l_kernel_0002b220: add esp,byte +0x10
pf_at 0xab05
l_kernel_0002b223: mov [ebp-0x14],eax
pf_at 0xab08
l_kernel_0002b226: cmp eax,byte +0x2
pf_at 0xab0b
l_kernel_0002b229: jc near 0x2b2e1
pf_at 0xab11
l_kernel_0002b22f: movzx ecx,byte [ebp-0x11c]
pf_at 0xab18
l_kernel_0002b236: cmp ecx,byte +0x27
pf_at 0xab1b
l_kernel_0002b239: jz near 0x2b2d3
pf_at 0xab21
l_kernel_0002b23f: cmp ecx,byte +0x22
pf_at 0xab24
l_kernel_0002b242: jnz near 0x2b2e1
pf_at 0xab2a
l_kernel_0002b248: mov eax,[ebp-0x14]
pf_at 0xab2d
l_kernel_0002b24b: cmp byte [eax+edi-0x1],0x22
pf_at 0xab32
l_kernel_0002b250: jnz near 0x2b2e1
pf_at 0xab38
l_kernel_0002b256: mov [ebp-0x1c],ecx
pf_at 0xab3b
l_kernel_0002b259: xor eax,eax
pf_at 0xab3d
l_kernel_0002b25b: inc eax
pf_at 0xab3e
l_kernel_0002b25c: mov edx,eax
pf_at 0xab40
l_kernel_0002b25e: lea edi,[edx+0x1]
pf_at 0xab43
l_kernel_0002b261: cmp edi,[ebp-0x14]
pf_at 0xab46
l_kernel_0002b264: jnc short 0x2b2c9
pf_at 0xab48
l_kernel_0002b266: cmp eax,[ebp+0x8]
pf_at 0xab4b
l_kernel_0002b269: jnc short 0x2b2c9
pf_at 0xab4d
l_kernel_0002b26b: mov cl,[ebp+edx-0x11c]
pf_at 0xab54
l_kernel_0002b272: cmp cl,0x5c
pf_at 0xab57
l_kernel_0002b275: setnz bh
pf_at 0xab5a
l_kernel_0002b278: lea esi,[edx+0x2]
pf_at 0xab5d
l_kernel_0002b27b: cmp esi,[ebp-0x14]
pf_at 0xab60
l_kernel_0002b27e: setnc bl
pf_at 0xab63
l_kernel_0002b281: or bl,bh
pf_at 0xab65
l_kernel_0002b283: jnz short 0x2b2af
pf_at 0xab67
l_kernel_0002b285: movzx ecx,byte [ebp+edi-0x11c]
pf_at 0xab6f
l_kernel_0002b28d: cmp ecx,byte +0x22
pf_at 0xab72
l_kernel_0002b290: jz short 0x2b2bc
pf_at 0xab74
l_kernel_0002b292: cmp ecx,byte +0x27
pf_at 0xab77
l_kernel_0002b295: jz short 0x2b2bc
pf_at 0xab79
l_kernel_0002b297: cmp ecx,byte +0x5c
pf_at 0xab7c
l_kernel_0002b29a: jz short 0x2b2bc
pf_at 0xab7e
l_kernel_0002b29c: cmp ecx,byte +0x6e
pf_at 0xab81
l_kernel_0002b29f: jz short 0x2b2ba
pf_at 0xab83
l_kernel_0002b2a1: cmp ecx,byte +0x74
pf_at 0xab86
l_kernel_0002b2a4: jz short 0x2b2b6
pf_at 0xab88
l_kernel_0002b2a6: cmp ecx,byte +0x72
pf_at 0xab8b
l_kernel_0002b2a9: jnz short 0x2b2bc
pf_at 0xab8d
l_kernel_0002b2ab: mov cl,0xd
pf_at 0xab8f
l_kernel_0002b2ad: jmp short 0x2b2bc
pf_at 0xab91
l_kernel_0002b2af: cmp cl,[ebp-0x1c]
pf_at 0xab94
l_kernel_0002b2b2: jnz short 0x2b2be
pf_at 0xab96
l_kernel_0002b2b4: jmp short 0x2b2c9
pf_at 0xab98
l_kernel_0002b2b6: mov cl,0x9
pf_at 0xab9a
l_kernel_0002b2b8: jmp short 0x2b2bc
pf_at 0xab9c
l_kernel_0002b2ba: mov cl,0xa
pf_at 0xab9e
l_kernel_0002b2bc: mov edx,edi
pf_at 0xaba0
l_kernel_0002b2be: mov esi,[ebp-0x18]
pf_at 0xaba3
l_kernel_0002b2c1: mov [esi+eax-0x1],cl
pf_at 0xaba7
l_kernel_0002b2c5: inc edx
pf_at 0xaba8
l_kernel_0002b2c6: inc eax
pf_at 0xaba9
l_kernel_0002b2c7: jmp short 0x2b25e
pf_at 0xabab
l_kernel_0002b2c9: mov ecx,[ebp-0x18]
pf_at 0xabae
l_kernel_0002b2cc: mov byte [ecx+eax-0x1],0x0
pf_at 0xabb3
l_kernel_0002b2d1: jmp short 0x2b2f5
pf_at 0xabb5
l_kernel_0002b2d3: mov eax,[ebp-0x14]
pf_at 0xabb8
l_kernel_0002b2d6: cmp byte [eax+edi-0x1],0x27
pf_at 0xabbd
l_kernel_0002b2db: jz near 0x2b256
pf_at 0xabc3
l_kernel_0002b2e1: push edi
pf_at 0xabc4
l_kernel_0002b2e2: push dword 0x2cb77
pf_at 0xabc9
l_kernel_0002b2e7: push dword [ebp+0x8]
pf_at 0xabcc
l_kernel_0002b2ea: push dword [ebp-0x18]
pf_at 0xabcf
l_kernel_0002b2ed: call 0x216bc
pf_at 0xabd4
l_kernel_0002b2f2: add esp,byte +0x10
pf_at 0xabd7
l_kernel_0002b2f5: mov al,[ebp-0xd]
pf_at 0xabda
l_kernel_0002b2f8: add esp,0x11c
pf_at 0xabe0
l_kernel_0002b2fe: pop esi
pf_at 0xabe1
l_kernel_0002b2ff: pop edi
pf_at 0xabe2
l_kernel_0002b300: pop ebx
pf_at 0xabe3
l_kernel_0002b301: pop ebp
pf_at 0xabe4
l_kernel_0002b302: ret
pf_at 0xabe5
l_kernel_0002b303: push ebp
pf_at 0xabe6
l_kernel_0002b304: mov ebp,esp
pf_at 0xabe8
l_kernel_0002b306: mov eax,ecx
pf_at 0xabea
l_kernel_0002b308: add al,0xd0
pf_at 0xabec
l_kernel_0002b30a: cmp al,0xa
pf_at 0xabee
l_kernel_0002b30c: setc al
pf_at 0xabf1
l_kernel_0002b30f: mov edx,ecx
pf_at 0xabf3
l_kernel_0002b311: add dl,0x9f
pf_at 0xabf6
l_kernel_0002b314: cmp dl,0x6
pf_at 0xabf9
l_kernel_0002b317: setc dl
pf_at 0xabfc
l_kernel_0002b31a: or dl,al
pf_at 0xabfe
l_kernel_0002b31c: mov al,0x1
pf_at 0xac00
l_kernel_0002b31e: jnz short 0x2b329
pf_at 0xac02
l_kernel_0002b320: add cl,0xbf
pf_at 0xac05
l_kernel_0002b323: cmp cl,0x6
pf_at 0xac08
l_kernel_0002b326: setc al
pf_at 0xac0b
l_kernel_0002b329: pop ebp
pf_at 0xac0c
l_kernel_0002b32a: ret
pf_at 0xac0d
l_kernel_0002b32b: test edx,edx
pf_at 0xac0f
l_kernel_0002b32d: jz short 0x2b367
pf_at 0xac11
l_kernel_0002b32f: push ebp
pf_at 0xac12
l_kernel_0002b330: mov ebp,esp
pf_at 0xac14
l_kernel_0002b332: push esi
pf_at 0xac15
l_kernel_0002b333: sub esp,byte +0x14
pf_at 0xac18
l_kernel_0002b336: mov esi,edx
pf_at 0xac1a
l_kernel_0002b338: and dword [edx],byte +0x0
pf_at 0xac1d
l_kernel_0002b33b: lea edx,[ebp-0x10]
pf_at 0xac20
l_kernel_0002b33e: and dword [edx],byte +0x0
pf_at 0xac23
l_kernel_0002b341: and dword [edx+0x4],byte +0x0
pf_at 0xac27
l_kernel_0002b345: and dword [edx+0x8],byte +0x0
pf_at 0xac2b
l_kernel_0002b349: and dword [esp],byte +0x0
pf_at 0xac2f
l_kernel_0002b34d: call 0x2b37d
pf_at 0xac34
l_kernel_0002b352: test al,al
pf_at 0xac36
l_kernel_0002b354: jz short 0x2b36a
pf_at 0xac38
l_kernel_0002b356: lea ecx,[ebp-0x10]
pf_at 0xac3b
l_kernel_0002b359: call 0x2b651
pf_at 0xac40
l_kernel_0002b35e: mov [esi],eax
pf_at 0xac42
l_kernel_0002b360: test eax,eax
pf_at 0xac44
l_kernel_0002b362: setnz al
pf_at 0xac47
l_kernel_0002b365: jmp short 0x2b377
pf_at 0xac49
l_kernel_0002b367: xor eax,eax
pf_at 0xac4b
l_kernel_0002b369: ret
pf_at 0xac4c
l_kernel_0002b36a: mov eax,[ebp-0x8]
pf_at 0xac4f
l_kernel_0002b36d: mov [esp],eax
pf_at 0xac52
l_kernel_0002b370: call 0x20aee
pf_at 0xac57
l_kernel_0002b375: xor eax,eax
pf_at 0xac59
l_kernel_0002b377: add esp,byte +0x14
pf_at 0xac5c
l_kernel_0002b37a: pop esi
pf_at 0xac5d
l_kernel_0002b37b: pop ebp
pf_at 0xac5e
l_kernel_0002b37c: ret
pf_at 0xac5f
l_kernel_0002b37d: push ebp
pf_at 0xac60
l_kernel_0002b37e: mov ebp,esp
pf_at 0xac62
l_kernel_0002b380: push ebx
pf_at 0xac63
l_kernel_0002b381: push edi
pf_at 0xac64
l_kernel_0002b382: push esi
pf_at 0xac65
l_kernel_0002b383: sub esp,byte +0x6c
pf_at 0xac68
l_kernel_0002b386: test edx,edx
pf_at 0xac6a
l_kernel_0002b388: jz near 0x2b647
pf_at 0xac70
l_kernel_0002b38e: mov esi,edx
pf_at 0xac72
l_kernel_0002b390: mov edi,ecx
pf_at 0xac74
l_kernel_0002b392: test ecx,ecx
pf_at 0xac76
l_kernel_0002b394: jz short 0x2b3ad
pf_at 0xac78
l_kernel_0002b396: mov eax,[edi]
pf_at 0xac7a
l_kernel_0002b398: test eax,eax
pf_at 0xac7c
l_kernel_0002b39a: jz short 0x2b3ad
pf_at 0xac7e
l_kernel_0002b39c: mov ebx,[ebp+0x8]
pf_at 0xac81
l_kernel_0002b39f: cmp ebx,byte +0x11
pf_at 0xac84
l_kernel_0002b3a2: jc short 0x2b3c0
pf_at 0xac86
l_kernel_0002b3a4: mov ecx,esi
pf_at 0xac88
l_kernel_0002b3a6: mov edx,0x2d05c
pf_at 0xac8d
l_kernel_0002b3ab: jmp short 0x2b3b4
pf_at 0xac8f
l_kernel_0002b3ad: mov ecx,esi
pf_at 0xac91
l_kernel_0002b3af: mov edx,0x2d057
pf_at 0xac96
l_kernel_0002b3b4: add esp,byte +0x6c
pf_at 0xac99
l_kernel_0002b3b7: pop esi
pf_at 0xac9a
l_kernel_0002b3b8: pop edi
pf_at 0xac9b
l_kernel_0002b3b9: pop ebx
pf_at 0xac9c
l_kernel_0002b3ba: pop ebp
pf_at 0xac9d
l_kernel_0002b3bb: jmp near 0x2b68d
pf_at 0xaca2
l_kernel_0002b3c0: dec eax
pf_at 0xaca3
l_kernel_0002b3c1: cmp eax,byte +0x7
pf_at 0xaca6
l_kernel_0002b3c4: ja near 0x2b5ff
pf_at 0xacac
l_kernel_0002b3ca: jmp [eax*4+0x2c9cc]
pf_at 0xacb3
l_kernel_0002b3d1: lea ebx,[ebp-0x74]
pf_at 0xacb6
l_kernel_0002b3d4: push dword [edi+0x4]
pf_at 0xacb9
l_kernel_0002b3d7: push dword 0x2d051
pf_at 0xacbe
l_kernel_0002b3dc: jmp near 0x2b577
pf_at 0xacc3
l_kernel_0002b3e1: cmp dword [edi+0x4],byte +0x0
pf_at 0xacc7
l_kernel_0002b3e5: mov eax,0x2cf7d
pf_at 0xaccc
l_kernel_0002b3ea: mov edx,0x2cf78
pf_at 0xacd1
l_kernel_0002b3ef: cmovz edx,eax
pf_at 0xacd4
l_kernel_0002b3f2: jmp short 0x2b401
pf_at 0xacd6
l_kernel_0002b3f4: mov eax,[edi+0xc]
pf_at 0xacd9
l_kernel_0002b3f7: test eax,eax
pf_at 0xacdb
l_kernel_0002b3f9: mov edx,0x2ca9c
pf_at 0xace0
l_kernel_0002b3fe: cmovnz edx,eax
pf_at 0xace3
l_kernel_0002b401: mov ecx,esi
pf_at 0xace5
l_kernel_0002b403: jmp short 0x2b3b4
pf_at 0xace7
l_kernel_0002b405: mov ecx,esi
pf_at 0xace9
l_kernel_0002b407: mov edx,0x2d06b
pf_at 0xacee
l_kernel_0002b40c: call 0x2b68d
pf_at 0xacf3
l_kernel_0002b411: test al,al
pf_at 0xacf5
l_kernel_0002b413: jz near 0x2b647
pf_at 0xacfb
l_kernel_0002b419: cmp dword [edi+0x10],byte +0x0
pf_at 0xacff
l_kernel_0002b41d: jz near 0x2b63b
pf_at 0xad05
l_kernel_0002b423: mov eax,[edi+0x14]
pf_at 0xad08
l_kernel_0002b426: cmp eax,byte +0x20
pf_at 0xad0b
l_kernel_0002b429: push byte +0x20
pf_at 0xad0d
l_kernel_0002b42b: pop ecx
pf_at 0xad0e
l_kernel_0002b42c: cmovc ecx,eax
pf_at 0xad11
l_kernel_0002b42f: mov [ebp-0x10],ecx
pf_at 0xad14
l_kernel_0002b432: xor ebx,ebx
pf_at 0xad16
l_kernel_0002b434: cmp [ebp-0x10],ebx
pf_at 0xad19
l_kernel_0002b437: jz near 0x2b623
pf_at 0xad1f
l_kernel_0002b43d: test ebx,ebx
pf_at 0xad21
l_kernel_0002b43f: jz short 0x2b455
pf_at 0xad23
l_kernel_0002b441: mov ecx,esi
pf_at 0xad25
l_kernel_0002b443: mov edx,0x2d070
pf_at 0xad2a
l_kernel_0002b448: call 0x2b68d
pf_at 0xad2f
l_kernel_0002b44d: test al,al
pf_at 0xad31
l_kernel_0002b44f: jz near 0x2b647
pf_at 0xad37
l_kernel_0002b455: mov eax,[edi+0x10]
pf_at 0xad3a
l_kernel_0002b458: movzx eax,byte [eax+ebx]
pf_at 0xad3e
l_kernel_0002b45c: push eax
pf_at 0xad3f
l_kernel_0002b45d: push dword 0x2d072
pf_at 0xad44
l_kernel_0002b462: push byte +0x60
pf_at 0xad46
l_kernel_0002b464: lea eax,[ebp-0x74]
pf_at 0xad49
l_kernel_0002b467: push eax
pf_at 0xad4a
l_kernel_0002b468: call 0x216bc
pf_at 0xad4f
l_kernel_0002b46d: add esp,byte +0x10
pf_at 0xad52
l_kernel_0002b470: mov ecx,esi
pf_at 0xad54
l_kernel_0002b472: lea edx,[ebp-0x74]
pf_at 0xad57
l_kernel_0002b475: call 0x2b68d
pf_at 0xad5c
l_kernel_0002b47a: mov ecx,eax
pf_at 0xad5e
l_kernel_0002b47c: inc ebx
pf_at 0xad5f
l_kernel_0002b47d: xor eax,eax
pf_at 0xad61
l_kernel_0002b47f: test cl,cl
pf_at 0xad63
l_kernel_0002b481: jnz short 0x2b434
pf_at 0xad65
l_kernel_0002b483: jmp near 0x2b649
pf_at 0xad6a
l_kernel_0002b488: mov ecx,esi
pf_at 0xad6c
l_kernel_0002b48a: mov edx,0x2cf1e
pf_at 0xad71
l_kernel_0002b48f: call 0x2b68d
pf_at 0xad76
l_kernel_0002b494: test al,al
pf_at 0xad78
l_kernel_0002b496: jz near 0x2b647
pf_at 0xad7e
l_kernel_0002b49c: cmp dword [edi+0x1c],byte +0x0
pf_at 0xad82
l_kernel_0002b4a0: jz near 0x2b617
pf_at 0xad88
l_kernel_0002b4a6: inc ebx
pf_at 0xad89
l_kernel_0002b4a7: mov [ebp-0x14],ebx
pf_at 0xad8c
l_kernel_0002b4aa: xor edx,edx
pf_at 0xad8e
l_kernel_0002b4ac: push byte +0x4
pf_at 0xad90
l_kernel_0002b4ae: pop ebx
pf_at 0xad91
l_kernel_0002b4af: mov eax,[edi+0x1c]
pf_at 0xad94
l_kernel_0002b4b2: cmp edx,[eax+0x4]
pf_at 0xad97
l_kernel_0002b4b5: jnc near 0x2b617
pf_at 0xad9d
l_kernel_0002b4bb: mov [ebp-0x10],edx
pf_at 0xada0
l_kernel_0002b4be: test edx,edx
pf_at 0xada2
l_kernel_0002b4c0: jz short 0x2b4d9
pf_at 0xada4
l_kernel_0002b4c2: mov ecx,esi
pf_at 0xada6
l_kernel_0002b4c4: mov edx,0x2d07c
pf_at 0xadab
l_kernel_0002b4c9: call 0x2b68d
pf_at 0xadb0
l_kernel_0002b4ce: test al,al
pf_at 0xadb2
l_kernel_0002b4d0: jz near 0x2b647
pf_at 0xadb8
l_kernel_0002b4d6: mov eax,[edi+0x1c]
pf_at 0xadbb
l_kernel_0002b4d9: mov eax,[eax+0xc]
pf_at 0xadbe
l_kernel_0002b4dc: mov eax,[eax+ebx-0x4]
pf_at 0xadc2
l_kernel_0002b4e0: mov edx,0x2ca9c
pf_at 0xadc7
l_kernel_0002b4e5: test eax,eax
pf_at 0xadc9
l_kernel_0002b4e7: jz short 0x2b4eb
pf_at 0xadcb
l_kernel_0002b4e9: mov edx,eax
pf_at 0xadcd
l_kernel_0002b4eb: mov ecx,esi
pf_at 0xadcf
l_kernel_0002b4ed: call 0x2b68d
pf_at 0xadd4
l_kernel_0002b4f2: test al,al
pf_at 0xadd6
l_kernel_0002b4f4: jz near 0x2b647
pf_at 0xaddc
l_kernel_0002b4fa: mov ecx,esi
pf_at 0xadde
l_kernel_0002b4fc: mov edx,0x2d07f
pf_at 0xade3
l_kernel_0002b501: call 0x2b68d
pf_at 0xade8
l_kernel_0002b506: test al,al
pf_at 0xadea
l_kernel_0002b508: jz near 0x2b647
pf_at 0xadf0
l_kernel_0002b50e: mov eax,[edi+0x1c]
pf_at 0xadf3
l_kernel_0002b511: mov ecx,[eax+0xc]
pf_at 0xadf6
l_kernel_0002b514: add ecx,ebx
pf_at 0xadf8
l_kernel_0002b516: sub esp,byte +0xc
pf_at 0xadfb
l_kernel_0002b519: mov edx,esi
pf_at 0xadfd
l_kernel_0002b51b: push dword [ebp-0x14]
pf_at 0xae00
l_kernel_0002b51e: call 0x2b37d
pf_at 0xae05
l_kernel_0002b523: add esp,byte +0x10
pf_at 0xae08
l_kernel_0002b526: mov ecx,eax
pf_at 0xae0a
l_kernel_0002b528: mov edx,[ebp-0x10]
pf_at 0xae0d
l_kernel_0002b52b: inc edx
pf_at 0xae0e
l_kernel_0002b52c: add ebx,byte +0x24
pf_at 0xae11
l_kernel_0002b52f: xor eax,eax
pf_at 0xae13
l_kernel_0002b531: test cl,cl
pf_at 0xae15
l_kernel_0002b533: jnz near 0x2b4af
pf_at 0xae1b
l_kernel_0002b539: jmp near 0x2b649
pf_at 0xae20
l_kernel_0002b53e: fld dword [edi+0x8]
pf_at 0xae23
l_kernel_0002b541: sub esp,byte +0x20
pf_at 0xae26
l_kernel_0002b544: fstp qword [esp+0xc]
pf_at 0xae2a
l_kernel_0002b548: lea edi,[ebp-0x74]
pf_at 0xae2d
l_kernel_0002b54b: mov [esp],edi
pf_at 0xae30
l_kernel_0002b54e: mov dword [esp+0x8],0x2d054
pf_at 0xae38
l_kernel_0002b556: mov dword [esp+0x4],0x60
pf_at 0xae40
l_kernel_0002b55e: call 0x216bc
pf_at 0xae45
l_kernel_0002b563: add esp,byte +0x20
pf_at 0xae48
l_kernel_0002b566: mov ecx,esi
pf_at 0xae4a
l_kernel_0002b568: mov edx,edi
pf_at 0xae4c
l_kernel_0002b56a: jmp short 0x2b586
pf_at 0xae4e
l_kernel_0002b56c: lea ebx,[ebp-0x74]
pf_at 0xae51
l_kernel_0002b56f: push dword [edi+0x4]
pf_at 0xae54
l_kernel_0002b572: push dword 0x2d065
pf_at 0xae59
l_kernel_0002b577: push byte +0x60
pf_at 0xae5b
l_kernel_0002b579: push ebx
pf_at 0xae5c
l_kernel_0002b57a: call 0x216bc
pf_at 0xae61
l_kernel_0002b57f: add esp,byte +0x10
pf_at 0xae64
l_kernel_0002b582: mov ecx,esi
pf_at 0xae66
l_kernel_0002b584: mov edx,ebx
pf_at 0xae68
l_kernel_0002b586: call 0x2b68d
pf_at 0xae6d
l_kernel_0002b58b: jmp near 0x2b649
pf_at 0xae72
l_kernel_0002b590: mov ecx,esi
pf_at 0xae74
l_kernel_0002b592: mov edx,0x2cee1
pf_at 0xae79
l_kernel_0002b597: call 0x2b68d
pf_at 0xae7e
l_kernel_0002b59c: test al,al
pf_at 0xae80
l_kernel_0002b59e: jz near 0x2b647
pf_at 0xae86
l_kernel_0002b5a4: mov [ebp-0x14],ebx
pf_at 0xae89
l_kernel_0002b5a7: cmp dword [edi+0x18],byte +0x0
pf_at 0xae8d
l_kernel_0002b5ab: jz short 0x2b60b
pf_at 0xae8f
l_kernel_0002b5ad: inc dword [ebp-0x14]
pf_at 0xae92
l_kernel_0002b5b0: xor edx,edx
pf_at 0xae94
l_kernel_0002b5b2: xor ebx,ebx
pf_at 0xae96
l_kernel_0002b5b4: mov eax,[edi+0x18]
pf_at 0xae99
l_kernel_0002b5b7: cmp ebx,[eax+0x4]
pf_at 0xae9c
l_kernel_0002b5ba: jnc short 0x2b60b
pf_at 0xae9e
l_kernel_0002b5bc: test ebx,ebx
pf_at 0xaea0
l_kernel_0002b5be: mov [ebp-0x10],edx
pf_at 0xaea3
l_kernel_0002b5c1: jz short 0x2b5d9
pf_at 0xaea5
l_kernel_0002b5c3: mov ecx,esi
pf_at 0xaea7
l_kernel_0002b5c5: mov edx,0x2d07c
pf_at 0xaeac
l_kernel_0002b5ca: call 0x2b68d
pf_at 0xaeb1
l_kernel_0002b5cf: test al,al
pf_at 0xaeb3
l_kernel_0002b5d1: jz short 0x2b647
pf_at 0xaeb5
l_kernel_0002b5d3: mov eax,[edi+0x18]
pf_at 0xaeb8
l_kernel_0002b5d6: mov edx,[ebp-0x10]
pf_at 0xaebb
l_kernel_0002b5d9: mov ecx,[eax+0xc]
pf_at 0xaebe
l_kernel_0002b5dc: add ecx,edx
pf_at 0xaec0
l_kernel_0002b5de: sub esp,byte +0xc
pf_at 0xaec3
l_kernel_0002b5e1: mov edx,esi
pf_at 0xaec5
l_kernel_0002b5e3: push dword [ebp-0x14]
pf_at 0xaec8
l_kernel_0002b5e6: call 0x2b37d
pf_at 0xaecd
l_kernel_0002b5eb: mov edx,[ebp-0x10]
pf_at 0xaed0
l_kernel_0002b5ee: add esp,byte +0x10
pf_at 0xaed3
l_kernel_0002b5f1: mov ecx,eax
pf_at 0xaed5
l_kernel_0002b5f3: inc ebx
pf_at 0xaed6
l_kernel_0002b5f4: add edx,byte +0x20
pf_at 0xaed9
l_kernel_0002b5f7: xor eax,eax
pf_at 0xaedb
l_kernel_0002b5f9: test cl,cl
pf_at 0xaedd
l_kernel_0002b5fb: jnz short 0x2b5b4
pf_at 0xaedf
l_kernel_0002b5fd: jmp short 0x2b649
pf_at 0xaee1
l_kernel_0002b5ff: mov ecx,esi
pf_at 0xaee3
l_kernel_0002b601: mov edx,0x2d082
pf_at 0xaee8
l_kernel_0002b606: jmp near 0x2b3b4
pf_at 0xaeed
l_kernel_0002b60b: mov ecx,esi
pf_at 0xaeef
l_kernel_0002b60d: mov edx,0x2cf06
pf_at 0xaef4
l_kernel_0002b612: jmp near 0x2b3b4
pf_at 0xaef9
l_kernel_0002b617: mov ecx,esi
pf_at 0xaefb
l_kernel_0002b619: mov edx,0x2cf43
pf_at 0xaf00
l_kernel_0002b61e: jmp near 0x2b3b4
pf_at 0xaf05
l_kernel_0002b623: mov eax,[ebp-0x10]
pf_at 0xaf08
l_kernel_0002b626: cmp eax,[edi+0x14]
pf_at 0xaf0b
l_kernel_0002b629: jnc short 0x2b63b
pf_at 0xaf0d
l_kernel_0002b62b: mov ecx,esi
pf_at 0xaf0f
l_kernel_0002b62d: mov edx,0x2d077
pf_at 0xaf14
l_kernel_0002b632: call 0x2b68d
pf_at 0xaf19
l_kernel_0002b637: test al,al
pf_at 0xaf1b
l_kernel_0002b639: jz short 0x2b647
pf_at 0xaf1d
l_kernel_0002b63b: mov ecx,esi
pf_at 0xaf1f
l_kernel_0002b63d: mov edx,0x2cf06
pf_at 0xaf24
l_kernel_0002b642: jmp near 0x2b586
pf_at 0xaf29
l_kernel_0002b647: xor eax,eax
pf_at 0xaf2b
l_kernel_0002b649: add esp,byte +0x6c
pf_at 0xaf2e
l_kernel_0002b64c: pop esi
pf_at 0xaf2f
l_kernel_0002b64d: pop edi
pf_at 0xaf30
l_kernel_0002b64e: pop ebx
pf_at 0xaf31
l_kernel_0002b64f: pop ebp
pf_at 0xaf32
l_kernel_0002b650: ret
pf_at 0xaf33
l_kernel_0002b651: push ebp
pf_at 0xaf34
l_kernel_0002b652: mov ebp,esp
pf_at 0xaf36
l_kernel_0002b654: push esi
pf_at 0xaf37
l_kernel_0002b655: push eax
pf_at 0xaf38
l_kernel_0002b656: xor esi,esi
pf_at 0xaf3a
l_kernel_0002b658: test ecx,ecx
pf_at 0xaf3c
l_kernel_0002b65a: jz short 0x2b685
pf_at 0xaf3e
l_kernel_0002b65c: mov eax,[ecx+0x8]
pf_at 0xaf41
l_kernel_0002b65f: test eax,eax
pf_at 0xaf43
l_kernel_0002b661: jz short 0x2b670
pf_at 0xaf45
l_kernel_0002b663: and dword [ecx+0x8],byte +0x0
pf_at 0xaf49
l_kernel_0002b667: and dword [ecx],byte +0x0
pf_at 0xaf4c
l_kernel_0002b66a: and dword [ecx+0x4],byte +0x0
pf_at 0xaf50
l_kernel_0002b66e: jmp short 0x2b683
pf_at 0xaf52
l_kernel_0002b670: mov dword [esp],0x1
pf_at 0xaf59
l_kernel_0002b677: call 0x20ae5
pf_at 0xaf5e
l_kernel_0002b67c: test eax,eax
pf_at 0xaf60
l_kernel_0002b67e: jz short 0x2b685
pf_at 0xaf62
l_kernel_0002b680: mov byte [eax],0x0
pf_at 0xaf65
l_kernel_0002b683: mov esi,eax
pf_at 0xaf67
l_kernel_0002b685: mov eax,esi
pf_at 0xaf69
l_kernel_0002b687: add esp,byte +0x4
pf_at 0xaf6c
l_kernel_0002b68a: pop esi
pf_at 0xaf6d
l_kernel_0002b68b: pop ebp
pf_at 0xaf6e
l_kernel_0002b68c: ret
pf_at 0xaf6f
l_kernel_0002b68d: push ebp
pf_at 0xaf70
l_kernel_0002b68e: mov ebp,esp
pf_at 0xaf72
l_kernel_0002b690: push edi
pf_at 0xaf73
l_kernel_0002b691: push esi
pf_at 0xaf74
l_kernel_0002b692: sub esp,byte +0x10
pf_at 0xaf77
l_kernel_0002b695: mov esi,edx
pf_at 0xaf79
l_kernel_0002b697: mov edi,ecx
pf_at 0xaf7b
l_kernel_0002b699: test edx,edx
pf_at 0xaf7d
l_kernel_0002b69b: mov eax,0x2ca9c
pf_at 0xaf82
l_kernel_0002b6a0: cmovz esi,eax
pf_at 0xaf85
l_kernel_0002b6a3: mov [esp],esi
pf_at 0xaf88
l_kernel_0002b6a6: call 0x20ccf
pf_at 0xaf8d
l_kernel_0002b6ab: mov [esp],eax
pf_at 0xaf90
l_kernel_0002b6ae: mov ecx,edi
pf_at 0xaf92
l_kernel_0002b6b0: mov edx,esi
pf_at 0xaf94
l_kernel_0002b6b2: call 0x2b6be
pf_at 0xaf99
l_kernel_0002b6b7: add esp,byte +0x10
pf_at 0xaf9c
l_kernel_0002b6ba: pop esi
pf_at 0xaf9d
l_kernel_0002b6bb: pop edi
pf_at 0xaf9e
l_kernel_0002b6bc: pop ebp
pf_at 0xaf9f
l_kernel_0002b6bd: ret
pf_at 0xafa0
l_kernel_0002b6be: test ecx,ecx
pf_at 0xafa2
l_kernel_0002b6c0: jz short 0x2b6f3
pf_at 0xafa4
l_kernel_0002b6c2: push ebp
pf_at 0xafa5
l_kernel_0002b6c3: mov ebp,esp
pf_at 0xafa7
l_kernel_0002b6c5: push ebx
pf_at 0xafa8
l_kernel_0002b6c6: push edi
pf_at 0xafa9
l_kernel_0002b6c7: push esi
pf_at 0xafaa
l_kernel_0002b6c8: sub esp,byte +0xc
pf_at 0xafad
l_kernel_0002b6cb: mov edi,edx
pf_at 0xafaf
l_kernel_0002b6cd: mov esi,ecx
pf_at 0xafb1
l_kernel_0002b6cf: mov ebx,[ebp+0x8]
pf_at 0xafb4
l_kernel_0002b6d2: mov eax,[ecx]
pf_at 0xafb6
l_kernel_0002b6d4: mov edx,[ecx+0x4]
pf_at 0xafb9
l_kernel_0002b6d7: lea ecx,[ebx+eax]
pf_at 0xafbc
l_kernel_0002b6da: inc ecx
pf_at 0xafbd
l_kernel_0002b6db: cmp edx,ecx
pf_at 0xafbf
l_kernel_0002b6dd: jnc short 0x2b716
pf_at 0xafc1
l_kernel_0002b6df: test edx,edx
pf_at 0xafc3
l_kernel_0002b6e1: push byte +0x20
pf_at 0xafc5
l_kernel_0002b6e3: pop ebx
pf_at 0xafc6
l_kernel_0002b6e4: cmovnz ebx,edx
pf_at 0xafc9
l_kernel_0002b6e7: cmp ebx,ecx
pf_at 0xafcb
l_kernel_0002b6e9: jnc short 0x2b6f8
pf_at 0xafcd
l_kernel_0002b6eb: test ebx,ebx
pf_at 0xafcf
l_kernel_0002b6ed: js short 0x2b6f6
pf_at 0xafd1
l_kernel_0002b6ef: add ebx,ebx
pf_at 0xafd3
l_kernel_0002b6f1: jmp short 0x2b6e7
pf_at 0xafd5
l_kernel_0002b6f3: xor eax,eax
pf_at 0xafd7
l_kernel_0002b6f5: ret
pf_at 0xafd8
l_kernel_0002b6f6: mov ebx,ecx
pf_at 0xafda
l_kernel_0002b6f8: sub esp,byte +0x8
pf_at 0xafdd
l_kernel_0002b6fb: push ebx
pf_at 0xafde
l_kernel_0002b6fc: push dword [esi+0x8]
pf_at 0xafe1
l_kernel_0002b6ff: call 0x20b68
pf_at 0xafe6
l_kernel_0002b704: add esp,byte +0x10
pf_at 0xafe9
l_kernel_0002b707: test eax,eax
pf_at 0xafeb
l_kernel_0002b709: jz short 0x2b74c
pf_at 0xafed
l_kernel_0002b70b: mov [esi+0x8],eax
pf_at 0xaff0
l_kernel_0002b70e: mov [esi+0x4],ebx
pf_at 0xaff3
l_kernel_0002b711: mov eax,[esi]
pf_at 0xaff5
l_kernel_0002b713: mov ebx,[ebp+0x8]
pf_at 0xaff8
l_kernel_0002b716: test ebx,ebx
pf_at 0xaffa
l_kernel_0002b718: setz cl
pf_at 0xaffd
l_kernel_0002b71b: test edi,edi
pf_at 0xafff
l_kernel_0002b71d: setz dl
pf_at 0xb002
l_kernel_0002b720: or dl,cl
pf_at 0xb004
l_kernel_0002b722: jnz short 0x2b737
pf_at 0xb006
l_kernel_0002b724: add eax,[esi+0x8]
pf_at 0xb009
l_kernel_0002b727: sub esp,byte +0x4
pf_at 0xb00c
l_kernel_0002b72a: push ebx
pf_at 0xb00d
l_kernel_0002b72b: push edi
pf_at 0xb00e
l_kernel_0002b72c: push eax
pf_at 0xb00f
l_kernel_0002b72d: call 0x20c1d
pf_at 0xb014
l_kernel_0002b732: add esp,byte +0x10
pf_at 0xb017
l_kernel_0002b735: mov eax,[esi]
pf_at 0xb019
l_kernel_0002b737: add eax,ebx
pf_at 0xb01b
l_kernel_0002b739: mov [esi],eax
pf_at 0xb01d
l_kernel_0002b73b: mov ecx,[esi+0x8]
pf_at 0xb020
l_kernel_0002b73e: mov byte [ecx+eax],0x0
pf_at 0xb024
l_kernel_0002b742: mov al,0x1
pf_at 0xb026
l_kernel_0002b744: add esp,byte +0xc
pf_at 0xb029
l_kernel_0002b747: pop esi
pf_at 0xb02a
l_kernel_0002b748: pop edi
pf_at 0xb02b
l_kernel_0002b749: pop ebx
pf_at 0xb02c
l_kernel_0002b74a: pop ebp
pf_at 0xb02d
l_kernel_0002b74b: ret
pf_at 0xb02e
l_kernel_0002b74c: xor eax,eax
pf_at 0xb030
l_kernel_0002b74e: jmp short 0x2b744
pf_at 0xb032
l_kernel_0002b750: push ebp
pf_at 0xb033
l_kernel_0002b751: mov ebp,esp
pf_at 0xb035
l_kernel_0002b753: push ebx
pf_at 0xb036
l_kernel_0002b754: push edi
pf_at 0xb037
l_kernel_0002b755: push esi
pf_at 0xb038
l_kernel_0002b756: sub esp,byte +0xc
pf_at 0xb03b
l_kernel_0002b759: mov ebx,ecx
pf_at 0xb03d
l_kernel_0002b75b: test ecx,ecx
pf_at 0xb03f
l_kernel_0002b75d: setz al
pf_at 0xb042
l_kernel_0002b760: mov [ebp-0x10],edx
pf_at 0xb045
l_kernel_0002b763: test edx,edx
pf_at 0xb047
l_kernel_0002b765: setz cl
pf_at 0xb04a
l_kernel_0002b768: xor edi,edi
pf_at 0xb04c
l_kernel_0002b76a: dec edi
pf_at 0xb04d
l_kernel_0002b76b: or cl,al
pf_at 0xb04f
l_kernel_0002b76d: jnz short 0x2b79e
pf_at 0xb051
l_kernel_0002b76f: xor esi,esi
pf_at 0xb053
l_kernel_0002b771: xor edi,edi
pf_at 0xb055
l_kernel_0002b773: cmp edi,[ebx+0x4]
pf_at 0xb058
l_kernel_0002b776: jnc short 0x2b79b
pf_at 0xb05a
l_kernel_0002b778: mov eax,[ebx+0xc]
pf_at 0xb05d
l_kernel_0002b77b: mov eax,[eax+esi]
pf_at 0xb060
l_kernel_0002b77e: test eax,eax
pf_at 0xb062
l_kernel_0002b780: jz short 0x2b795
pf_at 0xb064
l_kernel_0002b782: sub esp,byte +0x8
pf_at 0xb067
l_kernel_0002b785: push dword [ebp-0x10]
pf_at 0xb06a
l_kernel_0002b788: push eax
pf_at 0xb06b
l_kernel_0002b789: call 0x20cea
pf_at 0xb070
l_kernel_0002b78e: add esp,byte +0x10
pf_at 0xb073
l_kernel_0002b791: test eax,eax
pf_at 0xb075
l_kernel_0002b793: jz short 0x2b79e
pf_at 0xb077
l_kernel_0002b795: inc edi
pf_at 0xb078
l_kernel_0002b796: add esi,byte +0x24
pf_at 0xb07b
l_kernel_0002b799: jmp short 0x2b773
pf_at 0xb07d
l_kernel_0002b79b: xor edi,edi
pf_at 0xb07f
l_kernel_0002b79d: dec edi
pf_at 0xb080
l_kernel_0002b79e: mov eax,edi
pf_at 0xb082
l_kernel_0002b7a0: add esp,byte +0xc
pf_at 0xb085
l_kernel_0002b7a3: pop esi
pf_at 0xb086
l_kernel_0002b7a4: pop edi
pf_at 0xb087
l_kernel_0002b7a5: pop ebx
pf_at 0xb088
l_kernel_0002b7a6: pop ebp
pf_at 0xb089
l_kernel_0002b7a7: ret
pf_at 0xb08a
l_kernel_0002b7a8: push ebp
pf_at 0xb08b
l_kernel_0002b7a9: mov ebp,esp
pf_at 0xb08d
l_kernel_0002b7ab: push ebx
pf_at 0xb08e
l_kernel_0002b7ac: push edi
pf_at 0xb08f
l_kernel_0002b7ad: push esi
pf_at 0xb090
l_kernel_0002b7ae: sub esp,byte +0x1c
pf_at 0xb093
l_kernel_0002b7b1: mov [ebp-0x18],edx
pf_at 0xb096
l_kernel_0002b7b4: xor ebx,ebx
pf_at 0xb098
l_kernel_0002b7b6: cmp dword [ebp+0x8],byte +0x0
pf_at 0xb09c
l_kernel_0002b7ba: jz near 0x2b860
pf_at 0xb0a2
l_kernel_0002b7c0: mov esi,ecx
pf_at 0xb0a4
l_kernel_0002b7c2: mov eax,[ebp+0x8]
pf_at 0xb0a7
l_kernel_0002b7c5: mov byte [eax],0x0
pf_at 0xb0aa
l_kernel_0002b7c8: xor edi,edi
pf_at 0xb0ac
l_kernel_0002b7ca: cmp [ebp-0x18],edi
pf_at 0xb0af
l_kernel_0002b7cd: jz near 0x2b85a
pf_at 0xb0b5
l_kernel_0002b7d3: mov [ebp-0x14],edi
pf_at 0xb0b8
l_kernel_0002b7d6: and dword [ebp-0x10],byte +0x0
pf_at 0xb0bc
l_kernel_0002b7da: mov ecx,esi
pf_at 0xb0be
l_kernel_0002b7dc: lea edx,[ebp-0x10]
pf_at 0xb0c1
l_kernel_0002b7df: call 0x2b32b
pf_at 0xb0c6
l_kernel_0002b7e4: test al,al
pf_at 0xb0c8
l_kernel_0002b7e6: jz short 0x2b85e
pf_at 0xb0ca
l_kernel_0002b7e8: cmp dword [ebp-0x14],byte +0x0
pf_at 0xb0ce
l_kernel_0002b7ec: mov [ebp-0x1c],esi
pf_at 0xb0d1
l_kernel_0002b7ef: jz short 0x2b803
pf_at 0xb0d3
l_kernel_0002b7f1: cmp ebx,0x1fe
pf_at 0xb0d9
l_kernel_0002b7f7: ja short 0x2b803
pf_at 0xb0db
l_kernel_0002b7f9: mov eax,[ebp+0x8]
pf_at 0xb0de
l_kernel_0002b7fc: mov word [eax+ebx],0x20
pf_at 0xb0e4
l_kernel_0002b802: inc ebx
pf_at 0xb0e5
l_kernel_0002b803: mov eax,[ebp-0x10]
pf_at 0xb0e8
l_kernel_0002b806: mov [esp],eax
pf_at 0xb0eb
l_kernel_0002b809: call 0x20ccf
pf_at 0xb0f0
l_kernel_0002b80e: lea ecx,[eax+ebx]
pf_at 0xb0f3
l_kernel_0002b811: mov esi,0x1ff
pf_at 0xb0f8
l_kernel_0002b816: sub esi,ebx
pf_at 0xb0fa
l_kernel_0002b818: cmp ecx,0x200
pf_at 0xb100
l_kernel_0002b81e: cmovc esi,eax
pf_at 0xb103
l_kernel_0002b821: mov edi,[ebp+0x8]
pf_at 0xb106
l_kernel_0002b824: lea eax,[edi+ebx]
pf_at 0xb109
l_kernel_0002b827: mov ecx,[ebp-0x10]
pf_at 0xb10c
l_kernel_0002b82a: mov [esp+0x8],esi
pf_at 0xb110
l_kernel_0002b82e: mov [esp+0x4],ecx
pf_at 0xb114
l_kernel_0002b832: mov [esp],eax
pf_at 0xb117
l_kernel_0002b835: call 0x20c1d
pf_at 0xb11c
l_kernel_0002b83a: add ebx,esi
pf_at 0xb11e
l_kernel_0002b83c: mov byte [edi+ebx],0x0
pf_at 0xb122
l_kernel_0002b840: mov eax,[ebp-0x10]
pf_at 0xb125
l_kernel_0002b843: mov [esp],eax
pf_at 0xb128
l_kernel_0002b846: call 0x20aee
pf_at 0xb12d
l_kernel_0002b84b: mov edi,[ebp-0x14]
pf_at 0xb130
l_kernel_0002b84e: inc edi
pf_at 0xb131
l_kernel_0002b84f: mov esi,[ebp-0x1c]
pf_at 0xb134
l_kernel_0002b852: add esi,byte +0x20
pf_at 0xb137
l_kernel_0002b855: jmp near 0x2b7ca
pf_at 0xb13c
l_kernel_0002b85a: mov bl,0x1
pf_at 0xb13e
l_kernel_0002b85c: jmp short 0x2b860
pf_at 0xb140
l_kernel_0002b85e: xor ebx,ebx
pf_at 0xb142
l_kernel_0002b860: mov eax,ebx
pf_at 0xb144
l_kernel_0002b862: add esp,byte +0x1c
pf_at 0xb147
l_kernel_0002b865: pop esi
pf_at 0xb148
l_kernel_0002b866: pop edi
pf_at 0xb149
l_kernel_0002b867: pop ebx
pf_at 0xb14a
l_kernel_0002b868: pop ebp
pf_at 0xb14b
l_kernel_0002b869: ret
pf_at 0xb14c
l_kernel_0002b86a: push ebp
pf_at 0xb14d
l_kernel_0002b86b: mov ebp,esp
pf_at 0xb14f
l_kernel_0002b86d: push ebx
pf_at 0xb150
l_kernel_0002b86e: push edi
pf_at 0xb151
l_kernel_0002b86f: push esi
pf_at 0xb152
l_kernel_0002b870: sub esp,byte +0xc
pf_at 0xb155
l_kernel_0002b873: mov esi,[ebp+0xc]
pf_at 0xb158
l_kernel_0002b876: mov edi,[ebp+0x8]
pf_at 0xb15b
l_kernel_0002b879: cmp edi,esi
pf_at 0xb15d
l_kernel_0002b87b: jz short 0x2b8a2
pf_at 0xb15f
l_kernel_0002b87d: cmp esi,byte +0x1
pf_at 0xb162
l_kernel_0002b880: mov eax,0x2ca9c
pf_at 0xb167
l_kernel_0002b885: mov ebx,0x2d5cc
pf_at 0xb16c
l_kernel_0002b88a: cmovz ebx,eax
pf_at 0xb16f
l_kernel_0002b88d: sub esp,byte +0x8
pf_at 0xb172
l_kernel_0002b890: push ebx
pf_at 0xb173
l_kernel_0002b891: push esi
pf_at 0xb174
l_kernel_0002b892: push edx
pf_at 0xb175
l_kernel_0002b893: push dword 0x2d5b3
pf_at 0xb17a
l_kernel_0002b898: push edx
pf_at 0xb17b
l_kernel_0002b899: push ecx
pf_at 0xb17c
l_kernel_0002b89a: call 0x2609c
pf_at 0xb181
l_kernel_0002b89f: add esp,byte +0x20
pf_at 0xb184
l_kernel_0002b8a2: cmp edi,esi
pf_at 0xb186
l_kernel_0002b8a4: setz al
pf_at 0xb189
l_kernel_0002b8a7: add esp,byte +0xc
pf_at 0xb18c
l_kernel_0002b8aa: pop esi
pf_at 0xb18d
l_kernel_0002b8ab: pop edi
pf_at 0xb18e
l_kernel_0002b8ac: pop ebx
pf_at 0xb18f
l_kernel_0002b8ad: pop ebp
pf_at 0xb190
l_kernel_0002b8ae: ret
pf_at 0xb191
l_kernel_0002b8af: push ebp
pf_at 0xb192
l_kernel_0002b8b0: mov ebp,esp
pf_at 0xb194
l_kernel_0002b8b2: push ebx
pf_at 0xb195
l_kernel_0002b8b3: push esi
pf_at 0xb196
l_kernel_0002b8b4: mov eax,[ebp+0x8]
pf_at 0xb199
l_kernel_0002b8b7: test eax,eax
pf_at 0xb19b
l_kernel_0002b8b9: jz short 0x2b8e0
pf_at 0xb19d
l_kernel_0002b8bb: mov esi,[ebp+0x10]
pf_at 0xb1a0
l_kernel_0002b8be: cmp dword [ebp+0xc],byte +0x0
pf_at 0xb1a4
l_kernel_0002b8c2: setnz bl
pf_at 0xb1a7
l_kernel_0002b8c5: test esi,esi
pf_at 0xb1a9
l_kernel_0002b8c7: setnz bh
pf_at 0xb1ac
l_kernel_0002b8ca: test bl,bh
pf_at 0xb1ae
l_kernel_0002b8cc: jz short 0x2b8e0
pf_at 0xb1b0
l_kernel_0002b8ce: cmp dword [eax],byte +0x3
pf_at 0xb1b3
l_kernel_0002b8d1: jnz short 0x2b8ed
pf_at 0xb1b5
l_kernel_0002b8d3: mov eax,[eax+0xc]
pf_at 0xb1b8
l_kernel_0002b8d6: test eax,eax
pf_at 0xb1ba
l_kernel_0002b8d8: jz short 0x2b8ed
pf_at 0xb1bc
l_kernel_0002b8da: mov [esi],eax
pf_at 0xb1be
l_kernel_0002b8dc: mov al,0x1
pf_at 0xb1c0
l_kernel_0002b8de: jmp short 0x2b904
pf_at 0xb1c2
l_kernel_0002b8e0: sub esp,byte +0xc
pf_at 0xb1c5
l_kernel_0002b8e3: push byte +0x1
pf_at 0xb1c7
l_kernel_0002b8e5: push edx
pf_at 0xb1c8
l_kernel_0002b8e6: push dword 0x2d5e8
pf_at 0xb1cd
l_kernel_0002b8eb: jmp short 0x2b8f8
pf_at 0xb1cf
l_kernel_0002b8ed: sub esp,byte +0xc
pf_at 0xb1d2
l_kernel_0002b8f0: push byte +0x1
pf_at 0xb1d4
l_kernel_0002b8f2: push edx
pf_at 0xb1d5
l_kernel_0002b8f3: push dword 0x2d6ba
pf_at 0xb1da
l_kernel_0002b8f8: push edx
pf_at 0xb1db
l_kernel_0002b8f9: push ecx
pf_at 0xb1dc
l_kernel_0002b8fa: call 0x2609c
pf_at 0xb1e1
l_kernel_0002b8ff: add esp,byte +0x20
pf_at 0xb1e4
l_kernel_0002b902: xor eax,eax
pf_at 0xb1e6
l_kernel_0002b904: pop esi
pf_at 0xb1e7
l_kernel_0002b905: pop ebx
pf_at 0xb1e8
l_kernel_0002b906: pop ebp
pf_at 0xb1e9
l_kernel_0002b907: ret
pf_at 0xb1ea
l_kernel_0002b908: push ebp
pf_at 0xb1eb
l_kernel_0002b909: mov ebp,esp
pf_at 0xb1ed
l_kernel_0002b90b: push ebx
pf_at 0xb1ee
l_kernel_0002b90c: push edi
pf_at 0xb1ef
l_kernel_0002b90d: push esi
pf_at 0xb1f0
l_kernel_0002b90e: sub esp,byte +0xc
pf_at 0xb1f3
l_kernel_0002b911: mov esi,ecx
pf_at 0xb1f5
l_kernel_0002b913: test ecx,ecx
pf_at 0xb1f7
l_kernel_0002b915: setz al
pf_at 0xb1fa
l_kernel_0002b918: test edx,edx
pf_at 0xb1fc
l_kernel_0002b91a: setz cl
pf_at 0xb1ff
l_kernel_0002b91d: or cl,al
pf_at 0xb201
l_kernel_0002b91f: jnz short 0x2b939
pf_at 0xb203
l_kernel_0002b921: mov edi,edx
pf_at 0xb205
l_kernel_0002b923: mov [esp],edx
pf_at 0xb208
l_kernel_0002b926: call 0x20ccf
pf_at 0xb20d
l_kernel_0002b92b: mov ebx,eax
pf_at 0xb20f
l_kernel_0002b92d: mov [esp],esi
pf_at 0xb212
l_kernel_0002b930: call 0x20ccf
pf_at 0xb217
l_kernel_0002b935: cmp eax,ebx
pf_at 0xb219
l_kernel_0002b937: jnc short 0x2b93d
pf_at 0xb21b
l_kernel_0002b939: xor eax,eax
pf_at 0xb21d
l_kernel_0002b93b: jmp short 0x2b952
pf_at 0xb21f
l_kernel_0002b93d: mov [esp+0x8],ebx
pf_at 0xb223
l_kernel_0002b941: mov [esp+0x4],edi
pf_at 0xb227
l_kernel_0002b945: mov [esp],esi
pf_at 0xb22a
l_kernel_0002b948: call 0x20ca0
pf_at 0xb22f
l_kernel_0002b94d: test eax,eax
pf_at 0xb231
l_kernel_0002b94f: setz al
pf_at 0xb234
l_kernel_0002b952: add esp,byte +0xc
pf_at 0xb237
l_kernel_0002b955: pop esi
pf_at 0xb238
l_kernel_0002b956: pop edi
pf_at 0xb239
l_kernel_0002b957: pop ebx
pf_at 0xb23a
l_kernel_0002b958: pop ebp
pf_at 0xb23b
l_kernel_0002b959: ret
pf_at 0xb23c
l_kernel_0002b95a: push ebp
pf_at 0xb23d
l_kernel_0002b95b: mov ebp,esp
pf_at 0xb23f
l_kernel_0002b95d: push ebx
pf_at 0xb240
l_kernel_0002b95e: push edi
pf_at 0xb241
l_kernel_0002b95f: push esi
pf_at 0xb242
l_kernel_0002b960: sub esp,byte +0xc
pf_at 0xb245
l_kernel_0002b963: mov edi,edx
pf_at 0xb247
l_kernel_0002b965: mov ebx,[ebp+0x10]
pf_at 0xb24a
l_kernel_0002b968: mov eax,[ebp+0x8]
pf_at 0xb24d
l_kernel_0002b96b: test eax,eax
pf_at 0xb24f
l_kernel_0002b96d: jz short 0x2b9a2
pf_at 0xb251
l_kernel_0002b96f: mov esi,[ebp+0x14]
pf_at 0xb254
l_kernel_0002b972: cmp ebx,[ebp+0xc]
pf_at 0xb257
l_kernel_0002b975: setc dl
pf_at 0xb25a
l_kernel_0002b978: test esi,esi
pf_at 0xb25c
l_kernel_0002b97a: setnz dh
pf_at 0xb25f
l_kernel_0002b97d: test dl,dh
pf_at 0xb261
l_kernel_0002b97f: jz short 0x2b9a2
pf_at 0xb263
l_kernel_0002b981: mov edx,esi
pf_at 0xb265
l_kernel_0002b983: mov [ebp-0x14],ecx
pf_at 0xb268
l_kernel_0002b986: mov ecx,ebx
pf_at 0xb26a
l_kernel_0002b988: shl ecx,byte 0x5
pf_at 0xb26d
l_kernel_0002b98b: mov esi,[eax+ecx]
pf_at 0xb270
l_kernel_0002b98e: dec esi
pf_at 0xb271
l_kernel_0002b98f: cmp esi,byte +0x5
pf_at 0xb274
l_kernel_0002b992: ja short 0x2b9fa
pf_at 0xb276
l_kernel_0002b994: add eax,ecx
pf_at 0xb278
l_kernel_0002b996: jmp [esi*4+0x2c9ec]
pf_at 0xb27f
l_kernel_0002b99d: mov eax,[eax+0x4]
pf_at 0xb282
l_kernel_0002b9a0: jmp short 0x2b9da
pf_at 0xb284
l_kernel_0002b9a2: inc ebx
pf_at 0xb285
l_kernel_0002b9a3: sub esp,byte +0xc
pf_at 0xb288
l_kernel_0002b9a6: push ebx
pf_at 0xb289
l_kernel_0002b9a7: push edi
pf_at 0xb28a
l_kernel_0002b9a8: push dword 0x2d5e8
pf_at 0xb28f
l_kernel_0002b9ad: push edi
pf_at 0xb290
l_kernel_0002b9ae: push ecx
pf_at 0xb291
l_kernel_0002b9af: call 0x2609c
pf_at 0xb296
l_kernel_0002b9b4: add esp,byte +0x20
pf_at 0xb299
l_kernel_0002b9b7: xor eax,eax
pf_at 0xb29b
l_kernel_0002b9b9: jmp short 0x2b9de
pf_at 0xb29d
l_kernel_0002b9bb: fld dword [eax+0x8]
pf_at 0xb2a0
l_kernel_0002b9be: fnstcw [ebp-0xe]
pf_at 0xb2a3
l_kernel_0002b9c1: movzx eax,word [ebp-0xe]
pf_at 0xb2a7
l_kernel_0002b9c5: or eax,0xc00
pf_at 0xb2ac
l_kernel_0002b9ca: mov [ebp-0x10],ax
pf_at 0xb2b0
l_kernel_0002b9ce: fldcw [ebp-0x10]
pf_at 0xb2b3
l_kernel_0002b9d1: fistp dword [ebp-0x18]
pf_at 0xb2b6
l_kernel_0002b9d4: fldcw [ebp-0xe]
pf_at 0xb2b9
l_kernel_0002b9d7: mov eax,[ebp-0x18]
pf_at 0xb2bc
l_kernel_0002b9da: mov [edx],eax
pf_at 0xb2be
l_kernel_0002b9dc: mov al,0x1
pf_at 0xb2c0
l_kernel_0002b9de: add esp,byte +0xc
pf_at 0xb2c3
l_kernel_0002b9e1: pop esi
pf_at 0xb2c4
l_kernel_0002b9e2: pop edi
pf_at 0xb2c5
l_kernel_0002b9e3: pop ebx
pf_at 0xb2c6
l_kernel_0002b9e4: pop ebp
pf_at 0xb2c7
l_kernel_0002b9e5: ret
pf_at 0xb2c8
l_kernel_0002b9e6: mov ecx,[eax+0xc]
pf_at 0xb2cb
l_kernel_0002b9e9: test ecx,ecx
pf_at 0xb2cd
l_kernel_0002b9eb: jz short 0x2b9fa
pf_at 0xb2cf
l_kernel_0002b9ed: call 0x286b0
pf_at 0xb2d4
l_kernel_0002b9f2: mov ecx,eax
pf_at 0xb2d6
l_kernel_0002b9f4: mov al,0x1
pf_at 0xb2d8
l_kernel_0002b9f6: test cl,cl
pf_at 0xb2da
l_kernel_0002b9f8: jnz short 0x2b9de
pf_at 0xb2dc
l_kernel_0002b9fa: inc ebx
pf_at 0xb2dd
l_kernel_0002b9fb: sub esp,byte +0xc
pf_at 0xb2e0
l_kernel_0002b9fe: push ebx
pf_at 0xb2e1
l_kernel_0002b9ff: push edi
pf_at 0xb2e2
l_kernel_0002ba00: push dword 0x2d7c4
pf_at 0xb2e7
l_kernel_0002ba05: push edi
pf_at 0xb2e8
l_kernel_0002ba06: push dword [ebp-0x14]
pf_at 0xb2eb
l_kernel_0002ba09: jmp short 0x2b9af
pf_at 0xb2ed
l_kernel_0002ba0b: push ebp
pf_at 0xb2ee
l_kernel_0002ba0c: mov ebp,esp
pf_at 0xb2f0
l_kernel_0002ba0e: push ebx
pf_at 0xb2f1
l_kernel_0002ba0f: push edi
pf_at 0xb2f2
l_kernel_0002ba10: push esi
pf_at 0xb2f3
l_kernel_0002ba11: sub esp,byte +0xc
pf_at 0xb2f6
l_kernel_0002ba14: mov ebx,ecx
pf_at 0xb2f8
l_kernel_0002ba16: mov esi,[ebp+0x8]
pf_at 0xb2fb
l_kernel_0002ba19: test ecx,ecx
pf_at 0xb2fd
l_kernel_0002ba1b: setz al
pf_at 0xb300
l_kernel_0002ba1e: test edx,edx
pf_at 0xb302
l_kernel_0002ba20: setz cl
pf_at 0xb305
l_kernel_0002ba23: or cl,al
pf_at 0xb307
l_kernel_0002ba25: test esi,esi
pf_at 0xb309
l_kernel_0002ba27: setz al
pf_at 0xb30c
l_kernel_0002ba2a: or al,cl
pf_at 0xb30e
l_kernel_0002ba2c: jnz short 0x2baaa
pf_at 0xb310
l_kernel_0002ba2e: mov edi,edx
pf_at 0xb312
l_kernel_0002ba30: cmp dword [ebx],byte +0x3
pf_at 0xb315
l_kernel_0002ba33: jnz short 0x2ba86
pf_at 0xb317
l_kernel_0002ba35: cmp dword [edi],byte +0x1
pf_at 0xb31a
l_kernel_0002ba38: jnz short 0x2baaa
pf_at 0xb31c
l_kernel_0002ba3a: cmp dword [esi],byte +0x3
pf_at 0xb31f
l_kernel_0002ba3d: jnz short 0x2baaa
pf_at 0xb321
l_kernel_0002ba3f: mov eax,[ebx+0xc]
pf_at 0xb324
l_kernel_0002ba42: test eax,eax
pf_at 0xb326
l_kernel_0002ba44: jz short 0x2baaa
pf_at 0xb328
l_kernel_0002ba46: cmp dword [esi+0xc],byte +0x0
pf_at 0xb32c
l_kernel_0002ba4a: jz short 0x2baaa
pf_at 0xb32e
l_kernel_0002ba4c: mov [esp],eax
pf_at 0xb331
l_kernel_0002ba4f: call 0x20ccf
pf_at 0xb336
l_kernel_0002ba54: mov ecx,eax
pf_at 0xb338
l_kernel_0002ba56: mov edx,[edi+0x4]
pf_at 0xb33b
l_kernel_0002ba59: xor eax,eax
pf_at 0xb33d
l_kernel_0002ba5b: test edx,edx
pf_at 0xb33f
l_kernel_0002ba5d: jng short 0x2baac
pf_at 0xb341
l_kernel_0002ba5f: cmp edx,ecx
pf_at 0xb343
l_kernel_0002ba61: ja short 0x2baac
pf_at 0xb345
l_kernel_0002ba63: mov eax,[esi+0xc]
pf_at 0xb348
l_kernel_0002ba66: mov [esp],eax
pf_at 0xb34b
l_kernel_0002ba69: call 0x20ccf
pf_at 0xb350
l_kernel_0002ba6e: cmp eax,byte +0x1
pf_at 0xb353
l_kernel_0002ba71: jnz short 0x2baaa
pf_at 0xb355
l_kernel_0002ba73: mov eax,[esi+0xc]
pf_at 0xb358
l_kernel_0002ba76: mov al,[eax]
pf_at 0xb35a
l_kernel_0002ba78: mov ecx,[ebx+0xc]
pf_at 0xb35d
l_kernel_0002ba7b: mov edx,[edi+0x4]
pf_at 0xb360
l_kernel_0002ba7e: mov [ecx+edx-0x1],al
pf_at 0xb364
l_kernel_0002ba82: mov al,0x1
pf_at 0xb366
l_kernel_0002ba84: jmp short 0x2baac
pf_at 0xb368
l_kernel_0002ba86: movzx eax,byte [ebp+0xc]
pf_at 0xb36c
l_kernel_0002ba8a: mov [esp],eax
pf_at 0xb36f
l_kernel_0002ba8d: mov ecx,ebx
pf_at 0xb371
l_kernel_0002ba8f: mov edx,edi
pf_at 0xb373
l_kernel_0002ba91: call 0x2c11f
pf_at 0xb378
l_kernel_0002ba96: test eax,eax
pf_at 0xb37a
l_kernel_0002ba98: jz short 0x2baaa
pf_at 0xb37c
l_kernel_0002ba9a: mov ecx,eax
pf_at 0xb37e
l_kernel_0002ba9c: mov edx,esi
pf_at 0xb380
l_kernel_0002ba9e: add esp,byte +0xc
pf_at 0xb383
l_kernel_0002baa1: pop esi
pf_at 0xb384
l_kernel_0002baa2: pop edi
pf_at 0xb385
l_kernel_0002baa3: pop ebx
pf_at 0xb386
l_kernel_0002baa4: pop ebp
pf_at 0xb387
l_kernel_0002baa5: jmp near 0x25048
pf_at 0xb38c
l_kernel_0002baaa: xor eax,eax
pf_at 0xb38e
l_kernel_0002baac: add esp,byte +0xc
pf_at 0xb391
l_kernel_0002baaf: pop esi
pf_at 0xb392
l_kernel_0002bab0: pop edi
pf_at 0xb393
l_kernel_0002bab1: pop ebx
pf_at 0xb394
l_kernel_0002bab2: pop ebp
pf_at 0xb395
l_kernel_0002bab3: ret
pf_at 0xb396
l_kernel_0002bab4: push ebp
pf_at 0xb397
l_kernel_0002bab5: mov ebp,esp
pf_at 0xb399
l_kernel_0002bab7: push edi
pf_at 0xb39a
l_kernel_0002bab8: push esi
pf_at 0xb39b
l_kernel_0002bab9: sub esp,byte +0x10
pf_at 0xb39e
l_kernel_0002babc: mov esi,edx
pf_at 0xb3a0
l_kernel_0002babe: test ecx,ecx
pf_at 0xb3a2
l_kernel_0002bac0: setz al
pf_at 0xb3a5
l_kernel_0002bac3: test edx,edx
pf_at 0xb3a7
l_kernel_0002bac5: setz dl
pf_at 0xb3aa
l_kernel_0002bac8: or dl,al
pf_at 0xb3ac
l_kernel_0002baca: jnz near 0x2bb6a
pf_at 0xb3b2
l_kernel_0002bad0: mov edx,[ecx]
pf_at 0xb3b4
l_kernel_0002bad2: cmp edx,byte +0x5
pf_at 0xb3b7
l_kernel_0002bad5: ja short 0x2bb0b
pf_at 0xb3b9
l_kernel_0002bad7: push byte +0x26
pf_at 0xb3bb
l_kernel_0002bad9: pop edi
pf_at 0xb3bc
l_kernel_0002bada: bt edi,edx
pf_at 0xb3bf
l_kernel_0002badd: jnc short 0x2bb0b
pf_at 0xb3c1
l_kernel_0002badf: mov eax,[esi]
pf_at 0xb3c3
l_kernel_0002bae1: cmp eax,byte +0x5
pf_at 0xb3c6
l_kernel_0002bae4: ja short 0x2bb0d
pf_at 0xb3c8
l_kernel_0002bae6: bt edi,eax
pf_at 0xb3cb
l_kernel_0002bae9: jnc short 0x2bb0d
pf_at 0xb3cd
l_kernel_0002baeb: call 0x2c1d8
pf_at 0xb3d2
l_kernel_0002baf0: fstp dword [ebp-0xc]
pf_at 0xb3d5
l_kernel_0002baf3: mov ecx,esi
pf_at 0xb3d7
l_kernel_0002baf5: call 0x2c1d8
pf_at 0xb3dc
l_kernel_0002bafa: fld dword [ebp-0xc]
pf_at 0xb3df
l_kernel_0002bafd: fucomip st1
pf_at 0xb3e1
l_kernel_0002baff: fstp st0
pf_at 0xb3e3
l_kernel_0002bb01: setpo cl
pf_at 0xb3e6
l_kernel_0002bb04: setz al
pf_at 0xb3e9
l_kernel_0002bb07: and al,cl
pf_at 0xb3eb
l_kernel_0002bb09: jmp short 0x2bb6c
pf_at 0xb3ed
l_kernel_0002bb0b: mov eax,[esi]
pf_at 0xb3ef
l_kernel_0002bb0d: cmp edx,eax
pf_at 0xb3f1
l_kernel_0002bb0f: jnz short 0x2bb6a
pf_at 0xb3f3
l_kernel_0002bb11: cmp edx,byte +0x8
pf_at 0xb3f6
l_kernel_0002bb14: ja short 0x2bb40
pf_at 0xb3f8
l_kernel_0002bb16: mov al,0x1
pf_at 0xb3fa
l_kernel_0002bb18: jmp [edx*4+0x2ca04]
pf_at 0xb401
l_kernel_0002bb1f: mov eax,[ecx+0xc]
pf_at 0xb404
l_kernel_0002bb22: test eax,eax
pf_at 0xb406
l_kernel_0002bb24: mov ecx,0x2ca9c
pf_at 0xb40b
l_kernel_0002bb29: cmovz eax,ecx
pf_at 0xb40e
l_kernel_0002bb2c: mov edx,[esi+0xc]
pf_at 0xb411
l_kernel_0002bb2f: test edx,edx
pf_at 0xb413
l_kernel_0002bb31: cmovz edx,ecx
pf_at 0xb416
l_kernel_0002bb34: sub esp,byte +0x8
pf_at 0xb419
l_kernel_0002bb37: push edx
pf_at 0xb41a
l_kernel_0002bb38: push eax
pf_at 0xb41b
l_kernel_0002bb39: call 0x20cea
pf_at 0xb420
l_kernel_0002bb3e: jmp short 0x2bb63
pf_at 0xb422
l_kernel_0002bb40: mov eax,[ecx+0x4]
pf_at 0xb425
l_kernel_0002bb43: cmp eax,[esi+0x4]
pf_at 0xb428
l_kernel_0002bb46: jmp short 0x2bb81
pf_at 0xb42a
l_kernel_0002bb48: mov edx,[ecx+0x14]
pf_at 0xb42d
l_kernel_0002bb4b: cmp edx,[esi+0x14]
pf_at 0xb430
l_kernel_0002bb4e: jnz short 0x2bb6a
pf_at 0xb432
l_kernel_0002bb50: test edx,edx
pf_at 0xb434
l_kernel_0002bb52: jz short 0x2bb6c
pf_at 0xb436
l_kernel_0002bb54: sub esp,byte +0x4
pf_at 0xb439
l_kernel_0002bb57: push edx
pf_at 0xb43a
l_kernel_0002bb58: push dword [esi+0x10]
pf_at 0xb43d
l_kernel_0002bb5b: push dword [ecx+0x10]
pf_at 0xb440
l_kernel_0002bb5e: call 0x20ca0
pf_at 0xb445
l_kernel_0002bb63: add esp,byte +0x10
pf_at 0xb448
l_kernel_0002bb66: test eax,eax
pf_at 0xb44a
l_kernel_0002bb68: jmp short 0x2bb81
pf_at 0xb44c
l_kernel_0002bb6a: xor eax,eax
pf_at 0xb44e
l_kernel_0002bb6c: add esp,byte +0x10
pf_at 0xb451
l_kernel_0002bb6f: pop esi
pf_at 0xb452
l_kernel_0002bb70: pop edi
pf_at 0xb453
l_kernel_0002bb71: pop ebp
pf_at 0xb454
l_kernel_0002bb72: ret
pf_at 0xb455
l_kernel_0002bb73: mov eax,[ecx+0x18]
pf_at 0xb458
l_kernel_0002bb76: cmp eax,[esi+0x18]
pf_at 0xb45b
l_kernel_0002bb79: jmp short 0x2bb81
pf_at 0xb45d
l_kernel_0002bb7b: mov eax,[ecx+0x1c]
pf_at 0xb460
l_kernel_0002bb7e: cmp eax,[esi+0x1c]
pf_at 0xb463
l_kernel_0002bb81: setz al
pf_at 0xb466
l_kernel_0002bb84: jmp short 0x2bb6c
pf_at 0xb468
l_kernel_0002bb86: push ebp
pf_at 0xb469
l_kernel_0002bb87: mov ebp,esp
pf_at 0xb46b
l_kernel_0002bb89: push ebx
pf_at 0xb46c
l_kernel_0002bb8a: push edi
pf_at 0xb46d
l_kernel_0002bb8b: push esi
pf_at 0xb46e
l_kernel_0002bb8c: sub esp,byte +0xc
pf_at 0xb471
l_kernel_0002bb8f: mov edi,edx
pf_at 0xb473
l_kernel_0002bb91: mov [ebp-0x10],ecx
pf_at 0xb476
l_kernel_0002bb94: mov ebx,[ebp+0x10]
pf_at 0xb479
l_kernel_0002bb97: mov ecx,[ebp+0x8]
pf_at 0xb47c
l_kernel_0002bb9a: mov esi,0x2d5e8
pf_at 0xb481
l_kernel_0002bb9f: test ecx,ecx
pf_at 0xb483
l_kernel_0002bba1: jz short 0x2bbce
pf_at 0xb485
l_kernel_0002bba3: mov edx,[ebp+0x14]
pf_at 0xb488
l_kernel_0002bba6: cmp ebx,[ebp+0xc]
pf_at 0xb48b
l_kernel_0002bba9: setnc al
pf_at 0xb48e
l_kernel_0002bbac: test edx,edx
pf_at 0xb490
l_kernel_0002bbae: setz ah
pf_at 0xb493
l_kernel_0002bbb1: or ah,al
pf_at 0xb495
l_kernel_0002bbb3: jnz short 0x2bbce
pf_at 0xb497
l_kernel_0002bbb5: mov eax,ebx
pf_at 0xb499
l_kernel_0002bbb7: shl eax,byte 0x5
pf_at 0xb49c
l_kernel_0002bbba: add ecx,eax
pf_at 0xb49e
l_kernel_0002bbbc: call 0x2bc43
pf_at 0xb4a3
l_kernel_0002bbc1: mov ecx,eax
pf_at 0xb4a5
l_kernel_0002bbc3: mov esi,0x2d602
pf_at 0xb4aa
l_kernel_0002bbc8: mov al,0x1
pf_at 0xb4ac
l_kernel_0002bbca: test cl,cl
pf_at 0xb4ae
l_kernel_0002bbcc: jnz short 0x2bbe3
pf_at 0xb4b0
l_kernel_0002bbce: inc ebx
pf_at 0xb4b1
l_kernel_0002bbcf: sub esp,byte +0xc
pf_at 0xb4b4
l_kernel_0002bbd2: push ebx
pf_at 0xb4b5
l_kernel_0002bbd3: push edi
pf_at 0xb4b6
l_kernel_0002bbd4: push esi
pf_at 0xb4b7
l_kernel_0002bbd5: push edi
pf_at 0xb4b8
l_kernel_0002bbd6: push dword [ebp-0x10]
pf_at 0xb4bb
l_kernel_0002bbd9: call 0x2609c
pf_at 0xb4c0
l_kernel_0002bbde: add esp,byte +0x20
pf_at 0xb4c3
l_kernel_0002bbe1: xor eax,eax
pf_at 0xb4c5
l_kernel_0002bbe3: add esp,byte +0xc
pf_at 0xb4c8
l_kernel_0002bbe6: pop esi
pf_at 0xb4c9
l_kernel_0002bbe7: pop edi
pf_at 0xb4ca
l_kernel_0002bbe8: pop ebx
pf_at 0xb4cb
l_kernel_0002bbe9: pop ebp
pf_at 0xb4cc
l_kernel_0002bbea: ret
pf_at 0xb4cd
l_kernel_0002bbeb: push ebp
pf_at 0xb4ce
l_kernel_0002bbec: mov ebp,esp
pf_at 0xb4d0
l_kernel_0002bbee: push edi
pf_at 0xb4d1
l_kernel_0002bbef: push esi
pf_at 0xb4d2
l_kernel_0002bbf0: sub esp,byte +0x20
pf_at 0xb4d5
l_kernel_0002bbf3: mov edi,[ebp+0x10]
pf_at 0xb4d8
l_kernel_0002bbf6: mov esi,[ebp+0xc]
pf_at 0xb4db
l_kernel_0002bbf9: mov eax,[ebp+0x8]
pf_at 0xb4de
l_kernel_0002bbfc: cmp esi,byte +0x4
pf_at 0xb4e1
l_kernel_0002bbff: jz short 0x2bc15
pf_at 0xb4e3
l_kernel_0002bc01: cmp esi,byte +0x2
pf_at 0xb4e6
l_kernel_0002bc04: jz short 0x2bc10
pf_at 0xb4e8
l_kernel_0002bc06: cmp esi,byte +0x1
pf_at 0xb4eb
l_kernel_0002bc09: jnz short 0x2bc2a
pf_at 0xb4ed
l_kernel_0002bc0b: movzx edx,byte [eax]
pf_at 0xb4f0
l_kernel_0002bc0e: jmp short 0x2bc17
pf_at 0xb4f2
l_kernel_0002bc10: movzx edx,word [eax]
pf_at 0xb4f5
l_kernel_0002bc13: jmp short 0x2bc17
pf_at 0xb4f7
l_kernel_0002bc15: mov edx,[eax]
pf_at 0xb4f9
l_kernel_0002bc17: lea esi,[ebp-0x28]
pf_at 0xb4fc
l_kernel_0002bc1a: mov ecx,esi
pf_at 0xb4fe
l_kernel_0002bc1c: call 0x28508
pf_at 0xb503
l_kernel_0002bc21: push byte +0x8
pf_at 0xb505
l_kernel_0002bc23: pop ecx
pf_at 0xb506
l_kernel_0002bc24: rep movsd
pf_at 0xb508
l_kernel_0002bc26: mov al,0x1
pf_at 0xb50a
l_kernel_0002bc28: jmp short 0x2bc3c
pf_at 0xb50c
l_kernel_0002bc2a: push edx
pf_at 0xb50d
l_kernel_0002bc2b: push dword 0x2d635
pf_at 0xb512
l_kernel_0002bc30: push edx
pf_at 0xb513
l_kernel_0002bc31: push ecx
pf_at 0xb514
l_kernel_0002bc32: call 0x2609c
pf_at 0xb519
l_kernel_0002bc37: add esp,byte +0x10
pf_at 0xb51c
l_kernel_0002bc3a: xor eax,eax
pf_at 0xb51e
l_kernel_0002bc3c: add esp,byte +0x20
pf_at 0xb521
l_kernel_0002bc3f: pop esi
pf_at 0xb522
l_kernel_0002bc40: pop edi
pf_at 0xb523
l_kernel_0002bc41: pop ebp
pf_at 0xb524
l_kernel_0002bc42: ret
pf_at 0xb525
l_kernel_0002bc43: push ebp
pf_at 0xb526
l_kernel_0002bc44: mov ebp,esp
pf_at 0xb528
l_kernel_0002bc46: push ebx
pf_at 0xb529
l_kernel_0002bc47: push edi
pf_at 0xb52a
l_kernel_0002bc48: push esi
pf_at 0xb52b
l_kernel_0002bc49: sub esp,0x12c
pf_at 0xb531
l_kernel_0002bc4f: mov ebx,edx
pf_at 0xb533
l_kernel_0002bc51: test ecx,ecx
pf_at 0xb535
l_kernel_0002bc53: setz al
pf_at 0xb538
l_kernel_0002bc56: test edx,edx
pf_at 0xb53a
l_kernel_0002bc58: setz dl
pf_at 0xb53d
l_kernel_0002bc5b: or dl,al
pf_at 0xb53f
l_kernel_0002bc5d: jnz near 0x2bdc5
pf_at 0xb545
l_kernel_0002bc63: mov edx,[ecx]
pf_at 0xb547
l_kernel_0002bc65: xor eax,eax
pf_at 0xb549
l_kernel_0002bc67: lea esi,[edx-0x1]
pf_at 0xb54c
l_kernel_0002bc6a: cmp esi,byte +0x5
pf_at 0xb54f
l_kernel_0002bc6d: ja near 0x2bdc7
pf_at 0xb555
l_kernel_0002bc73: jmp [esi*4+0x2ca28]
pf_at 0xb55c
l_kernel_0002bc7a: mov eax,[ecx+0x4]
pf_at 0xb55f
l_kernel_0002bc7d: test eax,eax
pf_at 0xb561
l_kernel_0002bc7f: jns near 0x2bd20
pf_at 0xb567
l_kernel_0002bc85: cmp edx,byte +0x3
pf_at 0xb56a
l_kernel_0002bc88: jz short 0x2bca7
pf_at 0xb56c
l_kernel_0002bc8a: cmp edx,byte +0x2
pf_at 0xb56f
l_kernel_0002bc8d: jnz near 0x2bdc5
pf_at 0xb575
l_kernel_0002bc93: fld dword [ecx+0x8]
pf_at 0xb578
l_kernel_0002bc96: fldz
pf_at 0xb57a
l_kernel_0002bc98: fxch st1
pf_at 0xb57c
l_kernel_0002bc9a: fucomi st1
pf_at 0xb57e
l_kernel_0002bc9c: fstp st1
pf_at 0xb580
l_kernel_0002bc9e: jnc short 0x2bd04
pf_at 0xb582
l_kernel_0002bca0: fstp st0
pf_at 0xb584
l_kernel_0002bca2: jmp near 0x2bdc5
pf_at 0xb589
l_kernel_0002bca7: mov eax,[ecx+0xc]
pf_at 0xb58c
l_kernel_0002bcaa: test eax,eax
pf_at 0xb58e
l_kernel_0002bcac: jz near 0x2bdc5
pf_at 0xb594
l_kernel_0002bcb2: lea edi,[ebp-0x130]
pf_at 0xb59a
l_kernel_0002bcb8: push eax
pf_at 0xb59b
l_kernel_0002bcb9: push dword 0x2cb77
pf_at 0xb5a0
l_kernel_0002bcbe: push dword 0x100
pf_at 0xb5a5
l_kernel_0002bcc3: push edi
pf_at 0xb5a6
l_kernel_0002bcc4: call 0x216bc
pf_at 0xb5ab
l_kernel_0002bcc9: add esp,byte +0x10
pf_at 0xb5ae
l_kernel_0002bccc: mov ecx,edi
pf_at 0xb5b0
l_kernel_0002bcce: call 0x243a7
pf_at 0xb5b5
l_kernel_0002bcd3: movzx eax,byte [edi]
pf_at 0xb5b8
l_kernel_0002bcd6: test eax,eax
pf_at 0xb5ba
l_kernel_0002bcd8: jz near 0x2bdc5
pf_at 0xb5c0
l_kernel_0002bcde: push byte +0x10
pf_at 0xb5c2
l_kernel_0002bce0: pop ecx
pf_at 0xb5c3
l_kernel_0002bce1: mov [ebp-0x14],ecx
pf_at 0xb5c6
l_kernel_0002bce4: mov dl,0x1
pf_at 0xb5c8
l_kernel_0002bce6: cmp eax,byte +0x24
pf_at 0xb5cb
l_kernel_0002bce9: mov [ebp-0x20],ebx
pf_at 0xb5ce
l_kernel_0002bcec: jz short 0x2bd35
pf_at 0xb5d0
l_kernel_0002bcee: cmp eax,byte +0x30
pf_at 0xb5d3
l_kernel_0002bcf1: jnz short 0x2bd29
pf_at 0xb5d5
l_kernel_0002bcf3: mov al,[ebp-0x12f]
pf_at 0xb5db
l_kernel_0002bcf9: and al,0xdf
pf_at 0xb5dd
l_kernel_0002bcfb: cmp al,0x58
pf_at 0xb5df
l_kernel_0002bcfd: jnz short 0x2bd29
pf_at 0xb5e1
l_kernel_0002bcff: push byte +0x2
pf_at 0xb5e3
l_kernel_0002bd01: pop eax
pf_at 0xb5e4
l_kernel_0002bd02: jmp short 0x2bd38
pf_at 0xb5e6
l_kernel_0002bd04: fnstcw [ebp-0xe]
pf_at 0xb5e9
l_kernel_0002bd07: movzx eax,word [ebp-0xe]
pf_at 0xb5ed
l_kernel_0002bd0b: or eax,0xc00
pf_at 0xb5f2
l_kernel_0002bd10: mov [ebp-0x16],ax
pf_at 0xb5f6
l_kernel_0002bd14: fldcw [ebp-0x16]
pf_at 0xb5f9
l_kernel_0002bd17: fistp qword [ebp-0x30]
pf_at 0xb5fc
l_kernel_0002bd1a: fldcw [ebp-0xe]
pf_at 0xb5ff
l_kernel_0002bd1d: mov eax,[ebp-0x30]
pf_at 0xb602
l_kernel_0002bd20: mov [ebx],eax
pf_at 0xb604
l_kernel_0002bd22: mov al,0x1
pf_at 0xb606
l_kernel_0002bd24: jmp near 0x2bdc7
pf_at 0xb60b
l_kernel_0002bd29: xor edx,edx
pf_at 0xb60d
l_kernel_0002bd2b: push byte +0xa
pf_at 0xb60f
l_kernel_0002bd2d: pop eax
pf_at 0xb610
l_kernel_0002bd2e: mov [ebp-0x14],eax
pf_at 0xb613
l_kernel_0002bd31: xor eax,eax
pf_at 0xb615
l_kernel_0002bd33: jmp short 0x2bd38
pf_at 0xb617
l_kernel_0002bd35: xor eax,eax
pf_at 0xb619
l_kernel_0002bd37: inc eax
pf_at 0xb61a
l_kernel_0002bd38: lea esi,[eax+ebp]
pf_at 0xb61d
l_kernel_0002bd3b: add esi,0xfffffed0
pf_at 0xb623
l_kernel_0002bd41: xor edi,edi
pf_at 0xb625
l_kernel_0002bd43: xor ebx,ebx
pf_at 0xb627
l_kernel_0002bd45: xor eax,eax
pf_at 0xb629
l_kernel_0002bd47: mov [ebp-0x24],edx
pf_at 0xb62c
l_kernel_0002bd4a: movsx ecx,byte [esi]
pf_at 0xb62f
l_kernel_0002bd4d: test ecx,ecx
pf_at 0xb631
l_kernel_0002bd4f: jz short 0x2bdb7
pf_at 0xb633
l_kernel_0002bd51: test dl,dl
pf_at 0xb635
l_kernel_0002bd53: jz short 0x2bd74
pf_at 0xb637
l_kernel_0002bd55: mov [ebp-0x1c],esi
pf_at 0xb63a
l_kernel_0002bd58: mov esi,ecx
pf_at 0xb63c
l_kernel_0002bd5a: call 0x2b303
pf_at 0xb641
l_kernel_0002bd5f: test al,al
pf_at 0xb643
l_kernel_0002bd61: jz short 0x2bdc5
pf_at 0xb645
l_kernel_0002bd63: mov edx,esi
pf_at 0xb647
l_kernel_0002bd65: mov eax,edx
pf_at 0xb649
l_kernel_0002bd67: add al,0xd0
pf_at 0xb64b
l_kernel_0002bd69: cmp al,0x9
pf_at 0xb64d
l_kernel_0002bd6b: ja short 0x2bd81
pf_at 0xb64f
l_kernel_0002bd6d: add edx,byte -0x30
pf_at 0xb652
l_kernel_0002bd70: mov ecx,edx
pf_at 0xb654
l_kernel_0002bd72: jmp short 0x2bd98
pf_at 0xb656
l_kernel_0002bd74: mov eax,ecx
pf_at 0xb658
l_kernel_0002bd76: add al,0xd0
pf_at 0xb65a
l_kernel_0002bd78: cmp al,0x9
pf_at 0xb65c
l_kernel_0002bd7a: ja short 0x2bdc5
pf_at 0xb65e
l_kernel_0002bd7c: add ecx,byte -0x30
pf_at 0xb661
l_kernel_0002bd7f: jmp short 0x2bd9b
pf_at 0xb663
l_kernel_0002bd81: mov eax,edx
pf_at 0xb665
l_kernel_0002bd83: add al,0x9f
pf_at 0xb667
l_kernel_0002bd85: mov ecx,edx
pf_at 0xb669
l_kernel_0002bd87: add cl,0xe0
pf_at 0xb66c
l_kernel_0002bd8a: cmp al,0x1a
pf_at 0xb66e
l_kernel_0002bd8c: movzx eax,cl
pf_at 0xb671
l_kernel_0002bd8f: cmovnc eax,edx
pf_at 0xb674
l_kernel_0002bd92: movsx ecx,al
pf_at 0xb677
l_kernel_0002bd95: add ecx,byte -0x37
pf_at 0xb67a
l_kernel_0002bd98: mov esi,[ebp-0x1c]
pf_at 0xb67d
l_kernel_0002bd9b: mov edx,[ebp-0x14]
pf_at 0xb680
l_kernel_0002bd9e: imul ebx,edx
pf_at 0xb683
l_kernel_0002bda1: mov eax,edi
pf_at 0xb685
l_kernel_0002bda3: mul edx
pf_at 0xb687
l_kernel_0002bda5: mov edi,eax
pf_at 0xb689
l_kernel_0002bda7: add edi,ecx
pf_at 0xb68b
l_kernel_0002bda9: adc ebx,edx
pf_at 0xb68d
l_kernel_0002bdab: inc esi
pf_at 0xb68e
l_kernel_0002bdac: mov al,0x1
pf_at 0xb690
l_kernel_0002bdae: test ebx,ebx
pf_at 0xb692
l_kernel_0002bdb0: mov edx,[ebp-0x24]
pf_at 0xb695
l_kernel_0002bdb3: jz short 0x2bd4a
pf_at 0xb697
l_kernel_0002bdb5: jmp short 0x2bdc5
pf_at 0xb699
l_kernel_0002bdb7: test al,0x1
pf_at 0xb69b
l_kernel_0002bdb9: jz short 0x2bdc5
pf_at 0xb69d
l_kernel_0002bdbb: mov eax,[ebp-0x20]
pf_at 0xb6a0
l_kernel_0002bdbe: mov [eax],edi
pf_at 0xb6a2
l_kernel_0002bdc0: jmp near 0x2bd22
pf_at 0xb6a7
l_kernel_0002bdc5: xor eax,eax
pf_at 0xb6a9
l_kernel_0002bdc7: add esp,0x12c
pf_at 0xb6af
l_kernel_0002bdcd: pop esi
pf_at 0xb6b0
l_kernel_0002bdce: pop edi
pf_at 0xb6b1
l_kernel_0002bdcf: pop ebx
pf_at 0xb6b2
l_kernel_0002bdd0: pop ebp
pf_at 0xb6b3
l_kernel_0002bdd1: ret
pf_at 0xb6b4
l_kernel_0002bdd2: push ebp
pf_at 0xb6b5
l_kernel_0002bdd3: mov ebp,esp
pf_at 0xb6b7
l_kernel_0002bdd5: push ebx
pf_at 0xb6b8
l_kernel_0002bdd6: push edi
pf_at 0xb6b9
l_kernel_0002bdd7: push esi
pf_at 0xb6ba
l_kernel_0002bdd8: sub esp,byte +0x2c
pf_at 0xb6bd
l_kernel_0002bddb: mov eax,edx
pf_at 0xb6bf
l_kernel_0002bddd: mov edi,[ebp+0x14]
pf_at 0xb6c2
l_kernel_0002bde0: mov ebx,[ebp+0x10]
pf_at 0xb6c5
l_kernel_0002bde3: mov edx,[ebp+0xc]
pf_at 0xb6c8
l_kernel_0002bde6: mov esi,[ebp+0x8]
pf_at 0xb6cb
l_kernel_0002bde9: cmp ebx,byte +0x4
pf_at 0xb6ce
l_kernel_0002bdec: jz short 0x2be07
pf_at 0xb6d0
l_kernel_0002bdee: cmp ebx,byte +0x2
pf_at 0xb6d3
l_kernel_0002bdf1: jz short 0x2bdff
pf_at 0xb6d5
l_kernel_0002bdf3: cmp ebx,byte +0x1
pf_at 0xb6d8
l_kernel_0002bdf6: jnz short 0x2be1c
pf_at 0xb6da
l_kernel_0002bdf8: mov [esi],dl
pf_at 0xb6dc
l_kernel_0002bdfa: movzx edx,dl
pf_at 0xb6df
l_kernel_0002bdfd: jmp short 0x2be09
pf_at 0xb6e1
l_kernel_0002bdff: mov [esi],dx
pf_at 0xb6e4
l_kernel_0002be02: movzx edx,dx
pf_at 0xb6e7
l_kernel_0002be05: jmp short 0x2be09
pf_at 0xb6e9
l_kernel_0002be07: mov [esi],edx
pf_at 0xb6eb
l_kernel_0002be09: lea esi,[ebp-0x2c]
pf_at 0xb6ee
l_kernel_0002be0c: mov ecx,esi
pf_at 0xb6f0
l_kernel_0002be0e: call 0x28508
pf_at 0xb6f5
l_kernel_0002be13: push byte +0x8
pf_at 0xb6f7
l_kernel_0002be15: pop ecx
pf_at 0xb6f8
l_kernel_0002be16: rep movsd
pf_at 0xb6fa
l_kernel_0002be18: mov al,0x1
pf_at 0xb6fc
l_kernel_0002be1a: jmp short 0x2be2e
pf_at 0xb6fe
l_kernel_0002be1c: push eax
pf_at 0xb6ff
l_kernel_0002be1d: push dword 0x2d681
pf_at 0xb704
l_kernel_0002be22: push eax
pf_at 0xb705
l_kernel_0002be23: push ecx
pf_at 0xb706
l_kernel_0002be24: call 0x2609c
pf_at 0xb70b
l_kernel_0002be29: add esp,byte +0x10
pf_at 0xb70e
l_kernel_0002be2c: xor eax,eax
pf_at 0xb710
l_kernel_0002be2e: add esp,byte +0x2c
pf_at 0xb713
l_kernel_0002be31: pop esi
pf_at 0xb714
l_kernel_0002be32: pop edi
pf_at 0xb715
l_kernel_0002be33: pop ebx
pf_at 0xb716
l_kernel_0002be34: pop ebp
pf_at 0xb717
l_kernel_0002be35: ret
pf_at 0xb718
l_kernel_0002be36: push ebp
pf_at 0xb719
l_kernel_0002be37: mov ebp,esp
pf_at 0xb71b
l_kernel_0002be39: push ebx
pf_at 0xb71c
l_kernel_0002be3a: push edi
pf_at 0xb71d
l_kernel_0002be3b: push esi
pf_at 0xb71e
l_kernel_0002be3c: sub esp,0x1fc
pf_at 0xb724
l_kernel_0002be42: xor ebx,ebx
pf_at 0xb726
l_kernel_0002be44: test ecx,ecx
pf_at 0xb728
l_kernel_0002be46: jz near 0x2bfed
pf_at 0xb72e
l_kernel_0002be4c: cmp byte [dword 0x3f0d4],0x0
pf_at 0xb735
l_kernel_0002be53: jz near 0x2bfed
pf_at 0xb73b
l_kernel_0002be59: mov esi,edx
pf_at 0xb73d
l_kernel_0002be5b: cmp dword [ebp+0x8],byte +0x0
pf_at 0xb741
l_kernel_0002be5f: setnz al
pf_at 0xb744
l_kernel_0002be62: test edx,edx
pf_at 0xb746
l_kernel_0002be64: setz dl
pf_at 0xb749
l_kernel_0002be67: test dl,al
pf_at 0xb74b
l_kernel_0002be69: jnz near 0x2bfeb
pf_at 0xb751
l_kernel_0002be6f: lea edi,[ebp-0xfd]
pf_at 0xb757
l_kernel_0002be75: mov edx,edi
pf_at 0xb759
l_kernel_0002be77: call 0x25240
pf_at 0xb75e
l_kernel_0002be7c: xor ebx,ebx
pf_at 0xb760
l_kernel_0002be7e: cmp byte [edi],0x0
pf_at 0xb763
l_kernel_0002be81: jz near 0x2bfed
pf_at 0xb769
l_kernel_0002be87: mov edi,[ebp+0x8]
pf_at 0xb76c
l_kernel_0002be8a: test edi,edi
pf_at 0xb76e
l_kernel_0002be8c: jz short 0x2beb2
pf_at 0xb770
l_kernel_0002be8e: sub esp,byte +0xc
pf_at 0xb773
l_kernel_0002be91: push edi
pf_at 0xb774
l_kernel_0002be92: call 0x20ae5
pf_at 0xb779
l_kernel_0002be97: add esp,byte +0x10
pf_at 0xb77c
l_kernel_0002be9a: test eax,eax
pf_at 0xb77e
l_kernel_0002be9c: jz near 0x2bfeb
pf_at 0xb784
l_kernel_0002bea2: mov ebx,eax
pf_at 0xb786
l_kernel_0002bea4: sub esp,byte +0x4
pf_at 0xb789
l_kernel_0002bea7: push edi
pf_at 0xb78a
l_kernel_0002bea8: push esi
pf_at 0xb78b
l_kernel_0002bea9: push eax
pf_at 0xb78c
l_kernel_0002beaa: call 0x20c1d
pf_at 0xb791
l_kernel_0002beaf: add esp,byte +0x10
pf_at 0xb794
l_kernel_0002beb2: lea ecx,[ebp-0xfd]
pf_at 0xb79a
l_kernel_0002beb8: call 0x255e4
pf_at 0xb79f
l_kernel_0002bebd: mov esi,eax
pf_at 0xb7a1
l_kernel_0002bebf: sub esp,byte +0x4
pf_at 0xb7a4
l_kernel_0002bec2: lea edi,[ebp-0x200]
pf_at 0xb7aa
l_kernel_0002bec8: push dword 0x100
pf_at 0xb7af
l_kernel_0002becd: push byte +0x0
pf_at 0xb7b1
l_kernel_0002becf: push edi
pf_at 0xb7b2
l_kernel_0002bed0: call 0x20c84
pf_at 0xb7b7
l_kernel_0002bed5: add esp,byte +0x10
pf_at 0xb7ba
l_kernel_0002bed8: cmp esi,byte -0x1
pf_at 0xb7bd
l_kernel_0002bedb: jz short 0x2befe
pf_at 0xb7bf
l_kernel_0002bedd: mov eax,esi
pf_at 0xb7c1
l_kernel_0002bedf: shl eax,byte 0x8
pf_at 0xb7c4
l_kernel_0002bee2: lea eax,[eax+0x2f0bc]
pf_at 0xb7ca
l_kernel_0002bee8: sub esp,byte +0x4
pf_at 0xb7cd
l_kernel_0002beeb: push dword 0x100
pf_at 0xb7d2
l_kernel_0002bef0: push eax
pf_at 0xb7d3
l_kernel_0002bef1: push edi
pf_at 0xb7d4
l_kernel_0002bef2: call 0x20c1d
pf_at 0xb7d9
l_kernel_0002bef7: add esp,byte +0x10
pf_at 0xb7dc
l_kernel_0002befa: mov edi,esi
pf_at 0xb7de
l_kernel_0002befc: jmp short 0x2bf40
pf_at 0xb7e0
l_kernel_0002befe: mov edi,[dword 0x3f0bc]
pf_at 0xb7e6
l_kernel_0002bf04: cmp edi,0x100
pf_at 0xb7ec
l_kernel_0002bf0a: jc short 0x2bf1a
pf_at 0xb7ee
l_kernel_0002bf0c: sub esp,byte +0xc
pf_at 0xb7f1
l_kernel_0002bf0f: push ebx
pf_at 0xb7f2
l_kernel_0002bf10: call 0x20aee
pf_at 0xb7f7
l_kernel_0002bf15: jmp near 0x2bfd0
pf_at 0xb7fc
l_kernel_0002bf1a: lea eax,[edi+0x1]
pf_at 0xb7ff
l_kernel_0002bf1d: mov [0x3f0bc],eax
pf_at 0xb804
l_kernel_0002bf22: mov eax,edi
pf_at 0xb806
l_kernel_0002bf24: shl eax,byte 0x8
pf_at 0xb809
l_kernel_0002bf27: lea eax,[eax+0x2f0bc]
pf_at 0xb80f
l_kernel_0002bf2d: sub esp,byte +0x4
pf_at 0xb812
l_kernel_0002bf30: push dword 0x100
pf_at 0xb817
l_kernel_0002bf35: push byte +0x0
pf_at 0xb819
l_kernel_0002bf37: push eax
pf_at 0xb81a
l_kernel_0002bf38: call 0x20c84
pf_at 0xb81f
l_kernel_0002bf3d: add esp,byte +0x10
pf_at 0xb822
l_kernel_0002bf40: shl edi,byte 0x8
pf_at 0xb825
l_kernel_0002bf43: lea edi,[edi+0x2f0bc]
pf_at 0xb82b
l_kernel_0002bf49: lea eax,[ebp-0xfd]
pf_at 0xb831
l_kernel_0002bf4f: push eax
pf_at 0xb832
l_kernel_0002bf50: push dword 0x2cb77
pf_at 0xb837
l_kernel_0002bf55: push dword 0xf1
pf_at 0xb83c
l_kernel_0002bf5a: push edi
pf_at 0xb83d
l_kernel_0002bf5b: call 0x216bc
pf_at 0xb842
l_kernel_0002bf60: add esp,byte +0x10
pf_at 0xb845
l_kernel_0002bf63: mov [edi+0xf4],ebx
pf_at 0xb84b
l_kernel_0002bf69: mov eax,[ebp+0x8]
pf_at 0xb84e
l_kernel_0002bf6c: mov [edi+0xf8],eax
pf_at 0xb854
l_kernel_0002bf72: and dword [edi+0xfc],byte +0x0
pf_at 0xb85b
l_kernel_0002bf79: call 0x217ea
pf_at 0xb860
l_kernel_0002bf7e: test al,al
pf_at 0xb862
l_kernel_0002bf80: jz short 0x2bfaa
pf_at 0xb864
l_kernel_0002bf82: cmp esi,byte -0x1
pf_at 0xb867
l_kernel_0002bf85: setnz cl
pf_at 0xb86a
l_kernel_0002bf88: mov eax,[ebp-0x10c]
pf_at 0xb870
l_kernel_0002bf8e: test eax,eax
pf_at 0xb872
l_kernel_0002bf90: setnz dl
pf_at 0xb875
l_kernel_0002bf93: and dl,cl
pf_at 0xb877
l_kernel_0002bf95: mov bl,0x1
pf_at 0xb879
l_kernel_0002bf97: cmp dl,0x1
pf_at 0xb87c
l_kernel_0002bf9a: jnz short 0x2bfed
pf_at 0xb87e
l_kernel_0002bf9c: sub esp,byte +0xc
pf_at 0xb881
l_kernel_0002bf9f: push eax
pf_at 0xb882
l_kernel_0002bfa0: call 0x20aee
pf_at 0xb887
l_kernel_0002bfa5: add esp,byte +0x10
pf_at 0xb88a
l_kernel_0002bfa8: jmp short 0x2bfed
pf_at 0xb88c
l_kernel_0002bfaa: sub esp,byte +0xc
pf_at 0xb88f
l_kernel_0002bfad: push ebx
pf_at 0xb890
l_kernel_0002bfae: call 0x20aee
pf_at 0xb895
l_kernel_0002bfb3: add esp,byte +0x10
pf_at 0xb898
l_kernel_0002bfb6: sub esp,byte +0x4
pf_at 0xb89b
l_kernel_0002bfb9: cmp esi,byte -0x1
pf_at 0xb89e
l_kernel_0002bfbc: jz short 0x2bfd5
pf_at 0xb8a0
l_kernel_0002bfbe: push dword 0x100
pf_at 0xb8a5
l_kernel_0002bfc3: lea eax,[ebp-0x200]
pf_at 0xb8ab
l_kernel_0002bfc9: push eax
pf_at 0xb8ac
l_kernel_0002bfca: push edi
pf_at 0xb8ad
l_kernel_0002bfcb: call 0x20c1d
pf_at 0xb8b2
l_kernel_0002bfd0: add esp,byte +0x10
pf_at 0xb8b5
l_kernel_0002bfd3: jmp short 0x2bfeb
pf_at 0xb8b7
l_kernel_0002bfd5: push dword 0x100
pf_at 0xb8bc
l_kernel_0002bfda: push byte +0x0
pf_at 0xb8be
l_kernel_0002bfdc: push edi
pf_at 0xb8bf
l_kernel_0002bfdd: call 0x20c84
pf_at 0xb8c4
l_kernel_0002bfe2: add esp,byte +0x10
pf_at 0xb8c7
l_kernel_0002bfe5: dec dword [dword 0x3f0bc]
pf_at 0xb8cd
l_kernel_0002bfeb: xor ebx,ebx
pf_at 0xb8cf
l_kernel_0002bfed: mov eax,ebx
pf_at 0xb8d1
l_kernel_0002bfef: add esp,0x1fc
pf_at 0xb8d7
l_kernel_0002bff5: pop esi
pf_at 0xb8d8
l_kernel_0002bff6: pop edi
pf_at 0xb8d9
l_kernel_0002bff7: pop ebx
pf_at 0xb8da
l_kernel_0002bff8: pop ebp
pf_at 0xb8db
l_kernel_0002bff9: ret
pf_at 0xb8dc
l_kernel_0002bffa: push ebp
pf_at 0xb8dd
l_kernel_0002bffb: mov ebp,esp
pf_at 0xb8df
l_kernel_0002bffd: push ebx
pf_at 0xb8e0
l_kernel_0002bffe: push edi
pf_at 0xb8e1
l_kernel_0002bfff: push esi
pf_at 0xb8e2
l_kernel_0002c000: sub esp,byte +0x2c
pf_at 0xb8e5
l_kernel_0002c003: mov eax,[ebp+0x8]
pf_at 0xb8e8
l_kernel_0002c006: xor ebx,ebx
pf_at 0xb8ea
l_kernel_0002c008: test eax,eax
pf_at 0xb8ec
l_kernel_0002c00a: jz near 0x2c115
pf_at 0xb8f2
l_kernel_0002c010: and dword [eax],byte +0x0
pf_at 0xb8f5
l_kernel_0002c013: mov [ebp-0x20],edx
pf_at 0xb8f8
l_kernel_0002c016: neg edx
pf_at 0xb8fa
l_kernel_0002c018: mov [ebp-0x24],edx
pf_at 0xb8fd
l_kernel_0002c01b: xor esi,esi
pf_at 0xb8ff
l_kernel_0002c01d: inc esi
pf_at 0xb900
l_kernel_0002c01e: mov [ebp-0x18],ecx
pf_at 0xb903
l_kernel_0002c021: mov edi,ecx
pf_at 0xb905
l_kernel_0002c023: mov eax,[ebp-0x24]
pf_at 0xb908
l_kernel_0002c026: add eax,esi
pf_at 0xb90a
l_kernel_0002c028: cmp eax,byte +0x1
pf_at 0xb90d
l_kernel_0002c02b: jz short 0x2c064
pf_at 0xb90f
l_kernel_0002c02d: and dword [ebp-0x1c],byte +0x0
pf_at 0xb913
l_kernel_0002c031: mov ecx,edi
pf_at 0xb915
l_kernel_0002c033: lea edx,[ebp-0x1c]
pf_at 0xb918
l_kernel_0002c036: call 0x2b32b
pf_at 0xb91d
l_kernel_0002c03b: mov ecx,[ebp-0x1c]
pf_at 0xb920
l_kernel_0002c03e: test al,al
pf_at 0xb922
l_kernel_0002c040: jz near 0x2c0eb
pf_at 0xb928
l_kernel_0002c046: mov [esp],ecx
pf_at 0xb92b
l_kernel_0002c049: call 0x20ccf
pf_at 0xb930
l_kernel_0002c04e: cmp esi,[ebp-0x20]
pf_at 0xb933
l_kernel_0002c051: adc ebx,eax
pf_at 0xb935
l_kernel_0002c053: mov eax,[ebp-0x1c]
pf_at 0xb938
l_kernel_0002c056: mov [esp],eax
pf_at 0xb93b
l_kernel_0002c059: call 0x20aee
pf_at 0xb940
l_kernel_0002c05e: inc esi
pf_at 0xb941
l_kernel_0002c05f: add edi,byte +0x20
pf_at 0xb944
l_kernel_0002c062: jmp short 0x2c023
pf_at 0xb946
l_kernel_0002c064: inc ebx
pf_at 0xb947
l_kernel_0002c065: mov [esp],ebx
pf_at 0xb94a
l_kernel_0002c068: call 0x20ae5
pf_at 0xb94f
l_kernel_0002c06d: xor ebx,ebx
pf_at 0xb951
l_kernel_0002c06f: mov [ebp-0x10],eax
pf_at 0xb954
l_kernel_0002c072: test eax,eax
pf_at 0xb956
l_kernel_0002c074: jz near 0x2c115
pf_at 0xb95c
l_kernel_0002c07a: xor esi,esi
pf_at 0xb95e
l_kernel_0002c07c: inc esi
pf_at 0xb95f
l_kernel_0002c07d: mov edi,[ebp-0x18]
pf_at 0xb962
l_kernel_0002c080: mov eax,[ebp-0x24]
pf_at 0xb965
l_kernel_0002c083: add eax,esi
pf_at 0xb967
l_kernel_0002c085: cmp eax,byte +0x1
pf_at 0xb96a
l_kernel_0002c088: jz short 0x2c0f0
pf_at 0xb96c
l_kernel_0002c08a: and dword [ebp-0x14],byte +0x0
pf_at 0xb970
l_kernel_0002c08e: mov ecx,edi
pf_at 0xb972
l_kernel_0002c090: lea edx,[ebp-0x14]
pf_at 0xb975
l_kernel_0002c093: call 0x2b32b
pf_at 0xb97a
l_kernel_0002c098: mov ecx,[ebp-0x14]
pf_at 0xb97d
l_kernel_0002c09b: test al,al
pf_at 0xb97f
l_kernel_0002c09d: jz short 0x2c100
pf_at 0xb981
l_kernel_0002c09f: mov [ebp-0x18],edi
pf_at 0xb984
l_kernel_0002c0a2: mov [esp],ecx
pf_at 0xb987
l_kernel_0002c0a5: call 0x20ccf
pf_at 0xb98c
l_kernel_0002c0aa: test eax,eax
pf_at 0xb98e
l_kernel_0002c0ac: jz short 0x2c0ca
pf_at 0xb990
l_kernel_0002c0ae: mov edi,eax
pf_at 0xb992
l_kernel_0002c0b0: mov eax,[ebp-0x10]
pf_at 0xb995
l_kernel_0002c0b3: add eax,ebx
pf_at 0xb997
l_kernel_0002c0b5: mov ecx,[ebp-0x14]
pf_at 0xb99a
l_kernel_0002c0b8: mov [esp+0x8],edi
pf_at 0xb99e
l_kernel_0002c0bc: mov [esp+0x4],ecx
pf_at 0xb9a2
l_kernel_0002c0c0: mov [esp],eax
pf_at 0xb9a5
l_kernel_0002c0c3: call 0x20c1d
pf_at 0xb9aa
l_kernel_0002c0c8: add ebx,edi
pf_at 0xb9ac
l_kernel_0002c0ca: mov eax,[ebp-0x14]
pf_at 0xb9af
l_kernel_0002c0cd: mov [esp],eax
pf_at 0xb9b2
l_kernel_0002c0d0: call 0x20aee
pf_at 0xb9b7
l_kernel_0002c0d5: cmp esi,[ebp-0x20]
pf_at 0xb9ba
l_kernel_0002c0d8: mov edi,[ebp-0x18]
pf_at 0xb9bd
l_kernel_0002c0db: jnc short 0x2c0e5
pf_at 0xb9bf
l_kernel_0002c0dd: mov eax,[ebp-0x10]
pf_at 0xb9c2
l_kernel_0002c0e0: mov byte [eax+ebx],0x20
pf_at 0xb9c6
l_kernel_0002c0e4: inc ebx
pf_at 0xb9c7
l_kernel_0002c0e5: inc esi
pf_at 0xb9c8
l_kernel_0002c0e6: add edi,byte +0x20
pf_at 0xb9cb
l_kernel_0002c0e9: jmp short 0x2c080
pf_at 0xb9cd
l_kernel_0002c0eb: mov [esp],ecx
pf_at 0xb9d0
l_kernel_0002c0ee: jmp short 0x2c10e
pf_at 0xb9d2
l_kernel_0002c0f0: mov ecx,[ebp-0x10]
pf_at 0xb9d5
l_kernel_0002c0f3: mov byte [ecx+ebx],0x0
pf_at 0xb9d9
l_kernel_0002c0f7: mov eax,[ebp+0x8]
pf_at 0xb9dc
l_kernel_0002c0fa: mov [eax],ecx
pf_at 0xb9de
l_kernel_0002c0fc: mov bl,0x1
pf_at 0xb9e0
l_kernel_0002c0fe: jmp short 0x2c115
pf_at 0xb9e2
l_kernel_0002c100: mov [esp],ecx
pf_at 0xb9e5
l_kernel_0002c103: call 0x20aee
pf_at 0xb9ea
l_kernel_0002c108: mov eax,[ebp-0x10]
pf_at 0xb9ed
l_kernel_0002c10b: mov [esp],eax
pf_at 0xb9f0
l_kernel_0002c10e: call 0x20aee
pf_at 0xb9f5
l_kernel_0002c113: xor ebx,ebx
pf_at 0xb9f7
l_kernel_0002c115: mov eax,ebx
pf_at 0xb9f9
l_kernel_0002c117: add esp,byte +0x2c
pf_at 0xb9fc
l_kernel_0002c11a: pop esi
pf_at 0xb9fd
l_kernel_0002c11b: pop edi
pf_at 0xb9fe
l_kernel_0002c11c: pop ebx
pf_at 0xb9ff
l_kernel_0002c11d: pop ebp
pf_at 0xba00
l_kernel_0002c11e: ret
pf_at 0xba01
l_kernel_0002c11f: push ebp
pf_at 0xba02
l_kernel_0002c120: mov ebp,esp
pf_at 0xba04
l_kernel_0002c122: push ebx
pf_at 0xba05
l_kernel_0002c123: push edi
pf_at 0xba06
l_kernel_0002c124: push esi
pf_at 0xba07
l_kernel_0002c125: sub esp,byte +0xc
pf_at 0xba0a
l_kernel_0002c128: and dword [ebp-0x10],byte +0x0
pf_at 0xba0e
l_kernel_0002c12c: mov edi,ecx
pf_at 0xba10
l_kernel_0002c12e: test ecx,ecx
pf_at 0xba12
l_kernel_0002c130: setz al
pf_at 0xba15
l_kernel_0002c133: test edx,edx
pf_at 0xba17
l_kernel_0002c135: setz cl
pf_at 0xba1a
l_kernel_0002c138: xor esi,esi
pf_at 0xba1c
l_kernel_0002c13a: or cl,al
pf_at 0xba1e
l_kernel_0002c13c: jnz near 0x2c1ce
pf_at 0xba24
l_kernel_0002c142: mov ebx,edx
pf_at 0xba26
l_kernel_0002c144: mov cl,[ebp+0x8]
pf_at 0xba29
l_kernel_0002c147: mov eax,[edi]
pf_at 0xba2b
l_kernel_0002c149: cmp eax,byte +0x8
pf_at 0xba2e
l_kernel_0002c14c: jz short 0x2c18e
pf_at 0xba30
l_kernel_0002c14e: cmp eax,byte +0x7
pf_at 0xba33
l_kernel_0002c151: jnz short 0x2c1ce
pf_at 0xba35
l_kernel_0002c153: cmp dword [ebx],byte +0x1
pf_at 0xba38
l_kernel_0002c156: jnz short 0x2c1ce
pf_at 0xba3a
l_kernel_0002c158: mov edx,[ebx+0x4]
pf_at 0xba3d
l_kernel_0002c15b: test edx,edx
pf_at 0xba3f
l_kernel_0002c15d: jng short 0x2c1ce
pf_at 0xba41
l_kernel_0002c15f: mov eax,ecx
pf_at 0xba43
l_kernel_0002c161: mov ecx,[edi+0x18]
pf_at 0xba46
l_kernel_0002c164: test ecx,ecx
pf_at 0xba48
l_kernel_0002c166: jz short 0x2c1ce
pf_at 0xba4a
l_kernel_0002c168: cmp edx,[ecx+0x4]
pf_at 0xba4d
l_kernel_0002c16b: jna short 0x2c180
pf_at 0xba4f
l_kernel_0002c16d: test al,al
pf_at 0xba51
l_kernel_0002c16f: jz short 0x2c1ce
pf_at 0xba53
l_kernel_0002c171: call 0x2b0c3
pf_at 0xba58
l_kernel_0002c176: test al,al
pf_at 0xba5a
l_kernel_0002c178: jz short 0x2c1ce
pf_at 0xba5c
l_kernel_0002c17a: mov ecx,[edi+0x18]
pf_at 0xba5f
l_kernel_0002c17d: mov edx,[ebx+0x4]
pf_at 0xba62
l_kernel_0002c180: mov eax,[ecx+0xc]
pf_at 0xba65
l_kernel_0002c183: shl edx,byte 0x5
pf_at 0xba68
l_kernel_0002c186: lea esi,[eax+edx]
pf_at 0xba6b
l_kernel_0002c189: add esi,byte -0x20
pf_at 0xba6e
l_kernel_0002c18c: jmp short 0x2c1ce
pf_at 0xba70
l_kernel_0002c18e: xor esi,esi
pf_at 0xba72
l_kernel_0002c190: cmp dword [edi+0x1c],byte +0x0
pf_at 0xba76
l_kernel_0002c194: mov edx,0x0
pf_at 0xba7b
l_kernel_0002c199: jz short 0x2c1c6
pf_at 0xba7d
l_kernel_0002c19b: lea edx,[ebp-0x10]
pf_at 0xba80
l_kernel_0002c19e: mov ecx,ebx
pf_at 0xba82
l_kernel_0002c1a0: mov ebx,edx
pf_at 0xba84
l_kernel_0002c1a2: call 0x288cc
pf_at 0xba89
l_kernel_0002c1a7: mov edx,[ebx]
pf_at 0xba8b
l_kernel_0002c1a9: test al,al
pf_at 0xba8d
l_kernel_0002c1ab: jz short 0x2c1c6
pf_at 0xba8f
l_kernel_0002c1ad: mov ecx,[edi+0x1c]
pf_at 0xba92
l_kernel_0002c1b0: movzx eax,byte [ebp+0x8]
pf_at 0xba96
l_kernel_0002c1b4: mov [esp],eax
pf_at 0xba99
l_kernel_0002c1b7: call 0x28989
pf_at 0xba9e
l_kernel_0002c1bc: mov esi,eax
pf_at 0xbaa0
l_kernel_0002c1be: mov eax,[ebp-0x10]
pf_at 0xbaa3
l_kernel_0002c1c1: mov [esp],eax
pf_at 0xbaa6
l_kernel_0002c1c4: jmp short 0x2c1c9
pf_at 0xbaa8
l_kernel_0002c1c6: mov [esp],edx
pf_at 0xbaab
l_kernel_0002c1c9: call 0x20aee
pf_at 0xbab0
l_kernel_0002c1ce: mov eax,esi
pf_at 0xbab2
l_kernel_0002c1d0: add esp,byte +0xc
pf_at 0xbab5
l_kernel_0002c1d3: pop esi
pf_at 0xbab6
l_kernel_0002c1d4: pop edi
pf_at 0xbab7
l_kernel_0002c1d5: pop ebx
pf_at 0xbab8
l_kernel_0002c1d6: pop ebp
pf_at 0xbab9
l_kernel_0002c1d7: ret
pf_at 0xbaba
l_kernel_0002c1d8: mov eax,[ecx]
pf_at 0xbabc
l_kernel_0002c1da: fldz
pf_at 0xbabe
l_kernel_0002c1dc: lea edx,[eax-0x5]
pf_at 0xbac1
l_kernel_0002c1df: cmp edx,byte +0x2
pf_at 0xbac4
l_kernel_0002c1e2: jc short 0x2c1f4
pf_at 0xbac6
l_kernel_0002c1e4: cmp eax,byte +0x1
pf_at 0xbac9
l_kernel_0002c1e7: jz short 0x2c1f4
pf_at 0xbacb
l_kernel_0002c1e9: cmp eax,byte +0x2
pf_at 0xbace
l_kernel_0002c1ec: jnz short 0x2c207
pf_at 0xbad0
l_kernel_0002c1ee: fstp st0
pf_at 0xbad2
l_kernel_0002c1f0: fld dword [ecx+0x8]
pf_at 0xbad5
l_kernel_0002c1f3: ret
pf_at 0xbad6
l_kernel_0002c1f4: push ebp
pf_at 0xbad7
l_kernel_0002c1f5: mov ebp,esp
pf_at 0xbad9
l_kernel_0002c1f7: push eax
pf_at 0xbada
l_kernel_0002c1f8: fstp st0
pf_at 0xbadc
l_kernel_0002c1fa: mov eax,[ecx+0x4]
pf_at 0xbadf
l_kernel_0002c1fd: mov [ebp-0x4],eax
pf_at 0xbae2
l_kernel_0002c200: fild dword [ebp-0x4]
pf_at 0xbae5
l_kernel_0002c203: add esp,byte +0x4
pf_at 0xbae8
l_kernel_0002c206: pop ebp
pf_at 0xbae9
l_kernel_0002c207: ret
pf_at 0xbaea
l_kernel_0002c208: push ebp
pf_at 0xbaeb
l_kernel_0002c209: mov ebp,esp
pf_at 0xbaed
l_kernel_0002c20b: push ebx
pf_at 0xbaee
l_kernel_0002c20c: push edi
pf_at 0xbaef
l_kernel_0002c20d: push esi
pf_at 0xbaf0
l_kernel_0002c20e: sub esp,byte +0x3c
pf_at 0xbaf3
l_kernel_0002c211: mov edi,edx
pf_at 0xbaf5
l_kernel_0002c213: mov esi,[ebp+0x8]
pf_at 0xbaf8
l_kernel_0002c216: lea edx,[ebp-0x3c]
pf_at 0xbafb
l_kernel_0002c219: and dword [edx],byte +0x0
pf_at 0xbafe
l_kernel_0002c21c: lea eax,[ebp-0x38]
pf_at 0xbb01
l_kernel_0002c21f: and dword [eax],byte +0x0
pf_at 0xbb04
l_kernel_0002c222: sub esp,byte +0xc
pf_at 0xbb07
l_kernel_0002c225: push eax
pf_at 0xbb08
l_kernel_0002c226: call 0x253f8
pf_at 0xbb0d
l_kernel_0002c22b: add esp,byte +0x10
pf_at 0xbb10
l_kernel_0002c22e: test al,al
pf_at 0xbb12
l_kernel_0002c230: jz short 0x2c287
pf_at 0xbb14
l_kernel_0002c232: and dword [ebp-0x2c],byte +0x0
pf_at 0xbb18
l_kernel_0002c236: and dword [ebp-0x28],byte +0x0
pf_at 0xbb1c
l_kernel_0002c23a: and dword [ebp-0x24],byte +0x0
pf_at 0xbb20
l_kernel_0002c23e: mov ebx,[ebp-0x3c]
pf_at 0xbb23
l_kernel_0002c241: and dword [ebp-0x20],byte +0x0
pf_at 0xbb27
l_kernel_0002c245: mov edx,[ebp-0x38]
pf_at 0xbb2a
l_kernel_0002c248: and dword [ebp-0x1c],byte +0x0
pf_at 0xbb2e
l_kernel_0002c24c: and dword [ebp-0x18],byte +0x0
pf_at 0xbb32
l_kernel_0002c250: test ebx,ebx
pf_at 0xbb34
l_kernel_0002c252: setz al
pf_at 0xbb37
l_kernel_0002c255: test edi,edi
pf_at 0xbb39
l_kernel_0002c257: setz cl
pf_at 0xbb3c
l_kernel_0002c25a: or cl,al
pf_at 0xbb3e
l_kernel_0002c25c: jnz short 0x2c29d
pf_at 0xbb40
l_kernel_0002c25e: cmp edx,byte +0xe
pf_at 0xbb43
l_kernel_0002c261: jc short 0x2c27d
pf_at 0xbb45
l_kernel_0002c263: sub esp,byte +0x4
pf_at 0xbb48
l_kernel_0002c266: push byte +0x4
pf_at 0xbb4a
l_kernel_0002c268: push dword 0x2e00b
pf_at 0xbb4f
l_kernel_0002c26d: push ebx
pf_at 0xbb50
l_kernel_0002c26e: mov [ebp-0x14],edx
pf_at 0xbb53
l_kernel_0002c271: call 0x20ca0
pf_at 0xbb58
l_kernel_0002c276: add esp,byte +0x10
pf_at 0xbb5b
l_kernel_0002c279: test eax,eax
pf_at 0xbb5d
l_kernel_0002c27b: jz short 0x2c2a7
pf_at 0xbb5f
l_kernel_0002c27d: sub esp,byte +0x4
pf_at 0xbb62
l_kernel_0002c280: push dword 0x2e010
pf_at 0xbb67
l_kernel_0002c285: jmp short 0x2c28f
pf_at 0xbb69
l_kernel_0002c287: sub esp,byte +0x4
pf_at 0xbb6c
l_kernel_0002c28a: push dword 0x2dfee
pf_at 0xbb71
l_kernel_0002c28f: push dword 0xa0
pf_at 0xbb76
l_kernel_0002c294: push esi
pf_at 0xbb77
l_kernel_0002c295: call 0x216bc
pf_at 0xbb7c
l_kernel_0002c29a: add esp,byte +0x10
pf_at 0xbb7f
l_kernel_0002c29d: xor eax,eax
pf_at 0xbb81
l_kernel_0002c29f: add esp,byte +0x3c
pf_at 0xbb84
l_kernel_0002c2a2: pop esi
pf_at 0xbb85
l_kernel_0002c2a3: pop edi
pf_at 0xbb86
l_kernel_0002c2a4: pop ebx
pf_at 0xbb87
l_kernel_0002c2a5: pop ebp
pf_at 0xbb88
l_kernel_0002c2a6: ret
pf_at 0xbb89
l_kernel_0002c2a7: movzx eax,word [ebx+0x4]
pf_at 0xbb8d
l_kernel_0002c2ab: mov [ebp-0x30],ax
pf_at 0xbb91
l_kernel_0002c2af: cmp eax,byte +0x1
pf_at 0xbb94
l_kernel_0002c2b2: jnz short 0x2c2f2
pf_at 0xbb96
l_kernel_0002c2b4: mov [ebp-0x34],edi
pf_at 0xbb99
l_kernel_0002c2b7: mov edi,[ebx+0x6]
pf_at 0xbb9c
l_kernel_0002c2ba: mov eax,[ebx+0xa]
pf_at 0xbb9f
l_kernel_0002c2bd: mov [ebp-0x10],eax
pf_at 0xbba2
l_kernel_0002c2c0: inc edi
pf_at 0xbba3
l_kernel_0002c2c1: push byte +0xe
pf_at 0xbba5
l_kernel_0002c2c3: pop esi
pf_at 0xbba6
l_kernel_0002c2c4: dec edi
pf_at 0xbba7
l_kernel_0002c2c5: jz short 0x2c300
pf_at 0xbba9
l_kernel_0002c2c7: lea edx,[esi+0x4]
pf_at 0xbbac
l_kernel_0002c2ca: mov ecx,[ebp-0x14]
pf_at 0xbbaf
l_kernel_0002c2cd: cmp edx,ecx
pf_at 0xbbb1
l_kernel_0002c2cf: ja short 0x2c343
pf_at 0xbbb3
l_kernel_0002c2d1: mov eax,[ebx+esi]
pf_at 0xbbb6
l_kernel_0002c2d4: lea esi,[eax+edx]
pf_at 0xbbb9
l_kernel_0002c2d7: cmp esi,ecx
pf_at 0xbbbb
l_kernel_0002c2d9: ja short 0x2c34d
pf_at 0xbbbd
l_kernel_0002c2db: add edx,ebx
pf_at 0xbbbf
l_kernel_0002c2dd: sub esp,byte +0xc
pf_at 0xbbc2
l_kernel_0002c2e0: lea ecx,[ebp-0x2c]
pf_at 0xbbc5
l_kernel_0002c2e3: push eax
pf_at 0xbbc6
l_kernel_0002c2e4: call 0x26e2b
pf_at 0xbbcb
l_kernel_0002c2e9: add esp,byte +0x10
pf_at 0xbbce
l_kernel_0002c2ec: test al,al
pf_at 0xbbd0
l_kernel_0002c2ee: jnz short 0x2c2c4
pf_at 0xbbd2
l_kernel_0002c2f0: jmp short 0x2c339
pf_at 0xbbd4
l_kernel_0002c2f2: push eax
pf_at 0xbbd5
l_kernel_0002c2f3: push dword 0x2e032
pf_at 0xbbda
l_kernel_0002c2f8: push dword 0xa0
pf_at 0xbbdf
l_kernel_0002c2fd: push esi
pf_at 0xbbe0
l_kernel_0002c2fe: jmp short 0x2c379
pf_at 0xbbe2
l_kernel_0002c300: add esi,byte +0xc
pf_at 0xbbe5
l_kernel_0002c303: mov ecx,[ebp-0x10]
pf_at 0xbbe8
l_kernel_0002c306: inc ecx
pf_at 0xbbe9
l_kernel_0002c307: dec ecx
pf_at 0xbbea
l_kernel_0002c308: jz short 0x2c357
pf_at 0xbbec
l_kernel_0002c30a: cmp esi,[ebp-0x14]
pf_at 0xbbef
l_kernel_0002c30d: ja short 0x2c369
pf_at 0xbbf1
l_kernel_0002c30f: mov [ebp-0x10],ecx
pf_at 0xbbf4
l_kernel_0002c312: lea edi,[esi+0xc]
pf_at 0xbbf7
l_kernel_0002c315: movzx edx,byte [ebx+esi-0xc]
pf_at 0xbbfc
l_kernel_0002c31a: sub esp,byte +0x8
pf_at 0xbbff
l_kernel_0002c31d: lea ecx,[ebp-0x20]
pf_at 0xbc02
l_kernel_0002c320: push dword [ebx+esi-0x4]
pf_at 0xbc06
l_kernel_0002c324: push dword [ebx+esi-0x8]
pf_at 0xbc0a
l_kernel_0002c328: call 0x2c579
pf_at 0xbc0f
l_kernel_0002c32d: add esp,byte +0x10
pf_at 0xbc12
l_kernel_0002c330: mov esi,edi
pf_at 0xbc14
l_kernel_0002c332: mov ecx,[ebp-0x10]
pf_at 0xbc17
l_kernel_0002c335: test al,al
pf_at 0xbc19
l_kernel_0002c337: jnz short 0x2c307
pf_at 0xbc1b
l_kernel_0002c339: sub esp,byte +0x4
pf_at 0xbc1e
l_kernel_0002c33c: push dword 0x2e0b1
pf_at 0xbc23
l_kernel_0002c341: jmp short 0x2c371
pf_at 0xbc25
l_kernel_0002c343: sub esp,byte +0x4
pf_at 0xbc28
l_kernel_0002c346: push dword 0x2e053
pf_at 0xbc2d
l_kernel_0002c34b: jmp short 0x2c371
pf_at 0xbc2f
l_kernel_0002c34d: sub esp,byte +0x4
pf_at 0xbc32
l_kernel_0002c350: push dword 0x2e083
pf_at 0xbc37
l_kernel_0002c355: jmp short 0x2c371
pf_at 0xbc39
l_kernel_0002c357: push byte +0x7
pf_at 0xbc3b
l_kernel_0002c359: pop ecx
pf_at 0xbc3c
l_kernel_0002c35a: lea esi,[ebp-0x30]
pf_at 0xbc3f
l_kernel_0002c35d: mov edi,[ebp-0x34]
pf_at 0xbc42
l_kernel_0002c360: rep movsd
pf_at 0xbc44
l_kernel_0002c362: mov al,0x1
pf_at 0xbc46
l_kernel_0002c364: jmp near 0x2c29f
pf_at 0xbc4b
l_kernel_0002c369: sub esp,byte +0x4
pf_at 0xbc4e
l_kernel_0002c36c: push dword 0x2e0d6
pf_at 0xbc53
l_kernel_0002c371: push dword 0xa0
pf_at 0xbc58
l_kernel_0002c376: push dword [ebp+0x8]
pf_at 0xbc5b
l_kernel_0002c379: call 0x216bc
pf_at 0xbc60
l_kernel_0002c37e: add esp,byte +0x10
pf_at 0xbc63
l_kernel_0002c381: lea ecx,[ebp-0x30]
pf_at 0xbc66
l_kernel_0002c384: call 0x2c544
pf_at 0xbc6b
l_kernel_0002c389: jmp near 0x2c29d
pf_at 0xbc70
l_kernel_0002c38e: push ebp
pf_at 0xbc71
l_kernel_0002c38f: mov ebp,esp
pf_at 0xbc73
l_kernel_0002c391: push ebx
pf_at 0xbc74
l_kernel_0002c392: push edi
pf_at 0xbc75
l_kernel_0002c393: push esi
pf_at 0xbc76
l_kernel_0002c394: sub esp,byte +0x2c
pf_at 0xbc79
l_kernel_0002c397: mov edi,ecx
pf_at 0xbc7b
l_kernel_0002c399: and dword [ebp-0x10],byte +0x0
pf_at 0xbc7f
l_kernel_0002c39d: and dword [ebp-0x1c],byte +0x0
pf_at 0xbc83
l_kernel_0002c3a1: test ecx,ecx
pf_at 0xbc85
l_kernel_0002c3a3: setz al
pf_at 0xbc88
l_kernel_0002c3a6: test edx,edx
pf_at 0xbc8a
l_kernel_0002c3a8: setz cl
pf_at 0xbc8d
l_kernel_0002c3ab: or cl,al
pf_at 0xbc8f
l_kernel_0002c3ad: cmp dword [ebp+0x8],byte +0x0
pf_at 0xbc93
l_kernel_0002c3b1: setz al
pf_at 0xbc96
l_kernel_0002c3b4: or al,cl
pf_at 0xbc98
l_kernel_0002c3b6: cmp dword [ebp+0xc],byte +0x0
pf_at 0xbc9c
l_kernel_0002c3ba: setz cl
pf_at 0xbc9f
l_kernel_0002c3bd: xor ebx,ebx
pf_at 0xbca1
l_kernel_0002c3bf: or cl,al
pf_at 0xbca3
l_kernel_0002c3c1: jnz near 0x2c4f3
pf_at 0xbca9
l_kernel_0002c3c7: mov [ebp-0x20],edx
pf_at 0xbcac
l_kernel_0002c3ca: xor edx,edx
pf_at 0xbcae
l_kernel_0002c3cc: xor eax,eax
pf_at 0xbcb0
l_kernel_0002c3ce: mov [ebp-0x24],edi
pf_at 0xbcb3
l_kernel_0002c3d1: mov ecx,[edi+0x10]
pf_at 0xbcb6
l_kernel_0002c3d4: cmp eax,ecx
pf_at 0xbcb8
l_kernel_0002c3d6: jnc near 0x2c505
pf_at 0xbcbe
l_kernel_0002c3dc: mov [ebp-0x14],ebx
pf_at 0xbcc1
l_kernel_0002c3df: mov ebx,[edi+0x18]
pf_at 0xbcc4
l_kernel_0002c3e2: imul esi,eax,byte +0xc
pf_at 0xbcc7
l_kernel_0002c3e5: mov [ebp-0x18],ebx
pf_at 0xbcca
l_kernel_0002c3e8: movzx ebx,byte [ebx+esi]
pf_at 0xbcce
l_kernel_0002c3ec: test ebx,ebx
pf_at 0xbcd0
l_kernel_0002c3ee: jnz near 0x2c4fd
pf_at 0xbcd6
l_kernel_0002c3f4: mov edx,[ebp-0x18]
pf_at 0xbcd9
l_kernel_0002c3f7: lea ebx,[edx+esi]
pf_at 0xbcdc
l_kernel_0002c3fa: mov edx,[edi+0x4]
pf_at 0xbcdf
l_kernel_0002c3fd: cmp [ebx+0x4],edx
pf_at 0xbce2
l_kernel_0002c400: jnc near 0x2c53a
pf_at 0xbce8
l_kernel_0002c406: mov [ebp-0x28],ebx
pf_at 0xbceb
l_kernel_0002c409: mov ebx,[ebx+0x8]
pf_at 0xbcee
l_kernel_0002c40c: lea edi,[eax+ebx]
pf_at 0xbcf1
l_kernel_0002c40f: inc edi
pf_at 0xbcf2
l_kernel_0002c410: mov [ebp-0x2c],edi
pf_at 0xbcf5
l_kernel_0002c413: mov edi,[ebp-0x18]
pf_at 0xbcf8
l_kernel_0002c416: add edi,esi
pf_at 0xbcfa
l_kernel_0002c418: add edi,byte +0x10
pf_at 0xbcfd
l_kernel_0002c41b: sub ebx,byte +0x1
pf_at 0xbd00
l_kernel_0002c41e: jc short 0x2c441
pf_at 0xbd02
l_kernel_0002c420: inc eax
pf_at 0xbd03
l_kernel_0002c421: cmp eax,ecx
pf_at 0xbd05
l_kernel_0002c423: jnc near 0x2c4ba
pf_at 0xbd0b
l_kernel_0002c429: cmp byte [edi-0x4],0x2
pf_at 0xbd0f
l_kernel_0002c42d: jnz near 0x2c4c4
pf_at 0xbd15
l_kernel_0002c433: lea esi,[edi+0xc]
pf_at 0xbd18
l_kernel_0002c436: cmp [edi],edx
pf_at 0xbd1a
l_kernel_0002c438: mov edi,esi
pf_at 0xbd1c
l_kernel_0002c43a: jc short 0x2c41b
pf_at 0xbd1e
l_kernel_0002c43c: jmp near 0x2c4ce
pf_at 0xbd23
l_kernel_0002c441: mov esi,[ebp-0x14]
pf_at 0xbd26
l_kernel_0002c444: lea ebx,[esi+0x1]
pf_at 0xbd29
l_kernel_0002c447: sub esp,byte +0xc
pf_at 0xbd2c
l_kernel_0002c44a: lea ecx,[ebp-0x10]
pf_at 0xbd2f
l_kernel_0002c44d: lea edx,[ebp-0x1c]
pf_at 0xbd32
l_kernel_0002c450: push ebx
pf_at 0xbd33
l_kernel_0002c451: call 0x25673
pf_at 0xbd38
l_kernel_0002c456: add esp,byte +0x10
pf_at 0xbd3b
l_kernel_0002c459: test al,al
pf_at 0xbd3d
l_kernel_0002c45b: jz short 0x2c49b
pf_at 0xbd3f
l_kernel_0002c45d: mov edi,[ebp-0x24]
pf_at 0xbd42
l_kernel_0002c460: mov eax,[edi+0xc]
pf_at 0xbd45
l_kernel_0002c463: mov ecx,[ebp-0x28]
pf_at 0xbd48
l_kernel_0002c466: mov ecx,[ecx+0x4]
pf_at 0xbd4b
l_kernel_0002c469: mov eax,[eax+ecx*4]
pf_at 0xbd4e
l_kernel_0002c46c: mov [ebp-0x18],eax
pf_at 0xbd51
l_kernel_0002c46f: sub esp,byte +0xc
pf_at 0xbd54
l_kernel_0002c472: push eax
pf_at 0xbd55
l_kernel_0002c473: call 0x20ccf
pf_at 0xbd5a
l_kernel_0002c478: add esp,byte +0x10
pf_at 0xbd5d
l_kernel_0002c47b: mov ecx,[ebp-0x18]
pf_at 0xbd60
l_kernel_0002c47e: mov edx,eax
pf_at 0xbd62
l_kernel_0002c480: call 0x24f9e
pf_at 0xbd67
l_kernel_0002c485: mov ecx,[ebp-0x10]
pf_at 0xbd6a
l_kernel_0002c488: mov [ecx+esi*4],eax
pf_at 0xbd6d
l_kernel_0002c48b: mov edx,[ebp-0x10]
pf_at 0xbd70
l_kernel_0002c48e: cmp dword [edx+esi*4],byte +0x0
pf_at 0xbd74
l_kernel_0002c492: mov eax,[ebp-0x2c]
pf_at 0xbd77
l_kernel_0002c495: jnz near 0x2c3d1
pf_at 0xbd7d
l_kernel_0002c49b: sub esp,byte +0x4
pf_at 0xbd80
l_kernel_0002c49e: push dword 0x2e1fe
pf_at 0xbd85
l_kernel_0002c4a3: push dword 0xa0
pf_at 0xbd8a
l_kernel_0002c4a8: push dword [ebp+0x10]
pf_at 0xbd8d
l_kernel_0002c4ab: call 0x216bc
pf_at 0xbd92
l_kernel_0002c4b0: add esp,byte +0x10
pf_at 0xbd95
l_kernel_0002c4b3: mov ecx,[ebp-0x10]
pf_at 0xbd98
l_kernel_0002c4b6: mov edx,esi
pf_at 0xbd9a
l_kernel_0002c4b8: jmp short 0x2c4ec
pf_at 0xbd9c
l_kernel_0002c4ba: sub esp,byte +0x4
pf_at 0xbd9f
l_kernel_0002c4bd: push dword 0x2e168
pf_at 0xbda4
l_kernel_0002c4c2: jmp short 0x2c4d6
pf_at 0xbda6
l_kernel_0002c4c4: sub esp,byte +0x4
pf_at 0xbda9
l_kernel_0002c4c7: push dword 0x2e198
pf_at 0xbdae
l_kernel_0002c4cc: jmp short 0x2c4d6
pf_at 0xbdb0
l_kernel_0002c4ce: sub esp,byte +0x4
pf_at 0xbdb3
l_kernel_0002c4d1: push dword 0x2e1ca
pf_at 0xbdb8
l_kernel_0002c4d6: push dword 0xa0
pf_at 0xbdbd
l_kernel_0002c4db: push dword [ebp+0x10]
pf_at 0xbdc0
l_kernel_0002c4de: call 0x216bc
pf_at 0xbdc5
l_kernel_0002c4e3: add esp,byte +0x10
pf_at 0xbdc8
l_kernel_0002c4e6: mov ecx,[ebp-0x10]
pf_at 0xbdcb
l_kernel_0002c4e9: mov edx,[ebp-0x14]
pf_at 0xbdce
l_kernel_0002c4ec: call 0x256e9
pf_at 0xbdd3
l_kernel_0002c4f1: xor ebx,ebx
pf_at 0xbdd5
l_kernel_0002c4f3: mov eax,ebx
pf_at 0xbdd7
l_kernel_0002c4f5: add esp,byte +0x2c
pf_at 0xbdda
l_kernel_0002c4f8: pop esi
pf_at 0xbddb
l_kernel_0002c4f9: pop edi
pf_at 0xbddc
l_kernel_0002c4fa: pop ebx
pf_at 0xbddd
l_kernel_0002c4fb: pop ebp
pf_at 0xbdde
l_kernel_0002c4fc: ret
pf_at 0xbddf
l_kernel_0002c4fd: cmp ebx,byte +0x14
pf_at 0xbde2
l_kernel_0002c500: mov ebx,[ebp-0x14]
pf_at 0xbde5
l_kernel_0002c503: jnz short 0x2c51b
pf_at 0xbde7
l_kernel_0002c505: mov eax,[ebp-0x20]
pf_at 0xbdea
l_kernel_0002c508: mov [eax],edx
pf_at 0xbdec
l_kernel_0002c50a: mov eax,[ebp+0x8]
pf_at 0xbdef
l_kernel_0002c50d: mov [eax],ebx
pf_at 0xbdf1
l_kernel_0002c50f: mov eax,[ebp-0x1c]
pf_at 0xbdf4
l_kernel_0002c512: mov ecx,[ebp+0xc]
pf_at 0xbdf7
l_kernel_0002c515: mov [ecx],eax
pf_at 0xbdf9
l_kernel_0002c517: mov bl,0x1
pf_at 0xbdfb
l_kernel_0002c519: jmp short 0x2c4f3
pf_at 0xbdfd
l_kernel_0002c51b: sub esp,byte +0x4
pf_at 0xbe00
l_kernel_0002c51e: push dword 0x2e0fd
pf_at 0xbe05
l_kernel_0002c523: push dword 0xa0
pf_at 0xbe0a
l_kernel_0002c528: push dword [ebp+0x10]
pf_at 0xbe0d
l_kernel_0002c52b: call 0x216bc
pf_at 0xbe12
l_kernel_0002c530: add esp,byte +0x10
pf_at 0xbe15
l_kernel_0002c533: mov ecx,[ebp-0x10]
pf_at 0xbe18
l_kernel_0002c536: mov edx,ebx
pf_at 0xbe1a
l_kernel_0002c538: jmp short 0x2c4ec
pf_at 0xbe1c
l_kernel_0002c53a: sub esp,byte +0x4
pf_at 0xbe1f
l_kernel_0002c53d: push dword 0x2e137
pf_at 0xbe24
l_kernel_0002c542: jmp short 0x2c4d6
pf_at 0xbe26
l_kernel_0002c544: test ecx,ecx
pf_at 0xbe28
l_kernel_0002c546: jz short 0x2c578
pf_at 0xbe2a
l_kernel_0002c548: push ebp
pf_at 0xbe2b
l_kernel_0002c549: mov ebp,esp
pf_at 0xbe2d
l_kernel_0002c54b: push esi
pf_at 0xbe2e
l_kernel_0002c54c: push eax
pf_at 0xbe2f
l_kernel_0002c54d: mov esi,ecx
pf_at 0xbe31
l_kernel_0002c54f: add ecx,byte +0x4
pf_at 0xbe34
l_kernel_0002c552: call 0x26419
pf_at 0xbe39
l_kernel_0002c557: mov eax,[esi+0x18]
pf_at 0xbe3c
l_kernel_0002c55a: mov [esp],eax
pf_at 0xbe3f
l_kernel_0002c55d: call 0x20aee
pf_at 0xbe44
l_kernel_0002c562: and dword [esi+0x10],byte +0x0
pf_at 0xbe48
l_kernel_0002c566: and dword [esi+0x14],byte +0x0
pf_at 0xbe4c
l_kernel_0002c56a: and dword [esi+0x18],byte +0x0
pf_at 0xbe50
l_kernel_0002c56e: mov word [esi],0x1
pf_at 0xbe55
l_kernel_0002c573: add esp,byte +0x4
pf_at 0xbe58
l_kernel_0002c576: pop esi
pf_at 0xbe59
l_kernel_0002c577: pop ebp
pf_at 0xbe5a
l_kernel_0002c578: ret
pf_at 0xbe5b
l_kernel_0002c579: test ecx,ecx
pf_at 0xbe5d
l_kernel_0002c57b: jz short 0x2c5aa
pf_at 0xbe5f
l_kernel_0002c57d: push ebp
pf_at 0xbe60
l_kernel_0002c57e: mov ebp,esp
pf_at 0xbe62
l_kernel_0002c580: push ebx
pf_at 0xbe63
l_kernel_0002c581: push edi
pf_at 0xbe64
l_kernel_0002c582: push esi
pf_at 0xbe65
l_kernel_0002c583: sub esp,byte +0xc
pf_at 0xbe68
l_kernel_0002c586: mov ebx,edx
pf_at 0xbe6a
l_kernel_0002c588: mov esi,ecx
pf_at 0xbe6c
l_kernel_0002c58a: mov edx,[ecx]
pf_at 0xbe6e
l_kernel_0002c58c: mov eax,[ecx+0x4]
pf_at 0xbe71
l_kernel_0002c58f: lea ecx,[edx+0x1]
pf_at 0xbe74
l_kernel_0002c592: cmp eax,ecx
pf_at 0xbe76
l_kernel_0002c594: jnc short 0x2c5ad
pf_at 0xbe78
l_kernel_0002c596: test eax,eax
pf_at 0xbe7a
l_kernel_0002c598: push byte +0x10
pf_at 0xbe7c
l_kernel_0002c59a: pop edi
pf_at 0xbe7d
l_kernel_0002c59b: cmovnz edi,eax
pf_at 0xbe80
l_kernel_0002c59e: cmp edi,ecx
pf_at 0xbe82
l_kernel_0002c5a0: jnc short 0x2c5b4
pf_at 0xbe84
l_kernel_0002c5a2: test edi,edi
pf_at 0xbe86
l_kernel_0002c5a4: js short 0x2c5b2
pf_at 0xbe88
l_kernel_0002c5a6: add edi,edi
pf_at 0xbe8a
l_kernel_0002c5a8: jmp short 0x2c59e
pf_at 0xbe8c
l_kernel_0002c5aa: xor eax,eax
pf_at 0xbe8e
l_kernel_0002c5ac: ret
pf_at 0xbe8f
l_kernel_0002c5ad: mov eax,[esi+0x8]
pf_at 0xbe92
l_kernel_0002c5b0: jmp short 0x2c5d5
pf_at 0xbe94
l_kernel_0002c5b2: mov edi,ecx
pf_at 0xbe96
l_kernel_0002c5b4: imul eax,edi,byte +0xc
pf_at 0xbe99
l_kernel_0002c5b7: sub esp,byte +0x8
pf_at 0xbe9c
l_kernel_0002c5ba: push eax
pf_at 0xbe9d
l_kernel_0002c5bb: push dword [esi+0x8]
pf_at 0xbea0
l_kernel_0002c5be: call 0x20b68
pf_at 0xbea5
l_kernel_0002c5c3: add esp,byte +0x10
pf_at 0xbea8
l_kernel_0002c5c6: test eax,eax
pf_at 0xbeaa
l_kernel_0002c5c8: jz short 0x2c5f5
pf_at 0xbeac
l_kernel_0002c5ca: mov [esi+0x8],eax
pf_at 0xbeaf
l_kernel_0002c5cd: mov [esi+0x4],edi
pf_at 0xbeb2
l_kernel_0002c5d0: mov edx,[esi]
pf_at 0xbeb4
l_kernel_0002c5d2: lea ecx,[edx+0x1]
pf_at 0xbeb7
l_kernel_0002c5d5: imul edx,edx,byte +0xc
pf_at 0xbeba
l_kernel_0002c5d8: mov [eax+edx],bl
pf_at 0xbebd
l_kernel_0002c5db: mov edi,[ebp+0x8]
pf_at 0xbec0
l_kernel_0002c5de: mov [eax+edx+0x4],edi
pf_at 0xbec4
l_kernel_0002c5e2: mov edi,[ebp+0xc]
pf_at 0xbec7
l_kernel_0002c5e5: mov [eax+edx+0x8],edi
pf_at 0xbecb
l_kernel_0002c5e9: mov [esi],ecx
pf_at 0xbecd
l_kernel_0002c5eb: mov al,0x1
pf_at 0xbecf
l_kernel_0002c5ed: add esp,byte +0xc
pf_at 0xbed2
l_kernel_0002c5f0: pop esi
pf_at 0xbed3
l_kernel_0002c5f1: pop edi
pf_at 0xbed4
l_kernel_0002c5f2: pop ebx
pf_at 0xbed5
l_kernel_0002c5f3: pop ebp
pf_at 0xbed6
l_kernel_0002c5f4: ret
pf_at 0xbed7
l_kernel_0002c5f5: xor eax,eax
pf_at 0xbed9
l_kernel_0002c5f7: jmp short 0x2c5ed
pf_at 0xbedb
l_kernel_0002c5f9: push ebp
pf_at 0xbedc
l_kernel_0002c5fa: mov ebp,esp
pf_at 0xbede
l_kernel_0002c5fc: mov eax,ecx
pf_at 0xbee0
l_kernel_0002c5fe: mov ecx,0x80001f
pf_at 0xbee5
l_kernel_0002c603: test eax,eax
pf_at 0xbee7
l_kernel_0002c605: jz short 0x2c61a
pf_at 0xbee9
l_kernel_0002c607: movzx edx,byte [eax]
pf_at 0xbeec
l_kernel_0002c60a: add edx,byte -0x9
pf_at 0xbeef
l_kernel_0002c60d: cmp edx,byte +0x17
pf_at 0xbef2
l_kernel_0002c610: ja short 0x2c61c
pf_at 0xbef4
l_kernel_0002c612: bt ecx,edx
pf_at 0xbef7
l_kernel_0002c615: jnc short 0x2c61c
pf_at 0xbef9
l_kernel_0002c617: inc eax
pf_at 0xbefa
l_kernel_0002c618: jmp short 0x2c603
pf_at 0xbefc
l_kernel_0002c61a: xor eax,eax
pf_at 0xbefe
l_kernel_0002c61c: pop ebp
pf_at 0xbeff
l_kernel_0002c61d: ret
pf_at 0xbf00
l_kernel_0002c61e: push ebp
pf_at 0xbf01
l_kernel_0002c61f: mov ebp,esp
pf_at 0xbf03
l_kernel_0002c621: sub esp,byte +0x8
pf_at 0xbf06
l_kernel_0002c624: mov [esp],ecx
pf_at 0xbf09
l_kernel_0002c627: mov ecx,0x7041c
pf_at 0xbf0e
l_kernel_0002c62c: mov edx,0x70424
pf_at 0xbf13
l_kernel_0002c631: call 0x25673
pf_at 0xbf18
l_kernel_0002c636: add esp,byte +0x8
pf_at 0xbf1b
l_kernel_0002c639: pop ebp
pf_at 0xbf1c
l_kernel_0002c63a: ret
pf_at 0xbf1d
l_kernel_0002c63b: test ecx,ecx
pf_at 0xbf1f
l_kernel_0002c63d: jz short 0x2c660
pf_at 0xbf21
l_kernel_0002c63f: push ebp
pf_at 0xbf22
l_kernel_0002c640: mov ebp,esp
pf_at 0xbf24
l_kernel_0002c642: mov eax,ecx
pf_at 0xbf26
l_kernel_0002c644: inc ecx
pf_at 0xbf27
l_kernel_0002c645: movzx edx,byte [ecx-0x1]
pf_at 0xbf2b
l_kernel_0002c649: cmp edx,byte +0x2f
pf_at 0xbf2e
l_kernel_0002c64c: jz short 0x2c659
pf_at 0xbf30
l_kernel_0002c64e: cmp edx,byte +0x5c
pf_at 0xbf33
l_kernel_0002c651: jz short 0x2c659
pf_at 0xbf35
l_kernel_0002c653: test edx,edx
pf_at 0xbf37
l_kernel_0002c655: jnz short 0x2c65b
pf_at 0xbf39
l_kernel_0002c657: jmp short 0x2c65e
pf_at 0xbf3b
l_kernel_0002c659: mov eax,ecx
pf_at 0xbf3d
l_kernel_0002c65b: inc ecx
pf_at 0xbf3e
l_kernel_0002c65c: jmp short 0x2c645
pf_at 0xbf40
l_kernel_0002c65e: pop ebp
pf_at 0xbf41
l_kernel_0002c65f: ret
pf_at 0xbf42
l_kernel_0002c660: mov eax,0x2ca9c
pf_at 0xbf47
l_kernel_0002c665: ret
pf_at 0xbf48
l_kernel_0002c666: push ebp
pf_at 0xbf49
l_kernel_0002c667: mov ebp,esp
pf_at 0xbf4b
l_kernel_0002c669: push ebx
pf_at 0xbf4c
l_kernel_0002c66a: push edi
pf_at 0xbf4d
l_kernel_0002c66b: push esi
pf_at 0xbf4e
l_kernel_0002c66c: sub esp,byte +0xc
pf_at 0xbf51
l_kernel_0002c66f: test edx,edx
pf_at 0xbf53
l_kernel_0002c671: mov eax,0x2ca9c
pf_at 0xbf58
l_kernel_0002c676: cmovnz eax,edx
pf_at 0xbf5b
l_kernel_0002c679: mov [ebp-0x10],eax
pf_at 0xbf5e
l_kernel_0002c67c: test ecx,ecx
pf_at 0xbf60
l_kernel_0002c67e: setz al
pf_at 0xbf63
l_kernel_0002c681: cmp dword [ebp+0x8],byte +0x0
pf_at 0xbf67
l_kernel_0002c685: setz dl
pf_at 0xbf6a
l_kernel_0002c688: xor ebx,ebx
pf_at 0xbf6c
l_kernel_0002c68a: or dl,al
pf_at 0xbf6e
l_kernel_0002c68c: jnz short 0x2c6ce
pf_at 0xbf70
l_kernel_0002c68e: mov esi,ecx
pf_at 0xbf72
l_kernel_0002c690: lea edi,[ecx+0x4]
pf_at 0xbf75
l_kernel_0002c693: cmp ebx,[edi]
pf_at 0xbf77
l_kernel_0002c695: jnc short 0x2c6b2
pf_at 0xbf79
l_kernel_0002c697: mov eax,[esi+0xc]
pf_at 0xbf7c
l_kernel_0002c69a: sub esp,byte +0x8
pf_at 0xbf7f
l_kernel_0002c69d: push dword [ebp-0x10]
pf_at 0xbf82
l_kernel_0002c6a0: push dword [eax+ebx*4]
pf_at 0xbf85
l_kernel_0002c6a3: call 0x20cea
pf_at 0xbf8a
l_kernel_0002c6a8: add esp,byte +0x10
pf_at 0xbf8d
l_kernel_0002c6ab: test eax,eax
pf_at 0xbf8f
l_kernel_0002c6ad: jz short 0x2c6c3
pf_at 0xbf91
l_kernel_0002c6af: inc ebx
pf_at 0xbf92
l_kernel_0002c6b0: jmp short 0x2c693
pf_at 0xbf94
l_kernel_0002c6b2: mov ecx,edi
pf_at 0xbf96
l_kernel_0002c6b4: mov edx,[ebp-0x10]
pf_at 0xbf99
l_kernel_0002c6b7: call 0x2c6d8
pf_at 0xbf9e
l_kernel_0002c6bc: test al,al
pf_at 0xbfa0
l_kernel_0002c6be: jz short 0x2c6cc
pf_at 0xbfa2
l_kernel_0002c6c0: mov ebx,[edi]
pf_at 0xbfa4
l_kernel_0002c6c2: dec ebx
pf_at 0xbfa5
l_kernel_0002c6c3: mov eax,[ebp+0x8]
pf_at 0xbfa8
l_kernel_0002c6c6: mov [eax],ebx
pf_at 0xbfaa
l_kernel_0002c6c8: mov bl,0x1
pf_at 0xbfac
l_kernel_0002c6ca: jmp short 0x2c6ce
pf_at 0xbfae
l_kernel_0002c6cc: xor ebx,ebx
pf_at 0xbfb0
l_kernel_0002c6ce: mov eax,ebx
pf_at 0xbfb2
l_kernel_0002c6d0: add esp,byte +0xc
pf_at 0xbfb5
l_kernel_0002c6d3: pop esi
pf_at 0xbfb6
l_kernel_0002c6d4: pop edi
pf_at 0xbfb7
l_kernel_0002c6d5: pop ebx
pf_at 0xbfb8
l_kernel_0002c6d6: pop ebp
pf_at 0xbfb9
l_kernel_0002c6d7: ret
pf_at 0xbfba
l_kernel_0002c6d8: push ebp
pf_at 0xbfbb
l_kernel_0002c6d9: mov ebp,esp
pf_at 0xbfbd
l_kernel_0002c6db: push edi
pf_at 0xbfbe
l_kernel_0002c6dc: push esi
pf_at 0xbfbf
l_kernel_0002c6dd: sub esp,byte +0x10
pf_at 0xbfc2
l_kernel_0002c6e0: mov esi,edx
pf_at 0xbfc4
l_kernel_0002c6e2: mov edi,ecx
pf_at 0xbfc6
l_kernel_0002c6e4: test edx,edx
pf_at 0xbfc8
l_kernel_0002c6e6: mov eax,0x2ca9c
pf_at 0xbfcd
l_kernel_0002c6eb: cmovz esi,eax
pf_at 0xbfd0
l_kernel_0002c6ee: mov [esp],esi
pf_at 0xbfd3
l_kernel_0002c6f1: call 0x20ccf
pf_at 0xbfd8
l_kernel_0002c6f6: mov [esp],eax
pf_at 0xbfdb
l_kernel_0002c6f9: mov ecx,edi
pf_at 0xbfdd
l_kernel_0002c6fb: mov edx,esi
pf_at 0xbfdf
l_kernel_0002c6fd: call 0x26e2b
pf_at 0xbfe4
l_kernel_0002c702: add esp,byte +0x10
pf_at 0xbfe7
l_kernel_0002c705: pop esi
pf_at 0xbfe8
l_kernel_0002c706: pop edi
pf_at 0xbfe9
l_kernel_0002c707: pop ebp
pf_at 0xbfea
l_kernel_0002c708: ret
pf_at 0xbfeb
l_kernel_0002c709: push ebp
pf_at 0xbfec
l_kernel_0002c70a: mov ebp,esp
pf_at 0xbfee
l_kernel_0002c70c: sub esp,byte +0x8
pf_at 0xbff1
l_kernel_0002c70f: lea eax,[ebp-0x4]
pf_at 0xbff4
l_kernel_0002c712: mov [eax],edx
pf_at 0xbff6
l_kernel_0002c714: mov dword [esp],0x4
pf_at 0xbffd
l_kernel_0002c71b: mov edx,eax
pf_at 0xbfff
l_kernel_0002c71d: call 0x2b6be
pf_at 0xc004
l_kernel_0002c722: add esp,byte +0x8
pf_at 0xc007
l_kernel_0002c725: pop ebp
pf_at 0xc008
l_kernel_0002c726: ret
pf_at 0xc009
l_kernel_0002c727: push ebp
pf_at 0xc00a
l_kernel_0002c728: mov ebp,esp
pf_at 0xc00c
l_kernel_0002c72a: sub esp,byte +0x8
pf_at 0xc00f
l_kernel_0002c72d: and dword [ebp-0x4],byte +0x0
pf_at 0xc013
l_kernel_0002c731: test ecx,ecx
pf_at 0xc015
l_kernel_0002c733: jz short 0x2c750
pf_at 0xc017
l_kernel_0002c735: lea edx,[ebp-0x4]
pf_at 0xc01a
l_kernel_0002c738: call 0x2b32b
pf_at 0xc01f
l_kernel_0002c73d: test al,al
pf_at 0xc021
l_kernel_0002c73f: jz short 0x2c75e
pf_at 0xc023
l_kernel_0002c741: mov eax,[ebp-0x4]
pf_at 0xc026
l_kernel_0002c744: test eax,eax
pf_at 0xc028
l_kernel_0002c746: mov ecx,0x2d057
pf_at 0xc02d
l_kernel_0002c74b: cmovnz ecx,eax
pf_at 0xc030
l_kernel_0002c74e: jmp short 0x2c763
pf_at 0xc032
l_kernel_0002c750: mov ecx,0x2d057
pf_at 0xc037
l_kernel_0002c755: add esp,byte +0x8
pf_at 0xc03a
l_kernel_0002c758: pop ebp
pf_at 0xc03b
l_kernel_0002c759: jmp near 0x2176e
pf_at 0xc040
l_kernel_0002c75e: mov ecx,0x2e4bc
pf_at 0xc045
l_kernel_0002c763: call 0x2176e
pf_at 0xc04a
l_kernel_0002c768: mov eax,[ebp-0x4]
pf_at 0xc04d
l_kernel_0002c76b: mov [esp],eax
pf_at 0xc050
l_kernel_0002c76e: call 0x20aee
pf_at 0xc055
l_kernel_0002c773: add esp,byte +0x8
pf_at 0xc058
l_kernel_0002c776: pop ebp
pf_at 0xc059
l_kernel_0002c777: ret
pf_at 0xc05a
l_kernel_0002c778: push ebp
pf_at 0xc05b
l_kernel_0002c779: mov ebp,esp
pf_at 0xc05d
l_kernel_0002c77b: push ebx
pf_at 0xc05e
l_kernel_0002c77c: push edi
pf_at 0xc05f
l_kernel_0002c77d: push esi
pf_at 0xc060
l_kernel_0002c77e: sub esp,byte +0x1c
pf_at 0xc063
l_kernel_0002c781: mov esi,[ebp+0x8]
pf_at 0xc066
l_kernel_0002c784: cmp esi,[ebp+0xc]
pf_at 0xc069
l_kernel_0002c787: jnc short 0x2c79c
pf_at 0xc06b
l_kernel_0002c789: mov edi,edx
pf_at 0xc06d
l_kernel_0002c78b: test edx,edx
pf_at 0xc06f
l_kernel_0002c78d: jz short 0x2c79c
pf_at 0xc071
l_kernel_0002c78f: cmp dword [ebp+0x10],byte +0x0
pf_at 0xc075
l_kernel_0002c793: jz short 0x2c79c
pf_at 0xc077
l_kernel_0002c795: mov eax,[ebp+0xc]
pf_at 0xc07a
l_kernel_0002c798: cmp [edi],eax
pf_at 0xc07c
l_kernel_0002c79a: jnc short 0x2c7bb
pf_at 0xc07e
l_kernel_0002c79c: sub esp,byte +0x4
pf_at 0xc081
l_kernel_0002c79f: push dword 0x2e3f8
pf_at 0xc086
l_kernel_0002c7a4: push byte +0x0
pf_at 0xc088
l_kernel_0002c7a6: push ecx
pf_at 0xc089
l_kernel_0002c7a7: call 0x2609c
pf_at 0xc08e
l_kernel_0002c7ac: add esp,byte +0x10
pf_at 0xc091
l_kernel_0002c7af: xor ebx,ebx
pf_at 0xc093
l_kernel_0002c7b1: mov eax,ebx
pf_at 0xc095
l_kernel_0002c7b3: add esp,byte +0x1c
pf_at 0xc098
l_kernel_0002c7b6: pop esi
pf_at 0xc099
l_kernel_0002c7b7: pop edi
pf_at 0xc09a
l_kernel_0002c7b8: pop ebx
pf_at 0xc09b
l_kernel_0002c7b9: pop ebp
pf_at 0xc09c
l_kernel_0002c7ba: ret
pf_at 0xc09d
l_kernel_0002c7bb: mov [ebp-0x10],ecx
pf_at 0xc0a0
l_kernel_0002c7be: lea ebx,[ebp-0x1c]
pf_at 0xc0a3
l_kernel_0002c7c1: and dword [ebx],byte +0x0
pf_at 0xc0a6
l_kernel_0002c7c4: and dword [ebx+0x4],byte +0x0
pf_at 0xc0aa
l_kernel_0002c7c8: and dword [ebx+0x8],byte +0x0
pf_at 0xc0ae
l_kernel_0002c7cc: cmp esi,[ebp+0xc]
pf_at 0xc0b1
l_kernel_0002c7cf: jnc short 0x2c7fa
pf_at 0xc0b3
l_kernel_0002c7d1: mov eax,[edi+0x8]
pf_at 0xc0b6
l_kernel_0002c7d4: mov edx,[eax+esi*4]
pf_at 0xc0b9
l_kernel_0002c7d7: mov ecx,ebx
pf_at 0xc0bb
l_kernel_0002c7d9: call 0x2c6d8
pf_at 0xc0c0
l_kernel_0002c7de: inc esi
pf_at 0xc0c1
l_kernel_0002c7df: test al,al
pf_at 0xc0c3
l_kernel_0002c7e1: jnz short 0x2c7cc
pf_at 0xc0c5
l_kernel_0002c7e3: lea ecx,[ebp-0x1c]
pf_at 0xc0c8
l_kernel_0002c7e6: call 0x26419
pf_at 0xc0cd
l_kernel_0002c7eb: sub esp,byte +0x4
pf_at 0xc0d0
l_kernel_0002c7ee: push dword 0x2e40c
pf_at 0xc0d5
l_kernel_0002c7f3: push byte +0x0
pf_at 0xc0d7
l_kernel_0002c7f5: push dword [ebp-0x10]
pf_at 0xc0da
l_kernel_0002c7f8: jmp short 0x2c7a7
pf_at 0xc0dc
l_kernel_0002c7fa: sub esp,byte +0xc
pf_at 0xc0df
l_kernel_0002c7fd: lea edi,[ebp-0x1c]
pf_at 0xc0e2
l_kernel_0002c800: mov ecx,[ebp-0x10]
pf_at 0xc0e5
l_kernel_0002c803: mov edx,edi
pf_at 0xc0e7
l_kernel_0002c805: push dword [ebp+0x10]
pf_at 0xc0ea
l_kernel_0002c808: call 0x26d92
pf_at 0xc0ef
l_kernel_0002c80d: add esp,byte +0x10
pf_at 0xc0f2
l_kernel_0002c810: mov ebx,eax
pf_at 0xc0f4
l_kernel_0002c812: mov ecx,edi
pf_at 0xc0f6
l_kernel_0002c814: call 0x26419
pf_at 0xc0fb
l_kernel_0002c819: jmp short 0x2c7b1
pf_at 0xc0fd
l_kernel_0002c81b: push ebp
pf_at 0xc0fe
l_kernel_0002c81c: mov ebp,esp
pf_at 0xc100
l_kernel_0002c81e: sub esp,byte +0x8
pf_at 0xc103
l_kernel_0002c821: mov eax,[ebp+0x8]
pf_at 0xc106
l_kernel_0002c824: cmp edx,byte +0x2
pf_at 0xc109
l_kernel_0002c827: jz short 0x2c83b
pf_at 0xc10b
l_kernel_0002c829: cmp edx,byte +0x1
pf_at 0xc10e
l_kernel_0002c82c: jnz short 0x2c848
pf_at 0xc110
l_kernel_0002c82e: movzx eax,al
pf_at 0xc113
l_kernel_0002c831: push eax
pf_at 0xc114
l_kernel_0002c832: push eax
pf_at 0xc115
l_kernel_0002c833: push ecx
pf_at 0xc116
l_kernel_0002c834: push dword 0x2e489
pf_at 0xc11b
l_kernel_0002c839: jmp short 0x2c850
pf_at 0xc11d
l_kernel_0002c83b: movzx eax,ax
pf_at 0xc120
l_kernel_0002c83e: push eax
pf_at 0xc121
l_kernel_0002c83f: push eax
pf_at 0xc122
l_kernel_0002c840: push ecx
pf_at 0xc123
l_kernel_0002c841: push dword 0x2e49a
pf_at 0xc128
l_kernel_0002c846: jmp short 0x2c850
pf_at 0xc12a
l_kernel_0002c848: push eax
pf_at 0xc12b
l_kernel_0002c849: push eax
pf_at 0xc12c
l_kernel_0002c84a: push ecx
pf_at 0xc12d
l_kernel_0002c84b: push dword 0x2e4ab
pf_at 0xc132
l_kernel_0002c850: call 0x21c41
pf_at 0xc137
l_kernel_0002c855: add esp,byte +0x18
pf_at 0xc13a
l_kernel_0002c858: pop ebp
pf_at 0xc13b
l_kernel_0002c859: ret
pf_at 0xc13c
l_kernel_0002c85a: push ebp
pf_at 0xc13d
l_kernel_0002c85b: mov ebp,esp
pf_at 0xc13f
l_kernel_0002c85d: push ebx
pf_at 0xc140
l_kernel_0002c85e: push edi
pf_at 0xc141
l_kernel_0002c85f: push esi
pf_at 0xc142
l_kernel_0002c860: sub esp,byte +0xc
pf_at 0xc145
l_kernel_0002c863: mov esi,edx
pf_at 0xc147
l_kernel_0002c865: and dword [ebp-0x10],byte +0x0
pf_at 0xc14b
l_kernel_0002c869: test ecx,ecx
pf_at 0xc14d
l_kernel_0002c86b: setz al
pf_at 0xc150
l_kernel_0002c86e: test edx,edx
pf_at 0xc152
l_kernel_0002c870: setz ah
pf_at 0xc155
l_kernel_0002c873: xor edx,edx
pf_at 0xc157
l_kernel_0002c875: or ah,al
pf_at 0xc159
l_kernel_0002c877: mov ebx,0x0
pf_at 0xc15e
l_kernel_0002c87c: jnz short 0x2c8ab
pf_at 0xc160
l_kernel_0002c87e: lea edi,[ebp-0x10]
pf_at 0xc163
l_kernel_0002c881: mov edx,edi
pf_at 0xc165
l_kernel_0002c883: call 0x2b32b
pf_at 0xc16a
l_kernel_0002c888: mov edx,[edi]
pf_at 0xc16c
l_kernel_0002c88a: test al,al
pf_at 0xc16e
l_kernel_0002c88c: jz short 0x2c8a9
pf_at 0xc170
l_kernel_0002c88e: push edx
pf_at 0xc171
l_kernel_0002c88f: push dword 0x2cb77
pf_at 0xc176
l_kernel_0002c894: push dword 0xf1
pf_at 0xc17b
l_kernel_0002c899: push esi
pf_at 0xc17c
l_kernel_0002c89a: call 0x216bc
pf_at 0xc181
l_kernel_0002c89f: add esp,byte +0x10
pf_at 0xc184
l_kernel_0002c8a2: mov bl,0x1
pf_at 0xc186
l_kernel_0002c8a4: mov edx,[ebp-0x10]
pf_at 0xc189
l_kernel_0002c8a7: jmp short 0x2c8ab
pf_at 0xc18b
l_kernel_0002c8a9: xor ebx,ebx
pf_at 0xc18d
l_kernel_0002c8ab: sub esp,byte +0xc
pf_at 0xc190
l_kernel_0002c8ae: push edx
pf_at 0xc191
l_kernel_0002c8af: call 0x20aee
pf_at 0xc196
l_kernel_0002c8b4: add esp,byte +0x10
pf_at 0xc199
l_kernel_0002c8b7: mov eax,ebx
pf_at 0xc19b
l_kernel_0002c8b9: add esp,byte +0xc
pf_at 0xc19e
l_kernel_0002c8bc: pop esi
pf_at 0xc19f
l_kernel_0002c8bd: pop edi
pf_at 0xc1a0
l_kernel_0002c8be: pop ebx
pf_at 0xc1a1
l_kernel_0002c8bf: pop ebp
pf_at 0xc1a2
l_kernel_0002c8c0: ret

section part16 start=0xc8c1 vstart=0x0 align=1
    times 10 db 0
    db 0x3f
    times 2 db 0
    db 0xc0, 0xc0
    times 2 db 0
    db 0xf0, 0x42
    times 1 db 0
    db 0x80, 0x9d, 0xc5
    times 3 db 0
    db 0xbf
    times 2 db 0
    db 0xc0, 0x41
    times 2 db 0
    db 0x34, 0xc4
    times 2 db 0
    db 0x20, 0x41, 0x18, 0x2d, 0x44, 0x54, 0xfb, 0x21
    db 0x09, 0x40, 0x18, 0x2d, 0x44, 0x54, 0xfb, 0x21
    db 0x09, 0xc0, 0x18, 0x2d, 0x44, 0x54, 0xfb, 0x21
    db 0x19, 0x40, 0x18, 0x2d, 0x44, 0x54, 0xfb, 0x21
    db 0x19, 0xc0, 0x87, 0x14, 0x02
    times 1 db 0
    db 0x20, 0x14, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0xa6, 0x14, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0x03, 0x14, 0x02
    times 1 db 0
    db 0x20, 0x14, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0x03, 0x14, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0x7f, 0x15, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0x6b, 0x14, 0x02
    times 1 db 0
    db 0x03, 0x14, 0x02
    times 1 db 0
    db 0xbb, 0x15, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0xaf, 0x15, 0x02
    times 1 db 0
    db 0x54, 0x14, 0x02
    times 1 db 0
    db 0x03, 0x14, 0x02
    times 1 db 0
    db 0xd7, 0x4d, 0x02
    times 1 db 0
    db 0x0a, 0x4e, 0x02
    times 1 db 0
    db 0x6e, 0x4e, 0x02
    times 1 db 0
    db 0x6e, 0x4e, 0x02
    times 1 db 0
    db 0xdc, 0x4d, 0x02
    times 1 db 0
    db 0x17, 0x4e, 0x02
    times 1 db 0
    db 0x94, 0x50, 0x02
    times 1 db 0
    db 0xb3, 0x50, 0x02
    times 1 db 0
    db 0xda, 0x50, 0x02
    times 1 db 0
    db 0xda, 0x50, 0x02
    times 1 db 0
    db 0xab, 0x50, 0x02
    times 1 db 0
    db 0xce, 0x50, 0x02
    times 1 db 0
    db 0x7a, 0x65, 0x02
    times 1 db 0
    db 0x8c, 0x65, 0x02
    times 1 db 0
    db 0x80, 0x65, 0x02
    times 1 db 0
    db 0xa4, 0x65, 0x02
    times 1 db 0
    db 0x7a, 0x65, 0x02
    times 1 db 0
    db 0x7a, 0x65, 0x02
    times 1 db 0
    db 0xaa, 0x65, 0x02
    times 1 db 0
    db 0x9f, 0x65, 0x02
    times 1 db 0
    db 0xff, 0x88, 0x02
    times 1 db 0
    db 0x2a, 0x89, 0x02
    times 1 db 0
    db 0x1a, 0x89, 0x02
    times 1 db 0
    db 0x7f, 0x89, 0x02
    times 1 db 0
    db 0x5a, 0x89, 0x02
    times 1 db 0
    db 0xd1, 0xb3, 0x02
    times 1 db 0
    db 0x3e, 0xb5, 0x02
    times 1 db 0
    db 0xf4, 0xb3, 0x02
    times 1 db 0
    db 0x05, 0xb4, 0x02
    times 1 db 0
    db 0xe1, 0xb3, 0x02
    times 1 db 0
    db 0x6c, 0xb5, 0x02
    times 1 db 0
    db 0x90, 0xb5, 0x02
    times 1 db 0
    db 0x88, 0xb4, 0x02
    times 1 db 0
    db 0x9d, 0xb9, 0x02
    times 1 db 0
    db 0xbb, 0xb9, 0x02
    times 1 db 0
    db 0xe6, 0xb9, 0x02
    times 1 db 0
    db 0xfa, 0xb9, 0x02
    times 1 db 0
    db 0x9d, 0xb9, 0x02
    times 1 db 0
    db 0x9d, 0xb9, 0x02
    times 1 db 0
    db 0x6c, 0xbb, 0x02
    times 1 db 0
    db 0x40, 0xbb, 0x02
    times 1 db 0
    db 0x40, 0xbb, 0x02
    times 1 db 0
    db 0x1f, 0xbb, 0x02
    times 1 db 0
    db 0x48, 0xbb, 0x02
    times 1 db 0
    db 0x40, 0xbb, 0x02
    times 1 db 0
    db 0x40, 0xbb, 0x02
    times 1 db 0
    db 0x73, 0xbb, 0x02
    times 1 db 0
    db 0x7b, 0xbb, 0x02
    times 1 db 0
    db 0x7a, 0xbc, 0x02
    times 1 db 0
    db 0x93, 0xbc, 0x02
    times 1 db 0
    db 0xa7, 0xbc, 0x02
    times 1 db 0
    db 0xc7, 0xbd, 0x02
    times 1 db 0
    db 0x7a, 0xbc, 0x02
    times 1 db 0
    db 0x7a, 0xbc, 0x02
    times 1 db 0
    db 0x40, 0x20
    times 1 db 0
    db "Permafrost"
    times 4 db 0
    db "/startup.ws"
    times 1 db 0
    db "/startup.wsbc"
    times 1 db 0
    db "/startup.ws"
    times 1 db 0
    db "/startup.wsbc"
    times 6 db 0
    db 0x80, 0x2f
    times 4 db 0
    db "WMFS32"
    times 2 db 0
    db 0x43
    times 1 db 0
    db 0x2e
    times 2 db 0
    db "(null)"
    times 1 db 0
    db "0123456789ABCDEF"
    times 1 db 0
    db "0123456789abcdef"
    times 1 db 0
    db 0x30, 0x78
    times 1 db 0
    db "ERROR: WMFS not ready"
    times 1 db 0
    db "ERROR: disk capacity unavailable"
    times 1 db 0
    db "WMFS already spans available disk"
    times 1 db 0
    db "ERROR: WMFS expansion failed"
    times 1 db 0
    db "WMFS expanded to %u sectors"
    times 1 db 0
    db "ERROR: failed to mount WMFS"
    times 1 db 0
    db 0x25, 0x73
    times 1 db 0
    db "%s%s"
    times 1 db 0
    db 0x0a
    times 1 db 0
    db "%s v%s (%s)"
    times 1 db 0
    db "WinterScript"
    times 1 db 0
    db 0x30, 0x2e, 0x31
    times 1 db 0
    db "Early Alpha Plus"
    times 1 db 0
    db "%s disk free   %s RAM free"
    times 1 db 0
    db "by %s"
    times 1 db 0
    db "Maika"
    times 1 db 0
    db "27 March, 2026"
    times 1 db 0
    db "(C) Far West Sanctuary 2025,2026"
    times 1 db 0
    db "%u.%u GB"
    times 1 db 0
    db "%u GB"
    times 1 db 0
    db "%u MB"
    times 1 db 0
    db "%u KB"
    times 1 db 0
    db "%u B"
    times 1 db 0
    db "WINTER_NAME"
    times 1 db 0
    db "WINTER_VERSION"
    times 1 db 0
    db "WINTER_RELEASE"
    times 1 db 0
    db "WINTER_AUTHOR"
    times 1 db 0
    db "WINTER_BUILD_DATE"
    times 1 db 0
    db 0x2e, 0x2e
    times 1 db 0
    db "ERROR: failed to load /startup.ws"
    times 1 db 0
    db "ERROR: failed to run /startup.wsbc"
    times 1 db 0
    db "(empty)"
    times 1 db 0
    db 0x65, 0x6e, 0x64
    times 1 db 0
    db "else"
    times 1 db 0
    db "until"
    times 1 db 0
    db "unexpected block terminator"
    times 1 db 0
    db "failed to tokenize line"
    times 1 db 0
    db 0x69, 0x66
    times 1 db 0
    db "unexpected trailing token after if condition"
    times 1 db 0
    db "missing 'end' for if block"
    times 1 db 0
    db "expected 'else' or 'end'"
    times 1 db 0
    db "missing 'end' for if/else block"
    times 1 db 0
    db "while"
    times 1 db 0
    db "missing 'end' for while block"
    times 1 db 0
    db "unexpected trailing token after while condition"
    times 1 db 0
    db "repeat"
    times 1 db 0
    db "missing 'until' for repeat block"
    times 1 db 0
    db "repeat block did not reach matching until"
    times 1 db 0
    db "unexpected trailing token after until condition"
    times 1 db 0
    db 0x6f, 0x72
    times 1 db 0
    db 0x7c, 0x7c
    times 1 db 0
    db 0x61, 0x6e, 0x64
    times 1 db 0
    db 0x26, 0x26
    times 1 db 0
    db 0x3d, 0x3d
    times 1 db 0
    db 0x21, 0x3d
    times 1 db 0
    db 0x7e, 0x3d
    times 1 db 0
    db 0x3c
    times 1 db 0
    db 0x3e
    times 1 db 0
    db 0x3c, 0x3d
    times 1 db 0
    db 0x3e, 0x3d
    times 1 db 0
    db 0x2b
    times 1 db 0
    db 0x2d
    times 1 db 0
    db 0x2a
    times 1 db 0
    db 0x2f
    times 1 db 0
    db 0x25
    times 1 db 0
    db "unary '-' expects a numeric value"
    times 1 db 0
    db 0x21
    times 1 db 0
    db 0x6e, 0x6f, 0x74
    times 1 db 0
    db 0x45, 0x4f, 0x46
    times 1 db 0
    db "unexpected end of expression"
    times 1 db 0
    db 0x28
    times 1 db 0
    db 0x29
    times 1 db 0
    db "expected ')'"
    times 1 db 0
    db 0x5b
    times 1 db 0
    db "out of memory while building array"
    times 1 db 0
    db 0x5d
    times 1 db 0
    db 0x2c
    times 1 db 0
    db "expected ',' or ']'"
    times 1 db 0
    db 0x7b
    times 1 db 0
    db "out of memory while building table"
    times 1 db 0
    db 0x7d
    times 1 db 0
    db "unexpected end of table literal"
    times 1 db 0
    db "invalid string key"
    times 1 db 0
    db "true"
    times 1 db 0
    db "false"
    times 1 db 0
    db "invalid table key"
    times 1 db 0
    db 0x3a
    times 1 db 0
    db 0x3d
    times 1 db 0
    db "expected ':' after table key"
    times 1 db 0
    db "expected ',' or '}'"
    times 1 db 0
    db "invalid string literal"
    times 1 db 0
    db "out of memory while evaluating arguments"
    times 1 db 0
    db "expected ',' or ')'"
    times 1 db 0
    db "unexpected token"
    times 1 db 0
    db "expected ']'"
    times 1 db 0
    db "invalid index access"
    times 1 db 0
    db 0x25, 0x64
    times 1 db 0
    db 0x25, 0x66
    times 1 db 0
    db "null"
    times 1 db 0
    db "[nested]"
    times 1 db 0
    db "$%08X"
    times 1 db 0
    db "raw["
    times 1 db 0
    db 0x20
    times 1 db 0
    db "%02X"
    times 1 db 0
    db " ..."
    times 1 db 0
    db 0x2c, 0x20
    times 1 db 0
    db 0x3a, 0x20
    times 1 db 0
    db "[unconvertible type]"
    times 1 db 0
    db "print"
    times 1 db 0
    db "out of memory while building print text"
    times 1 db 0
    db "serial"
    times 1 db 0
    db "out of memory while building serial text"
    times 1 db 0
    db "input"
    times 1 db 0
    db "peek"
    times 1 db 0
    db "poke"
    times 1 db 0
    db "dump"
    times 1 db 0
    db 0x64, 0x69, 0x72
    times 1 db 0
    db "dir expects zero or one argument"
    times 1 db 0
    db "%s (%u bytes)"
    times 1 db 0
    db "read"
    times 1 db 0
    db "write"
    times 1 db 0
    db "delete"
    times 1 db 0
    db "bload"
    times 1 db 0
    db "bsave"
    times 1 db 0
    db "call"
    times 1 db 0
    db "runcode"
    times 1 db 0
    db "array"
    times 1 db 0
    db "table"
    times 1 db 0
    db 0x6c, 0x65, 0x6e
    times 1 db 0
    db "len expects an array, table, or string"
    times 1 db 0
    db "push"
    times 1 db 0
    db "push expects array, value"
    times 1 db 0
    db "out of memory while pushing"
    times 1 db 0
    db "reserve"
    times 1 db 0
    db "reserve expects array, capacity"
    times 1 db 0
    db "out of memory while reserving array"
    times 1 db 0
    db 0x67, 0x65, 0x74
    times 1 db 0
    db "get expects container, key[, default]"
    times 1 db 0
    db "get lookup failed"
    times 1 db 0
    db 0x73, 0x65, 0x74
    times 1 db 0
    db "set expects container, key, value"
    times 1 db 0
    db "out of memory while setting value"
    times 1 db 0
    db "set failed"
    times 1 db 0
    db 0x70, 0x6f, 0x70
    times 1 db 0
    db "pop expects a non-empty array"
    times 1 db 0
    db "clear"
    times 1 db 0
    db "clear expects 1 argument"
    times 1 db 0
    db "clear expects an array or table"
    times 1 db 0
    db "erase"
    times 1 db 0
    db "erase expects container, key"
    times 1 db 0
    db "erase key must be string, number, or bool"
    times 1 db 0
    db "erase expects an array or table"
    times 1 db 0
    db "contains"
    times 1 db 0
    db "contains expects container, value"
    times 1 db 0
    db "contains key must be string, number, or bool"
    times 1 db 0
    db "contains expects an array or table"
    times 1 db 0
    db "keys"
    times 1 db 0
    db "keys expects a table"
    times 1 db 0
    db "out of memory while building keys"
    times 1 db 0
    db "values"
    times 1 db 0
    db "values expects 1 argument"
    times 1 db 0
    db "values expects an array or table"
    times 1 db 0
    db "out of memory while building values"
    times 1 db 0
    db "gsub"
    times 1 db 0
    db "pause"
    times 1 db 0
    db "sleep"
    times 1 db 0
    db "pause expects a non-negative duration"
    times 1 db 0
    db "date"
    times 1 db 0
    db 0x76, 0x65, 0x72
    times 1 db 0
    db "help"
    times 1 db 0
    db "getTimeMs"
    times 1 db 0
    db "random"
    times 1 db 0
    db "random(max) expects max > 0"
    times 1 db 0
    db "random(min,max) expects min < max"
    times 1 db 0
    db "random expects 0, 1, or 2 arguments"
    times 1 db 0
    db "toString"
    times 1 db 0
    db "toNumber"
    times 1 db 0
    db "toNumber expects a numeric string or number"
    times 1 db 0
    db "typeOf"
    times 1 db 0
    db "unknown function '%s'"
    times 1 db 0
    db "%s expects %u argument%s"
    times 1 db 0
    db 0x73
    times 1 db 0
    db "%s expects address[,size]"
    times 1 db 0
    db "%s is missing argument %u"
    times 1 db 0
    db "%s argument %u must be an unsigned address or size"
    times 1 db 0
    db "%s size must be 1, 2, or 4 for scalar reads"
    times 1 db 0
    db "%s expects address,value[,size]"
    times 1 db 0
    db "%s size must be 1, 2, or 4 for scalar writes"
    times 1 db 0
    db "%08X:"
    times 1 db 0
    db " %02X"
    times 1 db 0
    db "%s argument %u must be a string"
    times 1 db 0
    db "%s expects a path or address"
    times 1 db 0
    db "%s memory form expects address[,size]"
    times 1 db 0
    db "file not found"
    times 1 db 0
    db "%s text reads are capped at 65535 bytes"
    times 1 db 0
    db "%s expects path,text or address,value"
    times 1 db 0
    db "write failed"
    times 1 db 0
    db "out of memory while building text"
    times 1 db 0
    db "delete failed"
    times 1 db 0
    db "bsave failed"
    times 1 db 0
    db "%s argument %u must be numeric"
    times 1 db 0
    db "gsub expects 3 arguments"
    times 1 db 0
    db "gsub expects string, pattern, replacement"
    times 1 db 0
    db "gsub replacement must be a string or table"
    times 1 db 0
    db 0x72, 0x65, 0x3a
    times 1 db 0
    db "regex gsub patterns are not supported in the bundled runtime"
    times 1 db 0
    db "out of memory while building replacement"
    times 1 db 0
    db "gsub replacement table missing key ''"
    times 1 db 0
    db "out of memory while running gsub"
    times 1 db 0
    db "gsub replacement table missing key '%s'"
    times 1 db 0
    db "print(text)       write text to screen log"
    times 1 db 0
    db "serial(text)      write text to serial"
    times 1 db 0
    db "input()           read a line and return it"
    times 1 db 0
    db "array()/table()   create WinterScript collections"
    times 1 db 0
    db "len/get/set       collection and string helpers"
    times 1 db 0
    db "push/pop/clear    array and table mutation"
    times 1 db 0
    db "erase/contains    collection lookup helpers"
    times 1 db 0
    db "keys/values/gsub  table/string helper functions"
    times 1 db 0
    db "peek(a[,s])       read scalar memory at address"
    times 1 db 0
    db "poke(a,v[,s])     write scalar memory at address"
    times 1 db 0
    db "dump(a,n)         hex dump memory"
    times 1 db 0
    db "bload(p,a)        load raw machine code/file"
    times 1 db 0
    db "bsave(p,a,n)      save raw memory bytes"
    times 1 db 0
    db "call(a)           call raw machine code"
    times 1 db 0
    db "runcode(p,a)      load then call raw code"
    times 1 db 0
    db "dir([prefix])     list WMFS files"
    times 1 db 0
    db "read(x[,n])       read file text/raw, or read RAM"
    times 1 db 0
    db "write(x,v[,n])    write file text/raw or write RAM"
    times 1 db 0
    db "delete(p)         remove WMFS file"
    times 1 db 0
    db "LIST/NEW/RUN      WinterScript buffer commands"
    times 1 db 0
    db "SAVE [path]       save buffer, default /startup.ws"
    times 1 db 0
    db "LOAD [path]       load WinterScript buffer"
    times 1 db 0
    db "SAVEBC [path]     save WSBC bytecode"
    times 1 db 0
    db "LOADBC [path]     load WSBC into buffer"
    times 1 db 0
    db "RUNBC [path]      run WSBC without loading"
    times 1 db 0
    db "> line            append raw WinterScript line"
    times 1 db 0
    db "iN> line          insert at buffer line N"
    times 1 db 0
    db "N> line           overwrite buffer line N"
    times 1 db 0
    db "Other input runs as one-line WinterScript"
    times 1 db 0
    db 0x69, 0x6e, 0x74
    times 1 db 0
    db "float"
    times 1 db 0
    db "string"
    times 1 db 0
    db 0x72, 0x61, 0x77
    times 1 db 0
    db "bool"
    times 1 db 0
    db "pointer"
    times 1 db 0
    db "unknown variable '%s'"
    times 1 db 0
    db "out of memory while concatenating strings"
    times 1 db 0
    db "operator '+' expects numbers or strings"
    times 1 db 0
    db "operator '%s' expects numeric values"
    times 1 db 0
    db "division by zero"
    times 1 db 0
    db "operator '%s' expects comparable values"
    times 1 db 0
    db "unsupported operator '%s'"
    times 1 db 0
    db "out of memory while parsing assignment"
    times 1 db 0
    db 0x2b, 0x3d
    times 1 db 0
    db 0x2d, 0x3d
    times 1 db 0
    db 0x2a, 0x3d
    times 1 db 0
    db 0x2f, 0x3d
    times 1 db 0
    db "unexpected trailing token"
    times 1 db 0
    db "out of memory while assigning '%s'"
    times 1 db 0
    db "invalid indexed assignment"
    times 1 db 0
    db "WinterScript error: %s"
    times 1 db 0
    db "  at line %u near '%s'"
    times 1 db 0
    db "  at line %u"
    times 1 db 0
    db "  %s"
    times 1 db 0
    db "ERROR: %s"
    times 1 db 0
    db "failed to open bytecode file"
    times 1 db 0
    db "WSBC"
    times 1 db 0
    db "invalid bytecode file (bad magic)"
    times 1 db 0
    db "unsupported bytecode version: %u"
    times 1 db 0
    db "invalid bytecode file (truncated string length)"
    times 1 db 0
    db "invalid bytecode file (truncated string data)"
    times 1 db 0
    db "out of memory while loading bytecode"
    times 1 db 0
    db "invalid bytecode file (truncated code)"
    times 1 db 0
    db "bytecode decode error: expected PUSH_INT at start of line"
    times 1 db 0
    db "bytecode decode error: line text id out of range"
    times 1 db 0
    db "bytecode decode error: unexpected end of stream"
    times 1 db 0
    db "bytecode decode error: expected PUSH_STRING token"
    times 1 db 0
    db "bytecode decode error: token string id out of range"
    times 1 db 0
    db "out of memory while decoding bytecode"
    times 1 db 0
    db 0x08, 0x20, 0x08
    times 1 db 0
    db "ERROR: script buffer full"
    times 1 db 0
    db "ERROR: buffer line number out of range"
    times 1 db 0
    db "ERROR: buffer line numbers start at 1"
    times 1 db 0
    db "ERROR: insert line out of range"
    times 1 db 0
    db "ERROR: overwrite line out of range"
    times 1 db 0
    db "ERROR: overwrite failed"
    times 1 db 0
    db 0x52, 0x45, 0x4d
    times 1 db 0
    db "LIST"
    times 1 db 0
    db 0x4e, 0x45, 0x57
    times 1 db 0
    db "SAVE"
    times 1 db 0
    db "LOAD"
    times 1 db 0
    db 0x52, 0x55, 0x4e
    times 1 db 0
    db "SAVEBC"
    times 1 db 0
    db "LOADBC"
    times 1 db 0
    db "RUNBC"
    times 1 db 0
    db "ERROR: too many arguments"
    times 1 db 0
    db 0x4f, 0x4b
    times 1 db 0
    db "ERROR: SAVE failed"
    times 1 db 0
    db "SAVED %s"
    times 1 db 0
    db "ERROR: SAVEBC failed"
    times 1 db 0
    db "ERROR: LOAD failed"
    times 1 db 0
    db "ERROR: use LOADBC for bytecode files"
    times 1 db 0
    db "LOADED %s"
    times 1 db 0
    db "ERROR: unknown command '%s'"
    times 1 db 0
    db "%u %s"
    times 1 db 0
    db "unexpected ')'"
    times 1 db 0
    db "unexpected ']'"
    times 1 db 0
    db "unexpected '}'"
    times 1 db 0
    db "expected expression"
    times 1 db 0
    db "out of memory while slicing tokens"
    times 1 db 0
    db "WROTE %08X"
    times 1 db 0
    db "BLOAD %s -> %08X (%u bytes)"
    times 1 db 0
    db "BSAVE %s <- %08X (%u bytes)"
    times 1 db 0
    db "RET %08X"
    times 1 db 0
    db "RUN %s @ %08X"
    times 1 db 0
    db "%08X = %02X (%u)"
    times 1 db 0
    db "%08X = %04X (%u)"
    times 1 db 0
    db "%08X = %08X (%u)"
    times 1 db 0
    db "[format error]"
    times 2870 db 0
    db 0xc6, 0x06, 0x02
    times 1 db 0
    db 0xce, 0x06, 0x02
    times 1 db 0
    db 0xd2, 0x06, 0x02
    times 1 db 0
    db 0xca, 0x06, 0x02
    times 1 db 0
    db 0xc4, 0x06, 0x02
    times 1 db 0
    db 0xc2, 0x06, 0x02
    times 1 db 0
    db 0xc0, 0x06, 0x02
    times 1 db 0
    db 0xd6, 0x06, 0x02
    times 1 db 0
    db 0xde, 0x06, 0x02
    times 1 db 0
    db 0xda, 0x06, 0x02
    times 1 db 0
    db 0x16, 0x07, 0x02
    times 1 db 0
    db 0x1a, 0x07, 0x02
    times 1 db 0
    db 0x02, 0x07, 0x02
    times 1 db 0
    db 0xfe, 0x06, 0x02
    times 1 db 0
    db 0xf2, 0x06, 0x02
    times 1 db 0
    db 0xf6, 0x06, 0x02
    times 1 db 0
    db 0xfa, 0x06, 0x02
    times 1 db 0
    db 0x0e, 0x07, 0x02
    times 1 db 0
    db 0x12, 0x07, 0x02
    times 1 db 0
    db 0x06, 0x07, 0x02
    times 1 db 0
    db 0x0a, 0x07, 0x02
    times 1 db 0
    db 0x17, 0xde, 0x02
    times 1 db 0
    db 0x1b, 0xde, 0x02
    times 1 db 0
    db 0x21, 0xde, 0x02
    times 1 db 0
    db 0x28, 0xde, 0x02
    times 1 db 0
    db 0x2c, 0xde, 0x02
    times 1 db 0
    db 0x31, 0xde, 0x02
    times 1 db 0
    db 0x68, 0xd1, 0x02
    times 1 db 0
    db 0x6e, 0xd1, 0x02
    times 1 db 0
    db 0x9a, 0xca, 0x02
    times 1 db 0
    db 0x9c, 0xca, 0x02
    times 1 db 0
    db 0x9c, 0xca, 0x02
    times 1 db 0
    db 0x9c, 0xca, 0x02
    times 1 db 0
    db 0x9c, 0xca, 0x02
    times 1 db 0
    db 0x9a, 0xca, 0x02
    times 1 db 0
    db 0x9c, 0xca, 0x02
    times 1 db 0
    db 0x9c, 0xca, 0x02
    times 1 db 0
    db 0x9c, 0xca, 0x02
    times 1 db 0
    db 0x9c, 0xca, 0x02
    times 9 db 0
    db 0xff, 0xff, 0x50
    times 1 db 0
    db 0xdf, 0x9b, 0x57, 0x13
    times 270164 db 0
