 #include <stdio.h>
 typedef struct cad_pessoa 
 {    char inicial;    int numero; 
    float peso;   
	 float altura; }
	  pessoa;  
	  int main() 
	  {   pessoa pessoas[TAM]; 
	    int i;
	int indice_mais_baixo, indice_maior_peso;   
	float mais_baixo, maior_peso; 
   for (i = 0; i < TAM; i++)
      {     printf("Digite a inicial do nome: ");    
	   scanf("%c", &pessoas[i].inicial);   
	   printf("Digite o numero da camisa: ");  
	    scanf("%d", &pessoas[i].numero);
     printf("Digite o peso: ");    
	  scanf("%f", &pessoas[i].peso);    
	  printf("Digite a altura: ");   
	   scanf("%f%*c", &pessoas[i].altura);   } 
   indice_mais_baixo = 0; 
     indice_maior_peso = 0; 
	  mais_baixo = pessoas[0].altura;  
	  maior_peso = pessoas[0].peso; 
	    for (i = 0; i < TAM; i++)  
		 {     printf("Numero %d tem inicial %c, peso %f e altura %f.\n", pessoas[i].numero, pessoas[i].inicial, pessoas[i].peso, pessoas[i].altura);  
		    if (pessoas[i].altura < mais_baixo) 
			    {       indice_mais_baixo = i;  
			     mais_baixo = pessoas[i].altura;     } 
				      if (pessoas[i].peso > maior_peso)    
					   {       indice_maior_peso = i;   
					       maior_peso = pessoas[i].peso;     }  
						    }  
  printf("A inicial do mais baixo e' %c e o numero do mais pesado 'e %d.\n", pessoas[indice_mais_baixo].inicial, pessoas[indice_maior_peso].numero);
      return 0; }   
