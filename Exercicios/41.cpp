#include <stdio.h>

float calculoVolume(float X)
{
     float volume;
     float pi;
     pi= 3.141592;
     volume= ((4*pi)*(X*X*X)/3);
      return volume;
}

int main( )
{ 
   float X,a;
   printf("digite o raio da esfera");
   scanf("%.2f", &X);
   
   a = calculoVolume(X);
   printf("volume da sua esfera e: %.2f", a);

    return 0;
}
