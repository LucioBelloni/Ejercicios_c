/*
Ejercicio 4-1: Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
un número. Utilizar la función de PedirNumero de la ejercitación 3. Por ejemplo:
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);


int main(void) {
	setbuf(stdout, NULL);


	int numero;
	int i;
	int acumuladorMultiplicacion;

	acumuladorMultiplicacion = 1;

	numero = pedirNumero();

	for(i = 1  ; i <= numero  ; i++){

		acumuladorMultiplicacion *= i;
	}

	printf("el total %d",acumuladorMultiplicacion );

	return EXIT_SUCCESS;
}


int pedirNumero(void){

		int numUno;

		printf("Ingrese el numero");
		scanf("%d",&numUno);

	return numUno;
}
