/*
Belloni
Lucio
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void calcularPromedio(int totalNumeros,float* promedio, int tam );

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int numeros[TAM];
	int total;
	float promedio;

	total = 0;

		for(i = 0; i < TAM ; i++){
				printf("\nIngrese un numero ");
				scanf("%d", &numeros[i]);
				total += numeros[i];
			}

		calcularPromedio( total,  &promedio, TAM );

		printf("El promedio es: %.2f", promedio);


	return EXIT_SUCCESS;
}

void calcularPromedio(int totalNumeros, float* promedio, int tam ){

	*promedio = (float)totalNumeros / tam;

}
