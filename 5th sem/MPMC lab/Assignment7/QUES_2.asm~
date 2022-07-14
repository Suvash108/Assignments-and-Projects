
;<multiply subroutine to solve the : X = ( P x Q ) + ( R x S )>

jmp start

;data


;code
start: nop
LXI SP, 8000H
LXI H, 0000H
CALL MULTIPLY
PUSH D
INX H
CALL MULTIPLY
POP B
PUSH H
XCHG
DAD B
XCHG
POP H
INX H
INX H
INX H
MOV M, E
INX H
MOV M, D
HLT
MULTIPLY: MOV C, M
	   INX H
       MOV B, M
       PUSH H
       MVI H, 00H
       MVI A, 00H
UP: ADD B
	JNC LOOP
    INR H
LOOP: DCR C
	  JNZ UP
      MOV L, A
      XCHG
      POP H
      RET


hlt