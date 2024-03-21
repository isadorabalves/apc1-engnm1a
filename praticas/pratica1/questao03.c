/*
3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
  */

#include <stdio.h>

int main (){
  float pi = 3.1416;
  int raio;
  float perimetro;
  printf("Entre com o raio da pizza: ");
  scanf ("%i", &raio);

  perimetro = 2 * pi * raio;
  
  printf ("O perimetro da pizza é %f\n");
return 0;
}
