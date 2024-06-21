#include<stdio.h>

int main(){
	
	int contas[1000],tipomov,valor,i,saldos[1000],conta;
	int auxsaldos,ht,aux;
	
	printf("Digite o numero da conta a ser usada: ");
	scanf("%d",&conta);
	
	for(i=0;i<1000;i++){
		
		contas[i]=0;
		saldos[i]=0;
		
	}
	while(conta!=0){
		
		printf("Digite o tipo de movimento 1-Saca 2-Deposita: ");
		scanf("%d",&tipomov);
		
		printf("Digite o valor: ");
		scanf("%d",&valor);
		
		if(tipomov==1)
		saldos[conta-1]=saldos[conta-1]+valor;

		if(tipomov==2)
		saldos[conta-1]=saldos[conta-1]+valor;
		
		printf("Digite o numero de outra conta: ");
		scanf("%d",&conta);
		
		contas[conta-1] = conta;
	}
	

ht=1;
while(ht==1){
	ht=0;
	for(i=0;i<1000;i++){
		if(saldos[i]>saldos[i+1]){
		ht=1;
		
		aux=contas[i+1];
		contas[i+1]=contas[i];
		contas[i]=aux;

		auxsaldos=saldos[i+1];
		saldos[i+1]=saldos[i];
		saldos[i]=auxsaldos;			
	
		}
	}
}
	
	for(i=0;i<1000;i++){
		if(saldos[i]!=0){
			printf("Conta: %d Saldo: %d",contas[i],saldos[i]);
		}
	}
	

}