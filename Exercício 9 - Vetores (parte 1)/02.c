#include <stdio.h>

int main(void){
    int i, A[6];

    for(i = 0; i < 6; i++){
        printf("Digite um valor: ");
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}