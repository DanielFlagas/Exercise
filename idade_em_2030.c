#include <stdio.h>

int main () {

    int nasc, ano_atual, idade_atual, idade_2023;

    printf("Insira o ano de nascimento:\n");
    scanf("%d", &nasc);

    printf("Insira o ano atual:\n");
    scanf("%d", &ano_atual);

    idade_atual = ano_atual - nasc;
    idade_2023 = 2030 - nasc;
    
    printf("Idade atual: %d.\n", idade_atual);
    printf("Idade em 2030: %d.\n", idade_2023);

    return 0;
}