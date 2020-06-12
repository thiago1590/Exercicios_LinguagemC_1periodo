#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()

{
	setlocale(LC_ALL, "Portuguese");
	system("color 70");
	char a[10], a1[10], a11[10], a2[10], a22 [10], a3[10], a4[10], b[10], b1[10], b11[10], b2[10], b3[10], c1[10], c2[10], c3 [10];
	
	printf(" Eu vou acertar o animal que pensar entre estes:\n Homem, Macaco, Leao, Cavalo, Avestruz, Pinguim, Pato, Aguia, Crocodilo, Cobra e Tartaruga.", 1);
	printf("\n ");
	printf("\n Por favor responda corretamente 'sim', caso a resposta for positiva.", 2);
	printf("\n ");
	printf("\nEle é Mamífero? ", 5);
	scanf("%s", &a);
	
	if (strcmp(a,"sim")==0)
	 {printf("Ele é Quadrupede? ");
	 scanf("%s", &a1);
	 
	 if (strcmp(a1,"sim")==0)
	  {printf("Ele é Carnívoro? ");
	  scanf("%s", &a11);
	  
	  if (strcmp(a11,"sim")==0)
	  {printf("Seu animal é um Leao");}
	  else 
	  { printf("Seu animal é um Cavalo");}
	  }
	else
	{ printf("Ele é Bipede? ");
	scanf("%s", &a2);
	 if (strcmp(a2,"sim")==0)
	 {printf ("Ele é Onívoro? ");
	  scanf("%s", &a22);
	  if (strcmp(a22,"sim")==0)
	  {printf ("Seu animal é um Homem");}
	  else 
	  {printf("Seu animal é um Macaco");}
	 }
	else 
	{printf("Ele é Voador? ");
	scanf("%s", &a3);
	 if (strcmp(a3,"sim")==0)
	 {printf("Seu animal é um Morcego");}
	 else 
	 {printf ("Seu animal é uma Baleia");}
	}
	}  
	 }
	else
	{printf("Seu animal é uma Ave? ");
	 scanf("%s", &b);
	 if (strcmp(b,"sim")==0)
	 {printf("Ela Voa? ");
	  scanf("%s", &b1);
	  if (strcmp(b1,"sim")==0)
	  {printf("A Ave nada? ");
	  scanf("%s", &b2);
	  if (strcmp(b2,"sim")==0)
	  {printf("A Ave é um Pato");}
	  else 
	  {printf("A Ave é uma Águia");}
	  }
	  else
	  {printf("É uma Ave Polar? ");
	   scanf("%s", &b11);
	   if (strcmp(b11,"sim")==0)
	   {printf("Seu animal é um Pinguim");}
	   else
	   {printf("Seu animal é um Avestruz");}
	  }
	 }
	 else
	 {printf("Este réptil tem um casco?: ");
	  scanf("%s", &c1);
	  if (strcmp(c1,"sim")==0)
	  {printf("Seu animal é uma Tartaruga");}
	  else
	  {printf("Este reptil é carnivoro? ");
	   scanf("%s", &c2);
	   if (strcmp(c2,"sim")==0)
	   {printf("Seu animal é um crocodilo");}
	   else 
	   {printf("Seu animal é uma Cobra");}
	  }
	 }
	 }
	

	
	return 0;
	
}
