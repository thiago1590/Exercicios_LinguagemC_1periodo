#include <stdio.h>
int main()
{
	FILE *num;
	int v[5], i;
	for (i=0;i<5;i++)
	{
		printf("digite o %d numero", i+1);
		scanf("%d", &v[i]);
	}
	
	num = fopen("numeros.txt","w");
	if(num==NULL)
{
 printf("Arquivo nao pode ser aberto\n");
 return 0;
}
	for (i=0;i<5;i++)
	{
		fprintf("o %d numero é %d", i+1, v[i]);
	}
return 0;
}
