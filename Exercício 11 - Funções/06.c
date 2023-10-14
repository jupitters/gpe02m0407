#include <stdio.h>

float imc(float peso, float altura){
    float imc;

    imc =  peso / (altura *altura);
    return imc;
}

int main(void){
    float  alt, p;

    printf("Digite o peso em kg: ");
    scanf("%f", &p);
    printf("Digite a altura em m: ");
    scanf("%f", &alt);

    printf("Essa pessoa possui um IMC de: %.2f.\n", imc(p, alt));

    return 0;
}