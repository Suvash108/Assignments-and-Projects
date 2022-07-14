
;<Program title>

jmp start

;data

; Suvash Chandra Yadav
;code
start: nop

mvi a,130
sta 102
mvi a,100
sta 103
lda 103
mov b,a
lda 102
sub b
sta 104

hlt