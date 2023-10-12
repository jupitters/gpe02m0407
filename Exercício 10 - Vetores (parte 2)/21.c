#include <stdio.h>

int main(void){
    int vetorA[10], vetorB[10], vetroC[10];

    for(int i = 0;i < 10;i++){
        printf("Digite um valor para o vetor A: ");
        scanf("%d", &vetorA[i]);
    }
    for(int i = 0;i < 10;i++){
        printf("Digite um valor para o vetor A: ");
        scanf("%d", &vetorB[i]);
    }

    for(int i = 0;i < 10;i++){
        vetroC[i] = vetorA[i] - vetorB[i];
        printf("%d ", vetroC[i]);
    }



    return 0;
}