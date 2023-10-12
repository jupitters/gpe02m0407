#include <stdio.h>

int main(void){
    int vetor[20], igual;

    for(int i = 0;i < 10; i++){
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0;i < 10; i++){
        igual = 0;
        for(int j = i + 1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                igual = 1;
            }
        }
        if(igual != 1){
            printf("%d ", vetor[i]);
        }
    }


    return 0;
}