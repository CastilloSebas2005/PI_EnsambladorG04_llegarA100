section .note.GNU-stack noalloc noexec nowrite progbits

section .text
    global updateCounter

updateCounter:
    ; updateCounter(uint8_t* counter, uint8_t adder)
    ; Argumentos en rdi (puntero a counter) y sil (adder)
    mov al, byte [rdi] ; cargar el valor del contador en al
    add al, sil        ; sumar el valor de adder
    mov byte [rdi], al ; almacenar el resultado de vuelta en el contador
    ret
    