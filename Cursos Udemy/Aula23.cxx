#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>



void main()
{
setlocale(LC_ALL,"portuguese");

srand ((unsigned)time(NULL));

int aleatorio = rand ()%11;
//int aleatorio2 = (rand ()%5) + 1;


printf("%d", aleatorio);

int i = 0;
system ("clear");
for (i;i>=10;i++){}
while (i) {printf("%d", aleatorio);}



//aleatorio2 = (rand ()%5) + 1 ;

//printf("%d", aleatorio2);



system ("pause");	
}





