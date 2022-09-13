/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout, NULL);

	int numero[2];
	int cambiar;

	printf("\nIngrese un numero ");
	scanf("%d", &numero[1]);

	printf("\nIngrese un numero ");
	scanf("%d", &numero[0]);


	cambiar = numero[1];

	numero[1] = numero[0];

	numero[0] = cambiar ;

	printf("El primer numero ingresado en la posisicon 1 es: %d y el otro es:  %d",numero[1],numero[0] );

	return EXIT_SUCCESS;
}
