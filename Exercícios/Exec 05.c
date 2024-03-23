#include<stdio.h>

int main(){

int num,i, soma;
printf("Digite a quantidade de multiplos de 5 a serem somados: ");
scanf("%d",&num);

for(i=0;i<=5*num;i++){
	if(i%5==0)
	soma=i+soma;
}

printf("Soma = %d",soma);	
	
}