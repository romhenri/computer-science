#include <stdio.h>

// Atividade 1 - Conversão de decimal para binário

// Faças algoritmos para conversão de:
// E1. Decimal para binário (Esse arquivo)
// E2. Binário para decimal

int main() {
  float number;
  // Com 16 bits, pode-se representar números de 0 a 65535 (2^16 - 1)
  int bin[16];

  // 1 byte (8 bits) => Número de 0 a 255
  // 2^8 = 256
  // 2 bytes (16 bits) => Número de 0 a 65535
  // 2^16 = 65536

  // Recebe um número para conversão
  printf("Input a number: ");
  scanf("%f", &number);
  printf("\n");
  printf("%.2f => ", number);

  // Converte o número para binário
  for (int i = 0; i < 16; i++) {
    // Para cada bit, divide o número por 2 e armazena o resto
    bin[i] = (int)number % 2;

    // Divide o número por 2, para usar na próxima iteração
    number = number / 2;
  }

  // Imprime o número em binário
  // Por estrem em um array de números, precisamos iterar para cada um
  // Importante lembrar de imprimir de trás para frente
  if (number < 255) {
    // Se for menor que 255, printar só 8 bits
    for (int i = 7; i >= 0; i--) {
      printf("%d", bin[i]);
    }
  } else {
    for (int i = 15; i >= 0; i--) {
      printf("%d", bin[i]);
    }
  }
  printf("\n");

  scanf("%f", &number); // Para que o terminal não fechar
  return 0;
}

// Referências:
// https://youtu.be/mttrG_kbHN4?si=Ck0T5rG9lWo7Irxn (Conversção à Mão)