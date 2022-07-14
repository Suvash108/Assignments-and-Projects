;Suvash Chandra Yadav
jmp start
;Program to search a number in array
;data


;code
start: nop
LXI H,00 ;put 5 in memory for length
MOV C,M
LDA 08
MOV B,A
suvash: INX H
MOV A,M
CMP B
JNZ yadav
MOV A,M
STA 010
HLT
yadav: MVI A,00
STA 010
DCR C
JNZ suvash
hlt