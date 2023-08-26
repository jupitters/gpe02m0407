#include <stdio.h>

int main(void){
    float salFunc, salMin = 1302;
    
    printf("Qual o seu salario atual?\n");
    scanf("%f", &salFunc);
    
    if (salFunc > salMin){
        printf("Seu salario e maior que o salario minimo");
    }
    else{
        printf("Seu salario NAO e maior que o minimo");
    }
    
    return 0;
}