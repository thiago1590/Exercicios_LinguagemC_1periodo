#include <stdio.h>
int main()
{
	int n,num,pos,maior, v[19],y,x;
	for (n=0;n <=19; n++)
	{printf("digite o %d numero", n+1);
	scanf("%d", &num);
	v[n]= num;}
	
	y = v[0];
	
	for (n = 1 ;n<=19; n++)
	{
		x = v[n];
	if (x > y)
	{maior = x;
	pos = n+1;}
	}
	printf("o maior valor e %d e sua posiçao e %d", maior, pos);
	
	return 0;
	
}
