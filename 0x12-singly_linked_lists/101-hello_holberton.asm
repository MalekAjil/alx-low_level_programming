section .text
global main
extern printf

main:
	xor eax, eax
	mov rdi, frm	;first parameter
	mov rsi, msg
	call printf

	mov rax, 60	;system call (sys_exit)
	xor rdi, rdi	; 0
	syscall
	

; The data section - declaring constants
section .data
	msg db "Hello, Holberton", 0xa	;or 10 
	frm db "%s", 0

; The bss section - declaring variables
