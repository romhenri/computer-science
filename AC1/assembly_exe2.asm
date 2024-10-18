; 2. Escreva um programa que implemente a seguinte sentença da linguagem Java:
; a = b + c + 100;

.686
.model flat, stdcall
option casemap:none

include \masm32\include\windows.inc
include \masm32\include\kernel32.inc
include \masm32\include\masm32.inc
include \masm32\include\msvcrt.inc

includelib \masm32\lib\kernel32.lib
includelib \masm32\lib\masm32.lib
includelib \masm32\lib\msvcrt.lib

include \masm32\macros\macros.asm

.data
    aa dword ?
    bb dword 40
    cc dword 4

.code
start:
    ; a = b + c + 100
    
    mov eax, bb
    add eax, cc
    add eax, 100
    mov aa, eax

    printf("\nValor de a: %d\n", aa)
    jmp exitprocess

exitprocess:
    invoke ExitProcess, 0

end start