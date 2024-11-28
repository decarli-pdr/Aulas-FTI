/*
27) Fornecidos  pelo  teclado  número  da  conta  (1  a  1000), 
código do movimento (1=saque ou 2=depósito) e valor 
do  movimento,  sendo  a  última  conta  um  flag  0  (zero), 
pede-se: imprimir para cada conta seu número e saldo, 
em ordem ascendente de saldo. Contas sem movimento 
não  devem  ser  impressas.  Considere  que  todas  as 
contas iniciam o programa com saldo 0 (zero). 
 */

#include <stdio.h> //adiciona os comandos

int main()
{
    int conta[1000][3], valor, aux; // declara as variáveis

    /* A matriz é uma planilha, com o número da conta*/

    int operacao, contalida; // declara as variáveis

    for (int i = 0; i < 1000; i++) // para i começando em 0, enquanto i menor que 1000, i aumenta em 1
    {
        conta[i][0] = i + 1; // salva o número da conta dentro da matriz
        conta[i][1] = 0;
        conta[i][2] = 0;
    }

    printf("\nDigite a conta (0 sai)"); // Escreve digite o número da conta
    scanf("%d", &contalida);            // ler o número da conta

    while (contalida != 0) // enquanto a conta lida for diferente de 0
    {
        conta[contalida - 1][2] = 1;                      // diz que a conta foi usada. Salva na 3ª posição da planilha o número 1
        printf("\nDigite a operacao: \n1 -> + \n2 -> -"); // imprime o texto
        scanf("%d", &operacao);
        printf("\nDigite o valor");
        scanf("%d", &valor);
        if (operacao == 1) // Se a operação for 1
        {
            conta[contalida - 1][1] = conta[contalida - 1][1] + valor; // Salva na segunda casa da conta nº contalida-1 o valor dela mais o adicionado
        }
        if (operacao == 2) // se a operação for 2
        {
            conta[contalida - 1][1] = conta[contalida - 1][1] - valor; // Salva na segunda casa da conta nº contalida-1 o valor dela menos o adicionado
        }
        printf("\nDigite a conta (0 sai)");
        scanf("%d", &contalida);
    }

    int estouordenado = 0; //cria a variável para controlar a ordenação (estou desordenado)
    while (estouordenado == 0) //Enquanto eu estiver desordenado...
    {
        estouordenado = 1; //Estou ordenado até que se prove o contrário
        for (int i = 0; i < 999; i++) //para o i começando em 0, enquanto for menor que 999, aumente em 1 a cada repetição
        {
            if (conta[i][1] < conta[i + 1][1]) // Se o saldo (espaço 1) da conta i for menor que o saldo da conta i+1
            {
                aux = conta[i + 1][0];         // Pega o número da conta i+1 e salvar em auxiliar
                conta[i + 1][0] = conta[i][0]; // Pegar o número da conta i e salvar na conta i+1
                conta[i][0] = aux;             // Pegar o número da conta da variável auxiliar e salvar na conta i

                aux = conta[i + 1][1];
                conta[i + 1][1] = conta[i][1];
                conta[i][1] = aux;
                                                
                aux = conta[i + 1][2];
                conta[i + 1][2] = conta[i][2];
                conta[i][2] = aux;
                estouordenado = 0; //Se o programa passou no IF, é porque estava desordenado

                /*
                Repete a mesma coisa 3 vezes, uma para o número,
                outra para o saldo e outra para se a conta
                teve movimentação ou não*/
            }
        }
    }

    for (int i = 0; i < 1000; i++) //passa por todas as contas
    {
        if (conta[i][2] == 1) //Se a conta tiver movimentação...
        {
            printf("A conta %d tem um saldo de R$ %d\n", conta[i][0], conta[i][1]); //Imprime o saldo da conta e o número das que tiveram movimentação
        }
    }

    return 0;
}
