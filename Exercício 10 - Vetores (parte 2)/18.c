
#include<stdio.h>

int main(void){
	int vetor[10],x;

    for(int i = 0;i < 10;i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero: ");
    scanf("%d", &x);
	
	for(int i = 0; i < 10; i++){
		if(vetor[i] % x == 0){
			printf("Multiplos: %d", vetor[i]);
		}
    }
	
    return 0;
}