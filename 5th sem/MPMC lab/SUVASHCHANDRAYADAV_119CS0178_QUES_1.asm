
;<Program title>

jmp start

;data


;code
start: nop
LDA 0000;
MOV B,A;
LDA 0001;
SUB B;
STA 0002;

hlt