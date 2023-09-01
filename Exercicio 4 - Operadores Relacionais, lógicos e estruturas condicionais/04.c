#include <stdio.h>

int main(void){
    double a, b, c, temp;

    printf("Digite tres valores diferentes separados por espacos...\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
    if(b < c){
        temp = b;
        b = c;
        c = temp;
    }
    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
    
    printf("A sequencia de numeros em ordem decrescente e: %.1lf %.1lf %.1lf", a, b, c);

    return 0;
}