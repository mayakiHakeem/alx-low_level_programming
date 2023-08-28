	section .data
	hello db "Hello, Holberton,",0
	format db "%s", 0
	newline db 10, 0

	section .text
	global main
	extern printf

main:
	push rdi            ; Preserve registers
	push rsi
	push rax

	lea rdi, [hello]
	lea rsi, [format]
	call printf        	; Call printf("%s", hello)

	lea rdi, [newline]
	lea rsi, [format]
	call printf        	; Call printf("%s", newline)

	pop rax
	pop rsi
	pop rdi

	ret
