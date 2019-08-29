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

int calculaMaxYMin(int*,int*,int*,int*);
int cuentaIteraciones(int*);
int acumulaNumeros(int*,int*);
int pideNumero(int*);
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
		acumulaNumeros(&numero,&acumulador);
		cuentaIteraciones(&contador);
		calculaMaxYMin(&numero,&max,&min,&flag);

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
int acumulaNumeros(int* numero,int *acumulador){
	int acum;
	int num;
	acum=*acumulador;
	num=*numero;
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
int calculaMaxYMin(int*numero,int*max,int*min,int*flag){
	int num;
	int maximo;
	int minimo;
	int flagg;
	num=*numero;
	flagg=*flag;
	if(flagg==0||maximo<num){
		maximo=num;
		flagg=1;
	}
	if(flagg==1||minimo>num){
		minimo=num;
		flagg=2;
	}
	*max=maximo;
	*min=minimo;
	*flag=1;
	return 0;

}

