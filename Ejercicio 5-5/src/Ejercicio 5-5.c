/*
 5-5: Pedir 10 números enteros distintos de cero entre -50 y 75. La carga
deberá ser aleatoria (todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos. Desde el mayor de los negativos los
números negativos hasta llegar a cero.
Belloni
Lucio
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 4


int obtenerPromedio(int arrayNumeros[], int cantidad, float* promedio);
int obtenerMinimoNegativo(int arrayNumeros[], int cantidad, int*  minNegativo);
int main(void) {
	setbuf(stdout, NULL);

	int i;
	int numeros[TAM];
	int rtn;
	int rtn2;
	float promedio;
	int maxNegativo;

	for(i = 0; i< TAM; i++){

		do{
				printf("\nIngrese un numero ");
				scanf("%d", &numeros[i]);

		}while(numeros[i] > 75  || numeros[i] < -50);


	}

	rtn = obtenerPromedio( numeros,TAM, &promedio);

	if(rtn == 1){
		printf("\nEl promedio de los positivos es: %.2f",promedio );
	}else{
		printf("Algo anda mall");
	}

	rtn2 = obtenerMinimoNegativo(numeros,TAM, &maxNegativo);

	if(rtn2 == 1){
		printf("\nEl  numero maximo de los negativos es: %d",maxNegativo);
		}else{
			printf("Algo anda mall");
		}


	return EXIT_SUCCESS;
}

int obtenerPromedio(int arrayNumeros[], int cantidad, float* promedio){

	int i;
	int acumuladorNum;
	int rtn = -1;

	acumuladorNum = 0;


	if(arrayNumeros != NULL && cantidad > 0  && promedio != NULL ){

			for(i = 0 ; i < cantidad ; i++){

				if(arrayNumeros[i] > 0){
					acumuladorNum += arrayNumeros[i];
				}

			}
		*promedio = (float)acumuladorNum / cantidad;
		rtn = 1;
	}
		return rtn;
}

int obtenerMinimoNegativo(int arrayNumeros[], int cantidad, int*  maxNegativo){

	int i;
	int rtn = -1;

	if(arrayNumeros != NULL && cantidad > 0  && maxNegativo != NULL ){

			*maxNegativo = arrayNumeros[0];
			for(i = 0 ; i < cantidad ; i++){

				if(arrayNumeros[i] < 0){
					*maxNegativo = arrayNumeros[i];
				}

			}

		rtn = 1;
	}
		return rtn;
}














