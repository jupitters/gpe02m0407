#include <stdio.h>

int main(void){
    float x, valor, dolar = 4.97; // acessado dia 18/08/2023

    printf("Digite um valor em reais para a conversao...\n");
    scanf("%f", &x);

    valor = x * dolar;
    printf("O valor em dolares e igual a: US$%.2f", valor);

    return 0;
}