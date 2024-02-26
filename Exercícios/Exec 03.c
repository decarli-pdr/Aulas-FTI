/* Exercício 3  19FEV2024
Asp 1021 Pedro DE CARLI Silva*/

#include <stdio.h>

int main()
{
    printf("Insira um número para ser somado (-1 termina): ");
    int soma = 0;
    int i;

    while (i != -1)
    {
        scanf("%d", &i);
        soma = soma + i;
    }
    soma++;
    printf("\nA soma resultou em: ");
    printf("%d", soma);

    return 0;
}
