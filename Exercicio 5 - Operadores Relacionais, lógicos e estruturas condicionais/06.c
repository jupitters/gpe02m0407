#include <stdio.h>

int main(void){
    int x;

    printf("Digite um numero inteiro...\n");
    scanf("%d", &x);

    if(x % 2 == 0){
        printf("O numero digitado e par!");
    }

    return 0;
}