/* Exercício 3  19FEV2024
Asp 1021 Pedro DE CARLI Silva*/

#include <stdio.h> //inclui os comandos printf e scanf

int main() // é a função principal
{
    printf("Insira um número para ser somado (-1 termina): "); // Escreve isso na tela
    int soma = 0;                                              // declara a variável soma com valor 0
    int i;                                                     // declara a variável i

    while (i != -1) // enquanto i for diferente de -1
    {
        scanf("%d", &i); // lê i
        soma = soma + i; // adiciona i na variável soma
    }
    soma++;                           // aumenta soma em 1 (porque para parar precisamos digitar um -1, que acaba sendo somado)
    printf("\nA soma resultou em: "); // escreve o valor da soma no final
    printf("%d", soma);

    return 0; // encerra sem erros
}
