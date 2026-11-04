/* The BIOS boundary needs explicit segment, stack, and execution-mode changes.
 * Disk, filesystem, display, and boot policy are implemented in C.
 * Pooka's Free Software License. */
#ifndef PF_BIOS_CODE_BASE
#define PF_BIOS_CODE_BASE 0x9000
#endif
#ifndef PF_BIOS_SEGMENT_BASE
#define PF_BIOS_SEGMENT_BASE 0
#endif
#define PF_STRING0(x) #x
#define PF_STRING(x) PF_STRING0(x)
#define PF_BIOS_OFFSET "(" PF_STRING(PF_BIOS_CODE_BASE) "-" PF_STRING(PF_BIOS_SEGMENT_BASE) ")"
#define PF_REG(n) "%cs:(.Lrequest-.Lbegin+" PF_BIOS_OFFSET "+" #n ")"
#define PF_LOAD_REGS \
 "movl " PF_REG(0) ",%eax\n" \
 "movl " PF_REG(4) ",%ebx\n" \
 "movl " PF_REG(8) ",%ecx\n" \
 "movl " PF_REG(12) ",%edx\n" \
 "movl " PF_REG(16) ",%esi\n" \
 "movl " PF_REG(20) ",%edi\n" \
 "movl " PF_REG(24) ",%ebp\n"
__asm__(
 ".pushsection .pf.bridge,\"ax\",@progbits\n.code32\n"
 ".globl pf_bios_execute,pf_bios_request,pf_bios_gdtr\n"
 ".Lbegin:\npf_bios_execute:\n"
 "pushfl\ncli\npushal\nmovl %esp,.Lsaved_sp\nsidt .Lsaved_idtr\n"
 "lgdt pf_bios_gdtr\n"
 "ljmp $0x18,$(.Lpm16-.Lbegin+" PF_BIOS_OFFSET ")\n"
 ".code16\n.Lpm16:\n"
 "movw $0x20,%ax\nmovw %ax,%ds\nmovw %ax,%es\nmovw %ax,%ss\nmovw $0xfffc,%sp\n"
 "lidt %cs:(.Lreal_idtr-.Lbegin+" PF_BIOS_OFFSET ")\n"
 "movl %cr0,%eax\nandl $-2,%eax\nmovl %eax,%cr0\n"
 "ljmp $(" PF_STRING(PF_BIOS_SEGMENT_BASE) ">>4),$(.Lreal-.Lbegin+" PF_BIOS_OFFSET ")\n"
 ".Lreal:\n"
 "xorw %ax,%ax\nmovw %ax,%ss\nmovw $0xfffc,%sp\n"
 "movw " PF_REG(32) ",%ax\nmovw %ax,%ds\nmovw " PF_REG(34) ",%ax\nmovw %ax,%es\n"
 "cmpw $0x10," PF_REG(36) "\nje .Lint10\n"
 "cmpw $0x13," PF_REG(36) "\nje .Lint13\n"
 "cmpw $0x15," PF_REG(36) "\nje .Lint15\n"
 "cmpw $0x16," PF_REG(36) "\nje .Lint16\n"
 "movw $1," PF_REG(28) "\njmp .Lback\n"
 ".Lint10:\n" PF_LOAD_REGS "sti\nint $0x10\njmp .Lcapture\n"
 ".Lint13:\n" PF_LOAD_REGS "sti\nint $0x13\njmp .Lcapture\n"
 ".Lint15:\n" PF_LOAD_REGS "sti\nint $0x15\njmp .Lcapture\n"
 ".Lint16:\n" PF_LOAD_REGS "sti\nint $0x16\n"
 ".Lcapture:\npushfw\ncli\n"
 "movl %eax," PF_REG(0) "\nmovl %ebx," PF_REG(4) "\n"
 "movl %ecx," PF_REG(8) "\nmovl %edx," PF_REG(12) "\n"
 "movl %esi," PF_REG(16) "\nmovl %edi," PF_REG(20) "\n"
 "movl %ebp," PF_REG(24) "\nmovw %ds," PF_REG(32) "\nmovw %es," PF_REG(34) "\n"
 "popw %ax\nmovw %ax," PF_REG(28) "\n"
 ".Lback:\ncli\nlgdt %cs:(.Lgdtr-.Lbegin+" PF_BIOS_OFFSET ")\n"
 "movl %cr0,%eax\norl $1,%eax\nmovl %eax,%cr0\n"
 "data32 ljmp $0x08,$(.Lpm32-.Lbegin+" PF_STRING(PF_BIOS_CODE_BASE) ")\n"
 ".code32\n.Lpm32:\n"
 "movw $0x10,%ax\nmovw %ax,%ds\nmovw %ax,%es\nmovw %ax,%fs\nmovw %ax,%gs\nmovw %ax,%ss\n"
 "movl .Lsaved_sp,%esp\nlidt .Lsaved_idtr\npopal\npopfl\nret\n"
 ".balign 8\npf_bios_request:\n.Lrequest:\n.space 40\n"
 ".Lsaved_sp:\n.long 0\n.Lsaved_idtr:\n.space 6\n.Lreal_idtr:\n.word 0x3ff\n.long 0\n"
 ".balign 8\n.Lgdt:\n.quad 0,0x00cf9a000000ffff,0x00cf92000000ffff\n"
 ".word 0xffff,(" PF_STRING(PF_BIOS_SEGMENT_BASE) "&0xffff)\n"
 ".byte ((" PF_STRING(PF_BIOS_SEGMENT_BASE) ">>16)&255),0x9a,0,((" PF_STRING(PF_BIOS_SEGMENT_BASE) ">>24)&255)\n"
 ".quad 0x000092000000ffff\n"
 "pf_bios_gdtr:\n.Lgdtr:\n.word 39\n.long .Lgdt\n"
 ".popsection\n.code32\n"
);
