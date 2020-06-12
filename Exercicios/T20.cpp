#include <stdio.h>
int main()
{
	char nome[10];
	int b;
	printf("digite seu nome");
	scanf("%s", nome);
	
	printf("digite seu codigo eleitoral");
	scanf("%d", b);
	
	switch (b)
	{case 1:
		printf("seu nome é %s e sua regiao é Sudeste", nome);
		break;
	}
	
 

return (0);
}
