#include <stdio.h>
int main()
{
	int i,n,v[9],s[9],soma;
	soma = 0;
	for (i = 0; i<=9; i++)
	{printf("Digite o %d numero", i+1);
	scanf("%d", &v[i]);
	}
  
  
  
  for (i = 0; i<=9; i++)
  {
  for (i = 0; i<=v[i]; i++)
  {
soma = soma + i;
s[i] = soma;}
}

printf("\nORDEM  DIGITADO          CALCULADO");
for (i = 0; i<=9; i++)
{printf("%d  %d          %d", i+1, v[i], s[i] );}
  	
  
  return 0;
}
