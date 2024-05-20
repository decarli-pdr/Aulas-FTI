#include<stdio.h>

int main(){
	int a=0,b=0;
	char operacao;
	float resultado=0;
	printf("Esse é um teste de calculadora, digite um número: ");
	scanf("%d",&a);
	printf("\nDigite a operação: ");
	scanf("%c",&operacao);
	printf("\nDigite o segundo número: ");
	scanf("%d",&b);
	switch(operacao)
		case("-")
			printf("O resultado é: %4.2f",a-b);
		case("+")
			printf("O resultado é: %4.2f",a+b);
		case("*")
			printf("O resultado é: %4.2f",a*b);
		case("/")
			printf("O resultado é: %4.2f",a/b);
	break;
}
