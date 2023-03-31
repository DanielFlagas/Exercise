#include <stdio.h>

int main () {

    float salario, aumento, percn, novo_salario;

    printf("Insira o salario:\n");
    scanf("%f", &salario);

    printf("Insira o percentual de aumento:\n");
    scanf("%f", &percn);

    novo_salario = salario+salario*(percn/100);

    aumento = novo_salario-salario;

    printf("Valor do aumento: %.2f.\n", aumento);
    printf("Novo salario: %.2f.\n", novo_salario);

    return 0;
}