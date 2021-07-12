.model small
.stack 100h
.DATA
p DW ?
q DW ?
t0 DW ?
t1 DW ?
t2 DW ?
t3 DW ?
t4 DW ?
t5 DW ?
t6 DW ?
t7 DW ?
t8 DW ?
x DW ?
.CODE
foo PROC
PUSH BX
PUSH CX
PUSH DX
PUSH BP
MOV BP,SP
MOV AX,[BP+8+2]
MOV x,AX
mov ax, x
cmp ax, 0
je L0
mov t0, 0
jmp L1
L0:
mov t0, 1
L1:
mov ax, x
cmp ax, 1
je L2
mov t1, 0
jmp L3
L2:
mov t1, 1
L3:
cmp t0,1
je L4
cmp t1,1
je L4
mov t2, 0
jmp L5
L4:
mov t2, 1
L5:
mov ax, t2
cmp ax, 0
je L6
MOV AX,x
JMP L7
L6:
mov ax, x
SUB ax,1
mov t3, ax
PUSH t3
CALL foo
MOV t4,AX
MOV AX,t4
L7:
POP BP
POP DX
POP CX
POP BX
RET 2
foo ENDP
MAIN PROC
mov ax, 1
mov q, ax
mov ax, q
ADD ax,4
mov t6, ax
PUSH t6
CALL foo
MOV t7,AX
mov ax, t7
ADD ax,2
mov t8, ax
mov ax, t8
mov p, ax
mov AH,2
mov DX,p
ADD DX,'0'
INT 21H
MAIN ENDP
END MAIN
