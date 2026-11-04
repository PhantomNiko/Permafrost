%include "kernel_c.inc"
; Permafrost 0.6 OpenBIOS entry; Pooka's Free Software License.
section header start=0 vstart=0 align=1
db "WMLP"
dd 1,0x20010,0x1fc
section entry start=0x10 vstart=0x20010 align=1
bits 32
pf_of_entry:
cld
mov dword [0x20194],0
mov dword [0x20198],0
mov dword [0x201c8],0
mov dword [0x201cc],0
cmp eax,0x4f465742
jne .ready
mov dword [0x20194],1
mov [0x20198],ebx
mov [0x201c8],ecx
mov [0x201cc],edx
.ready:
jmp pf_relocate
section client_state start=0x194 vstart=0x20194 align=1
    times 14 db 0
    db 0x66, 0x90
    times 88 db 0
%include "kernel_abi.inc"
section initial_state start=pf_state_start-0x20000 vstart=pf_state_start align=1
incbin "kernel_state.bin"
section payload start=pf_payload_offset vstart=0x20000+pf_payload_offset align=1
bits 32
incbin "kernel_unpack.bin"
pf_packed_start:
incbin "kernel_packed.bin"
pf_relocate:
mov esp,pf_stack_top
fninit
cld
push dword pf_packed_size
push dword pf_packed_start
push dword pf_unpacked_size
push dword pf_core_base
call pf_unpack
add esp,16
test eax,eax
jnz pf_stage2
.halt:
cli
hlt
jmp .halt
%if $-$$+pf_payload_offset >= 0x80000
%error "OpenBIOS kernel staging reaches VGA memory"
%endif
%if pf_core_base+pf_unpacked_size >= 0x600000
%error "OpenBIOS kernel reaches heap memory"
%endif
%include "kernel_c.inc"
