global _ft_read

section .text
_ft_read:
		xor rax, rax
		mov rax, 0x2000003
		syscall
		jc .error
		jmp .exit

.error:
		xor rax, rax
		mov rax, -1
		ret

.exit:  ret
