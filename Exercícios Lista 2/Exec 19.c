#include <stdio.h>
int main()
{
    int r[10], s[20], x[30], aux;

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

    for (int i = 0; i < 11; i++)
    {
        x[i] = r[i];
    }

    for (int i = 11; i < 31; i++)
    {
        x[i] = s[i];
    }

    for (int i = 0; i < 31; i++)
    {
        printf("\n%d", x[i]);
    }
    return 0;
}
