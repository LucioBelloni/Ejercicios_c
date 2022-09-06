/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)


  */


#include <stdio.h>
#include <stdlib.h>
#define T 7


int main(void) {

	setbuf(stdout, NULL);

	int i;
	int numeros;
	int acumuladorDeNumeros;
	float promedioTotal;

	acumuladorDeNumeros=0;

	for(i = 0; i < T;i++){

		do{
			printf("Ingrese un numero");
			scanf("%d", &numeros);

		}while(numeros >= 0);
			acumuladorDeNumeros+=numeros;
		}

	promedioTotal = acumuladorDeNumeros / (float) T;
	printf(" \n El promedio de los numeros es: %2.f ", promedioTotal);


	return EXIT_SUCCESS;
}


