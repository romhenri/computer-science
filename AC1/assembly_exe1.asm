; 1. Escreva um programa que calcule a soma dos 100 primeiros números inteiros positivos. O
; resultado deverá ser armazenado no registrador eax e também deverá ser exibido na tela.

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

.code
start:
    xor eax, eax
    mov ecx, 1

laco:
    add eax, ecx
    inc ecx
    cmp ecx, 100
    jbe laco

    printf("O valor do somatorio eh %d",eax)
    invoke ExitProcess, 0

end start
