/*
Ejercicio 5-4: Pedir 10 números entre -100 y 100, guardarlos en un Array. Determinar:
a) Cantidad de negativos.
b) Sumatoria de los impares.
c) El mayor de los pares.
d) Listado de los números ingresados.
e) Listado de los números mayores a 15.
f) Listado de los números de las posiciones impares.
Belloni
Lucio
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int cantidadDeNegativos(int arrayNumeros[], int cantidad , int* cantidadDeNegativos);
int sumarImpares(int arrayNumeros[], int cantidad , int* sumaImpares);
int mayorPares(int arrayNumeros[], int cantidad , int* numMayorPar);




int main(void) {
	setbuf(stdout, NULL);

	int i;
	int numeros[TAM];
	int negativosTotales;
	int rtn;
	int rtn2;
	int sumaImpares;
	int rtn3;
	int numMayor;

	sumaImpares = 0;


	negativosTotales = 0;


	for(i = 0 ; i < TAM ; i++){
		do{
		printf("\nIngrese un numero ");
		scanf("%d", &numeros[i]);


		}while(numeros[i] > 100 || numeros[i] < -100);
	}

	rtn = cantidadDeNegativos( numeros , TAM , &negativosTotales);
	if(rtn == 0){

		printf("La cantidad de negativos es %d", negativosTotales);
	}else{
		printf("Algo anduvo mal....");
	}


	rtn2 = sumarImpares( numeros,  TAM , &sumaImpares);
	if(rtn2 == 1){

			printf("La suma  de los impares  es %d", sumaImpares);
		}else{
			printf("Algo anduvo mal....");
		}


	rtn3 = mayorPares( numeros,  TAM , &numMayor);

			if(rtn3 == 1){
				printf("El numero par mayor es  %d", numMayor);
			}else{
				printf("Algo anduvo mal....");
			}


	for(i = 0 ; i< TAM ; i++){
		printf("El listado de los numeros ingresados son %d\n", numeros[i]);
	}
	for(i = 0 ; i< TAM ; i++){
		if(numeros[i] > 15){
			printf("El listado de los numeros mayores a 15 son %d\n", numeros[i]);
		}
	}

	for(i = 0 ; i< TAM ; i++){

		if(numeros[i] % 2  !=0){
			printf("\nLa posicion del numero impar %d ingresdo es : %d", numeros[i] , i );
		}
	}


	return EXIT_SUCCESS;
}


int cantidadDeNegativos( int arrayNumeros[], int cantidad , int* cantidadDeNegativos){

	int i;
	int rtn = -1;
	int cantidaddeNegativos2;

	cantidaddeNegativos2 = 0;
	*cantidadDeNegativos = 0;


	if(arrayNumeros != NULL && cantidad > 0  && cantidadDeNegativos != NULL ){

	for(i = 0 ; i < TAM ; i++){

			if(arrayNumeros[i] < 0 ){
				cantidaddeNegativos2++;
				rtn = 0;
			}
		}

	}
	*cantidadDeNegativos = cantidaddeNegativos2;
	return rtn;

}

int sumarImpares(int arrayNumeros[], int cantidad , int* sumaImpares){

	int i;
	int sumatoria;
	int rtn = -1;

	sumatoria = 0;
	*sumaImpares = 0;

		rtn = 1;


		if(arrayNumeros != NULL && cantidad > 0  && sumaImpares != NULL ){

				for(i = 0 ; i < TAM ; i++){

						if(arrayNumeros[i] % 2 != 0 ){

							sumatoria += arrayNumeros[i];
						}
				}

					*sumaImpares = sumatoria;
		}

		return rtn;
}


int mayorPares(int arrayNumeros[], int cantidad , int* numMayorPar){

	int i;
	int rtn = -1;


				if(arrayNumeros != NULL && cantidad > 0  && numMayorPar != NULL ){

						*numMayorPar = arrayNumeros[0];
						for(i = 0; i < cantidad ; i++ ){
							if(arrayNumeros[i] % 2 == 0 ){

								if(arrayNumeros[i] > *numMayorPar ){
									*numMayorPar = arrayNumeros[i];
									rtn = 1;
								}
							}
						}

				}

		return rtn;

}








