/*
 * ingresoDeTemperatura.c
 *
 *  Created on: 6 sep. 2022
 *      Author: Lucio
 */
#include <stdio.h>
#include <stdlib.h>


void cargaDeTemperaturaEnCelsius(float* respt){

	float valorCelsius;

	do{
		printf("Ingrese una temperatura en Celsius ");
		scanf("%f", &valorCelsius);
		*respt = valorCelsius;

	}while(valorCelsius < 0 || valorCelsius > 100 );

}

void cargaDeTemperaturaEnFahrenheit(float* respt){

	float valorFahrenheit;

		do{
			printf("Ingrese una temperatura en Fahrenheit ");
			scanf("%f", &valorFahrenheit);
			*respt = valorFahrenheit;

		}while(valorFahrenheit < 32 || valorFahrenheit > 212 );

}
