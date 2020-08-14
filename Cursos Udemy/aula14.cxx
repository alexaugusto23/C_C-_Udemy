#include <stdio.h> // entrada e saida de dados
#include<stdlib.h> // simula prompt dos
#include<stdbool.h>

int main()
{
	int a = 5 , b =3 ;
	
	printf("\nO valor de %d + %d = %d",a,b,a+b);
	printf("\n");
	printf("\nO valor de %d - %d = %d\n",a,b,a-b);
	printf("\n");
	
	a=0;
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("\n");
	
	b=0;
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("\n");
	
	printf("\nO valor de %d + %d = %d",a,b,a+b);
	printf("\n");
	printf("\nO valor de %d - %d = %d\n",a,b,a-b);
	printf("\nO valor de %d x %d = %d\n",a,b,a*b);
	printf("\nO valor de %d / %d = %d\n",a,b,a/b);
	printf("\nO valor de %d resto da divisao %d = %d\n",a,b,a%b);
	printf("\n");
	
    a = 2;
	b=0;
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("\n");
	while (b<=10){ printf("\n%d x %d = %d\n",a,b,a*b);b++;}
    printf("\n");
	
	
	system ("pause");
		
				
}