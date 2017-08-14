	.file	"teste.c"
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC2:
	.string	"Conclu\303\255do, com \303\272ltimo valor de c = %d!\n"
	.section	.text.unlikely,"ax",@progbits
.LCOLDB3:
	.section	.text.startup,"ax",@progbits
.LHOTB3:
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB38:
	.cfi_startproc
	movdqa	.LC0(%rip), %xmm1
	xorl	%eax, %eax
	movdqa	.LC1(%rip), %xmm0
.L2:
	movaps	%xmm1, a(%rax)
	addq	$16, %rax
	movaps	%xmm0, b-16(%rax)
	cmpq	$2097152, %rax
	jne	.L2
	xorl	%eax, %eax
	.p2align 4,,10
	.p2align 3
.L3:
	movdqa	a(%rax), %xmm0
	paddw	b(%rax), %xmm0
	addq	$16, %rax
	movaps	%xmm0, c-16(%rax)
	cmpq	$2097152, %rax
	jne	.L3
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movzwl	c+2097150(%rip), %edx
	movl	$.LC2, %esi
	movl	$1, %edi
	movl	$1048576, i(%rip)
	xorl	%eax, %eax
	call	__printf_chk
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE38:
	.size	main, .-main
	.section	.text.unlikely
.LCOLDE3:
	.section	.text.startup
.LHOTE3:
	.comm	j,4,4
	.comm	i,4,4
	.comm	c,2097152,32
	.comm	b,2097152,32
	.comm	a,2097152,32
	.section	.rodata.cst16,"aM",@progbits,16
	.align 16
.LC0:
	.value	2
	.value	2
	.value	2
	.value	2
	.value	2
	.value	2
	.value	2
	.value	2
	.align 16
.LC1:
	.value	8
	.value	8
	.value	8
	.value	8
	.value	8
	.value	8
	.value	8
	.value	8
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
