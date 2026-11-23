/* Architectural interrupt boundary. The C dispatcher runs with an aligned
 * stack and the interrupted integer/FPU state is restored before IRET.
 * Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked)) void recovered_200ae30(void){
 __asm__ volatile(
 ".intel_syntax noprefix\n"
 "cld\n"
 "push rax\npush rcx\npush rdx\npush rbx\npush rbp\npush rsi\npush rdi\n"
 "push r8\npush r9\npush r10\npush r11\npush r12\npush r13\npush r14\npush r15\n"
 "mov r12,rsp\nsub rsp,0x407f\nand rsp,-64\nlea r13,[rsp+0x40]\n"
 "mov rax,cr0\nmov [rsp+12],eax\ntest eax,8\njz 1f\nclts\n1:\n"
 "mov rax,cr4\ntest rax,0x40000\njz 2f\nxor eax,eax\n"
 "mov [r13+0x200],rax\nmov [r13+0x208],rax\nmov [r13+0x210],rax\nmov [r13+0x218],rax\n"
 "mov [r13+0x220],rax\nmov [r13+0x228],rax\nmov [r13+0x230],rax\nmov [r13+0x238],rax\n"
 "xor ecx,ecx\nxgetbv\nmov [rsp],eax\nmov [rsp+4],edx\nmov dword ptr [rsp+8],1\n"
 "xsave64 [r13]\njmp 3f\n2:\nmov dword ptr [rsp+8],0\nfxsave64 [r13]\n3:\n"
 "mov rdi,[r12+120]\ncall recovered_200aa80\nclts\ncmp dword ptr [rsp+8],0\nje 4f\n"
 "mov eax,[rsp]\nmov edx,[rsp+4]\nxrstor64 [r13]\njmp 5f\n4:\nfxrstor64 [r13]\n5:\n"
 "test dword ptr [rsp+12],8\njz 6f\nmov rax,cr0\nor rax,8\nmov cr0,rax\n6:\n"
 "mov rsp,r12\npop r15\npop r14\npop r13\npop r12\npop r11\npop r10\npop r9\npop r8\n"
 "pop rdi\npop rsi\npop rbp\npop rbx\npop rdx\npop rcx\npop rax\niretq\nud2\n"
 ".att_syntax prefix\n");
}
