/* Exercício 1  19FEV2024
Asp 1021 Pedro DE CARLI Silva
CALCULAR E EXIBIR A RELAÇÃO DE NÚMEROS PARES ATÉ 10, INCLUSIVE.
*/

#include <stdio.h> //inclui os comandos printf e scanf

int main() // é a função principal
{
    int i = 0;      // declara a variável i e salva o valor 0
    while (i <= 10) // enquanto i for menor ou igual à 10 faça:
    {
        if (i % 2 == 0) // se i dividido por 2 tiver resto 0:
        {
            printf("\n%d", i); // imprima i formatado
        }
        i++; // Aumente i em 1 a cada repetição
    }

    return 0;
}
