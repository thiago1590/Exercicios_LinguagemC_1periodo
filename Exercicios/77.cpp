#include <stdio.h>
struct cartao
{int numero;
char titular[];
int validade;
int agencia;
int conta;
int codigo;
}cartao;

int main()
{struct cartao credito;
printf("Digite o numero do cartao: ");
scanf("%d", &credito.numero);
printf("Digite o nome do titular: ");
scanf("%s", &credito.titular);
printf("Digite a validade: ");
scanf("%d", &credito.validade);
printf("Digite a agencia: ");
scanf("%d", &credito.agencia);
printf("Digite a conta: ");
scanf("%d", &credito.conta);
printf("Digite o codigo de segurança: ");
scanf("%d", &credito.codigo);

printf("\n\nInformaçoes do seu cartao:\n \n");
printf("numero : %d\n", credito.numero);
printf("titular: %s\n", credito.titular);
printf("validade : %d\n", credito.validade);
printf("agencia: %d\n", credito.agencia);
printf("conta: %d\n", credito.conta);
printf("codigo: %d \n", credito.codigo);

return 0;
}
