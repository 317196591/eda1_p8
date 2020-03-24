#include<stdio.h>
char c, d, e, f[1], g;
int o, n, m;
int main()
{
	FILE *lista;
	lista=fopen("lista.txt","a+");
	printf("Elige una opcion");
	printf("\n1. Agregar");
	printf("\n2. Buscar");
	scanf("%i",&o);
	switch(o)
	{
		case 1:
		{
			printf("Ingresa la letra a agregar: ");
			scanf("%s",&c);
			fprintf(lista,"\n%c",c);
			printf("\nLetra agregada exitosamente.");
			break;
		}
		case 2:
		{
			printf("Ingresa la letra a buscar: ");
			scanf("%s",&c);
			while(feof(lista)==0)
			{
				fscanf(lista,"%s\n",&d);
				if(c==d) printf("\nLetra incluida en lista");
			}
			break;
		}
	}
}
