/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int banderaUno;
	int banderaDos;

	banderaUno = 0;


		printf("1- Loguearse"
				"2- Comprar"
				"3- Ver mis compras"
				"4 -  Vender"
				"5 - Salir");
		scanf("%d", &opcion);

		switch(opcion){

			case "1":
				printf("logiado");
				banderaUno = 1;
			break;
			case "2":

				printf("No se logio");
				banderaUno = 0;
			break;
			case "3":
				printf("mirando las compras");

						if(banderaUno == 0){
						printf("No se logio");
						}
			break;
			case "4":

			break;
			case "5":
				;
			break;






		}




	return EXIT_SUCCESS;
}
