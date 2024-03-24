#include <stdio.h>

int main()
{
    int quantidadeNotas = 0;
    float media, nota = 0;
    printf("%s", "Olá, digite quantas notas desejará ler: ");
    scanf("%d", &quantidadeNotas);
    for (int i = 1; i <= quantidadeNotas; i++)
    {
        printf("\nInsira a nota %d", i);
        printf(": ");
        scanf("%f", &nota);
        media += nota;
    }
    media /= quantidadeNotas;
    printf("A média das %d", quantidadeNotas);
    printf(" notas é: %f", media);
    return 0;
}
