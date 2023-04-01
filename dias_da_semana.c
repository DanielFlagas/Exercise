#include <stdio.h>

int main () {

int dia;

    printf("Digite o numero do dia da semana:\n");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
        printf("its sunday!\n");
        break;

        case 2:
        printf("its monday!\n");
        break;

        case 3:
        printf("its tuesday!\n");
        break;

        case 4:
        printf("its wednesday!\n");
        break;

        case 5:
        printf("its thursday\n");

        case 6:
        printf("its friday!\n");
        break;

        case 7:
        printf("its saturday!\n");
        break;

        default:
        printf("DIGITE UM NUMERO VALIDO DE 1 A 7!");
        break;
    }

    return 0;
}