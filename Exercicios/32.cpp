#include <stdio.h>
int main()
{

  int a, b, c, i, n;
 
  a = 0;
  b = 1;
 
  printf("Digite um n�mero: ");
  scanf("%d", &n);
  printf("S�rie de Fibonacci:\n");
  printf("%d\n", b);
 
  for(i = 0; i < n; i++)
  {
    c = a + b;
    a = b;
    b = c;
 
    printf("%d\n", c);
  }
  return 0;
}
