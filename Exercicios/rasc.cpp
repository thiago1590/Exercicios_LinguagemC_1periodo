#include <stdio.h>
int main()
{
	int n, s[10], media, idade,  soma = 0, cont = 0,z;
 for (n=0;n<=9;n++)
 {
	 printf("digite a idade do %d aluno", n+1);
	scanf("%d",&idade);
	s[n]= idade;}
	s[10] = 0;

printf("\n         TABELA\n");
printf("    Aluno       Idade\n");


for (n = 0; n <= 9; n ++)
{z = n + 1;
printf("%8d%13d\n", z, s[n]);
}

for (n = 0; n <= 9; n ++)
{ soma = soma + s[n];}

media = soma / 10;

printf("\n A media e: %d", media);

for (n = 0; n <= 9; n++)
{ 
if (s[n] > media)
{cont = (cont + 1);}
}
printf("\n\nO numero de alunos com idade maior que a media e: %d", cont);
 
 
 return 0;
} 
