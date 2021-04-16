global _ft_strdup
extern _ft_strcpy
extern _malloc
extern _ft_strlen

section .text

_ft_strdup:
		xor 	rax, rax
		cmp 	rdi, 0
		je  	.error
		push 	rdi
		call 	_ft_strlen
		inc 	rax
		mov 	rdi, rax
		call 	_malloc
		pop 	rdi
		cmp 	rax, 0
		je 		.error
		mov 	rsi, rdi
		mov 	rdi, rax
		call 	_ft_strcpy
		jmp  	.end

.error: 	
		xor 	rax, rax
		mov 	rax, -1
		ret

.end: 	
		ret

