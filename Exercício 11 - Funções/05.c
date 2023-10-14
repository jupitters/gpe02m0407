#include <stdio.h>

float volume(float raio){
    float volume, PI = 3.141592;

    volume = 4 * PI * raio * raio * raio / 3;
    return volume;
}

int main(void){
    float  r;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    printf("Essa esfera possui um volume de %.2f unidades cubicas.\n", volume(r));

    return 0;
}