
;<a program to generate the Fibonacci series >
;Suvash Chandra Yadav
;119CS0178

jmp start

;data


;code
start: nop
lxi h,0000h   
mvi c,10
mvi b,00
mvi d,01

mov m,b
inx h
mov m,d

 loop: mov a,b
add d
mov b,d
mov d,a
inx h
mov m,a
dcr c
jnz loop


hlt