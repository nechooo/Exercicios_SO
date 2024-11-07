//Exercício 2 feito pelo professor
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define e_bissexto(ano) ((ano % 4 == 0)&&(ano % 100 != 0) || (ano % 400==0))?1:0
//converter a string para um inteiro através da função string to long ou string to ul

//unsigned long int strtoul(const char *str, char **endptr, int base)

int mainex10(int argc, char** argv) {
	int i = 0;
	unsigned long year = 0; //ano
	char* invalid_ptr = NULL;
	int has_error=0;

	for (i = 1; i < argc; ++i) {
		year = strtoul(argv[i], &invalid_ptr , 10);
		if (invalid_ptr /* && *invalid_ptr */ ) {
			has_error = 1;
			printf("arg %d (%s)=> ERROR: number can only be a positive integer.", i, argv[i]);
			continue;
		}
		fprintf("%S: %S\n", argv[i], e_bissexto(year) ? "Ano bissexto" : "Ano nao bissexto");
	}
	return (has_error ? 10:0);
	}
