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
#include "utn.h"
int main(void) {
	int num;
	int r = utn_getNumero(&num,100,1,4);

	if(r==0)
	{
	printf("La edad ingresada es: %d",num);
	}
}





