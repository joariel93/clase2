/*
 ============================================================================
 Name        : Clase04.c
 Author      : joariel93
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int getNumero(int* num,int maximo,int minimo,int intentos);
int main(void) {
	int num;
	int r = getNumero(&num,100,1,4);

	if(r==0)
	{
	printf("La edad ingresada es: %d",num);
	}
}

int getNumero(int* num,int maximo,int minimo,int intentos)
{
	int numero=*num;
	int flag=0;

		printf("Ingrese la edad entre 1 y 100: ");
		scanf("%d",&numero);
		if(numero>=minimo&&numero<=maximo)
		{
			*num=numero;
		}
		else
		{
			while(!(numero>=minimo&&numero<=maximo))
			{
				printf("Error ingrese una edad entre 1 y 100 (%d intentos restantes)",intentos);
				scanf("%d",&numero);
				intentos--;
				if(intentos==0){
					printf("Ha superado la cantidad de intentos permitidos");
					flag=1;
					break;
				}
			}
				if(flag==0)
				{
					*num=numero;
				}else
				{
				return -1;
				}
		}
	return 0;
}



