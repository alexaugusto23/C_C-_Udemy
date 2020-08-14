#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int a = 1,b;
/*char c = 'j';
void opcao ();
void opcao2 ();

void main()
{
	
setlocale(LC_ALL,"portuguese");

printf("\nEscolha uma opção:");
scanf("%d", &a);

int i =1;

while (i == i){opcao();}


//system("\ncls\n");
system ("pause");	
}

void opcao ()
{
printf("\nEscolha uma opção:");
scanf("%d", &a);

if (a==1){printf("\nA opção escolhida é 1\n",a);
if (a==1){printf("\nDigite um novo valor:");
scanf("%d", &c);}
c= (c +10);
printf("\nValor atualizado é: %d\n",c);
}


else if (a==2) {printf("\nA opção escolhida é 2\n",a);
opcao2();}

else if (a==3){printf("\nA opção escolhida é3\n",a);}

else {printf("\nOpção é Invalida\n");}

}

void opcao2 ()
 {
	
//	char 'x';
	printf ("Escolha uma opção |   |  ou |  |");
	
}
*/

void main()
{
	
setlocale(LC_ALL,"portuguese");

int i =1;

while (i == i){
	printf("\nEscolha uma opção:");
    scanf("%d", &a);
    
    switch (a){
	
	case 1:
    printf("\nA opção escolhida é 1\n");
	break;
	
	case 2:
    printf("\nA opção escolhida é 2\n");
	break;
	
	case 3:
    printf("\nA opção escolhida é 3\n");
	break;

	default:
	printf("\nA opção escolhida é invalida\n");
	break;
	
	
}
    
    }



system ("pause");	
}





