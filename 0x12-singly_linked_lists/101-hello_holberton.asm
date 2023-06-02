section .data       ; Data section, initialized variables
    msg:    db "Hello, Holberton", 0 ; C string needs null terminator
    fmt:    db "%s", 10, 0          ; The printf format, including newline and null terminator

section .text       ; Code section

global main         ; The standard entry point for GCC

extern printf       ; The C function, to be called

main:               ; Program label for the entry point
    push rbp        ; Set up stack frame, must be aligned

    mov rdi, fmt    ; Load the format string address into rdi
    mov rsi, msg    ; Load the message address into rsi
    mov rax, 0      ; Alternatively, you can use xor rax, rax
    call printf     ; Call the C function

    pop rbp         ; Restore the stack

    mov rax, 0      ; Set the return value to 0
    ret             ; Return


