#include <stdio.h>
#include <locale.h>
float soma (float x, float y)
{
	float resultado;
	resultado = x + y;
	return(resultado);
}
float multi (float x, float y)
{
	float resultado;
	resultado = x * y;
	return(resultado);
}
float divisao (float x, float y)
{
	float resultado;
	resultado = x / y;
	return(resultado);
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int a;
	float b,c,resultado;
	printf("Escolha uma op��o de c�lculo para dois n�meros:");
	printf("\n  1)Soma");
	printf("\n  2)Produto");
	printf("\n  3)Quociente");
	printf("\n  4)Sair");
	printf("\n  Op��o: ");
	scanf("%d", &a);

while (a !=4)
{

{
    printf("\nDigite o primeiro n�mero: ");
    scanf("%f", &b);
    printf("\nDigite o segundo n�mero: ");
    scanf("%f", &c);}
	
	if (a == 1)
	{
		resultado = soma(b,c);
		
		printf("\nSeu resultado �: %.2f", resultado);
	}
	else if (a == 2)
	{
		resultado = multi(b,c);
		printf("\nSeu resultado �: %.2f", resultado);
	}
	else if (a == 3)
	{
		resultado = divisao(b,c);
		
		printf("\nSeu resultado �: %.2f", resultado);
	}
	printf("\nNova Op��o: ");
	scanf("%d", &a);
}

	if (a == 4)
	{
		printf("Fim de Programa");
		
	}
	return 0;
}
