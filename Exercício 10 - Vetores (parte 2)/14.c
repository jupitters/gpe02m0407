#include <stdio.h>

int main(void){
    int vetor[10];

    for(int i = 0;i < 10; i++){
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0;i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(vetor[i]==vetor[j] && i != j && i <= j){
                printf("Um valor igual aparece nas posicoes %d e %d e e igual a %d\n", i, j, vetor[i]);
            }else{
                printf("Nao existem valores iguais.\n");
            }
        }

    }

    return 0;
}