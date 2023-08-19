#include <stdio.h>

int main(void){
    float salFixo, comFixa, comissao, salFinal, nVendas, vVendas;
    
    printf("Quantos carros foram vendidos pelo funcionario?\n");
    scanf("%f", &nVendas);

    printf("Qual foi o valor total das vendas pelo funcionario?\n");
    scanf("%f", &vVendas);

    printf("Qual o salario fixo do funcionario?\n");
    scanf("%f", &salFixo);

    printf("Quanto o funcionario recebe por carro vendido?\n");
    scanf("%f", &comFixa);

    comissao = (comFixa * nVendas) + (0.05 * vVendas);
    salFinal = salFixo + comissao;
    printf("O valor final do salario do funcionario e: R$%.2f", salFinal);

    return 0;
}