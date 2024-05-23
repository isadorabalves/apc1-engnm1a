#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;
  int opcao_valida = 0;
while (opcao != 4) {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Ver Ranking\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção => ");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n'); // limpar o buffer do teclado
    
    if (!deu_certo) {
      opcao = 0;
  }

  switch (opcao) {
    case 1: {
      char nome[31];
      deu_certo = system("clear");
      printf("Qual o seu nome?: ");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n'); // limpar o buffer do teclado
      printf("Olá %s!\n", nome);
      printf("Pressione ENTER para iniciar...");
      getchar();
      break;
    } 
    case 2: {
      deu_certo = system("clear");
      printf("Ranking - TOP 5\n");
      printf("1º Lugar: José - 1000 pontos \n");
      printf("2º Lugar: Maria - 800 pontos \n");
      printf("3º Lugar: Bia - 700 pontos \n");
      printf("4º Lugar: Pedro - 500 pontos \n");
      printf("5º Lugar: João - 200 pontos \n");
      getchar();
      break;
    }
    case 3: break;
    case 4: printf("Até logo!\n"); break;
    default: printf("Opção inválida! Pressione ENTER para prosseguir.");
    getchar();
  } 
}
  return 0;
}