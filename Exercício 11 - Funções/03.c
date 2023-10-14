#include <stdio.h>

float conversao(float fahrenheit){
    float celsius;

    celsius = (fahrenheit - 32.0) * (5.0/9.0);
    return celsius;
}

int main(void){
    float grau;

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &grau);

    printf("Essa temperatura e equivalente a %.1f gaus celsius.\n", conversao(grau));

    return 0;
}