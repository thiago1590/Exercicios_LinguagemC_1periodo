#include <stdio.h>

int som(int i, int n, int soma )
{
for(i = 1; i <= n ; i++)
	{
	soma = soma + i;}
	return soma;}
	
int main()
{
	int n, soma, i;
	printf("digite um numero");
	scanf("%d", &n);
	soma = 0;
	
som(i, n, soma);

printf("%d", som);

return 0;
}

