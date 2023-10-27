#include <stdio.h>

float primeira(float valor){
    float res = valor * 0.9;
    return res;
}

float segunda(float valor){
    float parcela = valor / 2;
    return parcela;
}

float terceira(float valor){
    int nParcelas;
    float parcelas;

    if(valor > 100){
        printf("Em quantas vezes voce deseja dividir? (3 a 10 vezes, 3%% de juros ao mes)\n");
        scanf("%d", &nParcelas);

        parcelas = (valor / nParcelas) * 1.03;
    }else{
        printf("O valor precisa ser acima de R$100.00\n");
    }

    return parcelas;
}

int chamada(){
    int opcao;

    printf("Opcoes de pagamento:\n");
    printf("1 - A vista com 10%% de desconto.\n");
    printf("2 - Em duas vezes(preco da etiqueta)\n");
    printf("3 - De 3 ate 10 vezes com 3%% de juros ao mes(somente para compras acima de R$100,00)\n");
    printf("Qual a sua escolha? \n");
    scanf("%d", &opcao);
    
    return opcao;
}

int main(void){
    float gasto;
    int escolha;

    printf("Qual foi o total gasto?\n");
    scanf("%f", &gasto);

    escolha = chamada();

    switch(escolha){
    case 1:
        printf("Voce deve pagar R$%.2f", primeira(gasto));
        break;
    case 2:
        printf("Voce deve pagar duas parcelas de R$%.2f", segunda(gasto));
        break;
    case 3:
        printf("Voce deve pagar parcelas de R$%.2f", terceira(gasto));
        break;
    default:
        break;
    }

    return 0;
}