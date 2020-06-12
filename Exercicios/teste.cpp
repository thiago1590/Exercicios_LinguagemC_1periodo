#include <stdio.h>

int main()
{
	FILE *file;
	file = fopen("result.txt", "r");
	if(file==NULL)
{
 printf("Arquivo não pode ser aberto\n");
 return 0;
}
	fscanf(file,"%f, %f, %f, %f, %f, %f", &16.25, &18.96, &22.34, &18.94, &17.42, &22.63);
	fclose(file);
	return 0;
}
