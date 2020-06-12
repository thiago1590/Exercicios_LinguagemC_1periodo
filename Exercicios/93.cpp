#include <stdio.h>
int main()
{
	
	int v[9], u[9], s[9], n;
	
	for (n = 0; n <= 9; n++)
	{v[n] = n + 2;}
	
	printf("valores do vetor v: \n");
	for (n = 0; n <= 9; n++)
	{printf("  %d  ", v[n]);}
	
	for (n = 0; n <= 9; n++)
	{u[n] = n + 5;}
	
	printf("\n\nvalores do vetor u: \n");
	for (n = 0; n <= 9; n++)
	{printf("  %d  ", u[n]);}
	
	
	for (n = 0; n <= 9; n++)
	{s[n] = (v[n] + u[n]);}
	
	printf("\n\nvalores do vetor da soma de u e v\n");
	for (n = 0; n <= 9; n++)
	{printf("  %d  ", s[n]);}
	
	
	return 0;
}
	
	
	
