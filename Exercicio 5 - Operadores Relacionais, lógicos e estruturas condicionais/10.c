#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c, res1, res2, delta;

    printf("Calculadora de Equacoes de Segundo Grau\nDigite o valor de A...\n");
    scanf("%lf", &a);
    if(a == 0){
        printf("NAO e uma equacao de segundo grau.\n");
        return 0;
    }

    printf("Digite o valor de B...\n");
    scanf("%lf", &b);

    printf("Digite o valor de C...\n");
    scanf("%lf", &c);

    delta = pow(b, 2) - (4 * a * c);
    if(delta < 0){
        printf("Nao existe raiz real.\n");
    }else if(delta == 0){
        res1 = -b / (2 * a);

        printf("Raiz unica: %.2lf", res1);
    }else if(delta > 0){
        res1 = (-b + sqrt(delta)) / (2 * a);
        res2 = (-b - sqrt(delta)) / (2 * a);

        printf("As duas raizes sao: %.2lf e %.2lf", res1, res2);
    }
    
    return 0;
}