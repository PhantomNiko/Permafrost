; Permafrost 0.4 IA64-labelled entry. Pooka's Free Software License.
; The public applications and kernel run as i386 compatibility-mode code.
bits 32
section image start=0 vstart=0x20000 align=1
incbin "kernel.bin",0,8
    dd pf_long_start
    dd pf_image_end-$$
incbin "kernel.bin",16
    times 0x63000-($-$$) db 0
pf_long_start:
    cli
    call .position
.position:
    pop ebx
    sub ebx,.position-pf_long_start
    lea eax,[ebx+.gdt-pf_long_start]
    mov [ebx+.gdtr+2-pf_long_start],eax
    lea eax,[ebx+.long_mode-pf_long_start]
    mov [ebx+.far_pointer-pf_long_start],eax
    lgdt [ebx+.gdtr-pf_long_start]
    mov eax,cr4
    or eax,0x20
    mov cr4,eax
    mov eax,cr0
    and eax,0x7fffffff
    mov cr0,eax
    mov ecx,0xc0000080
    rdmsr
    or eax,0x100
    wrmsr
    mov eax,0x2f7000
    mov cr3,eax
    mov eax,cr0
    or eax,0x80000000
    mov cr0,eax
    jmp far [ebx+.far_pointer-pf_long_start]
.far_pointer:
    dd 0
    dw 0x18
align 8,db 0
.gdt:
    dq 0,0x00cf9a000000ffff,0x00cf92000000ffff,0x00af9a000000ffff
.gdtr:
    dw 31
    dd 0
bits 64
.long_mode:
    mov eax,[abs 0x6238]
    or eax,2
    mov [abs 0x6238],eax
    mov ax,0x10
    mov ds,ax
    mov es,ax
    mov ss,ax
    mov rsp,0x17f000
    mov eax,[rbx+.compat_entry-pf_long_start]
    mov ecx,8
    push rcx
    push rax
    retfq
align 8,db 0
    db "WB64ENTR"
.compat_entry:
    dd 0x20010
pf_image_end:
