global	_ft_strlen

section	.text
_ft_strlen: 
		mov rax, 0

.while: cmp byte[rdi + rax], 0
		je  .exit
		inc rax
		jmp .while

.exit: 	ret
