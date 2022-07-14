
;119CS0178
;Suvash Chandra Yadav
;<Program to find sum of a series of numbers>
jmp start

;data


;code
start: nop
LXI H,00 ; loads in to register pair
MOV B,M	;transfers the data 	
INX H ;increases the register (1byte)
MOV A,M		
DCR B ; decreases the given register(1byte)
	LOOP: INX H	
	MOV C,M		
	ADD C		
	DCR B		
	JNZ LOOP ; jump if not zero 	
STA 00		;stores the sum from accumultar to memory address 00

hlt