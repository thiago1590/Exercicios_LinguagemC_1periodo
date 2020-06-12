#include <stdio.h>
int main()
{
	int m[9][4],somaj,somaf,somam,media;
	char v1[9],i,l,c;
	
	for (i=0;i<10;i++)
	{printf("digite o nome do %d produto: ", i+1);
	scanf("%s", &v1[i]);

}
for (l=0;l<=10;l++)
{printf("\n\nInforme os dados do %d produto: \n\n", l+1);
for (c=0;c<5;c++)
{if (c == 0)
{printf("digite o estoque no mes de Janeiro");
scanf("%d", &m[l][0]);}
if (c == 1)
{printf("digite o estoque no mes de Fevereiro");
scanf("%d", &m[l][1]);}
if (c == 2)
{printf("digite o estoque no mes de marco");
scanf("%d", &m[l][2]);}
if (c == 3)
{printf("digite o estoque no mes de abril");
scanf("%d", &m[l][3]);}
if (c == 4)
{m[l][4] = ((m[l][0] + m[l][1]) + m[l][2])/3;}



}
}


printf("\n\nPRODUTO     MEDIA     ABRIL\n\n");
for (i=0;i<=10;i++)
{printf("%s     %d     %d\n", v1[i], m[i][4], m[i][3]);

printf("\n\nClassificacao\n\n");

for (i=0;i<10;i++)
{if (m[l][3] > m[l][4])
{printf( "VENDA BAIXA de %s\n", v1[i]);}
else if ((m[l][3] < m[l][4]) && (m[1][3]>0))
{printf("VENDA BOA de %s\n", v1[i]);}
else if (m[l][3] = m[l][4])
{printf("VENDA NORMAL de %s\n", v1[i]);}
else if (m[l][3] = 0)
{printf("FALTA de %s\n", v1[i]);}
}
}



return 0;
}
