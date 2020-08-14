#include <stdio.h> // entrada e saida de dados
#include<stdlib.h> // simula prompt dos
#include<stdbool.h>

int main()
{

	int a;
	float b;
	char c;
	bool d;
	a = 10;
	b = 2.33;
	c = 'a';
	d = true;
	
	printf("O valor de a eh:%d", a);
	printf("\n");
	printf("O valor de a eh:%.2f", b);
	printf("\n");
	printf("O valor de a eh:%c\n", c);
	printf("O valor de a eh:%d\n", d);
	
	printf("\nDigite novo valor A:");
	scanf("%d", &a);
	
    printf("\nDigite novo valor B:");
	scanf("%f", &b);
	
    printf("\nDigite novo valor C:");
	scanf(" %c", &c);
	
	printf("\nDigite novo valor D:");
	scanf("%d", &d);

	printf("\nO valor de A eh:%d", a);
	printf("\nO valor de B eh:%.2f", b);
	printf("\nO valor de C eh: %c", c);
	if (d == 1){printf("\nO valor de D eh: Verdadeiro\n");}
	else {printf("O valor de C eh: Falso\n");}
	
	system ("pause");
		
				
}