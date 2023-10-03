#include <stdio.h>

int main(void){

    int i, a[10], maior, menor;

    for(i = 0; i < 10; i++){
        printf("Digite os numeros: ");
        scanf("%d", &a[i]); 
    }

    maior = a[0];
    menor = a[0];

    for(i = 0; i < 10; i++){
        if(a[i] > maior){
            maior = a[i];
        }
        if(a[i] < menor){
            menor = a[i];
        }
    }

    printf("O maior valor e %d e o menor valor e %d\n", maior, menor);

    return 0;
}