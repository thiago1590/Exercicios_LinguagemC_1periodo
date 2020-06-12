#include <stdio.h>
struct ficha
{int peso;
float altura;
}ficha;

int main()
{struct ficha pessoa;
printf("digite seu peso atual: ");
scanf("%d", &pessoa.peso);
printf("digite sua altura: ");
scanf("%f", &pessoa.altura);

printf("\n Suas informacoes sao: \n");
printf("peso: %d Kg\n", pessoa.peso);
printf("altura: %.2f metros", pessoa.altura);

return 0;
}
