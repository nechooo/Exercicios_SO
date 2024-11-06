#include <stdio.h>
#include <stdint.h>
int trocabits(uint64_t x) {
	uint64_t mask = 0;
	uint64_t y = ~(x | mask);
	return y;
}

void main8() {
	uint64_t x;
	printf("Digite um número: ");
	scanf_s("%llu", &x);
	printf("%llu",trocabits(x));
}