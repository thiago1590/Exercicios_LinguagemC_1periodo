#include <stdio.h>
#include <string.h>
int main()
{
	float num;
	char resp;
	FILE *file;
	file = fopen("result.txt", "r");
	if(file==NULL)
{
 printf("Arquivo nao pode ser aberto\n");
 return 0;
}
do
{
	printf("digite S para continuar ou N para encerrar");
	printf("Digite um numero de telefone para para ser armazenado");
	scanf("%2.f", num);

}while (strcmp(resp,"S") ==0)
}
