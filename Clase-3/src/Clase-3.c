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

int calculaMaxYMin(int numero,int*max,int*min);
int cuentaIteraciones(int*);
int acumulaNumeros(int numero,int *acumulador);
int pideNumero(int* numero);
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
		pideNumero(&numero);
		acumulaNumeros(numero,&acumulador);
		cuentaIteraciones(&contador);
if(flag==0){
	max=numero;
	min=numero;
	flag=1;
}else{
		calculaMaxYMin(numero,&max,&min);
}
		printf("Desea continuar? S/N ");
		__fpurge(stdin);
		scanf("%c",&seguir);

	}while(seguir!='n');

	promedio=acumulador/contador;
	printf("El numero máximo ingresado fue: %d\n",max);
	printf("El numero minimo ingresado fue: %d\n",min);
	printf("El promedio de los numeros ingresados fue: %d",promedio);
}

int pideNumero(int* numero){
	int num;
	printf("Ingrese un número: ");
	__fpurge(stdin);
			scanf("%d",&num);
			*numero=num;
return 0;

}
int acumulaNumeros(int numero,int *acumulador){
	int acum;
	int num;
	acum=*acumulador;
	num=numero;
	acum=acum+num;
	*acumulador=acum;
	return 0;
}
int cuentaIteraciones (int *contador){
	int cont;
	cont=*contador;
	cont++;
	*contador=cont;
	return 0;
}
int calculaMaxYMin(int numero,int*max,int*min){

	int maximo;
	int minimo;
	maximo=*max;
	minimo=*min;
	if(maximo<numero){
		maximo=numero;
	}
	if(minimo>numero){
		minimo=numero;
	}
	*max=maximo;
	*min=minimo;

	return 0;

}

