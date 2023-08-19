#include <stdio.h>

int main(void){
    float x, dobro;

    printf("Digite um numero...\n");
    scanf("%f", &x);

    dobro = x * 2;
    printf("O dobro desse numero e igual a: %.2f", dobro);

    return 0;
}