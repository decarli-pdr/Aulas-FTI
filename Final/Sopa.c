#include<stdio.h>
#include<string.h> //inclui as bibliotecas

main()
 {
 int NINT[50], ANO, QUARTO, i ; //cria as variáveis
 float NOTAS[50][6], TOTAL, NOTA;
 char SITUACAO[50][20];

 printf("Digite o ano e o quarto desta turma: ");
 scanf("%d %d",&ANO, &QUARTO);
 for(i=0;i<50;i++)
 {
 printf("\n Digite a nota do T2 do %do aspirante:", i+1);
scanf("%f",&NOTA);
NOTAS[i][2] = NOTA;
 if(NOTA = -10)
 strcpy(SITUACAO[i],"2ª chamada");
 else
 {
 TOTAL = NOTAS[i][0] + 2*NOTAS[i][1] + NOTA[i][2];
 NOTAS[i][4] = TOTAL/4.0;
 NOTAS[i][5] = (36 - TOTAL)/2.0;
 if(NOTAS[i][5] <= 0)
 strcpy(SITUACAO[i],"APROVADO");
 if(NOTA[i][5] >10)
strcpy(SITUACAO[i],"Prova Final");
 if(NOTAS[i][5] <= 10 && NOTAS[i][5] >0)
 strcpy(SITUACAO[i],"Indefinida");
 }
 }
 printf("\n\n**********ESOLA NAVAL**********\n\n");
 printf("ANO: %d QUARTO: %d", ANO, QUARTO);
 printf("\n\n NUMERO MEDIA P/PASSAR SITUACAO\n");
 for(i=0;i<50;i++)
 printf("\n%d %10.2f %10.2f %s\n",NINT[i],NOTAS[i][4], NOTAS[i][5], SITUACAO[i]); ; return 0;
}
