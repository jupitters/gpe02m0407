#include <stdio.h>

int main(void){
    double raio, area, pi = 3.14;

    printf("Qual o valor do raio do circulo?\n");
    scanf("%lf", &raio);

    area = pi * (raio * raio);
    printf("A area desse circulo e igual a: %.3lf unidades quadradas", area);

    return 0;
}