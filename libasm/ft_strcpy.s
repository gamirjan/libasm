global _ft_strcpy

section .text
_ft_strcpy:
            xor rax, rax 
            push rdi
            
.while:
            cmp byte[rsi], 0 
            je  .exit
            mov rax, [rsi]    
            mov [rdi], rax  
            inc rdi
            inc rsi
            jmp .while  

.exit:      
            mov byte[rdi], 0 
            pop rax 
            ret
