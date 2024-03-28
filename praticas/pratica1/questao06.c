/*
6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/

#include <stdio.h>
#include <math.h>

  int main () {
    
  printf("Entre com o valor de a: ");
  float a = scanf("%f", &a);

  printf("Entre com o valor de b: ");
  float b = scanf("%f", &b);

  printf("Entre com o valor de c: ");
  float c = scanf("%f", &c);

  float delta = b * b - 4 * a * c;
  float raiz1 = ( -b + sqrt(delta)) / (2 * a);
  float raiz2 = ( -b - sqrt(delta)) / (2 * a);

  printf("As raízes são %f e %f\n", raiz1, raiz2);
     
  return 0;
  }
