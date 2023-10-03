#include <stdio.h>

int main(void){
    int i, vetor[6];

    for(i = 0; i < 6; i++){
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]); 
    }
    for(i = 5; i >= 0; i--){
        printf("%d\n", vetor[i]);
    }

    return 0;
}