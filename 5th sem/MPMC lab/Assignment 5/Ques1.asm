
;<Program title>

jmp start

;data
;Suvash chandra Yadav


;code
start: nop
MVI B,50
MVI C,00H
MVI D,80
MVI A,00H
LOOP: ADD D
JNC SKIP
INR C
SKIP: DCR B
JNZ LOOP
STA 0002H
MOV A,C
STA 0003H 


hlt