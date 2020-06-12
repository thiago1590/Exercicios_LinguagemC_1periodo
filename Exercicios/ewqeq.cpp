#include <stdio.h>
#include <stdlib.h>
void proc(int vetor[])
{int i, menor, pos;
for (i=0;i<20;i++)
{if(i==0)
{menor=vetor[i];}
if(vetor[i]<menor)
{menor=vetor[i];
pos = i+ 1;}}
printf("\nO Menor Valor Encontrado e %d e sua posiçao e %d", menor, pos);
    }

int main(){
    int i, menor=0, vetor[20], pos;
    

    printf("digite 20 numeros");
    printf("\n");
    for (i=0;i<20;i++){
      printf("Numero %d: ", i+1);
      scanf("%i", &vetor[i]);}
      proc(vetor);
      return 0;
  }
