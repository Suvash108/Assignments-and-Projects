
;<Program title>

jmp start

;data
;Suvash Chandra Yadav 



;code
start: nop
MVI A,245
MVI B, 20
MVI C,10
INR B
LXI H,0000H
LOOP: SUB C
JC SKIP
INCR: INX H
JMP LOOP
SKIP: DCR B
JZ STORE
JMP INCR
STORE: ADD C
XCHG
LXI H,0005H
MOV M,E
INX H
MOV M,D
INX H
MOV M,A 
 



hlt