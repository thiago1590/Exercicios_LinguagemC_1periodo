#include <stdio.h>
int main()
{
	char nome[20];
	int i;
	printf("digite seu nome completo: ");
	gets(nome);
	printf("seu nome e:");

	for (i=0; nome[i]!='\0'; i++)
{
		printf("%c", nome[i]);
}
	return 0;
	
	
}

