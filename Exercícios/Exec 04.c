/* Exercício 1  04MAR2024
Asp 1021 Pedro DE CARLI Silva*/

#include <stdio.h> //inclui os comandos printf e scanf

int main()
{
    int numero;
    printf("Escreva um número (-1 encerra): ");
    scanf("%d", &numero);
    int maior = numero;
    int menor = numero;
    while (numero != -1)
    {
        printf("Escreva um número (-1 encerra): ");
        scanf("%d", &numero);
        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
    }
    printf("O maior número digitado foi: %d",maior);
    printf("\nO menor número digitado foi: %d",menor);

    return 0;
}
