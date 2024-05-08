//Feito pela REBECA PENA

#include<stdio.h>
int main(){
	int r[9],s[9],i;
	
	for(i=0;i<10;i++){
		printf("Digite um numero inteiro:");
		scanf("%d",&r[i]);
	}
	
	for(i=0;i<10;i++){
		r[i]=s[9-i];
	}
	
	for(i=0;i<10;i++){
		printf("\n %d",s[i]);
	}
	return 0;
	
}