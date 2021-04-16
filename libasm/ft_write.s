global _ft_write

section .text
_ft_write:
		xor rax, rax
		mov rax, 0x2000004
		syscall
		jc .error
		jmp .exit

.error:
		xor rax, rax
		mov rax, -1
		ret

.exit:  ret
