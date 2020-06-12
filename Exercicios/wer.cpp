#include <stdio.h>
int somatoria (int *soma, int x)
{int i;
	for (*soma=0,i=1; i<=x; i++)
	{*soma = *soma+i;}
	}
	
int main()
{
	int soma;
	somatoria(&soma, 5);
	printf("%d", soma );
	
	return 0;
}
