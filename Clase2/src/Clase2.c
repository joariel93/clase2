/*
 ============================================================================
 Name        : Clase2.c
 Author      : joariel93
 Version     :
 Copyright   : GLP 3
 Description : Clase 2 primeros algoritmos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int calcularMitad(int*);
int main(void) {
	int valor;
valor = calcularMitad(&valor);

printf("La mitad del numero  ingresado es %d",valor);
int calcularMitad(int* vla){
	int numero;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	*vla=numero*0.25;
	return 0;
	}

}
