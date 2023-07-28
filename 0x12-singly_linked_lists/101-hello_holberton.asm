section .data
	message db "Hello, Hobleton", 0

section .text
	global main

	extern printf 

main:

	push message 

	call printf 

	add rsp, 8

	ret
