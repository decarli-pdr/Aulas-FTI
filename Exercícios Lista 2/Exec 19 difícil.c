#include <stdio.h>
int main()
{
    int r[10], s[20], x[30], aux, indicer = 0, indices = 0, indicex = 0, termineir = 0, termineis = 0, termineix = 0;

    printf("Digite 11 números no vetor r: ");
    for (int i = 0; i <= 10; i++)
    {
        scanf("%d", &r[i]);
    }

    printf("Digite 21 números no vetor s: ");
    for (int i = 0; i <= 20; i++)
    {
        scanf("%d", &s[i]);
    }

    for (int i = 0; i <= 10; i++)
    {
        for (int b = 0; b <= 10; b++)
        {
            if (r[b] > r[b + 1])
            {
                aux = r[b];
                r[b] = r[b + 1];
                r[b + 1] = aux;
            }
        }
    }

    for (int i = 0; i <= 20; i++)
    {
        for (int b = 0; b <= 20; b++)
        {
            if (s[b] > s[b + 1])
            {
                aux = s[b];
                s[b] = s[b + 1];
                s[b + 1] = aux;
            }
        }
    }

    while (indicer != 10 && indices != 20)
    {

        if (indicer < 11 && r[indicer] < s[indices])
        {

            x[indicex] = r[indicer];
            indicer++;
            indicex++;
        }

        if (indices < 21 && s[indices] < r[indicer])
        {

            x[indicex] = s[indices];
            indices++;
            indicex++;
        }

        if (s[indices] == r[indicer])
        {
            x[indicex] = s[indices];
            indicer++;
            indices++;
            indicex++;
        }
    }

    while (indicex < 31)
    {
        x[indicex] = 0;
        indicex++;
    }

    for (int i = 0; i < 31; i++)
    {
        printf("\n%d", x[i]);
    }

    return 0;
}
