#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char descricao[100][100];
    double precoCompra;
    double precoVenda;
    int qtdEstoque;
    int estoqueMin;
} Produtos;

Produtos itens[100];

int op;
void menu()
{
    printf("\n_______________________________________");
    printf("\n1 - Cadastrar produto.");
    printf("\n2 - Mostrar lucro obtido por produto.");
    printf("\n3 - Mostrar produtos com estoque baixo.");
    printf("\n4 - Sair.");
    printf("\n\nEscolha uma operacao: ");
    scanf("%d", &op);
    getchar();
}

int numProduto = 0;
int codigoProduto;
void cadastrarProduto()
{
    printf("\nDigite o codigo do produto: ");
    scanf("%d", &itens[numProduto].codigo);
    getchar();

    printf("Descreva o produto em ate 100 letras: ");
    fgets(itens[numProduto].descricao, 99, stdin);

    printf("Digite o preco da compra: ");
    scanf("%lf", &itens[numProduto].precoCompra);
    getchar();

    printf("Digite o preco de venda: ");
    scanf("%lf", &itens[numProduto].precoVenda);
    getchar();

    printf("Digite o estoque desse produto: ");
    scanf("%d", &itens[numProduto].qtdEstoque);
    getchar();

    printf("Digite o estoque minimo desse produto: ");
    scanf("%d", &itens[numProduto].estoqueMin);
    getchar();

    numProduto++;
}

void lucroProduto(Produtos itens[], int codigoProduto, int count)
{
    for (int i = 0; i < count; i++)
    {
        if (itens[i].codigo == codigoProduto)
        {
            double resultado = itens[i].precoVenda - itens[i].precoCompra;
            double resultadoPerce = 100 * (resultado / itens[i].precoCompra);
            if (resultado > 0)
            {
                printf("Lucro obtido: %2.lfR$, %2.lf%%", resultado, resultadoPerce);
            }
            else if (resultado < 0)
            {
                printf("Prejuizo gerado: %2.lfR$, -%2.lf%%", resultado, resultadoPerce);
            }
            else
            {
                printf("Nao houve lucro, nem prejuizo.");
            }
        }
    }
}

void mostrarProdutoEstoqueMin()
{
    for (int i = 0; i < numProduto; i++)
    {
        if (itens[i].qtdEstoque < itens[i].estoqueMin)
        {
            printf("\nCodigo: %d.", itens[i].codigo);
            printf("\nDescricao: %s.", itens[i].descricao);
            printf("Preco de compra: %2.lfR$.", itens[i].precoCompra);
            printf("\nPreco de venda: %2.lfR$.", itens[i].precoVenda);
            printf("\nQuantidade em estoque: %d.", itens[i].qtdEstoque);
            printf("\nEstoque minimo aceitavel: %d.", itens[i].estoqueMin);
        }
    }
}

int main()
{
    while (1)
    {
        menu();
        switch (op)
        {
        case 1:
            cadastrarProduto();
            break;
        case 2:
            printf("\nDigite o codigo do produto: ");
            scanf("%d", &codigoProduto);
            getchar();

            lucroProduto(itens, codigoProduto, numProduto);
            break;
        case 3:
            mostrarProdutoEstoqueMin();
            break;
        case 4:
            printf("Programa encerrado.");
            return 0;
        default:
            printf("\nOperacao invalida!");
            break;
        }
    }

    return 0;
}