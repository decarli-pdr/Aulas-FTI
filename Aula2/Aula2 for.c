/* Aula 2  26FEV2024
Asp 1021 Pedro DE CARLI Silva*/

#include <stdio.h> //inclui a biblioteca com os comandos prinf e scanf

int main() // função principal do programa (tudo o que será executado)
{
    int i; // cria a variável i

    for (i = 1; i <= 10; i++) // for(inicialização;incremento;condição)
        printf("\n%d", i);    // imprime i em uma nova linha VTD \n

    /*  inicialização = comando que é executado 1 vez no início do for
        incremento  =   comando que é executado a cada repetição
        condição    =   o for fica repetindo enquanto essa condição for verdadeira*/

    return 0;
}
