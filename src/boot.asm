; Permafrost 0.4 — recovered assembly, Pooka's Free Software License.
; Fixed virtual addresses preserve compatibility with original raw programs.
; at() retains original instruction boundaries when NASM shortens an encoding.
%macro pf_at 1
    times %1 - ($-$$) db 0x90
%endmacro

section part0 start=0x0 vstart=0x0 align=1
bits 16
pf_at 0x0
l_boot_00000000: cli
pf_at 0x1
l_boot_00000001: mov ax,0x7c0
pf_at 0x4
l_boot_00000004: mov ds,ax
pf_at 0x6
l_boot_00000006: mov es,ax
pf_at 0x8
l_boot_00000008: xor ax,ax
pf_at 0xa
l_boot_0000000a: mov ss,ax
pf_at 0xc
l_boot_0000000c: mov sp,0x7000
pf_at 0xf
l_boot_0000000f: sti
pf_at 0x10
l_boot_00000010: mov [0x70],dl
pf_at 0x14
l_boot_00000014: lea si,[0x60]
pf_at 0x18
l_boot_00000018: mov ah,0x42
pf_at 0x1a
l_boot_0000001a: int 0x13
pf_at 0x1c
l_boot_0000001c: jc short 0x27
pf_at 0x1e
l_boot_0000001e: mov dl,[0x70]
pf_at 0x22
l_boot_00000022: jmp 0x800:0x0
pf_at 0x27
l_boot_00000027: lea si,[0x40]
pf_at 0x2b
l_boot_0000002b: call 0x31
pf_at 0x2e
l_boot_0000002e: hlt
pf_at 0x2f
l_boot_0000002f: jmp short 0x2e
pf_at 0x31
l_boot_00000031: lodsb
pf_at 0x32
l_boot_00000032: test al,al
pf_at 0x34
l_boot_00000034: jz short 0x3f
pf_at 0x36
l_boot_00000036: mov ah,0xe
pf_at 0x38
l_boot_00000038: mov bx,0x7
pf_at 0x3b
l_boot_0000003b: int 0x10
pf_at 0x3d
l_boot_0000003d: jmp short 0x31
pf_at 0x3f
l_boot_0000003f: ret

section part1 start=0x40 vstart=0x0 align=1
    db "Permafrost BIOS boot failed"
    times 1 db 0
    db 0x8d, 0xb4
    times 2 db 0
    db 0x10
    times 1 db 0
    db 0x40
    times 4 db 0
    db 0x08, 0x01
    times 405 db 0
    db 0x55, 0xaa
