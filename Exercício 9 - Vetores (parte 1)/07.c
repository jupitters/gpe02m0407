#include <stdio.h>

int main(void){
    int i, vetor[10], maior, posicao;

    for(i = 0; i < 10; i++){
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]); 
    }

    maior = vetor[0];

    for(i = 0; i < 10; i++){
        printf("%d\n", vetor[i]);

       if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
       }
    }
    printf("Maior valor: %d e posicao: %d\n", maior, posicao);

    return 0;
}