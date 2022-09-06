/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "mostrarNum.h"

int main(void) {
	setbuf(stdout, NULL);

	int num;

	printf("Ingrese un numero entero");
	scanf("%d", &num);
	mostrarNumeroEntero(num);

	return EXIT_SUCCESS;
}

