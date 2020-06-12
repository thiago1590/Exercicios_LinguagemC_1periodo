#include <stdio.h>

void somatoria(*int soma, int N)
{
	int x;
	for (x=1,*soma=0;x<=N;x++)
	{
		*soma=*soma+x;
	}
	return 0;}
	
int main()
{
	somatoria(&soma, 4);
	printf("%d", soma);
	
	return 0;
}
