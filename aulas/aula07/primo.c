#include <stdio.h>

int main() {
  int numero_primo;  

  printf("Entre com um número > 0: ");
  int deu_certo = scanf("%i", &numero_primo);
  if (deu_certo && numero_primo > 0) {
    int qtde_divisores = 0; 
    for(int i=1; i<=numero_primo; i++) {
      if (numero_primo % i == 0) {
          qtde_divisores++;
      }
    }
    if (qtde_divisores == 2) {
      printf("O número %i é primo!\n", numero_primo);
    }  else {
      printf("O número %i não é primo!\n", numero_primo);
    }
  } else {
    printf("Número inválido. Tente de novo!\n");
  }
  return 0;
}