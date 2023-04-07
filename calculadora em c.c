#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main () { 

int resposta;
float x,y,r;

printf("Selecione sua operacao matematica:\n");
printf(" ADICAO(1)\n SUBTRACAO(2)\n DIVISAO(3)\n MULTIPLICACAO(4)\n");
scanf("%d", &resposta);

printf("DIGITE O PRIMEIRO VALOR:");
scanf("%f", &x);
printf("DIGITE O SEGUNDO VALOR:");
scanf("%f", &y);

if (resposta == 1) {
    r=x+y;
}

if (resposta == 2) {
    r=x-y;
}

if (resposta == 3) {
    r=x/y;
}

if (resposta == 4) {
    r=x*y;
}

    
printf("RESULTADO: %.2f + %.2f = %.2f\n", x,y,r);
    system ("pause\n");
    return 0;
}