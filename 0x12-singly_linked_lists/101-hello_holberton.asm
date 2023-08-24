section .data
    message db 'Hello, Holberton', 0
    format db '%s', 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    ; Push the format string onto the stack
    push format
    ; Push the message onto the stack
    push message
    ; Call printf
    call printf
    ; Clean up the stack
    add rsp, 16

    ; Push the newline string onto the stack
    push newline
    ; Call printf
    call printf
    ; Clean up the stack
    add rsp, 8

    ; Exit the program
    mov eax, 0
    ret
