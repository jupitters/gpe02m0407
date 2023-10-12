#include <stdio.h>

int main(void){
    int vetor[10], v1[10], v2[10];

    for(int i = 0;i < 10; i++){
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    for(int i=0;i < 10; i++){
        if(vetor[i] % 2 == 1){
            v1[i] = vetor[i];
        }else if(vetor[i] % 2 == 0){
            v2[i] = vetor[i];
        }
    }

    for(int i = 0;i < 10; i++){
        if(v1[i] < 100){
            printf("%d ", v1[i]);
        }
    }
    for(int i = 0;i < 10; i++){
        if(v2[i] < 100){
            printf("%d ", v2[i]);
        }
    }

    return 0;
}