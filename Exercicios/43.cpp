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
	printf("Escolha uma opção de cálculo para dois números:");
	printf("\n  1)Soma");
	printf("\n  2)Produto");
	printf("\n  3)Quociente");
	printf("\n  4)Sair");
	printf("\n  Opção: ");
	scanf("%d", &a);

while (a !=4)
{

{
    printf("\nDigite o primeiro número: ");
    scanf("%f", &b);
    printf("\nDigite o segundo número: ");
    scanf("%f", &c);}
	
	if (a == 1)
	{
		resultado = soma(b,c);
		
		printf("\nSeu resultado é: %.2f", resultado);
	}
	else if (a == 2)
	{
		resultado = multi(b,c);
		printf("\nSeu resultado é: %.2f", resultado);
	}
	else if (a == 3)
	{
		resultado = divisao(b,c);
		
		printf("\nSeu resultado é: %.2f", resultado);
	}
	printf("\nNova Opção: ");
	scanf("%d", &a);
}

	if (a == 4)
	{
		printf("Fim de Programa");
		
	}
	return 0;
}
