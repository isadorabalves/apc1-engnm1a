#include <stdio.h>

int main() {
  enum unidade_e { //agrupa constantes
    unidade,
    caixa,
    peso,
    lata
  };
  
  struct produto_t { // agrupa variáveis
    char nome[31];
    int quantidade;
    int unidade; // 0 - unidade, 1 - caixa, 2 - peso, 3 - lata
    float preco;
    float valor;
  };

  float total = 0.0f;

  struct produto_t produto[5];
  for (int i = 0; i < 5; i++) {
    printf("Entre com o nome do produto: ");
    int deu_certo = scanf("%s", produto[i].nome);

    printf("Entre com a quantidade: ");
    deu_certo = scanf("%i", &produto[i].quantidade);

    printf("Entre com a unidade\n");
    printf("0 - unidade, 1 - caixa, 2 - peso, 3 - lata: ");
    deu_certo = scanf("%i", &produto[i].unidade);

    printf("Entre com o preço: ");
    deu_certo = scanf("%f", &produto[i].preco);

    produto[i].valor = produto[i].preco * produto[i].quantidade;
    total = total + produto[i].valor;
  }
  printf("------------------------------------------\n");
  printf("\n                NOTA LEGAL               \n");
  printf("------------------------------------------\n");
  printf("Item     Qtd    Unidade    Preço     Valor\n");
  for (int i = 0; i < 5; i++) {
    printf("%-10s %03i ", produto[i].nome, produto[i].quantidade);
    switch (produto[i].unidade) {
    case unidade:
      printf("%4s", "UN");
      break;
    case caixa:
      printf("%4s", "CX");
      break;
    case peso:
      printf("%4s", "KG");
      break;
    case lata:
      printf("%4s", "LT");
      break;
    }
    printf("%14.2f%11.2f\n", produto[i].preco, produto[i].valor);
  }
  printf("Total............................:%10.2f\n", total);
  
  return 0;
}