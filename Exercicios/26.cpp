#include <stdio.h>
int main()
{ 
int cont,num,menor, maior;

for (cont = 1; cont <=10; cont++)
{
printf("digite um numero");
scanf("%d", &num);
if (cont == 1)
{maior = num;
menor = num;}
else
{if (num > maior)
 {maior = num;}
 if (num < menor)
 {menor = num;}
}

}

printf("O menor valor e %d e o maior eh %d", menor, maior );
return 0;
}
