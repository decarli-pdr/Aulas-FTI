/* Exercício 3  19FEV2024
Asp 1021 Pedro DE CARLI Silva
------------------------------------------------------------------------
CONSTRUA UM PROGRAMA QUE LEIA UM CONJUNTO DE NÚMEROS INTEIROS 
POSITIVOS, REALIZE A SOMA DELES ATÉ SER ENCONTARDO UM  FLAG = -1 E IMPRIMA 
ESTA SOMA. 
------------------------------------------------------------------------
*/

#include <stdio.h> //inclui os comandos printf e scanf

int main() // é a função principal
{
    printf("Insira um número para ser somado (-1 termina): "); // Escreve isso na tela
    int soma = 0;                                              // declara a variável soma com valor 0
    int i;                                                     // declara a variável i
    scanf("%d", &i);                                           // lê i

    while (i != -1) // enquanto i for diferente de -1
    {
        soma = soma + i; // adiciona i na variável soma
        scanf("%d", &i); // lê i
        printf("Insira um número para ser somado (-1 termina): ");
    }
    soma++;                           // aumenta soma em 1 (porque para parar precisamos digitar um -1, que acaba sendo somado)
    printf("\nA soma resultou em: "); // escreve o valor da soma no final
    printf("%d", soma);

    return 0; // encerra sem erros
}