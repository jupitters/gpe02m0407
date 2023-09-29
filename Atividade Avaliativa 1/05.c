#include <stdio.h>
#include <math.h>

int main(void){
    float distancia, x1, x2, y1, y2;

    printf("Qual o X1 e Y1 do ponto?(separados apenas por espaco)\n");
    scanf("%f %f", &x1, &y1);
    printf("Qual o X2 e Y2 do ponto?(separados apenas por espaco)\n");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os dois pontos e igual a: %.4f unidades.\n", distancia);

    return 0;
}