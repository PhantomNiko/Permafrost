; Permafrost 0.1 — recovered assembly, Pooka's Free Software License.
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
l_loader_00000011: mov [0x810],dl
pf_at 0x15
l_loader_00000015: mov byte [0x811],0x3f
pf_at 0x1a
l_loader_0000001a: mov byte [0x812],0x3f
pf_at 0x1f
l_loader_0000001f: mov byte [0x813],0x0
pf_at 0x24
l_loader_00000024: lea si,[0x777]
pf_at 0x28
l_loader_00000028: call 0x6ec
pf_at 0x2b
l_loader_0000002b: mov byte [0x811],0x53
pf_at 0x30
l_loader_00000030: mov byte [0x812],0x44
pf_at 0x35
l_loader_00000035: call 0xf1
pf_at 0x38
l_loader_00000038: jc short 0x83
pf_at 0x3a
l_loader_0000003a: mov byte [0x811],0x48
pf_at 0x3f
l_loader_0000003f: mov byte [0x812],0x46
pf_at 0x44
l_loader_00000044: mov byte [0x813],0x0
pf_at 0x49
l_loader_00000049: mov ax,0x2000
pf_at 0x4c
l_loader_0000004c: lea si,[0x77c]
pf_at 0x50
l_loader_00000050: call 0x14a
pf_at 0x53
l_loader_00000053: jc short 0x83
pf_at 0x55
l_loader_00000055: mov byte [0x811],0x50
pf_at 0x5a
l_loader_0000005a: mov byte [0x812],0x42
pf_at 0x5f
l_loader_0000005f: call 0x217
pf_at 0x62
l_loader_00000062: jc short 0x83
pf_at 0x64
l_loader_00000064: call 0x298
pf_at 0x67
l_loader_00000067: call 0x2f1
pf_at 0x6a
l_loader_0000006a: call 0x493
pf_at 0x6d
l_loader_0000006d: mov byte [0x811],0x54
pf_at 0x72
l_loader_00000072: mov byte [0x812],0x4d
pf_at 0x77
l_loader_00000077: call 0x501
pf_at 0x7a
l_loader_0000007a: call 0x507
pf_at 0x7d
l_loader_0000007d: call 0x50e
pf_at 0x80
l_loader_00000080: hlt
pf_at 0x81
l_loader_00000081: jmp short 0x80
pf_at 0x83
l_loader_00000083: push ax
pf_at 0x84
l_loader_00000084: mov ax,cs
pf_at 0x86
l_loader_00000086: mov ds,ax
pf_at 0x88
l_loader_00000088: pop ax
pf_at 0x89
l_loader_00000089: lea si,[0x75e]
pf_at 0x8d
l_loader_0000008d: call 0x6ec
pf_at 0x90
l_loader_00000090: mov al,0x20
pf_at 0x92
l_loader_00000092: call 0x6d2
pf_at 0x95
l_loader_00000095: mov al,0x5b
pf_at 0x97
l_loader_00000097: call 0x6d2
pf_at 0x9a
l_loader_0000009a: mov al,[0x811]
pf_at 0x9d
l_loader_0000009d: call 0x6d2
pf_at 0xa0
l_loader_000000a0: mov al,0x3a
pf_at 0xa2
l_loader_000000a2: call 0x6d2
pf_at 0xa5
l_loader_000000a5: mov al,[0x812]
pf_at 0xa8
l_loader_000000a8: call 0x6d2
pf_at 0xab
l_loader_000000ab: mov al,0x20
pf_at 0xad
l_loader_000000ad: call 0x6d2
pf_at 0xb0
l_loader_000000b0: mov al,[0x813]
pf_at 0xb3
l_loader_000000b3: call 0x708
pf_at 0xb6
l_loader_000000b6: cmp byte [0x812],0x44
pf_at 0xbb
l_loader_000000bb: jnz short 0xe9
pf_at 0xbd
l_loader_000000bd: mov al,0x20
pf_at 0xbf
l_loader_000000bf: call 0x6d2
pf_at 0xc2
l_loader_000000c2: mov al,0x4c
pf_at 0xc4
l_loader_000000c4: call 0x6d2
pf_at 0xc7
l_loader_000000c7: push ax
pf_at 0xc8
l_loader_000000c8: mov ax,cs
pf_at 0xca
l_loader_000000ca: mov ds,ax
pf_at 0xcc
l_loader_000000cc: pop ax
pf_at 0xcd
l_loader_000000cd: mov ax,[0x86c]
pf_at 0xd0
l_loader_000000d0: call 0x71a
pf_at 0xd3
l_loader_000000d3: mov al,0x20
pf_at 0xd5
l_loader_000000d5: call 0x6d2
pf_at 0xd8
l_loader_000000d8: mov al,0x53
pf_at 0xda
l_loader_000000da: call 0x6d2
pf_at 0xdd
l_loader_000000dd: push ax
pf_at 0xde
l_loader_000000de: mov ax,cs
pf_at 0xe0
l_loader_000000e0: mov ds,ax
pf_at 0xe2
l_loader_000000e2: pop ax
pf_at 0xe3
l_loader_000000e3: mov ax,[0x868]
pf_at 0xe6
l_loader_000000e6: call 0x71a
pf_at 0xe9
l_loader_000000e9: mov al,0x5d
pf_at 0xeb
l_loader_000000eb: call 0x6d2
pf_at 0xee
l_loader_000000ee: hlt
pf_at 0xef
l_loader_000000ef: jmp short 0xee
pf_at 0xf1
l_loader_000000f1: push ax
pf_at 0xf2
l_loader_000000f2: mov ax,cs
pf_at 0xf4
l_loader_000000f4: mov ds,ax
pf_at 0xf6
l_loader_000000f6: pop ax
pf_at 0xf7
l_loader_000000f7: mov ax,0x1000
pf_at 0xfa
l_loader_000000fa: mov es,ax
pf_at 0xfc
l_loader_000000fc: xor bx,bx
pf_at 0xfe
l_loader_000000fe: mov eax,0x41
pf_at 0x104
l_loader_00000104: mov [0x86c],eax
pf_at 0x108
l_loader_00000108: mov [0x868],eax
pf_at 0x10c
l_loader_0000010c: mov word [0x81f],0x1
pf_at 0x112
l_loader_00000112: mov cx,0x1
pf_at 0x115
l_loader_00000115: call 0x5fd
pf_at 0x118
l_loader_00000118: jc short 0x149
pf_at 0x11a
l_loader_0000011a: mov ax,[es:0x10]
pf_at 0x11e
l_loader_0000011e: mov [0x819],ax
pf_at 0x121
l_loader_00000121: mov eax,[es:0x1c]
pf_at 0x126
l_loader_00000126: add eax,byte +0x41
pf_at 0x12a
l_loader_0000012a: mov [0x828],eax
pf_at 0x12e
l_loader_0000012e: mov ax,[es:0x20]
pf_at 0x132
l_loader_00000132: mov [0x81b],ax
pf_at 0x135
l_loader_00000135: mov eax,[es:0x24]
pf_at 0x13a
l_loader_0000013a: add eax,byte +0x41
pf_at 0x13e
l_loader_0000013e: mov [0x82c],eax
pf_at 0x142
l_loader_00000142: mov ax,[es:0x2c]
pf_at 0x146
l_loader_00000146: mov [0x81d],ax
pf_at 0x149
l_loader_00000149: ret
pf_at 0x14a
l_loader_0000014a: push ax
pf_at 0x14b
l_loader_0000014b: mov ax,cs
pf_at 0x14d
l_loader_0000014d: mov ds,ax
pf_at 0x14f
l_loader_0000014f: pop ax
pf_at 0x150
l_loader_00000150: mov [0x815],ax
pf_at 0x153
l_loader_00000153: mov [0x817],si
pf_at 0x157
l_loader_00000157: mov dx,[0x81d]
pf_at 0x15b
l_loader_0000015b: xor bp,bp
pf_at 0x15d
l_loader_0000015d: cmp bp,[0x81b]
pf_at 0x161
l_loader_00000161: jnc near 0x209
pf_at 0x165
l_loader_00000165: mov ax,0x1000
pf_at 0x168
l_loader_00000168: mov es,ax
pf_at 0x16a
l_loader_0000016a: xor bx,bx
pf_at 0x16c
l_loader_0000016c: mov eax,[0x828]
pf_at 0x170
l_loader_00000170: movzx ecx,bp
pf_at 0x174
l_loader_00000174: add eax,ecx
pf_at 0x177
l_loader_00000177: mov [0x86c],eax
pf_at 0x17b
l_loader_0000017b: mov [0x868],eax
pf_at 0x17f
l_loader_0000017f: mov word [0x81f],0x1
pf_at 0x185
l_loader_00000185: mov cx,0x1
pf_at 0x188
l_loader_00000188: push bp
pf_at 0x189
l_loader_00000189: push dx
pf_at 0x18a
l_loader_0000018a: call 0x5fd
pf_at 0x18d
l_loader_0000018d: pop dx
pf_at 0x18e
l_loader_0000018e: pop bp
pf_at 0x18f
l_loader_0000018f: jc short 0x209
pf_at 0x191
l_loader_00000191: xor bx,bx
pf_at 0x193
l_loader_00000193: mov cx,0x2
pf_at 0x196
l_loader_00000196: cmp dx,byte +0x0
pf_at 0x199
l_loader_00000199: jz short 0x209
pf_at 0x19b
l_loader_0000019b: push cx
pf_at 0x19c
l_loader_0000019c: mov si,[0x817]
pf_at 0x1a0
l_loader_000001a0: mov di,bx
pf_at 0x1a2
l_loader_000001a2: call 0x5dc
pf_at 0x1a5
l_loader_000001a5: pop cx
pf_at 0x1a6
l_loader_000001a6: jnc short 0x1b2
pf_at 0x1a8
l_loader_000001a8: add bx,0x100
pf_at 0x1ac
l_loader_000001ac: dec dx
pf_at 0x1ad
l_loader_000001ad: loop 0x196
pf_at 0x1af
l_loader_000001af: inc bp
pf_at 0x1b0
l_loader_000001b0: jmp short 0x15d
pf_at 0x1b2
l_loader_000001b2: mov eax,[es:bx+0xf0]
pf_at 0x1b8
l_loader_000001b8: mov [0x848],eax
pf_at 0x1bc
l_loader_000001bc: mov eax,[es:bx+0xf4]
pf_at 0x1c2
l_loader_000001c2: mov [0x84c],eax
pf_at 0x1c6
l_loader_000001c6: mov eax,[0x84c]
pf_at 0x1ca
l_loader_000001ca: add eax,0x1ff
pf_at 0x1d0
l_loader_000001d0: shr eax,byte 0x9
pf_at 0x1d4
l_loader_000001d4: mov cx,ax
pf_at 0x1d6
l_loader_000001d6: mov eax,[0x848]
pf_at 0x1da
l_loader_000001da: sub eax,byte +0x2
pf_at 0x1de
l_loader_000001de: movzx edx,word [0x819]
pf_at 0x1e4
l_loader_000001e4: imul eax,edx
pf_at 0x1e8
l_loader_000001e8: add eax,[0x82c]
pf_at 0x1ed
l_loader_000001ed: mov [0x86c],eax
pf_at 0x1f1
l_loader_000001f1: mov [0x868],eax
pf_at 0x1f5
l_loader_000001f5: mov [0x81f],cx
pf_at 0x1f9
l_loader_000001f9: mov ax,[0x815]
pf_at 0x1fc
l_loader_000001fc: mov [0x821],ax
pf_at 0x1ff
l_loader_000001ff: call 0x63c
pf_at 0x202
l_loader_00000202: jc short 0x209
pf_at 0x204
l_loader_00000204: mov ax,[0x84c]
pf_at 0x207
l_loader_00000207: clc
pf_at 0x208
l_loader_00000208: ret
pf_at 0x209
l_loader_00000209: cmp byte [0x813],0x0
pf_at 0x20e
l_loader_0000020e: jnz short 0x215
pf_at 0x210
l_loader_00000210: mov byte [0x812],0x46
pf_at 0x215
l_loader_00000215: stc
pf_at 0x216
l_loader_00000216: ret
pf_at 0x217
l_loader_00000217: push ds
pf_at 0x218
l_loader_00000218: push es
pf_at 0x219
l_loader_00000219: mov ax,cs
pf_at 0x21b
l_loader_0000021b: mov ds,ax
pf_at 0x21d
l_loader_0000021d: mov ax,0x2000
pf_at 0x220
l_loader_00000220: mov es,ax
pf_at 0x222
l_loader_00000222: cmp word [es:0x0],0x4d57
pf_at 0x229
l_loader_00000229: jnz short 0x279
pf_at 0x22b
l_loader_0000022b: cmp word [es:0x2],0x504c
pf_at 0x232
l_loader_00000232: jnz short 0x279
pf_at 0x234
l_loader_00000234: cmp dword [es:0x4],byte +0x1
pf_at 0x23b
l_loader_0000023b: jnz short 0x279
pf_at 0x23d
l_loader_0000023d: mov eax,[es:0xc]
pf_at 0x242
l_loader_00000242: cmp eax,byte +0x10
pf_at 0x246
l_loader_00000246: jc short 0x279
pf_at 0x248
l_loader_00000248: cmp eax,[0x84c]
pf_at 0x24d
l_loader_0000024d: ja short 0x279
pf_at 0x24f
l_loader_0000024f: mov [0x844],eax
pf_at 0x253
l_loader_00000253: mov eax,[es:0x8]
pf_at 0x258
l_loader_00000258: cmp eax,0x20000
pf_at 0x25e
l_loader_0000025e: jc short 0x279
pf_at 0x260
l_loader_00000260: mov edx,eax
pf_at 0x263
l_loader_00000263: sub edx,0x20000
pf_at 0x26a
l_loader_0000026a: cmp edx,[0x844]
pf_at 0x26f
l_loader_0000026f: jnc short 0x279
pf_at 0x271
l_loader_00000271: mov [0x840],eax
pf_at 0x275
l_loader_00000275: pop es
pf_at 0x276
l_loader_00000276: pop ds
pf_at 0x277
l_loader_00000277: clc
pf_at 0x278
l_loader_00000278: ret
pf_at 0x279
l_loader_00000279: mov ax,cs
pf_at 0x27b
l_loader_0000027b: mov ds,ax
pf_at 0x27d
l_loader_0000027d: mov byte [0x812],0x42
pf_at 0x282
l_loader_00000282: mov dword [0x840],0x0
pf_at 0x28b
l_loader_0000028b: mov dword [0x844],0x0
pf_at 0x294
l_loader_00000294: pop es
pf_at 0x295
l_loader_00000295: pop ds
pf_at 0x296
l_loader_00000296: stc
pf_at 0x297
l_loader_00000297: ret
pf_at 0x298
l_loader_00000298: push ax
pf_at 0x299
l_loader_00000299: push cx
pf_at 0x29a
l_loader_0000029a: push ds
pf_at 0x29b
l_loader_0000029b: push es
pf_at 0x29c
l_loader_0000029c: push si
pf_at 0x29d
l_loader_0000029d: push di
pf_at 0x29e
l_loader_0000029e: mov ax,cs
pf_at 0x2a0
l_loader_000002a0: mov ds,ax
pf_at 0x2a2
l_loader_000002a2: mov es,ax
pf_at 0x2a4
l_loader_000002a4: lea di,[0x870]
pf_at 0x2a8
l_loader_000002a8: xor eax,eax
pf_at 0x2ab
l_loader_000002ab: mov cx,0xf
pf_at 0x2ae
l_loader_000002ae: cld
pf_at 0x2af
l_loader_000002af: rep stosw
pf_at 0x2b1
l_loader_000002b1: mov word [0x870],0x1e
pf_at 0x2b7
l_loader_000002b7: mov ah,0x48
pf_at 0x2b9
l_loader_000002b9: mov dl,[0x810]
pf_at 0x2bd
l_loader_000002bd: lea si,[0x870]
pf_at 0x2c1
l_loader_000002c1: int 0x13
pf_at 0x2c3
l_loader_000002c3: jc short 0x2e0
pf_at 0x2c5
l_loader_000002c5: mov eax,[0x880]
pf_at 0x2c9
l_loader_000002c9: mov edx,[0x884]
pf_at 0x2ce
l_loader_000002ce: test edx,edx
pf_at 0x2d1
l_loader_000002d1: jz short 0x2d9
pf_at 0x2d3
l_loader_000002d3: mov eax,0xffffffff
pf_at 0x2d9
l_loader_000002d9: mov [0x830],eax
pf_at 0x2dd
l_loader_000002dd: clc
pf_at 0x2de
l_loader_000002de: jmp short 0x2ea
pf_at 0x2e0
l_loader_000002e0: mov dword [0x830],0x0
pf_at 0x2e9
l_loader_000002e9: stc
pf_at 0x2ea
l_loader_000002ea: pop di
pf_at 0x2eb
l_loader_000002eb: pop si
pf_at 0x2ec
l_loader_000002ec: pop es
pf_at 0x2ed
l_loader_000002ed: pop ds
pf_at 0x2ee
l_loader_000002ee: pop cx
pf_at 0x2ef
l_loader_000002ef: pop ax
pf_at 0x2f0
l_loader_000002f0: ret
pf_at 0x2f1
l_loader_000002f1: push ax
pf_at 0x2f2
l_loader_000002f2: push bx
pf_at 0x2f3
l_loader_000002f3: push cx
pf_at 0x2f4
l_loader_000002f4: push dx
pf_at 0x2f5
l_loader_000002f5: push ds
pf_at 0x2f6
l_loader_000002f6: push es
pf_at 0x2f7
l_loader_000002f7: push si
pf_at 0x2f8
l_loader_000002f8: push di
pf_at 0x2f9
l_loader_000002f9: mov ax,cs
pf_at 0x2fb
l_loader_000002fb: mov ds,ax
pf_at 0x2fd
l_loader_000002fd: mov es,ax
pf_at 0x2ff
l_loader_000002ff: mov dword [0x834],0x4000000
pf_at 0x308
l_loader_00000308: call 0x32a
pf_at 0x30b
l_loader_0000030b: jnc short 0x321
pf_at 0x30d
l_loader_0000030d: call 0x400
pf_at 0x310
l_loader_00000310: jnc short 0x321
pf_at 0x312
l_loader_00000312: call 0x459
pf_at 0x315
l_loader_00000315: jnc short 0x321
pf_at 0x317
l_loader_00000317: mov dword [0x834],0x4000000
pf_at 0x320
l_loader_00000320: clc
pf_at 0x321
l_loader_00000321: pop di
pf_at 0x322
l_loader_00000322: pop si
pf_at 0x323
l_loader_00000323: pop es
pf_at 0x324
l_loader_00000324: pop ds
pf_at 0x325
l_loader_00000325: pop dx
pf_at 0x326
l_loader_00000326: pop cx
pf_at 0x327
l_loader_00000327: pop bx
pf_at 0x328
l_loader_00000328: pop ax
pf_at 0x329
l_loader_00000329: ret
pf_at 0x32a
l_loader_0000032a: push ax
pf_at 0x32b
l_loader_0000032b: push cx
pf_at 0x32c
l_loader_0000032c: push dx
pf_at 0x32d
l_loader_0000032d: push ds
pf_at 0x32e
l_loader_0000032e: push es
pf_at 0x32f
l_loader_0000032f: push di
pf_at 0x330
l_loader_00000330: mov ax,cs
pf_at 0x332
l_loader_00000332: mov ds,ax
pf_at 0x334
l_loader_00000334: mov es,ax
pf_at 0x336
l_loader_00000336: mov dword [0x83c],0x0
pf_at 0x33f
l_loader_0000033f: mov dword [0x838],0x0
pf_at 0x348
l_loader_00000348: lea di,[0x88e]
pf_at 0x34c
l_loader_0000034c: xor ax,ax
pf_at 0x34e
l_loader_0000034e: mov cx,0xa
pf_at 0x351
l_loader_00000351: cld
pf_at 0x352
l_loader_00000352: rep stosw
pf_at 0x354
l_loader_00000354: mov eax,0xe820
pf_at 0x35a
l_loader_0000035a: mov edx,0x534d4150
pf_at 0x360
l_loader_00000360: mov ecx,0x14
pf_at 0x366
l_loader_00000366: mov ebx,[0x83c]
pf_at 0x36b
l_loader_0000036b: lea di,[0x88e]
pf_at 0x36f
l_loader_0000036f: int 0x15
pf_at 0x371
l_loader_00000371: jc near 0x3f8
pf_at 0x375
l_loader_00000375: push eax
pf_at 0x377
l_loader_00000377: mov ax,cs
pf_at 0x379
l_loader_00000379: mov ds,ax
pf_at 0x37b
l_loader_0000037b: mov es,ax
pf_at 0x37d
l_loader_0000037d: pop eax
pf_at 0x37f
l_loader_0000037f: cmp eax,0x534d4150
pf_at 0x385
l_loader_00000385: jnz short 0x3f8
pf_at 0x387
l_loader_00000387: mov [0x83c],ebx
pf_at 0x38c
l_loader_0000038c: cmp dword [0x89e],byte +0x1
pf_at 0x392
l_loader_00000392: jnz short 0x3d9
pf_at 0x394
l_loader_00000394: cmp dword [0x892],byte +0x0
pf_at 0x39a
l_loader_0000039a: jnz short 0x3d9
pf_at 0x39c
l_loader_0000039c: mov eax,[0x88e]
pf_at 0x3a0
l_loader_000003a0: cmp eax,0x300000
pf_at 0x3a6
l_loader_000003a6: ja short 0x3d9
pf_at 0x3a8
l_loader_000003a8: mov edx,[0x89a]
pf_at 0x3ad
l_loader_000003ad: test edx,edx
pf_at 0x3b0
l_loader_000003b0: jnz short 0x3be
pf_at 0x3b2
l_loader_000003b2: mov edx,[0x896]
pf_at 0x3b7
l_loader_000003b7: add edx,eax
pf_at 0x3ba
l_loader_000003ba: jc short 0x3be
pf_at 0x3bc
l_loader_000003bc: jmp short 0x3c4
pf_at 0x3be
l_loader_000003be: mov edx,0xffffffff
pf_at 0x3c4
l_loader_000003c4: cmp edx,0x300000
pf_at 0x3cb
l_loader_000003cb: jna short 0x3d9
pf_at 0x3cd
l_loader_000003cd: cmp edx,[0x838]
pf_at 0x3d2
l_loader_000003d2: jna short 0x3d9
pf_at 0x3d4
l_loader_000003d4: mov [0x838],edx
pf_at 0x3d9
l_loader_000003d9: mov ebx,[0x83c]
pf_at 0x3de
l_loader_000003de: test ebx,ebx
pf_at 0x3e1
l_loader_000003e1: jnz near 0x348
pf_at 0x3e5
l_loader_000003e5: mov eax,[0x838]
pf_at 0x3e9
l_loader_000003e9: cmp eax,0x300000
pf_at 0x3ef
l_loader_000003ef: jna short 0x3f8
pf_at 0x3f1
l_loader_000003f1: mov [0x834],eax
pf_at 0x3f5
l_loader_000003f5: clc
pf_at 0x3f6
l_loader_000003f6: jmp short 0x3f9
pf_at 0x3f8
l_loader_000003f8: stc
pf_at 0x3f9
l_loader_000003f9: pop di
pf_at 0x3fa
l_loader_000003fa: pop es
pf_at 0x3fb
l_loader_000003fb: pop ds
pf_at 0x3fc
l_loader_000003fc: pop dx
pf_at 0x3fd
l_loader_000003fd: pop cx
pf_at 0x3fe
l_loader_000003fe: pop ax
pf_at 0x3ff
l_loader_000003ff: ret
pf_at 0x400
l_loader_00000400: push ax
pf_at 0x401
l_loader_00000401: push bx
pf_at 0x402
l_loader_00000402: push cx
pf_at 0x403
l_loader_00000403: push dx
pf_at 0x404
l_loader_00000404: mov ax,0xe801
pf_at 0x407
l_loader_00000407: int 0x15
pf_at 0x409
l_loader_00000409: jc short 0x453
pf_at 0x40b
l_loader_0000040b: push ax
pf_at 0x40c
l_loader_0000040c: mov ax,cs
pf_at 0x40e
l_loader_0000040e: mov ds,ax
pf_at 0x410
l_loader_00000410: pop ax
pf_at 0x411
l_loader_00000411: mov di,ax
pf_at 0x413
l_loader_00000413: mov si,bx
pf_at 0x415
l_loader_00000415: or di,si
pf_at 0x417
l_loader_00000417: jnz short 0x41d
pf_at 0x419
l_loader_00000419: mov di,cx
pf_at 0x41b
l_loader_0000041b: mov si,dx
pf_at 0x41d
l_loader_0000041d: xor eax,eax
pf_at 0x420
l_loader_00000420: mov ax,di
pf_at 0x422
l_loader_00000422: shl eax,byte 0xa
pf_at 0x426
l_loader_00000426: add eax,0x100000
pf_at 0x42c
l_loader_0000042c: jc short 0x43e
pf_at 0x42e
l_loader_0000042e: xor edx,edx
pf_at 0x431
l_loader_00000431: mov dx,si
pf_at 0x433
l_loader_00000433: shl edx,byte 0x10
pf_at 0x437
l_loader_00000437: add eax,edx
pf_at 0x43a
l_loader_0000043a: jc short 0x43e
pf_at 0x43c
l_loader_0000043c: jmp short 0x444
pf_at 0x43e
l_loader_0000043e: mov eax,0xffffffff
pf_at 0x444
l_loader_00000444: cmp eax,0x300000
pf_at 0x44a
l_loader_0000044a: jna short 0x453
pf_at 0x44c
l_loader_0000044c: mov [0x834],eax
pf_at 0x450
l_loader_00000450: clc
pf_at 0x451
l_loader_00000451: jmp short 0x454
pf_at 0x453
l_loader_00000453: stc
pf_at 0x454
l_loader_00000454: pop dx
pf_at 0x455
l_loader_00000455: pop cx
pf_at 0x456
l_loader_00000456: pop bx
pf_at 0x457
l_loader_00000457: pop ax
pf_at 0x458
l_loader_00000458: ret
pf_at 0x459
l_loader_00000459: push ax
pf_at 0x45a
l_loader_0000045a: mov ax,0x8800
pf_at 0x45d
l_loader_0000045d: int 0x15
pf_at 0x45f
l_loader_0000045f: jc short 0x490
pf_at 0x461
l_loader_00000461: push ax
pf_at 0x462
l_loader_00000462: mov ax,cs
pf_at 0x464
l_loader_00000464: mov ds,ax
pf_at 0x466
l_loader_00000466: pop ax
pf_at 0x467
l_loader_00000467: and eax,0xffff
pf_at 0x46d
l_loader_0000046d: shl eax,byte 0xa
pf_at 0x471
l_loader_00000471: add eax,0x100000
pf_at 0x477
l_loader_00000477: jc short 0x47b
pf_at 0x479
l_loader_00000479: jmp short 0x481
pf_at 0x47b
l_loader_0000047b: mov eax,0xffffffff
pf_at 0x481
l_loader_00000481: cmp eax,0x300000
pf_at 0x487
l_loader_00000487: jna short 0x490
pf_at 0x489
l_loader_00000489: mov [0x834],eax
pf_at 0x48d
l_loader_0000048d: clc
pf_at 0x48e
l_loader_0000048e: jmp short 0x491
pf_at 0x490
l_loader_00000490: stc
pf_at 0x491
l_loader_00000491: pop ax
pf_at 0x492
l_loader_00000492: ret
pf_at 0x493
l_loader_00000493: push ax
pf_at 0x494
l_loader_00000494: push cx
pf_at 0x495
l_loader_00000495: push ds
pf_at 0x496
l_loader_00000496: push es
pf_at 0x497
l_loader_00000497: push di
pf_at 0x498
l_loader_00000498: mov ax,0x600
pf_at 0x49b
l_loader_0000049b: mov es,ax
pf_at 0x49d
l_loader_0000049d: xor di,di
pf_at 0x49f
l_loader_0000049f: xor ax,ax
pf_at 0x4a1
l_loader_000004a1: mov cx,0x46
pf_at 0x4a4
l_loader_000004a4: cld
pf_at 0x4a5
l_loader_000004a5: rep stosw
pf_at 0x4a7
l_loader_000004a7: mov ax,cs
pf_at 0x4a9
l_loader_000004a9: mov ds,ax
pf_at 0x4ab
l_loader_000004ab: xor eax,eax
pf_at 0x4ae
l_loader_000004ae: mov al,[0x810]
pf_at 0x4b1
l_loader_000004b1: mov [es:0x68],eax
pf_at 0x4b6
l_loader_000004b6: mov eax,[0x828]
pf_at 0x4ba
l_loader_000004ba: mov [es:0x70],eax
pf_at 0x4bf
l_loader_000004bf: xor eax,eax
pf_at 0x4c2
l_loader_000004c2: mov ax,[0x81b]
pf_at 0x4c5
l_loader_000004c5: mov [es:0x74],eax
pf_at 0x4ca
l_loader_000004ca: mov eax,[0x82c]
pf_at 0x4ce
l_loader_000004ce: mov [es:0x78],eax
pf_at 0x4d3
l_loader_000004d3: xor eax,eax
pf_at 0x4d6
l_loader_000004d6: mov ax,[0x819]
pf_at 0x4d9
l_loader_000004d9: mov [es:0x7c],eax
pf_at 0x4de
l_loader_000004de: xor eax,eax
pf_at 0x4e1
l_loader_000004e1: mov ax,[0x81d]
pf_at 0x4e4
l_loader_000004e4: mov [es:0x80],eax
pf_at 0x4e9
l_loader_000004e9: mov eax,[0x830]
pf_at 0x4ed
l_loader_000004ed: mov [es:0x84],eax
pf_at 0x4f2
l_loader_000004f2: mov eax,[0x834]
pf_at 0x4f6
l_loader_000004f6: mov [es:0x88],eax
pf_at 0x4fb
l_loader_000004fb: pop di
pf_at 0x4fc
l_loader_000004fc: pop es
pf_at 0x4fd
l_loader_000004fd: pop ds
pf_at 0x4fe
l_loader_000004fe: pop cx
pf_at 0x4ff
l_loader_000004ff: pop ax
pf_at 0x500
l_loader_00000500: ret
pf_at 0x501
l_loader_00000501: mov ax,0x3
pf_at 0x504
l_loader_00000504: int 0x10
pf_at 0x506
l_loader_00000506: ret
pf_at 0x507
l_loader_00000507: in al,0x92
pf_at 0x509
l_loader_00000509: or al,0x2
pf_at 0x50b
l_loader_0000050b: out 0x92,al
pf_at 0x50d
l_loader_0000050d: ret
pf_at 0x50e
l_loader_0000050e: mov esi,[0x840]
pf_at 0x513
l_loader_00000513: cli
pf_at 0x514
l_loader_00000514: xor eax,eax
pf_at 0x517
l_loader_00000517: mov ax,cs
pf_at 0x519
l_loader_00000519: mov ds,ax
pf_at 0x51b
l_loader_0000051b: shl eax,byte 0x4
pf_at 0x51f
l_loader_0000051f: lea bx,[0x740]
pf_at 0x523
l_loader_00000523: movzx edx,bx
pf_at 0x527
l_loader_00000527: add eax,edx
pf_at 0x52a
l_loader_0000052a: mov [0x75a],eax
pf_at 0x52e
l_loader_0000052e: xor eax,eax
pf_at 0x531
l_loader_00000531: mov ax,cs
pf_at 0x533
l_loader_00000533: shl eax,byte 0x4
pf_at 0x537
l_loader_00000537: lea bx,[0x725]
pf_at 0x53b
l_loader_0000053b: movzx edx,bx
pf_at 0x53f
l_loader_0000053f: add eax,edx
pf_at 0x542
l_loader_00000542: mov [0x557],eax
pf_at 0x546
l_loader_00000546: lgdt [0x758]
pf_at 0x54b
l_loader_0000054b: mov eax,cr0
pf_at 0x54e
l_loader_0000054e: or eax,byte +0x1
pf_at 0x552
l_loader_00000552: mov cr0,eax
pf_at 0x555
l_loader_00000555: jmp dword 0x8:0x0
pf_at 0x55d
l_loader_0000055d: ret
pf_at 0x55e
l_loader_0000055e: mov dword [0x864],0x0
pf_at 0x567
l_loader_00000567: cmp dword [0x85c],0x1ee
pf_at 0x570
l_loader_00000570: jc short 0x5da
pf_at 0x572
l_loader_00000572: push ds
pf_at 0x573
l_loader_00000573: push es
pf_at 0x574
l_loader_00000574: push si
pf_at 0x575
l_loader_00000575: push di
pf_at 0x576
l_loader_00000576: push cx
pf_at 0x577
l_loader_00000577: mov ax,0x5000
pf_at 0x57a
l_loader_0000057a: mov ds,ax
pf_at 0x57c
l_loader_0000057c: cmp word [0x0],0x5357
pf_at 0x582
l_loader_00000582: jnz short 0x5d5
pf_at 0x584
l_loader_00000584: cmp word [0x2],0x3154
pf_at 0x58a
l_loader_0000058a: jnz short 0x5d5
pf_at 0x58c
l_loader_0000058c: cmp word [0x4],byte +0x1
pf_at 0x591
l_loader_00000591: jnz short 0x5d5
pf_at 0x593
l_loader_00000593: cmp word [0x6],byte +0x0
pf_at 0x598
l_loader_00000598: jnz short 0x5d5
pf_at 0x59a
l_loader_0000059a: mov ax,cs
pf_at 0x59c
l_loader_0000059c: mov es,ax
pf_at 0x59e
l_loader_0000059e: lea di,[0x8a2]
pf_at 0x5a2
l_loader_000005a2: mov si,0x1ec
pf_at 0x5a5
l_loader_000005a5: mov cx,0xef
pf_at 0x5a8
l_loader_000005a8: cld
pf_at 0x5a9
l_loader_000005a9: lodsb
pf_at 0x5aa
l_loader_000005aa: stosb
pf_at 0x5ab
l_loader_000005ab: test al,al
pf_at 0x5ad
l_loader_000005ad: jz short 0x5b5
pf_at 0x5af
l_loader_000005af: loop 0x5a9
pf_at 0x5b1
l_loader_000005b1: mov byte [es:di],0x0
pf_at 0x5b5
l_loader_000005b5: pop cx
pf_at 0x5b6
l_loader_000005b6: pop di
pf_at 0x5b7
l_loader_000005b7: pop si
pf_at 0x5b8
l_loader_000005b8: pop es
pf_at 0x5b9
l_loader_000005b9: pop ds
pf_at 0x5ba
l_loader_000005ba: mov byte [0x813],0x0
pf_at 0x5bf
l_loader_000005bf: mov ax,0x6000
pf_at 0x5c2
l_loader_000005c2: lea si,[0x8a2]
pf_at 0x5c6
l_loader_000005c6: call 0x14a
pf_at 0x5c9
l_loader_000005c9: jc short 0x5da
pf_at 0x5cb
l_loader_000005cb: mov eax,[0x84c]
pf_at 0x5cf
l_loader_000005cf: mov [0x864],eax
pf_at 0x5d3
l_loader_000005d3: clc
pf_at 0x5d4
l_loader_000005d4: ret
pf_at 0x5d5
l_loader_000005d5: pop cx
pf_at 0x5d6
l_loader_000005d6: pop di
pf_at 0x5d7
l_loader_000005d7: pop si
pf_at 0x5d8
l_loader_000005d8: pop es
pf_at 0x5d9
l_loader_000005d9: pop ds
pf_at 0x5da
l_loader_000005da: stc
pf_at 0x5db
l_loader_000005db: ret
pf_at 0x5dc
l_loader_000005dc: push ax
pf_at 0x5dd
l_loader_000005dd: mov al,[si]
pf_at 0x5df
l_loader_000005df: cmp al,0x2f
pf_at 0x5e1
l_loader_000005e1: jnz short 0x5e6
pf_at 0x5e3
l_loader_000005e3: inc si
pf_at 0x5e4
l_loader_000005e4: jmp short 0x5dd
pf_at 0x5e6
l_loader_000005e6: mov al,[si]
pf_at 0x5e8
l_loader_000005e8: mov ah,[es:di]
pf_at 0x5eb
l_loader_000005eb: cmp al,ah
pf_at 0x5ed
l_loader_000005ed: jnz short 0x5fa
pf_at 0x5ef
l_loader_000005ef: cmp al,0x0
pf_at 0x5f1
l_loader_000005f1: jz short 0x5f7
pf_at 0x5f3
l_loader_000005f3: inc si
pf_at 0x5f4
l_loader_000005f4: inc di
pf_at 0x5f5
l_loader_000005f5: jmp short 0x5e6
pf_at 0x5f7
l_loader_000005f7: clc
pf_at 0x5f8
l_loader_000005f8: pop ax
pf_at 0x5f9
l_loader_000005f9: ret
pf_at 0x5fa
l_loader_000005fa: stc
pf_at 0x5fb
l_loader_000005fb: pop ax
pf_at 0x5fc
l_loader_000005fc: ret
pf_at 0x5fd
l_loader_000005fd: push ax
pf_at 0x5fe
l_loader_000005fe: mov ax,cs
pf_at 0x600
l_loader_00000600: mov ds,ax
pf_at 0x602
l_loader_00000602: pop ax
pf_at 0x603
l_loader_00000603: mov byte [0x813],0x0
pf_at 0x608
l_loader_00000608: call 0x68a
pf_at 0x60b
l_loader_0000060b: mov ah,0x42
pf_at 0x60d
l_loader_0000060d: int 0x13
pf_at 0x60f
l_loader_0000060f: call 0x6c6
pf_at 0x612
l_loader_00000612: jnc short 0x63a
pf_at 0x614
l_loader_00000614: mov [0x813],ah
pf_at 0x618
l_loader_00000618: xor ah,ah
pf_at 0x61a
l_loader_0000061a: mov dl,[0x810]
pf_at 0x61e
l_loader_0000061e: int 0x13
pf_at 0x620
l_loader_00000620: call 0x6c6
pf_at 0x623
l_loader_00000623: call 0x68a
pf_at 0x626
l_loader_00000626: mov ah,0x42
pf_at 0x628
l_loader_00000628: int 0x13
pf_at 0x62a
l_loader_0000062a: call 0x6c6
pf_at 0x62d
l_loader_0000062d: jnc short 0x63a
pf_at 0x62f
l_loader_0000062f: mov [0x813],ah
pf_at 0x633
l_loader_00000633: mov byte [0x812],0x44
pf_at 0x638
l_loader_00000638: stc
pf_at 0x639
l_loader_00000639: ret
pf_at 0x63a
l_loader_0000063a: clc
pf_at 0x63b
l_loader_0000063b: ret
pf_at 0x63c
l_loader_0000063c: cmp word [0x81f],byte +0x0
pf_at 0x641
l_loader_00000641: jz short 0x688
pf_at 0x643
l_loader_00000643: mov cx,0x1
pf_at 0x646
l_loader_00000646: mov ax,0x1000
pf_at 0x649
l_loader_00000649: mov es,ax
pf_at 0x64b
l_loader_0000064b: xor bx,bx
pf_at 0x64d
l_loader_0000064d: mov eax,[0x86c]
pf_at 0x651
l_loader_00000651: call 0x5fd
pf_at 0x654
l_loader_00000654: jc short 0x686
pf_at 0x656
l_loader_00000656: push ds
pf_at 0x657
l_loader_00000657: push es
pf_at 0x658
l_loader_00000658: push si
pf_at 0x659
l_loader_00000659: push di
pf_at 0x65a
l_loader_0000065a: push cx
pf_at 0x65b
l_loader_0000065b: mov ax,[0x821]
pf_at 0x65e
l_loader_0000065e: push ax
pf_at 0x65f
l_loader_0000065f: mov ax,0x1000
pf_at 0x662
l_loader_00000662: mov ds,ax
pf_at 0x664
l_loader_00000664: xor si,si
pf_at 0x666
l_loader_00000666: pop ax
pf_at 0x667
l_loader_00000667: mov es,ax
pf_at 0x669
l_loader_00000669: xor di,di
pf_at 0x66b
l_loader_0000066b: mov cx,0x100
pf_at 0x66e
l_loader_0000066e: cld
pf_at 0x66f
l_loader_0000066f: rep movsw
pf_at 0x671
l_loader_00000671: pop cx
pf_at 0x672
l_loader_00000672: pop di
pf_at 0x673
l_loader_00000673: pop si
pf_at 0x674
l_loader_00000674: pop es
pf_at 0x675
l_loader_00000675: pop ds
pf_at 0x676
l_loader_00000676: add word [0x821],byte +0x20
pf_at 0x67b
l_loader_0000067b: dec word [0x81f]
pf_at 0x67f
l_loader_0000067f: inc dword [0x86c]
pf_at 0x684
l_loader_00000684: jmp short 0x63c
pf_at 0x686
l_loader_00000686: stc
pf_at 0x687
l_loader_00000687: ret
pf_at 0x688
l_loader_00000688: clc
pf_at 0x689
l_loader_00000689: ret
pf_at 0x68a
l_loader_0000068a: mov [0x823],es
pf_at 0x68e
l_loader_0000068e: mov dl,[0x810]
pf_at 0x692
l_loader_00000692: mov di,0x1000
pf_at 0x695
l_loader_00000695: mov es,di
pf_at 0x697
l_loader_00000697: mov word [es:0x400],0x10
pf_at 0x69e
l_loader_0000069e: mov [es:0x402],cx
pf_at 0x6a3
l_loader_000006a3: mov [es:0x404],bx
pf_at 0x6a8
l_loader_000006a8: mov bp,[0x823]
pf_at 0x6ac
l_loader_000006ac: mov [es:0x406],bp
pf_at 0x6b1
l_loader_000006b1: mov [es:0x408],eax
pf_at 0x6b6
l_loader_000006b6: mov dword [es:0x40c],0x0
pf_at 0x6c0
l_loader_000006c0: mov ds,di
pf_at 0x6c2
l_loader_000006c2: mov si,0x400
pf_at 0x6c5
l_loader_000006c5: ret
pf_at 0x6c6
l_loader_000006c6: push ax
pf_at 0x6c7
l_loader_000006c7: mov ax,cs
pf_at 0x6c9
l_loader_000006c9: mov ds,ax
pf_at 0x6cb
l_loader_000006cb: mov ax,[0x823]
pf_at 0x6ce
l_loader_000006ce: mov es,ax
pf_at 0x6d0
l_loader_000006d0: pop ax
pf_at 0x6d1
l_loader_000006d1: ret
pf_at 0x6d2
l_loader_000006d2: push ax
pf_at 0x6d3
l_loader_000006d3: push bx
pf_at 0x6d4
l_loader_000006d4: push cx
pf_at 0x6d5
l_loader_000006d5: push dx
pf_at 0x6d6
l_loader_000006d6: push si
pf_at 0x6d7
l_loader_000006d7: push di
pf_at 0x6d8
l_loader_000006d8: push bp
pf_at 0x6d9
l_loader_000006d9: push ds
pf_at 0x6da
l_loader_000006da: push es
pf_at 0x6db
l_loader_000006db: mov ah,0xe
pf_at 0x6dd
l_loader_000006dd: mov bx,0x7
pf_at 0x6e0
l_loader_000006e0: int 0x10
pf_at 0x6e2
l_loader_000006e2: pop es
pf_at 0x6e3
l_loader_000006e3: pop ds
pf_at 0x6e4
l_loader_000006e4: pop bp
pf_at 0x6e5
l_loader_000006e5: pop di
pf_at 0x6e6
l_loader_000006e6: pop si
pf_at 0x6e7
l_loader_000006e7: pop dx
pf_at 0x6e8
l_loader_000006e8: pop cx
pf_at 0x6e9
l_loader_000006e9: pop bx
pf_at 0x6ea
l_loader_000006ea: pop ax
pf_at 0x6eb
l_loader_000006eb: ret
pf_at 0x6ec
l_loader_000006ec: cld
pf_at 0x6ed
l_loader_000006ed: lodsb
pf_at 0x6ee
l_loader_000006ee: test al,al
pf_at 0x6f0
l_loader_000006f0: jz short 0x6f7
pf_at 0x6f2
l_loader_000006f2: call 0x6d2
pf_at 0x6f5
l_loader_000006f5: jmp short 0x6ed
pf_at 0x6f7
l_loader_000006f7: ret
pf_at 0x6f8
l_loader_000006f8: and al,0xf
pf_at 0x6fa
l_loader_000006fa: cmp al,0x9
pf_at 0x6fc
l_loader_000006fc: jna short 0x702
pf_at 0x6fe
l_loader_000006fe: add al,0x37
pf_at 0x700
l_loader_00000700: jmp short 0x704
pf_at 0x702
l_loader_00000702: add al,0x30
pf_at 0x704
l_loader_00000704: call 0x6d2
pf_at 0x707
l_loader_00000707: ret
pf_at 0x708
l_loader_00000708: push ax
pf_at 0x709
l_loader_00000709: push bx
pf_at 0x70a
l_loader_0000070a: mov bl,al
pf_at 0x70c
l_loader_0000070c: shr al,byte 0x4
pf_at 0x70f
l_loader_0000070f: call 0x6f8
pf_at 0x712
l_loader_00000712: mov al,bl
pf_at 0x714
l_loader_00000714: call 0x6f8
pf_at 0x717
l_loader_00000717: pop bx
pf_at 0x718
l_loader_00000718: pop ax
pf_at 0x719
l_loader_00000719: ret
pf_at 0x71a
l_loader_0000071a: push ax
pf_at 0x71b
l_loader_0000071b: xchg ah,al
pf_at 0x71d
l_loader_0000071d: call 0x708
pf_at 0x720
l_loader_00000720: pop ax
pf_at 0x721
l_loader_00000721: call 0x708
pf_at 0x724
l_loader_00000724: ret

section part1 start=0x725 vstart=0x8725 align=1
bits 32
pf_at 0x0
l_loader_00008725: mov ax,0x10
pf_at 0x4
l_loader_00008729: o16 mov ds,ax
pf_at 0x7
l_loader_0000872c: o16 mov es,ax
pf_at 0xa
l_loader_0000872f: o16 mov fs,ax
pf_at 0xd
l_loader_00008732: o16 mov gs,ax
pf_at 0x10
l_loader_00008735: o16 mov ss,ax
pf_at 0x13
l_loader_00008738: mov esp,0x17f000
pf_at 0x18
l_loader_0000873d: cld
pf_at 0x19
l_loader_0000873e: jmp esi

section part2 start=0x740 vstart=0x0 align=1
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
    times 15 db 0
    db 0x04
    times 30664 db 0
