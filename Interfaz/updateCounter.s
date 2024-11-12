section .note.GNU-stack noalloc noexec nowrite progbits

section .text
    global updateCounter

updateCounter:
    ; primer argumento recibido es el puntero al contador
    ; segundo argumento es el número con el que se desea aumentar el contador
    mov rax, [rdi] ; cargar el valor del contador desde el puntero
    add rax, rsi   ; sumar el valor del segundo argumento
    mov [rdi], rax ; almacenar el resultado de vuelta en el puntero
    ret
