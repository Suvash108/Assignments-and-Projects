
;119CS0178
;Suvash Chandra Yadav
;<Program to find smallest number in an array of 10 numbers>
jmp start

;data


;code
start: nop
LXI H,00 ;Loads H-L pair with address 00
MVI B,3	;counter
MOV A,M	;move the 1st number from memory to register A	
DCR B; Decrement Counter 
	LOOP: INX H
	CMP M		
	JC GO 		
	MOV A,M		
	GO: DCR B
	JNZ LOOP ;  jumps if the counter is not zero
	STA 10 ; stores the smallest array 


hlt