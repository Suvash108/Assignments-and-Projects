
;<Program title>

jmp start

;data


;code
start: nop
MVI C,00
MVI A,14H
STA 0000
MVI A,12H
STA 0001
lDA 40
MOV B,A
lDA 41
SUB B
JNC JUMP
CMA 
INR A
INR C
JUMP: STA 0002
MOV A,C
STA 0004

hlt