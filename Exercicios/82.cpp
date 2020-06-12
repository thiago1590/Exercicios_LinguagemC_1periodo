#include <stdio.h> 
 #define TAM 3  
 typedef struct cad_pessoa 
 {    char nome[100];    
 int idade; } 
 pessoa;  
 int main() 
 {    
 pessoa pessoas[TAM];   
  int i; 
for (i = 0; i < TAM; i++)   
{    printf("Digite o nome: ");     
	 gets(pessoas[i].nome);   
	printf("Digite a idade: ");  
	scanf("%d%*c", &pessoas[i].idade);    }  
	for (i = 0; i < TAM; i++)   
	 {      printf("%s tem %d anos.\n", pessoas[i].nome,pessoas[i].idade);  
	   }   
	     return 0;
	 }
