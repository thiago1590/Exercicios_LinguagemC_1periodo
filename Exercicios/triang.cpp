#include <stdio.h>
int main()
{
	int a, b, c;
	printf("digite o valor dos 3 lados");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d",&c);
	
	if ((a-c)<b<(a+c))
	{if (a = b) 
	{printf("o triang � isoceles");}
	if  (a = c) 
	{printf("o triang � isoceles");}
	if (c = b)
	{printf("o triang � isoceles");}
	if (a = b = c)
	{ printf(" o triang � equilatero");}
	if (a!= b != c)
	{printf("o triang � escaleno");	}
		}
	if ((a-c)>b<(a+c) || (a-c)<b>(a+c))
	{printf("nao � possivel formar um triang");
	}
	return 0;
	


}
