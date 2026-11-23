/* Architectural i386 preemption boundary, preserving interrupted state.
 * Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked)) void recovered_2008e70(void){
 __asm__ volatile(
 ".intel_syntax noprefix\ncld\npush ds\npush es\npushad\n"
 "mov ax,0x10\nmov ds,ax\nmov es,ax\nmov ebx,esp\n"
 "sub esp,0x407f\nand esp,-64\nlea esi,[esp+0x40]\n"
 "mov eax,cr0\nmov [esp+12],eax\ntest eax,8\njz 1f\nclts\n1:\n"
 "mov eax,cr4\ntest eax,0x40000\njz 2f\nxor eax,eax\n"
 "mov [esi+0x200],eax\n"
 "mov [esi+0x204],eax\n"
 "mov [esi+0x208],eax\n"
 "mov [esi+0x20c],eax\n"
 "mov [esi+0x210],eax\n"
 "mov [esi+0x214],eax\n"
 "mov [esi+0x218],eax\n"
 "mov [esi+0x21c],eax\n"
 "mov [esi+0x220],eax\n"
 "mov [esi+0x224],eax\n"
 "mov [esi+0x228],eax\n"
 "mov [esi+0x22c],eax\n"
 "mov [esi+0x230],eax\n"
 "mov [esi+0x234],eax\n"
 "mov [esi+0x238],eax\n"
 "mov [esi+0x23c],eax\n"
 "xor ecx,ecx\nxgetbv\nmov [esp],eax\nmov [esp+4],edx\nmov dword ptr [esp+8],1\n"
 "xsave [esi]\njmp 3f\n2:\nmov dword ptr [esp+8],0\nfxsave [esi]\n3:\n"
 "sub esp,12\npush dword ptr [ebx+40]\ncall recovered_2008ae0\nadd esp,16\n"
 "clts\ncmp dword ptr [esp+8],0\nje 4f\nmov eax,[esp]\nmov edx,[esp+4]\n"
 "xrstor [esi]\njmp 5f\n4:\nfxrstor [esi]\n5:\n"
 "test dword ptr [esp+12],8\njz 6f\nmov eax,cr0\nor eax,8\nmov cr0,eax\n6:\n"
 "mov esp,ebx\npopad\npop es\npop ds\niretd\nud2\n.att_syntax prefix\n");
}
