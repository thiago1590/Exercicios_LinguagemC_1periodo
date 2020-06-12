#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,contador,resposta;
printf("voce quer saber a tabuada de qual numero");
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

printf("\ndigite 0 para encerrar ou um novo numero para saber sua tabuada");
scanf ("%d",&resposta);

while (resposta != 0)

{

for (contador = 1; contador <= 10; contador = contador + 1)

	{
	e = resposta * contador;
	printf("\n%d * %d = %d", contador, resposta, e);}
	
printf("\n===========================");

for (contador = 1; contador <= 10; contador = contador + 1)

{
f = resposta+1;
g = f * contador;
printf("\n%d * %d = %d", contador, f, g);}


printf("\n=====================");

printf("\ndigite 0 para encerrar ou um novo numero para saber sua tabuada");
scanf ("%d",&resposta);}

return 0;
}
