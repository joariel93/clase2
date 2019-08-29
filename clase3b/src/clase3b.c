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
int flag=0;
int i;
printf("Ingrese la cantidad de números que desea ingresar: ");
scanf("%d",&cantidadNumeros);
for(i=cantidadNumeros;i>0;i--){
	printf("Ingrese un número: ");
	scanf("%d",&numero);
	if(numero>maximo||flag==0){
		maximo=numero;
	}
	if(numero<minimo||flag==0){
		minimo=numero;
		flag=1;
	}
}
printf("El numero máximo ingresado fue: %d\n",maximo);
printf("El numero minimo ingresado fue: %d",minimo);
return 0;
}
