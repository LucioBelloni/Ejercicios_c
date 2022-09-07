/*
 * conversorDeTemperatura.c
 *
 *  Created on: 6 sep. 2022
 *      Author: Lucio
 */

#include <stdio.h>
#include <stdlib.h>


void conversionFahrenheitACelsius(float valorA, float* resp){

		float resultado;

		resultado = (valorA - 32) * 5/9;

		*resp  = resultado;

}


void conversionCelsiusAFahrenheit(float valorA, float* resp){

		float resultado;

		resultado = (valorA * 9/5 ) + 32;

		*resp  = resultado;

}
