#include <stdio.h>

int main(void){
    int N, cont, num;

    printf("Digite um numero inteiro positivo...\n");
    scanf("%d", &N);

    for (cont = 0; cont <= N; cont++){
        for(num = 1; (num = cont % 2); num = num){
            printf("%d\n", cont);
            break;
        }
    }
    
    return 0;
}