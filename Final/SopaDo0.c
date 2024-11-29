#include <stdio.h>
#include <string.h>

main()
{

    int nint[50], ano, quarto;
    char situacao[50][20];
    float notas[50][6];

    printf("Digite o ano e o quarto da turma");
    scanf("%d %d", &ano, &quarto);

    for (int i = 0; i < 50; i++)
    {
        printf("Digite a %dª nota\n", i + 1);
        scanf("%f", &notas[i][2]);
        if (notas[i][2] == -10)
        {
            strcpy(situacao[i], "2ª chamada");
        }
        else
        {
            notas[i][4] = (notas[i][0] + 2 * notas[i][1] + notas[i][2]) / 4.0;
            notas[i][5] = 18 - 2 * notas[i][4];

            if (notas[i][5] <= 0)
            {
                strcpy(situacao[i], "Aprovado");
            }
            else
            {
                if (notas[i][5] > 10)
                {
                    strcpy(situacao[i], "Prova final");
                }
                else
                {
                    strcpy(situacao[i], "Indefinido");
                }
            }
        }
    }

    printf("\n\n---------------------ESCOLA NAVAL--------------------------\n\n");
    printf("ANO: %d               QUARTO: %d\n", ano, quarto);

    for (int i = 0; i < 50; i++)
    {
        printf("\n%d %10.2f %5.2f %s", nint[i], notas[i][4], notas[i][5], situacao[i]);
    }
}
