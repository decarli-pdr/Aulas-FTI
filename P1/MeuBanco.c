#include <stdio.h>

int main(int argc, char const *argv[])
{
    int conta[1000][3], valor, aux[3];
    int operacao, contalida;

    for (int i = 0; i < 1000; i++)
    {
        conta[i][0] = i + 1;
        conta[i][1] = 0;
        conta[i][2] = 0;
    }

    printf("\nDigite a conta (0 sai)");
    scanf("%d", &contalida);

    while (contalida != 0)
    {
        conta[contalida - 1][2] = 1;
        printf("\nDigite a operacao 1+ 2-");
        scanf("%d", &operacao);
        printf("\nDigite o valor");
        scanf("%d", &valor);
        if (operacao == 1)
        {
            conta[contalida][1] = conta[contalida][1] + valor;
        }
        if (operacao == 1)
        {
            conta[contalida][1] = conta[contalida][1] - valor;
        }
        printf("\nDigite a conta (0 sai)");
        scanf("%d", &contalida);
    }

    int estouordenado = 1;
    while (estouordenado == 1)
    {
        estouordenado = 0;
        for (int i = 0; i < 999; i++)
        {
            if (conta[i][1] < conta[i + 1][1])
            {
                aux[0] = conta[i + 1][0];
                conta[i + 1][0] = conta[i][0];
                conta[i][0] = aux[0];

                aux[1] = conta[i + 1][1];
                conta[i + 1][1] = conta[i][1];
                conta[i][1] = aux[1];

                aux[2] = conta[i + 1][2];
                conta[i + 1][2] = conta[i][2];
                conta[i][2] = aux[2];
                estouordenado = 1;
            }
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        if (conta[i][2] == 1)
        {
            printf("\nA conta %d tem um saldo de R$%d", conta[i][0], conta[i][1]);
        }
    }

    return 0;
}
