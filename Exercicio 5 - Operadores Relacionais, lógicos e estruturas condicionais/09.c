#include <stdio.h>

int main(void){
    float salAtual, anosTrab, salFinal;

    printf("Qual o seu salario atual?\n");
    scanf("%f", &salAtual);
    printf("Qual o seu tempo de servico na empresa?\n");
    scanf("%f", &anosTrab);

    if((salAtual <= 500) && (anosTrab <= 1)){
        salFinal = salAtual * 1.25;

        printf("Seu novo salario sera igual a R$%.2f", salFinal);
    }else if((salAtual <= 1000) && ((anosTrab >= 1) && (anosTrab <= 3))){
        salFinal = (salAtual * 1.2) + 100;

        printf("Seu novo salario sera igual a R$%.2f", salFinal);
    }else if(((salAtual <= 1500) && (salAtual > 1000 )) && ((anosTrab >= 4) && (anosTrab <= 6))){
        salFinal = (salAtual * 1.15) + 200;

        printf("Seu novo salario sera igual a R$%.2f", salFinal);
    }else if(((salAtual <= 2000) && (salAtual > 1500 )) && ((anosTrab >= 7) && (anosTrab <= 10))){
        salFinal = (salAtual * 1.1) + 300;

        printf("Seu novo salario sera igual a R$%.2f", salFinal);
    }else if((salAtual > 2000) && (anosTrab > 10)){
        salFinal = salAtual + 500;

        printf("Seu novo salario sera igual a R$%.2f", salFinal);
    }else{
        printf("Sem reajuste de salario!");
    }

    return 0;
}