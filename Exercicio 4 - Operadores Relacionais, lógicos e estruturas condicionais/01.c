#include <stdio.h>
#include <math.h>

int main(void){
    double x, y;

    printf("Digite um numero qualquer...\n");
    scanf("%lf", &x);

    if (x >= 0){
        y = sqrt(x);
        printf("A raiz quadrada de %.2lf e igual a %.2lf", x, y);
    }else{
        y = pow(x, 2);
        printf("O quadrado de %.2lf e igual a %.2lf", x, y);
    }

    return 0;
}