#include <stdio.h>
int main() {
	int a; //variável inteira
	int* b; //ponteiro para inteiro
	int** c; //ponteiro para ponteiro para inteiro
	printf("Novo número: ");
	scanf_s("%d", &a);
	b = &a;
	c = &b;
	printf("Valor de a: %d\n", a);
	printf("Endereço de a: %p\n", b);
	printf("Endereço de b: %p\n", c);
	printf("Valor de a: %d\n", *b);
	printf("Valor de a: %d\n", **c);

}