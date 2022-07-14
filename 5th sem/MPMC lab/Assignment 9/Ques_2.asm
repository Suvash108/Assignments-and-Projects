;119CS0178
;Suvash Chandra Yadav
;<a program to convert a set of ten ASCII characters
 in to their equivalent hexadecimal numbers>
jmp start

;data


;code
	start: nop
	LXI H,00H ; Loads the data from the memory location 
	LXI D,0BH
	MVI C,10 ; Move Immediate

	BACK: MOV A,M 
	SUI 30H
	CPI 0AH
	JC LOOP
	SUI 07H
	LOOP: STAX D ; StoreAccumaltor Content of memory location pointer by register pair.
		INX D
		INX H
		DCR C
	JNZ BACK

	hlt