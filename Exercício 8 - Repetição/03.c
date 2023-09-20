#include <stdio.h>

int main(void){
    int i, numero, a = 0, b = 1, c = 1;

    printf("Digite um numero interio positivo...\n");
    scanf("%d", &numero);


    for(i = 0; i < numero; i++){
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }

    return 0;
}