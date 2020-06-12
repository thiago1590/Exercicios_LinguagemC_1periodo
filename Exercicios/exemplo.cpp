#include <stdio.h>
int media(int soma)
{int media;
media = soma / 6;
return media;
}


int main()
{ int m[2][3], soma=0, j, i,medi;
  for (j = 0; j<2; j++)
  {for (i = 0; i<3; i++)
  {printf("digite um valor para posicao");
  scanf("%d", &m[j][i]);
  soma = soma + m[j][i];
  }
  }
  medi = media(soma);
  
  printf("a media eh %d", medi);
  return 0;

}
