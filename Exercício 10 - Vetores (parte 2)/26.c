#include<stdio.h>
#include<math.h>
#define TAM 5

int main(void){
    int vetor[TAM] = {1,2,2,4,4};
    int soma = 0, i;
    double media=0, desvioPadrao = 0;

    for (i = 0; i < TAM; i++) {
        soma += vetor[i];
    }
    media = soma / TAM;

    for (i = 0; i < TAM; i++) {
        desvioPadrao += pow(vetor[i]- media, 2);
    }
    desvioPadrao = sqrt(desvioPadrao/(TAM -1));

    printf("Desvio padrao: %lf", desvioPadrao);

    return 0;
}