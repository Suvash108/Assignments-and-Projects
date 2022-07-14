
;<a program to find the largest number from a series of 8 bit numbers>

jmp start

;data
;Suvash Chandra Yadav


;code
start: nop
LDA 00H
MOV C,A
LDA 01H
LXI H,02H
BACK: CMP M
      JP BACK1
      MOV A,M
BACK1: INX H
DCR C
JNZ BACK
STA 09H



hlt