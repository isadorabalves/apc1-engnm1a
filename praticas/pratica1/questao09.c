/*
9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/

#include <stdio.h>

  int main() {
    int anos = 1;
    int meses = 2;
    int dias = 3;
    int idade_em_dias = anos * 365 + meses * 30 + dias;
    printf("A idade em dias é %i\n", idade_em_dias);
    
  return 0;
}
