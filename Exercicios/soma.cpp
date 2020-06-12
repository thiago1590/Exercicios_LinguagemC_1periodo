#include <stdio.h>
int main()
{
	int n, soma, i;
	printf("digite um numero");
	scanf("%d", &n);
	soma = 0;
	
	
	for(i = 1; i <= n ; i++)
	{
	soma = soma + i;}
	
	printf("%d", soma);
	
	return 0;
	
	
}
