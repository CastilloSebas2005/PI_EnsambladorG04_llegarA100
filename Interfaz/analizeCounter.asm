section .note.GNU-stack noalloc noexec nowrite progbits

section .text
    global analizeCounter

analizeCounter:
    ; analizeCounter(uint8_t counter)
    ; Argumento en dil, resultado en al
    mov al, dil
    cmp al, 1
    je tirarRandom
    jl tirar1
    cmp al, 12
    jl tirar12
    je tirarRandom
    cmp al, 23
    jl tirar23
    je tirarRandom
    cmp al, 34
    jl tirar34
    je tirarRandom
    cmp al, 45
    jl tirar45
    je tirarRandom
    cmp al, 56
    jl tirar56
    je tirarRandom
    cmp al, 67
    jl tirar67
    je tirarRandom
    cmp al, 78
    jl tirar78
    je tirarRandom
    cmp al, 89
    jl tirar89
    je tirarRandom
    cmp al, 100
    jl tirar100

tirar1:
    mov bl, 1
    jmp tirarX
    
    
tirar12:
    mov bl, 12
    jmp tirarX
    ret
    
tirar23:
    mov bl, 23
    jmp tirarX
    
    
tirar34:
    mov bl, 34
    jmp tirarX
    
    
tirar45:
    mov bl, 45
    jmp tirarX
    
    
tirar56:
    mov bl, 56
    jmp tirarX
    
    
tirar67:
    mov bl, 67
    jmp tirarX
    
    
tirar78:
    mov bl, 78
    jmp tirarX
    
    
tirar89:
    mov bl, 89
    jmp tirarX
    
    
tirar100:
    mov bl, 100
    jmp tirarX
    

tirarRandom:
    mov al, 0
ret

tirarX
    sub bl, al
    mov al, bl
    ret