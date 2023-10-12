#include <stdio.h>

int main(void){
    int vetor[5], cod;

    for(int i = 0;i < 5;i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite o codigo: ");
    scanf("%d", &cod);

    if(cod == 0){
        printf("Programa finalizado.");
        return 0;
    }else if(cod == 1){
        for(int i=0;i<5;i++){
            printf("%d ", vetor[i]);
        }
    }else if(cod == 2){
        for(int i=4;i>=0;i--){
            printf("%d ", vetor[i]);
        }
    }else{
        printf("Codigo invalido.");
    }


    return 0;
}