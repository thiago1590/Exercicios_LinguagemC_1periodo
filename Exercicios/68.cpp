#include <stdio.h>
int LeMatriz(int m[3][3])
{int j,i;
for (j=0;j<3;j++)
{for (i=0;i<3;i++)
{printf("digite um valor para a posiçao");
scanf("%d", &m[j][i]);}
}
return m[3][3];
}

int soma(int m1[3][3], int m2[3][3])
{int m3[3][3];
int j,i;
for (j=0;j<3;j++)
{for (i=0;i<3;i++)
{m3[j][i] = (m1[j][i] + m2[j][i]);
printf("%d", m3[j][i]);

}
}
	return m3[3][3];
}
int main()
{
	int m1[3][3], m2[3][3],soma;
	printf("Leitura da primeira matriz\n");
	m1[3][3] = LeMatriz(m1[3][3]);
	printf("\nLeitura da segunda matriz\n");
	m2[3][3] = LeMatriz(m2[3][3]);
	
	printf("A matriz resultante da soma das anteriores é: ");
	soma(m1[3][3], m2[3][3]);
	
return 0;
	}
