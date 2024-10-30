.model small                               
.STACK 512
.586                                 
                                           
.DATA
  modalidad DB "[1] Jugador-jugador. [2]Jugador-maquina: "; 40 chars
  peticion DB "Ingrese un numero del 1 al 10: "; 30 chars
  respuesta DB "Contador: "; 10 chars
  turno DB "Turno de jugador "; 17 chars
  turnoCompu DB "Turno de la maquina"; 19 chars
  entradaCompu DB "Numero ingresado por la maquina: "; 33 chars
  ingresarEnter DB "Ingrese cualquier tecla para continuar"; 38 chars
  entradaTemporal DB 0H
  contador DB 0H
  fila DB 0H
  columna DB 0H
  cantidadTurnos DB 0H
  unidades DB 0H
  decenas DB 0H
  centenas DB 0H
  
.CODE                                      
                                           
Begin:                                     
    mov ax, @data     
    mov ds, ax                                           
    cld                                
    mov ax,0B800H                  
    mov es,ax
    
    ;TO-DO interaccion preguntar modo
    ;call vsJugador
    call vsComputadora
    .EXIT
    
    vsJugador PROC
    jugar: ;logica para controlar el flujo del juego
    call turno1
    call entrada
    call actualizarContador
    cmp contador, 100
    jge salirJ
    call turno2
    call entrada
    call actualizarContador
    cmp contador, 100
    jge salirJ
    jmp jugar
    
salirJ:
    ret
    vsJugador ENDP
    
    
    vsComputadora PROC
    
    jugarC: ;logica para controlar el flujo del juego
    
    call imprimirContador
    
    call turno1
    call entrada
    call actualizarContador
    call imprimirContinuar
    call getch; TO-DO INGRESE ENTER
    call clearScreen
    cmp contador, 100
    jge salirJuegoC
    
    call turnoMaquina
    call imprimirContinuar
    call tiradaMaquina
    call imprimirContinuar
    call getch
    call clearScreen
    cmp contador, 100
    jge salirJuegoC
    jmp jugarC

salirJuegoC:
    ret
    vsComputadora ENDP
    
    imprimirContador PROC
    mov cx, 10; longitud de hilera        
    mov si, offset respuesta
    mov di, 1380; posicion de la hilera en pantalla
    call imprimirString
    
    mov bl, contador
    call imprimirNumeros
    ret
    imprimirContador ENDP
    
    turno1 PROC
    mov cx, 17
    mov si, offset turno
    mov di, 1300
    call imprimirString
    
    mov bl, 1
    call imprimirChar
    ret
    turno1 ENDP
    
    turno2 PROC
    mov cx, 17
    mov si, offset turno
    mov di, 1300
    call imprimirString
    
    mov bl, 2
    call imprimirChar
    ret
    turno2 ENDP
    
    manejoTurnos PROC
    mov cx, 17
    mov si, offset turno
    mov di, 1300
    call imprimirString
    
    mov al, cantidadTurnos
    mov bl, 2H
    div bl
    cmp ah, 0; compara el residuo con 0 (si es par o no)
    je turno1
    mov bl, 2
    call imprimirChar
    jmp terminar
    
turnoUno: 
    mov bl, 1
    call imprimirChar
    jmp terminar
    
terminar:
    inc cantidadTurnos
    ret
    manejoTurnos ENDP
    
    turnoMaquina PROC
    mov cx, 19
    mov si, offset turnoCompu
    mov di, 1300
    call imprimirString
    
    mov al, contador
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
    ; en buena teoria no deberia de llegar hasta aca
    jmp finTurnoCompu
    
tirar1:
    mov bl, 1
    call tirarX
    jmp finTurnoCompu
    
tirar12:
    mov bl, 12
    call tirarX
    jmp finTurnoCompu
    
tirar23:
    mov bl, 23
    call tirarX
    jmp finTurnoCompu
    
tirar34:
    mov bl, 34
    call tirarX
    jmp finTurnoCompu
    
tirar45:
    mov bl, 45
    call tirarX
    jmp finTurnoCompu
    
tirar56:
    mov bl, 56
    call tirarX
    jmp finTurnoCompu
    
tirar67:
    mov bl, 67
    call tirarX
    jmp finTurnoCompu
    
tirar78:
    mov bl, 78
    call tirarX
    jmp finTurnoCompu
    
tirar89:
    mov bl, 89
    call tirarX
    jmp finTurnoCompu
    
tirar100:
    mov bl, 100
    call tirarX
    jmp finTurnoCompu
    
    
tirarRandom:
    mov bl, 5; TO-DO
    jmp finTurnoCompu; instruccion redundante
    
finTurnoCompu:
    ret
    turnoMaquina ENDP
    
    tirarX PROC; X es bl
    mov al, contador
    sub bl, al; en bl queda el numero necesario para llegar a X
    ret
    tirarX ENDP
    
    tiradaMaquina PROC
    add contador, bl
    
    mov cx, 33
    mov si, offset entradaCompu
    mov di, 1620
    call imprimirString
    
    call imprimirChar
    call imprimirContador
    ret
    tiradaMaquina ENDP
    
    entrada PROC
    mov cx, 30; la hilera es de 30 chars          
    mov si, offset peticion
    mov di, 1620; posicion de la hilera en pantalla        
    call imprimirString
    
    
    mov cx, 3
    mov si, 0
    mov fila, 10
    mov columna, 43
    
leerEntrada:
    
    call ponerCursor
    
    call getch
    
    cmp al, 0DH; igual a enter
    je salir
    
    add al, -30H; cambiar de ascii a binario
    mov entradaTemporal, al
    
    mov ah, 07; comando para imprimir
    mov di, 1684; posicion
    inc si
    mov ax, si
    mov bl, 2h
    mul bl
    add di, ax; cambia la posicion a [anterior+2]
    mov bl, entradaTemporal
    call imprimirChar
    inc columna
    call ponerCursor
    
    loop leerEntrada
    
salir:
    ;call clearCursor
    ret
    entrada ENDP
    
    actualizarContador PROC
    
    mov bl, entradaTemporal
    add contador, bl
    
    call imprimirContador
    
    ret
    actualizarContador ENDP
    
    clearCursor PROC     NEAR                              
    mov ax, 0600h                             
    mov bh, 07h                               
    mov cx, 0A2Bh                             
    mov dx, 0A2Dh                             
    int 10h                                   
    RET                                       
    clearCursor ENDP
    
    clearScreen PROC NEAR
    mov ax, 0600h                             
        mov bh, 07h                               
        mov cx, 0000h                             
        mov dx, 184Fh                             
        int 10h                                   
        RET
    clearScreen ENDP
    
    clearPeticion PROC
    mov ax, 0600h                             
        mov bh, 07h                               
        mov cx, 1620h                             
        mov dx, 0A2Dh                             
        int 10h                                   
        RET
    clearPeticion ENDP
    
   
   getch PROC    NEAR                        
        MOV     AH,10H                                          
        INT     16H                       
        RET                                                                      
   getch ENDP
   
   
   imprimirNumeros PROC
   mov al, contador
   aam             ;Se divide el valor del contador en ah(centenas y decenas) al(unidades)
   mov unidades, al ; Se guardan las unidades
   mov al, ah
   aam              ; Se vuelven a dividir las centenas y decenas igual que en el paso anterior
   mov decenas, al
   mov centenas, ah
   mov bl, centenas ; a partir de aca solamente se imprimen
   call imprimirChar
   mov bl, decenas
   call imprimirChar
   mov bl, unidades
   call imprimirChar
   ret
   imprimirNumeros ENDP
   
   imprimirContinuar PROC
   mov cx, 38; la hilera es de 30 chars          
   mov si, offset ingresarEnter
   mov di, 1920; posicion de la hilera en pantalla        
   call imprimirString
   ret
   imprimirContinuar ENDP
   
   imprimirChar PROC
   add bl, 30H; cambia de bin a ascii
   mov AH, 07H
   mov al, bl
   cld
   stosw
   RET
   imprimirChar ENDP
   
   imprimirString PROC
    mov ah, 07                  
    cld
    
print:                      
        lodsb               
        stosw               
        loop    print; imprime la peticion
        
   ret
   imprimirString ENDP
   
   ponerCursor PROC
   mov ah, 02h; comando para poner el cursor
   mov bh, 00
   mov dh, fila
   mov dl, columna
   int 10h
   ret
   ponerCursor ENDP
   
   
end Begin
