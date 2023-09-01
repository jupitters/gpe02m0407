#include <stdio.h>

int main(void){
    double x;

    printf("Digite um numero qualquer...\n");
    scanf("%lf", &x);

    if(x == 5){
        printf("Este numero e igual a 5(cinco)");
    }else if(x == 200){
        printf("Este numero e igual a 200(duzentos)");
    }else if(x == 400){
        printf("Este numero e igual a 400(quatrocentos)");
    }else if((500 < x) && (x < 1000)){
            printf("Este numero esta entre 500(quinhentos) e 1000(mil)");
    }else{
        printf("Este numero esta fora dos escopos selecionados");
    }

    return 0;
}