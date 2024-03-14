#include <stdio.h>
#include <math.h>

// Atividade 1 - Conversão de decimal para binário

// Faças algoritmos para conversão de:
// E1. Decimal para binário 
// E2. Binário para decimal (Esse arquivo)

int main() {
  int bin, number = 0;

  // Recebe binário para conversão
  printf("Input a binary number: ");
  scanf("%d", &bin);
  printf("\n");

  printf("%d => ", bin);
  // Converte o binário para decimal
  for (int i = 0; bin > 0; i++) {
    // Para cada bit, multiplica o número por 2 e soma o bit
    number += (bin % 10) * pow(2, i);

    // Divide o número por 10, para usar na próxima iteração
    bin = bin / 10;
  }

  // Imprime o número em decimal
  printf("%d\n", number);
  scanf("%d", &number); // Para que o terminal não fechar
  return 0;
}