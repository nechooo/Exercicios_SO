#include <stdio.h>
#include <stdint.h>
void operadores(uint64_t x, uint64_t y) {
	if (x && y == 0) {
		printf("Pelo menos um dos valores � zero\n");
	}
	if (x && 1 == 1) {
		printf("Y � 0\n");
	}
	if (y && 1 == 1) {
		printf("X � zero\n");
	}
}
int main7() {
	printf("Digite um n�mero: ");
	uint64_t x;
	scanf_s("%llu", &x);
	printf("Digite outro n�mero: ");
	uint64_t y;
	scanf_s("%llu", &y);
	operadores(x, y);
}