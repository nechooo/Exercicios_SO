#include <stdio.h>
//Lido o valor de um ano introduzido pelo utilizador e verificar se é bissexto ou não
//utilizando macro
#define e_bissexto(ano) ((ano % 4 == 0)&&(ano % 100 != 0) || (ano % 400==0))?1:0
int mainex2() {
	int ano;
	printf("Ano: ");
	scanf_s("%d", &ano);
	if (e_bissexto(ano)) {
		printf("Ano bissexto\n");
	}
	else {
		printf("Ano nao bissexto\n");
	}
	return 0;
}