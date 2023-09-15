#include <stdio.h>

int main(void){
    int N, cont;

    printf("Digite um numero inteiro positivo...\n");
    scanf("%d", &N);

    for (cont = 0; cont <= N; cont++){
        printf("%d\n", cont);
    }
    

    return 0;
}