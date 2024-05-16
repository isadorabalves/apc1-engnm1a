/* 
8. Faça um programa em C que calcule o fatorial de um número inteiro. 
n! = n × (n − 1) × (n − 2) × ... × 2 x 1
 */
#include <stdio.h>

int main() {
  int numero;

  printf("Calculo do Fatorial (n!)\n\n");
  printf("Entre com um numero >= 0: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero >= 0) {
    long int fatorial = 1;
    printf("%i! = ", numero);

    for(int i=numero; i>1; i--) {
      fatorial = fatorial * i;
      printf("%i x ", i);
    }

    printf("1 = %li\n", fatorial);
  } else {
    printf("Numero invalido. Tente de novo!\n");
  }

  return 0;
}