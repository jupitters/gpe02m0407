#include <stdio.h>

int main(void){
    int prato, sobremesa, bebida, cal = 0;

    printf("Qual prato principal voce gostaria de comer?!\n");
    printf("1 - Vegetariano\n");
    printf("2 - Peixe\n");
    printf("3 - Frango\n");
    printf("4 - Carne\n");
    scanf("%d", &prato);
    printf("O que voce gostaria de comer como sobremesa?\n");
    printf("1 - Abacaxi\n");
    printf("2 - Sorvete Diet\n");
    printf("3 - Mouse Diet\n");
    printf("4 - Mouse de Chocolate\n");
    scanf("%d", &sobremesa);
    printf("E qual a bebida de sua preferencia?\n");
    printf("1 - Cha\n");
    printf("2 - Suco de Laranja\n");
    printf("3 - Suco de Melao\n");
    printf("4 - Refrigerante Diet\n");
    scanf("%d", &bebida);

    switch (prato){
    case 1:
        cal += 180;
        break;
    case 2:
        cal += 230;
        break;
    case 3:
        cal += 250;
        break;
    case 4:
        cal += 350;
        break;
    default:
        printf("Codigo invalido.\n");
        return 0;
    }
    switch (sobremesa){
    case 1:
        cal += 75;
        break;
    case 2:
        cal += 110;
        break;
    case 3:
        cal += 170;
        break;
    case 4:
        cal += 200;
        break;
    default:
        printf("Codigo invalido.\n");
        return 0;
    }
    switch (bebida){
    case 1:
        cal += 20;
        break;
    case 2:
        cal += 70;
        break;
    case 3:
        cal += 100;
        break;
    case 4:
        cal += 65;
        break;
    default:
        printf("Codigo invalido.\n");
        return 0;
    }
    
    printf("\nVoce ira ingerir um total de %d calorias.", cal);

    return 0;
}