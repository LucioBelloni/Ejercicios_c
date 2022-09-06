/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int solitiarElIngreso();
float promediarNumeros(int numeroUno, int nummeroDos);
int recibirNumero(int numeroFirst);


int main(void) {
	setbuf(stdout, NULL);

	int numUno;
	//int numDos;
	//float promedio;
	int rtn;

	// enunciado 1

	numUno = solitiarElIngreso();
	//numDos = solitiarElIngreso();

	// enunciado 2

	//printf("El primer numero es %d", numUno);

	//promedio = promediarNumeros(numUno,numDos);
	//printf("El promedio  es %.2f", promedio);


	// enunciado 3

	rtn = recibirNumero(numUno);

	if (rtn == 0){
			printf("Es 0");
	}else
		if(rtn == 1){
			printf("es positivo");
	}else{
			printf("es negativo");
	}



	return EXIT_SUCCESS;
}

int solitiarElIngreso(){

	int numero;

	printf("Ingrese un numero");
	scanf("%d", &numero);

	return numero;
}

float promediarNumeros(int numeroUno, int nummeroDos){

	float promedio;

	promedio = ((float)numeroUno + nummeroDos / 2);

	return promedio;

}


int recibirNumero(int numeroFirst){

	int rtn;

	if(numeroFirst > 0){
			rtn = 1;
	}else
		if(numeroFirst < 0){
			rtn = -1;
	}else{
			rtn = 0;
		}

	return  rtn;

}




