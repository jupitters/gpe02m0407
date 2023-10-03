#include <stdio.h>

int main(void){
    int i, A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

    for(i = 0; i < 6; i++){
        if(i == 0 || i == 1 || i == 5){
            soma += A[i];
        }
        if(i == 4){
            A[i] = 100;
        }
    }

    printf("Soma dos vetores: %d\n", soma);

    for(i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}