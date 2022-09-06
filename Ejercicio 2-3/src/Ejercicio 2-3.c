/*
 Belloni
 Lucio
Ejercicio 2-3: Usando el concepto de operadores lógicos booleanos en el condicional.
Solicitar un número al usuario e informar si el número es par o impar.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	printf("Ingrese un numeros ");
	scanf("%d", &numero);

	if(numero % 2 == 0 ){
		printf("El numero que ingreso es par ");
	}else{
		printf("El numero que ingreso es impar ");
	}



	return EXIT_SUCCESS;
}
