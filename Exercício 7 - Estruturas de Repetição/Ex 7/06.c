#include <stdio.h>

int main(void){
    int menu, fruta, quant, preco = 0;

    do{printf("####################################\n# 1 - Abacaxi - R$5,00 por unidade #\n# 2 - Maca - R$1,00 por unidade    #\n# 3 - Pera - R$4,00 por unidade    #\n####################################\n ");
    
    printf("Qual fruta voce gostaria?\n");
    scanf("%d", &fruta);

    printf("E quantas unidades?\n");
    scanf("%d", &quant);

    switch (fruta){
    case 1:
        preco += 5 * quant;
        break;
    case 2:
        preco += quant;
        break;
    case 3:
        preco += 4 * quant;
        break;
    default:
        printf("Fruta fora de estoque!\n");
        break;
    }

    printf("Gostaria de um novo pedido?(1 = sim, 0 = nao)\n");
    scanf("%d", &menu);

    }
    while(menu != 0);
    
    printf("Sua compra deu um valor de: R$%d,00\n", preco);

    return 0;
}