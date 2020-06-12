#include <stdio.h>
int main()
{
	int i,n,v[9],s[9],soma;
	soma = 0;
	for (i = 0; i<=9; i++)
	{printf("Digite o %d numero", i+1);
	scanf("%d", &v[i]);
	}
  
  for (i = 0; i<=v[0]; i++)
  {
soma = soma + i;
s[0] = soma;}
for (i = 0; i<=v[1]; i++)
  {soma + i;
s[1] = soma;}
for (i = 0; i<=v[2]; i++)
  {
soma = soma + i;
s[2] = soma;}
for (i = 0; i<=v[3]; i++)
  {
soma = soma + i;
s[3] = soma;}
for (i = 0; i<=v[4]; i++)
  {
soma = soma + i;
s[4] = soma;}
for (i = 0; i<=v[5]; i++)
  {
soma = soma + i;
s[5] = soma;}
for (i = 0; i<=v[6]; i++)
  {
soma = soma + i;
s[6] = soma;}
for (i = 0; i<=v[7]; i++)
  {
soma = soma + i;
s[7] = soma;}
for (i = 0; i<=v[8]; i++)
  {
soma = soma + i;
s[8] = soma;}
for (i = 0; i<=v[9]; i++)
  {
soma = soma + i;
s[9] = soma;}
for (i = 0; i<=v[10]; i++)
  {
soma = soma + i;
s[10] = soma;}

printf("\nORDEM  DIGITADO          CALCULADO");
for (i = 0; i<=9; i++)
{printf("%d  %d          %d\n", i+1, v[i], s[i] );}
  	
  
  return 0;
} 
