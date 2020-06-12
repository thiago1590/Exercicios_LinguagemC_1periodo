#include <stdio.h>

void cadastro(char v[9][3])
{
	
int j,i;
	for (j = 0; j < 9; j++)
{printf("Vamos cadastrar o %d produto, digite o nome: ", j+1);
scanf("&s", v[j][0]);
 for(i = 0; i < 3; i++)
 {printf("Digite o fornecedor: ");
scanf("%s", &v[j][i]);
printf("Digite o preço de custo: ");
scanf("%s", &v[j][i]);
printf("Digite o preço de venda: ");
scanf("%s", &v[j][i]);
}
}
}


void consulta(char v[9][3])
{
int i,y,x;
{printf("Consulta dos dados por produto");
printf("Produtos:");
for (i=0; i<=9; i++)
{printf("(%d) %d", i+1, v[i][0]);}
printf("Qual produto voce quer consultar?");
scanf("%d", x);
y = x - 1;


	printf("Ok, vc quer consultar os dados de %d", v[y][0]);
	printf("Seu fornecedor é: %", v[y][1]);
	printf("Seu preço de custo é: ", v[y][2]);
	printf("Seu preço de venda é: ", v[y][3]);
}
}


void alteracao(char v[9][3])
{
int i,x,y,novo;
printf("Alteraçao de dados");
printf("Produtos:");
for (i=0; i<=9; i++)
{printf("(%d) %d", i+1, v[i][0]);}
printf("Qual produto voce quer alterar?");
scanf("%d", x);
x = x - 1;

printf("Dados: \n");
printf("(1) fornecedor\n");
printf("(2) preço de custo\n");
printf("(3) preço de venda\n");
printf("Qual dado vc quer alterar?");
scanf("%d", &y);

printf("Ok, digite o novo dado");
scanf("%s", &novo);
v[x][y] = novo;

}


void remocao(char v[9][3])
{int i,x;
printf("Remocao de dados");
printf("Produtos:");
for (i=0; i<=9; i++)
{printf("(%d) %d", i+1, v[i][0]);}
printf("Qual produto voce quer remover os dados?");
scanf("%d", x);
x = x - 1;
printf("Dados atuais: \n");
printf("fornecedor: %s", v[x][1]);
printf("preco de custo: %s\n", v[x][2]);
printf("preco de venda: %s\n", v[x][1]);

v[x][1] = ' ';
v[x][2] = ' ';
v[x][3] = ' ';

}
void apresentacao(char v[9][3])
{

printf("PRODUTO     FORNECEDOR     CUSTO     VENDA");
{int i;
for (i=0;i<9;i++)
{printf("%s    %s     %s     %s ", v[i][0],v[i][1],v[i][2],v[i][3]);}
}
}

int main()
{

char v[9][3], opc,resp;

printf("Vamos iniciar o cadastro");
v[9][3] = cadastro(v[9][3]);

do
{
printf("digite 0 caso queira encerrar (exceto primeira vez)");
scanf("%d", resp);

printf("       MENU      \n");
printf("(1) consulta dos dados por produto\n");
printf("(2) alteracao dos dados\n");
printf("(3) remoção dos dados cadastrados\n");
printf("(4) listagem geral dos produtos cadastrados\n");
printf("\nEscolha sua opçao: ");
scanf("%d", &opc);


	if (opc == 1)
	{consulta(v[9][3]);}
	
	else if (opc == 2)
	{v[9][3] = alteracao(v[9][3]);}
	
	else if (opc == 3)
	{v[9][3] = remocao(v[9][3]);}
	
	else if (opc == 4)
	{apresentacao(v[9][3]);}
}while (resp !=0);

return 0;
}



