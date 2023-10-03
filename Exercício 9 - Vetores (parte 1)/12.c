#include <stdio.h>

int main(void){
    float vetor[5], maior, menor, media = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);

        media += vetor[i];
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 5; i++){
        printf("%.1f\n", vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    media = media / 5;
    printf("O maior numero digitado foi: %.1f\n", maior);
    printf("O menor numero digitado foi: %.1f\n", menor);
    printf("O media dos numeros digitados e de: %.1f\n", media);

    return 0;
}