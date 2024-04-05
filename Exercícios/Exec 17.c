#include<stdio.h>

int main()
{
    for (int dadoUm = 1; dadoUm < 7; dadoUm++)
    {
        for (int dadoDois = 1; dadoDois < 7; dadoDois++)
        {
            printf("\nPara o lançamento %d e %d o resultado é %d.",dadoUm,dadoDois,dadoUm+dadoDois);
        }
        
    }
    
    return 0;
}
