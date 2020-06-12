#include <stdio.h>
int func(char seq[])
{
int i, cont = 0;
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
return (cont);
}
int main()
{
	char seq[30];
	int num;
	printf("digite uma sequencia de caracter: ");
	gets(seq);
	num = func(seq);
	printf("o numero de vogais eh : %d", num);
	
	return 0;
}
