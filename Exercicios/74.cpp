#include <stdio.h>
int main()
{
	int v1[3][3],j,i,v2[3][3];
	for (j=0;j<3;j++)
	{for (i=0;i<3;i++)
	{printf("entre com um elemento: ");
	scanf("%d", &v1[j][i]);
	}
	}
	
	printf("\nSua matriz original eh:  \n\n");
	for (j=0;j<3;j++)
	{
		for (i=0;i<3;i++)
		{printf("%d  ", v1[j][i]);}
		printf("\n");
	}
	
	
	
	for (j=0;j<3;j++)
	{
    v2[j][2] = v1[0][j];
	v2[j][1] = v1[1][j];
	v2[j][0] = v1[2][j];
	}
	
	printf("\nA matriz girada em -90 eh: \n\n");
	for (j=0;j<3;j++)
	{
		for (i=0;i<3;i++)
		{printf("%d  ", v2[j][i]);}
		printf("\n");
	}
		
	return 0;
}
