.code
; Devuelve falso (0) si counter < 100, verdadero (1) en caso contrario.
; El valor de counter se pasa como argumento en rcx.

checkCounter PROC
    ; Cargar el valor de counter (apuntado por rcx) en el registro al
    mov al, byte ptr [rcx]
    
    ; Comparar el valor con 100
    cmp al, 100
    
    ; Si es menor, establecer al = 0 (falso)
    jl menor

    ; Si no, establecer al = 1 (verdadero)
    mov al, 1
    ret

menor:
    mov al, 0
    ret
checkCounter ENDP

END