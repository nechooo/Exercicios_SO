#include <stdio.h>
#include <stdint.h>
void main6() {
	printf("Digite um n�mero: ");
	uint64_t x;
	scanf_s("%llu", &x);
	printf("N�mero dividido por 2: %llu\n", x>>1);
	printf("N�mero multiplicado por 2: %llu\n", x << 1);
	printf("N�mero dividido por 4: %llu\n", x >> 2);
	printf("N�mero multiplicado por 4: %llu\n", x << 2);
	uint64_t mask = UINT64_MAX << 2;
	printf("N�mero com os primeiros 2 bits vazios: %llu\n", x&mask );
}