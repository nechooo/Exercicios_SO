#include <stdio.h>
int main() {
	int a; //vari�vel inteira
	int* b; //ponteiro para inteiro
	int** c; //ponteiro para ponteiro para inteiro
	printf("Novo n�mero: ");
	scanf_s("%d", &a);
	b = &a;
	c = &b;
	printf("Valor de a: %d\n", a);
	printf("Endere�o de a: %p\n", b);
	printf("Endere�o de b: %p\n", c);
	printf("Valor de a: %d\n", *b);
	printf("Valor de a: %d\n", **c);

}