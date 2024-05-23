#include <stdio.h>

#define MAX_REGISTROS 10
#define TAMANHO_NOME 50

typedef struct {
    char nome[TAMANHO_NOME];
    int idade;
} Registro;

int main() {
    Registro registros[MAX_REGISTROS];
    int quantidadeRegistros = 0;
    int opcao;
    int resultado;

    while (1) {
        printf("\nSistema de Cadastro de Dados\n");
        printf("1. Adicionar Registro\n");
        printf("2. Visualizar Registros\n");
        printf("3. Editar Registro\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        resultado = scanf("%d", &opcao);
        if (resultado != 1) {
            printf("Entrada inválida. Tente novamente.\n");
            while (getchar() != '\n');
            continue;
        }

        if (opcao == 4) {
            break;
        }

        switch (opcao) {
            case 1:
                if (quantidadeRegistros < MAX_REGISTROS) {
                    printf("Digite o nome: ");
                    resultado = scanf("%s", registros[quantidadeRegistros].nome);
                    if (resultado != 1) {
                        printf("Entrada inválida. Tente novamente.\n");
                        while (getchar() != '\n');
                        continue;
                    }

                    printf("Digite a idade: ");
                    resultado = scanf("%d", &registros[quantidadeRegistros].idade);
                    if (resultado != 1) {
                        printf("Entrada inválida. Tente novamente.\n");
                        while (getchar() != '\n');
                        continue;
                    }
                    quantidadeRegistros++;
                } else {
                    printf("Limite de registros alcançado.\n");
                }
                break;

            case 2:
                for (int i = 0; i < quantidadeRegistros; i++) {
                    printf("Registro %d - Nome: %s, Idade: %d\n", i + 1, registros[i].nome, registros[i].idade);
                }
                break;

            case 3:
                if (quantidadeRegistros > 0) {
                    int indice;
                    printf("Digite o número do registro para editar (1 a %d): ", quantidadeRegistros);
                    resultado = scanf("%d", &indice);
                    if (resultado != 1 || indice < 1 || indice > quantidadeRegistros) {
                        printf("Registro inválido.\n");
                        while (getchar() != '\n');
                        continue;
                    }

                    printf("Novo Nome: ");
                    resultado = scanf("%s", registros[indice - 1].nome);
                    if (resultado != 1) {
                        printf("Entrada inválida. Tente novamente.\n");
                        while (getchar() != '\n');
                        continue;
                    }

                    printf("Nova Idade: ");
                    resultado = scanf("%d", &registros[indice - 1].idade);
                    if (resultado != 1) {
                        printf("Entrada inválida. Tente novamente.\n");
                        while (getchar() != '\n');
                        continue;
                    }
                } else {
                    printf("Nenhum registro para editar.\n");
                }
                break;

            default:
                printf("Opção inválida.\n");
                break;
        }
    }

    printf("Saindo do programa.\n");
    return 0;
}