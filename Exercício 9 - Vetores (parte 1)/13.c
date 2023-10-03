#include <stdio.h>

int main(void){
    float vetor[5], maior, menor;
    int i, maiorPos, menorPos;

    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
        fflush(stdin);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(i = 0; i < 5; i++){

        if(vetor[i] >= maior){
            maior = vetor[i];
            maiorPos = i;
        }
        if(vetor[i] <= menor){
            menor = vetor[i];
            menorPos = i;
        }
    }

    printf("A posicao onde se encontra o maior valor e: %d\n", maiorPos);
    printf("A posicao onde se encontra o menor valor e: %d\n", menorPos);

    return 0;
}
