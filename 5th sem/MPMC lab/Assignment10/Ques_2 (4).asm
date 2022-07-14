;Suvash Chandra Yadav
jmp start
;program to find sum of odd numbers only in array
;data


;code
start: nop
MVI A,05
MOV C,A
LXI H,01
yadav: MOV A,M
ANI 01
JZ suvash
MOV A,B
ADD M
MOV B,A
suvash: INX H
DCR C
JNZ yadav
MOV A,B
STA 010
hlt