#include <stdio.h>
int main()
{
	int a,b,c;
	char caracter[10];
	
	printf("digite dois numeros: ");
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("digite um caracter ");
	scanf("%s", caracter);
	
	if (caracter == "+")	
	{c = a + b;
	printf("o resultado eh %d", c);}
	
 

return (0);
}
