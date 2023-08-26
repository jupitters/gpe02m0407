#include <stdio.h>

int main(void){
    float alturaPessoa, alturaLim = 1.80;

    printf("Qual a sua altura?\n");
    scanf("%f", &alturaPessoa);

    if (alturaPessoa > alturaLim){
        printf("Voce e maior que 1.80m");
    }
    else{
        printf("Voce NAO e maior que 1.80");
    }


    return 0;
}