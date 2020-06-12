#include <stdio.h>

int calculo(int anos, int meses, int dias, int result) 
{
result = (365 * anos) + (30 * meses) + dias;}

int main()

{

  int anos, meses, dias, result,a;
  printf("digite sua idade em anos meses e dias");
  scanf("%d %d %d", &anos, &meses, &dias);
  a = calculo(anos, meses, dias, result);
  printf(" sua idade em dias eh %d", a);
  return 0;

}
