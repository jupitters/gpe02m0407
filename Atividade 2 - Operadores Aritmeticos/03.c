#include <stdio.h>

int main(void){
    double x, y, area;

    printf("Digite a largura da sala...\n");
    scanf("%lf", &x);
    printf("Digite o comprimento da sala...\n");
    scanf("%lf", &y);

    area = x * y;
    printf("O area dessa sala e igual a: %.3lf unidades quadradas", area);

    return 0;
}