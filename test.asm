mov reg1, 10          ; 00001010
mov reg2, reg1        ; 10001010
or  reg3, reg1, reg2  ; 01011000
add reg3, reg1, reg2  ; 01011001
sub reg3, reg1, reg2  ; 01011010
nand reg3, reg1, reg2 ; 01011011
and reg3, reg1, reg2  ; 01011100
xor reg4, reg1, reg2  ; 01100110
eq reg5, reg1, reg2   ; 01101111
not reg6, reg1        ; 01110101