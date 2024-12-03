.code
analizeCounter PROC
    ; analizeCounter(uint8_t *counter)
    ; counter esta en al
    mov al, byte ptr [rcx]
    cmp al, 1
    je tirarRandom
    jl tirar1
    cmp al, 12
    je tirarRandom
    jl tirar12
    cmp al, 23
    je tirarRandom
    jl tirar23
    cmp al, 34
    je tirarRandom
    jl tirar34
    cmp al, 45
    je tirarRandom
    jl tirar45
    cmp al, 56
    je tirarRandom
    jl tirar56
    cmp al, 67
    je tirarRandom
    jl tirar67
    cmp al, 78
    je tirarRandom
    jl tirar78
    cmp al, 89
    je tirarRandom
    jl tirar89
    cmp al, 100
    je tirarRandom
    jl tirar100

tirar1:
    mov bl, 1
    jmp tirarX

tirar12:
    mov bl, 12
    jmp tirarX

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

tirarX:
    sub bl, al
    mov al, bl
    ret
analizeCounter ENDP

END
