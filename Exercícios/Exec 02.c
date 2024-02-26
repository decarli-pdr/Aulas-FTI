/* Exercício 2  19FEV2024
Asp 1021 Pedro DE CARLI Silva*/

#include <stdio.h>

int main()
{
    printf("Insira um número: ");
    int limite;
    int i;
    scanf("%d", &limite);
    printf("\n%s", "Até ");
    printf("%d", limite);
    printf(" foram achados os seguintes números pares: ");
    while (i <= limite)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
            printf("%s", " ");
        }
        i++;
    }

    return 0;
}
