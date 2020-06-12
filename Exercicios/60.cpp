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
	if (ch == ' ')
	{cont = cont + 1;}
	}
	printf("A quantidade de espaços eh : %d", cont );
	
	return 0;
}
