
;< a program to convert a hexadecimal number in to its equivalent ASCII number using subroutine.>
;Suvash Chandra Yadav
;119CS0178

jmp start

;data


;code
start: nop

mvi a,0E4H
sta 0
lda 0000h
mov b,a
ani 0FH           ;for calculating lsb mask is being created
call ascii
sta 3
mov a,b
ani 0F0H           ; for calculating msb mask is being created 
rlc
rlc
rlc
rlc
call ascii    ; subroutine for calculating ascii value.
sta 4



hlt

ascii: cpi 0AH
     jc next
     adi 07H
  
next: adi 30H
     ret

hlt