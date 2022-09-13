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

#define TAM 10

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int j;
	int numeros[TAM];
	int aux;

	for(i = 0; i< TAM; i++){

		printf("\nIngrese un numero ");
		scanf("%d", &numeros[i]);

	}

	/*	for(i = 0; i < TAM; i++){

			printf("\n Posicion %d, elemento %d", i ,numeros[i] );
		}*/

		for(i = 0; i< TAM - 1; i++){

			for(j = i+1	; j < TAM; j++){

				if(numeros[i] > 0){
						if(numeros[i] > numeros[j] ){
							aux=numeros[i];
							numeros[i] = numeros[j];
							numeros[j] = aux;
						}
					}else{
						 if(numeros[i] < numeros[j] ){
							aux=numeros[i];
							numeros[i] = numeros[j];
							numeros[j] = aux;
						}
					}


			}


		}

		for(i = 0; i < TAM; i++){
			if(numeros[i] > 0 ){
				printf("\nNumeros positivos de manera creciente es %d, y la posicion es %d",numeros[i] , i );
			}else{
				printf("\nNumeros negativos de manera decreciente es %d, y la posicion es %d",numeros[i] , i );
			}
		}

	return EXIT_SUCCESS;
}
