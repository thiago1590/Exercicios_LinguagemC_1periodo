#include <stdio.h>
#include <string.h>
int main()
{
	char seq[30];
	int i, cont = 0;
	printf("digite uma sequencia de caracter: ");
	gets(seq);
	
	for (i=0;seq[i]!='\0'; i++)
	{
	if (seq[i] == 'a')
	{cont = cont + 1;
	seq[i] = 'b';}
	}
	printf("\nO numero de caracter iguais a 'a' eh:  %d\n", cont );
	printf("\na sequencia modificada eh %s\n", seq);
	return 0;
}
