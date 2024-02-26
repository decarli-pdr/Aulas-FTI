/* Aula 2  26FEV2024
Asp 1021 Pedro DE CARLI Silva*/

#include <stdio.h> //inclui a biblioteca com os comandos prinf e scanf

int main()
{
    int i; // declara a variável I
    i = 1;

    while (i <= 10) //enquanto a variável i for menor ou igual a 10
    {
        printf("\n%d", i); //imprima na tela a variável i (pulando linha por causa do \n)
        i = i + 1; // ou I++
    }

    return 0; // encerra o código
}
