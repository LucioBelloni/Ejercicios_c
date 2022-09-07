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
#include "sumar.h"
#include "ingresoNumero.h"


int main(void) {
	setbuf(stdout, NULL);

	int numUno;
	int numDos;
	int respuesta;
	int validar;

	numUno = pedirNumero();
	numDos = pedirNumero();

	validar = sumar( numUno, numDos, &respuesta);
	if(validar == 0 ){
		printf("La respues es %d",respuesta );
	}else{
		printf("Hubo un error");
	}



	return EXIT_SUCCESS;
}



