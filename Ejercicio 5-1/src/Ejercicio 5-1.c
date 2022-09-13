/*
 Belloni
 Lucio
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void) {
	setbuf(stdout, NULL);

	int i;

	int listaNumero[TAM];
	int total;

	total = 0;

		for(i = 0; i < TAM ; i++){

			printf("\nIngrese un numero ");
			scanf("%d", &listaNumero[i]);
			total+= listaNumero[i];
		}


		for(i = 0; i < TAM ; i++){

			if(listaNumero[i] % 2 !=0 ){
				printf("Los numeros son %d \n", listaNumero[i] );
		}
			}


	return EXIT_SUCCESS;
}
