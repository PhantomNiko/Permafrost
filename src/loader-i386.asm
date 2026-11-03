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
l_loader_00000011: mov [0xf10],dl
pf_at 0x15
l_loader_00000015: mov byte [0xf11],0x3f
pf_at 0x1a
l_loader_0000001a: mov byte [0xf12],0x3f
pf_at 0x1f
l_loader_0000001f: mov byte [0xf13],0x0
pf_at 0x24
l_loader_00000024: lea si,[0xe77]
pf_at 0x28
l_loader_00000028: call 0xc98
pf_at 0x2b
l_loader_0000002b: call 0x162
pf_at 0x2e
l_loader_0000002e: mov byte [0xf11],0x53
pf_at 0x33
l_loader_00000033: mov byte [0xf12],0x44
pf_at 0x38
l_loader_00000038: call 0x109
pf_at 0x3b
l_loader_0000003b: jnc short 0x44
pf_at 0x3d
l_loader_0000003d: call 0x24e
pf_at 0x40
l_loader_00000040: jnc short 0x2e
pf_at 0x42
l_loader_00000042: jmp short 0x9b
pf_at 0x44
l_loader_00000044: mov byte [0xf11],0x48
pf_at 0x49
l_loader_00000049: mov byte [0xf12],0x46
pf_at 0x4e
l_loader_0000004e: mov byte [0xf13],0x0
pf_at 0x53
l_loader_00000053: mov ax,0x2000
pf_at 0x56
l_loader_00000056: lea si,[0xe7c]
pf_at 0x5a
l_loader_0000005a: call 0x285
pf_at 0x5d
l_loader_0000005d: jnc short 0x66
pf_at 0x5f
l_loader_0000005f: call 0x24e
pf_at 0x62
l_loader_00000062: jnc short 0x2e
pf_at 0x64
l_loader_00000064: jmp short 0x9b
pf_at 0x66
l_loader_00000066: mov byte [0xf11],0x50
pf_at 0x6b
l_loader_0000006b: mov byte [0xf12],0x42
pf_at 0x70
l_loader_00000070: call 0x352
pf_at 0x73
l_loader_00000073: jnc short 0x7c
pf_at 0x75
l_loader_00000075: call 0x24e
pf_at 0x78
l_loader_00000078: jnc short 0x2e
pf_at 0x7a
l_loader_0000007a: jmp short 0x9b
pf_at 0x7c
l_loader_0000007c: call 0x3d3
pf_at 0x7f
l_loader_0000007f: call 0x42c
pf_at 0x82
l_loader_00000082: call 0xa21
pf_at 0x85
l_loader_00000085: mov byte [0xf11],0x54
pf_at 0x8a
l_loader_0000008a: mov byte [0xf12],0x4d
pf_at 0x8f
l_loader_0000008f: call 0xaad
pf_at 0x92
l_loader_00000092: call 0xab3
pf_at 0x95
l_loader_00000095: call 0xaba
pf_at 0x98
l_loader_00000098: hlt
pf_at 0x99
l_loader_00000099: jmp short 0x98
pf_at 0x9b
l_loader_0000009b: push ax
pf_at 0x9c
l_loader_0000009c: mov ax,cs
pf_at 0x9e
l_loader_0000009e: mov ds,ax
pf_at 0xa0
l_loader_000000a0: pop ax
pf_at 0xa1
l_loader_000000a1: lea si,[0xe5e]
pf_at 0xa5
l_loader_000000a5: call 0xc98
pf_at 0xa8
l_loader_000000a8: mov al,0x20
pf_at 0xaa
l_loader_000000aa: call 0xc7e
pf_at 0xad
l_loader_000000ad: mov al,0x5b
pf_at 0xaf
l_loader_000000af: call 0xc7e
pf_at 0xb2
l_loader_000000b2: mov al,[0xf11]
pf_at 0xb5
l_loader_000000b5: call 0xc7e
pf_at 0xb8
l_loader_000000b8: mov al,0x3a
pf_at 0xba
l_loader_000000ba: call 0xc7e
pf_at 0xbd
l_loader_000000bd: mov al,[0xf12]
pf_at 0xc0
l_loader_000000c0: call 0xc7e
pf_at 0xc3
l_loader_000000c3: mov al,0x20
pf_at 0xc5
l_loader_000000c5: call 0xc7e
pf_at 0xc8
l_loader_000000c8: mov al,[0xf13]
pf_at 0xcb
l_loader_000000cb: call 0xcb4
pf_at 0xce
l_loader_000000ce: cmp byte [0xf12],0x44
pf_at 0xd3
l_loader_000000d3: jnz short 0x101
pf_at 0xd5
l_loader_000000d5: mov al,0x20
pf_at 0xd7
l_loader_000000d7: call 0xc7e
pf_at 0xda
l_loader_000000da: mov al,0x4c
pf_at 0xdc
l_loader_000000dc: call 0xc7e
pf_at 0xdf
l_loader_000000df: push ax
pf_at 0xe0
l_loader_000000e0: mov ax,cs
pf_at 0xe2
l_loader_000000e2: mov ds,ax
pf_at 0xe4
l_loader_000000e4: pop ax
pf_at 0xe5
l_loader_000000e5: mov ax,[0xfa8]
pf_at 0xe8
l_loader_000000e8: call 0xcc6
pf_at 0xeb
l_loader_000000eb: mov al,0x20
pf_at 0xed
l_loader_000000ed: call 0xc7e
pf_at 0xf0
l_loader_000000f0: mov al,0x53
pf_at 0xf2
l_loader_000000f2: call 0xc7e
pf_at 0xf5
l_loader_000000f5: push ax
pf_at 0xf6
l_loader_000000f6: mov ax,cs
pf_at 0xf8
l_loader_000000f8: mov ds,ax
pf_at 0xfa
l_loader_000000fa: pop ax
pf_at 0xfb
l_loader_000000fb: mov ax,[0xfa4]
pf_at 0xfe
l_loader_000000fe: call 0xcc6
pf_at 0x101
l_loader_00000101: mov al,0x5d
pf_at 0x103
l_loader_00000103: call 0xc7e
pf_at 0x106
l_loader_00000106: hlt
pf_at 0x107
l_loader_00000107: jmp short 0x106
pf_at 0x109
l_loader_00000109: push ax
pf_at 0x10a
l_loader_0000010a: mov ax,cs
pf_at 0x10c
l_loader_0000010c: mov ds,ax
pf_at 0x10e
l_loader_0000010e: pop ax
pf_at 0x10f
l_loader_0000010f: mov ax,0x1000
pf_at 0x112
l_loader_00000112: mov es,ax
pf_at 0x114
l_loader_00000114: xor bx,bx
pf_at 0x116
l_loader_00000116: mov eax,[0xf30]
pf_at 0x11a
l_loader_0000011a: mov [0xfa8],eax
pf_at 0x11e
l_loader_0000011e: mov [0xfa4],eax
pf_at 0x122
l_loader_00000122: mov word [0xf1f],0x1
pf_at 0x128
l_loader_00000128: mov cx,0x1
pf_at 0x12b
l_loader_0000012b: call 0xba9
pf_at 0x12e
l_loader_0000012e: jc short 0x161
pf_at 0x130
l_loader_00000130: mov ax,[es:0x10]
pf_at 0x134
l_loader_00000134: mov [0xf19],ax
pf_at 0x137
l_loader_00000137: mov eax,[es:0x1c]
pf_at 0x13c
l_loader_0000013c: add eax,[0xf30]
pf_at 0x141
l_loader_00000141: mov [0xf28],eax
pf_at 0x145
l_loader_00000145: mov ax,[es:0x20]
pf_at 0x149
l_loader_00000149: mov [0xf1b],ax
pf_at 0x14c
l_loader_0000014c: mov eax,[es:0x24]
pf_at 0x151
l_loader_00000151: add eax,[0xf30]
pf_at 0x156
l_loader_00000156: mov [0xf2c],eax
pf_at 0x15a
l_loader_0000015a: mov ax,[es:0x2c]
pf_at 0x15e
l_loader_0000015e: mov [0xf1d],ax
pf_at 0x161
l_loader_00000161: ret
pf_at 0x162
l_loader_00000162: push ax
pf_at 0x163
l_loader_00000163: push bx
pf_at 0x164
l_loader_00000164: push cx
pf_at 0x165
l_loader_00000165: push ds
pf_at 0x166
l_loader_00000166: push es
pf_at 0x167
l_loader_00000167: mov ax,cs
pf_at 0x169
l_loader_00000169: mov ds,ax
pf_at 0x16b
l_loader_0000016b: mov dword [0xf30],0x41
pf_at 0x174
l_loader_00000174: mov dword [0xf34],0x0
pf_at 0x17d
l_loader_0000017d: mov dword [0xf38],0x0
pf_at 0x186
l_loader_00000186: mov dword [0xf3c],0x0
pf_at 0x18f
l_loader_0000018f: mov dword [0xf40],0x0
pf_at 0x198
l_loader_00000198: mov dword [0xf44],0x0
pf_at 0x1a1
l_loader_000001a1: mov ax,0x1000
pf_at 0x1a4
l_loader_000001a4: mov es,ax
pf_at 0x1a6
l_loader_000001a6: xor bx,bx
pf_at 0x1a8
l_loader_000001a8: mov eax,0x41
pf_at 0x1ae
l_loader_000001ae: mov [0xfa8],eax
pf_at 0x1b2
l_loader_000001b2: mov [0xfa4],eax
pf_at 0x1b6
l_loader_000001b6: mov word [0xf1f],0x1
pf_at 0x1bc
l_loader_000001bc: mov cx,0x1
pf_at 0x1bf
l_loader_000001bf: call 0xba9
pf_at 0x1c2
l_loader_000001c2: jc short 0x242
pf_at 0x1c4
l_loader_000001c4: cmp word [es:0x0],0x4257
pf_at 0x1cb
l_loader_000001cb: jnz short 0x242
pf_at 0x1cd
l_loader_000001cd: cmp word [es:0x2],0x5450
pf_at 0x1d4
l_loader_000001d4: jnz short 0x242
pf_at 0x1d6
l_loader_000001d6: cmp word [es:0x4],byte +0x1
pf_at 0x1dc
l_loader_000001dc: jnz short 0x242
pf_at 0x1de
l_loader_000001de: cmp word [es:0x6],byte +0x1
pf_at 0x1e4
l_loader_000001e4: jc short 0x242
pf_at 0x1e6
l_loader_000001e6: cmp dword [es:0x20],byte +0x1
pf_at 0x1ed
l_loader_000001ed: jnz short 0x242
pf_at 0x1ef
l_loader_000001ef: mov eax,[es:0x24]
pf_at 0x1f4
l_loader_000001f4: cmp eax,byte +0x41
pf_at 0x1f8
l_loader_000001f8: jna short 0x242
pf_at 0x1fa
l_loader_000001fa: mov [0xf30],eax
pf_at 0x1fe
l_loader_000001fe: mov eax,[es:0x28]
pf_at 0x203
l_loader_00000203: mov [0xf34],eax
pf_at 0x207
l_loader_00000207: mov eax,[es:0x2c]
pf_at 0x20c
l_loader_0000020c: mov [0xf38],eax
pf_at 0x210
l_loader_00000210: cmp word [es:0x6],byte +0x2
pf_at 0x216
l_loader_00000216: jc short 0x242
pf_at 0x218
l_loader_00000218: cmp dword [es:0x40],byte +0x1
pf_at 0x21f
l_loader_0000021f: jnz short 0x242
pf_at 0x221
l_loader_00000221: mov eax,[es:0x44]
pf_at 0x226
l_loader_00000226: cmp eax,byte +0x41
pf_at 0x22a
l_loader_0000022a: jna short 0x242
pf_at 0x22c
l_loader_0000022c: mov [0xf3c],eax
pf_at 0x230
l_loader_00000230: mov eax,[es:0x48]
pf_at 0x235
l_loader_00000235: mov [0xf40],eax
pf_at 0x239
l_loader_00000239: mov eax,[es:0x4c]
pf_at 0x23e
l_loader_0000023e: mov [0xf44],eax
pf_at 0x242
l_loader_00000242: mov byte [0xf13],0x0
pf_at 0x247
l_loader_00000247: pop es
pf_at 0x248
l_loader_00000248: pop ds
pf_at 0x249
l_loader_00000249: pop cx
pf_at 0x24a
l_loader_0000024a: pop bx
pf_at 0x24b
l_loader_0000024b: pop ax
pf_at 0x24c
l_loader_0000024c: clc
pf_at 0x24d
l_loader_0000024d: ret
pf_at 0x24e
l_loader_0000024e: push ax
pf_at 0x24f
l_loader_0000024f: push ds
pf_at 0x250
l_loader_00000250: mov ax,cs
pf_at 0x252
l_loader_00000252: mov ds,ax
pf_at 0x254
l_loader_00000254: mov eax,[0xf3c]
pf_at 0x258
l_loader_00000258: test eax,eax
pf_at 0x25b
l_loader_0000025b: jz short 0x281
pf_at 0x25d
l_loader_0000025d: cmp eax,[0xf30]
pf_at 0x262
l_loader_00000262: jz short 0x281
pf_at 0x264
l_loader_00000264: mov [0xf30],eax
pf_at 0x268
l_loader_00000268: mov eax,[0xf40]
pf_at 0x26c
l_loader_0000026c: mov [0xf34],eax
pf_at 0x270
l_loader_00000270: mov eax,[0xf44]
pf_at 0x274
l_loader_00000274: mov [0xf38],eax
pf_at 0x278
l_loader_00000278: mov byte [0xf13],0x0
pf_at 0x27d
l_loader_0000027d: pop ds
pf_at 0x27e
l_loader_0000027e: pop ax
pf_at 0x27f
l_loader_0000027f: clc
pf_at 0x280
l_loader_00000280: ret
pf_at 0x281
l_loader_00000281: pop ds
pf_at 0x282
l_loader_00000282: pop ax
pf_at 0x283
l_loader_00000283: stc
pf_at 0x284
l_loader_00000284: ret
pf_at 0x285
l_loader_00000285: push ax
pf_at 0x286
l_loader_00000286: mov ax,cs
pf_at 0x288
l_loader_00000288: mov ds,ax
pf_at 0x28a
l_loader_0000028a: pop ax
pf_at 0x28b
l_loader_0000028b: mov [0xf15],ax
pf_at 0x28e
l_loader_0000028e: mov [0xf17],si
pf_at 0x292
l_loader_00000292: mov dx,[0xf1d]
pf_at 0x296
l_loader_00000296: xor bp,bp
pf_at 0x298
l_loader_00000298: cmp bp,[0xf1b]
pf_at 0x29c
l_loader_0000029c: jnc near 0x344
pf_at 0x2a0
l_loader_000002a0: mov ax,0x1000
pf_at 0x2a3
l_loader_000002a3: mov es,ax
pf_at 0x2a5
l_loader_000002a5: xor bx,bx
pf_at 0x2a7
l_loader_000002a7: mov eax,[0xf28]
pf_at 0x2ab
l_loader_000002ab: movzx ecx,bp
pf_at 0x2af
l_loader_000002af: add eax,ecx
pf_at 0x2b2
l_loader_000002b2: mov [0xfa8],eax
pf_at 0x2b6
l_loader_000002b6: mov [0xfa4],eax
pf_at 0x2ba
l_loader_000002ba: mov word [0xf1f],0x1
pf_at 0x2c0
l_loader_000002c0: mov cx,0x1
pf_at 0x2c3
l_loader_000002c3: push bp
pf_at 0x2c4
l_loader_000002c4: push dx
pf_at 0x2c5
l_loader_000002c5: call 0xba9
pf_at 0x2c8
l_loader_000002c8: pop dx
pf_at 0x2c9
l_loader_000002c9: pop bp
pf_at 0x2ca
l_loader_000002ca: jc short 0x344
pf_at 0x2cc
l_loader_000002cc: xor bx,bx
pf_at 0x2ce
l_loader_000002ce: mov cx,0x2
pf_at 0x2d1
l_loader_000002d1: cmp dx,byte +0x0
pf_at 0x2d4
l_loader_000002d4: jz short 0x344
pf_at 0x2d6
l_loader_000002d6: push cx
pf_at 0x2d7
l_loader_000002d7: mov si,[0xf17]
pf_at 0x2db
l_loader_000002db: mov di,bx
pf_at 0x2dd
l_loader_000002dd: call 0xb88
pf_at 0x2e0
l_loader_000002e0: pop cx
pf_at 0x2e1
l_loader_000002e1: jnc short 0x2ed
pf_at 0x2e3
l_loader_000002e3: add bx,0x100
pf_at 0x2e7
l_loader_000002e7: dec dx
pf_at 0x2e8
l_loader_000002e8: loop 0x2d1
pf_at 0x2ea
l_loader_000002ea: inc bp
pf_at 0x2eb
l_loader_000002eb: jmp short 0x298
pf_at 0x2ed
l_loader_000002ed: mov eax,[es:bx+0xf0]
pf_at 0x2f3
l_loader_000002f3: mov [0xf84],eax
pf_at 0x2f7
l_loader_000002f7: mov eax,[es:bx+0xf4]
pf_at 0x2fd
l_loader_000002fd: mov [0xf88],eax
pf_at 0x301
l_loader_00000301: mov eax,[0xf88]
pf_at 0x305
l_loader_00000305: add eax,0x1ff
pf_at 0x30b
l_loader_0000030b: shr eax,byte 0x9
pf_at 0x30f
l_loader_0000030f: mov cx,ax
pf_at 0x311
l_loader_00000311: mov eax,[0xf84]
pf_at 0x315
l_loader_00000315: sub eax,byte +0x2
pf_at 0x319
l_loader_00000319: movzx edx,word [0xf19]
pf_at 0x31f
l_loader_0000031f: imul eax,edx
pf_at 0x323
l_loader_00000323: add eax,[0xf2c]
pf_at 0x328
l_loader_00000328: mov [0xfa8],eax
pf_at 0x32c
l_loader_0000032c: mov [0xfa4],eax
pf_at 0x330
l_loader_00000330: mov [0xf1f],cx
pf_at 0x334
l_loader_00000334: mov ax,[0xf15]
pf_at 0x337
l_loader_00000337: mov [0xf21],ax
pf_at 0x33a
l_loader_0000033a: call 0xbe8
pf_at 0x33d
l_loader_0000033d: jc short 0x344
pf_at 0x33f
l_loader_0000033f: mov ax,[0xf88]
pf_at 0x342
l_loader_00000342: clc
pf_at 0x343
l_loader_00000343: ret
pf_at 0x344
l_loader_00000344: cmp byte [0xf13],0x0
pf_at 0x349
l_loader_00000349: jnz short 0x350
pf_at 0x34b
l_loader_0000034b: mov byte [0xf12],0x46
pf_at 0x350
l_loader_00000350: stc
pf_at 0x351
l_loader_00000351: ret
pf_at 0x352
l_loader_00000352: push ds
pf_at 0x353
l_loader_00000353: push es
pf_at 0x354
l_loader_00000354: mov ax,cs
pf_at 0x356
l_loader_00000356: mov ds,ax
pf_at 0x358
l_loader_00000358: mov ax,0x2000
pf_at 0x35b
l_loader_0000035b: mov es,ax
pf_at 0x35d
l_loader_0000035d: cmp word [es:0x0],0x4d57
pf_at 0x364
l_loader_00000364: jnz short 0x3b4
pf_at 0x366
l_loader_00000366: cmp word [es:0x2],0x504c
pf_at 0x36d
l_loader_0000036d: jnz short 0x3b4
pf_at 0x36f
l_loader_0000036f: cmp dword [es:0x4],byte +0x1
pf_at 0x376
l_loader_00000376: jnz short 0x3b4
pf_at 0x378
l_loader_00000378: mov eax,[es:0xc]
pf_at 0x37d
l_loader_0000037d: cmp eax,byte +0x10
pf_at 0x381
l_loader_00000381: jc short 0x3b4
pf_at 0x383
l_loader_00000383: cmp eax,[0xf88]
pf_at 0x388
l_loader_00000388: ja short 0x3b4
pf_at 0x38a
l_loader_0000038a: mov [0xf80],eax
pf_at 0x38e
l_loader_0000038e: mov eax,[es:0x8]
pf_at 0x393
l_loader_00000393: cmp eax,0x20000
pf_at 0x399
l_loader_00000399: jc short 0x3b4
pf_at 0x39b
l_loader_0000039b: mov edx,eax
pf_at 0x39e
l_loader_0000039e: sub edx,0x20000
pf_at 0x3a5
l_loader_000003a5: cmp edx,[0xf80]
pf_at 0x3aa
l_loader_000003aa: jnc short 0x3b4
pf_at 0x3ac
l_loader_000003ac: mov [0xf7c],eax
pf_at 0x3b0
l_loader_000003b0: pop es
pf_at 0x3b1
l_loader_000003b1: pop ds
pf_at 0x3b2
l_loader_000003b2: clc
pf_at 0x3b3
l_loader_000003b3: ret
pf_at 0x3b4
l_loader_000003b4: mov ax,cs
pf_at 0x3b6
l_loader_000003b6: mov ds,ax
pf_at 0x3b8
l_loader_000003b8: mov byte [0xf12],0x42
pf_at 0x3bd
l_loader_000003bd: mov dword [0xf7c],0x0
pf_at 0x3c6
l_loader_000003c6: mov dword [0xf80],0x0
pf_at 0x3cf
l_loader_000003cf: pop es
pf_at 0x3d0
l_loader_000003d0: pop ds
pf_at 0x3d1
l_loader_000003d1: stc
pf_at 0x3d2
l_loader_000003d2: ret
pf_at 0x3d3
l_loader_000003d3: push ax
pf_at 0x3d4
l_loader_000003d4: push cx
pf_at 0x3d5
l_loader_000003d5: push ds
pf_at 0x3d6
l_loader_000003d6: push es
pf_at 0x3d7
l_loader_000003d7: push si
pf_at 0x3d8
l_loader_000003d8: push di
pf_at 0x3d9
l_loader_000003d9: mov ax,cs
pf_at 0x3db
l_loader_000003db: mov ds,ax
pf_at 0x3dd
l_loader_000003dd: mov es,ax
pf_at 0x3df
l_loader_000003df: lea di,[0xfac]
pf_at 0x3e3
l_loader_000003e3: xor eax,eax
pf_at 0x3e6
l_loader_000003e6: mov cx,0xf
pf_at 0x3e9
l_loader_000003e9: cld
pf_at 0x3ea
l_loader_000003ea: rep stosw
pf_at 0x3ec
l_loader_000003ec: mov word [0xfac],0x1e
pf_at 0x3f2
l_loader_000003f2: mov ah,0x48
pf_at 0x3f4
l_loader_000003f4: mov dl,[0xf10]
pf_at 0x3f8
l_loader_000003f8: lea si,[0xfac]
pf_at 0x3fc
l_loader_000003fc: int 0x13
pf_at 0x3fe
l_loader_000003fe: jc short 0x41b
pf_at 0x400
l_loader_00000400: mov eax,[0xfbc]
pf_at 0x404
l_loader_00000404: mov edx,[0xfc0]
pf_at 0x409
l_loader_00000409: test edx,edx
pf_at 0x40c
l_loader_0000040c: jz short 0x414
pf_at 0x40e
l_loader_0000040e: mov eax,0xffffffff
pf_at 0x414
l_loader_00000414: mov [0xf48],eax
pf_at 0x418
l_loader_00000418: clc
pf_at 0x419
l_loader_00000419: jmp short 0x425
pf_at 0x41b
l_loader_0000041b: mov dword [0xf48],0x0
pf_at 0x424
l_loader_00000424: stc
pf_at 0x425
l_loader_00000425: pop di
pf_at 0x426
l_loader_00000426: pop si
pf_at 0x427
l_loader_00000427: pop es
pf_at 0x428
l_loader_00000428: pop ds
pf_at 0x429
l_loader_00000429: pop cx
pf_at 0x42a
l_loader_0000042a: pop ax
pf_at 0x42b
l_loader_0000042b: ret
pf_at 0x42c
l_loader_0000042c: push ax
pf_at 0x42d
l_loader_0000042d: push bx
pf_at 0x42e
l_loader_0000042e: push cx
pf_at 0x42f
l_loader_0000042f: push dx
pf_at 0x430
l_loader_00000430: push ds
pf_at 0x431
l_loader_00000431: push es
pf_at 0x432
l_loader_00000432: push si
pf_at 0x433
l_loader_00000433: push di
pf_at 0x434
l_loader_00000434: mov ax,cs
pf_at 0x436
l_loader_00000436: mov ds,ax
pf_at 0x438
l_loader_00000438: mov es,ax
pf_at 0x43a
l_loader_0000043a: mov dword [0xf4c],0x4000000
pf_at 0x443
l_loader_00000443: call 0x465
pf_at 0x446
l_loader_00000446: jnc short 0x45c
pf_at 0x448
l_loader_00000448: call 0x54b
pf_at 0x44b
l_loader_0000044b: jnc short 0x45c
pf_at 0x44d
l_loader_0000044d: call 0x5a4
pf_at 0x450
l_loader_00000450: jnc short 0x45c
pf_at 0x452
l_loader_00000452: mov dword [0xf4c],0x4000000
pf_at 0x45b
l_loader_0000045b: clc
pf_at 0x45c
l_loader_0000045c: pop di
pf_at 0x45d
l_loader_0000045d: pop si
pf_at 0x45e
l_loader_0000045e: pop es
pf_at 0x45f
l_loader_0000045f: pop ds
pf_at 0x460
l_loader_00000460: pop dx
pf_at 0x461
l_loader_00000461: pop cx
pf_at 0x462
l_loader_00000462: pop bx
pf_at 0x463
l_loader_00000463: pop ax
pf_at 0x464
l_loader_00000464: ret
pf_at 0x465
l_loader_00000465: push ax
pf_at 0x466
l_loader_00000466: push cx
pf_at 0x467
l_loader_00000467: push dx
pf_at 0x468
l_loader_00000468: push ds
pf_at 0x469
l_loader_00000469: push es
pf_at 0x46a
l_loader_0000046a: push di
pf_at 0x46b
l_loader_0000046b: mov ax,cs
pf_at 0x46d
l_loader_0000046d: mov ds,ax
pf_at 0x46f
l_loader_0000046f: mov es,ax
pf_at 0x471
l_loader_00000471: mov dword [0xf54],0x0
pf_at 0x47a
l_loader_0000047a: mov dword [0xf50],0x300000
pf_at 0x483
l_loader_00000483: mov eax,[0xf50]
pf_at 0x487
l_loader_00000487: mov [0xf4c],eax
pf_at 0x48b
l_loader_0000048b: mov dword [0xf54],0x0
pf_at 0x494
l_loader_00000494: lea di,[0xfca]
pf_at 0x498
l_loader_00000498: xor ax,ax
pf_at 0x49a
l_loader_0000049a: mov cx,0xa
pf_at 0x49d
l_loader_0000049d: cld
pf_at 0x49e
l_loader_0000049e: rep stosw
pf_at 0x4a0
l_loader_000004a0: mov eax,0xe820
pf_at 0x4a6
l_loader_000004a6: mov edx,0x534d4150
pf_at 0x4ac
l_loader_000004ac: mov ecx,0x14
pf_at 0x4b2
l_loader_000004b2: mov ebx,[0xf54]
pf_at 0x4b7
l_loader_000004b7: lea di,[0xfca]
pf_at 0x4bb
l_loader_000004bb: int 0x15
pf_at 0x4bd
l_loader_000004bd: jc near 0x543
pf_at 0x4c1
l_loader_000004c1: push eax
pf_at 0x4c3
l_loader_000004c3: mov ax,cs
pf_at 0x4c5
l_loader_000004c5: mov ds,ax
pf_at 0x4c7
l_loader_000004c7: mov es,ax
pf_at 0x4c9
l_loader_000004c9: pop eax
pf_at 0x4cb
l_loader_000004cb: cmp eax,0x534d4150
pf_at 0x4d1
l_loader_000004d1: jnz short 0x543
pf_at 0x4d3
l_loader_000004d3: mov [0xf54],ebx
pf_at 0x4d8
l_loader_000004d8: cmp dword [0xfda],byte +0x1
pf_at 0x4de
l_loader_000004de: jnz short 0x51b
pf_at 0x4e0
l_loader_000004e0: cmp dword [0xfce],byte +0x0
pf_at 0x4e6
l_loader_000004e6: jnz short 0x51b
pf_at 0x4e8
l_loader_000004e8: mov eax,[0xfca]
pf_at 0x4ec
l_loader_000004ec: cmp eax,[0xf50]
pf_at 0x4f1
l_loader_000004f1: ja short 0x51b
pf_at 0x4f3
l_loader_000004f3: mov edx,[0xfd6]
pf_at 0x4f8
l_loader_000004f8: test edx,edx
pf_at 0x4fb
l_loader_000004fb: jnz short 0x509
pf_at 0x4fd
l_loader_000004fd: mov edx,[0xfd2]
pf_at 0x502
l_loader_00000502: add edx,eax
pf_at 0x505
l_loader_00000505: jc short 0x509
pf_at 0x507
l_loader_00000507: jmp short 0x50f
pf_at 0x509
l_loader_00000509: mov edx,0xffffffff
pf_at 0x50f
l_loader_0000050f: cmp edx,[0xf50]
pf_at 0x514
l_loader_00000514: jna short 0x51b
pf_at 0x516
l_loader_00000516: mov [0xf50],edx
pf_at 0x51b
l_loader_0000051b: mov ebx,[0xf54]
pf_at 0x520
l_loader_00000520: test ebx,ebx
pf_at 0x523
l_loader_00000523: jnz near 0x494
pf_at 0x527
l_loader_00000527: mov eax,[0xf50]
pf_at 0x52b
l_loader_0000052b: cmp eax,[0xf4c]
pf_at 0x530
l_loader_00000530: ja near 0x483
pf_at 0x534
l_loader_00000534: cmp eax,0x300000
pf_at 0x53a
l_loader_0000053a: jna short 0x543
pf_at 0x53c
l_loader_0000053c: mov [0xf4c],eax
pf_at 0x540
l_loader_00000540: clc
pf_at 0x541
l_loader_00000541: jmp short 0x544
pf_at 0x543
l_loader_00000543: stc
pf_at 0x544
l_loader_00000544: pop di
pf_at 0x545
l_loader_00000545: pop es
pf_at 0x546
l_loader_00000546: pop ds
pf_at 0x547
l_loader_00000547: pop dx
pf_at 0x548
l_loader_00000548: pop cx
pf_at 0x549
l_loader_00000549: pop ax
pf_at 0x54a
l_loader_0000054a: ret
pf_at 0x54b
l_loader_0000054b: push ax
pf_at 0x54c
l_loader_0000054c: push bx
pf_at 0x54d
l_loader_0000054d: push cx
pf_at 0x54e
l_loader_0000054e: push dx
pf_at 0x54f
l_loader_0000054f: mov ax,0xe801
pf_at 0x552
l_loader_00000552: int 0x15
pf_at 0x554
l_loader_00000554: jc short 0x59e
pf_at 0x556
l_loader_00000556: push ax
pf_at 0x557
l_loader_00000557: mov ax,cs
pf_at 0x559
l_loader_00000559: mov ds,ax
pf_at 0x55b
l_loader_0000055b: pop ax
pf_at 0x55c
l_loader_0000055c: mov di,ax
pf_at 0x55e
l_loader_0000055e: mov si,bx
pf_at 0x560
l_loader_00000560: or di,si
pf_at 0x562
l_loader_00000562: jnz short 0x568
pf_at 0x564
l_loader_00000564: mov di,cx
pf_at 0x566
l_loader_00000566: mov si,dx
pf_at 0x568
l_loader_00000568: xor eax,eax
pf_at 0x56b
l_loader_0000056b: mov ax,di
pf_at 0x56d
l_loader_0000056d: shl eax,byte 0xa
pf_at 0x571
l_loader_00000571: add eax,0x100000
pf_at 0x577
l_loader_00000577: jc short 0x589
pf_at 0x579
l_loader_00000579: xor edx,edx
pf_at 0x57c
l_loader_0000057c: mov dx,si
pf_at 0x57e
l_loader_0000057e: shl edx,byte 0x10
pf_at 0x582
l_loader_00000582: add eax,edx
pf_at 0x585
l_loader_00000585: jc short 0x589
pf_at 0x587
l_loader_00000587: jmp short 0x58f
pf_at 0x589
l_loader_00000589: mov eax,0xffffffff
pf_at 0x58f
l_loader_0000058f: cmp eax,0x300000
pf_at 0x595
l_loader_00000595: jna short 0x59e
pf_at 0x597
l_loader_00000597: mov [0xf4c],eax
pf_at 0x59b
l_loader_0000059b: clc
pf_at 0x59c
l_loader_0000059c: jmp short 0x59f
pf_at 0x59e
l_loader_0000059e: stc
pf_at 0x59f
l_loader_0000059f: pop dx
pf_at 0x5a0
l_loader_000005a0: pop cx
pf_at 0x5a1
l_loader_000005a1: pop bx
pf_at 0x5a2
l_loader_000005a2: pop ax
pf_at 0x5a3
l_loader_000005a3: ret
pf_at 0x5a4
l_loader_000005a4: push ax
pf_at 0x5a5
l_loader_000005a5: mov ax,0x8800
pf_at 0x5a8
l_loader_000005a8: int 0x15
pf_at 0x5aa
l_loader_000005aa: jc short 0x5db
pf_at 0x5ac
l_loader_000005ac: push ax
pf_at 0x5ad
l_loader_000005ad: mov ax,cs
pf_at 0x5af
l_loader_000005af: mov ds,ax
pf_at 0x5b1
l_loader_000005b1: pop ax
pf_at 0x5b2
l_loader_000005b2: and eax,0xffff
pf_at 0x5b8
l_loader_000005b8: shl eax,byte 0xa
pf_at 0x5bc
l_loader_000005bc: add eax,0x100000
pf_at 0x5c2
l_loader_000005c2: jc short 0x5c6
pf_at 0x5c4
l_loader_000005c4: jmp short 0x5cc
pf_at 0x5c6
l_loader_000005c6: mov eax,0xffffffff
pf_at 0x5cc
l_loader_000005cc: cmp eax,0x300000
pf_at 0x5d2
l_loader_000005d2: jna short 0x5db
pf_at 0x5d4
l_loader_000005d4: mov [0xf4c],eax
pf_at 0x5d8
l_loader_000005d8: clc
pf_at 0x5d9
l_loader_000005d9: jmp short 0x5dc
pf_at 0x5db
l_loader_000005db: stc
pf_at 0x5dc
l_loader_000005dc: pop ax
pf_at 0x5dd
l_loader_000005dd: ret
pf_at 0x5de
l_loader_000005de: push ax
pf_at 0x5df
l_loader_000005df: push bx
pf_at 0x5e0
l_loader_000005e0: push cx
pf_at 0x5e1
l_loader_000005e1: push dx
pf_at 0x5e2
l_loader_000005e2: push ds
pf_at 0x5e3
l_loader_000005e3: push es
pf_at 0x5e4
l_loader_000005e4: push si
pf_at 0x5e5
l_loader_000005e5: push di
pf_at 0x5e6
l_loader_000005e6: push bp
pf_at 0x5e7
l_loader_000005e7: mov ax,cs
pf_at 0x5e9
l_loader_000005e9: mov ds,ax
pf_at 0x5eb
l_loader_000005eb: mov ax,0x600
pf_at 0x5ee
l_loader_000005ee: mov es,ax
pf_at 0x5f0
l_loader_000005f0: mov dword [es:0x8c],0x0
pf_at 0x5fa
l_loader_000005fa: mov dword [es:0x110],0x0
pf_at 0x604
l_loader_00000604: mov dword [es:0x114],0x0
pf_at 0x60e
l_loader_0000060e: mov dword [es:0x124],0x0
pf_at 0x618
l_loader_00000618: mov dword [es:0x228],0x0
pf_at 0x622
l_loader_00000622: mov dword [es:0x22c],0x0
pf_at 0x62c
l_loader_0000062c: mov dword [es:0x230],0x0
pf_at 0x636
l_loader_00000636: mov dword [es:0x234],0x0
pf_at 0x640
l_loader_00000640: mov dword [0xf54],0x0
pf_at 0x649
l_loader_00000649: mov dword [0xf58],0x300000
pf_at 0x652
l_loader_00000652: mov dword [0xf5c],0x0
pf_at 0x65b
l_loader_0000065b: mov dword [0xf60],0x0
pf_at 0x664
l_loader_00000664: mov dword [0xf64],0x0
pf_at 0x66d
l_loader_0000066d: mov dword [0xf68],0x0
pf_at 0x676
l_loader_00000676: mov ax,cs
pf_at 0x678
l_loader_00000678: mov es,ax
pf_at 0x67a
l_loader_0000067a: lea di,[0xfca]
pf_at 0x67e
l_loader_0000067e: xor ax,ax
pf_at 0x680
l_loader_00000680: mov cx,0xa
pf_at 0x683
l_loader_00000683: cld
pf_at 0x684
l_loader_00000684: rep stosw
pf_at 0x686
l_loader_00000686: mov eax,0xe820
pf_at 0x68c
l_loader_0000068c: mov edx,0x534d4150
pf_at 0x692
l_loader_00000692: mov ecx,0x14
pf_at 0x698
l_loader_00000698: mov ebx,[0xf54]
pf_at 0x69d
l_loader_0000069d: lea di,[0xfca]
pf_at 0x6a1
l_loader_000006a1: int 0x15
pf_at 0x6a3
l_loader_000006a3: push eax
pf_at 0x6a5
l_loader_000006a5: mov ax,cs
pf_at 0x6a7
l_loader_000006a7: mov ds,ax
pf_at 0x6a9
l_loader_000006a9: mov ax,0x600
pf_at 0x6ac
l_loader_000006ac: mov es,ax
pf_at 0x6ae
l_loader_000006ae: pop eax
pf_at 0x6b0
l_loader_000006b0: jc near 0x9b8
pf_at 0x6b4
l_loader_000006b4: cmp eax,0x534d4150
pf_at 0x6ba
l_loader_000006ba: jnz near 0x9b8
pf_at 0x6be
l_loader_000006be: mov [0xf54],ebx
pf_at 0x6c3
l_loader_000006c3: cmp dword [0xfda],byte +0x1
pf_at 0x6c9
l_loader_000006c9: jnz short 0x72a
pf_at 0x6cb
l_loader_000006cb: mov eax,[0xfd2]
pf_at 0x6cf
l_loader_000006cf: mov edx,[0xfd6]
pf_at 0x6d4
l_loader_000006d4: add [es:0x110],eax
pf_at 0x6da
l_loader_000006da: adc [es:0x114],edx
pf_at 0x6e0
l_loader_000006e0: cmp dword [0xfce],byte +0x0
pf_at 0x6e6
l_loader_000006e6: jnz short 0x72a
pf_at 0x6e8
l_loader_000006e8: mov eax,[0xfca]
pf_at 0x6ec
l_loader_000006ec: mov ecx,[0xfd2]
pf_at 0x6f1
l_loader_000006f1: mov edx,[0xfd6]
pf_at 0x6f6
l_loader_000006f6: add ecx,eax
pf_at 0x6f9
l_loader_000006f9: adc edx,byte +0x0
pf_at 0x6fd
l_loader_000006fd: test edx,edx
pf_at 0x700
l_loader_00000700: jnz short 0x719
pf_at 0x702
l_loader_00000702: cmp ecx,0x300000
pf_at 0x709
l_loader_00000709: jna short 0x72a
pf_at 0x70b
l_loader_0000070b: cmp ecx,[0xf58]
pf_at 0x710
l_loader_00000710: jna short 0x72a
pf_at 0x712
l_loader_00000712: mov [0xf58],ecx
pf_at 0x717
l_loader_00000717: jmp short 0x72a
pf_at 0x719
l_loader_00000719: mov eax,0xffffffff
pf_at 0x71f
l_loader_0000071f: cmp eax,[0xf58]
pf_at 0x724
l_loader_00000724: jna short 0x72a
pf_at 0x726
l_loader_00000726: mov [0xf58],eax
pf_at 0x72a
l_loader_0000072a: mov ebx,[0xf54]
pf_at 0x72f
l_loader_0000072f: test ebx,ebx
pf_at 0x732
l_loader_00000732: jnz near 0x676
pf_at 0x736
l_loader_00000736: mov eax,[0xf58]
pf_at 0x73a
l_loader_0000073a: cmp eax,0x300000
pf_at 0x740
l_loader_00000740: jnc short 0x748
pf_at 0x742
l_loader_00000742: mov eax,0x300000
pf_at 0x748
l_loader_00000748: cmp eax,0xfc000000
pf_at 0x74e
l_loader_0000074e: jnc short 0x77a
pf_at 0x750
l_loader_00000750: add eax,0x1fffff
pf_at 0x756
l_loader_00000756: and eax,0xffe00000
pf_at 0x75c
l_loader_0000075c: cmp eax,0xfc000000
pf_at 0x762
l_loader_00000762: jnc short 0x77a
pf_at 0x764
l_loader_00000764: mov [0xf5c],eax
pf_at 0x768
l_loader_00000768: mov [0xf60],eax
pf_at 0x76c
l_loader_0000076c: mov edx,0xfc000000
pf_at 0x772
l_loader_00000772: sub edx,eax
pf_at 0x775
l_loader_00000775: mov [0xf68],edx
pf_at 0x77a
l_loader_0000077a: mov dword [0xf54],0x0
pf_at 0x783
l_loader_00000783: mov ax,cs
pf_at 0x785
l_loader_00000785: mov es,ax
pf_at 0x787
l_loader_00000787: lea di,[0xfca]
pf_at 0x78b
l_loader_0000078b: xor ax,ax
pf_at 0x78d
l_loader_0000078d: mov cx,0xa
pf_at 0x790
l_loader_00000790: cld
pf_at 0x791
l_loader_00000791: rep stosw
pf_at 0x793
l_loader_00000793: mov eax,0xe820
pf_at 0x799
l_loader_00000799: mov edx,0x534d4150
pf_at 0x79f
l_loader_0000079f: mov ecx,0x14
pf_at 0x7a5
l_loader_000007a5: mov ebx,[0xf54]
pf_at 0x7aa
l_loader_000007aa: lea di,[0xfca]
pf_at 0x7ae
l_loader_000007ae: int 0x15
pf_at 0x7b0
l_loader_000007b0: push eax
pf_at 0x7b2
l_loader_000007b2: mov ax,cs
pf_at 0x7b4
l_loader_000007b4: mov ds,ax
pf_at 0x7b6
l_loader_000007b6: mov ax,0x600
pf_at 0x7b9
l_loader_000007b9: mov es,ax
pf_at 0x7bb
l_loader_000007bb: pop eax
pf_at 0x7bd
l_loader_000007bd: jc near 0x9b8
pf_at 0x7c1
l_loader_000007c1: cmp eax,0x534d4150
pf_at 0x7c7
l_loader_000007c7: jnz near 0x9b8
pf_at 0x7cb
l_loader_000007cb: mov [0xf54],ebx
pf_at 0x7d0
l_loader_000007d0: cmp dword [0xfda],byte +0x1
pf_at 0x7d6
l_loader_000007d6: jnz near 0x9ac
pf_at 0x7da
l_loader_000007da: cmp dword [0xfce],byte +0x0
pf_at 0x7e0
l_loader_000007e0: jnz short 0x855
pf_at 0x7e2
l_loader_000007e2: mov eax,[0xfca]
pf_at 0x7e6
l_loader_000007e6: mov ebp,eax
pf_at 0x7e9
l_loader_000007e9: cmp ebp,0x300000
pf_at 0x7f0
l_loader_000007f0: jnc short 0x7f8
pf_at 0x7f2
l_loader_000007f2: mov ebp,0x300000
pf_at 0x7f8
l_loader_000007f8: mov ecx,[0xfd2]
pf_at 0x7fd
l_loader_000007fd: mov edx,[0xfd6]
pf_at 0x802
l_loader_00000802: test edx,edx
pf_at 0x805
l_loader_00000805: jnz short 0x81b
pf_at 0x807
l_loader_00000807: mov esi,eax
pf_at 0x80a
l_loader_0000080a: add esi,ecx
pf_at 0x80d
l_loader_0000080d: jc short 0x81b
pf_at 0x80f
l_loader_0000080f: cmp esi,ebp
pf_at 0x812
l_loader_00000812: jna near 0x9ac
pf_at 0x816
l_loader_00000816: sub esi,ebp
pf_at 0x819
l_loader_00000819: jmp short 0x82c
pf_at 0x81b
l_loader_0000081b: mov esi,0xffffffff
pf_at 0x821
l_loader_00000821: sub esi,ebp
pf_at 0x824
l_loader_00000824: add esi,byte +0x1
pf_at 0x828
l_loader_00000828: jz near 0x9ac
pf_at 0x82c
l_loader_0000082c: mov eax,[es:0x8c]
pf_at 0x831
l_loader_00000831: cmp eax,byte +0x10
pf_at 0x835
l_loader_00000835: jnc near 0x9ac
pf_at 0x839
l_loader_00000839: shl eax,byte 0x3
pf_at 0x83d
l_loader_0000083d: mov di,ax
pf_at 0x83f
l_loader_0000083f: add di,0x90
pf_at 0x843
l_loader_00000843: mov [es:di],ebp
pf_at 0x847
l_loader_00000847: mov [es:di+0x4],esi
pf_at 0x84c
l_loader_0000084c: inc dword [es:0x8c]
pf_at 0x852
l_loader_00000852: jmp near 0x9ac
pf_at 0x855
l_loader_00000855: cmp dword [0xf68],byte +0x0
pf_at 0x85b
l_loader_0000085b: jz near 0x9ac
pf_at 0x85f
l_loader_0000085f: cmp dword [es:0x8c],byte +0x10
pf_at 0x866
l_loader_00000866: jnc near 0x9ac
pf_at 0x86a
l_loader_0000086a: cmp dword [es:0x124],byte +0x10
pf_at 0x871
l_loader_00000871: jnc near 0x9ac
pf_at 0x875
l_loader_00000875: mov eax,[0xfca]
pf_at 0x879
l_loader_00000879: mov edx,[0xfce]
pf_at 0x87e
l_loader_0000087e: add eax,0x1fffff
pf_at 0x884
l_loader_00000884: adc edx,byte +0x0
pf_at 0x888
l_loader_00000888: and eax,0xffe00000
pf_at 0x88e
l_loader_0000088e: mov [0xf6c],eax
pf_at 0x892
l_loader_00000892: mov [0xf70],edx
pf_at 0x897
l_loader_00000897: mov ecx,[0xfd2]
pf_at 0x89c
l_loader_0000089c: mov ebp,[0xfd6]
pf_at 0x8a1
l_loader_000008a1: add ecx,[0xfca]
pf_at 0x8a6
l_loader_000008a6: adc ebp,[0xfce]
pf_at 0x8ab
l_loader_000008ab: and ecx,0xffe00000
pf_at 0x8b2
l_loader_000008b2: cmp ebp,[0xf70]
pf_at 0x8b7
l_loader_000008b7: jc near 0x9ac
pf_at 0x8bb
l_loader_000008bb: ja short 0x8c6
pf_at 0x8bd
l_loader_000008bd: cmp ecx,[0xf6c]
pf_at 0x8c2
l_loader_000008c2: jna near 0x9ac
pf_at 0x8c6
l_loader_000008c6: sub ecx,[0xf6c]
pf_at 0x8cb
l_loader_000008cb: sbb ebp,[0xf70]
pf_at 0x8d0
l_loader_000008d0: mov [0xf74],ecx
pf_at 0x8d5
l_loader_000008d5: mov [0xf78],ebp
pf_at 0x8da
l_loader_000008da: mov eax,[0xf74]
pf_at 0x8de
l_loader_000008de: mov edx,[0xf78]
pf_at 0x8e3
l_loader_000008e3: or eax,edx
pf_at 0x8e6
l_loader_000008e6: jz near 0x9ac
pf_at 0x8ea
l_loader_000008ea: mov ecx,[0xf68]
pf_at 0x8ef
l_loader_000008ef: test ecx,ecx
pf_at 0x8f2
l_loader_000008f2: jz near 0x9ac
pf_at 0x8f6
l_loader_000008f6: cmp dword [es:0x8c],byte +0x10
pf_at 0x8fd
l_loader_000008fd: jnc near 0x9ac
pf_at 0x901
l_loader_00000901: cmp dword [es:0x124],byte +0x10
pf_at 0x908
l_loader_00000908: jnc near 0x9ac
pf_at 0x90c
l_loader_0000090c: mov esi,ecx
pf_at 0x90f
l_loader_0000090f: cmp dword [0xf78],byte +0x0
pf_at 0x915
l_loader_00000915: jnz short 0x923
pf_at 0x917
l_loader_00000917: mov eax,[0xf74]
pf_at 0x91b
l_loader_0000091b: cmp eax,ecx
pf_at 0x91e
l_loader_0000091e: jnc short 0x923
pf_at 0x920
l_loader_00000920: mov esi,eax
pf_at 0x923
l_loader_00000923: test esi,esi
pf_at 0x926
l_loader_00000926: jz near 0x9ac
pf_at 0x92a
l_loader_0000092a: mov eax,[es:0x8c]
pf_at 0x92f
l_loader_0000092f: shl eax,byte 0x3
pf_at 0x933
l_loader_00000933: mov di,ax
pf_at 0x935
l_loader_00000935: add di,0x90
pf_at 0x939
l_loader_00000939: mov ebx,[0xf60]
pf_at 0x93e
l_loader_0000093e: mov [es:di],ebx
pf_at 0x942
l_loader_00000942: mov [es:di+0x4],esi
pf_at 0x947
l_loader_00000947: inc dword [es:0x8c]
pf_at 0x94d
l_loader_0000094d: mov eax,[es:0x124]
pf_at 0x952
l_loader_00000952: shl eax,byte 0x4
pf_at 0x956
l_loader_00000956: mov di,ax
pf_at 0x958
l_loader_00000958: add di,0x128
pf_at 0x95c
l_loader_0000095c: mov ebx,[0xf60]
pf_at 0x961
l_loader_00000961: mov [es:di],ebx
pf_at 0x965
l_loader_00000965: mov [es:di+0x4],esi
pf_at 0x96a
l_loader_0000096a: mov ebx,[0xf6c]
pf_at 0x96f
l_loader_0000096f: mov [es:di+0x8],ebx
pf_at 0x974
l_loader_00000974: mov ebx,[0xf70]
pf_at 0x979
l_loader_00000979: mov [es:di+0xc],ebx
pf_at 0x97e
l_loader_0000097e: inc dword [es:0x124]
pf_at 0x984
l_loader_00000984: add [0xf60],esi
pf_at 0x989
l_loader_00000989: sub [0xf68],esi
pf_at 0x98e
l_loader_0000098e: add [0xf64],esi
pf_at 0x993
l_loader_00000993: add [0xf6c],esi
pf_at 0x998
l_loader_00000998: adc dword [0xf70],byte +0x0
pf_at 0x99e
l_loader_0000099e: sub [0xf74],esi
pf_at 0x9a3
l_loader_000009a3: sbb dword [0xf78],byte +0x0
pf_at 0x9a9
l_loader_000009a9: jmp near 0x8da
pf_at 0x9ac
l_loader_000009ac: mov ebx,[0xf54]
pf_at 0x9b1
l_loader_000009b1: test ebx,ebx
pf_at 0x9b4
l_loader_000009b4: jnz near 0x783
pf_at 0x9b8
l_loader_000009b8: mov eax,[0xf64]
pf_at 0x9bc
l_loader_000009bc: mov [es:0x22c],eax
pf_at 0x9c1
l_loader_000009c1: test eax,eax
pf_at 0x9c4
l_loader_000009c4: jz short 0x9e3
pf_at 0x9c6
l_loader_000009c6: mov eax,[0xf5c]
pf_at 0x9ca
l_loader_000009ca: mov [es:0x228],eax
pf_at 0x9cf
l_loader_000009cf: mov dword [es:0x230],0xfc000000
pf_at 0x9d9
l_loader_000009d9: mov dword [es:0x234],0x4000000
pf_at 0x9e3
l_loader_000009e3: cmp dword [es:0x8c],byte +0x0
pf_at 0x9ea
l_loader_000009ea: jnz short 0xa17
pf_at 0x9ec
l_loader_000009ec: mov eax,[0xf4c]
pf_at 0x9f0
l_loader_000009f0: cmp eax,0x300000
pf_at 0x9f6
l_loader_000009f6: jna short 0xa17
pf_at 0x9f8
l_loader_000009f8: mov dword [es:0x90],0x300000
pf_at 0xa02
l_loader_00000a02: sub eax,0x300000
pf_at 0xa08
l_loader_00000a08: mov [es:0x94],eax
pf_at 0xa0d
l_loader_00000a0d: mov dword [es:0x8c],0x1
pf_at 0xa17
l_loader_00000a17: pop bp
pf_at 0xa18
l_loader_00000a18: pop di
pf_at 0xa19
l_loader_00000a19: pop si
pf_at 0xa1a
l_loader_00000a1a: pop es
pf_at 0xa1b
l_loader_00000a1b: pop ds
pf_at 0xa1c
l_loader_00000a1c: pop dx
pf_at 0xa1d
l_loader_00000a1d: pop cx
pf_at 0xa1e
l_loader_00000a1e: pop bx
pf_at 0xa1f
l_loader_00000a1f: pop ax
pf_at 0xa20
l_loader_00000a20: ret
pf_at 0xa21
l_loader_00000a21: push ax
pf_at 0xa22
l_loader_00000a22: push cx
pf_at 0xa23
l_loader_00000a23: push ds
pf_at 0xa24
l_loader_00000a24: push es
pf_at 0xa25
l_loader_00000a25: push di
pf_at 0xa26
l_loader_00000a26: mov ax,0x600
pf_at 0xa29
l_loader_00000a29: mov es,ax
pf_at 0xa2b
l_loader_00000a2b: xor di,di
pf_at 0xa2d
l_loader_00000a2d: xor ax,ax
pf_at 0xa2f
l_loader_00000a2f: mov cx,0x11c
pf_at 0xa32
l_loader_00000a32: cld
pf_at 0xa33
l_loader_00000a33: rep stosw
pf_at 0xa35
l_loader_00000a35: mov ax,cs
pf_at 0xa37
l_loader_00000a37: mov ds,ax
pf_at 0xa39
l_loader_00000a39: xor eax,eax
pf_at 0xa3c
l_loader_00000a3c: mov al,[0xf10]
pf_at 0xa3f
l_loader_00000a3f: mov [es:0x68],eax
pf_at 0xa44
l_loader_00000a44: mov eax,[0xf28]
pf_at 0xa48
l_loader_00000a48: mov [es:0x70],eax
pf_at 0xa4d
l_loader_00000a4d: xor eax,eax
pf_at 0xa50
l_loader_00000a50: mov ax,[0xf1b]
pf_at 0xa53
l_loader_00000a53: mov [es:0x74],eax
pf_at 0xa58
l_loader_00000a58: mov eax,[0xf2c]
pf_at 0xa5c
l_loader_00000a5c: mov [es:0x78],eax
pf_at 0xa61
l_loader_00000a61: xor eax,eax
pf_at 0xa64
l_loader_00000a64: mov ax,[0xf19]
pf_at 0xa67
l_loader_00000a67: mov [es:0x7c],eax
pf_at 0xa6c
l_loader_00000a6c: xor eax,eax
pf_at 0xa6f
l_loader_00000a6f: mov ax,[0xf1d]
pf_at 0xa72
l_loader_00000a72: mov [es:0x80],eax
pf_at 0xa77
l_loader_00000a77: mov eax,[0xf48]
pf_at 0xa7b
l_loader_00000a7b: mov [es:0x84],eax
pf_at 0xa80
l_loader_00000a80: mov eax,[0xf30]
pf_at 0xa84
l_loader_00000a84: mov [es:0x118],eax
pf_at 0xa89
l_loader_00000a89: mov eax,[0xf34]
pf_at 0xa8d
l_loader_00000a8d: mov [es:0x11c],eax
pf_at 0xa92
l_loader_00000a92: mov eax,[0xf38]
pf_at 0xa96
l_loader_00000a96: mov [es:0x120],eax
pf_at 0xa9b
l_loader_00000a9b: mov eax,[0xf4c]
pf_at 0xa9f
l_loader_00000a9f: mov [es:0x88],eax
pf_at 0xaa4
l_loader_00000aa4: call 0x5de
pf_at 0xaa7
l_loader_00000aa7: pop di
pf_at 0xaa8
l_loader_00000aa8: pop es
pf_at 0xaa9
l_loader_00000aa9: pop ds
pf_at 0xaaa
l_loader_00000aaa: pop cx
pf_at 0xaab
l_loader_00000aab: pop ax
pf_at 0xaac
l_loader_00000aac: ret
pf_at 0xaad
l_loader_00000aad: mov ax,0x3
pf_at 0xab0
l_loader_00000ab0: int 0x10
pf_at 0xab2
l_loader_00000ab2: ret
pf_at 0xab3
l_loader_00000ab3: in al,0x92
pf_at 0xab5
l_loader_00000ab5: or al,0x2
pf_at 0xab7
l_loader_00000ab7: out 0x92,al
pf_at 0xab9
l_loader_00000ab9: ret
pf_at 0xaba
l_loader_00000aba: mov esi,[0xf7c]
pf_at 0xabf
l_loader_00000abf: cli
pf_at 0xac0
l_loader_00000ac0: xor eax,eax
pf_at 0xac3
l_loader_00000ac3: mov ax,cs
pf_at 0xac5
l_loader_00000ac5: mov ds,ax
pf_at 0xac7
l_loader_00000ac7: shl eax,byte 0x4
pf_at 0xacb
l_loader_00000acb: lea bx,[0xe40]
pf_at 0xacf
l_loader_00000acf: movzx edx,bx
pf_at 0xad3
l_loader_00000ad3: add eax,edx
pf_at 0xad6
l_loader_00000ad6: mov [0xe5a],eax
pf_at 0xada
l_loader_00000ada: xor eax,eax
pf_at 0xadd
l_loader_00000add: mov ax,cs
pf_at 0xadf
l_loader_00000adf: shl eax,byte 0x4
pf_at 0xae3
l_loader_00000ae3: lea bx,[0xcd1]
pf_at 0xae7
l_loader_00000ae7: movzx edx,bx
pf_at 0xaeb
l_loader_00000aeb: add eax,edx
pf_at 0xaee
l_loader_00000aee: mov [0xb03],eax
pf_at 0xaf2
l_loader_00000af2: lgdt [0xe58]
pf_at 0xaf7
l_loader_00000af7: mov eax,cr0
pf_at 0xafa
l_loader_00000afa: or eax,byte +0x1
pf_at 0xafe
l_loader_00000afe: mov cr0,eax
pf_at 0xb01
l_loader_00000b01: jmp dword 0x8:0x0
pf_at 0xb09
l_loader_00000b09: ret
pf_at 0xb0a
l_loader_00000b0a: mov dword [0xfa0],0x0
pf_at 0xb13
l_loader_00000b13: cmp dword [0xf98],0x1ee
pf_at 0xb1c
l_loader_00000b1c: jc short 0xb86
pf_at 0xb1e
l_loader_00000b1e: push ds
pf_at 0xb1f
l_loader_00000b1f: push es
pf_at 0xb20
l_loader_00000b20: push si
pf_at 0xb21
l_loader_00000b21: push di
pf_at 0xb22
l_loader_00000b22: push cx
pf_at 0xb23
l_loader_00000b23: mov ax,0x5000
pf_at 0xb26
l_loader_00000b26: mov ds,ax
pf_at 0xb28
l_loader_00000b28: cmp word [0x0],0x5357
pf_at 0xb2e
l_loader_00000b2e: jnz short 0xb81
pf_at 0xb30
l_loader_00000b30: cmp word [0x2],0x3154
pf_at 0xb36
l_loader_00000b36: jnz short 0xb81
pf_at 0xb38
l_loader_00000b38: cmp word [0x4],byte +0x1
pf_at 0xb3d
l_loader_00000b3d: jnz short 0xb81
pf_at 0xb3f
l_loader_00000b3f: cmp word [0x6],byte +0x0
pf_at 0xb44
l_loader_00000b44: jnz short 0xb81
pf_at 0xb46
l_loader_00000b46: mov ax,cs
pf_at 0xb48
l_loader_00000b48: mov es,ax
pf_at 0xb4a
l_loader_00000b4a: lea di,[0xfde]
pf_at 0xb4e
l_loader_00000b4e: mov si,0x1ec
pf_at 0xb51
l_loader_00000b51: mov cx,0xef
pf_at 0xb54
l_loader_00000b54: cld
pf_at 0xb55
l_loader_00000b55: lodsb
pf_at 0xb56
l_loader_00000b56: stosb
pf_at 0xb57
l_loader_00000b57: test al,al
pf_at 0xb59
l_loader_00000b59: jz short 0xb61
pf_at 0xb5b
l_loader_00000b5b: loop 0xb55
pf_at 0xb5d
l_loader_00000b5d: mov byte [es:di],0x0
pf_at 0xb61
l_loader_00000b61: pop cx
pf_at 0xb62
l_loader_00000b62: pop di
pf_at 0xb63
l_loader_00000b63: pop si
pf_at 0xb64
l_loader_00000b64: pop es
pf_at 0xb65
l_loader_00000b65: pop ds
pf_at 0xb66
l_loader_00000b66: mov byte [0xf13],0x0
pf_at 0xb6b
l_loader_00000b6b: mov ax,0x6000
pf_at 0xb6e
l_loader_00000b6e: lea si,[0xfde]
pf_at 0xb72
l_loader_00000b72: call 0x285
pf_at 0xb75
l_loader_00000b75: jc short 0xb86
pf_at 0xb77
l_loader_00000b77: mov eax,[0xf88]
pf_at 0xb7b
l_loader_00000b7b: mov [0xfa0],eax
pf_at 0xb7f
l_loader_00000b7f: clc
pf_at 0xb80
l_loader_00000b80: ret
pf_at 0xb81
l_loader_00000b81: pop cx
pf_at 0xb82
l_loader_00000b82: pop di
pf_at 0xb83
l_loader_00000b83: pop si
pf_at 0xb84
l_loader_00000b84: pop es
pf_at 0xb85
l_loader_00000b85: pop ds
pf_at 0xb86
l_loader_00000b86: stc
pf_at 0xb87
l_loader_00000b87: ret
pf_at 0xb88
l_loader_00000b88: push ax
pf_at 0xb89
l_loader_00000b89: mov al,[si]
pf_at 0xb8b
l_loader_00000b8b: cmp al,0x2f
pf_at 0xb8d
l_loader_00000b8d: jnz short 0xb92
pf_at 0xb8f
l_loader_00000b8f: inc si
pf_at 0xb90
l_loader_00000b90: jmp short 0xb89
pf_at 0xb92
l_loader_00000b92: mov al,[si]
pf_at 0xb94
l_loader_00000b94: mov ah,[es:di]
pf_at 0xb97
l_loader_00000b97: cmp al,ah
pf_at 0xb99
l_loader_00000b99: jnz short 0xba6
pf_at 0xb9b
l_loader_00000b9b: cmp al,0x0
pf_at 0xb9d
l_loader_00000b9d: jz short 0xba3
pf_at 0xb9f
l_loader_00000b9f: inc si
pf_at 0xba0
l_loader_00000ba0: inc di
pf_at 0xba1
l_loader_00000ba1: jmp short 0xb92
pf_at 0xba3
l_loader_00000ba3: clc
pf_at 0xba4
l_loader_00000ba4: pop ax
pf_at 0xba5
l_loader_00000ba5: ret
pf_at 0xba6
l_loader_00000ba6: stc
pf_at 0xba7
l_loader_00000ba7: pop ax
pf_at 0xba8
l_loader_00000ba8: ret
pf_at 0xba9
l_loader_00000ba9: push ax
pf_at 0xbaa
l_loader_00000baa: mov ax,cs
pf_at 0xbac
l_loader_00000bac: mov ds,ax
pf_at 0xbae
l_loader_00000bae: pop ax
pf_at 0xbaf
l_loader_00000baf: mov byte [0xf13],0x0
pf_at 0xbb4
l_loader_00000bb4: call 0xc36
pf_at 0xbb7
l_loader_00000bb7: mov ah,0x42
pf_at 0xbb9
l_loader_00000bb9: int 0x13
pf_at 0xbbb
l_loader_00000bbb: call 0xc72
pf_at 0xbbe
l_loader_00000bbe: jnc short 0xbe6
pf_at 0xbc0
l_loader_00000bc0: mov [0xf13],ah
pf_at 0xbc4
l_loader_00000bc4: xor ah,ah
pf_at 0xbc6
l_loader_00000bc6: mov dl,[0xf10]
pf_at 0xbca
l_loader_00000bca: int 0x13
pf_at 0xbcc
l_loader_00000bcc: call 0xc72
pf_at 0xbcf
l_loader_00000bcf: call 0xc36
pf_at 0xbd2
l_loader_00000bd2: mov ah,0x42
pf_at 0xbd4
l_loader_00000bd4: int 0x13
pf_at 0xbd6
l_loader_00000bd6: call 0xc72
pf_at 0xbd9
l_loader_00000bd9: jnc short 0xbe6
pf_at 0xbdb
l_loader_00000bdb: mov [0xf13],ah
pf_at 0xbdf
l_loader_00000bdf: mov byte [0xf12],0x44
pf_at 0xbe4
l_loader_00000be4: stc
pf_at 0xbe5
l_loader_00000be5: ret
pf_at 0xbe6
l_loader_00000be6: clc
pf_at 0xbe7
l_loader_00000be7: ret
pf_at 0xbe8
l_loader_00000be8: cmp word [0xf1f],byte +0x0
pf_at 0xbed
l_loader_00000bed: jz short 0xc34
pf_at 0xbef
l_loader_00000bef: mov cx,0x1
pf_at 0xbf2
l_loader_00000bf2: mov ax,0x1000
pf_at 0xbf5
l_loader_00000bf5: mov es,ax
pf_at 0xbf7
l_loader_00000bf7: xor bx,bx
pf_at 0xbf9
l_loader_00000bf9: mov eax,[0xfa8]
pf_at 0xbfd
l_loader_00000bfd: call 0xba9
pf_at 0xc00
l_loader_00000c00: jc short 0xc32
pf_at 0xc02
l_loader_00000c02: push ds
pf_at 0xc03
l_loader_00000c03: push es
pf_at 0xc04
l_loader_00000c04: push si
pf_at 0xc05
l_loader_00000c05: push di
pf_at 0xc06
l_loader_00000c06: push cx
pf_at 0xc07
l_loader_00000c07: mov ax,[0xf21]
pf_at 0xc0a
l_loader_00000c0a: push ax
pf_at 0xc0b
l_loader_00000c0b: mov ax,0x1000
pf_at 0xc0e
l_loader_00000c0e: mov ds,ax
pf_at 0xc10
l_loader_00000c10: xor si,si
pf_at 0xc12
l_loader_00000c12: pop ax
pf_at 0xc13
l_loader_00000c13: mov es,ax
pf_at 0xc15
l_loader_00000c15: xor di,di
pf_at 0xc17
l_loader_00000c17: mov cx,0x100
pf_at 0xc1a
l_loader_00000c1a: cld
pf_at 0xc1b
l_loader_00000c1b: rep movsw
pf_at 0xc1d
l_loader_00000c1d: pop cx
pf_at 0xc1e
l_loader_00000c1e: pop di
pf_at 0xc1f
l_loader_00000c1f: pop si
pf_at 0xc20
l_loader_00000c20: pop es
pf_at 0xc21
l_loader_00000c21: pop ds
pf_at 0xc22
l_loader_00000c22: add word [0xf21],byte +0x20
pf_at 0xc27
l_loader_00000c27: dec word [0xf1f]
pf_at 0xc2b
l_loader_00000c2b: inc dword [0xfa8]
pf_at 0xc30
l_loader_00000c30: jmp short 0xbe8
pf_at 0xc32
l_loader_00000c32: stc
pf_at 0xc33
l_loader_00000c33: ret
pf_at 0xc34
l_loader_00000c34: clc
pf_at 0xc35
l_loader_00000c35: ret
pf_at 0xc36
l_loader_00000c36: mov [0xf23],es
pf_at 0xc3a
l_loader_00000c3a: mov dl,[0xf10]
pf_at 0xc3e
l_loader_00000c3e: mov di,0x1000
pf_at 0xc41
l_loader_00000c41: mov es,di
pf_at 0xc43
l_loader_00000c43: mov word [es:0x400],0x10
pf_at 0xc4a
l_loader_00000c4a: mov [es:0x402],cx
pf_at 0xc4f
l_loader_00000c4f: mov [es:0x404],bx
pf_at 0xc54
l_loader_00000c54: mov bp,[0xf23]
pf_at 0xc58
l_loader_00000c58: mov [es:0x406],bp
pf_at 0xc5d
l_loader_00000c5d: mov [es:0x408],eax
pf_at 0xc62
l_loader_00000c62: mov dword [es:0x40c],0x0
pf_at 0xc6c
l_loader_00000c6c: mov ds,di
pf_at 0xc6e
l_loader_00000c6e: mov si,0x400
pf_at 0xc71
l_loader_00000c71: ret
pf_at 0xc72
l_loader_00000c72: push ax
pf_at 0xc73
l_loader_00000c73: mov ax,cs
pf_at 0xc75
l_loader_00000c75: mov ds,ax
pf_at 0xc77
l_loader_00000c77: mov ax,[0xf23]
pf_at 0xc7a
l_loader_00000c7a: mov es,ax
pf_at 0xc7c
l_loader_00000c7c: pop ax
pf_at 0xc7d
l_loader_00000c7d: ret
pf_at 0xc7e
l_loader_00000c7e: push ax
pf_at 0xc7f
l_loader_00000c7f: push bx
pf_at 0xc80
l_loader_00000c80: push cx
pf_at 0xc81
l_loader_00000c81: push dx
pf_at 0xc82
l_loader_00000c82: push si
pf_at 0xc83
l_loader_00000c83: push di
pf_at 0xc84
l_loader_00000c84: push bp
pf_at 0xc85
l_loader_00000c85: push ds
pf_at 0xc86
l_loader_00000c86: push es
pf_at 0xc87
l_loader_00000c87: mov ah,0xe
pf_at 0xc89
l_loader_00000c89: mov bx,0x7
pf_at 0xc8c
l_loader_00000c8c: int 0x10
pf_at 0xc8e
l_loader_00000c8e: pop es
pf_at 0xc8f
l_loader_00000c8f: pop ds
pf_at 0xc90
l_loader_00000c90: pop bp
pf_at 0xc91
l_loader_00000c91: pop di
pf_at 0xc92
l_loader_00000c92: pop si
pf_at 0xc93
l_loader_00000c93: pop dx
pf_at 0xc94
l_loader_00000c94: pop cx
pf_at 0xc95
l_loader_00000c95: pop bx
pf_at 0xc96
l_loader_00000c96: pop ax
pf_at 0xc97
l_loader_00000c97: ret
pf_at 0xc98
l_loader_00000c98: cld
pf_at 0xc99
l_loader_00000c99: lodsb
pf_at 0xc9a
l_loader_00000c9a: test al,al
pf_at 0xc9c
l_loader_00000c9c: jz short 0xca3
pf_at 0xc9e
l_loader_00000c9e: call 0xc7e
pf_at 0xca1
l_loader_00000ca1: jmp short 0xc99
pf_at 0xca3
l_loader_00000ca3: ret
pf_at 0xca4
l_loader_00000ca4: and al,0xf
pf_at 0xca6
l_loader_00000ca6: cmp al,0x9
pf_at 0xca8
l_loader_00000ca8: jna short 0xcae
pf_at 0xcaa
l_loader_00000caa: add al,0x37
pf_at 0xcac
l_loader_00000cac: jmp short 0xcb0
pf_at 0xcae
l_loader_00000cae: add al,0x30
pf_at 0xcb0
l_loader_00000cb0: call 0xc7e
pf_at 0xcb3
l_loader_00000cb3: ret
pf_at 0xcb4
l_loader_00000cb4: push ax
pf_at 0xcb5
l_loader_00000cb5: push bx
pf_at 0xcb6
l_loader_00000cb6: mov bl,al
pf_at 0xcb8
l_loader_00000cb8: shr al,byte 0x4
pf_at 0xcbb
l_loader_00000cbb: call 0xca4
pf_at 0xcbe
l_loader_00000cbe: mov al,bl
pf_at 0xcc0
l_loader_00000cc0: call 0xca4
pf_at 0xcc3
l_loader_00000cc3: pop bx
pf_at 0xcc4
l_loader_00000cc4: pop ax
pf_at 0xcc5
l_loader_00000cc5: ret
pf_at 0xcc6
l_loader_00000cc6: push ax
pf_at 0xcc7
l_loader_00000cc7: xchg ah,al
pf_at 0xcc9
l_loader_00000cc9: call 0xcb4
pf_at 0xccc
l_loader_00000ccc: pop ax
pf_at 0xccd
l_loader_00000ccd: call 0xcb4
pf_at 0xcd0
l_loader_00000cd0: ret

section part1 start=0xcd1 vstart=0x8cd1 align=1
bits 32
pf_at 0x0
l_loader_00008cd1: mov ax,0x10
pf_at 0x4
l_loader_00008cd5: o16 mov ds,ax
pf_at 0x7
l_loader_00008cd8: o16 mov es,ax
pf_at 0xa
l_loader_00008cdb: o16 mov fs,ax
pf_at 0xd
l_loader_00008cde: o16 mov gs,ax
pf_at 0x10
l_loader_00008ce1: o16 mov ss,ax
pf_at 0x13
l_loader_00008ce4: mov esp,0x17f000
pf_at 0x18
l_loader_00008ce9: cld
pf_at 0x19
l_loader_00008cea: call 0x8cf1
pf_at 0x1e
l_loader_00008cef: jmp esi
pf_at 0x20
l_loader_00008cf1: pusha
pf_at 0x21
l_loader_00008cf2: mov ecx,[dword 0x6124]
pf_at 0x27
l_loader_00008cf8: test ecx,ecx
pf_at 0x29
l_loader_00008cfa: jz near 0x8e3a
pf_at 0x2f
l_loader_00008d00: pushf
pf_at 0x30
l_loader_00008d01: pop eax
pf_at 0x31
l_loader_00008d02: mov edx,eax
pf_at 0x33
l_loader_00008d04: xor eax,0x200000
pf_at 0x38
l_loader_00008d09: push eax
pf_at 0x39
l_loader_00008d0a: popf
pf_at 0x3a
l_loader_00008d0b: pushf
pf_at 0x3b
l_loader_00008d0c: pop eax
pf_at 0x3c
l_loader_00008d0d: push edx
pf_at 0x3d
l_loader_00008d0e: popf
pf_at 0x3e
l_loader_00008d0f: xor eax,edx
pf_at 0x40
l_loader_00008d11: test eax,0x200000
pf_at 0x45
l_loader_00008d16: jz near 0x8df8
pf_at 0x4b
l_loader_00008d1c: mov eax,0x1
pf_at 0x50
l_loader_00008d21: cpuid
pf_at 0x52
l_loader_00008d23: test edx,0x40
pf_at 0x58
l_loader_00008d29: jz near 0x8df8
pf_at 0x5e
l_loader_00008d2f: mov edi,0x2f8000
pf_at 0x63
l_loader_00008d34: xor eax,eax
pf_at 0x65
l_loader_00008d36: mov ecx,0x1400
pf_at 0x6a
l_loader_00008d3b: rep stosd
pf_at 0x6c
l_loader_00008d3d: mov dword [dword 0x2f8000],0x2f9001
pf_at 0x76
l_loader_00008d47: mov dword [dword 0x2f8008],0x2fa001
pf_at 0x80
l_loader_00008d51: mov dword [dword 0x2f8010],0x2fb001
pf_at 0x8a
l_loader_00008d5b: mov dword [dword 0x2f8018],0x2fc001
pf_at 0x94
l_loader_00008d65: mov edi,0x2f9000
pf_at 0x99
l_loader_00008d6a: mov eax,0x83
pf_at 0x9e
l_loader_00008d6f: mov ecx,0x800
pf_at 0xa3
l_loader_00008d74: mov [edi],eax
pf_at 0xa5
l_loader_00008d76: mov dword [edi+0x4],0x0
pf_at 0xac
l_loader_00008d7d: add eax,0x200000
pf_at 0xb1
l_loader_00008d82: add edi,byte +0x8
pf_at 0xb4
l_loader_00008d85: loop 0x8d74
pf_at 0xb6
l_loader_00008d87: mov ecx,[dword 0x6124]
pf_at 0xbc
l_loader_00008d8d: mov esi,0x6128
pf_at 0xc1
l_loader_00008d92: test ecx,ecx
pf_at 0xc3
l_loader_00008d94: jz short 0x8dda
pf_at 0xc5
l_loader_00008d96: mov eax,[esi]
pf_at 0xc7
l_loader_00008d98: mov ebx,[esi+0x4]
pf_at 0xca
l_loader_00008d9b: mov edx,[esi+0x8]
pf_at 0xcd
l_loader_00008d9e: mov ebp,[esi+0xc]
pf_at 0xd0
l_loader_00008da1: test ebx,ebx
pf_at 0xd2
l_loader_00008da3: jz short 0x8dd4
pf_at 0xd4
l_loader_00008da5: mov edi,eax
pf_at 0xd6
l_loader_00008da7: shr edi,byte 0x15
pf_at 0xd9
l_loader_00008daa: lea edi,[edi*8+0x2f9000]
pf_at 0xe0
l_loader_00008db1: shr ebx,byte 0x15
pf_at 0xe3
l_loader_00008db4: mov eax,edx
pf_at 0xe5
l_loader_00008db6: and eax,0xffe00000
pf_at 0xea
l_loader_00008dbb: or eax,0x83
pf_at 0xef
l_loader_00008dc0: mov [edi],eax
pf_at 0xf1
l_loader_00008dc2: mov [edi+0x4],ebp
pf_at 0xf4
l_loader_00008dc5: add edx,0x200000
pf_at 0xfa
l_loader_00008dcb: adc ebp,byte +0x0
pf_at 0xfd
l_loader_00008dce: add edi,byte +0x8
pf_at 0x100
l_loader_00008dd1: dec ebx
pf_at 0x101
l_loader_00008dd2: jnz short 0x8db4
pf_at 0x103
l_loader_00008dd4: add esi,byte +0x10
pf_at 0x106
l_loader_00008dd7: dec ecx
pf_at 0x107
l_loader_00008dd8: jmp short 0x8d92
pf_at 0x109
l_loader_00008dda: mov eax,cr4
pf_at 0x10c
l_loader_00008ddd: or eax,byte +0x20
pf_at 0x10f
l_loader_00008de0: mov cr4,eax
pf_at 0x112
l_loader_00008de3: mov eax,0x2f8000
pf_at 0x117
l_loader_00008de8: mov cr3,eax
pf_at 0x11a
l_loader_00008deb: mov eax,cr0
pf_at 0x11d
l_loader_00008dee: or eax,0x80000000
pf_at 0x122
l_loader_00008df3: mov cr0,eax
pf_at 0x125
l_loader_00008df6: jmp short 0x8e3a
pf_at 0x127
l_loader_00008df8: mov ecx,[dword 0x6124]
pf_at 0x12d
l_loader_00008dfe: test ecx,ecx
pf_at 0x12f
l_loader_00008e00: jz short 0x8e3a
pf_at 0x131
l_loader_00008e02: sub [dword 0x608c],ecx
pf_at 0x137
l_loader_00008e08: mov dword [dword 0x6124],0x0
pf_at 0x141
l_loader_00008e12: mov dword [dword 0x6228],0x0
pf_at 0x14b
l_loader_00008e1c: mov dword [dword 0x622c],0x0
pf_at 0x155
l_loader_00008e26: mov dword [dword 0x6230],0x0
pf_at 0x15f
l_loader_00008e30: mov dword [dword 0x6234],0x0
pf_at 0x169
l_loader_00008e3a: popa
pf_at 0x16a
l_loader_00008e3b: ret

section part2 start=0xe3c vstart=0x0 align=1
    db 0x8d, 0xb4
    times 10 db 0
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
    db "baremetal/demo_image.raw"
    times 1 db 0
    db "baremetal/demo_audio.raw"
    times 1 db 0
    db "/startup.ws"
    times 1 db 0
    db "baremetal/startup_manifest.raw"
    times 1 db 0
    db "baremetal/startup_bundle.raw"
    times 24 db 0
    db 0x90
    times 8 db 0
    db 0x41
    times 30 db 0
    db 0x04
    times 28848 db 0
