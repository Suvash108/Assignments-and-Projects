
;<program to shift a 16 bit number left by one bit>

jmp start

;data
;Suvash Chandra Yadav


;code
start: nop
LDA 85
RAL
MOV B,A
LDA 86
RAL
MOV C,A
MOV A,B
STA 87
MOV A,C
STA 88



hlt