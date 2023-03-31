#include <stdio.h>

int main () {

float salario, areceber;
float grat = 600.00;

printf("Insira os salario base:\n");
scanf("%f", &salario);

areceber = salario + grat - salario * 0.10;

printf("Salario a receber: %.2f.\n", areceber);
    return 0;
}