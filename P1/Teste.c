//#include <stdio.h> => Adiciona os comandos printf() e scanf()
//#include <stdlib.h> -->  adiciona biblioteca para a função fflush(stdin)
//fflush(stdin) => limpa a memória do teclado
//#include <locale.h> => para a função setlocale (LC_ALL, “portuguese”); --> Adiciona/ permite acentos, padroniza língua como português.
//#include <math.h> => (sqrt(x)); (cbrt(x)) e (pow(x,y) (x=base, y=expoente) 
//%d = Int/ inteiros; %f = Float/ Reais; %c = Char/ Caracter; %s = String (NÃO RECEBE O & NO SCANF)     
//strcpy ( VARIAVEL , “Msg, nome, qualquer coisa”); : substitui os valores do vetor pela mensagem escrita;
//strcat ( VARIAVEL , “Msg, nome, qualquer coisa”); : adiciona aos valores do vetor a mensagem escrita, sem respeitar os limites do vetor
//strlen( VARIAVEL); : conta a quantidade de valores no vetor, inclusive os espaços, mas não conta o \0 
//strcmp( STRING1 , STRING2); : Compara as duas em relação a ordem alfabetica. -1 se a primeira for menor que a segunda. 0 se tiverem os mesmo valor. 1 se a primeira for maior.

// em caso de buble de string tem q fazer uma matriz, declara o aux com vetor, e os comandos sao (essa diz que se o primerio for menor q o segundo retorna menos 1)strcmp(texto[i],texto[i+1]==1) pra entrar no if, e o strcpy joga o da direita na esquerda strcpy(aux,texto[i])...
//strlen conta qnts letras tem na palvra sem contar com o contra barra zero
// a de correlacione pode estar diferente da sopa: strlen strcpy o indicie é sempre do 0 ate n-1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<string.h>

int main(){


//criar um programa que receba até 900 nomes de até 20 letras e os coloque em ordem alfabética

char nomes[5][21], aux[21];
int i=0;

int x=1,terminei=0;

while(terminei==0){
    fflush(stdin);
    printf("Escreva o %dº nome, de até 20 letras. (Escreva 0 para parar): \n", i+1);
    fgets(nomes[i], 20, stdin);
    if(nomes[i][0]=='0'){
        terminei=1;
    }else{
        i++;
    }
    
}

int emordem = 0;
while(emordem==0){
    emordem=1;
    for(x=0;x<i-1;x++){
        if(strcmp(nomes[x],nomes[x+1])==1){
        strcpy(aux,nomes[x]);
        strcpy(nomes[x],nomes[x+1]);
        strcpy(nomes[x+1],aux);
        emordem=0;
        }
    }
    
}

for (int fim = 0; fim < i; fim++)
{
    printf("%s\n",nomes[fim]);
}

return 0;
}