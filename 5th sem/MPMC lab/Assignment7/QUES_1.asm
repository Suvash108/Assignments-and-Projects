
;< calculate the factorial of a number between 0 to 8. >

jmp start

;data


;code
start: nop
LDA 0000h
CPI 02h
JC last
MVI d, 00h
MOV e, a
DCR a
MOV c,a 
CALL facto
XCHG
SHLD 0002h
JMP end

last: LXI h, 0001h
      SHLD 0002h
end:  HLT

facto:  LXI h, 0000h
 	MOV b, c
back:   DAD d
	DCR b
	JNZ back
	XCHG
	DCR c
	CNZ facto
	RET


hlt