#include <stdio.h>

int main()
{

    int n = 0;
    float soma = 0.0;
    printf("Digite N:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        soma += ((float) i / (n - i + 1));
    }

    printf("O valor é: %f", soma);
}