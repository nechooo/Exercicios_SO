#include <stdio.h>
#define is_leap(year) ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 1 : 0
int main4() {
	int year = 0;
	do
	{
		printf("Digite um ano: ");
		int year;
		scanf_s("%d", &year);
		maine2(year);
	} while (year != 10);
}
int maine2(int year) {
	if (year < 0) {
		printf("%d => ERROR: number can only be a positive integer\n", year);
		return 10;
	}
	else if (is_leap(year)) {
		printf("%d => Ano bissexto\n", year);
		return 1;
	}
	else {
		printf("%d => Ano não bissexto\n", year);
		return 0;
	};
}

