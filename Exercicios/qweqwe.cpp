#include <stdio.h>
#include <string.h>
int main()
{
	char seq[30];
	int i, cont = 0;
	printf("digite uma sequencia de caracter: ");
	gets(seq);
	
	for (i=0;seq[i]!='\0'; i++)
	{char ch;
	ch = seq[i];
	if (strcmp("a",ch) == 0))
	{cont = cont + 1;}
	else if (strcmp("e",ch) == 0))
	{cont = cont + 1;}
	else if (strcmp("i",ch) == 0))
	{cont = cont + 1;}
	else if (strcmp("o",ch) == 0))
	{cont = cont + 1;}
	else if (strcmp("u",ch) == 0))
	{cont = cont + 1;}
	}
	printf("O numero de vogais eh : %d", cont );
	
	return 0;
}
