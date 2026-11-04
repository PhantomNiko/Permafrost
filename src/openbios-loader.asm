; Permafrost 0.6 — recovered assembly, Pooka's Free Software License.
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
l_loader_00000007: mov ax,0x700
pf_at 0xa
l_loader_0000000a: mov ss,ax
pf_at 0xc
l_loader_0000000c: mov sp,0xfffe
pf_at 0xf
l_loader_0000000f: cld
pf_at 0x10
l_loader_00000010: sti
pf_at 0x11
l_loader_00000011: mov [0x1305],dl
pf_at 0x15
l_loader_00000015: mov byte [0x1306],0x3f
pf_at 0x1a
l_loader_0000001a: mov byte [0x1307],0x3f
pf_at 0x1f
l_loader_0000001f: mov byte [0x1308],0x0
pf_at 0x24
l_loader_00000024: lea si,[0x1277]
pf_at 0x28
l_loader_00000028: call 0xfc6
pf_at 0x2b
l_loader_0000002b: call 0x168
pf_at 0x2e
l_loader_0000002e: mov byte [0x1306],0x53
pf_at 0x33
l_loader_00000033: mov byte [0x1307],0x44
pf_at 0x38
l_loader_00000038: call 0x10f
pf_at 0x3b
l_loader_0000003b: jnc short 0x44
pf_at 0x3d
l_loader_0000003d: call 0x2bc
pf_at 0x40
l_loader_00000040: jnc short 0x2e
pf_at 0x42
l_loader_00000042: jmp short 0xa1
pf_at 0x44
l_loader_00000044: mov byte [0x1306],0x48
pf_at 0x49
l_loader_00000049: mov byte [0x1307],0x46
pf_at 0x4e
l_loader_0000004e: mov byte [0x1308],0x0
pf_at 0x53
l_loader_00000053: mov ax,0x2000
pf_at 0x56
l_loader_00000056: lea si,[0x127c]
pf_at 0x5a
l_loader_0000005a: call 0x2f3
pf_at 0x5d
l_loader_0000005d: jnc short 0x66
pf_at 0x5f
l_loader_0000005f: call 0x2bc
pf_at 0x62
l_loader_00000062: jnc short 0x2e
pf_at 0x64
l_loader_00000064: jmp short 0xa1
pf_at 0x66
l_loader_00000066: mov byte [0x1306],0x50
pf_at 0x6b
l_loader_0000006b: mov byte [0x1307],0x42
pf_at 0x70
l_loader_00000070: call 0x3c0
pf_at 0x73
l_loader_00000073: jnc short 0x7c
pf_at 0x75
l_loader_00000075: call 0x2bc
pf_at 0x78
l_loader_00000078: jnc short 0x2e
pf_at 0x7a
l_loader_0000007a: jmp short 0xa1
pf_at 0x7c
l_loader_0000007c: call 0x56f
pf_at 0x7f
l_loader_0000007f: call 0x5c8
pf_at 0x82
l_loader_00000082: call 0xbbd
pf_at 0x85
l_loader_00000085: call 0xd51
pf_at 0x88
l_loader_00000088: call 0xc49
pf_at 0x8b
l_loader_0000008b: mov byte [0x1306],0x54
pf_at 0x90
l_loader_00000090: mov byte [0x1307],0x4d
pf_at 0x95
l_loader_00000095: call 0xd4b
pf_at 0x98
l_loader_00000098: call 0xd51
pf_at 0x9b
l_loader_0000009b: call pf_prepare_openbios_boot
pf_at 0x9e
l_loader_0000009e: hlt
pf_at 0x9f
l_loader_0000009f: jmp short 0x9e
pf_at 0xa1
l_loader_000000a1: push ax
pf_at 0xa2
l_loader_000000a2: mov ax,cs
pf_at 0xa4
l_loader_000000a4: mov ds,ax
pf_at 0xa6
l_loader_000000a6: pop ax
pf_at 0xa7
l_loader_000000a7: lea si,[0x125e]
pf_at 0xab
l_loader_000000ab: call 0xfc6
pf_at 0xae
l_loader_000000ae: mov al,0x20
pf_at 0xb0
l_loader_000000b0: call 0xfac
pf_at 0xb3
l_loader_000000b3: mov al,0x5b
pf_at 0xb5
l_loader_000000b5: call 0xfac
pf_at 0xb8
l_loader_000000b8: mov al,[0x1306]
pf_at 0xbb
l_loader_000000bb: call 0xfac
pf_at 0xbe
l_loader_000000be: mov al,0x3a
pf_at 0xc0
l_loader_000000c0: call 0xfac
pf_at 0xc3
l_loader_000000c3: mov al,[0x1307]
pf_at 0xc6
l_loader_000000c6: call 0xfac
pf_at 0xc9
l_loader_000000c9: mov al,0x20
pf_at 0xcb
l_loader_000000cb: call 0xfac
pf_at 0xce
l_loader_000000ce: mov al,[0x1308]
pf_at 0xd1
l_loader_000000d1: call 0xfe2
pf_at 0xd4
l_loader_000000d4: cmp byte [0x1307],0x44
pf_at 0xd9
l_loader_000000d9: jnz short 0x107
pf_at 0xdb
l_loader_000000db: mov al,0x20
pf_at 0xdd
l_loader_000000dd: call 0xfac
pf_at 0xe0
l_loader_000000e0: mov al,0x4c
pf_at 0xe2
l_loader_000000e2: call 0xfac
pf_at 0xe5
l_loader_000000e5: push ax
pf_at 0xe6
l_loader_000000e6: mov ax,cs
pf_at 0xe8
l_loader_000000e8: mov ds,ax
pf_at 0xea
l_loader_000000ea: pop ax
pf_at 0xeb
l_loader_000000eb: mov ax,[0x13c8]
pf_at 0xee
l_loader_000000ee: call 0xff4
pf_at 0xf1
l_loader_000000f1: mov al,0x20
pf_at 0xf3
l_loader_000000f3: call 0xfac
pf_at 0xf6
l_loader_000000f6: mov al,0x53
pf_at 0xf8
l_loader_000000f8: call 0xfac
pf_at 0xfb
l_loader_000000fb: push ax
pf_at 0xfc
l_loader_000000fc: mov ax,cs
pf_at 0xfe
l_loader_000000fe: mov ds,ax
pf_at 0x100
l_loader_00000100: pop ax
pf_at 0x101
l_loader_00000101: mov ax,[0x13c4]
pf_at 0x104
l_loader_00000104: call 0xff4
pf_at 0x107
l_loader_00000107: mov al,0x5d
pf_at 0x109
l_loader_00000109: call 0xfac
pf_at 0x10c
l_loader_0000010c: hlt
pf_at 0x10d
l_loader_0000010d: jmp short 0x10c
pf_at 0x10f
l_loader_0000010f: push ax
pf_at 0x110
l_loader_00000110: mov ax,cs
pf_at 0x112
l_loader_00000112: mov ds,ax
pf_at 0x114
l_loader_00000114: pop ax
pf_at 0x115
l_loader_00000115: mov ax,0x1000
pf_at 0x118
l_loader_00000118: mov es,ax
pf_at 0x11a
l_loader_0000011a: xor bx,bx
pf_at 0x11c
l_loader_0000011c: mov eax,[0x1338]
pf_at 0x120
l_loader_00000120: mov [0x13c8],eax
pf_at 0x124
l_loader_00000124: mov [0x13c4],eax
pf_at 0x128
l_loader_00000128: mov word [0x1314],0x1
pf_at 0x12e
l_loader_0000012e: mov cx,0x1
pf_at 0x131
l_loader_00000131: call 0xe47
pf_at 0x134
l_loader_00000134: jc short 0x167
pf_at 0x136
l_loader_00000136: mov ax,[es:0x10]
pf_at 0x13a
l_loader_0000013a: mov [0x130e],ax
pf_at 0x13d
l_loader_0000013d: mov eax,[es:0x1c]
pf_at 0x142
l_loader_00000142: add eax,[0x1338]
pf_at 0x147
l_loader_00000147: mov [0x1330],eax
pf_at 0x14b
l_loader_0000014b: mov ax,[es:0x20]
pf_at 0x14f
l_loader_0000014f: mov [0x1310],ax
pf_at 0x152
l_loader_00000152: mov eax,[es:0x24]
pf_at 0x157
l_loader_00000157: add eax,[0x1338]
pf_at 0x15c
l_loader_0000015c: mov [0x1334],eax
pf_at 0x160
l_loader_00000160: mov ax,[es:0x2c]
pf_at 0x164
l_loader_00000164: mov [0x1312],ax
pf_at 0x167
l_loader_00000167: ret
pf_at 0x168
l_loader_00000168: push ax
pf_at 0x169
l_loader_00000169: push bx
pf_at 0x16a
l_loader_0000016a: push cx
pf_at 0x16b
l_loader_0000016b: push ds
pf_at 0x16c
l_loader_0000016c: push es
pf_at 0x16d
l_loader_0000016d: mov ax,cs
pf_at 0x16f
l_loader_0000016f: mov ds,ax
pf_at 0x171
l_loader_00000171: mov dword [0x1338],0x41
pf_at 0x17a
l_loader_0000017a: mov dword [0x133c],0x0
pf_at 0x183
l_loader_00000183: mov dword [0x1340],0x0
pf_at 0x18c
l_loader_0000018c: mov dword [0x1344],0x0
pf_at 0x195
l_loader_00000195: mov dword [0x1348],0x0
pf_at 0x19e
l_loader_0000019e: mov dword [0x134c],0x0
pf_at 0x1a7
l_loader_000001a7: mov dword [0x132a],0x0
pf_at 0x1b0
l_loader_000001b0: mov ax,0x1000
pf_at 0x1b3
l_loader_000001b3: mov es,ax
pf_at 0x1b5
l_loader_000001b5: xor bx,bx
pf_at 0x1b7
l_loader_000001b7: mov eax,0x41
pf_at 0x1bd
l_loader_000001bd: mov [0x13c8],eax
pf_at 0x1c1
l_loader_000001c1: mov [0x13c4],eax
pf_at 0x1c5
l_loader_000001c5: mov word [0x1314],0x1
pf_at 0x1cb
l_loader_000001cb: mov cx,0x1
pf_at 0x1ce
l_loader_000001ce: call 0xe47
pf_at 0x1d1
l_loader_000001d1: jc near 0x2b0
pf_at 0x1d5
l_loader_000001d5: cmp word [es:0x0],0x4257
pf_at 0x1dc
l_loader_000001dc: jnz near 0x2b0
pf_at 0x1e0
l_loader_000001e0: cmp word [es:0x2],0x5450
pf_at 0x1e7
l_loader_000001e7: jnz near 0x2b0
pf_at 0x1eb
l_loader_000001eb: cmp word [es:0x4],byte +0x1
pf_at 0x1f1
l_loader_000001f1: jnz near 0x2b0
pf_at 0x1f5
l_loader_000001f5: cmp word [es:0x6],byte +0x1
pf_at 0x1fb
l_loader_000001fb: jc near 0x2b0
pf_at 0x1ff
l_loader_000001ff: cmp dword [es:0x20],byte +0x1
pf_at 0x206
l_loader_00000206: jnz near 0x2b0
pf_at 0x20a
l_loader_0000020a: mov eax,[es:0x24]
pf_at 0x20f
l_loader_0000020f: cmp eax,byte +0x41
pf_at 0x213
l_loader_00000213: jna near 0x2b0
pf_at 0x217
l_loader_00000217: mov [0x1338],eax
pf_at 0x21b
l_loader_0000021b: mov eax,[es:0x28]
pf_at 0x220
l_loader_00000220: mov [0x133c],eax
pf_at 0x224
l_loader_00000224: mov ecx,[0x1338]
pf_at 0x229
l_loader_00000229: add ecx,eax
pf_at 0x22c
l_loader_0000022c: jc near 0x2b0
pf_at 0x230
l_loader_00000230: mov [0x132a],ecx
pf_at 0x235
l_loader_00000235: mov eax,[es:0x2c]
pf_at 0x23a
l_loader_0000023a: mov [0x1340],eax
pf_at 0x23e
l_loader_0000023e: cmp word [es:0x6],byte +0x2
pf_at 0x244
l_loader_00000244: jc short 0x2b0
pf_at 0x246
l_loader_00000246: cmp dword [es:0x40],byte +0x1
pf_at 0x24d
l_loader_0000024d: jnz short 0x2b0
pf_at 0x24f
l_loader_0000024f: mov eax,[es:0x44]
pf_at 0x254
l_loader_00000254: cmp eax,byte +0x41
pf_at 0x258
l_loader_00000258: jna short 0x2b0
pf_at 0x25a
l_loader_0000025a: mov [0x1344],eax
pf_at 0x25e
l_loader_0000025e: mov eax,[es:0x48]
pf_at 0x263
l_loader_00000263: mov [0x1348],eax
pf_at 0x267
l_loader_00000267: mov ecx,[0x1344]
pf_at 0x26c
l_loader_0000026c: add ecx,eax
pf_at 0x26f
l_loader_0000026f: jc short 0x2b0
pf_at 0x271
l_loader_00000271: mov [0x132a],ecx
pf_at 0x276
l_loader_00000276: mov eax,[es:0x4c]
pf_at 0x27b
l_loader_0000027b: mov [0x134c],eax
pf_at 0x27f
l_loader_0000027f: cmp word [es:0x6],byte +0x3
pf_at 0x285
l_loader_00000285: jc short 0x2b0
pf_at 0x287
l_loader_00000287: cmp dword [es:0x60],byte +0x5
pf_at 0x28e
l_loader_0000028e: jnz short 0x2b0
pf_at 0x290
l_loader_00000290: mov eax,[es:0x64]
pf_at 0x295
l_loader_00000295: cmp eax,byte +0x41
pf_at 0x299
l_loader_00000299: jna short 0x2b0
pf_at 0x29b
l_loader_0000029b: mov ecx,[es:0x68]
pf_at 0x2a1
l_loader_000002a1: test ecx,ecx
pf_at 0x2a4
l_loader_000002a4: jz short 0x2b0
pf_at 0x2a6
l_loader_000002a6: add ecx,eax
pf_at 0x2a9
l_loader_000002a9: jc short 0x2b0
pf_at 0x2ab
l_loader_000002ab: mov [0x132a],ecx
pf_at 0x2b0
l_loader_000002b0: mov byte [0x1308],0x0
pf_at 0x2b5
l_loader_000002b5: pop es
pf_at 0x2b6
l_loader_000002b6: pop ds
pf_at 0x2b7
l_loader_000002b7: pop cx
pf_at 0x2b8
l_loader_000002b8: pop bx
pf_at 0x2b9
l_loader_000002b9: pop ax
pf_at 0x2ba
l_loader_000002ba: clc
pf_at 0x2bb
l_loader_000002bb: ret
pf_at 0x2bc
l_loader_000002bc: push ax
pf_at 0x2bd
l_loader_000002bd: push ds
pf_at 0x2be
l_loader_000002be: mov ax,cs
pf_at 0x2c0
l_loader_000002c0: mov ds,ax
pf_at 0x2c2
l_loader_000002c2: mov eax,[0x1344]
pf_at 0x2c6
l_loader_000002c6: test eax,eax
pf_at 0x2c9
l_loader_000002c9: jz short 0x2ef
pf_at 0x2cb
l_loader_000002cb: cmp eax,[0x1338]
pf_at 0x2d0
l_loader_000002d0: jz short 0x2ef
pf_at 0x2d2
l_loader_000002d2: mov [0x1338],eax
pf_at 0x2d6
l_loader_000002d6: mov eax,[0x1348]
pf_at 0x2da
l_loader_000002da: mov [0x133c],eax
pf_at 0x2de
l_loader_000002de: mov eax,[0x134c]
pf_at 0x2e2
l_loader_000002e2: mov [0x1340],eax
pf_at 0x2e6
l_loader_000002e6: mov byte [0x1308],0x0
pf_at 0x2eb
l_loader_000002eb: pop ds
pf_at 0x2ec
l_loader_000002ec: pop ax
pf_at 0x2ed
l_loader_000002ed: clc
pf_at 0x2ee
l_loader_000002ee: ret
pf_at 0x2ef
l_loader_000002ef: pop ds
pf_at 0x2f0
l_loader_000002f0: pop ax
pf_at 0x2f1
l_loader_000002f1: stc
pf_at 0x2f2
l_loader_000002f2: ret
pf_at 0x2f3
l_loader_000002f3: push ax
pf_at 0x2f4
l_loader_000002f4: mov ax,cs
pf_at 0x2f6
l_loader_000002f6: mov ds,ax
pf_at 0x2f8
l_loader_000002f8: pop ax
pf_at 0x2f9
l_loader_000002f9: mov [0x130a],ax
pf_at 0x2fc
l_loader_000002fc: mov [0x130c],si
pf_at 0x300
l_loader_00000300: mov dx,[0x1312]
pf_at 0x304
l_loader_00000304: xor bp,bp
pf_at 0x306
l_loader_00000306: cmp bp,[0x1310]
pf_at 0x30a
l_loader_0000030a: jnc near 0x3b2
pf_at 0x30e
l_loader_0000030e: mov ax,0x1000
pf_at 0x311
l_loader_00000311: mov es,ax
pf_at 0x313
l_loader_00000313: xor bx,bx
pf_at 0x315
l_loader_00000315: mov eax,[0x1330]
pf_at 0x319
l_loader_00000319: movzx ecx,bp
pf_at 0x31d
l_loader_0000031d: add eax,ecx
pf_at 0x320
l_loader_00000320: mov [0x13c8],eax
pf_at 0x324
l_loader_00000324: mov [0x13c4],eax
pf_at 0x328
l_loader_00000328: mov word [0x1314],0x1
pf_at 0x32e
l_loader_0000032e: mov cx,0x1
pf_at 0x331
l_loader_00000331: push bp
pf_at 0x332
l_loader_00000332: push dx
pf_at 0x333
l_loader_00000333: call 0xe47
pf_at 0x336
l_loader_00000336: pop dx
pf_at 0x337
l_loader_00000337: pop bp
pf_at 0x338
l_loader_00000338: jc short 0x3b2
pf_at 0x33a
l_loader_0000033a: xor bx,bx
pf_at 0x33c
l_loader_0000033c: mov cx,0x2
pf_at 0x33f
l_loader_0000033f: cmp dx,byte +0x0
pf_at 0x342
l_loader_00000342: jz short 0x3b2
pf_at 0x344
l_loader_00000344: push cx
pf_at 0x345
l_loader_00000345: mov si,[0x130c]
pf_at 0x349
l_loader_00000349: mov di,bx
pf_at 0x34b
l_loader_0000034b: call 0xe26
pf_at 0x34e
l_loader_0000034e: pop cx
pf_at 0x34f
l_loader_0000034f: jnc short 0x35b
pf_at 0x351
l_loader_00000351: add bx,0x100
pf_at 0x355
l_loader_00000355: dec dx
pf_at 0x356
l_loader_00000356: loop 0x33f
pf_at 0x358
l_loader_00000358: inc bp
pf_at 0x359
l_loader_00000359: jmp short 0x306
pf_at 0x35b
l_loader_0000035b: mov eax,[es:bx+0xf0]
pf_at 0x361
l_loader_00000361: mov [0x13a4],eax
pf_at 0x365
l_loader_00000365: mov eax,[es:bx+0xf4]
pf_at 0x36b
l_loader_0000036b: mov [0x13a8],eax
pf_at 0x36f
l_loader_0000036f: mov eax,[0x13a8]
pf_at 0x373
l_loader_00000373: add eax,0x1ff
pf_at 0x379
l_loader_00000379: shr eax,byte 0x9
pf_at 0x37d
l_loader_0000037d: mov cx,ax
pf_at 0x37f
l_loader_0000037f: mov eax,[0x13a4]
pf_at 0x383
l_loader_00000383: sub eax,byte +0x2
pf_at 0x387
l_loader_00000387: movzx edx,word [0x130e]
pf_at 0x38d
l_loader_0000038d: imul eax,edx
pf_at 0x391
l_loader_00000391: add eax,[0x1334]
pf_at 0x396
l_loader_00000396: mov [0x13c8],eax
pf_at 0x39a
l_loader_0000039a: mov [0x13c4],eax
pf_at 0x39e
l_loader_0000039e: mov [0x1314],cx
pf_at 0x3a2
l_loader_000003a2: mov ax,[0x130a]
pf_at 0x3a5
l_loader_000003a5: mov [0x1316],ax
pf_at 0x3a8
l_loader_000003a8: call 0xe86
pf_at 0x3ab
l_loader_000003ab: jc short 0x3b2
pf_at 0x3ad
l_loader_000003ad: mov ax,[0x13a8]
pf_at 0x3b0
l_loader_000003b0: clc
pf_at 0x3b1
l_loader_000003b1: ret
pf_at 0x3b2
l_loader_000003b2: cmp byte [0x1308],0x0
pf_at 0x3b7
l_loader_000003b7: jnz short 0x3be
pf_at 0x3b9
l_loader_000003b9: mov byte [0x1307],0x46
pf_at 0x3be
l_loader_000003be: stc
pf_at 0x3bf
l_loader_000003bf: ret
pf_at 0x3c0
l_loader_000003c0: push ds
pf_at 0x3c1
l_loader_000003c1: push es
pf_at 0x3c2
l_loader_000003c2: mov ax,cs
pf_at 0x3c4
l_loader_000003c4: mov ds,ax
pf_at 0x3c6
l_loader_000003c6: mov ax,0x2000
pf_at 0x3c9
l_loader_000003c9: mov es,ax
pf_at 0x3cb
l_loader_000003cb: cmp word [es:0x0],0x4d57
pf_at 0x3d2
l_loader_000003d2: jnz near 0x51a
pf_at 0x3d6
l_loader_000003d6: cmp word [es:0x2],0x504c
pf_at 0x3dd
l_loader_000003dd: jnz near 0x51a
pf_at 0x3e1
l_loader_000003e1: cmp dword [es:0x4],byte +0x1
pf_at 0x3e8
l_loader_000003e8: jz short 0x3f6
pf_at 0x3ea
l_loader_000003ea: cmp dword [es:0x4],byte +0x2
pf_at 0x3f1
l_loader_000003f1: jz short 0x466
pf_at 0x3f3
l_loader_000003f3: jmp near 0x51a
pf_at 0x3f6
l_loader_000003f6: mov eax,[es:0xc]
pf_at 0x3fb
l_loader_000003fb: cmp eax,byte +0x10
pf_at 0x3ff
l_loader_000003ff: jc near 0x51a
pf_at 0x403
l_loader_00000403: cmp eax,[0x13a8]
pf_at 0x408
l_loader_00000408: ja near 0x51a
pf_at 0x40c
l_loader_0000040c: mov [0x1388],eax
pf_at 0x410
l_loader_00000410: mov dword [0x138c],0x1
pf_at 0x419
l_loader_00000419: mov dword [0x1390],0x20000
pf_at 0x422
l_loader_00000422: mov [0x1394],eax
pf_at 0x426
l_loader_00000426: mov [0x1398],eax
pf_at 0x42a
l_loader_0000042a: mov dword [0x139c],0x0
pf_at 0x433
l_loader_00000433: mov dword [0x13a0],0x0
pf_at 0x43c
l_loader_0000043c: mov eax,[es:0x8]
pf_at 0x441
l_loader_00000441: cmp eax,0x20000
pf_at 0x447
l_loader_00000447: jc near 0x51a
pf_at 0x44b
l_loader_0000044b: mov edx,eax
pf_at 0x44e
l_loader_0000044e: sub edx,0x20000
pf_at 0x455
l_loader_00000455: cmp edx,[0x1388]
pf_at 0x45a
l_loader_0000045a: jnc near 0x51a
pf_at 0x45e
l_loader_0000045e: mov [0x1384],eax
pf_at 0x462
l_loader_00000462: pop es
pf_at 0x463
l_loader_00000463: pop ds
pf_at 0x464
l_loader_00000464: clc
pf_at 0x465
l_loader_00000465: ret
pf_at 0x466
l_loader_00000466: mov eax,[es:0xc]
pf_at 0x46b
l_loader_0000046b: cmp eax,byte +0x28
pf_at 0x46f
l_loader_0000046f: jc near 0x51a
pf_at 0x473
l_loader_00000473: cmp eax,[0x13a8]
pf_at 0x478
l_loader_00000478: ja near 0x51a
pf_at 0x47c
l_loader_0000047c: mov [0x1388],eax
pf_at 0x480
l_loader_00000480: mov dword [0x138c],0x2
pf_at 0x489
l_loader_00000489: mov eax,[es:0x10]
pf_at 0x48e
l_loader_0000048e: mov [0x1390],eax
pf_at 0x492
l_loader_00000492: mov eax,[es:0x14]
pf_at 0x497
l_loader_00000497: test eax,eax
pf_at 0x49a
l_loader_0000049a: jz short 0x51a
pf_at 0x49c
l_loader_0000049c: mov [0x1394],eax
pf_at 0x4a0
l_loader_000004a0: mov eax,[es:0x18]
pf_at 0x4a5
l_loader_000004a5: cmp eax,[0x1394]
pf_at 0x4aa
l_loader_000004aa: ja short 0x51a
pf_at 0x4ac
l_loader_000004ac: mov [0x1398],eax
pf_at 0x4b0
l_loader_000004b0: mov eax,[es:0x20]
pf_at 0x4b5
l_loader_000004b5: mov [0x13a0],eax
pf_at 0x4b9
l_loader_000004b9: mov ebx,[es:0x1c]
pf_at 0x4bf
l_loader_000004bf: mov [0x139c],ebx
pf_at 0x4c4
l_loader_000004c4: test eax,eax
pf_at 0x4c7
l_loader_000004c7: jz short 0x4df
pf_at 0x4c9
l_loader_000004c9: cmp ebx,[0x1394]
pf_at 0x4ce
l_loader_000004ce: jnc short 0x51a
pf_at 0x4d0
l_loader_000004d0: mov ecx,ebx
pf_at 0x4d3
l_loader_000004d3: add ecx,eax
pf_at 0x4d6
l_loader_000004d6: jc short 0x51a
pf_at 0x4d8
l_loader_000004d8: cmp ecx,[0x1394]
pf_at 0x4dd
l_loader_000004dd: ja short 0x51a
pf_at 0x4df
l_loader_000004df: mov eax,[0x1398]
pf_at 0x4e3
l_loader_000004e3: add eax,[0x13a0]
pf_at 0x4e8
l_loader_000004e8: jc short 0x51a
pf_at 0x4ea
l_loader_000004ea: add eax,byte +0x28
pf_at 0x4ee
l_loader_000004ee: jc short 0x51a
pf_at 0x4f0
l_loader_000004f0: cmp eax,[0x1388]
pf_at 0x4f5
l_loader_000004f5: jnz short 0x51a
pf_at 0x4f7
l_loader_000004f7: mov eax,[es:0x8]
pf_at 0x4fc
l_loader_000004fc: cmp eax,[0x1390]
pf_at 0x501
l_loader_00000501: jc short 0x51a
pf_at 0x503
l_loader_00000503: mov edx,eax
pf_at 0x506
l_loader_00000506: sub edx,[0x1390]
pf_at 0x50b
l_loader_0000050b: cmp edx,[0x1394]
pf_at 0x510
l_loader_00000510: jnc short 0x51a
pf_at 0x512
l_loader_00000512: mov [0x1384],eax
pf_at 0x516
l_loader_00000516: pop es
pf_at 0x517
l_loader_00000517: pop ds
pf_at 0x518
l_loader_00000518: clc
pf_at 0x519
l_loader_00000519: ret
pf_at 0x51a
l_loader_0000051a: mov ax,cs
pf_at 0x51c
l_loader_0000051c: mov ds,ax
pf_at 0x51e
l_loader_0000051e: mov byte [0x1307],0x42
pf_at 0x523
l_loader_00000523: mov dword [0x138c],0x0
pf_at 0x52c
l_loader_0000052c: mov dword [0x1384],0x0
pf_at 0x535
l_loader_00000535: mov dword [0x1388],0x0
pf_at 0x53e
l_loader_0000053e: mov dword [0x1390],0x0
pf_at 0x547
l_loader_00000547: mov dword [0x1394],0x0
pf_at 0x550
l_loader_00000550: mov dword [0x1398],0x0
pf_at 0x559
l_loader_00000559: mov dword [0x139c],0x0
pf_at 0x562
l_loader_00000562: mov dword [0x13a0],0x0
pf_at 0x56b
l_loader_0000056b: pop es
pf_at 0x56c
l_loader_0000056c: pop ds
pf_at 0x56d
l_loader_0000056d: stc
pf_at 0x56e
l_loader_0000056e: ret
pf_at 0x56f
l_loader_0000056f: push ax
pf_at 0x570
l_loader_00000570: push cx
pf_at 0x571
l_loader_00000571: push ds
pf_at 0x572
l_loader_00000572: push es
pf_at 0x573
l_loader_00000573: push si
pf_at 0x574
l_loader_00000574: push di
pf_at 0x575
l_loader_00000575: mov ax,cs
pf_at 0x577
l_loader_00000577: mov ds,ax
pf_at 0x579
l_loader_00000579: mov es,ax
pf_at 0x57b
l_loader_0000057b: lea di,[0x13cc]
pf_at 0x57f
l_loader_0000057f: xor eax,eax
pf_at 0x582
l_loader_00000582: mov cx,0xf
pf_at 0x585
l_loader_00000585: cld
pf_at 0x586
l_loader_00000586: rep stosw
pf_at 0x588
l_loader_00000588: mov word [0x13cc],0x1e
pf_at 0x58e
l_loader_0000058e: mov ah,0x48
pf_at 0x590
l_loader_00000590: mov dl,[0x1305]
pf_at 0x594
l_loader_00000594: lea si,[0x13cc]
pf_at 0x598
l_loader_00000598: int 0x13
pf_at 0x59a
l_loader_0000059a: jc short 0x5b7
pf_at 0x59c
l_loader_0000059c: mov eax,[0x13dc]
pf_at 0x5a0
l_loader_000005a0: mov edx,[0x13e0]
pf_at 0x5a5
l_loader_000005a5: test edx,edx
pf_at 0x5a8
l_loader_000005a8: jz short 0x5b0
pf_at 0x5aa
l_loader_000005aa: mov eax,0xffffffff
pf_at 0x5b0
l_loader_000005b0: mov [0x1350],eax
pf_at 0x5b4
l_loader_000005b4: clc
pf_at 0x5b5
l_loader_000005b5: jmp short 0x5c1
pf_at 0x5b7
l_loader_000005b7: mov dword [0x1350],0x0
pf_at 0x5c0
l_loader_000005c0: stc
pf_at 0x5c1
l_loader_000005c1: pop di
pf_at 0x5c2
l_loader_000005c2: pop si
pf_at 0x5c3
l_loader_000005c3: pop es
pf_at 0x5c4
l_loader_000005c4: pop ds
pf_at 0x5c5
l_loader_000005c5: pop cx
pf_at 0x5c6
l_loader_000005c6: pop ax
pf_at 0x5c7
l_loader_000005c7: ret
pf_at 0x5c8
l_loader_000005c8: push ax
pf_at 0x5c9
l_loader_000005c9: push bx
pf_at 0x5ca
l_loader_000005ca: push cx
pf_at 0x5cb
l_loader_000005cb: push dx
pf_at 0x5cc
l_loader_000005cc: push ds
pf_at 0x5cd
l_loader_000005cd: push es
pf_at 0x5ce
l_loader_000005ce: push si
pf_at 0x5cf
l_loader_000005cf: push di
pf_at 0x5d0
l_loader_000005d0: mov ax,cs
pf_at 0x5d2
l_loader_000005d2: mov ds,ax
pf_at 0x5d4
l_loader_000005d4: mov es,ax
pf_at 0x5d6
l_loader_000005d6: mov dword [0x1354],0x4000000
pf_at 0x5df
l_loader_000005df: call 0x601
pf_at 0x5e2
l_loader_000005e2: jnc short 0x5f8
pf_at 0x5e4
l_loader_000005e4: call 0x6e7
pf_at 0x5e7
l_loader_000005e7: jnc short 0x5f8
pf_at 0x5e9
l_loader_000005e9: call 0x740
pf_at 0x5ec
l_loader_000005ec: jnc short 0x5f8
pf_at 0x5ee
l_loader_000005ee: mov dword [0x1354],0x4000000
pf_at 0x5f7
l_loader_000005f7: clc
pf_at 0x5f8
l_loader_000005f8: pop di
pf_at 0x5f9
l_loader_000005f9: pop si
pf_at 0x5fa
l_loader_000005fa: pop es
pf_at 0x5fb
l_loader_000005fb: pop ds
pf_at 0x5fc
l_loader_000005fc: pop dx
pf_at 0x5fd
l_loader_000005fd: pop cx
pf_at 0x5fe
l_loader_000005fe: pop bx
pf_at 0x5ff
l_loader_000005ff: pop ax
pf_at 0x600
l_loader_00000600: ret
pf_at 0x601
l_loader_00000601: push ax
pf_at 0x602
l_loader_00000602: push cx
pf_at 0x603
l_loader_00000603: push dx
pf_at 0x604
l_loader_00000604: push ds
pf_at 0x605
l_loader_00000605: push es
pf_at 0x606
l_loader_00000606: push di
pf_at 0x607
l_loader_00000607: mov ax,cs
pf_at 0x609
l_loader_00000609: mov ds,ax
pf_at 0x60b
l_loader_0000060b: mov es,ax
pf_at 0x60d
l_loader_0000060d: mov dword [0x135c],0x0
pf_at 0x616
l_loader_00000616: mov dword [0x1358],0x1000000
pf_at 0x61f
l_loader_0000061f: mov eax,[0x1358]
pf_at 0x623
l_loader_00000623: mov [0x1354],eax
pf_at 0x627
l_loader_00000627: mov dword [0x135c],0x0
pf_at 0x630
l_loader_00000630: lea di,[0x13ea]
pf_at 0x634
l_loader_00000634: xor ax,ax
pf_at 0x636
l_loader_00000636: mov cx,0xa
pf_at 0x639
l_loader_00000639: cld
pf_at 0x63a
l_loader_0000063a: rep stosw
pf_at 0x63c
l_loader_0000063c: mov eax,0xe820
pf_at 0x642
l_loader_00000642: mov edx,0x534d4150
pf_at 0x648
l_loader_00000648: mov ecx,0x14
pf_at 0x64e
l_loader_0000064e: mov ebx,[0x135c]
pf_at 0x653
l_loader_00000653: lea di,[0x13ea]
pf_at 0x657
l_loader_00000657: int 0x15
pf_at 0x659
l_loader_00000659: jc near 0x6df
pf_at 0x65d
l_loader_0000065d: push eax
pf_at 0x65f
l_loader_0000065f: mov ax,cs
pf_at 0x661
l_loader_00000661: mov ds,ax
pf_at 0x663
l_loader_00000663: mov es,ax
pf_at 0x665
l_loader_00000665: pop eax
pf_at 0x667
l_loader_00000667: cmp eax,0x534d4150
pf_at 0x66d
l_loader_0000066d: jnz short 0x6df
pf_at 0x66f
l_loader_0000066f: mov [0x135c],ebx
pf_at 0x674
l_loader_00000674: cmp dword [0x13fa],byte +0x1
pf_at 0x67a
l_loader_0000067a: jnz short 0x6b7
pf_at 0x67c
l_loader_0000067c: cmp dword [0x13ee],byte +0x0
pf_at 0x682
l_loader_00000682: jnz short 0x6b7
pf_at 0x684
l_loader_00000684: mov eax,[0x13ea]
pf_at 0x688
l_loader_00000688: cmp eax,[0x1358]
pf_at 0x68d
l_loader_0000068d: ja short 0x6b7
pf_at 0x68f
l_loader_0000068f: mov edx,[0x13f6]
pf_at 0x694
l_loader_00000694: test edx,edx
pf_at 0x697
l_loader_00000697: jnz short 0x6a5
pf_at 0x699
l_loader_00000699: mov edx,[0x13f2]
pf_at 0x69e
l_loader_0000069e: add edx,eax
pf_at 0x6a1
l_loader_000006a1: jc short 0x6a5
pf_at 0x6a3
l_loader_000006a3: jmp short 0x6ab
pf_at 0x6a5
l_loader_000006a5: mov edx,0xffffffff
pf_at 0x6ab
l_loader_000006ab: cmp edx,[0x1358]
pf_at 0x6b0
l_loader_000006b0: jna short 0x6b7
pf_at 0x6b2
l_loader_000006b2: mov [0x1358],edx
pf_at 0x6b7
l_loader_000006b7: mov ebx,[0x135c]
pf_at 0x6bc
l_loader_000006bc: test ebx,ebx
pf_at 0x6bf
l_loader_000006bf: jnz near 0x630
pf_at 0x6c3
l_loader_000006c3: mov eax,[0x1358]
pf_at 0x6c7
l_loader_000006c7: cmp eax,[0x1354]
pf_at 0x6cc
l_loader_000006cc: ja near 0x61f
pf_at 0x6d0
l_loader_000006d0: cmp eax,0x1000000
pf_at 0x6d6
l_loader_000006d6: jna short 0x6df
pf_at 0x6d8
l_loader_000006d8: mov [0x1354],eax
pf_at 0x6dc
l_loader_000006dc: clc
pf_at 0x6dd
l_loader_000006dd: jmp short 0x6e0
pf_at 0x6df
l_loader_000006df: stc
pf_at 0x6e0
l_loader_000006e0: pop di
pf_at 0x6e1
l_loader_000006e1: pop es
pf_at 0x6e2
l_loader_000006e2: pop ds
pf_at 0x6e3
l_loader_000006e3: pop dx
pf_at 0x6e4
l_loader_000006e4: pop cx
pf_at 0x6e5
l_loader_000006e5: pop ax
pf_at 0x6e6
l_loader_000006e6: ret
pf_at 0x6e7
l_loader_000006e7: push ax
pf_at 0x6e8
l_loader_000006e8: push bx
pf_at 0x6e9
l_loader_000006e9: push cx
pf_at 0x6ea
l_loader_000006ea: push dx
pf_at 0x6eb
l_loader_000006eb: mov ax,0xe801
pf_at 0x6ee
l_loader_000006ee: int 0x15
pf_at 0x6f0
l_loader_000006f0: jc short 0x73a
pf_at 0x6f2
l_loader_000006f2: push ax
pf_at 0x6f3
l_loader_000006f3: mov ax,cs
pf_at 0x6f5
l_loader_000006f5: mov ds,ax
pf_at 0x6f7
l_loader_000006f7: pop ax
pf_at 0x6f8
l_loader_000006f8: mov di,ax
pf_at 0x6fa
l_loader_000006fa: mov si,bx
pf_at 0x6fc
l_loader_000006fc: or di,si
pf_at 0x6fe
l_loader_000006fe: jnz short 0x704
pf_at 0x700
l_loader_00000700: mov di,cx
pf_at 0x702
l_loader_00000702: mov si,dx
pf_at 0x704
l_loader_00000704: xor eax,eax
pf_at 0x707
l_loader_00000707: mov ax,di
pf_at 0x709
l_loader_00000709: shl eax,byte 0xa
pf_at 0x70d
l_loader_0000070d: add eax,0x100000
pf_at 0x713
l_loader_00000713: jc short 0x725
pf_at 0x715
l_loader_00000715: xor edx,edx
pf_at 0x718
l_loader_00000718: mov dx,si
pf_at 0x71a
l_loader_0000071a: shl edx,byte 0x10
pf_at 0x71e
l_loader_0000071e: add eax,edx
pf_at 0x721
l_loader_00000721: jc short 0x725
pf_at 0x723
l_loader_00000723: jmp short 0x72b
pf_at 0x725
l_loader_00000725: mov eax,0xffffffff
pf_at 0x72b
l_loader_0000072b: cmp eax,0x1000000
pf_at 0x731
l_loader_00000731: jna short 0x73a
pf_at 0x733
l_loader_00000733: mov [0x1354],eax
pf_at 0x737
l_loader_00000737: clc
pf_at 0x738
l_loader_00000738: jmp short 0x73b
pf_at 0x73a
l_loader_0000073a: stc
pf_at 0x73b
l_loader_0000073b: pop dx
pf_at 0x73c
l_loader_0000073c: pop cx
pf_at 0x73d
l_loader_0000073d: pop bx
pf_at 0x73e
l_loader_0000073e: pop ax
pf_at 0x73f
l_loader_0000073f: ret
pf_at 0x740
l_loader_00000740: push ax
pf_at 0x741
l_loader_00000741: mov ax,0x8800
pf_at 0x744
l_loader_00000744: int 0x15
pf_at 0x746
l_loader_00000746: jc short 0x777
pf_at 0x748
l_loader_00000748: push ax
pf_at 0x749
l_loader_00000749: mov ax,cs
pf_at 0x74b
l_loader_0000074b: mov ds,ax
pf_at 0x74d
l_loader_0000074d: pop ax
pf_at 0x74e
l_loader_0000074e: and eax,0xffff
pf_at 0x754
l_loader_00000754: shl eax,byte 0xa
pf_at 0x758
l_loader_00000758: add eax,0x100000
pf_at 0x75e
l_loader_0000075e: jc short 0x762
pf_at 0x760
l_loader_00000760: jmp short 0x768
pf_at 0x762
l_loader_00000762: mov eax,0xffffffff
pf_at 0x768
l_loader_00000768: cmp eax,0x1000000
pf_at 0x76e
l_loader_0000076e: jna short 0x777
pf_at 0x770
l_loader_00000770: mov [0x1354],eax
pf_at 0x774
l_loader_00000774: clc
pf_at 0x775
l_loader_00000775: jmp short 0x778
pf_at 0x777
l_loader_00000777: stc
pf_at 0x778
l_loader_00000778: pop ax
pf_at 0x779
l_loader_00000779: ret
pf_at 0x77a
l_loader_0000077a: push ax
pf_at 0x77b
l_loader_0000077b: push bx
pf_at 0x77c
l_loader_0000077c: push cx
pf_at 0x77d
l_loader_0000077d: push dx
pf_at 0x77e
l_loader_0000077e: push ds
pf_at 0x77f
l_loader_0000077f: push es
pf_at 0x780
l_loader_00000780: push si
pf_at 0x781
l_loader_00000781: push di
pf_at 0x782
l_loader_00000782: push bp
pf_at 0x783
l_loader_00000783: mov ax,cs
pf_at 0x785
l_loader_00000785: mov ds,ax
pf_at 0x787
l_loader_00000787: mov ax,0x600
pf_at 0x78a
l_loader_0000078a: mov es,ax
pf_at 0x78c
l_loader_0000078c: mov dword [es:0x8c],0x0
pf_at 0x796
l_loader_00000796: mov dword [es:0x110],0x0
pf_at 0x7a0
l_loader_000007a0: mov dword [es:0x114],0x0
pf_at 0x7aa
l_loader_000007aa: mov dword [es:0x124],0x0
pf_at 0x7b4
l_loader_000007b4: mov dword [es:0x228],0x0
pf_at 0x7be
l_loader_000007be: mov dword [es:0x22c],0x0
pf_at 0x7c8
l_loader_000007c8: mov dword [es:0x230],0x0
pf_at 0x7d2
l_loader_000007d2: mov dword [es:0x234],0x0
pf_at 0x7dc
l_loader_000007dc: mov dword [0x135c],0x0
pf_at 0x7e5
l_loader_000007e5: mov dword [0x1360],0x1000000
pf_at 0x7ee
l_loader_000007ee: mov dword [0x1364],0x0
pf_at 0x7f7
l_loader_000007f7: mov dword [0x1368],0x0
pf_at 0x800
l_loader_00000800: mov dword [0x136c],0x0
pf_at 0x809
l_loader_00000809: mov dword [0x1370],0x0
pf_at 0x812
l_loader_00000812: mov ax,cs
pf_at 0x814
l_loader_00000814: mov es,ax
pf_at 0x816
l_loader_00000816: lea di,[0x13ea]
pf_at 0x81a
l_loader_0000081a: xor ax,ax
pf_at 0x81c
l_loader_0000081c: mov cx,0xa
pf_at 0x81f
l_loader_0000081f: cld
pf_at 0x820
l_loader_00000820: rep stosw
pf_at 0x822
l_loader_00000822: mov eax,0xe820
pf_at 0x828
l_loader_00000828: mov edx,0x534d4150
pf_at 0x82e
l_loader_0000082e: mov ecx,0x14
pf_at 0x834
l_loader_00000834: mov ebx,[0x135c]
pf_at 0x839
l_loader_00000839: lea di,[0x13ea]
pf_at 0x83d
l_loader_0000083d: int 0x15
pf_at 0x83f
l_loader_0000083f: push eax
pf_at 0x841
l_loader_00000841: mov ax,cs
pf_at 0x843
l_loader_00000843: mov ds,ax
pf_at 0x845
l_loader_00000845: mov ax,0x600
pf_at 0x848
l_loader_00000848: mov es,ax
pf_at 0x84a
l_loader_0000084a: pop eax
pf_at 0x84c
l_loader_0000084c: jc near 0xb54
pf_at 0x850
l_loader_00000850: cmp eax,0x534d4150
pf_at 0x856
l_loader_00000856: jnz near 0xb54
pf_at 0x85a
l_loader_0000085a: mov [0x135c],ebx
pf_at 0x85f
l_loader_0000085f: cmp dword [0x13fa],byte +0x1
pf_at 0x865
l_loader_00000865: jnz short 0x8c6
pf_at 0x867
l_loader_00000867: mov eax,[0x13f2]
pf_at 0x86b
l_loader_0000086b: mov edx,[0x13f6]
pf_at 0x870
l_loader_00000870: add [es:0x110],eax
pf_at 0x876
l_loader_00000876: adc [es:0x114],edx
pf_at 0x87c
l_loader_0000087c: cmp dword [0x13ee],byte +0x0
pf_at 0x882
l_loader_00000882: jnz short 0x8c6
pf_at 0x884
l_loader_00000884: mov eax,[0x13ea]
pf_at 0x888
l_loader_00000888: mov ecx,[0x13f2]
pf_at 0x88d
l_loader_0000088d: mov edx,[0x13f6]
pf_at 0x892
l_loader_00000892: add ecx,eax
pf_at 0x895
l_loader_00000895: adc edx,byte +0x0
pf_at 0x899
l_loader_00000899: test edx,edx
pf_at 0x89c
l_loader_0000089c: jnz short 0x8b5
pf_at 0x89e
l_loader_0000089e: cmp ecx,0x1000000
pf_at 0x8a5
l_loader_000008a5: jna short 0x8c6
pf_at 0x8a7
l_loader_000008a7: cmp ecx,[0x1360]
pf_at 0x8ac
l_loader_000008ac: jna short 0x8c6
pf_at 0x8ae
l_loader_000008ae: mov [0x1360],ecx
pf_at 0x8b3
l_loader_000008b3: jmp short 0x8c6
pf_at 0x8b5
l_loader_000008b5: mov eax,0xffffffff
pf_at 0x8bb
l_loader_000008bb: cmp eax,[0x1360]
pf_at 0x8c0
l_loader_000008c0: jna short 0x8c6
pf_at 0x8c2
l_loader_000008c2: mov [0x1360],eax
pf_at 0x8c6
l_loader_000008c6: mov ebx,[0x135c]
pf_at 0x8cb
l_loader_000008cb: test ebx,ebx
pf_at 0x8ce
l_loader_000008ce: jnz near 0x812
pf_at 0x8d2
l_loader_000008d2: mov eax,[0x1360]
pf_at 0x8d6
l_loader_000008d6: cmp eax,0x1000000
pf_at 0x8dc
l_loader_000008dc: jnc short 0x8e4
pf_at 0x8de
l_loader_000008de: mov eax,0x1000000
pf_at 0x8e4
l_loader_000008e4: cmp eax,0xfc000000
pf_at 0x8ea
l_loader_000008ea: jnc short 0x916
pf_at 0x8ec
l_loader_000008ec: add eax,0x1fffff
pf_at 0x8f2
l_loader_000008f2: and eax,0xffe00000
pf_at 0x8f8
l_loader_000008f8: cmp eax,0xfc000000
pf_at 0x8fe
l_loader_000008fe: jnc short 0x916
pf_at 0x900
l_loader_00000900: mov [0x1364],eax
pf_at 0x904
l_loader_00000904: mov [0x1368],eax
pf_at 0x908
l_loader_00000908: mov edx,0xfc000000
pf_at 0x90e
l_loader_0000090e: sub edx,eax
pf_at 0x911
l_loader_00000911: mov [0x1370],edx
pf_at 0x916
l_loader_00000916: mov dword [0x135c],0x0
pf_at 0x91f
l_loader_0000091f: mov ax,cs
pf_at 0x921
l_loader_00000921: mov es,ax
pf_at 0x923
l_loader_00000923: lea di,[0x13ea]
pf_at 0x927
l_loader_00000927: xor ax,ax
pf_at 0x929
l_loader_00000929: mov cx,0xa
pf_at 0x92c
l_loader_0000092c: cld
pf_at 0x92d
l_loader_0000092d: rep stosw
pf_at 0x92f
l_loader_0000092f: mov eax,0xe820
pf_at 0x935
l_loader_00000935: mov edx,0x534d4150
pf_at 0x93b
l_loader_0000093b: mov ecx,0x14
pf_at 0x941
l_loader_00000941: mov ebx,[0x135c]
pf_at 0x946
l_loader_00000946: lea di,[0x13ea]
pf_at 0x94a
l_loader_0000094a: int 0x15
pf_at 0x94c
l_loader_0000094c: push eax
pf_at 0x94e
l_loader_0000094e: mov ax,cs
pf_at 0x950
l_loader_00000950: mov ds,ax
pf_at 0x952
l_loader_00000952: mov ax,0x600
pf_at 0x955
l_loader_00000955: mov es,ax
pf_at 0x957
l_loader_00000957: pop eax
pf_at 0x959
l_loader_00000959: jc near 0xb54
pf_at 0x95d
l_loader_0000095d: cmp eax,0x534d4150
pf_at 0x963
l_loader_00000963: jnz near 0xb54
pf_at 0x967
l_loader_00000967: mov [0x135c],ebx
pf_at 0x96c
l_loader_0000096c: cmp dword [0x13fa],byte +0x1
pf_at 0x972
l_loader_00000972: jnz near 0xb48
pf_at 0x976
l_loader_00000976: cmp dword [0x13ee],byte +0x0
pf_at 0x97c
l_loader_0000097c: jnz short 0x9f1
pf_at 0x97e
l_loader_0000097e: mov eax,[0x13ea]
pf_at 0x982
l_loader_00000982: mov ebp,eax
pf_at 0x985
l_loader_00000985: cmp ebp,0x1000000
pf_at 0x98c
l_loader_0000098c: jnc short 0x994
pf_at 0x98e
l_loader_0000098e: mov ebp,0x1000000
pf_at 0x994
l_loader_00000994: mov ecx,[0x13f2]
pf_at 0x999
l_loader_00000999: mov edx,[0x13f6]
pf_at 0x99e
l_loader_0000099e: test edx,edx
pf_at 0x9a1
l_loader_000009a1: jnz short 0x9b7
pf_at 0x9a3
l_loader_000009a3: mov esi,eax
pf_at 0x9a6
l_loader_000009a6: add esi,ecx
pf_at 0x9a9
l_loader_000009a9: jc short 0x9b7
pf_at 0x9ab
l_loader_000009ab: cmp esi,ebp
pf_at 0x9ae
l_loader_000009ae: jna near 0xb48
pf_at 0x9b2
l_loader_000009b2: sub esi,ebp
pf_at 0x9b5
l_loader_000009b5: jmp short 0x9c8
pf_at 0x9b7
l_loader_000009b7: mov esi,0xffffffff
pf_at 0x9bd
l_loader_000009bd: sub esi,ebp
pf_at 0x9c0
l_loader_000009c0: add esi,byte +0x1
pf_at 0x9c4
l_loader_000009c4: jz near 0xb48
pf_at 0x9c8
l_loader_000009c8: mov eax,[es:0x8c]
pf_at 0x9cd
l_loader_000009cd: cmp eax,byte +0x10
pf_at 0x9d1
l_loader_000009d1: jnc near 0xb48
pf_at 0x9d5
l_loader_000009d5: shl eax,byte 0x3
pf_at 0x9d9
l_loader_000009d9: mov di,ax
pf_at 0x9db
l_loader_000009db: add di,0x90
pf_at 0x9df
l_loader_000009df: mov [es:di],ebp
pf_at 0x9e3
l_loader_000009e3: mov [es:di+0x4],esi
pf_at 0x9e8
l_loader_000009e8: inc dword [es:0x8c]
pf_at 0x9ee
l_loader_000009ee: jmp near 0xb48
pf_at 0x9f1
l_loader_000009f1: cmp dword [0x1370],byte +0x0
pf_at 0x9f7
l_loader_000009f7: jz near 0xb48
pf_at 0x9fb
l_loader_000009fb: cmp dword [es:0x8c],byte +0x10
pf_at 0xa02
l_loader_00000a02: jnc near 0xb48
pf_at 0xa06
l_loader_00000a06: cmp dword [es:0x124],byte +0x10
pf_at 0xa0d
l_loader_00000a0d: jnc near 0xb48
pf_at 0xa11
l_loader_00000a11: mov eax,[0x13ea]
pf_at 0xa15
l_loader_00000a15: mov edx,[0x13ee]
pf_at 0xa1a
l_loader_00000a1a: add eax,0x1fffff
pf_at 0xa20
l_loader_00000a20: adc edx,byte +0x0
pf_at 0xa24
l_loader_00000a24: and eax,0xffe00000
pf_at 0xa2a
l_loader_00000a2a: mov [0x1374],eax
pf_at 0xa2e
l_loader_00000a2e: mov [0x1378],edx
pf_at 0xa33
l_loader_00000a33: mov ecx,[0x13f2]
pf_at 0xa38
l_loader_00000a38: mov ebp,[0x13f6]
pf_at 0xa3d
l_loader_00000a3d: add ecx,[0x13ea]
pf_at 0xa42
l_loader_00000a42: adc ebp,[0x13ee]
pf_at 0xa47
l_loader_00000a47: and ecx,0xffe00000
pf_at 0xa4e
l_loader_00000a4e: cmp ebp,[0x1378]
pf_at 0xa53
l_loader_00000a53: jc near 0xb48
pf_at 0xa57
l_loader_00000a57: ja short 0xa62
pf_at 0xa59
l_loader_00000a59: cmp ecx,[0x1374]
pf_at 0xa5e
l_loader_00000a5e: jna near 0xb48
pf_at 0xa62
l_loader_00000a62: sub ecx,[0x1374]
pf_at 0xa67
l_loader_00000a67: sbb ebp,[0x1378]
pf_at 0xa6c
l_loader_00000a6c: mov [0x137c],ecx
pf_at 0xa71
l_loader_00000a71: mov [0x1380],ebp
pf_at 0xa76
l_loader_00000a76: mov eax,[0x137c]
pf_at 0xa7a
l_loader_00000a7a: mov edx,[0x1380]
pf_at 0xa7f
l_loader_00000a7f: or eax,edx
pf_at 0xa82
l_loader_00000a82: jz near 0xb48
pf_at 0xa86
l_loader_00000a86: mov ecx,[0x1370]
pf_at 0xa8b
l_loader_00000a8b: test ecx,ecx
pf_at 0xa8e
l_loader_00000a8e: jz near 0xb48
pf_at 0xa92
l_loader_00000a92: cmp dword [es:0x8c],byte +0x10
pf_at 0xa99
l_loader_00000a99: jnc near 0xb48
pf_at 0xa9d
l_loader_00000a9d: cmp dword [es:0x124],byte +0x10
pf_at 0xaa4
l_loader_00000aa4: jnc near 0xb48
pf_at 0xaa8
l_loader_00000aa8: mov esi,ecx
pf_at 0xaab
l_loader_00000aab: cmp dword [0x1380],byte +0x0
pf_at 0xab1
l_loader_00000ab1: jnz short 0xabf
pf_at 0xab3
l_loader_00000ab3: mov eax,[0x137c]
pf_at 0xab7
l_loader_00000ab7: cmp eax,ecx
pf_at 0xaba
l_loader_00000aba: jnc short 0xabf
pf_at 0xabc
l_loader_00000abc: mov esi,eax
pf_at 0xabf
l_loader_00000abf: test esi,esi
pf_at 0xac2
l_loader_00000ac2: jz near 0xb48
pf_at 0xac6
l_loader_00000ac6: mov eax,[es:0x8c]
pf_at 0xacb
l_loader_00000acb: shl eax,byte 0x3
pf_at 0xacf
l_loader_00000acf: mov di,ax
pf_at 0xad1
l_loader_00000ad1: add di,0x90
pf_at 0xad5
l_loader_00000ad5: mov ebx,[0x1368]
pf_at 0xada
l_loader_00000ada: mov [es:di],ebx
pf_at 0xade
l_loader_00000ade: mov [es:di+0x4],esi
pf_at 0xae3
l_loader_00000ae3: inc dword [es:0x8c]
pf_at 0xae9
l_loader_00000ae9: mov eax,[es:0x124]
pf_at 0xaee
l_loader_00000aee: shl eax,byte 0x4
pf_at 0xaf2
l_loader_00000af2: mov di,ax
pf_at 0xaf4
l_loader_00000af4: add di,0x128
pf_at 0xaf8
l_loader_00000af8: mov ebx,[0x1368]
pf_at 0xafd
l_loader_00000afd: mov [es:di],ebx
pf_at 0xb01
l_loader_00000b01: mov [es:di+0x4],esi
pf_at 0xb06
l_loader_00000b06: mov ebx,[0x1374]
pf_at 0xb0b
l_loader_00000b0b: mov [es:di+0x8],ebx
pf_at 0xb10
l_loader_00000b10: mov ebx,[0x1378]
pf_at 0xb15
l_loader_00000b15: mov [es:di+0xc],ebx
pf_at 0xb1a
l_loader_00000b1a: inc dword [es:0x124]
pf_at 0xb20
l_loader_00000b20: add [0x1368],esi
pf_at 0xb25
l_loader_00000b25: sub [0x1370],esi
pf_at 0xb2a
l_loader_00000b2a: add [0x136c],esi
pf_at 0xb2f
l_loader_00000b2f: add [0x1374],esi
pf_at 0xb34
l_loader_00000b34: adc dword [0x1378],byte +0x0
pf_at 0xb3a
l_loader_00000b3a: sub [0x137c],esi
pf_at 0xb3f
l_loader_00000b3f: sbb dword [0x1380],byte +0x0
pf_at 0xb45
l_loader_00000b45: jmp near 0xa76
pf_at 0xb48
l_loader_00000b48: mov ebx,[0x135c]
pf_at 0xb4d
l_loader_00000b4d: test ebx,ebx
pf_at 0xb50
l_loader_00000b50: jnz near 0x91f
pf_at 0xb54
l_loader_00000b54: mov eax,[0x136c]
pf_at 0xb58
l_loader_00000b58: mov [es:0x22c],eax
pf_at 0xb5d
l_loader_00000b5d: test eax,eax
pf_at 0xb60
l_loader_00000b60: jz short 0xb7f
pf_at 0xb62
l_loader_00000b62: mov eax,[0x1364]
pf_at 0xb66
l_loader_00000b66: mov [es:0x228],eax
pf_at 0xb6b
l_loader_00000b6b: mov dword [es:0x230],0xfc000000
pf_at 0xb75
l_loader_00000b75: mov dword [es:0x234],0x4000000
pf_at 0xb7f
l_loader_00000b7f: cmp dword [es:0x8c],byte +0x0
pf_at 0xb86
l_loader_00000b86: jnz short 0xbb3
pf_at 0xb88
l_loader_00000b88: mov eax,[0x1354]
pf_at 0xb8c
l_loader_00000b8c: cmp eax,0x1000000
pf_at 0xb92
l_loader_00000b92: jna short 0xbb3
pf_at 0xb94
l_loader_00000b94: mov dword [es:0x90],0x1000000
pf_at 0xb9e
l_loader_00000b9e: sub eax,0x1000000
pf_at 0xba4
l_loader_00000ba4: mov [es:0x94],eax
pf_at 0xba9
l_loader_00000ba9: mov dword [es:0x8c],0x1
pf_at 0xbb3
l_loader_00000bb3: pop bp
pf_at 0xbb4
l_loader_00000bb4: pop di
pf_at 0xbb5
l_loader_00000bb5: pop si
pf_at 0xbb6
l_loader_00000bb6: pop es
pf_at 0xbb7
l_loader_00000bb7: pop ds
pf_at 0xbb8
l_loader_00000bb8: pop dx
pf_at 0xbb9
l_loader_00000bb9: pop cx
pf_at 0xbba
l_loader_00000bba: pop bx
pf_at 0xbbb
l_loader_00000bbb: pop ax
pf_at 0xbbc
l_loader_00000bbc: ret
pf_at 0xbbd
l_loader_00000bbd: push ax
pf_at 0xbbe
l_loader_00000bbe: push cx
pf_at 0xbbf
l_loader_00000bbf: push ds
pf_at 0xbc0
l_loader_00000bc0: push es
pf_at 0xbc1
l_loader_00000bc1: push di
pf_at 0xbc2
l_loader_00000bc2: mov ax,0x600
pf_at 0xbc5
l_loader_00000bc5: mov es,ax
pf_at 0xbc7
l_loader_00000bc7: xor di,di
pf_at 0xbc9
l_loader_00000bc9: xor ax,ax
pf_at 0xbcb
l_loader_00000bcb: mov cx,0x120
pf_at 0xbce
l_loader_00000bce: cld
pf_at 0xbcf
l_loader_00000bcf: rep stosw
pf_at 0xbd1
l_loader_00000bd1: mov ax,cs
pf_at 0xbd3
l_loader_00000bd3: mov ds,ax
pf_at 0xbd5
l_loader_00000bd5: xor eax,eax
pf_at 0xbd8
l_loader_00000bd8: mov al,[0x1305]
pf_at 0xbdb
l_loader_00000bdb: mov [es:0x68],eax
pf_at 0xbe0
l_loader_00000be0: mov eax,[0x1330]
pf_at 0xbe4
l_loader_00000be4: mov [es:0x70],eax
pf_at 0xbe9
l_loader_00000be9: xor eax,eax
pf_at 0xbec
l_loader_00000bec: mov ax,[0x1310]
pf_at 0xbef
l_loader_00000bef: mov [es:0x74],eax
pf_at 0xbf4
l_loader_00000bf4: mov eax,[0x1334]
pf_at 0xbf8
l_loader_00000bf8: mov [es:0x78],eax
pf_at 0xbfd
l_loader_00000bfd: xor eax,eax
pf_at 0xc00
l_loader_00000c00: mov ax,[0x130e]
pf_at 0xc03
l_loader_00000c03: mov [es:0x7c],eax
pf_at 0xc08
l_loader_00000c08: xor eax,eax
pf_at 0xc0b
l_loader_00000c0b: mov ax,[0x1312]
pf_at 0xc0e
l_loader_00000c0e: mov [es:0x80],eax
pf_at 0xc13
l_loader_00000c13: mov eax,[0x1350]
pf_at 0xc17
l_loader_00000c17: mov [es:0x84],eax
pf_at 0xc1c
l_loader_00000c1c: mov eax,[0x1338]
pf_at 0xc20
l_loader_00000c20: mov [es:0x118],eax
pf_at 0xc25
l_loader_00000c25: mov eax,[0x133c]
pf_at 0xc29
l_loader_00000c29: mov [es:0x11c],eax
pf_at 0xc2e
l_loader_00000c2e: mov eax,[0x1340]
pf_at 0xc32
l_loader_00000c32: mov [es:0x120],eax
pf_at 0xc37
l_loader_00000c37: mov eax,[0x1354]
pf_at 0xc3b
l_loader_00000c3b: mov [es:0x88],eax
pf_at 0xc40
l_loader_00000c40: call 0x77a
pf_at 0xc43
l_loader_00000c43: pop di
pf_at 0xc44
l_loader_00000c44: pop es
pf_at 0xc45
l_loader_00000c45: pop ds
pf_at 0xc46
l_loader_00000c46: pop cx
pf_at 0xc47
l_loader_00000c47: pop ax
pf_at 0xc48
l_loader_00000c48: ret
pf_at 0xc49
l_loader_00000c49: push ax
pf_at 0xc4a
l_loader_00000c4a: push bx
pf_at 0xc4b
l_loader_00000c4b: push cx
pf_at 0xc4c
l_loader_00000c4c: push dx
pf_at 0xc4d
l_loader_00000c4d: push ds
pf_at 0xc4e
l_loader_00000c4e: push es
pf_at 0xc4f
l_loader_00000c4f: mov ax,cs
pf_at 0xc51
l_loader_00000c51: mov ds,ax
pf_at 0xc53
l_loader_00000c53: mov dword [0x131e],0x0
pf_at 0xc5c
l_loader_00000c5c: mov dword [0x1322],0x0
pf_at 0xc65
l_loader_00000c65: mov ax,0x600
pf_at 0xc68
l_loader_00000c68: mov es,ax
pf_at 0xc6a
l_loader_00000c6a: mov dword [es:0x238],0x0
pf_at 0xc74
l_loader_00000c74: mov dword [es:0x23c],0x0
pf_at 0xc7e
l_loader_00000c7e: mov ax,cs
pf_at 0xc80
l_loader_00000c80: mov ds,ax
pf_at 0xc82
l_loader_00000c82: mov eax,[0x132a]
pf_at 0xc86
l_loader_00000c86: test eax,eax
pf_at 0xc89
l_loader_00000c89: jz near 0xd44
pf_at 0xc8d
l_loader_00000c8d: cmp eax,0x4000
pf_at 0xc93
l_loader_00000c93: ja near 0xd44
pf_at 0xc97
l_loader_00000c97: mov [0x1326],eax
pf_at 0xc9b
l_loader_00000c9b: shl eax,byte 0x9
pf_at 0xc9f
l_loader_00000c9f: mov [0x1322],eax
pf_at 0xca3
l_loader_00000ca3: mov dword [0x13c8],0x0
pf_at 0xcac
l_loader_00000cac: mov dword [0x131a],0x500000
pf_at 0xcb5
l_loader_00000cb5: cmp dword [0x1326],byte +0x0
pf_at 0xcbb
l_loader_00000cbb: jz short 0xce8
pf_at 0xcbd
l_loader_00000cbd: mov cx,0x1
pf_at 0xcc0
l_loader_00000cc0: mov ax,0x1000
pf_at 0xcc3
l_loader_00000cc3: mov es,ax
pf_at 0xcc5
l_loader_00000cc5: xor bx,bx
pf_at 0xcc7
l_loader_00000cc7: mov eax,[0x13c8]
pf_at 0xccb
l_loader_00000ccb: call 0xe47
pf_at 0xcce
l_loader_00000cce: jc short 0xd10
pf_at 0xcd0
l_loader_00000cd0: call 0xf1c
pf_at 0xcd3
l_loader_00000cd3: inc dword [0x13c8]
pf_at 0xcd8
l_loader_00000cd8: add dword [0x131a],0x200
pf_at 0xce1
l_loader_00000ce1: dec dword [0x1326]
pf_at 0xce6
l_loader_00000ce6: jmp short 0xcb5
pf_at 0xce8
l_loader_00000ce8: mov dword [0x131e],0x500000
pf_at 0xcf1
l_loader_00000cf1: mov ax,0x600
pf_at 0xcf4
l_loader_00000cf4: mov es,ax
pf_at 0xcf6
l_loader_00000cf6: mov dword [es:0x238],0x500000
pf_at 0xd00
l_loader_00000d00: mov eax,[0x1322]
pf_at 0xd04
l_loader_00000d04: mov [es:0x23c],eax
pf_at 0xd09
l_loader_00000d09: mov byte [0x1308],0x0
pf_at 0xd0e
l_loader_00000d0e: jmp short 0xd44
pf_at 0xd10
l_loader_00000d10: mov ax,cs
pf_at 0xd12
l_loader_00000d12: mov ds,ax
pf_at 0xd14
l_loader_00000d14: mov dword [0x131e],0x0
pf_at 0xd1d
l_loader_00000d1d: mov dword [0x1322],0x0
pf_at 0xd26
l_loader_00000d26: mov ax,0x600
pf_at 0xd29
l_loader_00000d29: mov es,ax
pf_at 0xd2b
l_loader_00000d2b: mov dword [es:0x238],0x0
pf_at 0xd35
l_loader_00000d35: mov dword [es:0x23c],0x0
pf_at 0xd3f
l_loader_00000d3f: mov byte [0x1308],0x0
pf_at 0xd44
l_loader_00000d44: pop es
pf_at 0xd45
l_loader_00000d45: pop ds
pf_at 0xd46
l_loader_00000d46: pop dx
pf_at 0xd47
l_loader_00000d47: pop cx
pf_at 0xd48
l_loader_00000d48: pop bx
pf_at 0xd49
l_loader_00000d49: pop ax
pf_at 0xd4a
l_loader_00000d4a: ret
pf_at 0xd4b
l_loader_00000d4b: mov ax,0x3
pf_at 0xd4e
l_loader_00000d4e: int 0x10
pf_at 0xd50
l_loader_00000d50: ret
pf_at 0xd51
l_loader_00000d51: in al,0x92
pf_at 0xd53
l_loader_00000d53: or al,0x2
pf_at 0xd55
l_loader_00000d55: out 0x92,al
pf_at 0xd57
l_loader_00000d57: ret
pf_at 0xd58
l_loader_00000d58: mov esi,[0x1384]
pf_at 0xd5d
l_loader_00000d5d: cli
pf_at 0xd5e
l_loader_00000d5e: xor eax,eax
pf_at 0xd61
l_loader_00000d61: mov ax,cs
pf_at 0xd63
l_loader_00000d63: mov ds,ax
pf_at 0xd65
l_loader_00000d65: shl eax,byte 0x4
pf_at 0xd69
l_loader_00000d69: lea bx,[0x1238]
pf_at 0xd6d
l_loader_00000d6d: movzx edx,bx
pf_at 0xd71
l_loader_00000d71: add eax,edx
pf_at 0xd74
l_loader_00000d74: mov [0x125a],eax
pf_at 0xd78
l_loader_00000d78: xor eax,eax
pf_at 0xd7b
l_loader_00000d7b: mov ax,cs
pf_at 0xd7d
l_loader_00000d7d: shl eax,byte 0x4
pf_at 0xd81
l_loader_00000d81: lea bx,[0xfff]
pf_at 0xd85
l_loader_00000d85: movzx edx,bx
pf_at 0xd89
l_loader_00000d89: add eax,edx
pf_at 0xd8c
l_loader_00000d8c: mov [0xda1],eax
pf_at 0xd90
l_loader_00000d90: lgdt [0x1258]
pf_at 0xd95
l_loader_00000d95: mov eax,cr0
pf_at 0xd98
l_loader_00000d98: or eax,byte +0x1
pf_at 0xd9c
l_loader_00000d9c: mov cr0,eax
pf_at 0xd9f
l_loader_00000d9f: jmp dword 0x8:0x0
pf_at 0xda7
l_loader_00000da7: ret
pf_at 0xda8
l_loader_00000da8: mov dword [0x13c0],0x0
pf_at 0xdb1
l_loader_00000db1: cmp dword [0x13b8],0x1ee
pf_at 0xdba
l_loader_00000dba: jc short 0xe24
pf_at 0xdbc
l_loader_00000dbc: push ds
pf_at 0xdbd
l_loader_00000dbd: push es
pf_at 0xdbe
l_loader_00000dbe: push si
pf_at 0xdbf
l_loader_00000dbf: push di
pf_at 0xdc0
l_loader_00000dc0: push cx
pf_at 0xdc1
l_loader_00000dc1: mov ax,0x5000
pf_at 0xdc4
l_loader_00000dc4: mov ds,ax
pf_at 0xdc6
l_loader_00000dc6: cmp word [0x0],0x5357
pf_at 0xdcc
l_loader_00000dcc: jnz short 0xe1f
pf_at 0xdce
l_loader_00000dce: cmp word [0x2],0x3154
pf_at 0xdd4
l_loader_00000dd4: jnz short 0xe1f
pf_at 0xdd6
l_loader_00000dd6: cmp word [0x4],byte +0x1
pf_at 0xddb
l_loader_00000ddb: jnz short 0xe1f
pf_at 0xddd
l_loader_00000ddd: cmp word [0x6],byte +0x0
pf_at 0xde2
l_loader_00000de2: jnz short 0xe1f
pf_at 0xde4
l_loader_00000de4: mov ax,cs
pf_at 0xde6
l_loader_00000de6: mov es,ax
pf_at 0xde8
l_loader_00000de8: lea di,[0x13fe]
pf_at 0xdec
l_loader_00000dec: mov si,0x1ec
pf_at 0xdef
l_loader_00000def: mov cx,0xef
pf_at 0xdf2
l_loader_00000df2: cld
pf_at 0xdf3
l_loader_00000df3: lodsb
pf_at 0xdf4
l_loader_00000df4: stosb
pf_at 0xdf5
l_loader_00000df5: test al,al
pf_at 0xdf7
l_loader_00000df7: jz short 0xdff
pf_at 0xdf9
l_loader_00000df9: loop 0xdf3
pf_at 0xdfb
l_loader_00000dfb: mov byte [es:di],0x0
pf_at 0xdff
l_loader_00000dff: pop cx
pf_at 0xe00
l_loader_00000e00: pop di
pf_at 0xe01
l_loader_00000e01: pop si
pf_at 0xe02
l_loader_00000e02: pop es
pf_at 0xe03
l_loader_00000e03: pop ds
pf_at 0xe04
l_loader_00000e04: mov byte [0x1308],0x0
pf_at 0xe09
l_loader_00000e09: mov ax,0x6000
pf_at 0xe0c
l_loader_00000e0c: lea si,[0x13fe]
pf_at 0xe10
l_loader_00000e10: call 0x2f3
pf_at 0xe13
l_loader_00000e13: jc short 0xe24
pf_at 0xe15
l_loader_00000e15: mov eax,[0x13a8]
pf_at 0xe19
l_loader_00000e19: mov [0x13c0],eax
pf_at 0xe1d
l_loader_00000e1d: clc
pf_at 0xe1e
l_loader_00000e1e: ret
pf_at 0xe1f
l_loader_00000e1f: pop cx
pf_at 0xe20
l_loader_00000e20: pop di
pf_at 0xe21
l_loader_00000e21: pop si
pf_at 0xe22
l_loader_00000e22: pop es
pf_at 0xe23
l_loader_00000e23: pop ds
pf_at 0xe24
l_loader_00000e24: stc
pf_at 0xe25
l_loader_00000e25: ret
pf_at 0xe26
l_loader_00000e26: push ax
pf_at 0xe27
l_loader_00000e27: mov al,[si]
pf_at 0xe29
l_loader_00000e29: cmp al,0x2f
pf_at 0xe2b
l_loader_00000e2b: jnz short 0xe30
pf_at 0xe2d
l_loader_00000e2d: inc si
pf_at 0xe2e
l_loader_00000e2e: jmp short 0xe27
pf_at 0xe30
l_loader_00000e30: mov al,[si]
pf_at 0xe32
l_loader_00000e32: mov ah,[es:di]
pf_at 0xe35
l_loader_00000e35: cmp al,ah
pf_at 0xe37
l_loader_00000e37: jnz short 0xe44
pf_at 0xe39
l_loader_00000e39: cmp al,0x0
pf_at 0xe3b
l_loader_00000e3b: jz short 0xe41
pf_at 0xe3d
l_loader_00000e3d: inc si
pf_at 0xe3e
l_loader_00000e3e: inc di
pf_at 0xe3f
l_loader_00000e3f: jmp short 0xe30
pf_at 0xe41
l_loader_00000e41: clc
pf_at 0xe42
l_loader_00000e42: pop ax
pf_at 0xe43
l_loader_00000e43: ret
pf_at 0xe44
l_loader_00000e44: stc
pf_at 0xe45
l_loader_00000e45: pop ax
pf_at 0xe46
l_loader_00000e46: ret
pf_at 0xe47
l_loader_00000e47: push ax
pf_at 0xe48
l_loader_00000e48: mov ax,cs
pf_at 0xe4a
l_loader_00000e4a: mov ds,ax
pf_at 0xe4c
l_loader_00000e4c: pop ax
pf_at 0xe4d
l_loader_00000e4d: mov byte [0x1308],0x0
pf_at 0xe52
l_loader_00000e52: call 0xed4
pf_at 0xe55
l_loader_00000e55: mov ah,0x42
pf_at 0xe57
l_loader_00000e57: int 0x13
pf_at 0xe59
l_loader_00000e59: call 0xf10
pf_at 0xe5c
l_loader_00000e5c: jnc short 0xe84
pf_at 0xe5e
l_loader_00000e5e: mov [0x1308],ah
pf_at 0xe62
l_loader_00000e62: xor ah,ah
pf_at 0xe64
l_loader_00000e64: mov dl,[0x1305]
pf_at 0xe68
l_loader_00000e68: int 0x13
pf_at 0xe6a
l_loader_00000e6a: call 0xf10
pf_at 0xe6d
l_loader_00000e6d: call 0xed4
pf_at 0xe70
l_loader_00000e70: mov ah,0x42
pf_at 0xe72
l_loader_00000e72: int 0x13
pf_at 0xe74
l_loader_00000e74: call 0xf10
pf_at 0xe77
l_loader_00000e77: jnc short 0xe84
pf_at 0xe79
l_loader_00000e79: mov [0x1308],ah
pf_at 0xe7d
l_loader_00000e7d: mov byte [0x1307],0x44
pf_at 0xe82
l_loader_00000e82: stc
pf_at 0xe83
l_loader_00000e83: ret
pf_at 0xe84
l_loader_00000e84: clc
pf_at 0xe85
l_loader_00000e85: ret
pf_at 0xe86
l_loader_00000e86: cmp word [0x1314],byte +0x0
pf_at 0xe8b
l_loader_00000e8b: jz short 0xed2
pf_at 0xe8d
l_loader_00000e8d: mov cx,0x1
pf_at 0xe90
l_loader_00000e90: mov ax,0x1000
pf_at 0xe93
l_loader_00000e93: mov es,ax
pf_at 0xe95
l_loader_00000e95: xor bx,bx
pf_at 0xe97
l_loader_00000e97: mov eax,[0x13c8]
pf_at 0xe9b
l_loader_00000e9b: call 0xe47
pf_at 0xe9e
l_loader_00000e9e: jc short 0xed0
pf_at 0xea0
l_loader_00000ea0: push ds
pf_at 0xea1
l_loader_00000ea1: push es
pf_at 0xea2
l_loader_00000ea2: push si
pf_at 0xea3
l_loader_00000ea3: push di
pf_at 0xea4
l_loader_00000ea4: push cx
pf_at 0xea5
l_loader_00000ea5: mov ax,[0x1316]
pf_at 0xea8
l_loader_00000ea8: push ax
pf_at 0xea9
l_loader_00000ea9: mov ax,0x1000
pf_at 0xeac
l_loader_00000eac: mov ds,ax
pf_at 0xeae
l_loader_00000eae: xor si,si
pf_at 0xeb0
l_loader_00000eb0: pop ax
pf_at 0xeb1
l_loader_00000eb1: mov es,ax
pf_at 0xeb3
l_loader_00000eb3: xor di,di
pf_at 0xeb5
l_loader_00000eb5: mov cx,0x100
pf_at 0xeb8
l_loader_00000eb8: cld
pf_at 0xeb9
l_loader_00000eb9: rep movsw
pf_at 0xebb
l_loader_00000ebb: pop cx
pf_at 0xebc
l_loader_00000ebc: pop di
pf_at 0xebd
l_loader_00000ebd: pop si
pf_at 0xebe
l_loader_00000ebe: pop es
pf_at 0xebf
l_loader_00000ebf: pop ds
pf_at 0xec0
l_loader_00000ec0: add word [0x1316],byte +0x20
pf_at 0xec5
l_loader_00000ec5: dec word [0x1314]
pf_at 0xec9
l_loader_00000ec9: inc dword [0x13c8]
pf_at 0xece
l_loader_00000ece: jmp short 0xe86
pf_at 0xed0
l_loader_00000ed0: stc
pf_at 0xed1
l_loader_00000ed1: ret
pf_at 0xed2
l_loader_00000ed2: clc
pf_at 0xed3
l_loader_00000ed3: ret
pf_at 0xed4
l_loader_00000ed4: mov [0x1318],es
pf_at 0xed8
l_loader_00000ed8: mov dl,[0x1305]
pf_at 0xedc
l_loader_00000edc: mov di,0x1000
pf_at 0xedf
l_loader_00000edf: mov es,di
pf_at 0xee1
l_loader_00000ee1: mov word [es:0x400],0x10
pf_at 0xee8
l_loader_00000ee8: mov [es:0x402],cx
pf_at 0xeed
l_loader_00000eed: mov [es:0x404],bx
pf_at 0xef2
l_loader_00000ef2: mov bp,[0x1318]
pf_at 0xef6
l_loader_00000ef6: mov [es:0x406],bp
pf_at 0xefb
l_loader_00000efb: mov [es:0x408],eax
pf_at 0xf00
l_loader_00000f00: mov dword [es:0x40c],0x0
pf_at 0xf0a
l_loader_00000f0a: mov ds,di
pf_at 0xf0c
l_loader_00000f0c: mov si,0x400
pf_at 0xf0f
l_loader_00000f0f: ret
pf_at 0xf10
l_loader_00000f10: push ax
pf_at 0xf11
l_loader_00000f11: mov ax,cs
pf_at 0xf13
l_loader_00000f13: mov ds,ax
pf_at 0xf15
l_loader_00000f15: mov ax,[0x1318]
pf_at 0xf18
l_loader_00000f18: mov es,ax
pf_at 0xf1a
l_loader_00000f1a: pop ax
pf_at 0xf1b
l_loader_00000f1b: ret
pf_at 0xf1c
l_loader_00000f1c: push ax
pf_at 0xf1d
l_loader_00000f1d: push bx
pf_at 0xf1e
l_loader_00000f1e: push dx
pf_at 0xf1f
l_loader_00000f1f: push ds
pf_at 0xf20
l_loader_00000f20: push es
pf_at 0xf21
l_loader_00000f21: cli
pf_at 0xf22
l_loader_00000f22: mov ax,cs
pf_at 0xf24
l_loader_00000f24: mov ds,ax
pf_at 0xf26
l_loader_00000f26: xor eax,eax
pf_at 0xf29
l_loader_00000f29: mov ax,cs
pf_at 0xf2b
l_loader_00000f2b: shl eax,byte 0x4
pf_at 0xf2f
l_loader_00000f2f: lea bx,[0x1238]
pf_at 0xf33
l_loader_00000f33: movzx edx,bx
pf_at 0xf37
l_loader_00000f37: add eax,edx
pf_at 0xf3a
l_loader_00000f3a: mov [0x125a],eax
pf_at 0xf3e
l_loader_00000f3e: xor eax,eax
pf_at 0xf41
l_loader_00000f41: mov ax,cs
pf_at 0xf43
l_loader_00000f43: shl eax,byte 0x4
pf_at 0xf47
l_loader_00000f47: lea bx,[0xf7a]
pf_at 0xf4b
l_loader_00000f4b: movzx edx,bx
pf_at 0xf4f
l_loader_00000f4f: add eax,edx
pf_at 0xf52
l_loader_00000f52: mov [0xf67],eax
pf_at 0xf56
l_loader_00000f56: lgdt [0x1258]
pf_at 0xf5b
l_loader_00000f5b: mov eax,cr0
pf_at 0xf5e
l_loader_00000f5e: or eax,byte +0x1
pf_at 0xf62
l_loader_00000f62: mov cr0,eax
pf_at 0xf65
l_loader_00000f65: jmp dword 0x8:0x0
pf_at 0xf6d
l_loader_00000f6d: mov ax,cs
pf_at 0xf6f
l_loader_00000f6f: mov ds,ax
pf_at 0xf71
l_loader_00000f71: mov es,ax
pf_at 0xf73
l_loader_00000f73: sti
pf_at 0xf74
l_loader_00000f74: pop es
pf_at 0xf75
l_loader_00000f75: pop ds
pf_at 0xf76
l_loader_00000f76: pop dx
pf_at 0xf77
l_loader_00000f77: pop bx
pf_at 0xf78
l_loader_00000f78: pop ax
pf_at 0xf79
l_loader_00000f79: ret

section part1 start=0xf7a vstart=0x8f7a align=1
bits 32
jmp pf_copy_sector32
times 0x23-($-$$) db 0x90

section part2 start=0xf9d vstart=0xf9d align=1
bits 16
pf_at 0x0
l_loader_00000f9d: mov eax,cr0
pf_at 0x3
l_loader_00000fa0: and eax,byte -0x2
pf_at 0x7
l_loader_00000fa4: mov cr0,eax
pf_at 0xa
l_loader_00000fa7: jmp 0x800:0xf6d
pf_at 0xf
l_loader_00000fac: push ax
pf_at 0x10
l_loader_00000fad: push bx
pf_at 0x11
l_loader_00000fae: push cx
pf_at 0x12
l_loader_00000faf: push dx
pf_at 0x13
l_loader_00000fb0: push si
pf_at 0x14
l_loader_00000fb1: push di
pf_at 0x15
l_loader_00000fb2: push bp
pf_at 0x16
l_loader_00000fb3: push ds
pf_at 0x17
l_loader_00000fb4: push es
pf_at 0x18
l_loader_00000fb5: mov ah,0xe
pf_at 0x1a
l_loader_00000fb7: mov bx,0x7
pf_at 0x1d
l_loader_00000fba: int 0x10
pf_at 0x1f
l_loader_00000fbc: pop es
pf_at 0x20
l_loader_00000fbd: pop ds
pf_at 0x21
l_loader_00000fbe: pop bp
pf_at 0x22
l_loader_00000fbf: pop di
pf_at 0x23
l_loader_00000fc0: pop si
pf_at 0x24
l_loader_00000fc1: pop dx
pf_at 0x25
l_loader_00000fc2: pop cx
pf_at 0x26
l_loader_00000fc3: pop bx
pf_at 0x27
l_loader_00000fc4: pop ax
pf_at 0x28
l_loader_00000fc5: ret
pf_at 0x29
l_loader_00000fc6: cld
pf_at 0x2a
l_loader_00000fc7: lodsb
pf_at 0x2b
l_loader_00000fc8: test al,al
pf_at 0x2d
l_loader_00000fca: jz short 0xfd1
pf_at 0x2f
l_loader_00000fcc: call 0xfac
pf_at 0x32
l_loader_00000fcf: jmp short 0xfc7
pf_at 0x34
l_loader_00000fd1: ret
pf_at 0x35
l_loader_00000fd2: and al,0xf
pf_at 0x37
l_loader_00000fd4: cmp al,0x9
pf_at 0x39
l_loader_00000fd6: jna short 0xfdc
pf_at 0x3b
l_loader_00000fd8: add al,0x37
pf_at 0x3d
l_loader_00000fda: jmp short 0xfde
pf_at 0x3f
l_loader_00000fdc: add al,0x30
pf_at 0x41
l_loader_00000fde: call 0xfac
pf_at 0x44
l_loader_00000fe1: ret
pf_at 0x45
l_loader_00000fe2: push ax
pf_at 0x46
l_loader_00000fe3: push bx
pf_at 0x47
l_loader_00000fe4: mov bl,al
pf_at 0x49
l_loader_00000fe6: shr al,byte 0x4
pf_at 0x4c
l_loader_00000fe9: call 0xfd2
pf_at 0x4f
l_loader_00000fec: mov al,bl
pf_at 0x51
l_loader_00000fee: call 0xfd2
pf_at 0x54
l_loader_00000ff1: pop bx
pf_at 0x55
l_loader_00000ff2: pop ax
pf_at 0x56
l_loader_00000ff3: ret
pf_at 0x57
l_loader_00000ff4: push ax
pf_at 0x58
l_loader_00000ff5: xchg ah,al
pf_at 0x5a
l_loader_00000ff7: call 0xfe2
pf_at 0x5d
l_loader_00000ffa: pop ax
pf_at 0x5e
l_loader_00000ffb: call 0xfe2
pf_at 0x61
l_loader_00000ffe: ret

section part3 start=0xfff vstart=0x8fff align=1
bits 32
pf_at 0x0
l_loader_00008fff: mov ax,0x10
pf_at 0x4
l_loader_00009003: o16 mov ds,ax
pf_at 0x7
l_loader_00009006: o16 mov es,ax
pf_at 0xa
l_loader_00009009: o16 mov fs,ax
pf_at 0xd
l_loader_0000900c: o16 mov gs,ax
pf_at 0x10
l_loader_0000900f: o16 mov ss,ax
pf_at 0x13
l_loader_00009012: mov esp,0x17f000
pf_at 0x18
l_loader_00009017: cld
pf_at 0x19
l_loader_00009018: call 0x90f5
pf_at 0x1e
l_loader_0000901d: cmp dword [dword 0x938c],byte +0x2
pf_at 0x25
l_loader_00009024: jnz short 0x902b
pf_at 0x27
l_loader_00009026: mov esp,0x1000000
pf_at 0x2c
l_loader_0000902b: call 0x9032
pf_at 0x31
l_loader_00009030: jmp esi
pf_at 0x33
l_loader_00009032: cmp dword [dword 0x938c],byte +0x2
pf_at 0x3a
l_loader_00009039: jz short 0x903c
pf_at 0x3c
l_loader_0000903b: ret
pf_at 0x3d
l_loader_0000903c: pusha
pf_at 0x3e
l_loader_0000903d: cld
pf_at 0x3f
l_loader_0000903e: mov ecx,[dword 0x93a0]
pf_at 0x45
l_loader_00009044: test ecx,ecx
pf_at 0x47
l_loader_00009046: jz short 0x9064
pf_at 0x49
l_loader_00009048: mov esi,0x20028
pf_at 0x4e
l_loader_0000904d: add esi,[dword 0x9398]
pf_at 0x54
l_loader_00009053: mov edi,[dword 0x9390]
pf_at 0x5a
l_loader_00009059: add edi,[dword 0x939c]
pf_at 0x60
l_loader_0000905f: call 0x90cc
pf_at 0x65
l_loader_00009064: mov esi,0x20028
pf_at 0x6a
l_loader_00009069: mov edi,[dword 0x9390]
pf_at 0x70
l_loader_0000906f: mov ecx,[dword 0x9398]
pf_at 0x76
l_loader_00009075: call 0x90cc
pf_at 0x7b
l_loader_0000907a: mov ebx,[dword 0x9398]
pf_at 0x81
l_loader_00009080: mov eax,[0x93a0]
pf_at 0x86
l_loader_00009085: test eax,eax
pf_at 0x88
l_loader_00009087: jz short 0x90b1
pf_at 0x8a
l_loader_00009089: mov edx,[dword 0x939c]
pf_at 0x90
l_loader_0000908f: cmp edx,ebx
pf_at 0x92
l_loader_00009091: jna short 0x90a4
pf_at 0x94
l_loader_00009093: mov edi,[dword 0x9390]
pf_at 0x9a
l_loader_00009099: add edi,ebx
pf_at 0x9c
l_loader_0000909b: mov ecx,edx
pf_at 0x9e
l_loader_0000909d: sub ecx,ebx
pf_at 0xa0
l_loader_0000909f: call 0x90eb
pf_at 0xa5
l_loader_000090a4: mov eax,[0x93a0]
pf_at 0xaa
l_loader_000090a9: add edx,eax
pf_at 0xac
l_loader_000090ab: cmp edx,ebx
pf_at 0xae
l_loader_000090ad: jna short 0x90b1
pf_at 0xb0
l_loader_000090af: mov ebx,edx
pf_at 0xb2
l_loader_000090b1: mov ecx,[dword 0x9394]
pf_at 0xb8
l_loader_000090b7: cmp ebx,ecx
pf_at 0xba
l_loader_000090b9: jnc short 0x90ca
pf_at 0xbc
l_loader_000090bb: mov edi,[dword 0x9390]
pf_at 0xc2
l_loader_000090c1: add edi,ebx
pf_at 0xc4
l_loader_000090c3: sub ecx,ebx
pf_at 0xc6
l_loader_000090c5: call 0x90eb
pf_at 0xcb
l_loader_000090ca: popa
pf_at 0xcc
l_loader_000090cb: ret
pf_at 0xcd
l_loader_000090cc: test ecx,ecx
pf_at 0xcf
l_loader_000090ce: jz short 0x90ea
pf_at 0xd1
l_loader_000090d0: cmp edi,esi
pf_at 0xd3
l_loader_000090d2: jna short 0x90e7
pf_at 0xd5
l_loader_000090d4: mov eax,esi
pf_at 0xd7
l_loader_000090d6: add eax,ecx
pf_at 0xd9
l_loader_000090d8: cmp edi,eax
pf_at 0xdb
l_loader_000090da: jnc short 0x90e7
pf_at 0xdd
l_loader_000090dc: add esi,ecx
pf_at 0xdf
l_loader_000090de: dec esi
pf_at 0xe0
l_loader_000090df: add edi,ecx
pf_at 0xe2
l_loader_000090e1: dec edi
pf_at 0xe3
l_loader_000090e2: std
pf_at 0xe4
l_loader_000090e3: rep movsb
pf_at 0xe6
l_loader_000090e5: cld
pf_at 0xe7
l_loader_000090e6: ret
pf_at 0xe8
l_loader_000090e7: cld
pf_at 0xe9
l_loader_000090e8: rep movsb
pf_at 0xeb
l_loader_000090ea: ret
pf_at 0xec
l_loader_000090eb: test ecx,ecx
pf_at 0xee
l_loader_000090ed: jz short 0x90f4
pf_at 0xf0
l_loader_000090ef: xor eax,eax
pf_at 0xf2
l_loader_000090f1: cld
pf_at 0xf3
l_loader_000090f2: rep stosb
pf_at 0xf5
l_loader_000090f4: ret
pf_at 0xf6
l_loader_000090f5: pusha
pf_at 0xf7
l_loader_000090f6: pushf
pf_at 0xf8
l_loader_000090f7: pop eax
pf_at 0xf9
l_loader_000090f8: mov edx,eax
pf_at 0xfb
l_loader_000090fa: xor eax,0x200000
pf_at 0x100
l_loader_000090ff: push eax
pf_at 0x101
l_loader_00009100: popf
pf_at 0x102
l_loader_00009101: pushf
pf_at 0x103
l_loader_00009102: pop eax
pf_at 0x104
l_loader_00009103: push edx
pf_at 0x105
l_loader_00009104: popf
pf_at 0x106
l_loader_00009105: xor eax,edx
pf_at 0x108
l_loader_00009107: test eax,0x200000
pf_at 0x10d
l_loader_0000910c: jz near 0x91ee
pf_at 0x113
l_loader_00009112: mov eax,0x1
pf_at 0x118
l_loader_00009117: cpuid
pf_at 0x11a
l_loader_00009119: test edx,0x40
pf_at 0x120
l_loader_0000911f: jz near 0x91ee
pf_at 0x126
l_loader_00009125: mov edi,0x2f8000
pf_at 0x12b
l_loader_0000912a: xor eax,eax
pf_at 0x12d
l_loader_0000912c: mov ecx,0x1400
pf_at 0x132
l_loader_00009131: rep stosd
pf_at 0x134
l_loader_00009133: mov dword [dword 0x2f8000],0x2f9001
pf_at 0x13e
l_loader_0000913d: mov dword [dword 0x2f8008],0x2fa001
pf_at 0x148
l_loader_00009147: mov dword [dword 0x2f8010],0x2fb001
pf_at 0x152
l_loader_00009151: mov dword [dword 0x2f8018],0x2fc001
pf_at 0x15c
l_loader_0000915b: mov edi,0x2f9000
pf_at 0x161
l_loader_00009160: mov eax,0x83
pf_at 0x166
l_loader_00009165: mov ecx,0x800
pf_at 0x16b
l_loader_0000916a: mov [edi],eax
pf_at 0x16d
l_loader_0000916c: mov dword [edi+0x4],0x0
pf_at 0x174
l_loader_00009173: add eax,0x200000
pf_at 0x179
l_loader_00009178: add edi,byte +0x8
pf_at 0x17c
l_loader_0000917b: loop 0x916a
pf_at 0x17e
l_loader_0000917d: mov ecx,[dword 0x6124]
pf_at 0x184
l_loader_00009183: mov esi,0x6128
pf_at 0x189
l_loader_00009188: test ecx,ecx
pf_at 0x18b
l_loader_0000918a: jz short 0x91d0
pf_at 0x18d
l_loader_0000918c: mov eax,[esi]
pf_at 0x18f
l_loader_0000918e: mov ebx,[esi+0x4]
pf_at 0x192
l_loader_00009191: mov edx,[esi+0x8]
pf_at 0x195
l_loader_00009194: mov ebp,[esi+0xc]
pf_at 0x198
l_loader_00009197: test ebx,ebx
pf_at 0x19a
l_loader_00009199: jz short 0x91ca
pf_at 0x19c
l_loader_0000919b: mov edi,eax
pf_at 0x19e
l_loader_0000919d: shr edi,byte 0x15
pf_at 0x1a1
l_loader_000091a0: lea edi,[edi*8+0x2f9000]
pf_at 0x1a8
l_loader_000091a7: shr ebx,byte 0x15
pf_at 0x1ab
l_loader_000091aa: mov eax,edx
pf_at 0x1ad
l_loader_000091ac: and eax,0xffe00000
pf_at 0x1b2
l_loader_000091b1: or eax,0x83
pf_at 0x1b7
l_loader_000091b6: mov [edi],eax
pf_at 0x1b9
l_loader_000091b8: mov [edi+0x4],ebp
pf_at 0x1bc
l_loader_000091bb: add edx,0x200000
pf_at 0x1c2
l_loader_000091c1: adc ebp,byte +0x0
pf_at 0x1c5
l_loader_000091c4: add edi,byte +0x8
pf_at 0x1c8
l_loader_000091c7: dec ebx
pf_at 0x1c9
l_loader_000091c8: jnz short 0x91aa
pf_at 0x1cb
l_loader_000091ca: add esi,byte +0x10
pf_at 0x1ce
l_loader_000091cd: dec ecx
pf_at 0x1cf
l_loader_000091ce: jmp short 0x9188
pf_at 0x1d1
l_loader_000091d0: mov eax,cr4
pf_at 0x1d4
l_loader_000091d3: or eax,byte +0x20
pf_at 0x1d7
l_loader_000091d6: mov cr4,eax
pf_at 0x1da
l_loader_000091d9: mov eax,0x2f8000
pf_at 0x1df
l_loader_000091de: mov cr3,eax
pf_at 0x1e2
l_loader_000091e1: mov eax,cr0
pf_at 0x1e5
l_loader_000091e4: or eax,0x80000000
pf_at 0x1ea
l_loader_000091e9: mov cr0,eax
pf_at 0x1ed
l_loader_000091ec: jmp short 0x9230
pf_at 0x1ef
l_loader_000091ee: mov ecx,[dword 0x6124]
pf_at 0x1f5
l_loader_000091f4: test ecx,ecx
pf_at 0x1f7
l_loader_000091f6: jz short 0x9230
pf_at 0x1f9
l_loader_000091f8: sub [dword 0x608c],ecx
pf_at 0x1ff
l_loader_000091fe: mov dword [dword 0x6124],0x0
pf_at 0x209
l_loader_00009208: mov dword [dword 0x6228],0x0
pf_at 0x213
l_loader_00009212: mov dword [dword 0x622c],0x0
pf_at 0x21d
l_loader_0000921c: mov dword [dword 0x6230],0x0
pf_at 0x227
l_loader_00009226: mov dword [dword 0x6234],0x0
pf_at 0x231
l_loader_00009230: popa
pf_at 0x232
l_loader_00009231: ret

section part4 start=0x1232 vstart=0x0 align=1
    db 0x8d, 0xb4
    times 2 db 0
    db 0x66, 0x90
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
    times 3 db 0
    db 0x9a
    times 2 db 0
    db 0x1f
    times 5 db 0
    db "Permafrost stage2 failed"
    times 1 db 0
    db "WB2 "
    times 1 db 0
    db "/OpenBIOS.wmlp"
    times 1 db 0
    db "baremetal/demo_image.raw"
    times 1 db 0
    db "baremetal/demo_audio.raw"
    times 1 db 0
    db "/startup.ws"
    times 1 db 0
    db "baremetal/startup_manifest.raw"
    times 1 db 0
    db "baremetal/startup_bundle.raw"
    times 52 db 0
    db 0x41
    times 30 db 0
    db 0x04
    times 1192 db 0

%include "src/openbios-ramdisk.inc"
