section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, msg  ; 1st arg
	call printf
	pop rbp
	ret

section .data
    msg db "Hello, Holberton", 10
