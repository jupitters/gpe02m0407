#include <stdio.h>

int main(void){
    int i, a[10], pares = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o valor: ");
        scanf("%d", &a[i]);
        if(a[i]%2 == 0){
            pares++;
        }
    }

    printf("O vetor possui %d numeros pares.\n", pares);

    return 0;
}