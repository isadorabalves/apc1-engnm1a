#include <stdio.h>
#include <string.h>

int main() {  //012345678901234567890123456789
  char nome [31]; // um nome de uma pessoa qualquer\0

  printf("Entre com o seu nome: ");
  int deu_certo = scanf ("%[^\n]s", nome);
  printf("Olá %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21];
  strcpy(primeiro_nome, "Jose"); // primeiro_nome = "Jose";
  strcpy(ultimo_nome, "Junior");
  strcpy(nome, primeiro_nome);
  strcat(nome, ultimo_nome); // nome = primeiro_nome + ultimo_nome;
  printf("%s\n", nome);
  int tamanho = strlen(nome);
  printf("Seu nome tem %i caracteres\n", tamanho);
  printf("%s e %s são iguais? %i\n", primeiro_nome, ultimo_nome, strcmp(primeiro_nome, ultimo_nome)); //primeiro_nome == ultimo_nome;

  return 0;
}