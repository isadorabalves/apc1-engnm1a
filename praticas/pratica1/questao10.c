/* 
  10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
  */

#include <stdio.h>

  int main (){

  int numero;
  printf("Entre com o número com 4 dígitos: ");
  scanf("%i", &numero);
  int unidade = numero % 10;
  int dezena = (numero / 10) % 10;
  int centena = (numero / 100) % 10;
  int milhar = (numero / 1000) % 10;
 
  printf("O número %i tem %i unidades, %i dezenas, %i centenas e %i milhares\n", numero, unidade, dezena, centena, milhar);
  
  return 0;
}