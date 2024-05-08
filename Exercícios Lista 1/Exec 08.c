#include<stdio.h>

int main(){

int quantidade;
float nota, somanota, media;
printf("Digite a primeira nota: ");
scanf("%f",&nota);

quantidade, media=0;


while(nota!=-1)
{

somanota = somanota + nota;
quantidade=quantidade+1;
printf("Digite o valor da outra nota: ");
scanf("%f",&nota);

}
media=(somanota/quantidade);
printf("A media é dada por: %f",media);	


}