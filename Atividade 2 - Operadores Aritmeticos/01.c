#include <stdio.h>

int main(void){
    int x, y, sum, dif, mul;
    float div;

    printf("Digite um numero natural...\n");
    scanf("%d", &x);

    printf("Digite mais um numero natural...\n");
    scanf("%d", &y);

    sum = x + y;
    dif = x - y;
    mul = x * y;
    div = (float)x / y; 
    printf("\nA soma desses numeros e igual a : %d\nA diferenca desses numeros e igual a : %d\nA multiplicacao desses numeros e igual a: %d\nA divisao desses numeros e igual a: %.2f", sum, dif, mul, div);

    return 0;
}