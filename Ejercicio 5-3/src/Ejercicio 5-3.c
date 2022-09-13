/*
Ejercicio 5-3: Realizar una función que reciba como parámetros un array de enteros y
un entero por referencia. La función calculara el máximo valor de ese array y utilizara
el valor por referencia para retornar ese valor.
 Belloni
 Lucio
 */

#include <stdio.h>
#include <stdlib.h>
#define  TAM 5

int calcularElMaximo(int arrayEnteros[],int cantElementos, int* numMaximo);

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int numeros[TAM];
	int numMaximo;
	int rtn;

		for(i = 0; i < TAM ; i++){
				printf("\nIngrese un numero ");
				scanf("%d", &numeros[i]);

			}

		rtn = calcularElMaximo( numeros, TAM, &numMaximo);

		if(rtn == 1 ){

			printf("El numero mayor es: %d", numMaximo);
		}else{
			printf("Algo salio mal...");
		}


	return EXIT_SUCCESS;
}

int calcularElMaximo(int arrayEnteros[],int cantElementos, int* numMaximo){

	int i;
	int rtn = -1;


	if(arrayEnteros != NULL && cantElementos > 0  && numMaximo != NULL ){

			*numMaximo = arrayEnteros[0];
		for(i = 0; i < cantElementos ; i++ ){

			if(arrayEnteros[i] > *numMaximo ){
				*numMaximo = arrayEnteros[i];

			}

		}
			rtn = 1;
	}

	return rtn;

}
