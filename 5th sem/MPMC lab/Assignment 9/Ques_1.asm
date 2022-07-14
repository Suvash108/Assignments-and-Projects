;119CS0178
;Suvash Chandra Yadav
;<Program to find square root of a given number>

jmp start

;data
;code
	start: nop
	MVI D,01 ; move immediate 
	MVI E,01
	LDA 00 ; copies data from memory location to accumulator
	LOOP: SUB D
		JZ BACK ; jumps back to the address
		INR D
		INR D
		INR E
		JMP LOOP ; tranfers the squence to the memory location
	BACK: MOV A,E
	STA 05
	hlt