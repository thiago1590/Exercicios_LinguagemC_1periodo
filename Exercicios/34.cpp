#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,contador,resposta;


do
{
	printf("\ndigite o numero que quer saber a tabuada ou 0 para encerrar");
scanf("%d",&a);

for (contador = 1; contador <= 10; contador = contador + 1)
{
	b = a * contador;
	printf("\n%d * %d = %d", contador, a, b);}
	
printf("\n===========================");

for (contador = 1; contador <= 10; contador = contador + 1)

{
d = a+1;
c = d * contador;
printf("\n%d * %d = %d", contador, d, c);}

printf("\n=====================");
}

while (a != 0);

return 0;
}
