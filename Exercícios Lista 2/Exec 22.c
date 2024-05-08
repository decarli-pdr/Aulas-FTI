#include <stdio.h>

int main()
{
    int numeros[9];
    int lido = 0;

    for (int i = 0; i < 10; i++)
    {
        numeros[i] = 0;
    }

    while (lido != 99)
    {
        printf("\nDigite qualquer número de 1 a 10: ");
        scanf("%d", &lido);
        if (lido < 1 || lido > 10)
        {
            printf("\nNúmero inválido");
        }
        else
        {
            numeros[lido - 1]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > 0)
        {
            printf("\nO número %d foi digitado %d vezes", i + 1, numeros[i]);
        }
        else
        {
            printf("\nO número %d não foi digitado.", i + 1);
        }
    }

    return 0;
}