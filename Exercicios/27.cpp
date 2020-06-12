#include <stdio.h>
int main()
{ 
int x, y;
printf("Chico tem 1,50 metro e cresce 2 centimetros por ano, enquanto Ze tem 1,40 metro e cresce 3 centimetros por ano.");
//funçao de Chico == 2X + 150
//funçao de Zé == 3x + 140

2 * x + 150 == 3 * x + 140;
x = 150 - 140;
// As idades igualam após 10 anos, logo:
y = x + 1;
printf("\n Ze sera mais alto apos %d anos", y);

return 0;
}
