/*
 ============================================================================
 Name        : Clase-3.c
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
	int max;
	int min;
	int acumulador=0;
	int contador=0;
	int promedio;
	char seguir;
	int flag=0;

	do{
		printf("Ingrese un número: ");
		scanf("%d",&numero);
		acumulador=acumulador+numero;
		contador++;
		printf("Desea continuar? S/N ");
		scanf("%c",&seguir);
	}while(seguir!='n');
promedio=acumulador/contador;
printf("El promedio de los numeros ingresados fue: %d",&promedio);
}
