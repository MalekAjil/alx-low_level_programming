global main
extern printf

section .text
main:
	xor eax, eax
	lea rdi, [msg]	;first parameter
	call printf

	mov eax, 1	;system call (sys_exit)
	int 0x080

; The data section - declaring constants
section .data
	msg db "Hello, Holberton", 0xa	;or 10 
	len equ $ -msg

; The bss section - declaring variables
