#include <stdio.h>
#include <stdlib.h>
/*#define RUIM 8000
int main(void)

{
    const float preco = 9.90;
    float nota1, nota2, media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    pow(3, 2);
    sqrt(36);
    ceil(9.2);
    floor(9.8);

    printf("A media das notas e: %.1f\n", media);

    system("pause");
    return 0;
}*/

int max(int num1, int num2)
{
    int resultado;
    if (num1 > num2)
    {
        resultado = num1;
    }
    else
    {
        resultado = num2;
    }
    return resultado;
}

int main(void)
{

    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("O maior numero e: %d\n", max(numero1, numero2));

    system("pause");
    return 0;
}