.586
.model flat, stdcall
option casemap :none

include \masm32\include\windows.inc
include \masm32\include\user32.inc
include \masm32\include\kernel32.inc
include \masm32\include\masm32.inc
include \masm32\include\msvcrt.inc

includelib \masm32\lib\msvcrt.lib
includelib \masm32\lib\user32.lib
includelib \masm32\lib\kernel32.lib
includelib \masm32\lib\masm32.lib


.data
	_a DWORD 0
	_b DWORD 0
	_c DWORD 0
	_D BYTE 0
	t0 DWORD 0
	t1 DWORD 0
	t2 DWORD 0
	t3 DWORD 0
	t4 DWORD 0
	t5 DWORD 0
	t6 DWORD 0
	buffer BYTE 128 dup(0)
	data1 db '%d', 0
	vac db ' ', 0

.code
start:
	MOV eax, 5
	MOV _a, eax
	MOV eax, 7
	MOV _c, eax
	invoke crt_scanf, addr data1, addr _b
	invoke StdIn, addr __D, 8
	invoke crt_printf, addr _D
	invoke crt_printf, addr vac
	MOV al, 80
	MOV _D, al
	invoke crt_printf, addr _D
	invoke crt_printf, addr vac
L1:
	MOV eax, _a
	ADD eax, 3
	MOV t0, eax
	MOV eax, _b
	ADD eax, 1
	MOV t1, eax
	MOV eax, t1
	ADD eax, 2
	MOV t1, eax
	MOV eax, t0
	CMP eax, t1
	jl L5
	jmp L4
L5:
	MOV eax, _a
	CMP eax, _b
	je L4
	jmp L2
L4:
	MOV eax, 1
	CMP eax, 1
	jne L2
	jmp L3
L2:
	MOV eax, _a
	ADD eax, 1
	MOV t2, eax
	MOV eax, t2
	MOV _a, eax
	jmp L1
L3:
	MOV eax, _c
	ADD eax, 1
	MOV t3, eax
	MOV eax, t3
	MOV _c, eax
L6:
	MOV eax, _a
	CMP eax, _b
	jnl L7
	jmp L8
L7:
	invoke crt_printf, addr data1, _b
	invoke crt_printf, addr vac
	MOV eax, _b
	ADD eax, 1
	MOV t4, eax
	MOV eax, t4
	MOV _b, eax
	jmp L6
L8:
	invoke crt_printf, addr data1, _a
	invoke crt_printf, addr vac
	invoke crt_printf, addr data1, _b
	invoke crt_printf, addr vac
	MOV eax, _a
	CMP eax, _c
	je L11
	jmp L9
L9:
	MOV eax, 10
	MOV _b, eax
	invoke crt_printf, addr data1, _c
	invoke crt_printf, addr vac
	jmp L10
L11:
	MOV eax, 100
	MOV _a, eax
	invoke crt_printf, addr data1, _c
	invoke crt_printf, addr vac
L10:
	MOV eax, _c
	SUB eax, 1
	MOV t5, eax
	MOV eax, t5
	MOV _c, eax
	invoke crt_printf, addr data1, _a
	invoke crt_printf, addr vac
	invoke crt_printf, addr data1, _b
	invoke crt_printf, addr vac
	invoke crt_printf, addr data1, _c
	invoke crt_printf, addr vac
	MOV eax, _b
	MOV ebx, _c
	MUL ebx
	MOV t6, eax
	MOV eax, _a
	ADD eax, t6
	MOV t6, eax
	invoke crt_printf, addr data1, t6
	invoke crt_printf, addr vac
L12:
	MOV eax, _a
	CMP eax, 0
	je L13
	jmp L14
L13:
	invoke crt_printf, addr _D
	invoke crt_printf, addr vac
	jmp L12
L14:
	invoke crt__getch
	invoke ExitProcess, 0
end start
