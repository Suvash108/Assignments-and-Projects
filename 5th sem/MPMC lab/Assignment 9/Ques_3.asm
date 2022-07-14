;119CS0178
;Suvash Chandra Yadav
;<a program to convert a hexadecimal number to its binary equivalent.>
jmp start

;data


;code
	start: nop

	LXI H, 09H ; answers to be printed from 09H
	MVI B, 08 ; 8 bit variable count 
	LDA 00
		LOOP: RRC ; RRC rotate right accumulator,rotate the content to right by 1-bit positon 
		JC GO ; Jump if carry, jump to address as provided in 
		MVI M, 00
		JMP COME ; The sequence of program is transferred to the particular location
		GO: MVI M, 01 ;
		COME: INX H
		DCR B
	JNZ LOOP ; Transfer the control if the value of the content is not zero 
	HLT