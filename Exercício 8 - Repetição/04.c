#include <stdio.h>

int main(void){
    int i, num;

    printf("Digite um numero positivo...\n");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}