#include <stdio.h>
float porcent(float salario)
{
float porc, deducao;
if (salario <= 1499.15)
	{porc = 0;}
if ((salario >= 1499.16) && (salario <=2246.75))
{porc = 0.075;}
if ((salario >=2246.76) && (salario <=2995.70))
{porc = 0.15;}
if ((salario >=2995.71) && (salario <=3743.19))
{porc = 0.225;}
if (salario >= 3743.19)
{porc = 0.275;}

return (porc);
}
int main()
{
float salario, porc, aliquota,desconto, deducao;


do
{
printf("digite o valor do seu salario ou 0 para encerrar");
scanf("%f", &salario);
porc = porcent(salario);
desconto = (porc*salario);
aliquota = porc * 100;


printf("\nvalor do salario: %.2f\n\n", salario);

if (salario <= 1499.15)
{printf("Valor isento de IR");}
else 
{printf("Valor com desconto de IR");}

printf("\n\nAliquota de IR: %.2f%", aliquota);

if (salario <= 1499.15)
	{deducao = 0;}
if ((salario >= 1499.16) && (salario <=2246.75))
{deducao = 112.43;}
if ((salario >=2246.76) && (salario <=2995.70))
{deducao = 280.94;}
if ((salario >=2995.71) && (salario <=3743.19))
{deducao = 505.62;}
if (salario >= 3743.19)
{deducao = 692.78;}

printf("\n Deducao para IR: %.2f", deducao);

printf("\n desconto de IR: %.2f\n\n", desconto);
}
while (salario != 0);
}


 





