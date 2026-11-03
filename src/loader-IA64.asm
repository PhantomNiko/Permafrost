; Permafrost 0.4 — recovered assembly, Pooka's Free Software License.
; Fixed virtual addresses preserve compatibility with original raw programs.
; at() retains original instruction boundaries when NASM shortens an encoding.
%macro pf_at 1
    times %1 - ($-$$) db 0x90
%endmacro

section part0 start=0x0 vstart=0x0 align=1
bits 16
pf_at 0x0
l_loader_00000000: cli
pf_at 0x1
l_loader_00000001: mov ax,cs
pf_at 0x3
l_loader_00000003: mov ds,ax
pf_at 0x5
l_loader_00000005: mov es,ax
pf_at 0x7
l_loader_00000007: mov ax,0x900
pf_at 0xa
l_loader_0000000a: mov ss,ax
pf_at 0xc
l_loader_0000000c: mov sp,0xfffe
pf_at 0xf
l_loader_0000000f: cld
pf_at 0x10
l_loader_00000010: sti
pf_at 0x11
l_loader_00000011: mov [0x1004],dl
pf_at 0x15
l_loader_00000015: mov byte [0x1006],0x3f
pf_at 0x1a
l_loader_0000001a: mov byte [0x1007],0x3f
pf_at 0x1f
l_loader_0000001f: mov byte [0x1008],0x0
pf_at 0x24
l_loader_00000024: lea si,[0xf4f]
pf_at 0x28
l_loader_00000028: call 0xd59
pf_at 0x2b
l_loader_0000002b: call 0x143
pf_at 0x2e
l_loader_0000002e: call 0x21a
pf_at 0x31
l_loader_00000031: mov byte [0x1006],0x53
pf_at 0x36
l_loader_00000036: mov byte [0x1007],0x44
pf_at 0x3b
l_loader_0000003b: call 0xea
pf_at 0x3e
l_loader_0000003e: jnc short 0x47
pf_at 0x40
l_loader_00000040: call 0x306
pf_at 0x43
l_loader_00000043: jnc short 0x31
pf_at 0x45
l_loader_00000045: jmp short 0x7c
pf_at 0x47
l_loader_00000047: mov byte [0x1006],0x48
pf_at 0x4c
l_loader_0000004c: mov byte [0x1007],0x46
pf_at 0x51
l_loader_00000051: call 0x1a9
pf_at 0x54
l_loader_00000054: jnc short 0x5d
pf_at 0x56
l_loader_00000056: call 0x306
pf_at 0x59
l_loader_00000059: jnc short 0x31
pf_at 0x5b
l_loader_0000005b: jmp short 0x7c
pf_at 0x5d
l_loader_0000005d: call 0x48b
pf_at 0x60
l_loader_00000060: call 0x4e4
pf_at 0x63
l_loader_00000063: call 0xad9
pf_at 0x66
l_loader_00000066: mov byte [0x1006],0x54
pf_at 0x6b
l_loader_0000006b: mov byte [0x1007],0x4d
pf_at 0x70
l_loader_00000070: call 0xb6e
pf_at 0x73
l_loader_00000073: call 0xb74
pf_at 0x76
l_loader_00000076: call 0xb7b
pf_at 0x79
l_loader_00000079: hlt
pf_at 0x7a
l_loader_0000007a: jmp short 0x79
pf_at 0x7c
l_loader_0000007c: push ax
pf_at 0x7d
l_loader_0000007d: mov ax,cs
pf_at 0x7f
l_loader_0000007f: mov ds,ax
pf_at 0x81
l_loader_00000081: pop ax
pf_at 0x82
l_loader_00000082: lea si,[0xf36]
pf_at 0x86
l_loader_00000086: call 0xd59
pf_at 0x89
l_loader_00000089: mov al,0x20
pf_at 0x8b
l_loader_0000008b: call 0xd3f
pf_at 0x8e
l_loader_0000008e: mov al,0x5b
pf_at 0x90
l_loader_00000090: call 0xd3f
pf_at 0x93
l_loader_00000093: mov al,[0x1006]
pf_at 0x96
l_loader_00000096: call 0xd3f
pf_at 0x99
l_loader_00000099: mov al,0x3a
pf_at 0x9b
l_loader_0000009b: call 0xd3f
pf_at 0x9e
l_loader_0000009e: mov al,[0x1007]
pf_at 0xa1
l_loader_000000a1: call 0xd3f
pf_at 0xa4
l_loader_000000a4: mov al,0x20
pf_at 0xa6
l_loader_000000a6: call 0xd3f
pf_at 0xa9
l_loader_000000a9: mov al,[0x1008]
pf_at 0xac
l_loader_000000ac: call 0xd75
pf_at 0xaf
l_loader_000000af: cmp byte [0x1007],0x44
pf_at 0xb4
l_loader_000000b4: jnz short 0xe2
pf_at 0xb6
l_loader_000000b6: mov al,0x20
pf_at 0xb8
l_loader_000000b8: call 0xd3f
pf_at 0xbb
l_loader_000000bb: mov al,0x4c
pf_at 0xbd
l_loader_000000bd: call 0xd3f
pf_at 0xc0
l_loader_000000c0: push ax
pf_at 0xc1
l_loader_000000c1: mov ax,cs
pf_at 0xc3
l_loader_000000c3: mov ds,ax
pf_at 0xc5
l_loader_000000c5: pop ax
pf_at 0xc6
l_loader_000000c6: mov ax,[0x10a0]
pf_at 0xc9
l_loader_000000c9: call 0xd87
pf_at 0xcc
l_loader_000000cc: mov al,0x20
pf_at 0xce
l_loader_000000ce: call 0xd3f
pf_at 0xd1
l_loader_000000d1: mov al,0x53
pf_at 0xd3
l_loader_000000d3: call 0xd3f
pf_at 0xd6
l_loader_000000d6: push ax
pf_at 0xd7
l_loader_000000d7: mov ax,cs
pf_at 0xd9
l_loader_000000d9: mov ds,ax
pf_at 0xdb
l_loader_000000db: pop ax
pf_at 0xdc
l_loader_000000dc: mov ax,[0x109c]
pf_at 0xdf
l_loader_000000df: call 0xd87
pf_at 0xe2
l_loader_000000e2: mov al,0x5d
pf_at 0xe4
l_loader_000000e4: call 0xd3f
pf_at 0xe7
l_loader_000000e7: hlt
pf_at 0xe8
l_loader_000000e8: jmp short 0xe7
pf_at 0xea
l_loader_000000ea: push ax
pf_at 0xeb
l_loader_000000eb: mov ax,cs
pf_at 0xed
l_loader_000000ed: mov ds,ax
pf_at 0xef
l_loader_000000ef: pop ax
pf_at 0xf0
l_loader_000000f0: mov ax,0x1000
pf_at 0xf3
l_loader_000000f3: mov es,ax
pf_at 0xf5
l_loader_000000f5: xor bx,bx
pf_at 0xf7
l_loader_000000f7: mov eax,[0x1024]
pf_at 0xfb
l_loader_000000fb: mov [0x10a0],eax
pf_at 0xff
l_loader_000000ff: mov [0x109c],eax
pf_at 0x103
l_loader_00000103: mov word [0x1014],0x1
pf_at 0x109
l_loader_00000109: mov cx,0x1
pf_at 0x10c
l_loader_0000010c: call 0xc6a
pf_at 0x10f
l_loader_0000010f: jc short 0x142
pf_at 0x111
l_loader_00000111: mov ax,[es:0x10]
pf_at 0x115
l_loader_00000115: mov [0x100e],ax
pf_at 0x118
l_loader_00000118: mov eax,[es:0x1c]
pf_at 0x11d
l_loader_0000011d: add eax,[0x1024]
pf_at 0x122
l_loader_00000122: mov [0x101c],eax
pf_at 0x126
l_loader_00000126: mov ax,[es:0x20]
pf_at 0x12a
l_loader_0000012a: mov [0x1010],ax
pf_at 0x12d
l_loader_0000012d: mov eax,[es:0x24]
pf_at 0x132
l_loader_00000132: add eax,[0x1024]
pf_at 0x137
l_loader_00000137: mov [0x1020],eax
pf_at 0x13b
l_loader_0000013b: mov ax,[es:0x2c]
pf_at 0x13f
l_loader_0000013f: mov [0x1012],ax
pf_at 0x142
l_loader_00000142: ret
pf_at 0x143
l_loader_00000143: push ds
pf_at 0x144
l_loader_00000144: push eax
pf_at 0x146
l_loader_00000146: push ebx
pf_at 0x148
l_loader_00000148: push ecx
pf_at 0x14a
l_loader_0000014a: push edx
pf_at 0x14c
l_loader_0000014c: mov ax,cs
pf_at 0x14e
l_loader_0000014e: mov ds,ax
pf_at 0x150
l_loader_00000150: mov byte [0x1005],0x0
pf_at 0x155
l_loader_00000155: pushfd
pf_at 0x157
l_loader_00000157: pop eax
pf_at 0x159
l_loader_00000159: mov ecx,eax
pf_at 0x15c
l_loader_0000015c: xor eax,0x200000
pf_at 0x162
l_loader_00000162: push eax
pf_at 0x164
l_loader_00000164: popfd
pf_at 0x166
l_loader_00000166: pushfd
pf_at 0x168
l_loader_00000168: pop eax
pf_at 0x16a
l_loader_0000016a: push ecx
pf_at 0x16c
l_loader_0000016c: popfd
pf_at 0x16e
l_loader_0000016e: xor eax,ecx
pf_at 0x171
l_loader_00000171: test eax,0x200000
pf_at 0x177
l_loader_00000177: jz short 0x19f
pf_at 0x179
l_loader_00000179: mov eax,0x80000000
pf_at 0x17f
l_loader_0000017f: cpuid
pf_at 0x181
l_loader_00000181: cmp eax,0x80000001
pf_at 0x187
l_loader_00000187: jc short 0x19f
pf_at 0x189
l_loader_00000189: mov eax,0x80000001
pf_at 0x18f
l_loader_0000018f: cpuid
pf_at 0x191
l_loader_00000191: test edx,0x20000000
pf_at 0x198
l_loader_00000198: jz short 0x19f
pf_at 0x19a
l_loader_0000019a: mov byte [0x1005],0x1
pf_at 0x19f
l_loader_0000019f: pop edx
pf_at 0x1a1
l_loader_000001a1: pop ecx
pf_at 0x1a3
l_loader_000001a3: pop ebx
pf_at 0x1a5
l_loader_000001a5: pop eax
pf_at 0x1a7
l_loader_000001a7: pop ds
pf_at 0x1a8
l_loader_000001a8: ret
pf_at 0x1a9
l_loader_000001a9: cmp byte [0x1005],0x0
pf_at 0x1ae
l_loader_000001ae: jz short 0x1e3
pf_at 0x1b0
l_loader_000001b0: mov dword [0x1030],0x1
pf_at 0x1b9
l_loader_000001b9: mov byte [0x1006],0x48
pf_at 0x1be
l_loader_000001be: mov byte [0x1007],0x46
pf_at 0x1c3
l_loader_000001c3: mov byte [0x1008],0x0
pf_at 0x1c8
l_loader_000001c8: mov ax,0x2000
pf_at 0x1cb
l_loader_000001cb: lea si,[0xf6e]
pf_at 0x1cf
l_loader_000001cf: call 0x33d
pf_at 0x1d2
l_loader_000001d2: jc short 0x1e3
pf_at 0x1d4
l_loader_000001d4: mov byte [0x1006],0x50
pf_at 0x1d9
l_loader_000001d9: mov byte [0x1007],0x42
pf_at 0x1de
l_loader_000001de: call 0x40a
pf_at 0x1e1
l_loader_000001e1: jnc short 0x216
pf_at 0x1e3
l_loader_000001e3: mov dword [0x1030],0x0
pf_at 0x1ec
l_loader_000001ec: mov byte [0x1006],0x48
pf_at 0x1f1
l_loader_000001f1: mov byte [0x1007],0x46
pf_at 0x1f6
l_loader_000001f6: mov byte [0x1008],0x0
pf_at 0x1fb
l_loader_000001fb: mov ax,0x2000
pf_at 0x1fe
l_loader_000001fe: lea si,[0xf54]
pf_at 0x202
l_loader_00000202: call 0x33d
pf_at 0x205
l_loader_00000205: jc short 0x218
pf_at 0x207
l_loader_00000207: mov byte [0x1006],0x50
pf_at 0x20c
l_loader_0000020c: mov byte [0x1007],0x42
pf_at 0x211
l_loader_00000211: call 0x40a
pf_at 0x214
l_loader_00000214: jc short 0x218
pf_at 0x216
l_loader_00000216: clc
pf_at 0x217
l_loader_00000217: ret
pf_at 0x218
l_loader_00000218: stc
pf_at 0x219
l_loader_00000219: ret
pf_at 0x21a
l_loader_0000021a: push ax
pf_at 0x21b
l_loader_0000021b: push bx
pf_at 0x21c
l_loader_0000021c: push cx
pf_at 0x21d
l_loader_0000021d: push ds
pf_at 0x21e
l_loader_0000021e: push es
pf_at 0x21f
l_loader_0000021f: mov ax,cs
pf_at 0x221
l_loader_00000221: mov ds,ax
pf_at 0x223
l_loader_00000223: mov dword [0x1024],0x41
pf_at 0x22c
l_loader_0000022c: mov dword [0x1028],0x0
pf_at 0x235
l_loader_00000235: mov dword [0x102c],0x0
pf_at 0x23e
l_loader_0000023e: mov dword [0x1034],0x0
pf_at 0x247
l_loader_00000247: mov dword [0x1038],0x0
pf_at 0x250
l_loader_00000250: mov dword [0x103c],0x0
pf_at 0x259
l_loader_00000259: mov ax,0x1000
pf_at 0x25c
l_loader_0000025c: mov es,ax
pf_at 0x25e
l_loader_0000025e: xor bx,bx
pf_at 0x260
l_loader_00000260: mov eax,0x41
pf_at 0x266
l_loader_00000266: mov [0x10a0],eax
pf_at 0x26a
l_loader_0000026a: mov [0x109c],eax
pf_at 0x26e
l_loader_0000026e: mov word [0x1014],0x1
pf_at 0x274
l_loader_00000274: mov cx,0x1
pf_at 0x277
l_loader_00000277: call 0xc6a
pf_at 0x27a
l_loader_0000027a: jc short 0x2fa
pf_at 0x27c
l_loader_0000027c: cmp word [es:0x0],0x4257
pf_at 0x283
l_loader_00000283: jnz short 0x2fa
pf_at 0x285
l_loader_00000285: cmp word [es:0x2],0x5450
pf_at 0x28c
l_loader_0000028c: jnz short 0x2fa
pf_at 0x28e
l_loader_0000028e: cmp word [es:0x4],byte +0x1
pf_at 0x294
l_loader_00000294: jnz short 0x2fa
pf_at 0x296
l_loader_00000296: cmp word [es:0x6],byte +0x1
pf_at 0x29c
l_loader_0000029c: jc short 0x2fa
pf_at 0x29e
l_loader_0000029e: cmp dword [es:0x20],byte +0x1
pf_at 0x2a5
l_loader_000002a5: jnz short 0x2fa
pf_at 0x2a7
l_loader_000002a7: mov eax,[es:0x24]
pf_at 0x2ac
l_loader_000002ac: cmp eax,byte +0x41
pf_at 0x2b0
l_loader_000002b0: jna short 0x2fa
pf_at 0x2b2
l_loader_000002b2: mov [0x1024],eax
pf_at 0x2b6
l_loader_000002b6: mov eax,[es:0x28]
pf_at 0x2bb
l_loader_000002bb: mov [0x1028],eax
pf_at 0x2bf
l_loader_000002bf: mov eax,[es:0x2c]
pf_at 0x2c4
l_loader_000002c4: mov [0x102c],eax
pf_at 0x2c8
l_loader_000002c8: cmp word [es:0x6],byte +0x2
pf_at 0x2ce
l_loader_000002ce: jc short 0x2fa
pf_at 0x2d0
l_loader_000002d0: cmp dword [es:0x40],byte +0x1
pf_at 0x2d7
l_loader_000002d7: jnz short 0x2fa
pf_at 0x2d9
l_loader_000002d9: mov eax,[es:0x44]
pf_at 0x2de
l_loader_000002de: cmp eax,byte +0x41
pf_at 0x2e2
l_loader_000002e2: jna short 0x2fa
pf_at 0x2e4
l_loader_000002e4: mov [0x1034],eax
pf_at 0x2e8
l_loader_000002e8: mov eax,[es:0x48]
pf_at 0x2ed
l_loader_000002ed: mov [0x1038],eax
pf_at 0x2f1
l_loader_000002f1: mov eax,[es:0x4c]
pf_at 0x2f6
l_loader_000002f6: mov [0x103c],eax
pf_at 0x2fa
l_loader_000002fa: mov byte [0x1008],0x0
pf_at 0x2ff
l_loader_000002ff: pop es
pf_at 0x300
l_loader_00000300: pop ds
pf_at 0x301
l_loader_00000301: pop cx
pf_at 0x302
l_loader_00000302: pop bx
pf_at 0x303
l_loader_00000303: pop ax
pf_at 0x304
l_loader_00000304: clc
pf_at 0x305
l_loader_00000305: ret
pf_at 0x306
l_loader_00000306: push ax
pf_at 0x307
l_loader_00000307: push ds
pf_at 0x308
l_loader_00000308: mov ax,cs
pf_at 0x30a
l_loader_0000030a: mov ds,ax
pf_at 0x30c
l_loader_0000030c: mov eax,[0x1034]
pf_at 0x310
l_loader_00000310: test eax,eax
pf_at 0x313
l_loader_00000313: jz short 0x339
pf_at 0x315
l_loader_00000315: cmp eax,[0x1024]
pf_at 0x31a
l_loader_0000031a: jz short 0x339
pf_at 0x31c
l_loader_0000031c: mov [0x1024],eax
pf_at 0x320
l_loader_00000320: mov eax,[0x1038]
pf_at 0x324
l_loader_00000324: mov [0x1028],eax
pf_at 0x328
l_loader_00000328: mov eax,[0x103c]
pf_at 0x32c
l_loader_0000032c: mov [0x102c],eax
pf_at 0x330
l_loader_00000330: mov byte [0x1008],0x0
pf_at 0x335
l_loader_00000335: pop ds
pf_at 0x336
l_loader_00000336: pop ax
pf_at 0x337
l_loader_00000337: clc
pf_at 0x338
l_loader_00000338: ret
pf_at 0x339
l_loader_00000339: pop ds
pf_at 0x33a
l_loader_0000033a: pop ax
pf_at 0x33b
l_loader_0000033b: stc
pf_at 0x33c
l_loader_0000033c: ret
pf_at 0x33d
l_loader_0000033d: push ax
pf_at 0x33e
l_loader_0000033e: mov ax,cs
pf_at 0x340
l_loader_00000340: mov ds,ax
pf_at 0x342
l_loader_00000342: pop ax
pf_at 0x343
l_loader_00000343: mov [0x100a],ax
pf_at 0x346
l_loader_00000346: mov [0x100c],si
pf_at 0x34a
l_loader_0000034a: mov dx,[0x1012]
pf_at 0x34e
l_loader_0000034e: xor bp,bp
pf_at 0x350
l_loader_00000350: cmp bp,[0x1010]
pf_at 0x354
l_loader_00000354: jnc near 0x3fc
pf_at 0x358
l_loader_00000358: mov ax,0x1000
pf_at 0x35b
l_loader_0000035b: mov es,ax
pf_at 0x35d
l_loader_0000035d: xor bx,bx
pf_at 0x35f
l_loader_0000035f: mov eax,[0x101c]
pf_at 0x363
l_loader_00000363: movzx ecx,bp
pf_at 0x367
l_loader_00000367: add eax,ecx
pf_at 0x36a
l_loader_0000036a: mov [0x10a0],eax
pf_at 0x36e
l_loader_0000036e: mov [0x109c],eax
pf_at 0x372
l_loader_00000372: mov word [0x1014],0x1
pf_at 0x378
l_loader_00000378: mov cx,0x1
pf_at 0x37b
l_loader_0000037b: push bp
pf_at 0x37c
l_loader_0000037c: push dx
pf_at 0x37d
l_loader_0000037d: call 0xc6a
pf_at 0x380
l_loader_00000380: pop dx
pf_at 0x381
l_loader_00000381: pop bp
pf_at 0x382
l_loader_00000382: jc short 0x3fc
pf_at 0x384
l_loader_00000384: xor bx,bx
pf_at 0x386
l_loader_00000386: mov cx,0x2
pf_at 0x389
l_loader_00000389: cmp dx,byte +0x0
pf_at 0x38c
l_loader_0000038c: jz short 0x3fc
pf_at 0x38e
l_loader_0000038e: push cx
pf_at 0x38f
l_loader_0000038f: mov si,[0x100c]
pf_at 0x393
l_loader_00000393: mov di,bx
pf_at 0x395
l_loader_00000395: call 0xc49
pf_at 0x398
l_loader_00000398: pop cx
pf_at 0x399
l_loader_00000399: jnc short 0x3a5
pf_at 0x39b
l_loader_0000039b: add bx,0x100
pf_at 0x39f
l_loader_0000039f: dec dx
pf_at 0x3a0
l_loader_000003a0: loop 0x389
pf_at 0x3a2
l_loader_000003a2: inc bp
pf_at 0x3a3
l_loader_000003a3: jmp short 0x350
pf_at 0x3a5
l_loader_000003a5: mov eax,[es:bx+0xf0]
pf_at 0x3ab
l_loader_000003ab: mov [0x107c],eax
pf_at 0x3af
l_loader_000003af: mov eax,[es:bx+0xf4]
pf_at 0x3b5
l_loader_000003b5: mov [0x1080],eax
pf_at 0x3b9
l_loader_000003b9: mov eax,[0x1080]
pf_at 0x3bd
l_loader_000003bd: add eax,0x1ff
pf_at 0x3c3
l_loader_000003c3: shr eax,byte 0x9
pf_at 0x3c7
l_loader_000003c7: mov cx,ax
pf_at 0x3c9
l_loader_000003c9: mov eax,[0x107c]
pf_at 0x3cd
l_loader_000003cd: sub eax,byte +0x2
pf_at 0x3d1
l_loader_000003d1: movzx edx,word [0x100e]
pf_at 0x3d7
l_loader_000003d7: imul eax,edx
pf_at 0x3db
l_loader_000003db: add eax,[0x1020]
pf_at 0x3e0
l_loader_000003e0: mov [0x10a0],eax
pf_at 0x3e4
l_loader_000003e4: mov [0x109c],eax
pf_at 0x3e8
l_loader_000003e8: mov [0x1014],cx
pf_at 0x3ec
l_loader_000003ec: mov ax,[0x100a]
pf_at 0x3ef
l_loader_000003ef: mov [0x1016],ax
pf_at 0x3f2
l_loader_000003f2: call 0xca9
pf_at 0x3f5
l_loader_000003f5: jc short 0x3fc
pf_at 0x3f7
l_loader_000003f7: mov ax,[0x1080]
pf_at 0x3fa
l_loader_000003fa: clc
pf_at 0x3fb
l_loader_000003fb: ret
pf_at 0x3fc
l_loader_000003fc: cmp byte [0x1008],0x0
pf_at 0x401
l_loader_00000401: jnz short 0x408
pf_at 0x403
l_loader_00000403: mov byte [0x1007],0x46
pf_at 0x408
l_loader_00000408: stc
pf_at 0x409
l_loader_00000409: ret
pf_at 0x40a
l_loader_0000040a: push ds
pf_at 0x40b
l_loader_0000040b: push es
pf_at 0x40c
l_loader_0000040c: mov ax,cs
pf_at 0x40e
l_loader_0000040e: mov ds,ax
pf_at 0x410
l_loader_00000410: mov ax,0x2000
pf_at 0x413
l_loader_00000413: mov es,ax
pf_at 0x415
l_loader_00000415: cmp word [es:0x0],0x4d57
pf_at 0x41c
l_loader_0000041c: jnz short 0x46c
pf_at 0x41e
l_loader_0000041e: cmp word [es:0x2],0x504c
pf_at 0x425
l_loader_00000425: jnz short 0x46c
pf_at 0x427
l_loader_00000427: cmp dword [es:0x4],byte +0x1
pf_at 0x42e
l_loader_0000042e: jnz short 0x46c
pf_at 0x430
l_loader_00000430: mov eax,[es:0xc]
pf_at 0x435
l_loader_00000435: cmp eax,byte +0x10
pf_at 0x439
l_loader_00000439: jc short 0x46c
pf_at 0x43b
l_loader_0000043b: cmp eax,[0x1080]
pf_at 0x440
l_loader_00000440: ja short 0x46c
pf_at 0x442
l_loader_00000442: mov [0x1078],eax
pf_at 0x446
l_loader_00000446: mov eax,[es:0x8]
pf_at 0x44b
l_loader_0000044b: cmp eax,0x20000
pf_at 0x451
l_loader_00000451: jc short 0x46c
pf_at 0x453
l_loader_00000453: mov edx,eax
pf_at 0x456
l_loader_00000456: sub edx,0x20000
pf_at 0x45d
l_loader_0000045d: cmp edx,[0x1078]
pf_at 0x462
l_loader_00000462: jnc short 0x46c
pf_at 0x464
l_loader_00000464: mov [0x1074],eax
pf_at 0x468
l_loader_00000468: pop es
pf_at 0x469
l_loader_00000469: pop ds
pf_at 0x46a
l_loader_0000046a: clc
pf_at 0x46b
l_loader_0000046b: ret
pf_at 0x46c
l_loader_0000046c: mov ax,cs
pf_at 0x46e
l_loader_0000046e: mov ds,ax
pf_at 0x470
l_loader_00000470: mov byte [0x1007],0x42
pf_at 0x475
l_loader_00000475: mov dword [0x1074],0x0
pf_at 0x47e
l_loader_0000047e: mov dword [0x1078],0x0
pf_at 0x487
l_loader_00000487: pop es
pf_at 0x488
l_loader_00000488: pop ds
pf_at 0x489
l_loader_00000489: stc
pf_at 0x48a
l_loader_0000048a: ret
pf_at 0x48b
l_loader_0000048b: push ax
pf_at 0x48c
l_loader_0000048c: push cx
pf_at 0x48d
l_loader_0000048d: push ds
pf_at 0x48e
l_loader_0000048e: push es
pf_at 0x48f
l_loader_0000048f: push si
pf_at 0x490
l_loader_00000490: push di
pf_at 0x491
l_loader_00000491: mov ax,cs
pf_at 0x493
l_loader_00000493: mov ds,ax
pf_at 0x495
l_loader_00000495: mov es,ax
pf_at 0x497
l_loader_00000497: lea di,[0x10a4]
pf_at 0x49b
l_loader_0000049b: xor eax,eax
pf_at 0x49e
l_loader_0000049e: mov cx,0xf
pf_at 0x4a1
l_loader_000004a1: cld
pf_at 0x4a2
l_loader_000004a2: rep stosw
pf_at 0x4a4
l_loader_000004a4: mov word [0x10a4],0x1e
pf_at 0x4aa
l_loader_000004aa: mov ah,0x48
pf_at 0x4ac
l_loader_000004ac: mov dl,[0x1004]
pf_at 0x4b0
l_loader_000004b0: lea si,[0x10a4]
pf_at 0x4b4
l_loader_000004b4: int 0x13
pf_at 0x4b6
l_loader_000004b6: jc short 0x4d3
pf_at 0x4b8
l_loader_000004b8: mov eax,[0x10b4]
pf_at 0x4bc
l_loader_000004bc: mov edx,[0x10b8]
pf_at 0x4c1
l_loader_000004c1: test edx,edx
pf_at 0x4c4
l_loader_000004c4: jz short 0x4cc
pf_at 0x4c6
l_loader_000004c6: mov eax,0xffffffff
pf_at 0x4cc
l_loader_000004cc: mov [0x1040],eax
pf_at 0x4d0
l_loader_000004d0: clc
pf_at 0x4d1
l_loader_000004d1: jmp short 0x4dd
pf_at 0x4d3
l_loader_000004d3: mov dword [0x1040],0x0
pf_at 0x4dc
l_loader_000004dc: stc
pf_at 0x4dd
l_loader_000004dd: pop di
pf_at 0x4de
l_loader_000004de: pop si
pf_at 0x4df
l_loader_000004df: pop es
pf_at 0x4e0
l_loader_000004e0: pop ds
pf_at 0x4e1
l_loader_000004e1: pop cx
pf_at 0x4e2
l_loader_000004e2: pop ax
pf_at 0x4e3
l_loader_000004e3: ret
pf_at 0x4e4
l_loader_000004e4: push ax
pf_at 0x4e5
l_loader_000004e5: push bx
pf_at 0x4e6
l_loader_000004e6: push cx
pf_at 0x4e7
l_loader_000004e7: push dx
pf_at 0x4e8
l_loader_000004e8: push ds
pf_at 0x4e9
l_loader_000004e9: push es
pf_at 0x4ea
l_loader_000004ea: push si
pf_at 0x4eb
l_loader_000004eb: push di
pf_at 0x4ec
l_loader_000004ec: mov ax,cs
pf_at 0x4ee
l_loader_000004ee: mov ds,ax
pf_at 0x4f0
l_loader_000004f0: mov es,ax
pf_at 0x4f2
l_loader_000004f2: mov dword [0x1044],0x4000000
pf_at 0x4fb
l_loader_000004fb: call 0x51d
pf_at 0x4fe
l_loader_000004fe: jnc short 0x514
pf_at 0x500
l_loader_00000500: call 0x603
pf_at 0x503
l_loader_00000503: jnc short 0x514
pf_at 0x505
l_loader_00000505: call 0x65c
pf_at 0x508
l_loader_00000508: jnc short 0x514
pf_at 0x50a
l_loader_0000050a: mov dword [0x1044],0x4000000
pf_at 0x513
l_loader_00000513: clc
pf_at 0x514
l_loader_00000514: pop di
pf_at 0x515
l_loader_00000515: pop si
pf_at 0x516
l_loader_00000516: pop es
pf_at 0x517
l_loader_00000517: pop ds
pf_at 0x518
l_loader_00000518: pop dx
pf_at 0x519
l_loader_00000519: pop cx
pf_at 0x51a
l_loader_0000051a: pop bx
pf_at 0x51b
l_loader_0000051b: pop ax
pf_at 0x51c
l_loader_0000051c: ret
pf_at 0x51d
l_loader_0000051d: push ax
pf_at 0x51e
l_loader_0000051e: push cx
pf_at 0x51f
l_loader_0000051f: push dx
pf_at 0x520
l_loader_00000520: push ds
pf_at 0x521
l_loader_00000521: push es
pf_at 0x522
l_loader_00000522: push di
pf_at 0x523
l_loader_00000523: mov ax,cs
pf_at 0x525
l_loader_00000525: mov ds,ax
pf_at 0x527
l_loader_00000527: mov es,ax
pf_at 0x529
l_loader_00000529: mov dword [0x104c],0x0
pf_at 0x532
l_loader_00000532: mov dword [0x1048],0x300000
pf_at 0x53b
l_loader_0000053b: mov eax,[0x1048]
pf_at 0x53f
l_loader_0000053f: mov [0x1044],eax
pf_at 0x543
l_loader_00000543: mov dword [0x104c],0x0
pf_at 0x54c
l_loader_0000054c: lea di,[0x10c2]
pf_at 0x550
l_loader_00000550: xor ax,ax
pf_at 0x552
l_loader_00000552: mov cx,0xa
pf_at 0x555
l_loader_00000555: cld
pf_at 0x556
l_loader_00000556: rep stosw
pf_at 0x558
l_loader_00000558: mov eax,0xe820
pf_at 0x55e
l_loader_0000055e: mov edx,0x534d4150
pf_at 0x564
l_loader_00000564: mov ecx,0x14
pf_at 0x56a
l_loader_0000056a: mov ebx,[0x104c]
pf_at 0x56f
l_loader_0000056f: lea di,[0x10c2]
pf_at 0x573
l_loader_00000573: int 0x15
pf_at 0x575
l_loader_00000575: jc near 0x5fb
pf_at 0x579
l_loader_00000579: push eax
pf_at 0x57b
l_loader_0000057b: mov ax,cs
pf_at 0x57d
l_loader_0000057d: mov ds,ax
pf_at 0x57f
l_loader_0000057f: mov es,ax
pf_at 0x581
l_loader_00000581: pop eax
pf_at 0x583
l_loader_00000583: cmp eax,0x534d4150
pf_at 0x589
l_loader_00000589: jnz short 0x5fb
pf_at 0x58b
l_loader_0000058b: mov [0x104c],ebx
pf_at 0x590
l_loader_00000590: cmp dword [0x10d2],byte +0x1
pf_at 0x596
l_loader_00000596: jnz short 0x5d3
pf_at 0x598
l_loader_00000598: cmp dword [0x10c6],byte +0x0
pf_at 0x59e
l_loader_0000059e: jnz short 0x5d3
pf_at 0x5a0
l_loader_000005a0: mov eax,[0x10c2]
pf_at 0x5a4
l_loader_000005a4: cmp eax,[0x1048]
pf_at 0x5a9
l_loader_000005a9: ja short 0x5d3
pf_at 0x5ab
l_loader_000005ab: mov edx,[0x10ce]
pf_at 0x5b0
l_loader_000005b0: test edx,edx
pf_at 0x5b3
l_loader_000005b3: jnz short 0x5c1
pf_at 0x5b5
l_loader_000005b5: mov edx,[0x10ca]
pf_at 0x5ba
l_loader_000005ba: add edx,eax
pf_at 0x5bd
l_loader_000005bd: jc short 0x5c1
pf_at 0x5bf
l_loader_000005bf: jmp short 0x5c7
pf_at 0x5c1
l_loader_000005c1: mov edx,0xffffffff
pf_at 0x5c7
l_loader_000005c7: cmp edx,[0x1048]
pf_at 0x5cc
l_loader_000005cc: jna short 0x5d3
pf_at 0x5ce
l_loader_000005ce: mov [0x1048],edx
pf_at 0x5d3
l_loader_000005d3: mov ebx,[0x104c]
pf_at 0x5d8
l_loader_000005d8: test ebx,ebx
pf_at 0x5db
l_loader_000005db: jnz near 0x54c
pf_at 0x5df
l_loader_000005df: mov eax,[0x1048]
pf_at 0x5e3
l_loader_000005e3: cmp eax,[0x1044]
pf_at 0x5e8
l_loader_000005e8: ja near 0x53b
pf_at 0x5ec
l_loader_000005ec: cmp eax,0x300000
pf_at 0x5f2
l_loader_000005f2: jna short 0x5fb
pf_at 0x5f4
l_loader_000005f4: mov [0x1044],eax
pf_at 0x5f8
l_loader_000005f8: clc
pf_at 0x5f9
l_loader_000005f9: jmp short 0x5fc
pf_at 0x5fb
l_loader_000005fb: stc
pf_at 0x5fc
l_loader_000005fc: pop di
pf_at 0x5fd
l_loader_000005fd: pop es
pf_at 0x5fe
l_loader_000005fe: pop ds
pf_at 0x5ff
l_loader_000005ff: pop dx
pf_at 0x600
l_loader_00000600: pop cx
pf_at 0x601
l_loader_00000601: pop ax
pf_at 0x602
l_loader_00000602: ret
pf_at 0x603
l_loader_00000603: push ax
pf_at 0x604
l_loader_00000604: push bx
pf_at 0x605
l_loader_00000605: push cx
pf_at 0x606
l_loader_00000606: push dx
pf_at 0x607
l_loader_00000607: mov ax,0xe801
pf_at 0x60a
l_loader_0000060a: int 0x15
pf_at 0x60c
l_loader_0000060c: jc short 0x656
pf_at 0x60e
l_loader_0000060e: push ax
pf_at 0x60f
l_loader_0000060f: mov ax,cs
pf_at 0x611
l_loader_00000611: mov ds,ax
pf_at 0x613
l_loader_00000613: pop ax
pf_at 0x614
l_loader_00000614: mov di,ax
pf_at 0x616
l_loader_00000616: mov si,bx
pf_at 0x618
l_loader_00000618: or di,si
pf_at 0x61a
l_loader_0000061a: jnz short 0x620
pf_at 0x61c
l_loader_0000061c: mov di,cx
pf_at 0x61e
l_loader_0000061e: mov si,dx
pf_at 0x620
l_loader_00000620: xor eax,eax
pf_at 0x623
l_loader_00000623: mov ax,di
pf_at 0x625
l_loader_00000625: shl eax,byte 0xa
pf_at 0x629
l_loader_00000629: add eax,0x100000
pf_at 0x62f
l_loader_0000062f: jc short 0x641
pf_at 0x631
l_loader_00000631: xor edx,edx
pf_at 0x634
l_loader_00000634: mov dx,si
pf_at 0x636
l_loader_00000636: shl edx,byte 0x10
pf_at 0x63a
l_loader_0000063a: add eax,edx
pf_at 0x63d
l_loader_0000063d: jc short 0x641
pf_at 0x63f
l_loader_0000063f: jmp short 0x647
pf_at 0x641
l_loader_00000641: mov eax,0xffffffff
pf_at 0x647
l_loader_00000647: cmp eax,0x300000
pf_at 0x64d
l_loader_0000064d: jna short 0x656
pf_at 0x64f
l_loader_0000064f: mov [0x1044],eax
pf_at 0x653
l_loader_00000653: clc
pf_at 0x654
l_loader_00000654: jmp short 0x657
pf_at 0x656
l_loader_00000656: stc
pf_at 0x657
l_loader_00000657: pop dx
pf_at 0x658
l_loader_00000658: pop cx
pf_at 0x659
l_loader_00000659: pop bx
pf_at 0x65a
l_loader_0000065a: pop ax
pf_at 0x65b
l_loader_0000065b: ret
pf_at 0x65c
l_loader_0000065c: push ax
pf_at 0x65d
l_loader_0000065d: mov ax,0x8800
pf_at 0x660
l_loader_00000660: int 0x15
pf_at 0x662
l_loader_00000662: jc short 0x693
pf_at 0x664
l_loader_00000664: push ax
pf_at 0x665
l_loader_00000665: mov ax,cs
pf_at 0x667
l_loader_00000667: mov ds,ax
pf_at 0x669
l_loader_00000669: pop ax
pf_at 0x66a
l_loader_0000066a: and eax,0xffff
pf_at 0x670
l_loader_00000670: shl eax,byte 0xa
pf_at 0x674
l_loader_00000674: add eax,0x100000
pf_at 0x67a
l_loader_0000067a: jc short 0x67e
pf_at 0x67c
l_loader_0000067c: jmp short 0x684
pf_at 0x67e
l_loader_0000067e: mov eax,0xffffffff
pf_at 0x684
l_loader_00000684: cmp eax,0x300000
pf_at 0x68a
l_loader_0000068a: jna short 0x693
pf_at 0x68c
l_loader_0000068c: mov [0x1044],eax
pf_at 0x690
l_loader_00000690: clc
pf_at 0x691
l_loader_00000691: jmp short 0x694
pf_at 0x693
l_loader_00000693: stc
pf_at 0x694
l_loader_00000694: pop ax
pf_at 0x695
l_loader_00000695: ret
pf_at 0x696
l_loader_00000696: push ax
pf_at 0x697
l_loader_00000697: push bx
pf_at 0x698
l_loader_00000698: push cx
pf_at 0x699
l_loader_00000699: push dx
pf_at 0x69a
l_loader_0000069a: push ds
pf_at 0x69b
l_loader_0000069b: push es
pf_at 0x69c
l_loader_0000069c: push si
pf_at 0x69d
l_loader_0000069d: push di
pf_at 0x69e
l_loader_0000069e: push bp
pf_at 0x69f
l_loader_0000069f: mov ax,cs
pf_at 0x6a1
l_loader_000006a1: mov ds,ax
pf_at 0x6a3
l_loader_000006a3: mov ax,0x600
pf_at 0x6a6
l_loader_000006a6: mov es,ax
pf_at 0x6a8
l_loader_000006a8: mov dword [es:0x8c],0x0
pf_at 0x6b2
l_loader_000006b2: mov dword [es:0x110],0x0
pf_at 0x6bc
l_loader_000006bc: mov dword [es:0x114],0x0
pf_at 0x6c6
l_loader_000006c6: mov dword [es:0x124],0x0
pf_at 0x6d0
l_loader_000006d0: mov dword [es:0x228],0x0
pf_at 0x6da
l_loader_000006da: mov dword [es:0x22c],0x0
pf_at 0x6e4
l_loader_000006e4: mov dword [es:0x230],0x0
pf_at 0x6ee
l_loader_000006ee: mov dword [es:0x234],0x0
pf_at 0x6f8
l_loader_000006f8: mov dword [0x104c],0x0
pf_at 0x701
l_loader_00000701: mov dword [0x1050],0x300000
pf_at 0x70a
l_loader_0000070a: mov dword [0x1054],0x0
pf_at 0x713
l_loader_00000713: mov dword [0x1058],0x0
pf_at 0x71c
l_loader_0000071c: mov dword [0x105c],0x0
pf_at 0x725
l_loader_00000725: mov dword [0x1060],0x0
pf_at 0x72e
l_loader_0000072e: mov ax,cs
pf_at 0x730
l_loader_00000730: mov es,ax
pf_at 0x732
l_loader_00000732: lea di,[0x10c2]
pf_at 0x736
l_loader_00000736: xor ax,ax
pf_at 0x738
l_loader_00000738: mov cx,0xa
pf_at 0x73b
l_loader_0000073b: cld
pf_at 0x73c
l_loader_0000073c: rep stosw
pf_at 0x73e
l_loader_0000073e: mov eax,0xe820
pf_at 0x744
l_loader_00000744: mov edx,0x534d4150
pf_at 0x74a
l_loader_0000074a: mov ecx,0x14
pf_at 0x750
l_loader_00000750: mov ebx,[0x104c]
pf_at 0x755
l_loader_00000755: lea di,[0x10c2]
pf_at 0x759
l_loader_00000759: int 0x15
pf_at 0x75b
l_loader_0000075b: push eax
pf_at 0x75d
l_loader_0000075d: mov ax,cs
pf_at 0x75f
l_loader_0000075f: mov ds,ax
pf_at 0x761
l_loader_00000761: mov ax,0x600
pf_at 0x764
l_loader_00000764: mov es,ax
pf_at 0x766
l_loader_00000766: pop eax
pf_at 0x768
l_loader_00000768: jc near 0xa70
pf_at 0x76c
l_loader_0000076c: cmp eax,0x534d4150
pf_at 0x772
l_loader_00000772: jnz near 0xa70
pf_at 0x776
l_loader_00000776: mov [0x104c],ebx
pf_at 0x77b
l_loader_0000077b: cmp dword [0x10d2],byte +0x1
pf_at 0x781
l_loader_00000781: jnz short 0x7e2
pf_at 0x783
l_loader_00000783: mov eax,[0x10ca]
pf_at 0x787
l_loader_00000787: mov edx,[0x10ce]
pf_at 0x78c
l_loader_0000078c: add [es:0x110],eax
pf_at 0x792
l_loader_00000792: adc [es:0x114],edx
pf_at 0x798
l_loader_00000798: cmp dword [0x10c6],byte +0x0
pf_at 0x79e
l_loader_0000079e: jnz short 0x7e2
pf_at 0x7a0
l_loader_000007a0: mov eax,[0x10c2]
pf_at 0x7a4
l_loader_000007a4: mov ecx,[0x10ca]
pf_at 0x7a9
l_loader_000007a9: mov edx,[0x10ce]
pf_at 0x7ae
l_loader_000007ae: add ecx,eax
pf_at 0x7b1
l_loader_000007b1: adc edx,byte +0x0
pf_at 0x7b5
l_loader_000007b5: test edx,edx
pf_at 0x7b8
l_loader_000007b8: jnz short 0x7d1
pf_at 0x7ba
l_loader_000007ba: cmp ecx,0x300000
pf_at 0x7c1
l_loader_000007c1: jna short 0x7e2
pf_at 0x7c3
l_loader_000007c3: cmp ecx,[0x1050]
pf_at 0x7c8
l_loader_000007c8: jna short 0x7e2
pf_at 0x7ca
l_loader_000007ca: mov [0x1050],ecx
pf_at 0x7cf
l_loader_000007cf: jmp short 0x7e2
pf_at 0x7d1
l_loader_000007d1: mov eax,0xffffffff
pf_at 0x7d7
l_loader_000007d7: cmp eax,[0x1050]
pf_at 0x7dc
l_loader_000007dc: jna short 0x7e2
pf_at 0x7de
l_loader_000007de: mov [0x1050],eax
pf_at 0x7e2
l_loader_000007e2: mov ebx,[0x104c]
pf_at 0x7e7
l_loader_000007e7: test ebx,ebx
pf_at 0x7ea
l_loader_000007ea: jnz near 0x72e
pf_at 0x7ee
l_loader_000007ee: mov eax,[0x1050]
pf_at 0x7f2
l_loader_000007f2: cmp eax,0x300000
pf_at 0x7f8
l_loader_000007f8: jnc short 0x800
pf_at 0x7fa
l_loader_000007fa: mov eax,0x300000
pf_at 0x800
l_loader_00000800: cmp eax,0xfc000000
pf_at 0x806
l_loader_00000806: jnc short 0x832
pf_at 0x808
l_loader_00000808: add eax,0x1fffff
pf_at 0x80e
l_loader_0000080e: and eax,0xffe00000
pf_at 0x814
l_loader_00000814: cmp eax,0xfc000000
pf_at 0x81a
l_loader_0000081a: jnc short 0x832
pf_at 0x81c
l_loader_0000081c: mov [0x1054],eax
pf_at 0x820
l_loader_00000820: mov [0x1058],eax
pf_at 0x824
l_loader_00000824: mov edx,0xfc000000
pf_at 0x82a
l_loader_0000082a: sub edx,eax
pf_at 0x82d
l_loader_0000082d: mov [0x1060],edx
pf_at 0x832
l_loader_00000832: mov dword [0x104c],0x0
pf_at 0x83b
l_loader_0000083b: mov ax,cs
pf_at 0x83d
l_loader_0000083d: mov es,ax
pf_at 0x83f
l_loader_0000083f: lea di,[0x10c2]
pf_at 0x843
l_loader_00000843: xor ax,ax
pf_at 0x845
l_loader_00000845: mov cx,0xa
pf_at 0x848
l_loader_00000848: cld
pf_at 0x849
l_loader_00000849: rep stosw
pf_at 0x84b
l_loader_0000084b: mov eax,0xe820
pf_at 0x851
l_loader_00000851: mov edx,0x534d4150
pf_at 0x857
l_loader_00000857: mov ecx,0x14
pf_at 0x85d
l_loader_0000085d: mov ebx,[0x104c]
pf_at 0x862
l_loader_00000862: lea di,[0x10c2]
pf_at 0x866
l_loader_00000866: int 0x15
pf_at 0x868
l_loader_00000868: push eax
pf_at 0x86a
l_loader_0000086a: mov ax,cs
pf_at 0x86c
l_loader_0000086c: mov ds,ax
pf_at 0x86e
l_loader_0000086e: mov ax,0x600
pf_at 0x871
l_loader_00000871: mov es,ax
pf_at 0x873
l_loader_00000873: pop eax
pf_at 0x875
l_loader_00000875: jc near 0xa70
pf_at 0x879
l_loader_00000879: cmp eax,0x534d4150
pf_at 0x87f
l_loader_0000087f: jnz near 0xa70
pf_at 0x883
l_loader_00000883: mov [0x104c],ebx
pf_at 0x888
l_loader_00000888: cmp dword [0x10d2],byte +0x1
pf_at 0x88e
l_loader_0000088e: jnz near 0xa64
pf_at 0x892
l_loader_00000892: cmp dword [0x10c6],byte +0x0
pf_at 0x898
l_loader_00000898: jnz short 0x90d
pf_at 0x89a
l_loader_0000089a: mov eax,[0x10c2]
pf_at 0x89e
l_loader_0000089e: mov ebp,eax
pf_at 0x8a1
l_loader_000008a1: cmp ebp,0x300000
pf_at 0x8a8
l_loader_000008a8: jnc short 0x8b0
pf_at 0x8aa
l_loader_000008aa: mov ebp,0x300000
pf_at 0x8b0
l_loader_000008b0: mov ecx,[0x10ca]
pf_at 0x8b5
l_loader_000008b5: mov edx,[0x10ce]
pf_at 0x8ba
l_loader_000008ba: test edx,edx
pf_at 0x8bd
l_loader_000008bd: jnz short 0x8d3
pf_at 0x8bf
l_loader_000008bf: mov esi,eax
pf_at 0x8c2
l_loader_000008c2: add esi,ecx
pf_at 0x8c5
l_loader_000008c5: jc short 0x8d3
pf_at 0x8c7
l_loader_000008c7: cmp esi,ebp
pf_at 0x8ca
l_loader_000008ca: jna near 0xa64
pf_at 0x8ce
l_loader_000008ce: sub esi,ebp
pf_at 0x8d1
l_loader_000008d1: jmp short 0x8e4
pf_at 0x8d3
l_loader_000008d3: mov esi,0xffffffff
pf_at 0x8d9
l_loader_000008d9: sub esi,ebp
pf_at 0x8dc
l_loader_000008dc: add esi,byte +0x1
pf_at 0x8e0
l_loader_000008e0: jz near 0xa64
pf_at 0x8e4
l_loader_000008e4: mov eax,[es:0x8c]
pf_at 0x8e9
l_loader_000008e9: cmp eax,byte +0x10
pf_at 0x8ed
l_loader_000008ed: jnc near 0xa64
pf_at 0x8f1
l_loader_000008f1: shl eax,byte 0x3
pf_at 0x8f5
l_loader_000008f5: mov di,ax
pf_at 0x8f7
l_loader_000008f7: add di,0x90
pf_at 0x8fb
l_loader_000008fb: mov [es:di],ebp
pf_at 0x8ff
l_loader_000008ff: mov [es:di+0x4],esi
pf_at 0x904
l_loader_00000904: inc dword [es:0x8c]
pf_at 0x90a
l_loader_0000090a: jmp near 0xa64
pf_at 0x90d
l_loader_0000090d: cmp dword [0x1060],byte +0x0
pf_at 0x913
l_loader_00000913: jz near 0xa64
pf_at 0x917
l_loader_00000917: cmp dword [es:0x8c],byte +0x10
pf_at 0x91e
l_loader_0000091e: jnc near 0xa64
pf_at 0x922
l_loader_00000922: cmp dword [es:0x124],byte +0x10
pf_at 0x929
l_loader_00000929: jnc near 0xa64
pf_at 0x92d
l_loader_0000092d: mov eax,[0x10c2]
pf_at 0x931
l_loader_00000931: mov edx,[0x10c6]
pf_at 0x936
l_loader_00000936: add eax,0x1fffff
pf_at 0x93c
l_loader_0000093c: adc edx,byte +0x0
pf_at 0x940
l_loader_00000940: and eax,0xffe00000
pf_at 0x946
l_loader_00000946: mov [0x1064],eax
pf_at 0x94a
l_loader_0000094a: mov [0x1068],edx
pf_at 0x94f
l_loader_0000094f: mov ecx,[0x10ca]
pf_at 0x954
l_loader_00000954: mov ebp,[0x10ce]
pf_at 0x959
l_loader_00000959: add ecx,[0x10c2]
pf_at 0x95e
l_loader_0000095e: adc ebp,[0x10c6]
pf_at 0x963
l_loader_00000963: and ecx,0xffe00000
pf_at 0x96a
l_loader_0000096a: cmp ebp,[0x1068]
pf_at 0x96f
l_loader_0000096f: jc near 0xa64
pf_at 0x973
l_loader_00000973: ja short 0x97e
pf_at 0x975
l_loader_00000975: cmp ecx,[0x1064]
pf_at 0x97a
l_loader_0000097a: jna near 0xa64
pf_at 0x97e
l_loader_0000097e: sub ecx,[0x1064]
pf_at 0x983
l_loader_00000983: sbb ebp,[0x1068]
pf_at 0x988
l_loader_00000988: mov [0x106c],ecx
pf_at 0x98d
l_loader_0000098d: mov [0x1070],ebp
pf_at 0x992
l_loader_00000992: mov eax,[0x106c]
pf_at 0x996
l_loader_00000996: mov edx,[0x1070]
pf_at 0x99b
l_loader_0000099b: or eax,edx
pf_at 0x99e
l_loader_0000099e: jz near 0xa64
pf_at 0x9a2
l_loader_000009a2: mov ecx,[0x1060]
pf_at 0x9a7
l_loader_000009a7: test ecx,ecx
pf_at 0x9aa
l_loader_000009aa: jz near 0xa64
pf_at 0x9ae
l_loader_000009ae: cmp dword [es:0x8c],byte +0x10
pf_at 0x9b5
l_loader_000009b5: jnc near 0xa64
pf_at 0x9b9
l_loader_000009b9: cmp dword [es:0x124],byte +0x10
pf_at 0x9c0
l_loader_000009c0: jnc near 0xa64
pf_at 0x9c4
l_loader_000009c4: mov esi,ecx
pf_at 0x9c7
l_loader_000009c7: cmp dword [0x1070],byte +0x0
pf_at 0x9cd
l_loader_000009cd: jnz short 0x9db
pf_at 0x9cf
l_loader_000009cf: mov eax,[0x106c]
pf_at 0x9d3
l_loader_000009d3: cmp eax,ecx
pf_at 0x9d6
l_loader_000009d6: jnc short 0x9db
pf_at 0x9d8
l_loader_000009d8: mov esi,eax
pf_at 0x9db
l_loader_000009db: test esi,esi
pf_at 0x9de
l_loader_000009de: jz near 0xa64
pf_at 0x9e2
l_loader_000009e2: mov eax,[es:0x8c]
pf_at 0x9e7
l_loader_000009e7: shl eax,byte 0x3
pf_at 0x9eb
l_loader_000009eb: mov di,ax
pf_at 0x9ed
l_loader_000009ed: add di,0x90
pf_at 0x9f1
l_loader_000009f1: mov ebx,[0x1058]
pf_at 0x9f6
l_loader_000009f6: mov [es:di],ebx
pf_at 0x9fa
l_loader_000009fa: mov [es:di+0x4],esi
pf_at 0x9ff
l_loader_000009ff: inc dword [es:0x8c]
pf_at 0xa05
l_loader_00000a05: mov eax,[es:0x124]
pf_at 0xa0a
l_loader_00000a0a: shl eax,byte 0x4
pf_at 0xa0e
l_loader_00000a0e: mov di,ax
pf_at 0xa10
l_loader_00000a10: add di,0x128
pf_at 0xa14
l_loader_00000a14: mov ebx,[0x1058]
pf_at 0xa19
l_loader_00000a19: mov [es:di],ebx
pf_at 0xa1d
l_loader_00000a1d: mov [es:di+0x4],esi
pf_at 0xa22
l_loader_00000a22: mov ebx,[0x1064]
pf_at 0xa27
l_loader_00000a27: mov [es:di+0x8],ebx
pf_at 0xa2c
l_loader_00000a2c: mov ebx,[0x1068]
pf_at 0xa31
l_loader_00000a31: mov [es:di+0xc],ebx
pf_at 0xa36
l_loader_00000a36: inc dword [es:0x124]
pf_at 0xa3c
l_loader_00000a3c: add [0x1058],esi
pf_at 0xa41
l_loader_00000a41: sub [0x1060],esi
pf_at 0xa46
l_loader_00000a46: add [0x105c],esi
pf_at 0xa4b
l_loader_00000a4b: add [0x1064],esi
pf_at 0xa50
l_loader_00000a50: adc dword [0x1068],byte +0x0
pf_at 0xa56
l_loader_00000a56: sub [0x106c],esi
pf_at 0xa5b
l_loader_00000a5b: sbb dword [0x1070],byte +0x0
pf_at 0xa61
l_loader_00000a61: jmp near 0x992
pf_at 0xa64
l_loader_00000a64: mov ebx,[0x104c]
pf_at 0xa69
l_loader_00000a69: test ebx,ebx
pf_at 0xa6c
l_loader_00000a6c: jnz near 0x83b
pf_at 0xa70
l_loader_00000a70: mov eax,[0x105c]
pf_at 0xa74
l_loader_00000a74: mov [es:0x22c],eax
pf_at 0xa79
l_loader_00000a79: test eax,eax
pf_at 0xa7c
l_loader_00000a7c: jz short 0xa9b
pf_at 0xa7e
l_loader_00000a7e: mov eax,[0x1054]
pf_at 0xa82
l_loader_00000a82: mov [es:0x228],eax
pf_at 0xa87
l_loader_00000a87: mov dword [es:0x230],0xfc000000
pf_at 0xa91
l_loader_00000a91: mov dword [es:0x234],0x4000000
pf_at 0xa9b
l_loader_00000a9b: cmp dword [es:0x8c],byte +0x0
pf_at 0xaa2
l_loader_00000aa2: jnz short 0xacf
pf_at 0xaa4
l_loader_00000aa4: mov eax,[0x1044]
pf_at 0xaa8
l_loader_00000aa8: cmp eax,0x300000
pf_at 0xaae
l_loader_00000aae: jna short 0xacf
pf_at 0xab0
l_loader_00000ab0: mov dword [es:0x90],0x300000
pf_at 0xaba
l_loader_00000aba: sub eax,0x300000
pf_at 0xac0
l_loader_00000ac0: mov [es:0x94],eax
pf_at 0xac5
l_loader_00000ac5: mov dword [es:0x8c],0x1
pf_at 0xacf
l_loader_00000acf: pop bp
pf_at 0xad0
l_loader_00000ad0: pop di
pf_at 0xad1
l_loader_00000ad1: pop si
pf_at 0xad2
l_loader_00000ad2: pop es
pf_at 0xad3
l_loader_00000ad3: pop ds
pf_at 0xad4
l_loader_00000ad4: pop dx
pf_at 0xad5
l_loader_00000ad5: pop cx
pf_at 0xad6
l_loader_00000ad6: pop bx
pf_at 0xad7
l_loader_00000ad7: pop ax
pf_at 0xad8
l_loader_00000ad8: ret
pf_at 0xad9
l_loader_00000ad9: push ax
pf_at 0xada
l_loader_00000ada: push cx
pf_at 0xadb
l_loader_00000adb: push ds
pf_at 0xadc
l_loader_00000adc: push es
pf_at 0xadd
l_loader_00000add: push di
pf_at 0xade
l_loader_00000ade: mov ax,0x600
pf_at 0xae1
l_loader_00000ae1: mov es,ax
pf_at 0xae3
l_loader_00000ae3: xor di,di
pf_at 0xae5
l_loader_00000ae5: xor ax,ax
pf_at 0xae7
l_loader_00000ae7: mov cx,0x11e
pf_at 0xaea
l_loader_00000aea: cld
pf_at 0xaeb
l_loader_00000aeb: rep stosw
pf_at 0xaed
l_loader_00000aed: mov ax,cs
pf_at 0xaef
l_loader_00000aef: mov ds,ax
pf_at 0xaf1
l_loader_00000af1: xor eax,eax
pf_at 0xaf4
l_loader_00000af4: mov al,[0x1004]
pf_at 0xaf7
l_loader_00000af7: mov [es:0x68],eax
pf_at 0xafc
l_loader_00000afc: mov eax,[0x101c]
pf_at 0xb00
l_loader_00000b00: mov [es:0x70],eax
pf_at 0xb05
l_loader_00000b05: xor eax,eax
pf_at 0xb08
l_loader_00000b08: mov ax,[0x1010]
pf_at 0xb0b
l_loader_00000b0b: mov [es:0x74],eax
pf_at 0xb10
l_loader_00000b10: mov eax,[0x1020]
pf_at 0xb14
l_loader_00000b14: mov [es:0x78],eax
pf_at 0xb19
l_loader_00000b19: xor eax,eax
pf_at 0xb1c
l_loader_00000b1c: mov ax,[0x100e]
pf_at 0xb1f
l_loader_00000b1f: mov [es:0x7c],eax
pf_at 0xb24
l_loader_00000b24: xor eax,eax
pf_at 0xb27
l_loader_00000b27: mov ax,[0x1012]
pf_at 0xb2a
l_loader_00000b2a: mov [es:0x80],eax
pf_at 0xb2f
l_loader_00000b2f: mov eax,[0x1040]
pf_at 0xb33
l_loader_00000b33: mov [es:0x84],eax
pf_at 0xb38
l_loader_00000b38: mov eax,[0x1024]
pf_at 0xb3c
l_loader_00000b3c: mov [es:0x118],eax
pf_at 0xb41
l_loader_00000b41: mov eax,[0x1028]
pf_at 0xb45
l_loader_00000b45: mov [es:0x11c],eax
pf_at 0xb4a
l_loader_00000b4a: mov eax,[0x102c]
pf_at 0xb4e
l_loader_00000b4e: mov [es:0x120],eax
pf_at 0xb53
l_loader_00000b53: mov eax,[0x1030]
pf_at 0xb57
l_loader_00000b57: mov [es:0x238],eax
pf_at 0xb5c
l_loader_00000b5c: mov eax,[0x1044]
pf_at 0xb60
l_loader_00000b60: mov [es:0x88],eax
pf_at 0xb65
l_loader_00000b65: call 0x696
pf_at 0xb68
l_loader_00000b68: pop di
pf_at 0xb69
l_loader_00000b69: pop es
pf_at 0xb6a
l_loader_00000b6a: pop ds
pf_at 0xb6b
l_loader_00000b6b: pop cx
pf_at 0xb6c
l_loader_00000b6c: pop ax
pf_at 0xb6d
l_loader_00000b6d: ret
pf_at 0xb6e
l_loader_00000b6e: mov ax,0x3
pf_at 0xb71
l_loader_00000b71: int 0x10
pf_at 0xb73
l_loader_00000b73: ret
pf_at 0xb74
l_loader_00000b74: in al,0x92
pf_at 0xb76
l_loader_00000b76: or al,0x2
pf_at 0xb78
l_loader_00000b78: out 0x92,al
pf_at 0xb7a
l_loader_00000b7a: ret
pf_at 0xb7b
l_loader_00000b7b: mov esi,[0x1074]
pf_at 0xb80
l_loader_00000b80: cli
pf_at 0xb81
l_loader_00000b81: xor eax,eax
pf_at 0xb84
l_loader_00000b84: mov ax,cs
pf_at 0xb86
l_loader_00000b86: mov ds,ax
pf_at 0xb88
l_loader_00000b88: shl eax,byte 0x4
pf_at 0xb8c
l_loader_00000b8c: lea bx,[0xf18]
pf_at 0xb90
l_loader_00000b90: movzx edx,bx
pf_at 0xb94
l_loader_00000b94: add eax,edx
pf_at 0xb97
l_loader_00000b97: mov [0xf32],eax
pf_at 0xb9b
l_loader_00000b9b: xor eax,eax
pf_at 0xb9e
l_loader_00000b9e: mov ax,cs
pf_at 0xba0
l_loader_00000ba0: shl eax,byte 0x4
pf_at 0xba4
l_loader_00000ba4: lea bx,[0xd92]
pf_at 0xba8
l_loader_00000ba8: movzx edx,bx
pf_at 0xbac
l_loader_00000bac: add eax,edx
pf_at 0xbaf
l_loader_00000baf: mov [0xbc4],eax
pf_at 0xbb3
l_loader_00000bb3: lgdt [0xf30]
pf_at 0xbb8
l_loader_00000bb8: mov eax,cr0
pf_at 0xbbb
l_loader_00000bbb: or eax,byte +0x1
pf_at 0xbbf
l_loader_00000bbf: mov cr0,eax
pf_at 0xbc2
l_loader_00000bc2: jmp dword 0x8:0x0
pf_at 0xbca
l_loader_00000bca: ret
pf_at 0xbcb
l_loader_00000bcb: mov dword [0x1098],0x0
pf_at 0xbd4
l_loader_00000bd4: cmp dword [0x1090],0x1ee
pf_at 0xbdd
l_loader_00000bdd: jc short 0xc47
pf_at 0xbdf
l_loader_00000bdf: push ds
pf_at 0xbe0
l_loader_00000be0: push es
pf_at 0xbe1
l_loader_00000be1: push si
pf_at 0xbe2
l_loader_00000be2: push di
pf_at 0xbe3
l_loader_00000be3: push cx
pf_at 0xbe4
l_loader_00000be4: mov ax,0x5000
pf_at 0xbe7
l_loader_00000be7: mov ds,ax
pf_at 0xbe9
l_loader_00000be9: cmp word [0x0],0x5357
pf_at 0xbef
l_loader_00000bef: jnz short 0xc42
pf_at 0xbf1
l_loader_00000bf1: cmp word [0x2],0x3154
pf_at 0xbf7
l_loader_00000bf7: jnz short 0xc42
pf_at 0xbf9
l_loader_00000bf9: cmp word [0x4],byte +0x1
pf_at 0xbfe
l_loader_00000bfe: jnz short 0xc42
pf_at 0xc00
l_loader_00000c00: cmp word [0x6],byte +0x0
pf_at 0xc05
l_loader_00000c05: jnz short 0xc42
pf_at 0xc07
l_loader_00000c07: mov ax,cs
pf_at 0xc09
l_loader_00000c09: mov es,ax
pf_at 0xc0b
l_loader_00000c0b: lea di,[0x10d6]
pf_at 0xc0f
l_loader_00000c0f: mov si,0x1ec
pf_at 0xc12
l_loader_00000c12: mov cx,0xef
pf_at 0xc15
l_loader_00000c15: cld
pf_at 0xc16
l_loader_00000c16: lodsb
pf_at 0xc17
l_loader_00000c17: stosb
pf_at 0xc18
l_loader_00000c18: test al,al
pf_at 0xc1a
l_loader_00000c1a: jz short 0xc22
pf_at 0xc1c
l_loader_00000c1c: loop 0xc16
pf_at 0xc1e
l_loader_00000c1e: mov byte [es:di],0x0
pf_at 0xc22
l_loader_00000c22: pop cx
pf_at 0xc23
l_loader_00000c23: pop di
pf_at 0xc24
l_loader_00000c24: pop si
pf_at 0xc25
l_loader_00000c25: pop es
pf_at 0xc26
l_loader_00000c26: pop ds
pf_at 0xc27
l_loader_00000c27: mov byte [0x1008],0x0
pf_at 0xc2c
l_loader_00000c2c: mov ax,0x6000
pf_at 0xc2f
l_loader_00000c2f: lea si,[0x10d6]
pf_at 0xc33
l_loader_00000c33: call 0x33d
pf_at 0xc36
l_loader_00000c36: jc short 0xc47
pf_at 0xc38
l_loader_00000c38: mov eax,[0x1080]
pf_at 0xc3c
l_loader_00000c3c: mov [0x1098],eax
pf_at 0xc40
l_loader_00000c40: clc
pf_at 0xc41
l_loader_00000c41: ret
pf_at 0xc42
l_loader_00000c42: pop cx
pf_at 0xc43
l_loader_00000c43: pop di
pf_at 0xc44
l_loader_00000c44: pop si
pf_at 0xc45
l_loader_00000c45: pop es
pf_at 0xc46
l_loader_00000c46: pop ds
pf_at 0xc47
l_loader_00000c47: stc
pf_at 0xc48
l_loader_00000c48: ret
pf_at 0xc49
l_loader_00000c49: push ax
pf_at 0xc4a
l_loader_00000c4a: mov al,[si]
pf_at 0xc4c
l_loader_00000c4c: cmp al,0x2f
pf_at 0xc4e
l_loader_00000c4e: jnz short 0xc53
pf_at 0xc50
l_loader_00000c50: inc si
pf_at 0xc51
l_loader_00000c51: jmp short 0xc4a
pf_at 0xc53
l_loader_00000c53: mov al,[si]
pf_at 0xc55
l_loader_00000c55: mov ah,[es:di]
pf_at 0xc58
l_loader_00000c58: cmp al,ah
pf_at 0xc5a
l_loader_00000c5a: jnz short 0xc67
pf_at 0xc5c
l_loader_00000c5c: cmp al,0x0
pf_at 0xc5e
l_loader_00000c5e: jz short 0xc64
pf_at 0xc60
l_loader_00000c60: inc si
pf_at 0xc61
l_loader_00000c61: inc di
pf_at 0xc62
l_loader_00000c62: jmp short 0xc53
pf_at 0xc64
l_loader_00000c64: clc
pf_at 0xc65
l_loader_00000c65: pop ax
pf_at 0xc66
l_loader_00000c66: ret
pf_at 0xc67
l_loader_00000c67: stc
pf_at 0xc68
l_loader_00000c68: pop ax
pf_at 0xc69
l_loader_00000c69: ret
pf_at 0xc6a
l_loader_00000c6a: push ax
pf_at 0xc6b
l_loader_00000c6b: mov ax,cs
pf_at 0xc6d
l_loader_00000c6d: mov ds,ax
pf_at 0xc6f
l_loader_00000c6f: pop ax
pf_at 0xc70
l_loader_00000c70: mov byte [0x1008],0x0
pf_at 0xc75
l_loader_00000c75: call 0xcf7
pf_at 0xc78
l_loader_00000c78: mov ah,0x42
pf_at 0xc7a
l_loader_00000c7a: int 0x13
pf_at 0xc7c
l_loader_00000c7c: call 0xd33
pf_at 0xc7f
l_loader_00000c7f: jnc short 0xca7
pf_at 0xc81
l_loader_00000c81: mov [0x1008],ah
pf_at 0xc85
l_loader_00000c85: xor ah,ah
pf_at 0xc87
l_loader_00000c87: mov dl,[0x1004]
pf_at 0xc8b
l_loader_00000c8b: int 0x13
pf_at 0xc8d
l_loader_00000c8d: call 0xd33
pf_at 0xc90
l_loader_00000c90: call 0xcf7
pf_at 0xc93
l_loader_00000c93: mov ah,0x42
pf_at 0xc95
l_loader_00000c95: int 0x13
pf_at 0xc97
l_loader_00000c97: call 0xd33
pf_at 0xc9a
l_loader_00000c9a: jnc short 0xca7
pf_at 0xc9c
l_loader_00000c9c: mov [0x1008],ah
pf_at 0xca0
l_loader_00000ca0: mov byte [0x1007],0x44
pf_at 0xca5
l_loader_00000ca5: stc
pf_at 0xca6
l_loader_00000ca6: ret
pf_at 0xca7
l_loader_00000ca7: clc
pf_at 0xca8
l_loader_00000ca8: ret
pf_at 0xca9
l_loader_00000ca9: cmp word [0x1014],byte +0x0
pf_at 0xcae
l_loader_00000cae: jz short 0xcf5
pf_at 0xcb0
l_loader_00000cb0: mov cx,0x1
pf_at 0xcb3
l_loader_00000cb3: mov ax,0x1000
pf_at 0xcb6
l_loader_00000cb6: mov es,ax
pf_at 0xcb8
l_loader_00000cb8: xor bx,bx
pf_at 0xcba
l_loader_00000cba: mov eax,[0x10a0]
pf_at 0xcbe
l_loader_00000cbe: call 0xc6a
pf_at 0xcc1
l_loader_00000cc1: jc short 0xcf3
pf_at 0xcc3
l_loader_00000cc3: push ds
pf_at 0xcc4
l_loader_00000cc4: push es
pf_at 0xcc5
l_loader_00000cc5: push si
pf_at 0xcc6
l_loader_00000cc6: push di
pf_at 0xcc7
l_loader_00000cc7: push cx
pf_at 0xcc8
l_loader_00000cc8: mov ax,[0x1016]
pf_at 0xccb
l_loader_00000ccb: push ax
pf_at 0xccc
l_loader_00000ccc: mov ax,0x1000
pf_at 0xccf
l_loader_00000ccf: mov ds,ax
pf_at 0xcd1
l_loader_00000cd1: xor si,si
pf_at 0xcd3
l_loader_00000cd3: pop ax
pf_at 0xcd4
l_loader_00000cd4: mov es,ax
pf_at 0xcd6
l_loader_00000cd6: xor di,di
pf_at 0xcd8
l_loader_00000cd8: mov cx,0x100
pf_at 0xcdb
l_loader_00000cdb: cld
pf_at 0xcdc
l_loader_00000cdc: rep movsw
pf_at 0xcde
l_loader_00000cde: pop cx
pf_at 0xcdf
l_loader_00000cdf: pop di
pf_at 0xce0
l_loader_00000ce0: pop si
pf_at 0xce1
l_loader_00000ce1: pop es
pf_at 0xce2
l_loader_00000ce2: pop ds
pf_at 0xce3
l_loader_00000ce3: add word [0x1016],byte +0x20
pf_at 0xce8
l_loader_00000ce8: dec word [0x1014]
pf_at 0xcec
l_loader_00000cec: inc dword [0x10a0]
pf_at 0xcf1
l_loader_00000cf1: jmp short 0xca9
pf_at 0xcf3
l_loader_00000cf3: stc
pf_at 0xcf4
l_loader_00000cf4: ret
pf_at 0xcf5
l_loader_00000cf5: clc
pf_at 0xcf6
l_loader_00000cf6: ret
pf_at 0xcf7
l_loader_00000cf7: mov [0x1018],es
pf_at 0xcfb
l_loader_00000cfb: mov dl,[0x1004]
pf_at 0xcff
l_loader_00000cff: mov di,0x1000
pf_at 0xd02
l_loader_00000d02: mov es,di
pf_at 0xd04
l_loader_00000d04: mov word [es:0x400],0x10
pf_at 0xd0b
l_loader_00000d0b: mov [es:0x402],cx
pf_at 0xd10
l_loader_00000d10: mov [es:0x404],bx
pf_at 0xd15
l_loader_00000d15: mov bp,[0x1018]
pf_at 0xd19
l_loader_00000d19: mov [es:0x406],bp
pf_at 0xd1e
l_loader_00000d1e: mov [es:0x408],eax
pf_at 0xd23
l_loader_00000d23: mov dword [es:0x40c],0x0
pf_at 0xd2d
l_loader_00000d2d: mov ds,di
pf_at 0xd2f
l_loader_00000d2f: mov si,0x400
pf_at 0xd32
l_loader_00000d32: ret
pf_at 0xd33
l_loader_00000d33: push ax
pf_at 0xd34
l_loader_00000d34: mov ax,cs
pf_at 0xd36
l_loader_00000d36: mov ds,ax
pf_at 0xd38
l_loader_00000d38: mov ax,[0x1018]
pf_at 0xd3b
l_loader_00000d3b: mov es,ax
pf_at 0xd3d
l_loader_00000d3d: pop ax
pf_at 0xd3e
l_loader_00000d3e: ret
pf_at 0xd3f
l_loader_00000d3f: push ax
pf_at 0xd40
l_loader_00000d40: push bx
pf_at 0xd41
l_loader_00000d41: push cx
pf_at 0xd42
l_loader_00000d42: push dx
pf_at 0xd43
l_loader_00000d43: push si
pf_at 0xd44
l_loader_00000d44: push di
pf_at 0xd45
l_loader_00000d45: push bp
pf_at 0xd46
l_loader_00000d46: push ds
pf_at 0xd47
l_loader_00000d47: push es
pf_at 0xd48
l_loader_00000d48: mov ah,0xe
pf_at 0xd4a
l_loader_00000d4a: mov bx,0x7
pf_at 0xd4d
l_loader_00000d4d: int 0x10
pf_at 0xd4f
l_loader_00000d4f: pop es
pf_at 0xd50
l_loader_00000d50: pop ds
pf_at 0xd51
l_loader_00000d51: pop bp
pf_at 0xd52
l_loader_00000d52: pop di
pf_at 0xd53
l_loader_00000d53: pop si
pf_at 0xd54
l_loader_00000d54: pop dx
pf_at 0xd55
l_loader_00000d55: pop cx
pf_at 0xd56
l_loader_00000d56: pop bx
pf_at 0xd57
l_loader_00000d57: pop ax
pf_at 0xd58
l_loader_00000d58: ret
pf_at 0xd59
l_loader_00000d59: cld
pf_at 0xd5a
l_loader_00000d5a: lodsb
pf_at 0xd5b
l_loader_00000d5b: test al,al
pf_at 0xd5d
l_loader_00000d5d: jz short 0xd64
pf_at 0xd5f
l_loader_00000d5f: call 0xd3f
pf_at 0xd62
l_loader_00000d62: jmp short 0xd5a
pf_at 0xd64
l_loader_00000d64: ret
pf_at 0xd65
l_loader_00000d65: and al,0xf
pf_at 0xd67
l_loader_00000d67: cmp al,0x9
pf_at 0xd69
l_loader_00000d69: jna short 0xd6f
pf_at 0xd6b
l_loader_00000d6b: add al,0x37
pf_at 0xd6d
l_loader_00000d6d: jmp short 0xd71
pf_at 0xd6f
l_loader_00000d6f: add al,0x30
pf_at 0xd71
l_loader_00000d71: call 0xd3f
pf_at 0xd74
l_loader_00000d74: ret
pf_at 0xd75
l_loader_00000d75: push ax
pf_at 0xd76
l_loader_00000d76: push bx
pf_at 0xd77
l_loader_00000d77: mov bl,al
pf_at 0xd79
l_loader_00000d79: shr al,byte 0x4
pf_at 0xd7c
l_loader_00000d7c: call 0xd65
pf_at 0xd7f
l_loader_00000d7f: mov al,bl
pf_at 0xd81
l_loader_00000d81: call 0xd65
pf_at 0xd84
l_loader_00000d84: pop bx
pf_at 0xd85
l_loader_00000d85: pop ax
pf_at 0xd86
l_loader_00000d86: ret
pf_at 0xd87
l_loader_00000d87: push ax
pf_at 0xd88
l_loader_00000d88: xchg ah,al
pf_at 0xd8a
l_loader_00000d8a: call 0xd75
pf_at 0xd8d
l_loader_00000d8d: pop ax
pf_at 0xd8e
l_loader_00000d8e: call 0xd75
pf_at 0xd91
l_loader_00000d91: ret

section part1 start=0xd92 vstart=0x8d92 align=1
bits 32
pf_at 0x0
l_loader_00008d92: mov ax,0x10
pf_at 0x4
l_loader_00008d96: o16 mov ds,ax
pf_at 0x7
l_loader_00008d99: o16 mov es,ax
pf_at 0xa
l_loader_00008d9c: o16 mov fs,ax
pf_at 0xd
l_loader_00008d9f: o16 mov gs,ax
pf_at 0x10
l_loader_00008da2: o16 mov ss,ax
pf_at 0x13
l_loader_00008da5: mov esp,0x17f000
pf_at 0x18
l_loader_00008daa: cld
pf_at 0x19
l_loader_00008dab: call 0x8db2
pf_at 0x1e
l_loader_00008db0: jmp esi
pf_at 0x20
l_loader_00008db2: pusha
pf_at 0x21
l_loader_00008db3: mov ecx,[dword 0x6124]
pf_at 0x27
l_loader_00008db9: mov eax,[0x6238]
pf_at 0x2c
l_loader_00008dbe: test eax,0x1
pf_at 0x31
l_loader_00008dc3: jnz short 0x8dcd
pf_at 0x33
l_loader_00008dc5: test ecx,ecx
pf_at 0x35
l_loader_00008dc7: jz near 0x8f11
pf_at 0x3b
l_loader_00008dcd: pushf
pf_at 0x3c
l_loader_00008dce: pop eax
pf_at 0x3d
l_loader_00008dcf: mov edx,eax
pf_at 0x3f
l_loader_00008dd1: xor eax,0x200000
pf_at 0x44
l_loader_00008dd6: push eax
pf_at 0x45
l_loader_00008dd7: popf
pf_at 0x46
l_loader_00008dd8: pushf
pf_at 0x47
l_loader_00008dd9: pop eax
pf_at 0x48
l_loader_00008dda: push edx
pf_at 0x49
l_loader_00008ddb: popf
pf_at 0x4a
l_loader_00008ddc: xor eax,edx
pf_at 0x4c
l_loader_00008dde: test eax,0x200000
pf_at 0x51
l_loader_00008de3: jz near 0x8ecf
pf_at 0x57
l_loader_00008de9: mov eax,0x1
pf_at 0x5c
l_loader_00008dee: cpuid
pf_at 0x5e
l_loader_00008df0: test edx,0x40
pf_at 0x64
l_loader_00008df6: jz near 0x8ecf
pf_at 0x6a
l_loader_00008dfc: mov edi,0x2f8000
pf_at 0x6f
l_loader_00008e01: xor eax,eax
pf_at 0x71
l_loader_00008e03: mov ecx,0x1800
pf_at 0x76
l_loader_00008e08: rep stosd
pf_at 0x78
l_loader_00008e0a: mov dword [dword 0x2f7000],0x2f8003
pf_at 0x82
l_loader_00008e14: mov dword [dword 0x2f8000],0x2f9001
pf_at 0x8c
l_loader_00008e1e: mov dword [dword 0x2f8008],0x2fa001
pf_at 0x96
l_loader_00008e28: mov dword [dword 0x2f8010],0x2fb001
pf_at 0xa0
l_loader_00008e32: mov dword [dword 0x2f8018],0x2fc001
pf_at 0xaa
l_loader_00008e3c: mov edi,0x2f9000
pf_at 0xaf
l_loader_00008e41: mov eax,0x83
pf_at 0xb4
l_loader_00008e46: mov ecx,0x800
pf_at 0xb9
l_loader_00008e4b: mov [edi],eax
pf_at 0xbb
l_loader_00008e4d: mov dword [edi+0x4],0x0
pf_at 0xc2
l_loader_00008e54: add eax,0x200000
pf_at 0xc7
l_loader_00008e59: add edi,byte +0x8
pf_at 0xca
l_loader_00008e5c: loop 0x8e4b
pf_at 0xcc
l_loader_00008e5e: mov ecx,[dword 0x6124]
pf_at 0xd2
l_loader_00008e64: mov esi,0x6128
pf_at 0xd7
l_loader_00008e69: test ecx,ecx
pf_at 0xd9
l_loader_00008e6b: jz short 0x8eb1
pf_at 0xdb
l_loader_00008e6d: mov eax,[esi]
pf_at 0xdd
l_loader_00008e6f: mov ebx,[esi+0x4]
pf_at 0xe0
l_loader_00008e72: mov edx,[esi+0x8]
pf_at 0xe3
l_loader_00008e75: mov ebp,[esi+0xc]
pf_at 0xe6
l_loader_00008e78: test ebx,ebx
pf_at 0xe8
l_loader_00008e7a: jz short 0x8eab
pf_at 0xea
l_loader_00008e7c: mov edi,eax
pf_at 0xec
l_loader_00008e7e: shr edi,byte 0x15
pf_at 0xef
l_loader_00008e81: lea edi,[edi*8+0x2f9000]
pf_at 0xf6
l_loader_00008e88: shr ebx,byte 0x15
pf_at 0xf9
l_loader_00008e8b: mov eax,edx
pf_at 0xfb
l_loader_00008e8d: and eax,0xffe00000
pf_at 0x100
l_loader_00008e92: or eax,0x83
pf_at 0x105
l_loader_00008e97: mov [edi],eax
pf_at 0x107
l_loader_00008e99: mov [edi+0x4],ebp
pf_at 0x10a
l_loader_00008e9c: add edx,0x200000
pf_at 0x110
l_loader_00008ea2: adc ebp,byte +0x0
pf_at 0x113
l_loader_00008ea5: add edi,byte +0x8
pf_at 0x116
l_loader_00008ea8: dec ebx
pf_at 0x117
l_loader_00008ea9: jnz short 0x8e8b
pf_at 0x119
l_loader_00008eab: add esi,byte +0x10
pf_at 0x11c
l_loader_00008eae: dec ecx
pf_at 0x11d
l_loader_00008eaf: jmp short 0x8e69
pf_at 0x11f
l_loader_00008eb1: mov eax,cr4
pf_at 0x122
l_loader_00008eb4: or eax,byte +0x20
pf_at 0x125
l_loader_00008eb7: mov cr4,eax
pf_at 0x128
l_loader_00008eba: mov eax,0x2f8000
pf_at 0x12d
l_loader_00008ebf: mov cr3,eax
pf_at 0x130
l_loader_00008ec2: mov eax,cr0
pf_at 0x133
l_loader_00008ec5: or eax,0x80000000
pf_at 0x138
l_loader_00008eca: mov cr0,eax
pf_at 0x13b
l_loader_00008ecd: jmp short 0x8f11
pf_at 0x13d
l_loader_00008ecf: mov ecx,[dword 0x6124]
pf_at 0x143
l_loader_00008ed5: test ecx,ecx
pf_at 0x145
l_loader_00008ed7: jz short 0x8f11
pf_at 0x147
l_loader_00008ed9: sub [dword 0x608c],ecx
pf_at 0x14d
l_loader_00008edf: mov dword [dword 0x6124],0x0
pf_at 0x157
l_loader_00008ee9: mov dword [dword 0x6228],0x0
pf_at 0x161
l_loader_00008ef3: mov dword [dword 0x622c],0x0
pf_at 0x16b
l_loader_00008efd: mov dword [dword 0x6230],0x0
pf_at 0x175
l_loader_00008f07: mov dword [dword 0x6234],0x0
pf_at 0x17f
l_loader_00008f11: popa
pf_at 0x180
l_loader_00008f12: ret

section part2 start=0xf13 vstart=0x0 align=1
    db 0x8d, 0xb4
    times 2 db 0
    db 0x90
    times 8 db 0
    db 0xff, 0xff
    times 3 db 0
    db 0x9a, 0xcf
    times 1 db 0
    db 0xff, 0xff
    times 3 db 0
    db 0x92, 0xcf
    times 1 db 0
    db 0x17
    times 5 db 0
    db "Permafrost stage2 failed"
    times 1 db 0
    db "PF2 "
    times 1 db 0
    db "/Permafrost-kernel.bin"
    times 4 db 0
    db "/Permafrost64-kernel.bin"
    times 4 db 0
    db "baremetal/demo_image.raw"
    times 1 db 0
    db "baremetal/demo_audio.raw"
    times 1 db 0
    db "/startup.ws"
    times 1 db 0
    db "baremetal/startup_manifest.raw"
    times 1 db 0
    db "baremetal/startup_bundle.raw"
    times 33 db 0
    db 0x41
    times 34 db 0
    db 0x04
    times 28600 db 0
