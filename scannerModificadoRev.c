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
			return false;
		}
}



char* scanner(FILE *sentencias){

	char* caracteres[]= NULL;


	sentencias=fopen("sentencias.txt", "a" );
	int j=0; //creo un contador j para poder comparar y moverme por el resto de las palabras
	while((caracteres = fgetc(sentencias)) != EOF){ //encuentro la primer letra de cada palabra
            
		bool esCorrecto = False	// inicializa en False , solo si es constante o indentificador se transforma en True

		if((caracteres[j] >= 0) && (caracteres[j] <=9)) //es una constante numerica
		{	 
			int i=0;
			while(caracteres[i] != ' ')
			{
				esCorrecto = verificarConstante(caracteres, i);
				i++;
				j++;
			}
		}
		if((caracteres[j] >= 'A') && ( caracteres[j] >= 'Z')) //es un identificador 
		{		
				int i=0;
				while(caracteres[i] != ' ')
				{
					esCorrecto = verificarIdentificador(caracteres, i);
					
					i++;
					j++;
		}

		}
		
		`if ( esCorrecto == False)
		    {
		      int i=0;
			while(caracteres[i] != ' ')
			{
			 i++
			
		    }  
		}
		
		
	}


}