.code
updateCounter PROC

mov al, byte ptr [rcx]
mov bl, byte ptr [rdx]
add al, bl
ret

updateCounter ENDP

END