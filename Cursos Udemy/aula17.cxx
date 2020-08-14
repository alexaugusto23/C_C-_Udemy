#include <stdio.h> // entrada e saida de dados
#include<stdlib.h> // simula prompt dos
#include<stdbool.h>

void main()
{
 int a = 5, opcao;
 float b = 2.5;
 char c = 'x';
 
if (a==5){printf("\nO valor da variavel e %d\n",a);}

if (b == 2.5){printf("\nA variavel e 2.5\n");}
else {printf("\nA variavel e diferente\n");}	
if (c == 'x'){printf("\nA variavel e x\n");}
else {printf("\nA variavel e diferente\n");}

if (a % 2 == 1){printf("\nA variavel e impar\n");}
else {printf("\nA variavel e par\n");} 


printf("\nDigite uma opcao: ");
scanf("%d", &opcao);

if (opcao == 1){printf("\nA opcao = 1\n");}
else if (opcao == 2){printf("\nA opcao = 2\n");}
else {printf("\nNao eh a opcao 1 nem 2\n");}
	
	
system ("pause");
}