#include <stdio.h>

int main(void){
    float vetor[10], soma = 0;
    int neg = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);

        if(vetor[i] < 0){
            neg++;
        }else{
            soma += vetor[i];
        }
    }

    printf("A quantidade de numeros negativos foi: %d\n", neg);
    printf("A soma dos numeros positivos resultaram em: %.1f", soma);

    return 0;
}