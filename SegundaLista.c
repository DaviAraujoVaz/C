#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void multiplicaDois(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        vetor[i] *= 2;
}

void maiorMenor(int *vetor, int tamanho, int *p_maior, int *p_menor)
{
    *p_maior = vetor[0];
    *p_menor = vetor[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] > *p_maior)
            *p_maior = vetor[i];

        else if (vetor[i] < *p_menor)
            *p_menor = vetor[i];
    }
}

int main()
{
    /*QUESTÃO 1*/
    // int i = 6, j = 10;
    // void procedure(int *p, int *q)
    // {
    //     int *temp;
    //     *temp = *p;
    //     *p = *q;
    //     *q = *temp;
    // }
    // procedure(&i, &j);

    // /*QUESTÃO 2*/
    // /* Declara as variáveis inteiras i e j, atribuindo o valor 99 à i.*/
    // int i = 99, j;

    // /* Declara um ponteiro para inteiro. */
    // int *p;

    // /* Atribui o endereço da variável i ao ponteiro p. */
    // p = &i;

    // /* Atribui o resultado da equação: 99 + 100 à variável j.
    // (*p = i = 99) */
    // j = *p + 100;

    // /*QUESTÃO 3*/
    // /* Declara as variáveis a e b, atribuindo os valores
    // 5 e 12 respectivamente. */
    // int a = 5, b = 12;

    // /* Declara um ponteiro para inteiro. */
    // int *p;

    // /* Declara outro ponteiro para inteiro. */
    // int *q;

    // /* Atribui o endereço da variável a ao ponteiro p. */
    // p = &a;

    // /* Atribui o endereço da variável b ao ponteiro q. */
    // q = &b;

    // /* Atribui o resultado da equação: 5 + 12
    // para a variável recém criada c. (*p = 5, *q = 12) */
    // int c = *p + *q;

    // /*QUESTÃO 4*/
    // /* Declara as variáveis i e j,
    // atribuindo os valores 7 e 3 respectivamente. */
    // int i = 7, j = 3;

    // /* Declara um ponteiro inteiro. */
    // int *p;

    // /* Declara um ponteiro de ponteiro inteiro. */
    // int **r;

    // /* Atribui o endereço da variável i para o ponteiro p. */
    // p = &i;

    // /* Atribui o endereço do ponteiro p para o ponteiro de ponteiro r. */
    // r = &p;

    // /* Atribui o resultado da equação: 7 + 3
    // para a variável recém criada c. (**r = 7, j = 3) */
    // int c = **r + j;

    // /*QUESTÃO 5*/
    // int n;
    // printf("Digite o tamanho do vetor inteiro: ");
    // scanf("%d", &n);
    // int vet[n];

    // for (int i = 0; i < n; i++)
    //     vet[i] = i + 1;

    // for (int i = 0; i < n; i++)
    //     printf("%d ", vet[i]);

    // /*QUESTÃO 6*/
    // int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int tamanho = sizeof(vet) / sizeof(vet[0]);

    // multiplicaDois(vet, tamanho);
    // for (int i = 0; i < tamanho; i++)
    // {
    //     printf("%d ", vet[i]);
    // }

    // /*QUESTÃO 7*/
    // int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int tamanho = sizeof(vet) / sizeof(vet[0]);
    // int maior, menor;

    // maiorMenor(vet, tamanho, &maior, &menor);

    return 0;
}