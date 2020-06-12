#include <stdio.h>
int main()
{
	int contador, 	N	,a,b,auxiliar;
	printf("digite o numero de termos");
	scanf("%d",&N);
	a = 0;
	b = 1;
	
	printf(" A sequencia eh");
	
	
	 printf("%d\n", b);
	for (contador = 0; contador < N; contador++)
	{
    auxiliar = a + b;
    a = b;
    b = auxiliar;
	printf("%d\n", auxiliar);
	}
	
	return 0;
}
