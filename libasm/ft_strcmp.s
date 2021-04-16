global _ft_strcmp

section .text
_ft_strcmp:
			xor rax, rax
			xor rbx, rbx 	
			
.while:
			mov al, byte [rdi]
			mov bl, byte [rsi]
			cmp al, 0  			
			je  .exit			
			cmp bl, 0				
			je .exit
			cmp al, bl
			jne .exit		
			inc rdi
			inc rsi			
			jmp .while

.exit: 		
			movzx rax, al      	
			movzx rbx, bl
			sub rax, rbx		
			ret					

			

