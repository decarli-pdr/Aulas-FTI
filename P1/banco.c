#include <stdio.h>

main() 
{
	float saldos[1000], valor, auxsaldos;
	int contas[1000], tipo, i, conta, houvetroca, aux;
	
	for (i=0;i<=999;i++){
		saldos[i]=0;
		contas[i]=0;
	}
	
	printf("Digite o numero da sua conta 1 a 1000\n");
	scanf("%d", &conta);	

	while(conta!=0) {
	
	printf("Digite 1 para deposito e 2 para saque\n");
	scanf("%d", &tipo);
	
	if (tipo==1 || tipo==2){
		printf("Digite o valor da sua transacao\n");
		scanf("%f", &valor);
		if (valor!=0) {
		contas[conta-1] = conta;
		if (tipo==1)		
		saldos[conta-1] = saldos[conta-1] + valor;
		printf("Conta: %d    tipo: deposito   valor: %.2f\n\n", conta, valor);
		else
		saldos[conta-1] = saldos[conta-1] - valor;
		printf("Conta: %d    tipo: saque   valor: %.2f\n\n", conta, valor);

	}
}
	

	printf("Digite o numero da sua conta 1 a 1000 (0 termina)\n");
	scanf("%d", &conta);
	
}

houvetroca=1;
while(houvetroca==1){
	houvetroca=0;
	for(i=0;i<999;i++)
	if (saldos[i]>saldos[i+1])
	{
		houvetroca=1;
		
		aux=contas[i];
		contas[i]=contas[i+1];
		contas[i+1]=aux;
		
		auxsaldos=saldos[i];
		saldos[i]=saldos[i+1];
		saldos[i+1]=auxsaldos;
	}
}

printf("\n CONTAS COM MOVIMENTO \n\n");
for (i=0;i<1000;i++)
if(contas[i]!=0)
printf("conta: %d     saldo: %10.2f\n", contas[i], saldos[i]);
return 0;
}