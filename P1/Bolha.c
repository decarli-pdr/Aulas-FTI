#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char texto[5][41], aux[41];
	int i;
	int ht;
	
	
	for(i=0;i<5;i++) {
		printf("Digite o %do nome -max 40 caracteres:", i+1);
		fflush(stdin);
		fgets(texto[i],40,stdin);
	}
		
	ht=1;
	while(ht==1) {
		ht=0;
		for (i=0;i<4;i++){
			if (strcmp(texto[i],texto[i+1])>1)
			{
				strcpy(aux,texto[i]);
				strcpy(texto[i],texto[i+1]);
				strcpy(texto[i+1],aux);
				ht=1;	
			}
		}	
	}	
	
	printf("\nNomes em ordem alfabetica:\n");
	for (i=0;i<=5;i++)
	printf("%s\n", texto[i]);
	
	return 0;	
	
}