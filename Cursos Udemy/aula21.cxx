#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main()
{
    
	int a,b,c,d;	
	
	printf("\nDigite um valor: ");
	scanf("%d", &a);
	
	if (a > 5 && a < 15){printf("\nO valor esta entre 5 e 15\n");}
	else {printf("\nO valor esta invalido\n");}
	
	printf("\nDigite um valor: ");
	scanf("%d", &b);
	
	if (b > 5 || b < 15){printf("\nO valor esta entre 5 e 15\n");}
	else {printf("\nO valor esta invalido\n");}
	
	printf("\nDigite um valor: ");
	scanf("%d", &c);
	
	if (c > 5 && c < 15){printf("\nO valor esta entre 5 e 15\n");}
	else {printf("\nO valor esta invalido\n");}
	
	
	
	
	system ("pause");
}