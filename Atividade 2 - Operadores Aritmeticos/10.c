#include <stdio.h>

int main(void){
    float carro, cFabrica, distribuidor, impostos;
    
    printf("Qual o custo de fabrica do carro?\n");
    scanf("%f", &cFabrica);

    distribuidor = cFabrica * 0.28;
    impostos = cFabrica * 0.45;

    carro = cFabrica + distribuidor + impostos;
    printf("O valor do carro e: R$%.2f", carro);

    return 0;
}