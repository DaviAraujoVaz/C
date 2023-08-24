#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCONTAS 15

typedef struct
{
    char *nome;
    int numeroConta;
    float saldo;
} ContaBancaria;

ContaBancaria cliente[MAXCONTAS];
int totalContas = 15;

cadastrarContas()
{
    if (totalContas >= MAXCONTAS)
    {
        printf("O limite de contas foi alcancado!");
        return;
    }
}

int op;
void menu()
{
    printf("\n0 - sair.");
    printf("\n1 - Cadastrar contas.");
    printf("\n2 - Visualizar todas as contas de um determinado cliente.");
    printf("\n3 - Excluir conta com menor saldo.");
    printf("\n\nEscolha uma operacao: ");
    scanf("%d", &op);
}

int main()
{
    // Conta cliente1;
    // cliente1.nome = "Fulano da Silva";
    // cliente1.saldo = 300.00;
    // cliente1.numeroConta = 1;

    // printf("Nome cliente1: %s", cliente1.nome);

    do
    {
        menu();

        switch (op)
        {
        case 0:
            printf("\nPrograma encerrado.\n");
            break;
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        default:
            printf("\nOpcao invalida.\n\n");
            break;
        }
    } while (op != 0);

    system("pause");
    return 0;
}