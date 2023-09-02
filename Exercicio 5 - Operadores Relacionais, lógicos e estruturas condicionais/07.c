#include <stdio.h>

int main(void){
    float x, y, z, res;

    printf("Qual foi a nota da primeira prova?\n");
    scanf("%f", &x);
    printf("Qual foi a nota da segunda prova?\n");
    scanf("%f", &y);
    printf("Qual foi a nota da terceira prova?\n");
    scanf("%f", &z);

    res = (x + y + (z * 2)) / 4;
    
    if(res >= 7){
        printf("Voce foi aprovado com uma media de %.2f", res);
    }else{
        printf("Voce foi reprovado com uma media de %.2f", res);
    }

    return 0;
}