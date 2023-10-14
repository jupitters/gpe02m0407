#include <stdio.h>

int comp(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}

int main(void){
    int n1, n2;

    printf("Digite um numero: \n");
    scanf("%d", &n1);
    printf("Digite outro numero: \n");
    scanf("%d", &n2);

    printf("O maior deles e: %d\n", comp(n1, n2));

    return 0;
}