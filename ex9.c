#include <stdio.h>
#include <stdint.h>
void main() {
	printf("Digite um número: ");
	uint64_t x;
	scanf_s("%llu", &x);
	verbitabit(x);
}
int verbitabit(uint64_t x) {
	uint64_t mask = 1;
	int i;
	for (i=63;i>=0;i--){
		if (x & mask) {
			printf("1");
		}
		else {
			printf("0");
		}
		mask = mask << 1;
	}

}