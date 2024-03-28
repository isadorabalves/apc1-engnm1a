/*
7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/

#include <stdio.h>
#include <math.h>

int main () {
  float distancia = 100.0f;
  float angulo = 45.0f;
  float altura = sin(angulo) * distancia;
  printf("A altura alcançada é &f\n", altura);
  
return 0;
}

