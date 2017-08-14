	.file	"teste.c"
	.comm	a,2097152,32
	.comm	b,2097152,32
	.comm	c,2097152,32
	.comm	i,4,4
	.comm	j,4,4
	.section	.rodata
	.align 8
.LC0:
	.string	"Conclu\303\255do, com \303\272ltimo valor de c = %d!\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$0, i(%rip)
	jmp	.L2
.L3:
	movl	i(%rip), %eax
	movl	%eax, %eax
	movw	$2, a(%rax,%rax)
	movl	i(%rip), %eax
	movl	%eax, %eax
	movw	$8, b(%rax,%rax)
	movl	i(%rip), %eax
	addl	$1, %eax
	movl	%eax, i(%rip)
.L2:
	movl	i(%rip), %eax
	cmpl	$1048575, %eax
	jbe	.L3
	movl	$0, i(%rip)
	jmp	.L4
.L5:
	movl	i(%rip), %ecx
	movl	i(%rip), %eax
	movl	%eax, %eax
	movzwl	a(%rax,%rax), %edx
	movl	i(%rip), %eax
	movl	%eax, %eax
	movzwl	b(%rax,%rax), %eax
	addl	%edx, %eax
	movl	%ecx, %edx
	movw	%ax, c(%rdx,%rdx)
	movl	i(%rip), %eax
	addl	$1, %eax
	movl	%eax, i(%rip)
.L4:
	movl	i(%rip), %eax
	cmpl	$1048575, %eax
	jbe	.L5
	movzwl	c+2097150(%rip), %eax
	movzwl	%ax, %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
