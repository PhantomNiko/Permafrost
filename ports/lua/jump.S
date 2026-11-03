/* i386 nonlocal transfer. Pooka's Free Software License. */
.text
.globl setjmp
.type setjmp,@function
setjmp:
    movl 4(%esp), %eax
    movl %ebx, 0(%eax)
    movl %esi, 4(%eax)
    movl %edi, 8(%eax)
    movl %ebp, 12(%eax)
    leal 4(%esp), %edx
    movl %edx, 16(%eax)
    movl (%esp), %edx
    movl %edx, 20(%eax)
    xorl %eax, %eax
    ret
.globl longjmp
.type longjmp,@function
longjmp:
    movl 4(%esp), %eax
    movl 8(%esp), %edx
    testl %edx, %edx
    jne 1f
    incl %edx
1:
    movl 0(%eax), %ebx
    movl 4(%eax), %esi
    movl 8(%eax), %edi
    movl 12(%eax), %ebp
    movl 16(%eax), %esp
    movl 20(%eax), %ecx
    movl %edx, %eax
    jmp *%ecx
