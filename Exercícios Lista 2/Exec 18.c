#include <stdio.h>

int main()
{
    int vetor[9], auxiliar;

    printf("Escreva 10 números inteiros: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        auxiliar = vetor[i];
        vetor[i] = vetor[9 - i];
        vetor[9 - i] = auxiliar;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n %d", vetor[i]);
    }

    return 0;
}
