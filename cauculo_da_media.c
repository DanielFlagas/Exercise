#include <stdio.h>

int main () {

    float a, b, media;

    printf("Digite sua primeira nota:\n");
    scanf("%f", &a);

    printf("Digite sua segunda nota:\n");
    scanf("%f", &b);

    media = (a + b) / 2;

    if (media >= 6 ) {  //Erro de semantica e o valor errado mas codigo le como correto

        printf("Voce foi APROVADO! NOTA: %.2f\n", media); //indexacao da variavel: ,media
    }
      

    else {

        printf("Voce foi reprovado! NOTA: %.2f\n", media);
    }

    return 0;
}