
#ifndef SCANNER_H_
#define SCANNER_H_
#include <stdbool.h>

char* scanner(FILE *sentencias);

bool verificarConstante(char *caracteres, int i);

bool verificarIdentificador(char *caracteres, int i);


#endif /* SCANNER_H_ */
