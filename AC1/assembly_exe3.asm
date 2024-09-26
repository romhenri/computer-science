; 3. Escreva um programa que leia duas constantes numericas inteiras e imprima o maior dentre os dois
; numeros informados. Se os valores forem iguais, o programa pode imprimir qualquer uma das
; variaveis.

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
    a dword 43
    b dword 41

.code
start:
    mov eax, a
    cmp eax, b
    jg vb         ; Jump if eax greater

    printf("Valor de B eh maior que A")
    jmp exitprocess

vb: 
    printf("Valor de A eh maior que B")


exitprocess:
    invoke ExitProcess, 0

end start