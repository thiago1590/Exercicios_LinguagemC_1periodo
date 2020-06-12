#include <stdio.h>
int main()
{
	int N, a ,fatorial;
	printf("digite um numero para saber seu fatorial");
	scanf("%d", &N);
	
	
	for (fatorial = 1; N > 1; N = N - 1)
	{
	fatorial = fatorial * N;}

	printf("o fatorial e %d", fatorial);
	
	return 0;
	
	
}
