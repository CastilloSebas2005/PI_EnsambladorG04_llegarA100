.model small                               
.STACK 512
.586                                 
                                           
.DATA
  peticion DB "Ingrese un numero del 1 al 10: "; 30 chars
  respuesta DB "Contador: "; 10 chars
  turno DB "Turno de jugador "; 17 chars
  entradaTemporal DB ?
  contador DB 0H
  fila DB 0H
  columna DB 0H
  cantidadTurnos DB 0H
  
.CODE                                      
                                           
Begin:                                     
    mov ax, @data     
    mov ds, ax                                           
    cld                                
    mov ax,0B800H                  
    mov es,ax
    
    call turno1
    call entrada
    call actualizarContador
    call turno2
    call entrada
    call actualizarContador
    
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
    
    entrada PROC
    mov cx, 30; la hilera es de 30 chars          
    mov si, offset peticion
    mov di, 1620; posicion de la hilera en pantalla        
    call imprimirString
    
    
    mov cx, 2
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
    ret
    entrada ENDP
    
    actualizarContador PROC
    
    mov bl, entradaTemporal
    add contador, bl
    
    mov cx, 10; longitud de hilera        
    mov si, offset respuesta
    mov di, 1824; posicion de la hilera en pantalla
    call imprimirString
    
    mov bl, contador
    call imprimirChar
    
    ret
    actualizarContador ENDP
    
    clearScreen PROC     NEAR                              
    mov ax, 0600h                             
    mov bh, 07h                               
    mov cx, 0000h                             
    mov dx, 184Fh                             
    int 10h                                   
    RET                                       
    clearScreen ENDP
    
   
   getch PROC    NEAR                        
        MOV     AH,10H                                          
        INT     16H                       
        RET                                                                      
   getch ENDP
   
   leer PROC
   mov cx, 25      ;pide 25 chars
     mov si, 0      ;indice del vector de los mumeros inicializado en 0
       
       leerChar:
         call getch     ;llama a lectura de un (1) caracter, retornado en al
         add al, -30H; cambia de ascii a bin
         mov entradaTemporal, al ;guardamos el caracter leido en el vector de entrada
         INC si         ;nos movemos a la siguiente posicion
         loop leerChar  ;siguiente iteracion, la CPU ira reduciendo el numero en cx hasta que llegue a 0
         
     RET
   leer ENDP
   
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
