#include <stdio.h> // entrada e saida de dados
#include<stdlib.h> // simula prompt dos
#include<stdbool.h>

void main()
{
 bool a = true, b = false;
 
 if (a){printf("\nA eh verdadeiro\n");}
 else {printf("\nA Eh Falso\n");}
 
 printf("\nDigite novo valor de A: ");
 scanf("%d", &a);
 
 if (a){printf("\nA eh verdadeiro\n");}
 else {printf("\nA Eh Falso\n");}
 
  //if (b){printf("\nB eh verdadeiro\n");}
// else {printf("\nB Eh Falso\n");}
 
  if (b){printf("\nB eh falso\n");}
 
 
printf("\n");	
system ("pause");
}