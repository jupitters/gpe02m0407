#include <stdio.h>

int main(void){
    float x, y;

    printf("Digite um valor de X e Y para um ponto no plano cartesiano.\n");
    scanf("%f %f", &x, &y);

    if(y == 0 && x == 0){
        printf("Origem.\n");
    }else if(y == 0){
        printf("Eixo X.\n");
    }else if(x == 0){
        printf("Eixo Y.\n");
    }

    if(x > 0 && y > 0){
        printf("O ponto esta no primeiro quadrante.\n");
    }else if(x < 0 && y > 0){
        printf("O ponto esta no segundo quadrante.\n");
    }else if(x < 0 && y < 0){
        printf("O ponto esta no terceiro quadrante.\n");
    }else if(x > 0 && y < 0){
        printf("O ponto esta no quarto quadrante.\n");
    }


    return 0;
}