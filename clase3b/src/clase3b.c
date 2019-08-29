/*
 ============================================================================
 Name        : clase3b.c
 Author      : joariel93
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int numero;
int maximo;
int minimo;
int cantidadNumeros;
int i;
int retorno=-1;
printf("Ingrese la cantidad de números que desea ingresar: ");
scanf("%d",&cantidadNumeros);
for(i=0;i<cantidadNumeros;i++){
	printf("Ingrese un número: ");
	scanf("%d",&numero);
	if(i==0||numero>maximo){
		maximo=numero;
	}
	if(i==0||numero<minimo){
		minimo=numero;

	}
	retorno = 0;
}
printf("El numero máximo ingresado fue: %d\n",maximo);
printf("El numero minimo ingresado fue: %d",minimo);
return retorno;
}
