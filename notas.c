#include <stdio.h>

int main () {

int n1,n2,n3;
int p1,p2,p3;
int mponderada;

printf("Insira a primeira nota:\n");
scanf("%d", &n1);

printf("Insira o peso da primeira nota:\n");
scanf("%d", &p1);

  printf("Insira a segunda nota:\n");
  scanf("%d", &n2);  

  printf("Insira o peso da segunda nota\n");
  scanf("%d", &p2);

    printf("Insira a terceira nota:\n");
    scanf("%d", &n3);

    printf("Insira o peso da terceira nota:\n");
    scanf("%d", &p3);

mponderada = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);

printf("Media ponderada: %d.\n", mponderada);

    return 0;
}