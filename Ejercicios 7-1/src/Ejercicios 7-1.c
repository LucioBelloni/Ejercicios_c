/*
 ============================================================================
 Name        : Ejercicios.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>


void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto);
int main(void) {
	setbuf(stdout, NULL);

	char nombre[15];
	char apellido[15];
	char nombreCompleto[30];
	int i;

	for(i=0;i<30;i++){
	        nombreCompleto[i] ='o';
	    }

	printf("Ingrese el nombre");
	fflush(stdin);
	gets(nombre);

	printf("Ingrese el apellido");
	fflush(stdin);
	gets(apellido);

	FormarApellidoNombre(nombre,apellido, nombreCompleto);

	printf("El nombre completo es %s",nombreCompleto );

	return EXIT_SUCCESS;
}

void FormarApellidoNombre(char pNombre[15],char pApellido[15],char* pCompleto){

	if(pNombre != NULL && pApellido != NULL && pCompleto != NULL){

		strcpy(pCompleto , pApellido);
		strcpy(pCompleto, ", ");
		strcpy(pCompleto, pNombre);
	}









}
