#include <stdio.h>
void calculo (int tempo)
{
int horas, minutos, segundos;
horas = tempo / 3600;
minutos = ((tempo % 3600) / 60);
segundos = tempo - (horas * 3600)- (minutos * 60);
printf(" o tempo do experimento foi %d horas, %d minutos e %d segundos", horas, minutos, segundos);}

int main()
{
	int T;
	printf(" digite o tempo do experimento em segundos");
	scanf("%d", &T);
	calculo (T);
	return 0;
	
}


 
