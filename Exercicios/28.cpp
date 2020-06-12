#include <stdio.h>
int main()
{
	int matric;
	float n1,n2,n3,maior,a, b, media;
	printf("digite sua matricula");
	scanf("%d", &matric);
	printf("\ndigite sua primeira nota");
	scanf("%f", &n1);
	printf("\ndigite sua segunda nota");
	scanf("%f", &n2);
	printf("\ndigite sua terceira nota");
	scanf("%f", &n3);
	
	if ((n1 > n2) && (n1 > n3))
	{maior = n1;
	a = n2;
	b = n3;}
	else if ((n2 > n1) && (n2 > n3))
	{maior = n2;
	a = n1;
	b = n3;}
	else if ((n3 > n1) && (n3 > n2))
	{maior = n3;
	a = n1;
	b =  n2;}
	
	media = (maior * 4 + a * 3 + b * 3)/ 10;
	
	if (media >= 5)
	{printf("\nParabens, vc foi aprovado!");}
	else 
	{printf("\nREPROVADO!");}
	 
	 return 0;
	
	
}
