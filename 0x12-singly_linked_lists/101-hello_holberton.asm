section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, frm  ; 1st arg
	mov rsi, msg   ; 2nd arg
	call printf
	pop rbp
	ret

section .data
    msg db "Hello, Holberton",0
    frm db "%s", 10, 0
