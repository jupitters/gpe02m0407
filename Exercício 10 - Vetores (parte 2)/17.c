
#include<stdio.h>

int main(void){
	int vetor[10];

    for(int i = 0;i < 10;i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
	
	for(int i = 0; i < 10; i++){
		if(vetor[i] < 0){
			vetor[i] = 0;
		}
        printf("%d ", vetor[i]);
	}
	
    return 0;
}