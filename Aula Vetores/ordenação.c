#include <stdio.h>

int main()
{
    int vetor[9], a;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int x = 0; x < 10; x++)
        {
            if (vetor[x] > vetor[x + 1])
            {
                a = vetor[x];
                vetor[x] = vetor[x + 1];
                vetor[x + 1] = a;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d", vetor[i]);
    }

    return 0;
}
