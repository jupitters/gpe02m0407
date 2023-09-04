#include <stdio.h>

int main(void){
    int codigo, uni;
    float preco;

    printf("C A R D A P I O\n");
    printf("100 - Cachorro Quente - R$10,10\n");
    printf("101 - Bauru Simples - R$8,30\n");
    printf("102 - Bauru com ovo - R$8,50\n");
    printf("103 - Hamburger - R$12,50\n");
    printf("104 - Cheeseburger - R$13,25\n");
    printf("\nQual o codigo do pedido?\n");
    scanf("%d", &codigo);
    printf("Quantas unidades do pedido?\n");
    scanf("%d", &uni);

    switch (codigo){
    case 100:
        preco = 10.10 * uni;
        break;
    case 101:
        preco = 8.30 * uni;
        break;
    case 102:
        preco = 8.50 * uni;
        break;
    case 103:
        preco = 12.50 * uni;
        break;
    case 104:
        preco = 13.25 * uni;
        break;
    default:
        printf("Codigo invalido.\n");
        return 0;
    }
    
    printf("\nO valor do seu pedido e igual a R$%.2f", preco);

    return 0;
}