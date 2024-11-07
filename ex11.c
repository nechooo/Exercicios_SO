#include <stdio.h>
#include <stdlib.h>

int main() {
	//a funcao strtoul converte uma string para um numero inteiro
	//unsigned long int strtoul(const char *str, char **endptr, int base)
	//o primeiro arametro � a string a converter
	//o segundo parametro � um ponteiro para um ponteiro
    //para char que vai apontar para o erro
	//o terceiro parametro � a base do numero a converter
    const char* str = "1234asda5";
    char* end;
    unsigned long int num = strtoul(str, &end, 10);

    if (*end == '\0') {
        printf("N�mero convertido: %lu\n", num);
    }
    else {
        printf("Convers�o parcial. N�mero: %lu, resto da string: %s\n", num, end);
    }

    return 0;
}
