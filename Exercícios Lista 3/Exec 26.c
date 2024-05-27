#include<stdio.h>

int main()
{
    int vetor[128];

    for (int contador = 0; contador < 128; contador++)
    {
        printf("\ndigite um numero");
        scanf("%d",&vetor[contador]);
    }
    
    for (int a = 0; a < 127; a++)
    {
        for (int b = 0; b < 127; b++)
        {
            if (vetor[b]>vetor[b+1])
            {
                int auxiliar = vetor[b];
                vetor[b] = vetor[b+1];
                vetor[b+1] = auxiliar;
            }
            
        }
        
    }
    int busca;
     printf("\ndigite um numero para buscar");
        scanf("%d",&busca);

int inicial=0,final=127,tamanho=128;


        tamanho/=2;
        if (busca>vetor[tamanho])
        {
            final=tamanho;
        }else
        {
            inicial=tamanho;
        }
        
        
    

    return 0;
}
