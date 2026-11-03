; Permafrost 0.2 — recovered assembly, Pooka's Free Software License.
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
l_loader_00000011: mov [0x988],dl
pf_at 0x15
l_loader_00000015: mov byte [0x989],0x3f
pf_at 0x1a
l_loader_0000001a: mov byte [0x98a],0x3f
pf_at 0x1f
l_loader_0000001f: mov byte [0x98b],0x0
pf_at 0x24
l_loader_00000024: lea si,[0x8ef]
pf_at 0x28
l_loader_00000028: call 0x860
pf_at 0x2b
l_loader_0000002b: mov byte [0x989],0x53
pf_at 0x30
l_loader_00000030: mov byte [0x98a],0x44
pf_at 0x35
l_loader_00000035: call 0xf1
pf_at 0x38
l_loader_00000038: jc short 0x83
pf_at 0x3a
l_loader_0000003a: mov byte [0x989],0x48
pf_at 0x3f
l_loader_0000003f: mov byte [0x98a],0x46
pf_at 0x44
l_loader_00000044: mov byte [0x98b],0x0
pf_at 0x49
l_loader_00000049: mov ax,0x2000
pf_at 0x4c
l_loader_0000004c: lea si,[0x8f4]
pf_at 0x50
l_loader_00000050: call 0x14a
pf_at 0x53
l_loader_00000053: jc short 0x83
pf_at 0x55
l_loader_00000055: mov byte [0x989],0x50
pf_at 0x5a
l_loader_0000005a: mov byte [0x98a],0x42
pf_at 0x5f
l_loader_0000005f: call 0x217
pf_at 0x62
l_loader_00000062: jc short 0x83
pf_at 0x64
l_loader_00000064: call 0x298
pf_at 0x67
l_loader_00000067: call 0x2f1
pf_at 0x6a
l_loader_0000006a: call 0x604
pf_at 0x6d
l_loader_0000006d: mov byte [0x989],0x54
pf_at 0x72
l_loader_00000072: mov byte [0x98a],0x4d
pf_at 0x77
l_loader_00000077: call 0x675
pf_at 0x7a
l_loader_0000007a: call 0x67b
pf_at 0x7d
l_loader_0000007d: call 0x682
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
l_loader_00000089: lea si,[0x8d6]
pf_at 0x8d
l_loader_0000008d: call 0x860
pf_at 0x90
l_loader_00000090: mov al,0x20
pf_at 0x92
l_loader_00000092: call 0x846
pf_at 0x95
l_loader_00000095: mov al,0x5b
pf_at 0x97
l_loader_00000097: call 0x846
pf_at 0x9a
l_loader_0000009a: mov al,[0x989]
pf_at 0x9d
l_loader_0000009d: call 0x846
pf_at 0xa0
l_loader_000000a0: mov al,0x3a
pf_at 0xa2
l_loader_000000a2: call 0x846
pf_at 0xa5
l_loader_000000a5: mov al,[0x98a]
pf_at 0xa8
l_loader_000000a8: call 0x846
pf_at 0xab
l_loader_000000ab: mov al,0x20
pf_at 0xad
l_loader_000000ad: call 0x846
pf_at 0xb0
l_loader_000000b0: mov al,[0x98b]
pf_at 0xb3
l_loader_000000b3: call 0x87c
pf_at 0xb6
l_loader_000000b6: cmp byte [0x98a],0x44
pf_at 0xbb
l_loader_000000bb: jnz short 0xe9
pf_at 0xbd
l_loader_000000bd: mov al,0x20
pf_at 0xbf
l_loader_000000bf: call 0x846
pf_at 0xc2
l_loader_000000c2: mov al,0x4c
pf_at 0xc4
l_loader_000000c4: call 0x846
pf_at 0xc7
l_loader_000000c7: push ax
pf_at 0xc8
l_loader_000000c8: mov ax,cs
pf_at 0xca
l_loader_000000ca: mov ds,ax
pf_at 0xcc
l_loader_000000cc: pop ax
pf_at 0xcd
l_loader_000000cd: mov ax,[0x9e4]
pf_at 0xd0
l_loader_000000d0: call 0x88e
pf_at 0xd3
l_loader_000000d3: mov al,0x20
pf_at 0xd5
l_loader_000000d5: call 0x846
pf_at 0xd8
l_loader_000000d8: mov al,0x53
pf_at 0xda
l_loader_000000da: call 0x846
pf_at 0xdd
l_loader_000000dd: push ax
pf_at 0xde
l_loader_000000de: mov ax,cs
pf_at 0xe0
l_loader_000000e0: mov ds,ax
pf_at 0xe2
l_loader_000000e2: pop ax
pf_at 0xe3
l_loader_000000e3: mov ax,[0x9e0]
pf_at 0xe6
l_loader_000000e6: call 0x88e
pf_at 0xe9
l_loader_000000e9: mov al,0x5d
pf_at 0xeb
l_loader_000000eb: call 0x846
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
l_loader_00000104: mov [0x9e4],eax
pf_at 0x108
l_loader_00000108: mov [0x9e0],eax
pf_at 0x10c
l_loader_0000010c: mov word [0x997],0x1
pf_at 0x112
l_loader_00000112: mov cx,0x1
pf_at 0x115
l_loader_00000115: call 0x771
pf_at 0x118
l_loader_00000118: jc short 0x149
pf_at 0x11a
l_loader_0000011a: mov ax,[es:0x10]
pf_at 0x11e
l_loader_0000011e: mov [0x991],ax
pf_at 0x121
l_loader_00000121: mov eax,[es:0x1c]
pf_at 0x126
l_loader_00000126: add eax,byte +0x41
pf_at 0x12a
l_loader_0000012a: mov [0x9a0],eax
pf_at 0x12e
l_loader_0000012e: mov ax,[es:0x20]
pf_at 0x132
l_loader_00000132: mov [0x993],ax
pf_at 0x135
l_loader_00000135: mov eax,[es:0x24]
pf_at 0x13a
l_loader_0000013a: add eax,byte +0x41
pf_at 0x13e
l_loader_0000013e: mov [0x9a4],eax
pf_at 0x142
l_loader_00000142: mov ax,[es:0x2c]
pf_at 0x146
l_loader_00000146: mov [0x995],ax
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
l_loader_00000150: mov [0x98d],ax
pf_at 0x153
l_loader_00000153: mov [0x98f],si
pf_at 0x157
l_loader_00000157: mov dx,[0x995]
pf_at 0x15b
l_loader_0000015b: xor bp,bp
pf_at 0x15d
l_loader_0000015d: cmp bp,[0x993]
pf_at 0x161
l_loader_00000161: jnc near 0x209
pf_at 0x165
l_loader_00000165: mov ax,0x1000
pf_at 0x168
l_loader_00000168: mov es,ax
pf_at 0x16a
l_loader_0000016a: xor bx,bx
pf_at 0x16c
l_loader_0000016c: mov eax,[0x9a0]
pf_at 0x170
l_loader_00000170: movzx ecx,bp
pf_at 0x174
l_loader_00000174: add eax,ecx
pf_at 0x177
l_loader_00000177: mov [0x9e4],eax
pf_at 0x17b
l_loader_0000017b: mov [0x9e0],eax
pf_at 0x17f
l_loader_0000017f: mov word [0x997],0x1
pf_at 0x185
l_loader_00000185: mov cx,0x1
pf_at 0x188
l_loader_00000188: push bp
pf_at 0x189
l_loader_00000189: push dx
pf_at 0x18a
l_loader_0000018a: call 0x771
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
l_loader_0000019c: mov si,[0x98f]
pf_at 0x1a0
l_loader_000001a0: mov di,bx
pf_at 0x1a2
l_loader_000001a2: call 0x750
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
l_loader_000001b8: mov [0x9c0],eax
pf_at 0x1bc
l_loader_000001bc: mov eax,[es:bx+0xf4]
pf_at 0x1c2
l_loader_000001c2: mov [0x9c4],eax
pf_at 0x1c6
l_loader_000001c6: mov eax,[0x9c4]
pf_at 0x1ca
l_loader_000001ca: add eax,0x1ff
pf_at 0x1d0
l_loader_000001d0: shr eax,byte 0x9
pf_at 0x1d4
l_loader_000001d4: mov cx,ax
pf_at 0x1d6
l_loader_000001d6: mov eax,[0x9c0]
pf_at 0x1da
l_loader_000001da: sub eax,byte +0x2
pf_at 0x1de
l_loader_000001de: movzx edx,word [0x991]
pf_at 0x1e4
l_loader_000001e4: imul eax,edx
pf_at 0x1e8
l_loader_000001e8: add eax,[0x9a4]
pf_at 0x1ed
l_loader_000001ed: mov [0x9e4],eax
pf_at 0x1f1
l_loader_000001f1: mov [0x9e0],eax
pf_at 0x1f5
l_loader_000001f5: mov [0x997],cx
pf_at 0x1f9
l_loader_000001f9: mov ax,[0x98d]
pf_at 0x1fc
l_loader_000001fc: mov [0x999],ax
pf_at 0x1ff
l_loader_000001ff: call 0x7b0
pf_at 0x202
l_loader_00000202: jc short 0x209
pf_at 0x204
l_loader_00000204: mov ax,[0x9c4]
pf_at 0x207
l_loader_00000207: clc
pf_at 0x208
l_loader_00000208: ret
pf_at 0x209
l_loader_00000209: cmp byte [0x98b],0x0
pf_at 0x20e
l_loader_0000020e: jnz short 0x215
pf_at 0x210
l_loader_00000210: mov byte [0x98a],0x46
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
l_loader_00000248: cmp eax,[0x9c4]
pf_at 0x24d
l_loader_0000024d: ja short 0x279
pf_at 0x24f
l_loader_0000024f: mov [0x9bc],eax
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
l_loader_0000026a: cmp edx,[0x9bc]
pf_at 0x26f
l_loader_0000026f: jnc short 0x279
pf_at 0x271
l_loader_00000271: mov [0x9b8],eax
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
l_loader_0000027d: mov byte [0x98a],0x42
pf_at 0x282
l_loader_00000282: mov dword [0x9b8],0x0
pf_at 0x28b
l_loader_0000028b: mov dword [0x9bc],0x0
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
l_loader_000002a4: lea di,[0x9e8]
pf_at 0x2a8
l_loader_000002a8: xor eax,eax
pf_at 0x2ab
l_loader_000002ab: mov cx,0xf
pf_at 0x2ae
l_loader_000002ae: cld
pf_at 0x2af
l_loader_000002af: rep stosw
pf_at 0x2b1
l_loader_000002b1: mov word [0x9e8],0x1e
pf_at 0x2b7
l_loader_000002b7: mov ah,0x48
pf_at 0x2b9
l_loader_000002b9: mov dl,[0x988]
pf_at 0x2bd
l_loader_000002bd: lea si,[0x9e8]
pf_at 0x2c1
l_loader_000002c1: int 0x13
pf_at 0x2c3
l_loader_000002c3: jc short 0x2e0
pf_at 0x2c5
l_loader_000002c5: mov eax,[0x9f8]
pf_at 0x2c9
l_loader_000002c9: mov edx,[0x9fc]
pf_at 0x2ce
l_loader_000002ce: test edx,edx
pf_at 0x2d1
l_loader_000002d1: jz short 0x2d9
pf_at 0x2d3
l_loader_000002d3: mov eax,0xffffffff
pf_at 0x2d9
l_loader_000002d9: mov [0x9a8],eax
pf_at 0x2dd
l_loader_000002dd: clc
pf_at 0x2de
l_loader_000002de: jmp short 0x2ea
pf_at 0x2e0
l_loader_000002e0: mov dword [0x9a8],0x0
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
l_loader_000002ff: mov dword [0x9ac],0x4000000
pf_at 0x308
l_loader_00000308: call 0x32a
pf_at 0x30b
l_loader_0000030b: jnc short 0x321
pf_at 0x30d
l_loader_0000030d: call 0x410
pf_at 0x310
l_loader_00000310: jnc short 0x321
pf_at 0x312
l_loader_00000312: call 0x469
pf_at 0x315
l_loader_00000315: jnc short 0x321
pf_at 0x317
l_loader_00000317: mov dword [0x9ac],0x4000000
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
l_loader_00000336: mov dword [0x9b4],0x0
pf_at 0x33f
l_loader_0000033f: mov dword [0x9b0],0x300000
pf_at 0x348
l_loader_00000348: mov eax,[0x9b0]
pf_at 0x34c
l_loader_0000034c: mov [0x9ac],eax
pf_at 0x350
l_loader_00000350: mov dword [0x9b4],0x0
pf_at 0x359
l_loader_00000359: lea di,[0xa06]
pf_at 0x35d
l_loader_0000035d: xor ax,ax
pf_at 0x35f
l_loader_0000035f: mov cx,0xa
pf_at 0x362
l_loader_00000362: cld
pf_at 0x363
l_loader_00000363: rep stosw
pf_at 0x365
l_loader_00000365: mov eax,0xe820
pf_at 0x36b
l_loader_0000036b: mov edx,0x534d4150
pf_at 0x371
l_loader_00000371: mov ecx,0x14
pf_at 0x377
l_loader_00000377: mov ebx,[0x9b4]
pf_at 0x37c
l_loader_0000037c: lea di,[0xa06]
pf_at 0x380
l_loader_00000380: int 0x15
pf_at 0x382
l_loader_00000382: jc near 0x408
pf_at 0x386
l_loader_00000386: push eax
pf_at 0x388
l_loader_00000388: mov ax,cs
pf_at 0x38a
l_loader_0000038a: mov ds,ax
pf_at 0x38c
l_loader_0000038c: mov es,ax
pf_at 0x38e
l_loader_0000038e: pop eax
pf_at 0x390
l_loader_00000390: cmp eax,0x534d4150
pf_at 0x396
l_loader_00000396: jnz short 0x408
pf_at 0x398
l_loader_00000398: mov [0x9b4],ebx
pf_at 0x39d
l_loader_0000039d: cmp dword [0xa16],byte +0x1
pf_at 0x3a3
l_loader_000003a3: jnz short 0x3e0
pf_at 0x3a5
l_loader_000003a5: cmp dword [0xa0a],byte +0x0
pf_at 0x3ab
l_loader_000003ab: jnz short 0x3e0
pf_at 0x3ad
l_loader_000003ad: mov eax,[0xa06]
pf_at 0x3b1
l_loader_000003b1: cmp eax,[0x9b0]
pf_at 0x3b6
l_loader_000003b6: ja short 0x3e0
pf_at 0x3b8
l_loader_000003b8: mov edx,[0xa12]
pf_at 0x3bd
l_loader_000003bd: test edx,edx
pf_at 0x3c0
l_loader_000003c0: jnz short 0x3ce
pf_at 0x3c2
l_loader_000003c2: mov edx,[0xa0e]
pf_at 0x3c7
l_loader_000003c7: add edx,eax
pf_at 0x3ca
l_loader_000003ca: jc short 0x3ce
pf_at 0x3cc
l_loader_000003cc: jmp short 0x3d4
pf_at 0x3ce
l_loader_000003ce: mov edx,0xffffffff
pf_at 0x3d4
l_loader_000003d4: cmp edx,[0x9b0]
pf_at 0x3d9
l_loader_000003d9: jna short 0x3e0
pf_at 0x3db
l_loader_000003db: mov [0x9b0],edx
pf_at 0x3e0
l_loader_000003e0: mov ebx,[0x9b4]
pf_at 0x3e5
l_loader_000003e5: test ebx,ebx
pf_at 0x3e8
l_loader_000003e8: jnz near 0x359
pf_at 0x3ec
l_loader_000003ec: mov eax,[0x9b0]
pf_at 0x3f0
l_loader_000003f0: cmp eax,[0x9ac]
pf_at 0x3f5
l_loader_000003f5: ja near 0x348
pf_at 0x3f9
l_loader_000003f9: cmp eax,0x300000
pf_at 0x3ff
l_loader_000003ff: jna short 0x408
pf_at 0x401
l_loader_00000401: mov [0x9ac],eax
pf_at 0x405
l_loader_00000405: clc
pf_at 0x406
l_loader_00000406: jmp short 0x409
pf_at 0x408
l_loader_00000408: stc
pf_at 0x409
l_loader_00000409: pop di
pf_at 0x40a
l_loader_0000040a: pop es
pf_at 0x40b
l_loader_0000040b: pop ds
pf_at 0x40c
l_loader_0000040c: pop dx
pf_at 0x40d
l_loader_0000040d: pop cx
pf_at 0x40e
l_loader_0000040e: pop ax
pf_at 0x40f
l_loader_0000040f: ret
pf_at 0x410
l_loader_00000410: push ax
pf_at 0x411
l_loader_00000411: push bx
pf_at 0x412
l_loader_00000412: push cx
pf_at 0x413
l_loader_00000413: push dx
pf_at 0x414
l_loader_00000414: mov ax,0xe801
pf_at 0x417
l_loader_00000417: int 0x15
pf_at 0x419
l_loader_00000419: jc short 0x463
pf_at 0x41b
l_loader_0000041b: push ax
pf_at 0x41c
l_loader_0000041c: mov ax,cs
pf_at 0x41e
l_loader_0000041e: mov ds,ax
pf_at 0x420
l_loader_00000420: pop ax
pf_at 0x421
l_loader_00000421: mov di,ax
pf_at 0x423
l_loader_00000423: mov si,bx
pf_at 0x425
l_loader_00000425: or di,si
pf_at 0x427
l_loader_00000427: jnz short 0x42d
pf_at 0x429
l_loader_00000429: mov di,cx
pf_at 0x42b
l_loader_0000042b: mov si,dx
pf_at 0x42d
l_loader_0000042d: xor eax,eax
pf_at 0x430
l_loader_00000430: mov ax,di
pf_at 0x432
l_loader_00000432: shl eax,byte 0xa
pf_at 0x436
l_loader_00000436: add eax,0x100000
pf_at 0x43c
l_loader_0000043c: jc short 0x44e
pf_at 0x43e
l_loader_0000043e: xor edx,edx
pf_at 0x441
l_loader_00000441: mov dx,si
pf_at 0x443
l_loader_00000443: shl edx,byte 0x10
pf_at 0x447
l_loader_00000447: add eax,edx
pf_at 0x44a
l_loader_0000044a: jc short 0x44e
pf_at 0x44c
l_loader_0000044c: jmp short 0x454
pf_at 0x44e
l_loader_0000044e: mov eax,0xffffffff
pf_at 0x454
l_loader_00000454: cmp eax,0x300000
pf_at 0x45a
l_loader_0000045a: jna short 0x463
pf_at 0x45c
l_loader_0000045c: mov [0x9ac],eax
pf_at 0x460
l_loader_00000460: clc
pf_at 0x461
l_loader_00000461: jmp short 0x464
pf_at 0x463
l_loader_00000463: stc
pf_at 0x464
l_loader_00000464: pop dx
pf_at 0x465
l_loader_00000465: pop cx
pf_at 0x466
l_loader_00000466: pop bx
pf_at 0x467
l_loader_00000467: pop ax
pf_at 0x468
l_loader_00000468: ret
pf_at 0x469
l_loader_00000469: push ax
pf_at 0x46a
l_loader_0000046a: mov ax,0x8800
pf_at 0x46d
l_loader_0000046d: int 0x15
pf_at 0x46f
l_loader_0000046f: jc short 0x4a0
pf_at 0x471
l_loader_00000471: push ax
pf_at 0x472
l_loader_00000472: mov ax,cs
pf_at 0x474
l_loader_00000474: mov ds,ax
pf_at 0x476
l_loader_00000476: pop ax
pf_at 0x477
l_loader_00000477: and eax,0xffff
pf_at 0x47d
l_loader_0000047d: shl eax,byte 0xa
pf_at 0x481
l_loader_00000481: add eax,0x100000
pf_at 0x487
l_loader_00000487: jc short 0x48b
pf_at 0x489
l_loader_00000489: jmp short 0x491
pf_at 0x48b
l_loader_0000048b: mov eax,0xffffffff
pf_at 0x491
l_loader_00000491: cmp eax,0x300000
pf_at 0x497
l_loader_00000497: jna short 0x4a0
pf_at 0x499
l_loader_00000499: mov [0x9ac],eax
pf_at 0x49d
l_loader_0000049d: clc
pf_at 0x49e
l_loader_0000049e: jmp short 0x4a1
pf_at 0x4a0
l_loader_000004a0: stc
pf_at 0x4a1
l_loader_000004a1: pop ax
pf_at 0x4a2
l_loader_000004a2: ret
pf_at 0x4a3
l_loader_000004a3: push ax
pf_at 0x4a4
l_loader_000004a4: push bx
pf_at 0x4a5
l_loader_000004a5: push cx
pf_at 0x4a6
l_loader_000004a6: push dx
pf_at 0x4a7
l_loader_000004a7: push ds
pf_at 0x4a8
l_loader_000004a8: push es
pf_at 0x4a9
l_loader_000004a9: push si
pf_at 0x4aa
l_loader_000004aa: push di
pf_at 0x4ab
l_loader_000004ab: push bp
pf_at 0x4ac
l_loader_000004ac: mov ax,cs
pf_at 0x4ae
l_loader_000004ae: mov ds,ax
pf_at 0x4b0
l_loader_000004b0: mov ax,0x600
pf_at 0x4b3
l_loader_000004b3: mov es,ax
pf_at 0x4b5
l_loader_000004b5: mov dword [es:0x8c],0x0
pf_at 0x4bf
l_loader_000004bf: mov dword [es:0x110],0x0
pf_at 0x4c9
l_loader_000004c9: mov dword [es:0x114],0x0
pf_at 0x4d3
l_loader_000004d3: mov dword [0x9b4],0x0
pf_at 0x4dc
l_loader_000004dc: mov ax,cs
pf_at 0x4de
l_loader_000004de: mov es,ax
pf_at 0x4e0
l_loader_000004e0: lea di,[0xa06]
pf_at 0x4e4
l_loader_000004e4: xor ax,ax
pf_at 0x4e6
l_loader_000004e6: mov cx,0xa
pf_at 0x4e9
l_loader_000004e9: cld
pf_at 0x4ea
l_loader_000004ea: rep stosw
pf_at 0x4ec
l_loader_000004ec: mov eax,0xe820
pf_at 0x4f2
l_loader_000004f2: mov edx,0x534d4150
pf_at 0x4f8
l_loader_000004f8: mov ecx,0x14
pf_at 0x4fe
l_loader_000004fe: mov ebx,[0x9b4]
pf_at 0x503
l_loader_00000503: lea di,[0xa06]
pf_at 0x507
l_loader_00000507: int 0x15
pf_at 0x509
l_loader_00000509: push eax
pf_at 0x50b
l_loader_0000050b: mov ax,cs
pf_at 0x50d
l_loader_0000050d: mov ds,ax
pf_at 0x50f
l_loader_0000050f: mov ax,0x600
pf_at 0x512
l_loader_00000512: mov es,ax
pf_at 0x514
l_loader_00000514: pop eax
pf_at 0x516
l_loader_00000516: jc near 0x5c6
pf_at 0x51a
l_loader_0000051a: cmp eax,0x534d4150
pf_at 0x520
l_loader_00000520: jnz near 0x5c6
pf_at 0x524
l_loader_00000524: mov [0x9b4],ebx
pf_at 0x529
l_loader_00000529: cmp dword [0xa16],byte +0x1
pf_at 0x52f
l_loader_0000052f: jnz near 0x5ba
pf_at 0x533
l_loader_00000533: mov eax,[0xa0e]
pf_at 0x537
l_loader_00000537: mov edx,[0xa12]
pf_at 0x53c
l_loader_0000053c: add [es:0x110],eax
pf_at 0x542
l_loader_00000542: adc [es:0x114],edx
pf_at 0x548
l_loader_00000548: cmp dword [0xa0a],byte +0x0
pf_at 0x54e
l_loader_0000054e: jnz short 0x5ba
pf_at 0x550
l_loader_00000550: mov eax,[0xa06]
pf_at 0x554
l_loader_00000554: mov ebp,eax
pf_at 0x557
l_loader_00000557: cmp ebp,0x300000
pf_at 0x55e
l_loader_0000055e: jnc short 0x566
pf_at 0x560
l_loader_00000560: mov ebp,0x300000
pf_at 0x566
l_loader_00000566: mov ecx,[0xa0e]
pf_at 0x56b
l_loader_0000056b: mov edx,[0xa12]
pf_at 0x570
l_loader_00000570: test edx,edx
pf_at 0x573
l_loader_00000573: jnz short 0x587
pf_at 0x575
l_loader_00000575: mov esi,eax
pf_at 0x578
l_loader_00000578: add esi,ecx
pf_at 0x57b
l_loader_0000057b: jc short 0x587
pf_at 0x57d
l_loader_0000057d: cmp esi,ebp
pf_at 0x580
l_loader_00000580: jna short 0x5ba
pf_at 0x582
l_loader_00000582: sub esi,ebp
pf_at 0x585
l_loader_00000585: jmp short 0x596
pf_at 0x587
l_loader_00000587: mov esi,0xffffffff
pf_at 0x58d
l_loader_0000058d: sub esi,ebp
pf_at 0x590
l_loader_00000590: add esi,byte +0x1
pf_at 0x594
l_loader_00000594: jz short 0x5ba
pf_at 0x596
l_loader_00000596: mov eax,[es:0x8c]
pf_at 0x59b
l_loader_0000059b: cmp eax,byte +0x10
pf_at 0x59f
l_loader_0000059f: jnc short 0x5ba
pf_at 0x5a1
l_loader_000005a1: shl eax,byte 0x3
pf_at 0x5a5
l_loader_000005a5: mov di,ax
pf_at 0x5a7
l_loader_000005a7: add di,0x90
pf_at 0x5ab
l_loader_000005ab: mov [es:di],ebp
pf_at 0x5af
l_loader_000005af: mov [es:di+0x4],esi
pf_at 0x5b4
l_loader_000005b4: inc dword [es:0x8c]
pf_at 0x5ba
l_loader_000005ba: mov ebx,[0x9b4]
pf_at 0x5bf
l_loader_000005bf: test ebx,ebx
pf_at 0x5c2
l_loader_000005c2: jnz near 0x4dc
pf_at 0x5c6
l_loader_000005c6: cmp dword [es:0x8c],byte +0x0
pf_at 0x5cd
l_loader_000005cd: jnz short 0x5fa
pf_at 0x5cf
l_loader_000005cf: mov eax,[0x9ac]
pf_at 0x5d3
l_loader_000005d3: cmp eax,0x300000
pf_at 0x5d9
l_loader_000005d9: jna short 0x5fa
pf_at 0x5db
l_loader_000005db: mov dword [es:0x90],0x300000
pf_at 0x5e5
l_loader_000005e5: sub eax,0x300000
pf_at 0x5eb
l_loader_000005eb: mov [es:0x94],eax
pf_at 0x5f0
l_loader_000005f0: mov dword [es:0x8c],0x1
pf_at 0x5fa
l_loader_000005fa: pop bp
pf_at 0x5fb
l_loader_000005fb: pop di
pf_at 0x5fc
l_loader_000005fc: pop si
pf_at 0x5fd
l_loader_000005fd: pop es
pf_at 0x5fe
l_loader_000005fe: pop ds
pf_at 0x5ff
l_loader_000005ff: pop dx
pf_at 0x600
l_loader_00000600: pop cx
pf_at 0x601
l_loader_00000601: pop bx
pf_at 0x602
l_loader_00000602: pop ax
pf_at 0x603
l_loader_00000603: ret
pf_at 0x604
l_loader_00000604: push ax
pf_at 0x605
l_loader_00000605: push cx
pf_at 0x606
l_loader_00000606: push ds
pf_at 0x607
l_loader_00000607: push es
pf_at 0x608
l_loader_00000608: push di
pf_at 0x609
l_loader_00000609: mov ax,0x600
pf_at 0x60c
l_loader_0000060c: mov es,ax
pf_at 0x60e
l_loader_0000060e: xor di,di
pf_at 0x610
l_loader_00000610: xor ax,ax
pf_at 0x612
l_loader_00000612: mov cx,0x8c
pf_at 0x615
l_loader_00000615: cld
pf_at 0x616
l_loader_00000616: rep stosw
pf_at 0x618
l_loader_00000618: mov ax,cs
pf_at 0x61a
l_loader_0000061a: mov ds,ax
pf_at 0x61c
l_loader_0000061c: xor eax,eax
pf_at 0x61f
l_loader_0000061f: mov al,[0x988]
pf_at 0x622
l_loader_00000622: mov [es:0x68],eax
pf_at 0x627
l_loader_00000627: mov eax,[0x9a0]
pf_at 0x62b
l_loader_0000062b: mov [es:0x70],eax
pf_at 0x630
l_loader_00000630: xor eax,eax
pf_at 0x633
l_loader_00000633: mov ax,[0x993]
pf_at 0x636
l_loader_00000636: mov [es:0x74],eax
pf_at 0x63b
l_loader_0000063b: mov eax,[0x9a4]
pf_at 0x63f
l_loader_0000063f: mov [es:0x78],eax
pf_at 0x644
l_loader_00000644: xor eax,eax
pf_at 0x647
l_loader_00000647: mov ax,[0x991]
pf_at 0x64a
l_loader_0000064a: mov [es:0x7c],eax
pf_at 0x64f
l_loader_0000064f: xor eax,eax
pf_at 0x652
l_loader_00000652: mov ax,[0x995]
pf_at 0x655
l_loader_00000655: mov [es:0x80],eax
pf_at 0x65a
l_loader_0000065a: mov eax,[0x9a8]
pf_at 0x65e
l_loader_0000065e: mov [es:0x84],eax
pf_at 0x663
l_loader_00000663: mov eax,[0x9ac]
pf_at 0x667
l_loader_00000667: mov [es:0x88],eax
pf_at 0x66c
l_loader_0000066c: call 0x4a3
pf_at 0x66f
l_loader_0000066f: pop di
pf_at 0x670
l_loader_00000670: pop es
pf_at 0x671
l_loader_00000671: pop ds
pf_at 0x672
l_loader_00000672: pop cx
pf_at 0x673
l_loader_00000673: pop ax
pf_at 0x674
l_loader_00000674: ret
pf_at 0x675
l_loader_00000675: mov ax,0x3
pf_at 0x678
l_loader_00000678: int 0x10
pf_at 0x67a
l_loader_0000067a: ret
pf_at 0x67b
l_loader_0000067b: in al,0x92
pf_at 0x67d
l_loader_0000067d: or al,0x2
pf_at 0x67f
l_loader_0000067f: out 0x92,al
pf_at 0x681
l_loader_00000681: ret
pf_at 0x682
l_loader_00000682: mov esi,[0x9b8]
pf_at 0x687
l_loader_00000687: cli
pf_at 0x688
l_loader_00000688: xor eax,eax
pf_at 0x68b
l_loader_0000068b: mov ax,cs
pf_at 0x68d
l_loader_0000068d: mov ds,ax
pf_at 0x68f
l_loader_0000068f: shl eax,byte 0x4
pf_at 0x693
l_loader_00000693: lea bx,[0x8b8]
pf_at 0x697
l_loader_00000697: movzx edx,bx
pf_at 0x69b
l_loader_0000069b: add eax,edx
pf_at 0x69e
l_loader_0000069e: mov [0x8d2],eax
pf_at 0x6a2
l_loader_000006a2: xor eax,eax
pf_at 0x6a5
l_loader_000006a5: mov ax,cs
pf_at 0x6a7
l_loader_000006a7: shl eax,byte 0x4
pf_at 0x6ab
l_loader_000006ab: lea bx,[0x899]
pf_at 0x6af
l_loader_000006af: movzx edx,bx
pf_at 0x6b3
l_loader_000006b3: add eax,edx
pf_at 0x6b6
l_loader_000006b6: mov [0x6cb],eax
pf_at 0x6ba
l_loader_000006ba: lgdt [0x8d0]
pf_at 0x6bf
l_loader_000006bf: mov eax,cr0
pf_at 0x6c2
l_loader_000006c2: or eax,byte +0x1
pf_at 0x6c6
l_loader_000006c6: mov cr0,eax
pf_at 0x6c9
l_loader_000006c9: jmp dword 0x8:0x0
pf_at 0x6d1
l_loader_000006d1: ret
pf_at 0x6d2
l_loader_000006d2: mov dword [0x9dc],0x0
pf_at 0x6db
l_loader_000006db: cmp dword [0x9d4],0x1ee
pf_at 0x6e4
l_loader_000006e4: jc short 0x74e
pf_at 0x6e6
l_loader_000006e6: push ds
pf_at 0x6e7
l_loader_000006e7: push es
pf_at 0x6e8
l_loader_000006e8: push si
pf_at 0x6e9
l_loader_000006e9: push di
pf_at 0x6ea
l_loader_000006ea: push cx
pf_at 0x6eb
l_loader_000006eb: mov ax,0x5000
pf_at 0x6ee
l_loader_000006ee: mov ds,ax
pf_at 0x6f0
l_loader_000006f0: cmp word [0x0],0x5357
pf_at 0x6f6
l_loader_000006f6: jnz short 0x749
pf_at 0x6f8
l_loader_000006f8: cmp word [0x2],0x3154
pf_at 0x6fe
l_loader_000006fe: jnz short 0x749
pf_at 0x700
l_loader_00000700: cmp word [0x4],byte +0x1
pf_at 0x705
l_loader_00000705: jnz short 0x749
pf_at 0x707
l_loader_00000707: cmp word [0x6],byte +0x0
pf_at 0x70c
l_loader_0000070c: jnz short 0x749
pf_at 0x70e
l_loader_0000070e: mov ax,cs
pf_at 0x710
l_loader_00000710: mov es,ax
pf_at 0x712
l_loader_00000712: lea di,[0xa1a]
pf_at 0x716
l_loader_00000716: mov si,0x1ec
pf_at 0x719
l_loader_00000719: mov cx,0xef
pf_at 0x71c
l_loader_0000071c: cld
pf_at 0x71d
l_loader_0000071d: lodsb
pf_at 0x71e
l_loader_0000071e: stosb
pf_at 0x71f
l_loader_0000071f: test al,al
pf_at 0x721
l_loader_00000721: jz short 0x729
pf_at 0x723
l_loader_00000723: loop 0x71d
pf_at 0x725
l_loader_00000725: mov byte [es:di],0x0
pf_at 0x729
l_loader_00000729: pop cx
pf_at 0x72a
l_loader_0000072a: pop di
pf_at 0x72b
l_loader_0000072b: pop si
pf_at 0x72c
l_loader_0000072c: pop es
pf_at 0x72d
l_loader_0000072d: pop ds
pf_at 0x72e
l_loader_0000072e: mov byte [0x98b],0x0
pf_at 0x733
l_loader_00000733: mov ax,0x6000
pf_at 0x736
l_loader_00000736: lea si,[0xa1a]
pf_at 0x73a
l_loader_0000073a: call 0x14a
pf_at 0x73d
l_loader_0000073d: jc short 0x74e
pf_at 0x73f
l_loader_0000073f: mov eax,[0x9c4]
pf_at 0x743
l_loader_00000743: mov [0x9dc],eax
pf_at 0x747
l_loader_00000747: clc
pf_at 0x748
l_loader_00000748: ret
pf_at 0x749
l_loader_00000749: pop cx
pf_at 0x74a
l_loader_0000074a: pop di
pf_at 0x74b
l_loader_0000074b: pop si
pf_at 0x74c
l_loader_0000074c: pop es
pf_at 0x74d
l_loader_0000074d: pop ds
pf_at 0x74e
l_loader_0000074e: stc
pf_at 0x74f
l_loader_0000074f: ret
pf_at 0x750
l_loader_00000750: push ax
pf_at 0x751
l_loader_00000751: mov al,[si]
pf_at 0x753
l_loader_00000753: cmp al,0x2f
pf_at 0x755
l_loader_00000755: jnz short 0x75a
pf_at 0x757
l_loader_00000757: inc si
pf_at 0x758
l_loader_00000758: jmp short 0x751
pf_at 0x75a
l_loader_0000075a: mov al,[si]
pf_at 0x75c
l_loader_0000075c: mov ah,[es:di]
pf_at 0x75f
l_loader_0000075f: cmp al,ah
pf_at 0x761
l_loader_00000761: jnz short 0x76e
pf_at 0x763
l_loader_00000763: cmp al,0x0
pf_at 0x765
l_loader_00000765: jz short 0x76b
pf_at 0x767
l_loader_00000767: inc si
pf_at 0x768
l_loader_00000768: inc di
pf_at 0x769
l_loader_00000769: jmp short 0x75a
pf_at 0x76b
l_loader_0000076b: clc
pf_at 0x76c
l_loader_0000076c: pop ax
pf_at 0x76d
l_loader_0000076d: ret
pf_at 0x76e
l_loader_0000076e: stc
pf_at 0x76f
l_loader_0000076f: pop ax
pf_at 0x770
l_loader_00000770: ret
pf_at 0x771
l_loader_00000771: push ax
pf_at 0x772
l_loader_00000772: mov ax,cs
pf_at 0x774
l_loader_00000774: mov ds,ax
pf_at 0x776
l_loader_00000776: pop ax
pf_at 0x777
l_loader_00000777: mov byte [0x98b],0x0
pf_at 0x77c
l_loader_0000077c: call 0x7fe
pf_at 0x77f
l_loader_0000077f: mov ah,0x42
pf_at 0x781
l_loader_00000781: int 0x13
pf_at 0x783
l_loader_00000783: call 0x83a
pf_at 0x786
l_loader_00000786: jnc short 0x7ae
pf_at 0x788
l_loader_00000788: mov [0x98b],ah
pf_at 0x78c
l_loader_0000078c: xor ah,ah
pf_at 0x78e
l_loader_0000078e: mov dl,[0x988]
pf_at 0x792
l_loader_00000792: int 0x13
pf_at 0x794
l_loader_00000794: call 0x83a
pf_at 0x797
l_loader_00000797: call 0x7fe
pf_at 0x79a
l_loader_0000079a: mov ah,0x42
pf_at 0x79c
l_loader_0000079c: int 0x13
pf_at 0x79e
l_loader_0000079e: call 0x83a
pf_at 0x7a1
l_loader_000007a1: jnc short 0x7ae
pf_at 0x7a3
l_loader_000007a3: mov [0x98b],ah
pf_at 0x7a7
l_loader_000007a7: mov byte [0x98a],0x44
pf_at 0x7ac
l_loader_000007ac: stc
pf_at 0x7ad
l_loader_000007ad: ret
pf_at 0x7ae
l_loader_000007ae: clc
pf_at 0x7af
l_loader_000007af: ret
pf_at 0x7b0
l_loader_000007b0: cmp word [0x997],byte +0x0
pf_at 0x7b5
l_loader_000007b5: jz short 0x7fc
pf_at 0x7b7
l_loader_000007b7: mov cx,0x1
pf_at 0x7ba
l_loader_000007ba: mov ax,0x1000
pf_at 0x7bd
l_loader_000007bd: mov es,ax
pf_at 0x7bf
l_loader_000007bf: xor bx,bx
pf_at 0x7c1
l_loader_000007c1: mov eax,[0x9e4]
pf_at 0x7c5
l_loader_000007c5: call 0x771
pf_at 0x7c8
l_loader_000007c8: jc short 0x7fa
pf_at 0x7ca
l_loader_000007ca: push ds
pf_at 0x7cb
l_loader_000007cb: push es
pf_at 0x7cc
l_loader_000007cc: push si
pf_at 0x7cd
l_loader_000007cd: push di
pf_at 0x7ce
l_loader_000007ce: push cx
pf_at 0x7cf
l_loader_000007cf: mov ax,[0x999]
pf_at 0x7d2
l_loader_000007d2: push ax
pf_at 0x7d3
l_loader_000007d3: mov ax,0x1000
pf_at 0x7d6
l_loader_000007d6: mov ds,ax
pf_at 0x7d8
l_loader_000007d8: xor si,si
pf_at 0x7da
l_loader_000007da: pop ax
pf_at 0x7db
l_loader_000007db: mov es,ax
pf_at 0x7dd
l_loader_000007dd: xor di,di
pf_at 0x7df
l_loader_000007df: mov cx,0x100
pf_at 0x7e2
l_loader_000007e2: cld
pf_at 0x7e3
l_loader_000007e3: rep movsw
pf_at 0x7e5
l_loader_000007e5: pop cx
pf_at 0x7e6
l_loader_000007e6: pop di
pf_at 0x7e7
l_loader_000007e7: pop si
pf_at 0x7e8
l_loader_000007e8: pop es
pf_at 0x7e9
l_loader_000007e9: pop ds
pf_at 0x7ea
l_loader_000007ea: add word [0x999],byte +0x20
pf_at 0x7ef
l_loader_000007ef: dec word [0x997]
pf_at 0x7f3
l_loader_000007f3: inc dword [0x9e4]
pf_at 0x7f8
l_loader_000007f8: jmp short 0x7b0
pf_at 0x7fa
l_loader_000007fa: stc
pf_at 0x7fb
l_loader_000007fb: ret
pf_at 0x7fc
l_loader_000007fc: clc
pf_at 0x7fd
l_loader_000007fd: ret
pf_at 0x7fe
l_loader_000007fe: mov [0x99b],es
pf_at 0x802
l_loader_00000802: mov dl,[0x988]
pf_at 0x806
l_loader_00000806: mov di,0x1000
pf_at 0x809
l_loader_00000809: mov es,di
pf_at 0x80b
l_loader_0000080b: mov word [es:0x400],0x10
pf_at 0x812
l_loader_00000812: mov [es:0x402],cx
pf_at 0x817
l_loader_00000817: mov [es:0x404],bx
pf_at 0x81c
l_loader_0000081c: mov bp,[0x99b]
pf_at 0x820
l_loader_00000820: mov [es:0x406],bp
pf_at 0x825
l_loader_00000825: mov [es:0x408],eax
pf_at 0x82a
l_loader_0000082a: mov dword [es:0x40c],0x0
pf_at 0x834
l_loader_00000834: mov ds,di
pf_at 0x836
l_loader_00000836: mov si,0x400
pf_at 0x839
l_loader_00000839: ret
pf_at 0x83a
l_loader_0000083a: push ax
pf_at 0x83b
l_loader_0000083b: mov ax,cs
pf_at 0x83d
l_loader_0000083d: mov ds,ax
pf_at 0x83f
l_loader_0000083f: mov ax,[0x99b]
pf_at 0x842
l_loader_00000842: mov es,ax
pf_at 0x844
l_loader_00000844: pop ax
pf_at 0x845
l_loader_00000845: ret
pf_at 0x846
l_loader_00000846: push ax
pf_at 0x847
l_loader_00000847: push bx
pf_at 0x848
l_loader_00000848: push cx
pf_at 0x849
l_loader_00000849: push dx
pf_at 0x84a
l_loader_0000084a: push si
pf_at 0x84b
l_loader_0000084b: push di
pf_at 0x84c
l_loader_0000084c: push bp
pf_at 0x84d
l_loader_0000084d: push ds
pf_at 0x84e
l_loader_0000084e: push es
pf_at 0x84f
l_loader_0000084f: mov ah,0xe
pf_at 0x851
l_loader_00000851: mov bx,0x7
pf_at 0x854
l_loader_00000854: int 0x10
pf_at 0x856
l_loader_00000856: pop es
pf_at 0x857
l_loader_00000857: pop ds
pf_at 0x858
l_loader_00000858: pop bp
pf_at 0x859
l_loader_00000859: pop di
pf_at 0x85a
l_loader_0000085a: pop si
pf_at 0x85b
l_loader_0000085b: pop dx
pf_at 0x85c
l_loader_0000085c: pop cx
pf_at 0x85d
l_loader_0000085d: pop bx
pf_at 0x85e
l_loader_0000085e: pop ax
pf_at 0x85f
l_loader_0000085f: ret
pf_at 0x860
l_loader_00000860: cld
pf_at 0x861
l_loader_00000861: lodsb
pf_at 0x862
l_loader_00000862: test al,al
pf_at 0x864
l_loader_00000864: jz short 0x86b
pf_at 0x866
l_loader_00000866: call 0x846
pf_at 0x869
l_loader_00000869: jmp short 0x861
pf_at 0x86b
l_loader_0000086b: ret
pf_at 0x86c
l_loader_0000086c: and al,0xf
pf_at 0x86e
l_loader_0000086e: cmp al,0x9
pf_at 0x870
l_loader_00000870: jna short 0x876
pf_at 0x872
l_loader_00000872: add al,0x37
pf_at 0x874
l_loader_00000874: jmp short 0x878
pf_at 0x876
l_loader_00000876: add al,0x30
pf_at 0x878
l_loader_00000878: call 0x846
pf_at 0x87b
l_loader_0000087b: ret
pf_at 0x87c
l_loader_0000087c: push ax
pf_at 0x87d
l_loader_0000087d: push bx
pf_at 0x87e
l_loader_0000087e: mov bl,al
pf_at 0x880
l_loader_00000880: shr al,byte 0x4
pf_at 0x883
l_loader_00000883: call 0x86c
pf_at 0x886
l_loader_00000886: mov al,bl
pf_at 0x888
l_loader_00000888: call 0x86c
pf_at 0x88b
l_loader_0000088b: pop bx
pf_at 0x88c
l_loader_0000088c: pop ax
pf_at 0x88d
l_loader_0000088d: ret
pf_at 0x88e
l_loader_0000088e: push ax
pf_at 0x88f
l_loader_0000088f: xchg ah,al
pf_at 0x891
l_loader_00000891: call 0x87c
pf_at 0x894
l_loader_00000894: pop ax
pf_at 0x895
l_loader_00000895: call 0x87c
pf_at 0x898
l_loader_00000898: ret

section part1 start=0x899 vstart=0x8899 align=1
bits 32
pf_at 0x0
l_loader_00008899: mov ax,0x10
pf_at 0x4
l_loader_0000889d: o16 mov ds,ax
pf_at 0x7
l_loader_000088a0: o16 mov es,ax
pf_at 0xa
l_loader_000088a3: o16 mov fs,ax
pf_at 0xd
l_loader_000088a6: o16 mov gs,ax
pf_at 0x10
l_loader_000088a9: o16 mov ss,ax
pf_at 0x13
l_loader_000088ac: mov esp,0x17f000
pf_at 0x18
l_loader_000088b1: cld
pf_at 0x19
l_loader_000088b2: jmp esi
pf_at 0x1b
l_loader_000088b4: db 0x8d
pf_at 0x1c
l_loader_000088b5: mov ah,0x0
pf_at 0x1e
l_loader_000088b7: db 0x00

section part2 start=0x8b8 vstart=0x0 align=1
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
    times 30288 db 0
