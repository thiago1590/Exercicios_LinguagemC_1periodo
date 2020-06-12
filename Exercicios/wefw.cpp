#include <stdio.h>

void vetor1(int *v[9])
{
	int n;
	for (n = 0; n<= 9; n++)
	{*v[n] = n + 2;}
}
	
void vetor2(int u[9])
{
int n;
for (n = 0; n<= 9; n++)
{u[n] = n + 5;}
}

int main()
{
	int v[9];
	vetor1(v[9]);
	printf("%d", v[3]);
	
	return 0;
}

