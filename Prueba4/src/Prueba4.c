/*
 ============================================================================
 Name        : Prueba4.c
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
	int promedio;
	int suma=0;
	int i;

	for(i=0;i<5;i++){
	printf("Ingrese un número: ");
	scanf("%d",&numero);
	suma=suma+numero;
	}

	promedio=suma/5;
	printf("El promedio de los numeros ingresados es: %d",promedio);

}
