;119CS0178_SuvashChandraYadav
;<TO SORT IN ASCENDING ORDER>

jmp start

;data


;code
start: nop
MVI B,10H
NEXT: LXI H,0010H 
MVI C,10H
LOOP: MOV A,M
INX H
CMP M
JC SKIP
JZ SKIP
MOV D,M
MOV M,A
DCX H
MOV M,D
INX H
SKIP: DCR C
JNZ LOOP
DCR B
JNZ NEXT
hlt