#include <stdio.h>
#include <stdint.h>
uint64_t x;
uint64_t left_zerify(uint64_t n, int len) {
	if (len > 64) {
		printf("ERROR: number of bits to shift must be less than 64\n");
		return 10;
	}
	uint64_t mask = UINT64_MAX>>len;
	n &= mask;
	return n;

};
int main() {
	//printf("Digite um número: ");
	//scanf_s("%llu", &x);
	//printf("Número: %llu\n", x);
	//printf("Quantos bits quer mover para a direita? ");
	//int len;
	//scanf_s("%d", &len);
	int len = 32;
	x = 0x1122334455667788;
	printf("Dados os números: %llu\nTamanho: %d\n",x,len);
	printf("Resultado de left_zerify: %llu\n", left_zerify(x, len));
	return 0;
}
