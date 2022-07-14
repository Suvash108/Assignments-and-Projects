
;<a program to find the square of numbers from 0 to 9 using a table of square.>
;Suvash Chandra Yadav
;119CS0178

jmp start

;data


;code
;code
start: nop
LXI H,100H ;TABLE STORING SQUARES START HERE
LDA 00H
CPI 0FH
JC OVER
MVI A,0FFH
STA 05H
JMP LOOP
OVER: MOV C,A
MVI B,00H
DAD B
MOV A,M
STA 05H
LOOP: HLT

