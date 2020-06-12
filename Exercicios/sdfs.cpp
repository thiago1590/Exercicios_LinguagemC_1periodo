#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, menor=0, vetor[20], pos;
    

    printf("digite 20 numeros");
    printf("\n");
    for (i=0;i<20;i++){
      printf("Numero %d: ", i+1);
      scanf("%i", &vetor[i]);
      if(i==0){menor=vetor[i];}
      {
	  
        if(vetor[i]<menor){
            menor=vetor[i];
			pos = i+ 1;
        }
      }
    }
    printf("\nO Menor Valor Encontrado e %d e sua posiçao e %d", menor, pos);
    return 0;
}
