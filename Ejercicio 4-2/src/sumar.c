/*
 * sumar.c
 *
 *  Created on: 6 sep. 2022
 *      Author: Lucio
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int numUno, int numDos, int* respuesta){

	int resultado;
	int rtn;


	resultado = numUno + numDos;

	if(resultado != 0 ){
		rtn = 0;
	}else{
		rtn = -1;
	}

	*respuesta = resultado;
	return rtn;
}
