#include <stdio.h>

int main () {

    int i;
    int v[5];

    for (i=0; i<5; i++) {
        printf("Digite um dado:\n");
        scanf("%d", &v[i]);
    }

    printf("Dados inseridos:\n");

    for (i=0; i<5; i++) {
       printf("%d ", v[i]);
    }

    return 0;
}