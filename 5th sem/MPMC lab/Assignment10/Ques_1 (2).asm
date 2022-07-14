;Suvash Chandra Yadav
;<Program title>
;program to sum of even number only
jmp start

;data


;code
start: nop
MVI A,05H
MOV C,A
LXI H,01H
suvash: MOV A,M
ANI 01H
JNZ yadav
MOV A,B
ADD M
MOV B,A
yadav: INX H
DCR C
JNZ suvash
MOV A,B
STA 010

hlt