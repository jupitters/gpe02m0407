#include <stdio.h>

int main(void){
    int i, vetor[5], num, contador = 0;

    do{
        printf("Digite um numero par: ");
        scanf("%d", &num);
        if(num % 2 == 0){
            vetor[contador] = num;
            contador++;
        }else{
            printf("Numero invalido. Digite novamente...\n");
        }
    }while(contador < 5);

    for(i = 4; i >= 0; i--){
        printf("\n%d", vetor[i]);
    }

    return 0;
}