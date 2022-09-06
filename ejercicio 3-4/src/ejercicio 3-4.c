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

void mostrarNumero(int num);
float pedirNumeroFlotante(void);

int main(void) {
	setbuf(stdout, NULL);

	int numero;


	printf("Ingrese un numero entero");
	scanf("%d", &numero);
	mostrarNumero(numero);

	printf("El numero es %.2f ", pedirNumeroFlotante());



return EXIT_SUCCESS;
}


void mostrarNumero(int numero){

	do{

		scanf("%d", &numero);

	}while( numero < 1 || numero > 20);

	printf("El numero entero es %d", numero);

}



float pedirNumeroFlotante(void){

	float numFlotante;

	do{
		printf("Ingrese un numero flotante");
		scanf("%f", &numFlotante);
		}while( numFlotante < 1 || numFlotante > 20);

	return numFlotante;

}



