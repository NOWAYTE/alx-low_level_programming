section .data
	message db 'Hello, Hoblerton', 0Ah

section .text
	global _start

_start:
	:write message to stdout

	move rax, 1

	move rdi, i

	mov rsi, message
	mov rdx, 16
	syscall

	; exit with code status 0
	mov rax, 60

	xor rdi, rdi

	syscall



