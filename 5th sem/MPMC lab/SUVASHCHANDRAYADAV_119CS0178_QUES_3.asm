
;<Program title>

jmp start

;data


;code
start: nop

	LHLD 0000H	;

	XCHG		;

	LHLD 0002H	;

	MOV A, E	;

 	SUB L	 	; ​

	MOV L, A	;​

	MOV A, D	;

	SBB H		;

	MOV H, A	;

	SHLD 0004H	;





hlt