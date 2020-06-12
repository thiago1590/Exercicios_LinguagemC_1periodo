#include <stdio.h>
int main()
{
	char seq[30];
	int i, cont = 0;
	printf("digite uma sequencia de caracter: ");
	gets(seq);
	
	for (i=0;seq[i]!='\0'; i++)
	{char ch;
	ch = seq[i];
	if (ch == 'a')
	{cont = cont + 1;}
	else if (ch == 'e')
	{cont = cont + 1;}
	else if (ch == 'i')
	{cont = cont + 1;}
	else if (ch == 'o')
	{cont = cont + 1;}
	else if (ch == 'u')
	{cont = cont + 1;}
	
	}
	printf("O numero de vogais eh: %d", cont );
	
	return 0;
}
