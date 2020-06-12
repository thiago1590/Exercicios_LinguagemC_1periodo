#include <stdio.h>
void conjunto(int a, int n1, int n2)
{
	for (a = n1; a <= n2; a ++)
	{printf("\n%d", a);}
}

int main()
{
	int a,n1,n2;
	printf("digite 2 numeros: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	conjunto(a, n1, n2);
	
	return 0;
}
