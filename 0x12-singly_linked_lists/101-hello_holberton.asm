global 	main
	extern 	printf

	section .text
main:
	mov	rdi, format
	mov	rax, 0
	call	printf
	mov	rax, 0
	ret
format:
	db "Hello, Holberton", 10, 0
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
