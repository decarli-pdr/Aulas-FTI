/* Exercício 2  19FEV2024
Asp 1021 Pedro DE CARLI Silva*/

#include <stdio.h> //inclui os comandos printf e scanf

int main() // é a função principal
{
    printf("Insira um número: ");
    int limite;                                            // declara a variável limite
    int i;                                                 // declara a variável i
    scanf("%d", &limite);                                  // lê um valor para limite
    printf("\n%s", "Até ");                                // escreve Até
    printf("%d", limite);                                  // escreve o limite
    printf(" foram achados os seguintes números pares: "); // escreve isso também
    while (i <= limite)                                    // enquanto o i for menor ou igual a limite
    {
        if (i % 2 == 0) // se o resto de i por 2 for 0
        {
            printf("%d", i);   // imprime o i
            printf("%s", " "); // dá um espacinho pra deixar bonito
        }
        i++; // aumenta 1 em i
    }

    return 0; // finaliza sem erros
}
