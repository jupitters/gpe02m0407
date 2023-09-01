#include <stdio.h>

int main(void){
    double a, b, c, d, maior, menor;

    printf("Digite quatro valores divididos por espacos...\n");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if ((a >= b) && (a >= c) && (a >= d)){
        maior = a;
        if ((b <= c) && (b <= d)){
            menor = b;
        }else if(c <= d){
            menor = c;
        }else{
            menor = d;
        }
    }else if ((b >= a) && (b >= c) && (b >= d)){
        maior = b;
        if ((a <= c) && (a <= d)){
            menor = a;
        }else if(c <= d){
            menor = c;
        }else{
            menor = d;
        }
    }else if ((c >= a) && (c >= b) && (c >= d)){
        maior = c;
        if ((a <= b) && (a <= d)){
            menor = a;
        }else if(b <= d){
            menor = b;
        }else{
            menor = d;
        }
    }else{
        maior = d;
        if ((a <= b) && (a <= c)){
            menor = a;
        }else if(b <= c){
            menor = b;
        }else{
            menor = c;
        }
    }

    printf("O maior valor e igual a %.2lf e  o menor valor e igual a %.2lf", maior, menor);

    return 0;
}