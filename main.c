#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

int main(){

	FILE* sentencias;
	char *tokens[];
	int identificador=0;
	int constante=0;
	int error=0;

	tokens=scanner(sentencias);

	int i=0;
	for(i; i != '/0'){

		if(tokens[i] == 'identificador'){
			printf("identificador /n");
			identificador += identificador;
		}
		if(tokens[i] == 'constante'){
					printf("constante entera /n");
					constante += constante;
				}
		if(tokens[i] == 'error'){
					printf("error /n");
					error += error;
				}
	}

	printf("----- /n");
	printf("Totales: /n");
	printf("identificadores %d",identificador);
	printf("constantes enteras %d",constante);
	printf("errores %d",error);
}
