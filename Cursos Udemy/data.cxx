#include <stdio.h> // entrada e saida de dados
#include<stdlib.h> // simula prompt dos
#include<stdbool.h>

void main()
{
 int dia;
 int mes;
 int ano;
 int diaatual;
 int mesatual;
 int anoatual;
 
   printf("\nDigite a data do seu nascimento:\n");
   printf("\nDia:");
   scanf("%d",&dia);
   printf("\nMes:");
   scanf("%d",&mes);
   printf("\nAno:");
   scanf("%d",&ano);
   printf("\ndata do seu nascimento: %d / %d / %d  \n", dia,mes,ano);
   
   printf("\nDigite a data atual:\n");
   printf("\nDia:");
   scanf("%d",&diaatual);
   printf("\nMes:");
   scanf("%d",&mesatual);
   printf("\nAno:");
   scanf("%d",&anoatual);
   
   printf("\nSua idade e: %d / %d / %d  \n",diaatual , mes +12 - 5 - mesatual, anoatual -1 - ano);
 //  if (){}

 
printf("\n");	
system ("pause");
}