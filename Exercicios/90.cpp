#include <stdio.h>
void proc(int *v1[], int *v2[])
{
int n;
for (n = 0; n <= 9; n++)
	{*v1[n] = n + 2;}

for (n = 0; n <= 9; n++)
	{*v2[n] = n + 5;}
}

void soma(int *v3[])
{
int n,v1[9],v2[9];
for (n = 0; n <= 9; n++)
	{*v3[n] = (*v1[n] + *v2[n]);}
printf("\n\nvalores do vetor da soma de v1 e v2\n");
	for (n = 0; n <= 9; n++)
	{printf("  %d  ", v3[n]);}
}

int main()
{int v1[9],v2[9],v3[9];
proc(&v1,&v2);
soma(&v3);
return 0;
}


