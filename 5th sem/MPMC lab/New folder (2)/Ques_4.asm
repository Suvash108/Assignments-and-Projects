
;<program to count number of one’s in the content of D register and store the count in the B register>

jmp start

;data
;Suvash Chandra Yadav


;code
start: nop
MVI D, 11
MOV A,D
MVI B, 00H
MVI C, 08H
BACK: RAR
      JNC SKIP
      INR B
SKIP: DCR C
JNZ BACK
MOV A,B
STA 01H

hlt