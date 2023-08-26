#include <stdio.h>

int main(void){
    float pesoAtual, pesoLim = 60;

    printf("Qual o seu peso atual?\n");
    scanf("%f", &pesoAtual);

    if(pesoAtual < pesoLim){
        printf("Seu peso atual e menor que 60kg");
    }
    else{
        printf("Seu peso atual NAO e menor que 60Kg");
    }

    return 0;
}