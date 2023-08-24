#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    double novembro;
    double dezembro;
    double janeiro;
    double geral;
    double pontuacaoNov;
    double pontuacaoDez;
    double pontuacaoJan;
    double pontuacaoGeral;
} Funcionario;

Funcionario funcionario[15];
int numConta = 0;
double geralNov, geralDez, geralJan = 0;
int maisPontos, maisPontosNov, maisPontosDez, maisPontosJan = 0;

void cadastrarFuncionario()
{
    if (numConta >= 15)
    {
        printf("\nO limite de funcionarios foi atingido!");
        return;
    }

    printf("\nDigite o nome do funcionario: ");
    fgets(funcionario[numConta].nome, 99, stdin);

    printf("Digite a venda novembro do funcionario: ");
    scanf("%lf", &funcionario[numConta].novembro);
    getchar();

    printf("Digite a venda dezembro do funcionario: ");
    scanf("%lf", &funcionario[numConta].dezembro);
    getchar();

    printf("Digite a venda janeiro do funcionario: ");
    scanf("%lf", &funcionario[numConta].janeiro);
    getchar();

    numConta++;
}

void pontuacaoGeralCada()
{
    printf("\n_______________________________________");
    printf("\nPontuacao geral dos funcionarios:");
    for (int i = 0; i < numConta; i++)
    {
        funcionario[i].pontuacaoNov = funcionario[i].novembro / 1000;
        funcionario[i].pontuacaoDez = funcionario[i].dezembro / 1000;
        funcionario[i].pontuacaoJan = funcionario[i].janeiro / 1000;

        funcionario[i].pontuacaoGeral = funcionario[i].pontuacaoJan + funcionario[i].pontuacaoDez + funcionario[i].pontuacaoNov;

        printf("\n\nNome: %sPontos em novembro: %2.lf", funcionario[i].nome, funcionario[i].pontuacaoNov);
        printf("\nPontos em dezembro: %2.lf", funcionario[i].pontuacaoDez);
        printf("\nPontos em janeiro: %2.lf", funcionario[i].pontuacaoJan);
    }
}

void pontuacaoGeralTotal()
{
    for (int i = 0; i < numConta; i++)
    {
        geralNov = geralNov + funcionario[i].pontuacaoNov;
        geralDez = geralDez + funcionario[i].pontuacaoDez;
        geralJan = geralJan + funcionario[i].pontuacaoJan;
    }
    printf("\n\nPontuacao geral dos funcionarios (novembro): %2.lf", geralNov);
    printf("\nPontuacao geral dos funcionarios (dezembro): %2.lf", geralDez);
    printf("\nPontuacao geral dos funcionarios (janeiro): %2.lf", geralJan);
}

double valorTotal;
void valorTotalVendido()
{
    for (int i = 0; i < numConta; i++)
    {
        valorTotal = valorTotal + funcionario[i].pontuacaoGeral;
    }
    valorTotal *= 1000;
    printf("\n\nO valor total vendido foi de %2.lfR$.\n\n", valorTotal);
}

void maiorPontuacaoNov()
{
    for (int i = 1; i < numConta; i++)
    {
        if (funcionario[i].pontuacaoNov > funcionario[maisPontosNov].pontuacaoNov)
        {
            maisPontosNov = i;
        }
    }
}

void maiorPontuacaoDez()
{
    for (int i = 1; i < numConta; i++)
    {
        if (funcionario[i].pontuacaoDez > funcionario[maisPontosDez].pontuacaoDez)
        {
            maisPontosDez = i;
        }
    }
}

void maiorPontuacaoJan()
{
    for (int i = 1; i < numConta; i++)
    {
        if (funcionario[i].pontuacaoJan > funcionario[maisPontosJan].pontuacaoJan)
        {
            maisPontosJan = i;
        }
    }
}

void maiorPontuacao()
{
    maiorPontuacaoNov();
    maiorPontuacaoDez();
    maiorPontuacaoJan();

    if (funcionario[maisPontosNov].pontuacaoNov > funcionario[maisPontosDez].pontuacaoDez)
    {
        maisPontos = 1;
    }
    else if (funcionario[maisPontosJan].pontuacaoJan > funcionario[maisPontosNov].pontuacaoNov)
    {
        maisPontos = 2;
    }
    switch (maisPontos)
    {
    case 0:
        printf("\n\nMaior pontuacao atingida nos tres meses:");
        printf("\nNome: %s", funcionario[maisPontosDez].nome);
        printf("Pontuacao: %2.lf", funcionario[maisPontosDez].pontuacaoDez);
        break;
    case 1:
        printf("\n\nMaior pontuacao atingida nos tres meses:");
        printf("\nNome: %s", funcionario[maisPontosNov].nome);
        printf("Pontuacao: %2.lf", funcionario[maisPontosNov].pontuacaoNov);
        break;
    case 2:
        printf("\n\nMaior pontuacao atingida nos tres meses:");
        printf("\nNome: %s", funcionario[maisPontosJan].nome);
        printf("Pontuacao: %2.lf", funcionario[maisPontosJan].pontuacaoJan);
        break;
    default:
        printf("\n\nErro.\n\n");
        break;
    }
}

int main()
{
    while (numConta != 15)
    {
        cadastrarFuncionario();
    }

    pontuacaoGeralCada();
    pontuacaoGeralTotal();
    maiorPontuacao();
    valorTotalVendido();

    return 0;
}