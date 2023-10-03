#include <stdio.h>

int main(void){
    int i, a[8], x, y, soma = 0;

    for(i = 0; i < 8; i++){
        printf("Digite os valores para o vetor...\n");
        scanf("%d", &a[i]); 
    }

    do{
        printf("Digite os valores para x e y ( entre 0 e 7)\n");
        scanf("%d %d", &x, &y);
        if((x >= 0 && x < 8) && (y >= 0 && y < 8) ){
            for(i = 0; i < 8; i++){
                if(i == x){
                    soma += a[i];
                }
                if(y == i){
                    soma += a[i];
                }
            }
        }else{
            printf("Valores de x e y invalidos\n");
        }
    }while(x < 0 || x > 7 && y < 0 || y > 7);

    printf("Soma os valores das posicoes %d e %d = %d", x, y, soma);

    return 0;
}