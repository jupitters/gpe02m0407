#include <stdio.h>

int main(void){
    float mercadoria, frete, despesas, venda, lucroValor, lucroFinal;

    printf("Qual foi o custo de producao da mercadoria?\n");
    scanf("%f", &mercadoria);

    printf("Qual foi o custo do frete?\n");
    scanf("%f", &frete);

    printf("Qual foi o custo de eventuais despesas ocorridas?\n");
    scanf("%f", &despesas);

    printf("Por fim, qual foi o valor da venda?\n");
    scanf("%f", &venda);

    lucroValor = (venda - (mercadoria + frete + despesas));
    lucroFinal = (lucroValor / venda) * 100 ;
    printf("Voce obteu um lucro de: %.0f%%", lucroFinal);

    return 0;
}