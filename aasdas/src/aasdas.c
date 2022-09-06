/*
 ============================================================================
 Name        : aasdas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero();  // Prototipo
int resta(int num1 , int num2); // parametros formales



int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int resultado;

	numero1 = pedirNumero();
	numero2 = pedirNumero();
	resultado =	resta(numero1 , numero2);
	printf("\nLa resta es: %d ", resultado);





	return EXIT_SUCCESS;
}

int pedirNumero(){  // desarrollo de la funcion

	int numero;

	printf("\nIngrese un numero ");
	scanf("%d", &numero);

	return numero;


}
int resta(int num1 , int num2){
		int total;

		total = num1 - num2;

		return total;

}
