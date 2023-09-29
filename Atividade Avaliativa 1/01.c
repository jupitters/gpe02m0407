#include <stdio.h>
#include <math.h>

int main(void){
    float x, res;

    printf("Dada a funcao: f(x) = 5x + 3 / raiz de x ao quadrado - 16\n");
    printf("Diga um valor para x...\n");
    scanf("%f", &x);

    res = (5 * x + 3) / sqrt(pow(x, 2) - 16);

    printf("Para um X igual a %.2f, Y e igual a %.2f", x, res);

    return 0;
}