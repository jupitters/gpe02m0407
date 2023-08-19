#include <stdio.h>

int main(void){
    float salAtual, salNovo, reajustePercent, reajuste;

    printf("Qual o valor do seu salario atual?\n");
    scanf("%f", &salAtual);
    
    printf("Qual foi a porcentagem de reajuste?\n");
    scanf("%f", &reajustePercent);

    reajuste = reajustePercent / 100;
    salNovo = salAtual * (1 + reajuste);
    printf("Seu novo salario sera igual a: R$%.2f", salNovo);

    return 0;
}