#include <stdio.h>

int main(void){
    int N;

    printf("Digite um numero inteiro positivo...\n");
    scanf("%d", &N);

    for (N = N; N >= 0; N--){
        printf("%d\n", N);
    }
    

    return 0;
}