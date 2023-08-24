#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// /*QUESTÃO 1*/
// int main()
// {
//     // Declara as variáveis t, i e o array 2D M[3][4].
//     int t, i, M[3][4];

//     // Armazena os valores nos seguintes arrays: array0 {1, 2, 3, 4}, array1 {5, 6, 7, 8}, array2 {9, 10, 11, 12}.
//     for (t = 0; t < 3; ++t)
//         for (i = 0; i < 4; ++i)
//             M[t][i] = (t * 4) + i + 1;

//     // Printa os valores de M[t][i] onde, M[0][0] = 1, M[0][1] = 2, M[1][1] = 5, etc.
//     for (t = 0; t < 3; ++t)
//     {
//         for (i = 0; i < 4; ++i)
//             printf("%3d", M[t][i]);
//         printf("\n");
//     }

//     system("pause");
//     return 0;
// }

// /*QUESTÃO 2*/
// int main()
// {
//     /* Declara as variáveis y, x e apontado de p (*p) */
//     int y, *p, x;

//     /* Atribui o valor 0 à variável y (y = 0) */
//     y = 0;

//     /* Atribui o endereço de memória da variável y à variável p (p = &y) */
//     p = &y;
//     printf("\n&y = %d", &y);
//     printf(" = p = %d", p);

//     /* Atribui o valor armazenado em p, para a variável x (x = &y) */
//     x = *p;
//     printf("\n\nx = 0%d", x);

//     /* Atribui o valor 4 à variável x (x = 4) */
//     x = 4;

//     /* Incrementa o valor armazenado no endereço que p aponta (y = 1, *p = 1) */
//     (*p)++;
//     printf("\n\n*p = %d", *p);

//     /* Não modifica nada (x = 4) */
//     x;
//     printf("\n\nx = %d", x);

//     /* Realiza a operação matemática: *p = 1 + 4 (*p = 5, y = 5) */
//     (*p) += x;
//     printf("\n\ny = %d", y);

//     printf("\n\n");
//     system("pause");
//     return (0);
// }

/*QUESTÃO 3*/
// int main()
// {
//     int a = 5, b = 6, c = 7;
//     int v[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
//     int *pt1, *pt2, *pt3;

//     // Atribui os endereços das variáveis: (a, b e c) aos valores dos ponteiros: (pt1, pt2 e pt3).
//     pt1 = &a;
//     pt2 = &b;
//     pt3 = &c;

//     // Atribui o endereço da variável c à todos os ponteiros.
//     pt1 = pt3;
//     pt2 = pt3;

//     // Realiza a operação matemática: *pt1 = 7 + 7 (c = 14 = *p1 = *pt2 = *pt3).
//     *pt1 = *pt2 + *pt3;
//     printf("\nc = %d, *pt1 = %d, *pt2 = %d, *pt3 = %d", c, *pt1, *pt2, *pt3);

//     // Atribui o endereço do valor int posicionado no terceiro índice do vetor à variável pt1 (*pt1 = 30 = v[3]).
//     pt1 = &v[3];
//     printf("\npt1 = %d", pt1);
//     printf("\n*pt3 = %d", *pt3);

//     //
//     printf("\n\nLoop for:\n");
//     for (int k = 0; k < 3; k++)
//     {
//         *pt1 = *pt1 + 1000;
//         // *pt1 vai assumir os valores: 1030, 1050, 1070 (v[3] = 1030, v[5] = 1050, v[7] = 1070).
//         printf("\n*pt1 = %d", *pt1);

//         // O endereço de pt1 se move 2 casas à direita no vetor para cada processo do loop (Final do loop: pt1 = &v[9]).
//         pt1 = pt1 + 2;
//         printf("\npt1 = %d, pt1(final) = %d", pt1, &v[9]);
//     }
//     printf("\n\nConclusao final:");

//     /*LETRA a)
//     int a = 5, b = 6, c = 14;*/
//     printf("\na = %d, b = %d, c = %d.", a, b, c);

//     /*LETRA b)
//     v[10] = {0, 10, 20, 1030, 40, 1050, 60, 1070, 80, 90};*/
//     printf("\nVetor: ");

//     for (int l = 0; l < 10; l++)
//     {
//         printf("%d ", v[l]);
//     }
//     printf("\n");
//     system("pause");
//     return (0);
// }

// /*QUESTÃO 4*/
// int main()
// {
//     int a = 5, b = 6, c = 7;
//     int v[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
//     int *pt1, *pt2, *pt3;
//     pt1 = &a;
//     pt2 = &b;
//     pt3 = &c;

//     // Atribui o endereço armazenado em pt1 para pt2 (pt2 = &a).
//     pt2 = pt1;

//     // Realiza a operação matemática *pt3 = 5 + 2000 (c = 2005).
//     *pt3 = *pt2 + 2000;

//     // Atribui o endereço do valor int posicionado no oitavo índice do vetor à variável pt1 (*pt1 = 80 = v[8]).
//     pt1 = &v[8];

//     for (int k = 0; k < 2; k++)
//     {
//         // *pt1 vai assumir os valores: 75, 45.
//         *pt1 = *pt1 - 5;

//         // O endereço de pt1 se move duas casa à esquerda no vetor para cada processo do loop (Final do loop: pt1 = &v[2])
//         pt1 = pt1 - 3;
//         printf("\npt1 = %d, pt1(final) = %d", pt1, &v[2]);
//     }
//     printf("\n\nConclusao final:");

// /*LETRA a)
// int a = 5, b = 6, c = 2005.*/
// printf("\na = %d, b = %d, c = %d", a, b, c);

// /*LETRA b)
// v[10] = {0, 10, 20, 30, 40, 45, 60, 70, 75, 90}*/
// printf("\nVetor: ");

// for (int l = 0; l < 10; l++)
// {
//     printf("%d ", v[l]);
// }
// printf("\n");
//     system("pause");
//     return (0);
// }

// /*QUESTÃO 5*/
// int main()
// {
//     int a = 5, b = 6, c = 7;
//     int v[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
//     int *pt1, *pt2, *pt3;
//     pt1 = &a;
//     pt2 = &b;
//     pt3 = &c;
//     pt1 = pt2;
//     pt3 = pt2;

//     // Atribui o valor do apontado de pt3 + 1000 ao apontado de pt2 (6 + 1000 = 1006, b = 1006).
//     *pt2 = *pt3 + 1000;

//     // Atribui o valor do endereço do primeiro índice do vetor à variável pt1 (pt1 = &v[0]).
//     pt1 = v;
//     printf("\n%d\n", v);

//     // Movimenta o endereço armazenado em pt1 em 1 casa para à direita no vetor (pt1 = &v[1]).
//     pt1 = pt1 + 1;

//     for (int k = 0; k < 2; k++)
//     {
//         // *pt1 vai assumir os valores: 5, 25.
//         *pt1 = *pt1 / 2;

//         // O endereço de pt1 se move 4 casas à direita no vetor para cada processo do loop (Final: pt1 = &v[9]).
//         pt1 = pt1 + 4;
//         printf("\npt1 = %d, pt1(final) = %d", pt1, &v[9]);
//     }
//     printf("\n\nConclusao final:");

//     /*LETRA a)
//     int a = 5, b = 1006, c = 7.*/
//     printf("\na = %d, b = %d, c = %d", a, b, c);

//     /*LETRA b)
//     v[10] = {0, 5, 20, 30, 40, 25, 60, 70, 75, 90}*/
//     printf("\nVetor: ");

//     for (int l = 0; l < 10; l++)
//     {
//         printf("%d ", v[l]);
//     }
//     printf("\n");

//     system("pause");
//     return (0);
// }

// /*QUESTÃO 6*/
// void main()
// {
//     float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.7};
//     float *f;
//     int i;

//     // Atribui o endereço do vetor à variável f.
//     f = vet;

//     printf("contador / valor / valor / endereco / endereco");

//     for (i = 0; i <= 4; i++)
//     {
//         // Printa o contador.
//         printf("\ni = %d", i);

//         // Printa o índice do array junto com o seu respectivo valor.
//         printf(" vet[%d] = %.1f", i, vet[i]);

//         // Printa a equação que move o endereço do vetor uma casa à direita, e os valores do array.
//         printf(" *(f + %d) = %.1f", i, *(f + i));

//         // Printa o endereço de cada índice/valor do vetor em hexadecimal.
//         printf(" &vet[%d] = %X", i, &vet[i]);

//         // Printa a equação que move o endereço do vetor uma casa à direita, utilizando a variável f como endereço inicial.
//         // Printa também o endereço de cada índice/valor do vetor em hexadecimal.
//         printf(" (f + %d) = %X\n", i, f + i);
//     }
//     system("pause");
// }