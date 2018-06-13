#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verificarConstante(char *caracteres, int i){ //no se si me lee el booleano

	if((caracteres[0] >= 0) && (caracteres[0] <=9)){
		return true;
	}
	else{
		return false;
	}

}

bool verificarIdentificador(char *caracteres, int i){

	if((caracteres[i] >= 'A') && ( caracteres[i] >= 'Z')){
			return true;
		}
		else{
			if((caracteres[0] >= 0) && (caracteres[0] <=9)){
				return true;
			}
			return false;
		}
}



char* scanner(FILE *sentencias){

	char* caracteres[]= NULL;


	sentencias=fopen("sentencias.txt", "a" );
	int j=0; //creo un contador j para poder comparar y moverme por el resto de las palabras
	while((caracteres = fgetc(sentencias)) != EOF){ //encuentro la primer letra de cada palabra


		if((caracteres[j] >= 0) && (caracteres[j] <=9)) //es una constante numerica
		{	bool esCorrecto;
			int i=0;
			while(caracteres[i] != ' ')
			{
				esCorrecto = verificarConstante(caracteres, i);
				//return token error si es false (no se como se hace)
				i++;
				j++;
			}
		}
		if((caracteres[j] >= 'A') && ( caracteres[j] >= 'Z'))
		{		bool esCorrecto;
				int i=0;
				while(caracteres[i] != ' ')
				{
					esCorrecto = verificarIdentificador(caracteres, i);
					//return token error si es false (no se como se hace)
					i++;
					j++;
		}

		}
	}


}
