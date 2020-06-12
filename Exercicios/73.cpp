#include <stdio.h>
void tabu (int a)
{int i,x, res,b,l,mat[10][3];
for (i=1;i<=10;i=i+1)
{for(x=0;x<3;x++)
{b=a+x;
res=b*i;
l=i-1;
mat[l][x]=res;
printf("%i X %i = %i \t",b,i,res);}
printf("\n");}
printf("\n\n");
for (i=0;i<10;i++)
{for(x=0;x<3;x++)
{printf("%i\t",mat[i][x]);}
printf("\n");
}
}

int main()
{int n,a,x,y,mat[10][3];
printf("Insira um numero onde será calculado a tabuada desse numero, do numero anterior e posterior: ");
scanf ("%i",&n);
a=n-1;
tabu (a);

return 0;}
