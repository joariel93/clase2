/*
 * utn.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdlib.h>
int utn_getNumero(int* num,int maximo,int minimo,int intentos)
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
