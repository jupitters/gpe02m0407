#include <stdio.h>

float volume(float altura, float raio){
    float volume, PI = 3.141592;

    volume = PI * raio * raio * altura;
    return volume;
}

int main(void){
    float alt, r;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &alt);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);

    printf("Essa clindro possui um volume de %.2f unidades cubicas.\n", volume(alt, r));

    return 0;
}