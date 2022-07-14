
;<Program title>
;119CS1011
;Krishna Kant Kumar
;Program to find smallest number in an array of 10 numbers
jmp start

;data


;code
start: nop
LXI H,00
MVI B,3	;counter
MOV A,M		
DCR B
LOOP: INX H
CMP M		
JC GO 		
MOV A,M		
GO: DCR B
JNZ LOOP
STA 10		;smallest element will be on 10


hlt