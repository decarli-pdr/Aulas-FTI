/*

main(){
    //todos os comandos começam com esse main()

    return 0;
}
--------------------------------------------------------------------------------
Ler dados -> scanf("formatação",&variavel);
--------------------------------------------------------------------------------
Imprimir dados -> printf("TEXTO E FORMATAÇÃO",var1,var2,var3[...    ]);
--------------------------------------------------------------------------------
%f -> float -> Número com decimal = float variavel ou float variavel=10;
%d -> int -> Númemro inteiro = int variavel
%c -> caractere = char
%u -> inteiro sem sinal
%e -> notação científica
%s -> strings
--------------------------------------------------------------------------------
COMPARAÇÃO:

==  igual
!=  não igual
>   maior que
<   menor que
>=  maior ou igual ou
<=  menor ou igual ou
--------------------------------------------------------------------------------
LÓGICA:

&&  e
||  ou
!   não
--------------------------------------------------------------------------------
SE:

if (a==3 && b <=2)
{
     CÓDIGO
     }
else{
    CÓDIGO SENÃO
}
--------------------------------------------------------------------------------
PULAR LINHA NO TEXTO:

\n
--------------------------------------------------------------------------------
ENQUANTO:
 while(CONDIÇÃO){

    COMANDO

 }
--------------------------------------------------------------------------------
OPERAÇÕES:

+   soma   
-   subtração
/   divisão
*   multiplicação
%   módulo

x++     aumenta x em 1 unidade
x--     diminui x em 1 unidade
x+=y    aumenta x em y unidades
x-=y    subtrai x em y unidades
x*=y    multiplica x por y
x-=y    divide x por y
--------------------------------------------------------------------------------
FOR:

for(Inicialização;condição;incremento){

        COMANDOS

}

Ex:

for (int i=0;i<=10;i++){
    printf("\n%d",i);
}
--------------------------------------------------------------------------------
COMENTÁRIOS:

//texto  comenta a linha

/*
comenta tudo entre as linhas
*/

/* Bibliotecas:

#include<stdio.h>
#include<math.h>
#include<string.h> 

char letra = 'a'; //armazena 1 caractere
scanf("%c",&letra);


char palavra[11] = {'a','b','a','t','e','\0'}  //armazena vetores de letras
scanf("%s",palavra);

scanf("%s",palavra[indice]);                //lê strings até o espaço

gets(palavra);      //Lê o valor ignorando o tamanho
fflush(stdin);      //Limpa o buffer
fgets(palavra,Int tamanho,stdin);     //Lê o valor cuidando do tamanho

strcpy(variável,"conteudo");            //salva o conteúdo

palavra[2][3] = 'o';


%3.1f - 3 no total, 1 decimal
*/