/*
 Belloni
 Lucio
Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeros;
	char respuesta;
	int acumuladorDeNumeroPositivos;
	int acumuladorDeNumeroNegativos;
	int numeroMinimo;
	int banderaDelMinimo;
	int numeroMaximo;
	int banderaDelMaximo;
	int contadorNumeroMinimo;
	int contadorNumeroMaximo;
	float promedioDeLosNumerosPositivos;
	float promedioDeLosNumerosNegativos;


	acumuladorDeNumeroPositivos = 0;
	acumuladorDeNumeroNegativos = 0;
	contadorNumeroMinimo = 0;
	contadorNumeroMaximo = 0;
	banderaDelMinimo = 0;
	banderaDelMaximo = 0;
	numeroMinimo = 0;
	numeroMaximo = 0;



	do{

		printf("Ingrese numeros enteros");
		scanf("%d", &numeros);

		if(numeros > 0 ){
				contadorNumeroMinimo++;
			if(banderaDelMinimo == 0){
				numeroMinimo = numeros;
				banderaDelMinimo = 1;

			}else{
				if(numeros < numeroMinimo){
					numeroMinimo = numeros;
				}
			}

			acumuladorDeNumeroPositivos+= numeros;

		}else{
				contadorNumeroMaximo++;
			if(banderaDelMaximo == 0 ){
				numeroMaximo = numeros;
				banderaDelMaximo = 1;
			}else{
				if(numeros > numeroMaximo){
					numeroMaximo = numeros;
				}
			}
			acumuladorDeNumeroNegativos += numeros;
		}



		printf("\n  s/n Desea continuar?");
		fflush(stdin);
		scanf("%c", &respuesta);
	}while (respuesta == 's' || respuesta == 'S');

	promedioDeLosNumerosPositivos =  acumuladorDeNumeroPositivos / (float) contadorNumeroMinimo;
	promedioDeLosNumerosNegativos = acumuladorDeNumeroNegativos / (float) contadorNumeroMaximo;

	printf("\n El promedio de los positivos es:  %.2f ", promedioDeLosNumerosPositivos);

	printf("\n el numero minimo es %d", numeroMinimo);


	printf("\n El promedio de los negativos es: %.2f", promedioDeLosNumerosNegativos);
	printf("\n el numero maximo es %d", numeroMaximo);

	return EXIT_SUCCESS;
}
