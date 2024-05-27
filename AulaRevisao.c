#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    fflush(stdin); //limpa o buffer da memória
    char nome1[5],nome2[5];
    
    strcpy(nome1,"Test");
    strcpy(nome2,"Test");
    printf("\n %d",strcmp(nome1,nome2));
    printf("\n\n");
    int tamanho = strlen(nome1);
    printf("%d \n",tamanho);

    //gets(nome1);
    fflush(stdin);
    fgets(nome2,5,stdin);
    fflush(stdin);

    printf("%s \n\n",nome1);

    printf("%s \n\n",nome2);

    return 0;
}
