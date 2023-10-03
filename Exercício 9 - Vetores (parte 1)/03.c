#include <stdio.h>

int main(void){
    int i, a[10], b[10];

    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &a[i]);

        b[i] = a[i] * a[i];
    }

    for(i = 0; i < 10; i++){
        printf("O quadrado de %d (A[%d]) e %d (B[%d])\n", a[i], i, b[i], i);
    }

    return 0;
}