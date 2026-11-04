; Permafrost 0.6 OpenBIOS RAM disk handoff. Pooka's Free Software License.
; The source firmware consumes the image through its client interface. BIOS
; transfers use a conventional-memory bounce buffer and the existing GDT bridge.
%ifndef PF_RAMDISK_SECTORS
%define PF_RAMDISK_SECTORS 81920
%endif
section ramdisk_loader start=0x1800 vstart=0x1800 align=1
bits 16
pf_prepare_openbios_boot:
    pushad
    push ds
    push es
    mov byte [cs:pf_copy_ramdisk],1
    mov dword [cs:pf_disk_lba],0
    mov dword [cs:pf_disk_destination],0x1000000
.next:
    mov eax,PF_RAMDISK_SECTORS
    sub eax,[cs:pf_disk_lba]
    jz .done
    cmp eax,64
    jbe .count
    mov eax,64
.count:
    mov [cs:pf_disk_count],eax
    xor bx,bx
    mov ds,bx
    mov word [0x7100],0x10
    mov [0x7102],ax
    mov word [0x7104],0
    mov word [0x7106],0x9000
    mov eax,[cs:pf_disk_lba]
    mov [0x7108],eax
    mov dword [0x710c],0
    mov si,0x7100
    mov dl,[cs:0x1305]
    mov ah,0x42
    sti
    int 0x13
    jc .failed
    call 0xf1c
    mov eax,[cs:pf_disk_count]
    add [cs:pf_disk_lba],eax
    shl eax,9
    add [cs:pf_disk_destination],eax
    jmp .next
.done:
    xor ax,ax
    mov ds,ax
    mov dword [0x6238],0x1000000
    mov dword [0x623c],PF_RAMDISK_SECTORS*512
    mov byte [cs:pf_copy_ramdisk],0
    pop es
    pop ds
    popad
    jmp 0xd58
.failed:
    pop es
    pop ds
    popad
    jmp 0xa1
pf_copy_ramdisk: db 0
align 4
pf_disk_lba: dd 0
pf_disk_destination: dd 0
pf_disk_count: dd 0

section ramdisk_copy start=0x1c00 vstart=0x9c00 align=1
bits 32
pf_copy_sector32:
    mov ax,0x10
    mov ds,ax
    mov es,ax
    cmp byte [0x8000+pf_copy_ramdisk],0
    jne .ramdisk
    mov esi,0x10000
    mov edi,[0x931a]
    mov ecx,128
    jmp .copy
.ramdisk:
    mov esi,0x90000
    mov edi,[0x8000+pf_disk_destination]
    mov ecx,[0x8000+pf_disk_count]
    shl ecx,7
.copy:
    cld
    rep movsd
    jmp 0x18:0x8f9d
section padding start=0x1d00 vstart=0 align=1
times 32768-0x1d00 db 0
