#include <stdio.h>
int main() {
    int ano;
    printf("Ano: ");
    scanf_s("%d", &ano); 

        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("Ano bissexto\n");
        }
        else {
            printf("Ano nao bissexto\n");
        }
    return 0;
}