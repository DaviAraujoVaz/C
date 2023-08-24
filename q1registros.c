#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int numero;
    char nome[100];
    float saldo;
} ContaBancaria;

int op = 0;
void menu()
{
    printf("\n_______________________________________");
    printf("\n1 - Cadastrar contas.");
    printf("\n2 - Visualizar conta.");
    printf("\n3 - Excluir conta de menor saldo.");
    printf("\n4 - Sair.");
    printf("\n\nEscolha uma operacao: ");
    scanf("%d", &op);
    getchar();
}

int acharConta(ContaBancaria conta[], int numeroConta, int count)
{
    for (int i = 0; i < count; i++)
    {
        if (conta[i].numero == numeroConta)
        {
            return i;
        }
    }
    return -1;
}

ContaBancaria conta[15];
int numContas = 0;
char buscaCliente[100];

int main()
{
    do
    {
        menu();
        switch (op)
        {
        case 1:
            if (numContas >= 15)
            {
                printf("\nNao e possivel cadastrar mais contas!");
                break;
            }

            printf("\nDigite o numero da conta: ");
            scanf("%d", &conta[numContas].numero);
            getchar();

            if (acharConta(conta, conta[numContas].numero, numContas) != -1)
            {
                printf("Ja existe uma conta com este numero!\n");
                break;
            }

            printf("Digite o nome do cliente: ");
            fgets(conta[numContas].nome, 99, stdin);

            printf("Digite o saldo: ");
            scanf("%f", &conta[numContas].saldo);
            getchar();

            numContas++;
            break;

        case 2:
            printf("\nDigite o nome do cliente: ");
            fgets(buscaCliente, 99, stdin);

            printf("\n\nContas do cliente: %s", buscaCliente);
            for (int i = 0; i < numContas; i++)
            {
                if (strcmp(buscaCliente, conta[i].nome) == 0)
                {
                    printf("Numero: %d\nSaldo: %2.f\n", conta[i].numero, conta[i].saldo);
                }
            }
            printf("----------------------------------------");
            break;

        case 3:
            if (numContas == 0)
            {
                printf("\nNenhuma conta foi cadastrada!");
                break;
            }

            int menorNumI = 0;
            for (int i = 0; i < numContas; i++)
            {
                if (conta[i].saldo < conta[menorNumI].saldo)
                {
                    menorNumI = i;
                }
            }

            printf("\nDeletando a conta de menor saldo...\nNumero: %d\nCliente: %sSaldo: %2.f", conta[menorNumI].numero, conta[menorNumI].nome, conta[menorNumI].saldo);

            for (int i = menorNumI; i < numContas - 1; i++)
            {
                conta[i] = conta[i + 1];
            }
            numContas--;
            break;

        case 4:
            printf("\nPrograma encerrado.");
            return 0;

        default:
            printf("\n\nOpcao invalida!\n");
        }
    } while (1);
    return 0;
}