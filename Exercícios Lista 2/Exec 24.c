#include <stdio.h>

int main()
{
    int numeros[99];
    int lido = 0, achei;

    for (int i = 0; i < 100; i++)
    {
        numeros[i] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite um número aleatório: ");
        scanf("%d", &numeros[i]);
    }
    printf("\nDigite qualquer para buscar: ");
    scanf("%d", &lido);
    while (lido != 0)
    {
        int achei = -1;
        int posição = 0;
        while (posição < 100)
        {
            if (lido == numeros[posição])
            {
                achei = posição + 1;
            }
            posição++;
        }
        if (achei == -1)
        {
            printf("\nNúmero não achado");
        }
        else
        {
            printf("\nNúmero achado na posição %d", achei);
        }
        printf("\nDigite qualquer para buscar: ");
        scanf("%d", &lido);
    }
    return 0;
}