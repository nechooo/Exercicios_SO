#include <stdio.h>
//Lido o valor de um ano introduzido pelo utilizador e verificar se é bissexto ou não
int mainex1() {
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