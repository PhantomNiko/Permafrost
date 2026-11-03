; Permafrost 0.3 — recovered assembly, Pooka's Free Software License.
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
l_loader_00000011: mov [0xae0],dl
pf_at 0x15
l_loader_00000015: mov byte [0xae1],0x3f
pf_at 0x1a
l_loader_0000001a: mov byte [0xae2],0x3f
pf_at 0x1f
l_loader_0000001f: mov byte [0xae3],0x0
pf_at 0x24
l_loader_00000024: lea si,[0xa47]
pf_at 0x28
l_loader_00000028: call 0x9b6
pf_at 0x2b
l_loader_0000002b: call 0x162
pf_at 0x2e
l_loader_0000002e: mov byte [0xae1],0x53
pf_at 0x33
l_loader_00000033: mov byte [0xae2],0x44
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
l_loader_00000044: mov byte [0xae1],0x48
pf_at 0x49
l_loader_00000049: mov byte [0xae2],0x46
pf_at 0x4e
l_loader_0000004e: mov byte [0xae3],0x0
pf_at 0x53
l_loader_00000053: mov ax,0x2000
pf_at 0x56
l_loader_00000056: lea si,[0xa4c]
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
l_loader_00000066: mov byte [0xae1],0x50
pf_at 0x6b
l_loader_0000006b: mov byte [0xae2],0x42
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
l_loader_00000082: call 0x73f
pf_at 0x85
l_loader_00000085: mov byte [0xae1],0x54
pf_at 0x8a
l_loader_0000008a: mov byte [0xae2],0x4d
pf_at 0x8f
l_loader_0000008f: call 0x7cb
pf_at 0x92
l_loader_00000092: call 0x7d1
pf_at 0x95
l_loader_00000095: call 0x7d8
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
l_loader_000000a1: lea si,[0xa2e]
pf_at 0xa5
l_loader_000000a5: call 0x9b6
pf_at 0xa8
l_loader_000000a8: mov al,0x20
pf_at 0xaa
l_loader_000000aa: call 0x99c
pf_at 0xad
l_loader_000000ad: mov al,0x5b
pf_at 0xaf
l_loader_000000af: call 0x99c
pf_at 0xb2
l_loader_000000b2: mov al,[0xae1]
pf_at 0xb5
l_loader_000000b5: call 0x99c
pf_at 0xb8
l_loader_000000b8: mov al,0x3a
pf_at 0xba
l_loader_000000ba: call 0x99c
pf_at 0xbd
l_loader_000000bd: mov al,[0xae2]
pf_at 0xc0
l_loader_000000c0: call 0x99c
pf_at 0xc3
l_loader_000000c3: mov al,0x20
pf_at 0xc5
l_loader_000000c5: call 0x99c
pf_at 0xc8
l_loader_000000c8: mov al,[0xae3]
pf_at 0xcb
l_loader_000000cb: call 0x9d2
pf_at 0xce
l_loader_000000ce: cmp byte [0xae2],0x44
pf_at 0xd3
l_loader_000000d3: jnz short 0x101
pf_at 0xd5
l_loader_000000d5: mov al,0x20
pf_at 0xd7
l_loader_000000d7: call 0x99c
pf_at 0xda
l_loader_000000da: mov al,0x4c
pf_at 0xdc
l_loader_000000dc: call 0x99c
pf_at 0xdf
l_loader_000000df: push ax
pf_at 0xe0
l_loader_000000e0: mov ax,cs
pf_at 0xe2
l_loader_000000e2: mov ds,ax
pf_at 0xe4
l_loader_000000e4: pop ax
pf_at 0xe5
l_loader_000000e5: mov ax,[0xb54]
pf_at 0xe8
l_loader_000000e8: call 0x9e4
pf_at 0xeb
l_loader_000000eb: mov al,0x20
pf_at 0xed
l_loader_000000ed: call 0x99c
pf_at 0xf0
l_loader_000000f0: mov al,0x53
pf_at 0xf2
l_loader_000000f2: call 0x99c
pf_at 0xf5
l_loader_000000f5: push ax
pf_at 0xf6
l_loader_000000f6: mov ax,cs
pf_at 0xf8
l_loader_000000f8: mov ds,ax
pf_at 0xfa
l_loader_000000fa: pop ax
pf_at 0xfb
l_loader_000000fb: mov ax,[0xb50]
pf_at 0xfe
l_loader_000000fe: call 0x9e4
pf_at 0x101
l_loader_00000101: mov al,0x5d
pf_at 0x103
l_loader_00000103: call 0x99c
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
l_loader_00000116: mov eax,[0xb00]
pf_at 0x11a
l_loader_0000011a: mov [0xb54],eax
pf_at 0x11e
l_loader_0000011e: mov [0xb50],eax
pf_at 0x122
l_loader_00000122: mov word [0xaef],0x1
pf_at 0x128
l_loader_00000128: mov cx,0x1
pf_at 0x12b
l_loader_0000012b: call 0x8c7
pf_at 0x12e
l_loader_0000012e: jc short 0x161
pf_at 0x130
l_loader_00000130: mov ax,[es:0x10]
pf_at 0x134
l_loader_00000134: mov [0xae9],ax
pf_at 0x137
l_loader_00000137: mov eax,[es:0x1c]
pf_at 0x13c
l_loader_0000013c: add eax,[0xb00]
pf_at 0x141
l_loader_00000141: mov [0xaf8],eax
pf_at 0x145
l_loader_00000145: mov ax,[es:0x20]
pf_at 0x149
l_loader_00000149: mov [0xaeb],ax
pf_at 0x14c
l_loader_0000014c: mov eax,[es:0x24]
pf_at 0x151
l_loader_00000151: add eax,[0xb00]
pf_at 0x156
l_loader_00000156: mov [0xafc],eax
pf_at 0x15a
l_loader_0000015a: mov ax,[es:0x2c]
pf_at 0x15e
l_loader_0000015e: mov [0xaed],ax
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
l_loader_0000016b: mov dword [0xb00],0x41
pf_at 0x174
l_loader_00000174: mov dword [0xb04],0x0
pf_at 0x17d
l_loader_0000017d: mov dword [0xb08],0x0
pf_at 0x186
l_loader_00000186: mov dword [0xb0c],0x0
pf_at 0x18f
l_loader_0000018f: mov dword [0xb10],0x0
pf_at 0x198
l_loader_00000198: mov dword [0xb14],0x0
pf_at 0x1a1
l_loader_000001a1: mov ax,0x1000
pf_at 0x1a4
l_loader_000001a4: mov es,ax
pf_at 0x1a6
l_loader_000001a6: xor bx,bx
pf_at 0x1a8
l_loader_000001a8: mov eax,0x41
pf_at 0x1ae
l_loader_000001ae: mov [0xb54],eax
pf_at 0x1b2
l_loader_000001b2: mov [0xb50],eax
pf_at 0x1b6
l_loader_000001b6: mov word [0xaef],0x1
pf_at 0x1bc
l_loader_000001bc: mov cx,0x1
pf_at 0x1bf
l_loader_000001bf: call 0x8c7
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
l_loader_000001fa: mov [0xb00],eax
pf_at 0x1fe
l_loader_000001fe: mov eax,[es:0x28]
pf_at 0x203
l_loader_00000203: mov [0xb04],eax
pf_at 0x207
l_loader_00000207: mov eax,[es:0x2c]
pf_at 0x20c
l_loader_0000020c: mov [0xb08],eax
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
l_loader_0000022c: mov [0xb0c],eax
pf_at 0x230
l_loader_00000230: mov eax,[es:0x48]
pf_at 0x235
l_loader_00000235: mov [0xb10],eax
pf_at 0x239
l_loader_00000239: mov eax,[es:0x4c]
pf_at 0x23e
l_loader_0000023e: mov [0xb14],eax
pf_at 0x242
l_loader_00000242: mov byte [0xae3],0x0
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
l_loader_00000254: mov eax,[0xb0c]
pf_at 0x258
l_loader_00000258: test eax,eax
pf_at 0x25b
l_loader_0000025b: jz short 0x281
pf_at 0x25d
l_loader_0000025d: cmp eax,[0xb00]
pf_at 0x262
l_loader_00000262: jz short 0x281
pf_at 0x264
l_loader_00000264: mov [0xb00],eax
pf_at 0x268
l_loader_00000268: mov eax,[0xb10]
pf_at 0x26c
l_loader_0000026c: mov [0xb04],eax
pf_at 0x270
l_loader_00000270: mov eax,[0xb14]
pf_at 0x274
l_loader_00000274: mov [0xb08],eax
pf_at 0x278
l_loader_00000278: mov byte [0xae3],0x0
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
l_loader_0000028b: mov [0xae5],ax
pf_at 0x28e
l_loader_0000028e: mov [0xae7],si
pf_at 0x292
l_loader_00000292: mov dx,[0xaed]
pf_at 0x296
l_loader_00000296: xor bp,bp
pf_at 0x298
l_loader_00000298: cmp bp,[0xaeb]
pf_at 0x29c
l_loader_0000029c: jnc near 0x344
pf_at 0x2a0
l_loader_000002a0: mov ax,0x1000
pf_at 0x2a3
l_loader_000002a3: mov es,ax
pf_at 0x2a5
l_loader_000002a5: xor bx,bx
pf_at 0x2a7
l_loader_000002a7: mov eax,[0xaf8]
pf_at 0x2ab
l_loader_000002ab: movzx ecx,bp
pf_at 0x2af
l_loader_000002af: add eax,ecx
pf_at 0x2b2
l_loader_000002b2: mov [0xb54],eax
pf_at 0x2b6
l_loader_000002b6: mov [0xb50],eax
pf_at 0x2ba
l_loader_000002ba: mov word [0xaef],0x1
pf_at 0x2c0
l_loader_000002c0: mov cx,0x1
pf_at 0x2c3
l_loader_000002c3: push bp
pf_at 0x2c4
l_loader_000002c4: push dx
pf_at 0x2c5
l_loader_000002c5: call 0x8c7
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
l_loader_000002d7: mov si,[0xae7]
pf_at 0x2db
l_loader_000002db: mov di,bx
pf_at 0x2dd
l_loader_000002dd: call 0x8a6
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
l_loader_000002f3: mov [0xb30],eax
pf_at 0x2f7
l_loader_000002f7: mov eax,[es:bx+0xf4]
pf_at 0x2fd
l_loader_000002fd: mov [0xb34],eax
pf_at 0x301
l_loader_00000301: mov eax,[0xb34]
pf_at 0x305
l_loader_00000305: add eax,0x1ff
pf_at 0x30b
l_loader_0000030b: shr eax,byte 0x9
pf_at 0x30f
l_loader_0000030f: mov cx,ax
pf_at 0x311
l_loader_00000311: mov eax,[0xb30]
pf_at 0x315
l_loader_00000315: sub eax,byte +0x2
pf_at 0x319
l_loader_00000319: movzx edx,word [0xae9]
pf_at 0x31f
l_loader_0000031f: imul eax,edx
pf_at 0x323
l_loader_00000323: add eax,[0xafc]
pf_at 0x328
l_loader_00000328: mov [0xb54],eax
pf_at 0x32c
l_loader_0000032c: mov [0xb50],eax
pf_at 0x330
l_loader_00000330: mov [0xaef],cx
pf_at 0x334
l_loader_00000334: mov ax,[0xae5]
pf_at 0x337
l_loader_00000337: mov [0xaf1],ax
pf_at 0x33a
l_loader_0000033a: call 0x906
pf_at 0x33d
l_loader_0000033d: jc short 0x344
pf_at 0x33f
l_loader_0000033f: mov ax,[0xb34]
pf_at 0x342
l_loader_00000342: clc
pf_at 0x343
l_loader_00000343: ret
pf_at 0x344
l_loader_00000344: cmp byte [0xae3],0x0
pf_at 0x349
l_loader_00000349: jnz short 0x350
pf_at 0x34b
l_loader_0000034b: mov byte [0xae2],0x46
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
l_loader_00000383: cmp eax,[0xb34]
pf_at 0x388
l_loader_00000388: ja short 0x3b4
pf_at 0x38a
l_loader_0000038a: mov [0xb2c],eax
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
l_loader_000003a5: cmp edx,[0xb2c]
pf_at 0x3aa
l_loader_000003aa: jnc short 0x3b4
pf_at 0x3ac
l_loader_000003ac: mov [0xb28],eax
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
l_loader_000003b8: mov byte [0xae2],0x42
pf_at 0x3bd
l_loader_000003bd: mov dword [0xb28],0x0
pf_at 0x3c6
l_loader_000003c6: mov dword [0xb2c],0x0
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
l_loader_000003df: lea di,[0xb58]
pf_at 0x3e3
l_loader_000003e3: xor eax,eax
pf_at 0x3e6
l_loader_000003e6: mov cx,0xf
pf_at 0x3e9
l_loader_000003e9: cld
pf_at 0x3ea
l_loader_000003ea: rep stosw
pf_at 0x3ec
l_loader_000003ec: mov word [0xb58],0x1e
pf_at 0x3f2
l_loader_000003f2: mov ah,0x48
pf_at 0x3f4
l_loader_000003f4: mov dl,[0xae0]
pf_at 0x3f8
l_loader_000003f8: lea si,[0xb58]
pf_at 0x3fc
l_loader_000003fc: int 0x13
pf_at 0x3fe
l_loader_000003fe: jc short 0x41b
pf_at 0x400
l_loader_00000400: mov eax,[0xb68]
pf_at 0x404
l_loader_00000404: mov edx,[0xb6c]
pf_at 0x409
l_loader_00000409: test edx,edx
pf_at 0x40c
l_loader_0000040c: jz short 0x414
pf_at 0x40e
l_loader_0000040e: mov eax,0xffffffff
pf_at 0x414
l_loader_00000414: mov [0xb18],eax
pf_at 0x418
l_loader_00000418: clc
pf_at 0x419
l_loader_00000419: jmp short 0x425
pf_at 0x41b
l_loader_0000041b: mov dword [0xb18],0x0
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
l_loader_0000043a: mov dword [0xb1c],0x4000000
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
l_loader_00000452: mov dword [0xb1c],0x4000000
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
l_loader_00000471: mov dword [0xb24],0x0
pf_at 0x47a
l_loader_0000047a: mov dword [0xb20],0x300000
pf_at 0x483
l_loader_00000483: mov eax,[0xb20]
pf_at 0x487
l_loader_00000487: mov [0xb1c],eax
pf_at 0x48b
l_loader_0000048b: mov dword [0xb24],0x0
pf_at 0x494
l_loader_00000494: lea di,[0xb76]
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
l_loader_000004b2: mov ebx,[0xb24]
pf_at 0x4b7
l_loader_000004b7: lea di,[0xb76]
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
l_loader_000004d3: mov [0xb24],ebx
pf_at 0x4d8
l_loader_000004d8: cmp dword [0xb86],byte +0x1
pf_at 0x4de
l_loader_000004de: jnz short 0x51b
pf_at 0x4e0
l_loader_000004e0: cmp dword [0xb7a],byte +0x0
pf_at 0x4e6
l_loader_000004e6: jnz short 0x51b
pf_at 0x4e8
l_loader_000004e8: mov eax,[0xb76]
pf_at 0x4ec
l_loader_000004ec: cmp eax,[0xb20]
pf_at 0x4f1
l_loader_000004f1: ja short 0x51b
pf_at 0x4f3
l_loader_000004f3: mov edx,[0xb82]
pf_at 0x4f8
l_loader_000004f8: test edx,edx
pf_at 0x4fb
l_loader_000004fb: jnz short 0x509
pf_at 0x4fd
l_loader_000004fd: mov edx,[0xb7e]
pf_at 0x502
l_loader_00000502: add edx,eax
pf_at 0x505
l_loader_00000505: jc short 0x509
pf_at 0x507
l_loader_00000507: jmp short 0x50f
pf_at 0x509
l_loader_00000509: mov edx,0xffffffff
pf_at 0x50f
l_loader_0000050f: cmp edx,[0xb20]
pf_at 0x514
l_loader_00000514: jna short 0x51b
pf_at 0x516
l_loader_00000516: mov [0xb20],edx
pf_at 0x51b
l_loader_0000051b: mov ebx,[0xb24]
pf_at 0x520
l_loader_00000520: test ebx,ebx
pf_at 0x523
l_loader_00000523: jnz near 0x494
pf_at 0x527
l_loader_00000527: mov eax,[0xb20]
pf_at 0x52b
l_loader_0000052b: cmp eax,[0xb1c]
pf_at 0x530
l_loader_00000530: ja near 0x483
pf_at 0x534
l_loader_00000534: cmp eax,0x300000
pf_at 0x53a
l_loader_0000053a: jna short 0x543
pf_at 0x53c
l_loader_0000053c: mov [0xb1c],eax
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
l_loader_00000597: mov [0xb1c],eax
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
l_loader_000005d4: mov [0xb1c],eax
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
l_loader_0000060e: mov dword [0xb24],0x0
pf_at 0x617
l_loader_00000617: mov ax,cs
pf_at 0x619
l_loader_00000619: mov es,ax
pf_at 0x61b
l_loader_0000061b: lea di,[0xb76]
pf_at 0x61f
l_loader_0000061f: xor ax,ax
pf_at 0x621
l_loader_00000621: mov cx,0xa
pf_at 0x624
l_loader_00000624: cld
pf_at 0x625
l_loader_00000625: rep stosw
pf_at 0x627
l_loader_00000627: mov eax,0xe820
pf_at 0x62d
l_loader_0000062d: mov edx,0x534d4150
pf_at 0x633
l_loader_00000633: mov ecx,0x14
pf_at 0x639
l_loader_00000639: mov ebx,[0xb24]
pf_at 0x63e
l_loader_0000063e: lea di,[0xb76]
pf_at 0x642
l_loader_00000642: int 0x15
pf_at 0x644
l_loader_00000644: push eax
pf_at 0x646
l_loader_00000646: mov ax,cs
pf_at 0x648
l_loader_00000648: mov ds,ax
pf_at 0x64a
l_loader_0000064a: mov ax,0x600
pf_at 0x64d
l_loader_0000064d: mov es,ax
pf_at 0x64f
l_loader_0000064f: pop eax
pf_at 0x651
l_loader_00000651: jc near 0x701
pf_at 0x655
l_loader_00000655: cmp eax,0x534d4150
pf_at 0x65b
l_loader_0000065b: jnz near 0x701
pf_at 0x65f
l_loader_0000065f: mov [0xb24],ebx
pf_at 0x664
l_loader_00000664: cmp dword [0xb86],byte +0x1
pf_at 0x66a
l_loader_0000066a: jnz near 0x6f5
pf_at 0x66e
l_loader_0000066e: mov eax,[0xb7e]
pf_at 0x672
l_loader_00000672: mov edx,[0xb82]
pf_at 0x677
l_loader_00000677: add [es:0x110],eax
pf_at 0x67d
l_loader_0000067d: adc [es:0x114],edx
pf_at 0x683
l_loader_00000683: cmp dword [0xb7a],byte +0x0
pf_at 0x689
l_loader_00000689: jnz short 0x6f5
pf_at 0x68b
l_loader_0000068b: mov eax,[0xb76]
pf_at 0x68f
l_loader_0000068f: mov ebp,eax
pf_at 0x692
l_loader_00000692: cmp ebp,0x300000
pf_at 0x699
l_loader_00000699: jnc short 0x6a1
pf_at 0x69b
l_loader_0000069b: mov ebp,0x300000
pf_at 0x6a1
l_loader_000006a1: mov ecx,[0xb7e]
pf_at 0x6a6
l_loader_000006a6: mov edx,[0xb82]
pf_at 0x6ab
l_loader_000006ab: test edx,edx
pf_at 0x6ae
l_loader_000006ae: jnz short 0x6c2
pf_at 0x6b0
l_loader_000006b0: mov esi,eax
pf_at 0x6b3
l_loader_000006b3: add esi,ecx
pf_at 0x6b6
l_loader_000006b6: jc short 0x6c2
pf_at 0x6b8
l_loader_000006b8: cmp esi,ebp
pf_at 0x6bb
l_loader_000006bb: jna short 0x6f5
pf_at 0x6bd
l_loader_000006bd: sub esi,ebp
pf_at 0x6c0
l_loader_000006c0: jmp short 0x6d1
pf_at 0x6c2
l_loader_000006c2: mov esi,0xffffffff
pf_at 0x6c8
l_loader_000006c8: sub esi,ebp
pf_at 0x6cb
l_loader_000006cb: add esi,byte +0x1
pf_at 0x6cf
l_loader_000006cf: jz short 0x6f5
pf_at 0x6d1
l_loader_000006d1: mov eax,[es:0x8c]
pf_at 0x6d6
l_loader_000006d6: cmp eax,byte +0x10
pf_at 0x6da
l_loader_000006da: jnc short 0x6f5
pf_at 0x6dc
l_loader_000006dc: shl eax,byte 0x3
pf_at 0x6e0
l_loader_000006e0: mov di,ax
pf_at 0x6e2
l_loader_000006e2: add di,0x90
pf_at 0x6e6
l_loader_000006e6: mov [es:di],ebp
pf_at 0x6ea
l_loader_000006ea: mov [es:di+0x4],esi
pf_at 0x6ef
l_loader_000006ef: inc dword [es:0x8c]
pf_at 0x6f5
l_loader_000006f5: mov ebx,[0xb24]
pf_at 0x6fa
l_loader_000006fa: test ebx,ebx
pf_at 0x6fd
l_loader_000006fd: jnz near 0x617
pf_at 0x701
l_loader_00000701: cmp dword [es:0x8c],byte +0x0
pf_at 0x708
l_loader_00000708: jnz short 0x735
pf_at 0x70a
l_loader_0000070a: mov eax,[0xb1c]
pf_at 0x70e
l_loader_0000070e: cmp eax,0x300000
pf_at 0x714
l_loader_00000714: jna short 0x735
pf_at 0x716
l_loader_00000716: mov dword [es:0x90],0x300000
pf_at 0x720
l_loader_00000720: sub eax,0x300000
pf_at 0x726
l_loader_00000726: mov [es:0x94],eax
pf_at 0x72b
l_loader_0000072b: mov dword [es:0x8c],0x1
pf_at 0x735
l_loader_00000735: pop bp
pf_at 0x736
l_loader_00000736: pop di
pf_at 0x737
l_loader_00000737: pop si
pf_at 0x738
l_loader_00000738: pop es
pf_at 0x739
l_loader_00000739: pop ds
pf_at 0x73a
l_loader_0000073a: pop dx
pf_at 0x73b
l_loader_0000073b: pop cx
pf_at 0x73c
l_loader_0000073c: pop bx
pf_at 0x73d
l_loader_0000073d: pop ax
pf_at 0x73e
l_loader_0000073e: ret
pf_at 0x73f
l_loader_0000073f: push ax
pf_at 0x740
l_loader_00000740: push cx
pf_at 0x741
l_loader_00000741: push ds
pf_at 0x742
l_loader_00000742: push es
pf_at 0x743
l_loader_00000743: push di
pf_at 0x744
l_loader_00000744: mov ax,0x600
pf_at 0x747
l_loader_00000747: mov es,ax
pf_at 0x749
l_loader_00000749: xor di,di
pf_at 0x74b
l_loader_0000074b: xor ax,ax
pf_at 0x74d
l_loader_0000074d: mov cx,0x92
pf_at 0x750
l_loader_00000750: cld
pf_at 0x751
l_loader_00000751: rep stosw
pf_at 0x753
l_loader_00000753: mov ax,cs
pf_at 0x755
l_loader_00000755: mov ds,ax
pf_at 0x757
l_loader_00000757: xor eax,eax
pf_at 0x75a
l_loader_0000075a: mov al,[0xae0]
pf_at 0x75d
l_loader_0000075d: mov [es:0x68],eax
pf_at 0x762
l_loader_00000762: mov eax,[0xaf8]
pf_at 0x766
l_loader_00000766: mov [es:0x70],eax
pf_at 0x76b
l_loader_0000076b: xor eax,eax
pf_at 0x76e
l_loader_0000076e: mov ax,[0xaeb]
pf_at 0x771
l_loader_00000771: mov [es:0x74],eax
pf_at 0x776
l_loader_00000776: mov eax,[0xafc]
pf_at 0x77a
l_loader_0000077a: mov [es:0x78],eax
pf_at 0x77f
l_loader_0000077f: xor eax,eax
pf_at 0x782
l_loader_00000782: mov ax,[0xae9]
pf_at 0x785
l_loader_00000785: mov [es:0x7c],eax
pf_at 0x78a
l_loader_0000078a: xor eax,eax
pf_at 0x78d
l_loader_0000078d: mov ax,[0xaed]
pf_at 0x790
l_loader_00000790: mov [es:0x80],eax
pf_at 0x795
l_loader_00000795: mov eax,[0xb18]
pf_at 0x799
l_loader_00000799: mov [es:0x84],eax
pf_at 0x79e
l_loader_0000079e: mov eax,[0xb00]
pf_at 0x7a2
l_loader_000007a2: mov [es:0x118],eax
pf_at 0x7a7
l_loader_000007a7: mov eax,[0xb04]
pf_at 0x7ab
l_loader_000007ab: mov [es:0x11c],eax
pf_at 0x7b0
l_loader_000007b0: mov eax,[0xb08]
pf_at 0x7b4
l_loader_000007b4: mov [es:0x120],eax
pf_at 0x7b9
l_loader_000007b9: mov eax,[0xb1c]
pf_at 0x7bd
l_loader_000007bd: mov [es:0x88],eax
pf_at 0x7c2
l_loader_000007c2: call 0x5de
pf_at 0x7c5
l_loader_000007c5: pop di
pf_at 0x7c6
l_loader_000007c6: pop es
pf_at 0x7c7
l_loader_000007c7: pop ds
pf_at 0x7c8
l_loader_000007c8: pop cx
pf_at 0x7c9
l_loader_000007c9: pop ax
pf_at 0x7ca
l_loader_000007ca: ret
pf_at 0x7cb
l_loader_000007cb: mov ax,0x3
pf_at 0x7ce
l_loader_000007ce: int 0x10
pf_at 0x7d0
l_loader_000007d0: ret
pf_at 0x7d1
l_loader_000007d1: in al,0x92
pf_at 0x7d3
l_loader_000007d3: or al,0x2
pf_at 0x7d5
l_loader_000007d5: out 0x92,al
pf_at 0x7d7
l_loader_000007d7: ret
pf_at 0x7d8
l_loader_000007d8: mov esi,[0xb28]
pf_at 0x7dd
l_loader_000007dd: cli
pf_at 0x7de
l_loader_000007de: xor eax,eax
pf_at 0x7e1
l_loader_000007e1: mov ax,cs
pf_at 0x7e3
l_loader_000007e3: mov ds,ax
pf_at 0x7e5
l_loader_000007e5: shl eax,byte 0x4
pf_at 0x7e9
l_loader_000007e9: lea bx,[0xa10]
pf_at 0x7ed
l_loader_000007ed: movzx edx,bx
pf_at 0x7f1
l_loader_000007f1: add eax,edx
pf_at 0x7f4
l_loader_000007f4: mov [0xa2a],eax
pf_at 0x7f8
l_loader_000007f8: xor eax,eax
pf_at 0x7fb
l_loader_000007fb: mov ax,cs
pf_at 0x7fd
l_loader_000007fd: shl eax,byte 0x4
pf_at 0x801
l_loader_00000801: lea bx,[0x9ef]
pf_at 0x805
l_loader_00000805: movzx edx,bx
pf_at 0x809
l_loader_00000809: add eax,edx
pf_at 0x80c
l_loader_0000080c: mov [0x821],eax
pf_at 0x810
l_loader_00000810: lgdt [0xa28]
pf_at 0x815
l_loader_00000815: mov eax,cr0
pf_at 0x818
l_loader_00000818: or eax,byte +0x1
pf_at 0x81c
l_loader_0000081c: mov cr0,eax
pf_at 0x81f
l_loader_0000081f: jmp dword 0x8:0x0
pf_at 0x827
l_loader_00000827: ret
pf_at 0x828
l_loader_00000828: mov dword [0xb4c],0x0
pf_at 0x831
l_loader_00000831: cmp dword [0xb44],0x1ee
pf_at 0x83a
l_loader_0000083a: jc short 0x8a4
pf_at 0x83c
l_loader_0000083c: push ds
pf_at 0x83d
l_loader_0000083d: push es
pf_at 0x83e
l_loader_0000083e: push si
pf_at 0x83f
l_loader_0000083f: push di
pf_at 0x840
l_loader_00000840: push cx
pf_at 0x841
l_loader_00000841: mov ax,0x5000
pf_at 0x844
l_loader_00000844: mov ds,ax
pf_at 0x846
l_loader_00000846: cmp word [0x0],0x5357
pf_at 0x84c
l_loader_0000084c: jnz short 0x89f
pf_at 0x84e
l_loader_0000084e: cmp word [0x2],0x3154
pf_at 0x854
l_loader_00000854: jnz short 0x89f
pf_at 0x856
l_loader_00000856: cmp word [0x4],byte +0x1
pf_at 0x85b
l_loader_0000085b: jnz short 0x89f
pf_at 0x85d
l_loader_0000085d: cmp word [0x6],byte +0x0
pf_at 0x862
l_loader_00000862: jnz short 0x89f
pf_at 0x864
l_loader_00000864: mov ax,cs
pf_at 0x866
l_loader_00000866: mov es,ax
pf_at 0x868
l_loader_00000868: lea di,[0xb8a]
pf_at 0x86c
l_loader_0000086c: mov si,0x1ec
pf_at 0x86f
l_loader_0000086f: mov cx,0xef
pf_at 0x872
l_loader_00000872: cld
pf_at 0x873
l_loader_00000873: lodsb
pf_at 0x874
l_loader_00000874: stosb
pf_at 0x875
l_loader_00000875: test al,al
pf_at 0x877
l_loader_00000877: jz short 0x87f
pf_at 0x879
l_loader_00000879: loop 0x873
pf_at 0x87b
l_loader_0000087b: mov byte [es:di],0x0
pf_at 0x87f
l_loader_0000087f: pop cx
pf_at 0x880
l_loader_00000880: pop di
pf_at 0x881
l_loader_00000881: pop si
pf_at 0x882
l_loader_00000882: pop es
pf_at 0x883
l_loader_00000883: pop ds
pf_at 0x884
l_loader_00000884: mov byte [0xae3],0x0
pf_at 0x889
l_loader_00000889: mov ax,0x6000
pf_at 0x88c
l_loader_0000088c: lea si,[0xb8a]
pf_at 0x890
l_loader_00000890: call 0x285
pf_at 0x893
l_loader_00000893: jc short 0x8a4
pf_at 0x895
l_loader_00000895: mov eax,[0xb34]
pf_at 0x899
l_loader_00000899: mov [0xb4c],eax
pf_at 0x89d
l_loader_0000089d: clc
pf_at 0x89e
l_loader_0000089e: ret
pf_at 0x89f
l_loader_0000089f: pop cx
pf_at 0x8a0
l_loader_000008a0: pop di
pf_at 0x8a1
l_loader_000008a1: pop si
pf_at 0x8a2
l_loader_000008a2: pop es
pf_at 0x8a3
l_loader_000008a3: pop ds
pf_at 0x8a4
l_loader_000008a4: stc
pf_at 0x8a5
l_loader_000008a5: ret
pf_at 0x8a6
l_loader_000008a6: push ax
pf_at 0x8a7
l_loader_000008a7: mov al,[si]
pf_at 0x8a9
l_loader_000008a9: cmp al,0x2f
pf_at 0x8ab
l_loader_000008ab: jnz short 0x8b0
pf_at 0x8ad
l_loader_000008ad: inc si
pf_at 0x8ae
l_loader_000008ae: jmp short 0x8a7
pf_at 0x8b0
l_loader_000008b0: mov al,[si]
pf_at 0x8b2
l_loader_000008b2: mov ah,[es:di]
pf_at 0x8b5
l_loader_000008b5: cmp al,ah
pf_at 0x8b7
l_loader_000008b7: jnz short 0x8c4
pf_at 0x8b9
l_loader_000008b9: cmp al,0x0
pf_at 0x8bb
l_loader_000008bb: jz short 0x8c1
pf_at 0x8bd
l_loader_000008bd: inc si
pf_at 0x8be
l_loader_000008be: inc di
pf_at 0x8bf
l_loader_000008bf: jmp short 0x8b0
pf_at 0x8c1
l_loader_000008c1: clc
pf_at 0x8c2
l_loader_000008c2: pop ax
pf_at 0x8c3
l_loader_000008c3: ret
pf_at 0x8c4
l_loader_000008c4: stc
pf_at 0x8c5
l_loader_000008c5: pop ax
pf_at 0x8c6
l_loader_000008c6: ret
pf_at 0x8c7
l_loader_000008c7: push ax
pf_at 0x8c8
l_loader_000008c8: mov ax,cs
pf_at 0x8ca
l_loader_000008ca: mov ds,ax
pf_at 0x8cc
l_loader_000008cc: pop ax
pf_at 0x8cd
l_loader_000008cd: mov byte [0xae3],0x0
pf_at 0x8d2
l_loader_000008d2: call 0x954
pf_at 0x8d5
l_loader_000008d5: mov ah,0x42
pf_at 0x8d7
l_loader_000008d7: int 0x13
pf_at 0x8d9
l_loader_000008d9: call 0x990
pf_at 0x8dc
l_loader_000008dc: jnc short 0x904
pf_at 0x8de
l_loader_000008de: mov [0xae3],ah
pf_at 0x8e2
l_loader_000008e2: xor ah,ah
pf_at 0x8e4
l_loader_000008e4: mov dl,[0xae0]
pf_at 0x8e8
l_loader_000008e8: int 0x13
pf_at 0x8ea
l_loader_000008ea: call 0x990
pf_at 0x8ed
l_loader_000008ed: call 0x954
pf_at 0x8f0
l_loader_000008f0: mov ah,0x42
pf_at 0x8f2
l_loader_000008f2: int 0x13
pf_at 0x8f4
l_loader_000008f4: call 0x990
pf_at 0x8f7
l_loader_000008f7: jnc short 0x904
pf_at 0x8f9
l_loader_000008f9: mov [0xae3],ah
pf_at 0x8fd
l_loader_000008fd: mov byte [0xae2],0x44
pf_at 0x902
l_loader_00000902: stc
pf_at 0x903
l_loader_00000903: ret
pf_at 0x904
l_loader_00000904: clc
pf_at 0x905
l_loader_00000905: ret
pf_at 0x906
l_loader_00000906: cmp word [0xaef],byte +0x0
pf_at 0x90b
l_loader_0000090b: jz short 0x952
pf_at 0x90d
l_loader_0000090d: mov cx,0x1
pf_at 0x910
l_loader_00000910: mov ax,0x1000
pf_at 0x913
l_loader_00000913: mov es,ax
pf_at 0x915
l_loader_00000915: xor bx,bx
pf_at 0x917
l_loader_00000917: mov eax,[0xb54]
pf_at 0x91b
l_loader_0000091b: call 0x8c7
pf_at 0x91e
l_loader_0000091e: jc short 0x950
pf_at 0x920
l_loader_00000920: push ds
pf_at 0x921
l_loader_00000921: push es
pf_at 0x922
l_loader_00000922: push si
pf_at 0x923
l_loader_00000923: push di
pf_at 0x924
l_loader_00000924: push cx
pf_at 0x925
l_loader_00000925: mov ax,[0xaf1]
pf_at 0x928
l_loader_00000928: push ax
pf_at 0x929
l_loader_00000929: mov ax,0x1000
pf_at 0x92c
l_loader_0000092c: mov ds,ax
pf_at 0x92e
l_loader_0000092e: xor si,si
pf_at 0x930
l_loader_00000930: pop ax
pf_at 0x931
l_loader_00000931: mov es,ax
pf_at 0x933
l_loader_00000933: xor di,di
pf_at 0x935
l_loader_00000935: mov cx,0x100
pf_at 0x938
l_loader_00000938: cld
pf_at 0x939
l_loader_00000939: rep movsw
pf_at 0x93b
l_loader_0000093b: pop cx
pf_at 0x93c
l_loader_0000093c: pop di
pf_at 0x93d
l_loader_0000093d: pop si
pf_at 0x93e
l_loader_0000093e: pop es
pf_at 0x93f
l_loader_0000093f: pop ds
pf_at 0x940
l_loader_00000940: add word [0xaf1],byte +0x20
pf_at 0x945
l_loader_00000945: dec word [0xaef]
pf_at 0x949
l_loader_00000949: inc dword [0xb54]
pf_at 0x94e
l_loader_0000094e: jmp short 0x906
pf_at 0x950
l_loader_00000950: stc
pf_at 0x951
l_loader_00000951: ret
pf_at 0x952
l_loader_00000952: clc
pf_at 0x953
l_loader_00000953: ret
pf_at 0x954
l_loader_00000954: mov [0xaf3],es
pf_at 0x958
l_loader_00000958: mov dl,[0xae0]
pf_at 0x95c
l_loader_0000095c: mov di,0x1000
pf_at 0x95f
l_loader_0000095f: mov es,di
pf_at 0x961
l_loader_00000961: mov word [es:0x400],0x10
pf_at 0x968
l_loader_00000968: mov [es:0x402],cx
pf_at 0x96d
l_loader_0000096d: mov [es:0x404],bx
pf_at 0x972
l_loader_00000972: mov bp,[0xaf3]
pf_at 0x976
l_loader_00000976: mov [es:0x406],bp
pf_at 0x97b
l_loader_0000097b: mov [es:0x408],eax
pf_at 0x980
l_loader_00000980: mov dword [es:0x40c],0x0
pf_at 0x98a
l_loader_0000098a: mov ds,di
pf_at 0x98c
l_loader_0000098c: mov si,0x400
pf_at 0x98f
l_loader_0000098f: ret
pf_at 0x990
l_loader_00000990: push ax
pf_at 0x991
l_loader_00000991: mov ax,cs
pf_at 0x993
l_loader_00000993: mov ds,ax
pf_at 0x995
l_loader_00000995: mov ax,[0xaf3]
pf_at 0x998
l_loader_00000998: mov es,ax
pf_at 0x99a
l_loader_0000099a: pop ax
pf_at 0x99b
l_loader_0000099b: ret
pf_at 0x99c
l_loader_0000099c: push ax
pf_at 0x99d
l_loader_0000099d: push bx
pf_at 0x99e
l_loader_0000099e: push cx
pf_at 0x99f
l_loader_0000099f: push dx
pf_at 0x9a0
l_loader_000009a0: push si
pf_at 0x9a1
l_loader_000009a1: push di
pf_at 0x9a2
l_loader_000009a2: push bp
pf_at 0x9a3
l_loader_000009a3: push ds
pf_at 0x9a4
l_loader_000009a4: push es
pf_at 0x9a5
l_loader_000009a5: mov ah,0xe
pf_at 0x9a7
l_loader_000009a7: mov bx,0x7
pf_at 0x9aa
l_loader_000009aa: int 0x10
pf_at 0x9ac
l_loader_000009ac: pop es
pf_at 0x9ad
l_loader_000009ad: pop ds
pf_at 0x9ae
l_loader_000009ae: pop bp
pf_at 0x9af
l_loader_000009af: pop di
pf_at 0x9b0
l_loader_000009b0: pop si
pf_at 0x9b1
l_loader_000009b1: pop dx
pf_at 0x9b2
l_loader_000009b2: pop cx
pf_at 0x9b3
l_loader_000009b3: pop bx
pf_at 0x9b4
l_loader_000009b4: pop ax
pf_at 0x9b5
l_loader_000009b5: ret
pf_at 0x9b6
l_loader_000009b6: cld
pf_at 0x9b7
l_loader_000009b7: lodsb
pf_at 0x9b8
l_loader_000009b8: test al,al
pf_at 0x9ba
l_loader_000009ba: jz short 0x9c1
pf_at 0x9bc
l_loader_000009bc: call 0x99c
pf_at 0x9bf
l_loader_000009bf: jmp short 0x9b7
pf_at 0x9c1
l_loader_000009c1: ret
pf_at 0x9c2
l_loader_000009c2: and al,0xf
pf_at 0x9c4
l_loader_000009c4: cmp al,0x9
pf_at 0x9c6
l_loader_000009c6: jna short 0x9cc
pf_at 0x9c8
l_loader_000009c8: add al,0x37
pf_at 0x9ca
l_loader_000009ca: jmp short 0x9ce
pf_at 0x9cc
l_loader_000009cc: add al,0x30
pf_at 0x9ce
l_loader_000009ce: call 0x99c
pf_at 0x9d1
l_loader_000009d1: ret
pf_at 0x9d2
l_loader_000009d2: push ax
pf_at 0x9d3
l_loader_000009d3: push bx
pf_at 0x9d4
l_loader_000009d4: mov bl,al
pf_at 0x9d6
l_loader_000009d6: shr al,byte 0x4
pf_at 0x9d9
l_loader_000009d9: call 0x9c2
pf_at 0x9dc
l_loader_000009dc: mov al,bl
pf_at 0x9de
l_loader_000009de: call 0x9c2
pf_at 0x9e1
l_loader_000009e1: pop bx
pf_at 0x9e2
l_loader_000009e2: pop ax
pf_at 0x9e3
l_loader_000009e3: ret
pf_at 0x9e4
l_loader_000009e4: push ax
pf_at 0x9e5
l_loader_000009e5: xchg ah,al
pf_at 0x9e7
l_loader_000009e7: call 0x9d2
pf_at 0x9ea
l_loader_000009ea: pop ax
pf_at 0x9eb
l_loader_000009eb: call 0x9d2
pf_at 0x9ee
l_loader_000009ee: ret

section part1 start=0x9ef vstart=0x89ef align=1
bits 32
pf_at 0x0
l_loader_000089ef: mov ax,0x10
pf_at 0x4
l_loader_000089f3: o16 mov ds,ax
pf_at 0x7
l_loader_000089f6: o16 mov es,ax
pf_at 0xa
l_loader_000089f9: o16 mov fs,ax
pf_at 0xd
l_loader_000089fc: o16 mov gs,ax
pf_at 0x10
l_loader_000089ff: o16 mov ss,ax
pf_at 0x13
l_loader_00008a02: mov esp,0x17f000
pf_at 0x18
l_loader_00008a07: cld
pf_at 0x19
l_loader_00008a08: jmp esi
pf_at 0x1b
l_loader_00008a0a: db 0x8d
pf_at 0x1c
l_loader_00008a0b: mov ah,0x0
pf_at 0x1e
l_loader_00008a0d: add [esi-0x70],ah

section part2 start=0xa10 vstart=0x0 align=1
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
    times 29920 db 0
