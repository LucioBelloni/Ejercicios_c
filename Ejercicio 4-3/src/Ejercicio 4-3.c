/*
 Belloni
 Lucio
 */

#include <stdio.h>
#include <stdlib.h>
#include "conversorDeTemperatura.h"
#include "ingresoDeTemperatura.h"



int main(void) {
	setbuf(stdout, NULL);

	float tempCelsius;
	float tempFahrenheit;
	float convensorFahrenheit;
	float conversorCelsius;

	cargaDeTemperaturaEnCelsius(&tempCelsius);
	cargaDeTemperaturaEnFahrenheit( &tempFahrenheit);

	conversionFahrenheitACelsius(tempFahrenheit , &convensorFahrenheit);
	conversionCelsiusAFahrenheit(tempCelsius, &conversorCelsius);
	printf("La temperatura de Fahrenheit a  Celsius es: %.2f \n",convensorFahrenheit);
	printf("La temperatura de Celsius a  Fahrenheit es: %.2f \n",conversorCelsius);

	printf("La temperatura a Celsius es: %.2f \n", tempCelsius);
	printf("La temperatura a Fahrenheit es: %.2f \n", tempFahrenheit);
	return EXIT_SUCCESS;
}




















