#include <stdio.h>
#include <stdint.h>
void main6() {
	printf("Digite um número: ");
	uint64_t x;
	scanf_s("%llu", &x);
	printf("Número dividido por 2: %llu\n", x>>1);
	printf("Número multiplicado por 2: %llu\n", x << 1);
	printf("Número dividido por 4: %llu\n", x >> 2);
	printf("Número multiplicado por 4: %llu\n", x << 2);
	uint64_t mask = UINT64_MAX << 2;
	printf("Número com os primeiros 2 bits vazios: %llu\n", x&mask );
}